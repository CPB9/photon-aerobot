import xml.etree.ElementTree as ET
import os
import shutil

TYPES_MAP = {
        "INT32" : "i32",
        "UINT32" : "u32",
        "FLOAT" : "f32"
}


class Module:
    def __init__(self, name):
        self._name = name
        self._structs = []
        self._statuses = []

    def add_struct(self, struct):
        self._structs.append(struct)

    def add_status(self, status):
        self._statuses.append(status)

    def finalize(self):
        # generate statuses
        for s in self._structs:
            self.add_status(Status(s._name, 0, "false", s))


class Struct:
    def __init__(self, name):
        self._name = name
        self._members = []

    def add_member(self, member):
        self._members.append(member)

    def generate(self):
        buffer = "struct {} {{\n".format(self._name)
        for m in self._members:
            buffer += "    {},\n".format(m.generate())
        buffer += "}\n"
        return buffer

    def generate_parameter(self):
        return "_{}: {}".format(self._name, self._name)


class StructMember:
    def __init__(self, name, type, default, short_desc, long_desc, min, max, unit):
        self._name = name
        self._type = type
        self._default = default
        self._short_desc = short_desc
        self._long_desc = long_desc
        self._min = min
        self._max = max
        self._unit = unit

    def generate(self):
        if not self._type in TYPES_MAP:
            raise

        decode_type = TYPES_MAP[self._type]

        return "{}: {}".format(self._name, decode_type)


class Status:
    def __init__(self, id, priority, enabled, struct):
        self._id = id
        self._priority = priority
        self._enabled = enabled
        self._struct = struct

    def generate(self):
        return "[{}, {}, {}]: {}".format(self._id, self._priority, self._enabled, "_{}".format(self._struct._name))


class DecodeGenerator:
    def __init__(self, module):
        self._module = module

    def generate(self):
        buffer = "module {}\n\n".format(self._module._name)
        for s in self._module._structs:
            buffer += s.generate()
            buffer += "\n"

        buffer += "component {\n"
        buffer += "    parameters {\n"
        buffer += "        inited: bool,\n"
        for s in self._module._structs:
            buffer += "        {},\n".format(s.generate_parameter())
        buffer += "    }\n\n"

        buffer += "    impl {\n"
        buffer += "        fn init()\n"
        buffer += "    }\n\n"

        buffer += "    statuses {\n"
        for s in self._module._statuses:
            buffer += "        {},\n".format(s.generate())
        buffer += "    }\n\n"

        buffer += "    commands {\n"
        buffer += "        fn setParam(name: [i8; 16], value: u32)\n"
        buffer += "    }\n"

        buffer += "}\n"

        return buffer


class CodeGenerator:
    def __init__(self, module):
        self._module = module

    def generate(self):
        lowerModuleName = self._module._name
        moduleName = lowerModuleName[0].upper() + lowerModuleName[1:]
        mainStruct = "_photon{}".format(moduleName)

        lower_module_name = self._module._name.lower()
        buffer = "#include \"photon/{}/{}.Component.h\"\n\n".format(lower_module_name, moduleName)
        buffer += "void Photon{}_Init() {{\n".format(moduleName)
        buffer += "    _photon{}.inited = false;\n".format(moduleName)
        buffer += "}\n\n"

        buffer += "PhotonError Photon{}_SetParam(int8_t name[16], uint32_t value) {{\n".format(moduleName)
        for s in self._module._structs:
            for p in s._members:
                code_type = ""
                if p._type == "INT32":
                    code_type = "int32_t"
                elif p._type == "UINT32":
                    code_type = "uint32_t"
                elif p._type == "FLOAT":
                    code_type = "float"
                else:
                    raise

                buffer += "    if(strcmp((const char*)name, \"{}\")) {{\n".format(p._name)
                buffer += "        {}._{}.{} = *({}*)&value;\n".format(mainStruct, s._name, p._name, code_type)
                buffer += "        if(_photon{}.inited)\n            PhotonTm_RequestStatusOnce(PHOTON_{}_COMPONENT_ID, PHOTON_{}_STATUS_{}_ID);\n".format(moduleName, moduleName.upper(), moduleName.upper(), s._name.upper())
                buffer += "        return PhotonError_Ok;\n"
                buffer += "    }\n"

        buffer += "    return PhotonError_InvalidValue;\n"
        buffer += "}\n\n"

        return buffer


class ModuleGenerator:
    def __init__(self, module):
        self._module = module

    def generate(self):
        buffer = "name = \"{}\"\n".format(self._module._name)
        buffer += "decode = \"{}.decode\"\n".format(self._module._name.lower())
        buffer += "dest = \"photon/{}\"\n".format(self._module._name)
        buffer += "id = 20\n"

        lowerModuleName = self._module._name
        moduleName = lowerModuleName[0].upper() + lowerModuleName[1:]

        buffer += "sources = [\"{}.c\"]".format(moduleName)
        return buffer


def normalize_struct_name(src_name):
    group_name = src_name.replace(" ", "_")

    if group_name[0].islower():
        group_name = group_name[0].upper() + group_name[1:]

    return group_name


def parse_px4_params_file(filename):
    tree = ET.parse(filename)
    module = Module("px4_autogen")

    for group in tree.findall("group"):
        group_name = normalize_struct_name(group.get("name"))
        struct = Struct(group_name)
        for param in group.findall("parameter"):
            default = param.get("default")
            name = param.get("name")
            type = param.get("type")
            short_desc = None
            long_desc = None
            unit = None
            min = None
            max = None

            short_desc_field = param.find("short_desc")
            long_desc_field = param.find("long_desc")
            unit_field = param.find("unit")
            min_field = param.find("min")
            max_field = param.find("max")

            if short_desc_field is not None:
                short_desc = short_desc_field.text

            if long_desc_field is not None:
                long_desc = long_desc_field.text

            if unit_field is not None:
                unit = unit_field.text

            if min_field is not None:
                min = float(min_field.text)

            if max_field is not None:
                max = float(max_field.text)

            struct.add_member(StructMember(name, type, default, short_desc, long_desc, min, max, unit))

        module.add_struct(struct)

    return module


def ensure_dir(file_path):
    directory = os.path.dirname(file_path)
    if not os.path.exists(directory):
        os.makedirs(directory)


def generate_module(params_file, out_dir):
    module = parse_px4_params_file("parameters.xml")
    module.finalize()

    decode_gen = DecodeGenerator(module)
    code_gen = CodeGenerator(module)
    module_gen = ModuleGenerator(module)

    module_name = module._name
    dir_name = out_dir + "//" + module_name
    if os.path.isdir(dir_name):
        os.removedirs(shutil.rmtree(dir_name))

    os.makedirs(dir_name)

    with open(dir_name + "//{}.decode".format(module_name), "w") as decode:
        decode.write(decode_gen.generate())

    with open(dir_name + "//mod.toml", "w") as mod:
        mod.write(module_gen.generate())

    with open(dir_name + "//{}.c".format(module_name[0].upper() + module_name[1:]), "w") as code:
        code.write(code_gen.generate())

if __name__ == "__main__":
    generate_module("parameters.xml", os.path.dirname(os.path.abspath(__file__)))