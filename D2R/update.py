#tested on ida 7.6.210427 and python 2.7.15

import os
import json


path = os.path.abspath(os.path.dirname(__file__))

base = idaapi.get_imagebase()
end_ea = idc.get_segm_end(0)

def Parse():
    header_h = ida_kernwin.ask_file(0, "*.h", "Select IDA.H file")
    idaapi.idc_parse_types(header_h, idc.PT_FILE)

def BuildFunctionEnum(items):
    for item in items:
        address = ida_search.find_binary(0, end_ea, str(item['pattern']), 16, idc.SEARCH_DOWN)
        if address == idaapi.BADADDR:
            print("\t%-60s = %-20s //%-20s - Sig Broke" % (item['name'], hex(address), hex(address) ))
            continue
        if item['type'] == 'operand':
            address = idc.get_operand_value(address, item['operand'])
        #idk have to do this for function table..
        elif item['type'] == 'other':
            address = base + idc.get_operand_value(address, item['operand'])
        #sig points to an absolute addr usually start of func or something unnecassary code but making it explict what is happening
        elif item['type'] == 'absolute':
            None
        offset = address - base
        if 'summary' in item:
            print("\t%-60s = %-20s //%-20s - %s" % (item['name'], hex(offset), hex(address), item['summary'] ))
            set_cmt(address, str(item['summary']), False)
            set_func_cmt(address, str(item['summary']), False)
        else:
            print("\t%-60s = %-20s //%-20s" % (item['name'], hex(offset), hex(address) ))
        #set_name(address, str(item['name']))
        #idc.SetType(address, "{} {} {}{}".format(item['ret'], item['conv'], item['name'], item['args']))

def BuildVariableEnum(items):
    for item in items:
        address = ida_search.find_binary(0, end_ea, str(item['pattern']), 16, idc.SEARCH_DOWN)
        address = address + item['offset'] #Patternaddress + offset for SigMaker Default should be 0
        if address == idaapi.BADADDR:
            print("\t%-60s = %-20s //%-20s - Sig Broke" % (item['name'], hex(address), hex(address) ))
            continue
        if item['type'] == 'operand':
            address = idc.get_operand_value(address, item['operand'])
        #idk have to do this for function table..
        elif item['type'] == 'other':
            address = base + idc.get_operand_value(address, item['operand'])
        #sig points to an absolute addr usually start of func or something unnecassary code but making it explict what is happening
        elif item['type'] == 'absolute':
            None
        offset = address - base
        if 'summary' in item:
            print("\t%-60s = %-20s //%-20s - %s" % (item['name'], hex(offset), hex(address), item['summary'] ))
            set_cmt(address, item['summary'], False)
            set_func_cmt(address, item['summary'], False)
        else:
            print("\t%-60s = %-20s //%-20s" % (item['name'], hex(offset), hex(address) ))
        set_name(address, str(item['name']))
        idc.SetType(address, str(item['ctype']))

#Renames all the functions in the D2GS_S2C_FunctionTable
# to D2GS_S2C_0xXX_PacketHandler and D2GS_S2C_0xXX_PacketHandlerEx
def RenameD2GSFunctions():
    item = [x for x in variables if x['name'] == 'g_D2GS_S2C_FunctionTable'][0]
    address = ida_search.find_binary(0, end_ea, str(item['pattern']), 16, idc.SEARCH_DOWN)
    if address == idaapi.BADADDR:
        return
    address = base + idc.get_operand_value(address, item['operand'])
    print("Renaming D2GS_S2C Functions: %-16s" % ( hex(address)[:-1] ))
    for i in range(0xAE):
        func = get_qword(address + (i * 0x18))
        funcex = get_qword(address + (i * 0x18) + 0x10)
        if func != 0x0:
            set_name(func, 'D2GS_S2C_0x{:02X}_PacketHandler'.format(i))
            idc.SetType(func, '__int64 __fastcall  D2GS_S2C_0x{:02X}_PacketHandler(void* pPacket)'.format(i))
        set_name(address + (i * 0x18) + 0x8 , 'D2GS_S2C_0x{:02X}_PacketSize'.format(i))
        idc.SetType(address + (i * 0x18) + 0x8 , 'int64_t')
        if funcex != 0x0:
            set_name(funcex, 'D2GS_S2C_0x{:02X}_PacketHandlerEx'.format(i))
            idc.SetType(funcex, '__int64 __fastcall  D2GS_S2C_0x{:02X}_PacketHandlerEx(D2UnitStrc* pUnit, void* pPacket)'.format(i))


version = ida_search.find_binary(0, end_ea, '48 8D 15 ? ? ? ? 48 8B C8 4C 8B 00', 16, idc.SEARCH_DOWN)
if version == idaapi.BADADDR:
    version = 'Unknown'
else:
    version = idc.get_strlit_contents(idc.get_operand_value(version, 1))
print('//D2R Version - %s' % ( version ))

functions = []
variables = []
with open(os.path.join(path, 'data', 'functions.json')) as f:
    functions = functions + json.load(f)

if os.path.isfile(os.path.join(path, 'data', '_functions.json')):
    with open(os.path.join(path, 'data', '_functions.json')) as f:
        functions = functions + json.load(f)

with open(os.path.join(path, 'data', 'variables.json')) as f:
    variables = variables + json.load(f)

if os.path.isfile(os.path.join(path, 'data', '_variables.json')):
    with open(os.path.join(path, 'data', '_variables.json')) as f:
        variables = variables + json.load(f)


print('Load IDA.H file for Parsing')
Parse()
print('IDA.H Loaded')

print('enum class Functions : uint64_t {')
BuildFunctionEnum(functions)
print('}')

print('enum class Variables : uint64_t {')
BuildVariableEnum(variables)
print('}')

RenameD2GSFunctions()
print('Done')
