import xml.etree.ElementTree as ET

TYPES_MAP = {
        "INT32" : "i32",
        "UINT32" : "u32",
        "FLOAT" : "f32"
}

project_name = "px4_gen"

output_decode = ""
output_с = ""

def write_decode_string(text):
    global output_decode
    output_decode += text

def write_module(name):
    write_decode_string("module {}\n\n".format(name))

def write_begin_struct(name):
    write_decode_string("struct {} {{\n".format(name))

def write_end_struct():
    write_decode_string("}\n\n")

def write_struct_field(name, type):
    write_decode_string("    {}: {},\n".format(name, type))

def write_begin_component():
    write_decode_string("component {\n")

def write_end_component():
    write_decode_string("}\n")

def write_begin_parameters():
    write_decode_string("    parameters { \n")

def write_end_parameters():
    write_decode_string("    }\n\n")

def write_parameter(name, type):
    write_decode_string("        {}: {},\n".format(name, type))

def write_begin_statuses():
    write_decode_string("    statuses {\n")

def write_end_statuses():
    write_decode_string("    }\n\n")

def write_status(msgid, priority, enabled, name):
    write_decode_string("        [{}, {}, {}]: {}, \n".format(msgid, priority, enabled, name))

def write_commands():
    write_decode_string("    commands {\n        fn setParam(name: [i8, 16], value: u32) -> u32\n    }\n")

params_groups = []

def parse_px4_params_file(filename):
    tree = ET.parse(filename)
    write_module("px4_gen")
    parameters = []
    for group in tree.findall("group"):
        group_name = group.get("name")
        group_name = group_name.replace(" ", "_")

        if group_name[0].islower():
            group_name = group_name[0].upper() + group_name[1:]

        write_begin_struct(group_name)

        for param in group.findall("parameter"):
            default = param.get("default")
            name = param.get("name")
            type = param.get("type")

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

            if not type in TYPES_MAP:
                raise

            decode_type = TYPES_MAP[type]

            write_struct_field(name, decode_type)

        write_end_struct()
        parameters.append(group_name)

    write_begin_component()
    write_begin_parameters()
    for param in parameters:
        write_parameter("_{}".format(param), param)
    write_end_parameters()

    write_begin_statuses()
    status_counter = 0
    for param in parameters:
        write_status(status_counter, 0, "false", "_{}".format(param))
        status_counter += 1
    write_end_statuses()

    write_commands()

    write_end_component()

if __name__ == "__main__":
    parse_px4_params_file("parameters.xml")

    print(output_decode)