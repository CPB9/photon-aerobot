import xml.etree.ElementTree as ET

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
            self.add_status(Status(len(self._statuses), 0, "false", s))


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
        for s in self._module._structs:
            buffer += "        {},\n".format(s.generate_parameter())
        buffer += "    }\n\n"

        buffer += "    statuses {\n"
        for s in self._module._statuses:
            buffer += "        {},\n".format(s.generate())
        buffer += "    }\n\n"

        buffer += "    commands {\n"
        buffer += "        fn setParam(name: [i8, 16], value: u32) -> u32\n"
        buffer += "    }\n"

        buffer += "}\n"

        return buffer


class CodeGenerator:
    def __init__(self, module):
        self._module = module

    def generate(self):
        buffer = "PhotonError Photon{}_".format(self._module._name)
        return buffer


class ModuleGenerator:
    def __init__(self, module):
        self.__module__ = module

    def generate(self):
        pass


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
#    write_begin_component()
#    write_begin_parameters()
#    for param in parameters:
#        write_parameter("_{}".format(param), param)
#    write_end_parameters()

#    write_begin_statuses()
#    status_counter = 0
#    for param in parameters:
#        write_status(status_counter, 0, "false", "_{}".format(param))
#        status_counter += 1
#    write_end_statuses()

#    write_commands()

#    write_end_component()

if __name__ == "__main__":
    module = parse_px4_params_file("parameters.xml")
    module.finalize()

    decode_gen = DecodeGenerator(module)
    print(decode_gen.generate())

    code_gen = CodeGenerator(module)
    print(code_gen.generate())
