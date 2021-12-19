
import os

print("Loading Header File: IDA.h")
idaapi.idc_parse_types(os.path.join(os.path.abspath(os.path.dirname(__file__)), "IDA.h"), idc.PT_FILE)

base = idaapi.get_imagebase()
end_ea = idc.get_segm_end(0)


functions = [
{ 'ctype': 'int64_t __fastcall STATES_CheckState(D2UnitStrc* pUnit, uint32_t nState)',  'name': 'STATES_CheckState', 'pattern': '4C 63 CA 48 85 C9 74 53 44 8B 01 45 85 C0 74 0C 41 83 E8 01 74 06 41 83 F8 02 75 3F ', 'type': 'absoulte' }
]

variables = [
{ 'ctype': 'D2UnitHashTableStrc', 'name': 'gpClientSideUnitHashTable', 'pattern': '4C 8D 05 ? ? ? ? 48 63 03 8B CA 48 C1 E0 07 83 E1 7F 48 03 C8', 'operand': 1, 'type': 'operand' },
]

def BuildEnum(items):
    for item in items:
        address = ida_search.find_binary(0, end_ea, item['pattern'], 16, idc.SEARCH_DOWN)
        if item['type'] == 'operand':
            address = idc.get_operand_value(address, item['operand'])
        if item['type'] == 'absolute':
            None
        offset = address - base
        print("\t%-20s = %-20s //%-20s" % (item['name'], hex(offset)[:-1], hex(address)[:-1] ))
        set_name(address, item['name'])
        idc.SetType(address, item['ctype'])
        


print('enum class Functions : uint64_t {')
BuildEnum(functions)
print("}")

print('enum class Variables : uint64_t {')
BuildEnum(variables)
print("}")
print('Done')
