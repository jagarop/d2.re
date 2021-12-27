import os
import json
import shutil


path = os.path.abspath(os.path.dirname(__file__))

base = idaapi.get_imagebase()
end_ea = idc.get_segm_end(0)

shutil.rmtree(os.path.join(path, 'gen'), ignore_errors=True)
os.makedirs(os.path.join(path, 'gen'))

def offset(item):
    address = ida_search.find_binary(0, end_ea, str(item['pattern']), 16, idc.SEARCH_DOWN)
    if address == idaapi.BADADDR:
        return
    if item['type'] == 'operand':
        address = idc.get_operand_value(address, item['operand'])
    #idk have to do this for function table..
    elif item['type'] == 'other':
        address = base + idc.get_operand_value(address, item['operand'])
    #sig points to an absolute addr usually start of func or something unnecassary code but making it explict what is happening
    elif item['type'] == 'absolute':
        None
    offset = address - base
    return offset


with open(os.path.join(path, 'gen', 'D2Structs.h'), "w") as outfile:
    outfile.write("#include <cstdint>\n\n")
    with open(os.path.join(path, 'IDA.h'), "r") as infile:
        outfile.write(infile.read())

with open(os.path.join(path, 'data', 'functions.json')) as f:
    functions = json.load(f)
with open(os.path.join(path, 'data', 'variables.json')) as f:
    variables = json.load(f)

with open(os.path.join(path, 'gen', 'D2Ptrs.h'), "w") as outfile:
    outfile.write("#include <cstdint>\n")
    outfile.write("#include <wtypes.h>\n")
    outfile.write("#include \"D2Structs.h\"\n\n")
    outfile.write("extern uint64_t BaseAddress;\n\n")
    outfile.write("//Variables: \n")
    for item in variables:
        if 'note' in item:
            outfile.write("extern {}* {}; //\n".format(item['ctype'],item['name'],item['note']))
        else:
            outfile.write("extern {}* {};\n".format(item['ctype'],item['name']))
    outfile.write("\n")
    outfile.write("//Functions: \n")
    for item in functions:
        if 'note' in item:
            outfile.write("//{}\n".format(item['note']))
        outfile.write("typedef {} {} {}_t {};\n".format(item['ret'],item['conv'],item['name'],item['args']))
        outfile.write("extern {}_t* {};\n\n".format(item['name'],item['name']))

with open(os.path.join(path, 'gen', 'D2Ptrs.cpp'), "w") as outfile:
    outfile.write("#include \"D2Ptrs.h\"\n\n")
    outfile.write("uint64_t BaseAddress = (uint64_t)GetModuleHandle(NULL);\n\n")
    outfile.write("//Variables: \n")
    for item in variables:
        outfile.write("{}* {} = ({}*)(BaseAddress + static_cast<uint64_t>({}));\n".format(item['ctype'],item['name'],item['ctype'],hex(offset(item))[:-1]))
    outfile.write("\n")
    outfile.write("//Functions: \n")
    for item in functions:
        outfile.write("{}_t* {} = ({}_t*)(BaseAddress + static_cast<uint64_t>({}));\n".format(item['name'],item['name'],item['name'],hex(offset(item))[:-1]))

print('Done')