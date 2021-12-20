#import os

#print("Loading Header File: IDA.h")
#idaapi.idc_parse_types(os.path.join(os.path.abspath(os.path.dirname(__file__)), "IDA.h"), idc.PT_FILE)

base = idaapi.get_imagebase()
end_ea = idc.get_segm_end(0)


functions = [
{ 'ctype': '__int64 __fastcall  BITMANIP_Read(void* pBuffer, uint64_t nBits)', 'name': 'BITMANIP_Read', 'pattern': 'E8 ? ? ? ? FE C8 ', 'operand': 0, 'type': 'operand' },
{ 'ctype': 'void __fastcall BITMANIP_Write(void* pBuffer, uint32_t dwValue, uint64_t nBits)', 'name': 'BITMANIP_Write', 'pattern': '40 53 4D 8B D0 ', 'type': 'absoulte' },

{ 'ctype': '__int64* __fastcall DATATBLS_GetMagicAffixTxtRecord(uint16_t nIndex)', 'name': 'DATATBLS_GetMagicAffixTxtRecord', 'pattern': 'E8 ? ? ? ? 48 8B 3F 48 8B F0', 'operand': 0, 'type': 'operand' },
{ 'ctype': 'void __fastcall DATATBLS_LoadAllTxts()', 'name': 'DATATBLS_LoadAllTxts', 'pattern': '48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? ', 'type': 'absoulte' },
{ 'ctype': 'uint64_t DATATBLS_UnloadAllBins()', 'name': 'DATATBLS_UnloadAllBins', 'pattern': 'E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 44 8B EE ', 'operand': 0, 'type': 'operand' },
{ 'ctype': '__int64 __fastcall DATATBLS_UnloadBin(__int64 *a1)', 'name': 'DATATBLS_UnloadBin', 'pattern': 'E8 ? ? ? ? 48 B9 ? ? ? ? ? ? ? ? FF C5', 'operand': 0, 'type': 'operand' },

{ 'ctype': 'uint8_t __fastcall GAME_GetDifficulty()', 'name': 'GAME_GetDifficulty', 'pattern': 'E8 ? ? ? ? 0F B6 D0 83 EA 01 ', 'operand': 0, 'type': 'operand' },
{ 'ctype': '__int64 *__fastcall GAME_Loop(int *a1)', 'name': 'GAME_Loop', 'pattern': 'E8 ? ? ? ? E8 ? ? ? ? 48 8B D8 48 8B 88 ? ? ? ? ', 'operand': 0, 'type': 'operand' },
{ 'ctype': 'void __fastcall GAME_SaveAndExit()', 'name': 'GAME_SaveAndExit', 'pattern': '48 83 EC 28 83 3D ? ? ? ? ? 75 65 ', 'type': 'absoulte', 'note': 'set gpGAME_QuitEnum to 0x7 first.' },

{ 'ctype': '__int64 __fastcall INVENTORY_GetFreeBeltSlot(D2InventoryStrc* pInventory, D2UnitStrc* pItem, int* pFreeSlotId)','name': 'INVENTORY_GetFreeBeltSlot', 'pattern': 'E8 ? ? ? ? 85 C0 74 A4 ','operand': 0, 'type': 'operand' },
{ 'ctype': '__int64 __fastcall INVENTORY_GetFreePosition(D2InventoryStrc* pInventory, D2UnitStrc* pItem, int nInventoryRecordId, int* pFreeX, int* pFreeY, uint8_t nPage)', 'name': 'INVENTORY_GetFreePosition', 'pattern': '48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC 50 49 8B E9 48 8B F1 48 85 C9 0F 84 ? ? ? ? 81 39 ? ? ? ? 0F 85 ? ? ? ? ', 'type': 'absoulte' },

{ 'ctype': '__int64 __fastcall ITEMS_AreStackablesEqual(D2UnitStrc* pItem, D2UnitStrc* pOtherItem)', 'name': 'ITEMS_AreStackablesEqual', 'pattern': '40 57 41 56 48 83 EC 38 4C 8B F2 ', 'type': 'absoulte' },
{ 'ctype': 'int64_t __fastcall ITEMS_CalculateTransactionCost(D2UnitStrc* pPlayer, D2UnitStrc* pItem, int nDifficulty, int64_t pQuestFlags, int nVendorId, int nTransactionType)', 'name': 'ITEMS_CalculateTransactionCost', 'pattern': '4C 8B DC 55 57 41 54 49 8D AB ? ? ? ? 48 81 EC ? ? ? ?  ', 'type': 'absoulte' },
{ 'ctype': 'BOOL __fastcall ITEMS_CheckItemTypeId(D2UnitStrc* pItem, uint32_t nItemType)', 'name': 'ITEMS_CheckItemTypeId',  'pattern': 'E8 ? ? ? ? 41 8B 37  ', 'operand': 0, 'type': 'operand' },
{ 'ctype': '__int64 __fastcall ITEMS_DecodeItemBitstreamComplete(D2UnitStrc *pItem, void* pBuffer, BOOL bCheckForHeader, BOOL bGamble, int* pSocketedItems, uint32_t dwVersion)', 'name': 'ITEMS_DecodeItemBitstreamComplete', 'pattern': 'E8 ? ? ? ? 85 C0 7F 06', 'operand': 0, 'type': 'operand' },
{ 'ctype': 'void __fastcall ITEMS_GetName(D2UnitStrc* pItem, D2wchar_tStrc* pBuffer, uint32_t nLen)', 'name': 'ITEMS_GetName',  'pattern': 'E8 ? ? ? ? 41 8B 16 48 8D 4C 24 ?', 'operand': 0, 'type': 'operand' },
{ 'ctype': 'uint32_t __fastcall ITEMS_GetRequiredLevel(D2UnitStrc* pItem, D2UnitStrc* pPlayer)', 'name': 'ITEMS_GetRequiredLevel', 'pattern': 'E8 ? ? ? ? 83 F8 01 7E 1E', 'operand': 0, 'type': 'operand'},

{ 'ctype': 'wchar_t* __fastcall LANG_GetWideStringFromTblIndex(uint16_t nIndex)', 'name': 'LANG_GetWideStringFromTblIndex',  'pattern': '80 3D ? ? ? ? ? 48 8D 05 ? ? ? ? 4C 8D 0D ? ? ? ? 44 0F B7 C1 4C 0F 45 C8 4C 8B DA 4D 8B 51 08', 'type': 'absoulte' },

{ 'ctype': 'int64_t __fastcall STATES_CheckState(D2UnitStrc* pUnit, uint32_t nState)',  'name': 'STATES_CheckState', 'pattern': '4C 63 CA 48 85 C9 74 53 44 8B 01 45 85 C0 74 0C 41 83 E8 01 74 06 41 83 F8 02 75 3F ', 'type': 'absoulte' },
{ 'ctype': 'void __fastcall STATES_ToggleState(D2UnitStrc* pUnit, int nState, BOOL bSet)',  'name': 'STATES_ToggleState', 'pattern': '48 83 EC 28 45 8B C8 4C 8B D1 ', 'type': 'absoulte' },

{ 'ctype': 'int64_t __fastcall STATLIST_GetTotalStat(D2StatListStrc* pStatList, int32_t nPackedLayer_StatId, void* pItemStatCostTxtRecord)', 'name': 'STATLIST_GetTotalStat', 'pattern': 'E8 ? ? ? ? 01 43 34', 'operand': 0, 'type': 'operand' },
{ 'ctype': 'int64_t __fastcall STATLIST_GetUnitStatSigned(D2UnitStrc* pUnit, uint32_t nStatId, uint16_t nLayer)', 'name': 'STATLIST_GetUnitStatSigned', 'pattern': '48 83 EC 28 45 0F B7 C8 48 85 C9 74 42 48 8B 89 ? ? ? ? 48 85 C9 74 2F', 'type': 'absoulte' },

{ 'ctype': 'int __fastcall UNITS_GetBlockRate(D2UnitStrc *pUnit, BOOL bExpansion)',  'name': 'UNITS_GetBlockRate', 'pattern': 'E8 ? ? ? ? 8B F8 85 C0 7E 63 ', 'operand': 0, 'type': 'operand' },
]

