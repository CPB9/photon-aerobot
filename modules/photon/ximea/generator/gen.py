import re

ModuleDef = """module ximea

type xiTypeInteger = varint;
type xiTypeFloat = f32;
type xiTypeBoolean = bool;
type xiTypeCommand = ;
type xiTypeString = &[char; 512];
"""

CTypes = """
enum CameraState {
    Off,
    On,
    Img,
}

struct Camera {
    state: CameraState,
    basic: Basic    
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


file_enums = open("enums.txt")
file_enumdefs = open("enumdefs.txt")
file_params = open("params.txt")

class Param:
    pass

class Enum:
    pass

ps = {}
types = {}

for line in file_params:
    ns = line.split('"')
    p = Param()
    p.name = ns[1]
    p.type = ns[3]
    p.comment = ns[4][ns[4].find('#')+1:-1]
    ps[p.name] = p
    types[p.type] = ''

for line in file_enums:
    e = Enum()
    e.name = line.split('"')[1]

    s = line.find(':') + 1
    e.type = line[s : line.find(',', s)]
    e.comment = line[line.find('#'):-1]
    ps[e.name].enum = e.type

decode = open('ximea_.decode', 'w+')

decode.write(ModuleDef)
decode.write('\n')

decode.write('struct Fields {\n')
for key, p in ps.items():
    decode.write('    ///{}\n'.format(p.comment))
    decode.write('    {}: {},\n'.format(p.name, p.type if p.type != 'xiTypeEnum' else p.enum))
decode.write('}\n')

decode.write('\n')
decode.write(CTypes)
decode.write('\n')

decode.write('component {\n')
decode.write(Vars)
decode.write('\n')
decode.write('    commands {\n')
for key, p in ps.items():
    decode.write('        ///{}\n'.format(p.comment))
    decode.write('        fn set_{}(cam: CameraItem, val: {})\n'.format(p.name, p.type if p.type != 'xiTypeEnum' else p.enum))
decode.write('    }\n')

decode.write(Impl)
decode.write('\n')
decode.write('')


decode.close()


cpp = open('ximea_.cpp', 'w+')
for key, p in ps.items():
    cmd_str = 'PhotonError PhotonXimea_ExecCmd_Set_{0}(PhotonXimeaCameraItem cam, PhotonXimeaxiType{1} val) {{ return PhotonXimea_Send_Integer(cam, \"{0}\", val); }}\n'
    if p.type == 'xiTypeInteger':
        cpp.write(cmd_str.format(p.name, p.type))
    elif p.type == 'xiTypeFloat':
        cpp.write(cmd_str.format(p.name, p.type, 'Float'))
    elif p.type == 'xiTypeBoolean':
        cpp.write(cmd_str.format(p.name, p.type, 'Bool'))
    elif p.type == 'xiTypeCommand':
        cpp.write(cmd_str.format(p.name, p.type, 'Integer'))
    elif p.type == 'xiTypeString':
        cpp.write(cmd_str.format(p.name, p.type, 'String'))
    elif p.type == 'xiTypeEnum':
        cpp.write(cmd_str.format(p.name, p.type, 'String'))

cpp.close()
