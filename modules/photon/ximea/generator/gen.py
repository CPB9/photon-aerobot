import re
import collections

ModuleDef = """module ximea

type Integer = varint;
type Enum = varint;
type Float = f32;
type Boolean = bool;
type Command = varint;
type String = &[char; 512];
"""

CTypes = """
enum CameraState {
    Off,
    On,
    Img,
}

struct Camera {
    state: CameraState,
    basic: Fields,
}

enum CameraItem {
    Front         = 1,
    BiFrontLeft   = 2,
    BiFrontRight  = 3,
    BiBottomLeft  = 4,
    BiBottomRight = 5,
}
"""

Vars = """
    variables {
        front  : Camera,
        bi_front_left: Camera,
        bi_front_right: Camera,
        bi_bottom_left: Camera,
        bi_bottom_right: Camera,
    }

    statuses {
        [state,             1, true]: { front.state, bi_front_left.state, bi_front_right.state, bi_bottom_left.state, bi_bottom_right.state},
        [state_front,       1, true]: { front },
        [state_front_left,  1, true]: { bi_front_left   },
        [state_front_right, 1, true]: { bi_front_right  },
        [state_bottom_left, 1, true]: { bi_bottom_left  },
        [state_bottom_right,1, true]: { bi_bottom_right },
    }
"""

Impl = """
    impl {
        fn init()
        fn tick()
    }
"""

Cmds = """
        fn updateInfo(cam: CameraItem)
        fn open(cam: CameraItem)
        fn close(cam: CameraItem)
        fn start(cam: CameraItem, number: varuint, timeout: varuint)
        fn stop(cam: CameraItem)
"""


file_enums = open("enums.txt")
file_params = open("params.txt")

class Param:
    pass

class Enum:
    pass

class EnumVal:
    pass

def get_enumdefs():
    content = ''
    with open('enumdefs.txt', 'r') as myfile:
        content=myfile.read()

    enums = {}
    enum_strs = re.findall(r'#[^}]*}', content, re.MULTILINE|re.DOTALL)
    for enum_str in enum_strs:
        enum_items = enum_str.split('\n')
        e = Enum()
        e.comment = enum_items[0][2:-1]
        e.name = enum_items[1].split(' ')[0]
        e.vals = []
        e.min_value = None
        for val_str in enum_items[2:-1]:
            ev = EnumVal()
            ev.name = val_str.split('\"')[1]
            ev.value = val_str.replace(')', '(').split('(')[1]
            ev.comment = val_str.split('#')[1]
            e.vals.append(ev)
            if e.min_value == None or e.min_value > ev.value:
                e.min_value = ev.value
                e.min_name = ev.name
        enums[e.name] = e
    return enums

enums = get_enumdefs()
ps = {}
types = {'xiTypeInteger': 'Integer', 'xiTypeFloat': 'Float', 'xiTypeBoolean': 'Boolean', 'xiTypeCommand': 'Command', 'xiTypeString': 'String', 'xiTypeEnum': 'Enum'}

for line in file_params:
    ns = line.split('"')
    p = Param()
    p.name = ns[1]
    p.type = ns[3]
    p.comment = ns[4][ns[4].find('#')+1:-1]
    ps[p.name] = p
ps = collections.OrderedDict(sorted(ps.items()))

for line in file_enums:
    e = Enum()
    e.name = line.split('"')[1]

    s = line.find(':') + 1
    e.type = line[s : line.find(',', s)]
    e.comment = line[line.find('#'):-1]
    ps[e.name].enum = e.type.strip()

decode = open('ximea.decode', 'w+')
decode.write(ModuleDef)
decode.write('\n')

for key, value in enums.items():
    decode.write('enum {} {{\n'.format(value.name))
    for j in value.vals:
        decode.write('    {} = {},\n'.format(j.name, j.value))
    decode.write('}\n\n')

decode.write('struct Fields {\n')
for key, p in ps.items():
    if p.type != 'xiTypeString':
        decode.write('    ///{}\n'.format(p.comment))
        decode.write('    {}: {},\n'.format(p.name, types[p.type] if p.type != 'xiTypeEnum' else p.enum))
decode.write('}\n')

decode.write('\n')
decode.write(CTypes)
decode.write('\n')

decode.write('component {\n')
decode.write(Vars)
decode.write('\n')
decode.write('    commands {')
decode.write(Cmds)
decode.write('\n')
for key, p in ps.items():
    decode.write('        ///{}\n'.format(p.comment))
    if p.type != 'xiTypeString':
        decode.write('        fn set_{}(cam: CameraItem, val: {})\n'.format(p.name, types[p.type] if p.type != 'xiTypeEnum' else p.enum))
decode.write('    }\n')

decode.write(Impl)
decode.write('}\n')
decode.write('')
decode.close()


cpp = open('ximea.cpp', 'w+')

cpp.write('void ini_enums(PhotonXimeaCamera* cam)\n{\n')
for key, p in ps.items():
    if p.type == 'xiTypeEnum':
        cpp.write('    cam->basic.{0} = PhotonXimea{1}_{2};\n'.format(p.name, p.enum, enums[p.enum].min_name))
cpp.write('}\n')

cpp.write('void parse_tm()\n{\n')
for key, p in ps.items():
    if p.type != 'xiTypeString':
        cpp.write('    if (strcmp(name, "{0}") == 0) return Setter{1}(value, &p->basic.{0});\n'.format(p.name, types[p.type]))
cpp.write('}\n')


for key, p in ps.items():
    cmd_str = 'PhotonError PhotonXimea_ExecCmd_Set_{0}(PhotonXimeaCameraItem cam, PhotonXimea{1} val) {{ return PhotonXimea_Send_{2}(cam, \"{0}\", val); }}\n'
    if p.type == 'xiTypeInteger':
        cpp.write(cmd_str.format(p.name, types[p.type], types[p.type]))
    elif p.type == 'xiTypeFloat':
        cpp.write(cmd_str.format(p.name, types[p.type], types[p.type]))
    elif p.type == 'xiTypeBoolean':
        cpp.write(cmd_str.format(p.name, types[p.type], types[p.type]))
    elif p.type == 'xiTypeCommand':
        cpp.write(cmd_str.format(p.name, types[p.type], types[p.type]))
#    elif p.type == 'xiTypeString':
#        cpp.write(cmd_str.format(p.name, types[p.type], types[p.type]))
    elif p.type == 'xiTypeEnum':
        cpp.write(cmd_str.format(p.name, p.enum, types[p.type]))

cpp.close()


cpp = open('stbus.cpp', 'w+')

for key, p in ps.items():
    cmd_str = 'PhotonError PhotonXimea_ExecCmd_Set_{0}(PhotonXimeaCameraItem cam, PhotonXimea{1} val) {{ return PhotonError_Ok; }}\n'
    if p.type == 'xiTypeInteger':
        cpp.write(cmd_str.format(p.name, types[p.type]))
    elif p.type == 'xiTypeFloat':
        cpp.write(cmd_str.format(p.name, types[p.type]))
    elif p.type == 'xiTypeBoolean':
        cpp.write(cmd_str.format(p.name, types[p.type]))
    elif p.type == 'xiTypeCommand':
        cpp.write(cmd_str.format(p.name, types[p.type]))
#    elif p.type == 'xiTypeString':
#        cpp.write(cmd_str.format(p.name, types[p.type]))
    elif p.type == 'xiTypeEnum':
        cpp.write(cmd_str.format(p.name, p.enum))

cpp.close()