variables = [
{ 'ctype': 'D2GSServerToClientHandler[0xAE]', 'name': 'gpD2GS_S2C_FunctionTable', 'pattern': '4C 8D A2 ? ? ? ? 41 8B 44 CC ?', 'operand': 1, 'type': 'other'},
{ 'ctype': 'D2UnitHashTableStrc', 'name': 'gpClientSideUnitHashTable', 'pattern': '4C 8D 05 ? ? ? ? 48 63 03 8B CA 48 C1 E0 07 83 E1 7F 48 03 C8', 'operand': 1, 'type': 'operand' },
{ 'ctype': 'POINT', 'name': 'gpMousePosition', 'pattern': '48 8B 0D ? ? ? ? F3 0F 7F 45 ?', 'operand': 1, 'type': 'operand'},
{ 'ctype': 'D2UnitHashTableStrc', 'name': 'gpServerSideUnitHashTable', 'pattern': '48 8D 05 ? ? ? ? F7 83 ? ? ? ? ? ? ? ?', 'operand': 1, 'type': 'operand' },
]

def BuildEnum(items):
    for item in items:
        address = ida_search.find_binary(0, end_ea, item['pattern'], 16, idc.SEARCH_DOWN)
        if address == idaapi.BADADDR:
            print("\t%-32s = %-20s //%-20s - Sig Broke" % (item['name'], hex(0x0L)[:-1], hex(address)[:-1] ))
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
        if 'note' in item:
            print("\t%-32s = %-20s //%-20s - %s" % (item['name'], hex(offset)[:-1], hex(address)[:-1], item['note'] ))
        else:
            print("\t%-32s = %-20s //%-20s" % (item['name'], hex(offset)[:-1], hex(address)[:-1] ))
        set_name(address, item['name'])
        idc.SetType(address, item['ctype'])
        


print('enum class Functions : uint64_t {')
BuildEnum(functions)
print("}")

print('enum class Variables : uint64_t {')
BuildEnum(variables)
print("}")
print('Done')
