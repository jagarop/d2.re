#tested on ida 7.6.210427 and python 2.7.15

import os
import json
from collections import OrderedDict

path = os.path.abspath(os.path.dirname(__file__))

base = idaapi.get_imagebase()
end_ea = idc.get_segm_end(0)

countFunctions = 0
countVariables = 0

def Parse():
    header_h = ida_kernwin.ask_file(0, "*.h", "Select IDA.H file")
    idaapi.idc_parse_types(header_h, idc.PT_FILE)

def write(outfile, data):
    data = sorted(data, key=lambda x: x['name'])
    outfile.write("[\n")
    if len(data) > 1:
        for d in data[:-1]:
            outfile.write("{},\n".format(json.dumps(d)))
    if len(data) > 0:
        outfile.write("{}\n".format(json.dumps(data[-1])))
    outfile.write("]\n")
    return

def BuildEnum(items):
    global countFunctions
    global countVariables
    for item in items:
        address = ida_search.find_binary(0, end_ea, str(item['pattern']), 16, idc.SEARCH_DOWN)
        if address == idaapi.BADADDR:
            print("\t%-60s = %-20s //%-20s - Sig Broke" % (item['name'], hex(address).rstrip("L"), hex(address).rstrip("L") ))
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
            print("\t%-60s = %-20s //%-20s - %s" % (item['name'], hex(offset).rstrip("L"), hex(address).rstrip("L"), item['summary'].replace('\n', ' ') ))
            set_cmt(address, str(item['summary']), False)
            set_func_cmt(address, str(item['summary']), False)
        else:
            print("\t%-60s = %-20s //%-20s" % (item['name'], hex(offset).rstrip("L"), hex(address).rstrip("L") ))
        #remove old variable name if exists anywhere
        set_name(get_name_ea_simple(str(item['name'])), '')
        set_name(address, str(item['name']))
        if 'ctype' in item:
            countVariables = countVariables + 1
            idc.SetType(address, str(item['ctype']))
        else:
            countFunctions = countFunctions + 1
            idc.SetType(address, "{} {} {}{}".format(item['ret'], item['conv'], item['name'], item['args']))

#Renames all the functions in the D2GS_S2C_FunctionTable
# to D2GS_S2C_0xXX_PacketHandler and D2GS_S2C_0xXX_PacketHandlerEx
def RenameD2GSS2CFunctions(address, i):
    global countFunctions
    func = get_qword(address + (i * 0x18))
    funcex = get_qword(address + (i * 0x18) + 0x10)
    if func != 0x0:
        countFunctions = countFunctions + 1
        name = 'D2GS_S2C_0x{:02X}_PacketHandler'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(func, name)
        idc.SetType(func, '__int64 __fastcall  {}(void* pPacket)'.format(name))
    set_name(address + (i * 0x18) + 0x8 , 'D2GS_S2C_0x{:02X}_PacketSize'.format(i))
    idc.SetType(address + (i * 0x18) + 0x8 , 'int64_t')
    if funcex != 0x0:
        countFunctions = countFunctions + 1
        name = 'D2GS_S2C_0x{:02X}_PacketHandlerEx'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(funcex, name)
        idc.SetType(funcex, '__int64 __fastcall  {}(D2UnitStrc* pUnit, void* pPacket)'.format(name))

def RenameD2GSC2SFunctions(address, i):
    global countFunctions
    func = get_qword(address + (i * 0x8))
    if func != 0x0:
        countFunctions = countFunctions + 1
        name = 'D2GS_C2S_0x{:02X}_PacketHandler'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(func, name)
        idc.SetType(func, '__int64 __fastcall  {}(D2GameStrc* pGame, D2UnitStrc* pUnit, void* pPacket, int nPacketSize)'.format(name))

#todo find a way to resuse this..
def RenameSkillsSrvStFuncFunctions(address, i):
    global countFunctions
    func = get_qword(address + (i * 0x8))
    if func != 0x0:
        countFunctions = countFunctions + 1
        name = 'SKILL_ServerStart_{}'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(func, name)
        idc.SetType(func, '__int64 __fastcall  {}(D2GameStrc* pGame, D2UnitStrc* pUnit, int nSkill, int nSkillLevel)'.format(name))

