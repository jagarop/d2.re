
import os

print("Loading Header File: IDA.h")
idaapi.idc_parse_types(os.path.join(os.path.abspath(os.path.dirname(__file__)), "IDA.h"), idc.PT_FILE)

base = idaapi.get_imagebase()

functions = [
{ 'offset': 0x4dd60, 'name': 'D2CLIENT_QuitGame', 'ctype': 'void __fastcall D2CLIENT_QuitGame()' },
]

variables = [
{ 'offset': 0x3A5E70, 'name': 'pClientSideUnitHashTables', 'ctype': 'UnitHashTable pClientSideUnitHashTables' },
]

def BuildEnum(items):
    for item in items:
        set_name(base + item['offset'], item['name'])
        idc.SetType(base + item['offset'], item['ctype'])
        print('\t%-20s = %-20s //%-20s' % (item['name'], hex(item['offset']), hex(base + item['offset'])[:-1] ))

print('enum class Functions : uint32_t {')
BuildEnum(functions)
print("}")

print('enum class Variables : uint32_t {')
BuildEnum(variables)
print("}")
print('Done')