def RenameSkillsSrvDoFuncFunctions(address, i):
    global countFunctions
    func = get_qword(address + (i * 0x8))
    if func != 0x0:
        countFunctions = countFunctions + 1
        name = 'SKILL_ServerDo_{}'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(func, name)
        idc.SetType(func, '__int64 __fastcall  {}(D2GameStrc* pGame, D2UnitStrc* pUnit, int nSkill, int nSkillLevel)'.format(name))

def RenameSkillsCltStFuncFunctions(address, i):
    global countFunctions
    func = get_qword(address + (i * 0x8))
    if func != 0x0:
        countFunctions = countFunctions + 1
        name = 'SKILL_ClientStart_{}'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(func, name)
        idc.SetType(func, '__int64 __fastcall  {}(D2GameStrc* pGame, D2UnitStrc* pUnit, int nSkill, int nSkillLevel)'.format(name))

def RenameSkillsCltDoFuncFunctions(address, i):
    global countFunctions
    func = get_qword(address + (i * 0x8))
    if func != 0x0:
        countFunctions = countFunctions + 1
        name = 'SKILL_ClientDo_{}'.format(i)
        set_name(get_name_ea_simple(name), '')
        set_name(func, name)
        idc.SetType(func, '__int64 __fastcall  {}(D2GameStrc* pGame, D2UnitStrc* pUnit, int nSkill, int nSkillLevel)'.format(name))

def RenameTableFunctions(name, size, func):
    item = [x for x in variables if x['name'] == name][0]
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
    print("Renaming %s Functions: %-16s" % ( name, hex(address).rstrip("L") ))
    for i in range(size):
        func(address, i)


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

if os.path.exists(os.path.join(path, 'data', '_functions')) and os.path.isfile(os.path.join(path, 'data', '_functions.json')):
    with open(os.path.join(path, 'data', '_functions.json')) as f:
        functions = functions + json.load(f)

with open(os.path.join(path, 'data', 'variables.json')) as f:
    variables = variables + json.load(f)

if os.path.exists(os.path.join(path, 'data', '_variables')) and os.path.isfile(os.path.join(path, 'data', '_variables.json')):
    with open(os.path.join(path, 'data', '_variables.json')) as f:
        variables = variables + json.load(f)

functions = sorted(functions, key=lambda x: x['name'])
variables = sorted(variables, key=lambda x: x['name'])

#sort files
for filename in ['_functions.json', 'functions.json', '_variables.json', 'variables.json']:
    if os.path.exists(os.path.join(path, 'data', filename)) and os.path.isfile(os.path.join(path, 'data', filename)):
        with open(os.path.join(path, 'data', filename)) as f:
            data = json.load(f, object_pairs_hook=OrderedDict)
        with open(os.path.join(path, 'data', filename), 'w') as outfile:
            write(outfile, data)


#uncomment if u want ida to load IDA.H
#print('Load IDA.H file for Parsing')
#Parse()
#print('IDA.H Loaded')

print('enum class Functions : uint64_t {')
BuildEnum(functions)
print('}')

print('enum class Variables : uint64_t {')
BuildEnum(variables)
print('}')

RenameTableFunctions('g_D2GS_S2C_FunctionTable', 0xAE, RenameD2GSS2CFunctions)
RenameTableFunctions('g_D2GS_C2S_FunctionTable', 0x64, RenameD2GSC2SFunctions) # is this the right size?

RenameTableFunctions('g_SkillsSrvStFunc', 0x42, RenameSkillsSrvStFuncFunctions)
RenameTableFunctions('g_SkillsSrvDoFunc', 0x98, RenameSkillsSrvDoFuncFunctions)
RenameTableFunctions('g_SkillsCltStFunc', 0x35, RenameSkillsCltStFuncFunctions)
RenameTableFunctions('g_SkillsCltDoFunc', 0x60, RenameSkillsCltDoFuncFunctions)

print("Renamed {} Functions and {} Variables".format(countFunctions, countVariables))
print('Done')
