
#import os

#print("Loading Header File: IDA.h")
#idaapi.idc_parse_types(os.path.join(os.path.abspath(os.path.dirname(__file__)), "IDA.h"), idc.PT_FILE)

base = idaapi.get_imagebase()

functions = [
#D2CLIENT
{ 'offset': 0xB32D0, 'name': 'D2CLIENT_GetQuestInfo', 'ctype': 'void* __stdcall D2CLIENT_GetQuestInfo()' },
{ 'offset': 0xB2370, 'name': 'D2CLIENT_SubmitItem', 'ctype': 'void __fastcall D2CLIENT_SubmitItem(DWORD dwItemId)' },
{ 'offset': 0x8A0D0, 'name': 'D2CLIENT_Transmute', 'ctype': 'void __fastcall D2CLIENT_Transmute()' },
{ 'offset': 0x63990, 'name': 'D2CLIENT_FindClientSideUnit', 'ctype': 'UnitAny* __fastcall D2CLIENT_FindClientSideUnit(DWORD dwId, DWORD dwType)' },
{ 'offset': 0x639B0, 'name': 'D2CLIENT_FindServerSideUnit', 'ctype': 'UnitAny* __fastcall D2CLIENT_FindServerSideUnit(DWORD dwId, DWORD dwType)' },
{ 'offset': 0xB1620, 'name': 'D2CLIENT_GetCurrentInteractingNPC', 'ctype': 'UnitAny* __fastcall D2CLIENT_GetCurrentInteractingNPC()' },
{ 'offset': 0x67A10, 'name': 'D2CLIENT_GetSelectedUnit', 'ctype': 'UnitAny* __stdcall D2CLIENT_GetSelectedUnit()' },
{ 'offset': 0x680A0, 'name': 'D2CLIENT_GetCursorItem', 'ctype': 'UnitAny* __fastcall D2CLIENT_GetCursorItem()' },
{ 'offset': 0x78A90, 'name': 'D2CLIENT_GetMercUnit', 'ctype': 'UnitAny* __fastcall D2CLIENT_GetMercUnit()' },
{ 'offset': 0x66DE0, 'name': 'D2CLIENT_SetSelectedUnit_I', 'ctype': 'void __fastcall D2CLIENT_SetSelectedUnit_I(UnitAny* pUnit)' },
{ 'offset': 0x8C060, 'name': 'D2CLIENT_GetItemName', 'ctype': 'BOOL __fastcall D2CLIENT_GetItemName(UnitAny* pItem, wchar_t* wBuffer, DWORD dwSize)' },
{ 'offset': 0x8DD90, 'name': 'D2CLIENT_LoadItemDesc', 'ctype': 'BOOL __stdcall D2CLIENT_LoadItemDesc(UnitAny* pItem, int type)' },
{ 'offset': 0x79150, 'name': 'D2CLIENT_GetMonsterOwner', 'ctype': 'DWORD __fastcall D2CLIENT_GetMonsterOwner(DWORD nMonsterId)' },
{ 'offset': 0x79080, 'name': 'D2CLIENT_GetUnitHPPercent', 'ctype': 'DWORD __fastcall D2CLIENT_GetUnitHPPercent(DWORD dwUnitId)' },
{ 'offset': 0x845A0, 'name': 'D2CLIENT_InitInventory', 'ctype': 'void __fastcall D2CLIENT_InitInventory()' },
{ 'offset': 0x55F20, 'name': 'D2CLIENT_SetUIVar', 'ctype': 'DWORD __fastcall D2CLIENT_SetUIVar(DWORD varno, DWORD howset, DWORD unknown1)' },
{ 'offset': 0x5ADF0, 'name': 'D2CLIENT_GetUnitX', 'ctype': 'int __fastcall D2CLIENT_GetUnitX(UnitAny* pUnit)' },
{ 'offset': 0x5AE20, 'name': 'D2CLIENT_GetUnitY', 'ctype': 'int __fastcall D2CLIENT_GetUnitY(UnitAny* pUnit)' },
{ 'offset': 0xB3870, 'name': 'D2CLIENT_ShopAction', 'ctype': 'void __fastcall D2CLIENT_ShopAction(UnitAny* pNpc, UnitAny* pItem, DWORD dwSell, DWORD unk, DWORD dwItemCost, DWORD dwMode, DWORD _2, DWORD _3)' },
{ 'offset': 0xB3F10, 'name': 'D2CLIENT_CloseNPCInteract', 'ctype': 'void __fastcall D2CLIENT_CloseNPCInteract()' },
{ 'offset': 0x4C6B0, 'name': 'D2CLIENT_CloseInteract', 'ctype': 'void __fastcall D2CLIENT_CloseInteract()' },
{ 'offset': 0x5A710, 'name': 'D2CLIENT_GetAutomapSize', 'ctype': 'DWORD __stdcall D2CLIENT_GetAutomapSize()' },
{ 'offset': 0x57C30, 'name': 'D2CLIENT_NewAutomapCell', 'ctype': 'AutomapCell* __fastcall D2CLIENT_NewAutomapCell()' },
{ 'offset': 0x57B00, 'name': 'D2CLIENT_AddAutomapCell', 'ctype': 'void __fastcall D2CLIENT_AddAutomapCell(AutomapCell* aCell, AutomapCell** node)' },
{ 'offset': 0x58F40, 'name': 'D2CLIENT_RevealAutomapRoom', 'ctype': 'void __stdcall D2CLIENT_RevealAutomapRoom(Room1* pRoom1, DWORD dwClipFlag, AutomapLayer* aLayer)' },
{ 'offset': 0x58D40, 'name': 'D2CLIENT_InitAutomapLayer_I', 'ctype': ' AutomapLayer* __fastcall D2CLIENT_InitAutomapLayer_I()' },
{ 'offset': 0x62D00, 'name': 'D2CLIENT_ClickMap', 'ctype': 'void __fastcall D2CLIENT_ClickMap(DWORD MouseFlag, DWORD x, DWORD y, DWORD Type)' },
{ 'offset': 0x8FFE0, 'name': 'D2CLIENT_LeftClickItem_I', 'ctype': 'void __stdcall D2CLIENT_LeftClickItem_I(UnitAny* pPlayer, Inventory* pInventory, int x, int y, DWORD dwClickType, InventoryLayout* pLayout, DWORD Location)' },
{ 'offset': 0x5AFC0, 'name': 'D2CLIENT_GetMouseXOffset', 'ctype': 'DWORD __fastcall D2CLIENT_GetMouseXOffset()' },
{ 'offset': 0x5AFB0, 'name': 'D2CLIENT_GetMouseYOffset', 'ctype': 'DWORD __fastcall D2CLIENT_GetMouseYOffset()' },
{ 'offset': 0x9E3A0, 'name': 'D2CLIENT_PrintGameString', 'ctype': 'void __fastcall D2CLIENT_PrintGameString(wchar_t* wMessage, int nColor)' },
{ 'offset': 0x9E5C0, 'name': 'D2CLIENT_PrintPartyString', 'ctype': 'void __fastcall D2CLIENT_PrintPartyString(wchar_t* wMessage, int nColor)' },
{ 'offset': 0x79FC0, 'name': 'D2CLIENT_LeaveParty', 'ctype': 'void __fastcall D2CLIENT_LeaveParty()' },
{ 'offset': 0xB9070, 'name': 'D2CLIENT_AcceptTrade', 'ctype': 'void __fastcall D2CLIENT_AcceptTrade()' },
{ 'offset': 0xB90B0, 'name': 'D2CLIENT_CancelTrade', 'ctype': 'void __fastcall D2CLIENT_CancelTrade()' },
{ 'offset': 0xB8A30, 'name': 'D2CLIENT_TradeOK', 'ctype': 'void __stdcall D2CLIENT_TradeOK()' },
{ 'offset': 0x4DCD0, 'name': 'D2CLIENT_GetDifficulty', 'ctype': 'BYTE __stdcall D2CLIENT_GetDifficulty()' },
{ 'offset': 0x4dd60, 'name': 'D2CLIENT_QuitGame', 'ctype': 'void __fastcall D2CLIENT_QuitGame()' },
{ 'offset': 0x538D0, 'name': 'D2CLIENT_GetUiVar_I', 'ctype': 'DWORD __fastcall D2CLIENT_QuitGame(DWORD dwVarNo)' },
{ 'offset': 0x52E50, 'name': 'D2CLIENT_DrawRectFrame', 'ctype': 'void __fastcall D2CLIENT_DrawRectFrame(DWORD Rect)' },
{ 'offset': 0x54080, 'name': 'D2CLIENT_PerformGoldDialogAction', 'ctype': 'void __fastcall D2CLIENT_PerformGoldDialogAction()' },
{ 'offset': 0x63DD0, 'name': 'D2CLIENT_GetPlayerUnit', 'ctype': 'UnitAny* __stdcall D2CLIENT_GetPlayerUnit()' },
{ 'offset': 0x53E70, 'name': 'D2CLIENT_GetLevelName_I', 'ctype': 'wchar_t* __fastcall D2CLIENT_GetLevelName_I(DWORD levelId)' },
{ 'offset': 0xB4620, 'name': 'D2CLIENT_ClearScreen', 'ctype': 'void __fastcall D2CLIENT_ClearScreen()' },
{ 'offset': 0xA17D0, 'name': 'D2CLIENT_CloseNPCTalk', 'ctype': 'DWORD __stdcall D2CLIENT_CloseNPCTalk()' },
{ 'offset': 0xDC440, 'name': 'D2CLIENT_TestPvpFlag', 'ctype': 'DWORD __fastcall D2CLIENT_QuitGame(DWORD dwUnitId1, DWORD dwUnitId2, DWORD dwFlag)' },
{ 'offset': 0x125150, 'name': 'D2CLIENT_GetGameLanguageCode', 'ctype': 'DWORD __fastcall D2CLIENT_QuitGame()' },
#D2COMMON
{ 'offset': 0x2424A0, 'name': 'D2COMMON_InitLevel', 'ctype': 'void __stdcall D2COMMON_InitLevel(Level* pLevel)' },
{ 'offset': 0x21AFD3, 'name': 'D2COMMON_UnloadAct', 'ctype': 'unsigned __stdcall D2COMMON_UnloadAct(Act* pAct)' },
{ 'offset': 0x240E90, 'name': 'D2COMMON_GetObjectTxt', 'ctype': 'ObjectTxt* __stdcall D2COMMON_GetObjectTxt(DWORD objno)' },
{ 'offset': 0x2194A0, 'name': 'D2COMMON_LoadAct', 'ctype': 'Act* __stdcall D2COMMON_LoadAct(DWORD ActNumber, DWORD MapId, DWORD Unk, DWORD Unk_2, DWORD Unk_3, DWORD Unk_4, DWORD TownLevelId, DWORD Func_1, DWORD Func_2)' },
{ 'offset': 0x21DB70, 'name': 'D2COMMON_GetLevelText', 'ctype': 'LevelTxt* __stdcall D2COMMON_GetLevelText(DWORD levelno)' },
{ 'offset': 0x2335F0, 'name': 'D2COMMON_GetItemText', 'ctype': 'ItemTxt* __stdcall D2COMMON_GetItemText(DWORD itemno)' },
{ 'offset': 0x21E470, 'name': 'D2COMMON_GetLayer', 'ctype': 'AutomapLayer2* __fastcall D2COMMON_GetLayer(DWORD dwLevelNo)' },
{ 'offset': 0x242AE0, 'name': 'D2COMMON_GetLevel', 'ctype': 'Level* __fastcall D2COMMON_GetLevel(ActMisc* pMisc, DWORD dwLevelNo)' },
{ 'offset': 0x2257D0, 'name': 'D2COMMON_GetStatList', 'ctype': 'StatList* __stdcall D2COMMON_GetStatList(UnitAny* pUnit, DWORD dwUnk, DWORD dwMaxEntries)' },
{ 'offset': 0x225C90, 'name': 'D2COMMON_CopyStatList', 'ctype': 'DWORD __stdcall D2COMMON_CopyStatList(StatList* pStatList, Stat* pStatArray, DWORD dwMaxEntries)' },
{ 'offset': 0x225480, 'name': 'D2COMMON_GetUnitStat', 'ctype': 'DWORD __stdcall D2COMMON_GetUnitStat(UnitAny* pUnit, DWORD dwStat, DWORD dwStat2)' },
{ 'offset': 0x239DF0, 'name': 'D2COMMON_GetUnitState', 'ctype': 'DWORD __stdcall D2COMMON_GetUnitState(UnitAny* pUnit, DWORD dwStateNo)' },
{ 'offset': 0x222AA0, 'name': 'D2COMMON_CheckUnitCollision', 'ctype': 'DWORD __stdcall D2COMMON_CheckUnitCollision(UnitAny* pUnitA, UnitAny* pUnitB, DWORD dwBitMask)' },
{ 'offset': 0x220BB0, 'name': 'D2COMMON_GetRoomFromUnit', 'ctype': 'Room1* __stdcall D2COMMON_GetRoomFromUnit(UnitAny* ptUnit)' },
{ 'offset': 0x773C0, 'name': 'D2COMMON_GetTargetUnitType', 'ctype': 'Path* __stdcall D2COMMON_GetTargetUnitType(Path* pPath)' },
{ 'offset': 0x2442A0, 'name': 'D2COMMON_GetSkillLevel', 'ctype': 'INT __stdcall D2COMMON_GetSkillLevel(UnitAny* pUnit, Skill* pSkill, BOOL bTotal)' },
{ 'offset': 0x22BA60, 'name': 'D2COMMON_GetItemLevelRequirement', 'ctype': ' DWORD __stdcall D2COMMON_GetItemLevelRequirement(UnitAny* pItem, UnitAny* pPlayer)' },
{ 'offset': 0x22FDC0, 'name': 'D2COMMON_GetItemPrice', 'ctype': 'DWORD __stdcall D2COMMON_GetItemPrice(UnitAny* MyUnit, UnitAny* pItem, DWORD U1_, DWORD U2_, DWORD U3_, DWORD U4_)' },
{ 'offset': 0x22FE60, 'name': 'D2COMMON_GetRepairCost', 'ctype': 'DWORD __stdcall D2COMMON_GetRepairCost(DWORD _1, UnitAny* pUnit, DWORD dwNpcId, DWORD dwDifficulty, DWORD dwItemPriceList, DWORD _2)' },
{ 'offset': 0x233EE0, 'name': 'D2COMMON_GetItemMagicalMods', 'ctype': 'char* __stdcall D2COMMON_GetItemMagicalMods(WORD wPrefixNum)' },
{ 'offset': 0x23B2C0, 'name': 'D2COMMON_GetItemFromInventory', 'ctype': 'UnitAny* __stdcall D2COMMON_GetItemFromInventory(Inventory* inv)' },
{ 'offset': 0x23DFA0, 'name': 'D2COMMON_GetNextItemFromInventory', 'ctype': 'UnitAny* __stdcall D2COMMON_GetNextItemFromInventory(UnitAny * pItem)' },
{ 'offset': 0x261110, 'name': 'D2COMMON_GenerateOverheadMsg', 'ctype': ' OverheadMsg* __stdcall D2COMMON_GenerateOverheadMsg(DWORD dwUnk, CHAR* szMsg, DWORD dwTrigger)' },
{ 'offset': 0x261230, 'name': 'D2COMMON_FixOverheadMsg', 'ctype': 'void __stdcall D2COMMON_FixOverheadMsg(OverheadMsg* pMsg, DWORD dwUnk)' },
{ 'offset': 0x21A070, 'name': 'D2COMMON_AddRoomData', 'ctype': 'void __stdcall D2COMMON_AddRoomData(Act* ptAct, int LevelId, int Xpos, int Ypos, Room1* pRoom)' },
{ 'offset': 0x21A0C0, 'name': 'D2COMMON_RemoveRoomData', 'ctype': 'void __stdcall D2COMMON_RemoveRoomData(Act* ptAct, int LevelId, int Xpos, int Ypos, Room1* pRoom)' },
{ 'offset': 0x25C310, 'name': 'D2COMMON_GetQuestFlag', 'ctype': 'int __stdcall D2COMMON_GetQuestFlag(void* QuestInfo, DWORD dwAct, DWORD dwQuest)' },
{ 'offset': 0x243260, 'name': 'D2COMMON_MapToAbsScreen', 'ctype': 'void __stdcall D2COMMON_MapToAbsScreen(long* pX, long* pY)' },
{ 'offset': 0x243510, 'name': 'D2COMMON_AbsScreenToMap', 'ctype': 'void __stdcall D2COMMON_AbsScreenToMap(long* ptMouseX, long* ptMouseY)' },
{ 'offset': 0x260E50, 'name': 'D2COMMON_CheckWaypoint', 'ctype': 'DWORD __stdcall D2COMMON_CheckWaypoint(DWORD WaypointTable, DWORD dwLevelId)' },
{ 'offset': 0x21AAF0, 'name': 'D2COMMON_IsTownByLevelNo', 'ctype': 'BOOL __stdcall D2COMMON_IsTownByLevelNo(DWORD dwLevelNo)' },
{ 'offset': 0x21A1B0, 'name': 'D2COMMON_GetLevelNoFromRoom', 'ctype': 'BOOL __stdcall D2COMMON_GetLevelNoFromRoom(Room1 * pRoom1)' },
{ 'offset': 0x219DA3, 'name': 'D2COMMON_FindRoom1', 'ctype': 'Room1* __stdcall D2COMMON_FindRoom1(Act* pAct, int x, int y)' },
{ 'offset': 0x22C100, 'name': 'D2COMMON_GetItemPalette', 'ctype': 'int __stdcall D2COMMON_GetItemPalette(UnitAny* pPlayer, UnitAny* pItem, BYTE* pColor, int nTransType)' },
{ 'offset': 0x639D0, 'name': 'D2COMMON_GetMissileOwnerUnit', 'ctype': 'UnitAny* __fastcall D2COMMON_GetMissileOwnerUnit(UnitAny* pMissile)' },
#D2NET
{ 'offset': 0x12AE50, 'name': 'D2NET_SendPacket', 'ctype': 'void __stdcall D2NET_SendPacket(size_t aLen, DWORD arg1, BYTE* aPacket)' },
{ 'offset': 0x12AEB0, 'name': 'D2NET_ReceivePacket', 'ctype': 'void __fastcall D2NET_ReceivePacket(BYTE* aPacket, DWORD aLen)' },
{ 'offset': 0x12B920, 'name': 'D2NET_ReceivePacket_I', 'ctype': 'void __fastcall D2NET_ReceivePacket_I(BYTE  aPacket, DWORD aLen, int* arg3)' },
#D2GFX
{ 'offset': 0xF6300, 'name': 'D2GFX_DrawRectangle', 'ctype': 'void __stdcall D2GFX_DrawRectangle(int X1, int Y1, int X2, int Y2, DWORD dwColor, DWORD dwTrans)' },
{ 'offset': 0xF6380, 'name': 'D2GFX_DrawLine', 'ctype': 'void __stdcall D2GFX_DrawLine(int X1, int Y1, int X2, int Y2, DWORD dwColor, DWORD dwUnk)' },
{ 'offset': 0xF6480, 'name': 'D2GFX_DrawAutomapCell2', 'ctype': 'void __stdcall D2GFX_DrawAutomapCell2(CellContext* context, DWORD xpos, DWORD ypos, DWORD bright2, DWORD bright, BYTE* coltab)' },
{ 'offset': 0xF59A0, 'name': 'D2GFX_GetHwnd', 'ctype': 'HWND __stdcall D2GFX_GetHwnd()' },
{ 'offset': 0xF5160, 'name': 'D2GFX_GetScreenSize', 'ctype': 'DWORD __stdcall D2GFX_GetScreenSize()' },
#D2MULTI
{ 'offset': 0x42810, 'name': 'D2MULTI_DoChat', 'ctype': 'void __fastcall D2MULTI_DoChat()' },
{ 'offset': 0x47AB0, 'name': 'D2MULTI_PrintChannelText_', 'ctype': 'void __fastcall D2MULTI_PrintChannelText_(int unused, char* szText, DWORD dwColor)' },
#D2CMP
{ 'offset': 0x201340, 'name': 'D2CMP_InitCellFile', 'ctype': 'void __stdcall D2CMP_InitCellFile(LPVOID File, CellFile** Out, LPSTR SourceFile, DWORD Line, DWORD FileVersion, LPSTR Filename)' },
{ 'offset': 0x201A50, 'name': 'D2CMP_DeleteCellFile', 'ctype': 'void __stdcall D2CMP_DeleteCellFile(CellFile* File)' },
#D2LANG
{ 'offset': 0x124A30, 'name': 'D2LANG_GetLocaleText', 'ctype': 'wchar_t* __fastcall D2LANG_GetLocaleText(WORD nLocaleTxtNo)' },
#D2WIN
{ 'offset': 0xFF5A0, 'name': 'D2WIN_SetControlText', 'ctype': 'void* __fastcall D2WIN_SetControlText(Control* box, const wchar_t* txt)' },
{ 'offset': 0xF9870, 'name': 'D2WIN_DrawSprites', 'ctype': ' void __fastcall D2WIN_DrawSprites()' },
{ 'offset': 0xFA9B0, 'name': 'D2WIN_LoadCellFile', 'ctype': ' CellFile* __fastcall D2WIN_LoadCellFile(const char* szFile, int Type)' },
{ 'offset': 0xFA7A0, 'name': 'D2WIN_TakeScreenshot', 'ctype': 'void __fastcall D2WIN_TakeScreenshot()' },
{ 'offset': 0x102320, 'name': 'D2WIN_DrawText', 'ctype': 'void __fastcall D2WIN_DrawText(const wchar_t* wStr, int xPos, int yPos, DWORD dwColor, DWORD dwUnk)' },
{ 'offset': 0x102520, 'name': 'D2WIN_GetTextSize', 'ctype': 'DWORD __fastcall D2WIN_GetTextSize(wchar_t * wStr, DWORD* dwWidth, DWORD* dwFileNo)' },
{ 'offset': 0x102EF0, 'name': 'D2WIN_SetTextSize', 'ctype': 'DWORD __fastcall D2WIN_SetTextSize(DWORD dwSize)' },
{ 'offset': 0x102520, 'name': 'D2WIN_GetTextWidthFileNo', 'ctype': 'DWORD __fastcall D2WIN_GetTextWidthFileNo(wchar_t * wStr, DWORD* dwWidth, DWORD* dwFileNo)' },
{ 'offset': 0xFDAA0, 'name': 'D2WIN_DestroyEditBox', 'ctype': 'DWORD __fastcall D2WIN_DestroyEditBox(Control* box)' },
{ 'offset': 0xf95c0, 'name': 'D2WIN_DestroyControl', 'ctype': 'void __stdcall D2WIN_DestroyControl(Control* pControl)' },
{ 'offset': 0xFDAD0, 'name': 'D2WIN_SetEditBoxCallback', 'ctype': 'void __fastcall D2WIN_SetEditBoxCallback(Control * pControl, BOOL(__stdcall* FunCallBack)(Control* pControl, DWORD dwInputType, char* pChar))' },
{ 'offset': 0xFDAD0, 'name': 'D2WIN_SetEditBoxProc', 'ctype': 'void __fastcall D2WIN_SetEditBoxProc(Control * box, BOOL(__stdcall* FunCallBack)(Control*, DWORD, DWORD))' },
{ 'offset': 0xfdd00, 'name': 'D2WIN_SelectEditBoxText', 'ctype': 'void __fastcall D2WIN_SelectEditBoxText(Control * box)' },
{ 'offset': 0x117332, 'name': 'D2WIN_InitMPQ', 'ctype': 'DWORD __fastcall D2WIN_InitMPQ(const char* mpqfile, char* mpqname, int v4, int v5)' },
#BNCLIENT
{ 'offset': 0x1234D0, 'name': 'BNCLIENT_DecodeAndLoadKeys', 'ctype': 'char __cdecl BNCLIENT_DecodeAndLoadKeys()' },
#D2GAME
{ 'offset': 0x5C370, 'name': 'D2GAME_Rand', 'ctype': 'DWORD __fastcall D2GAME_Rand(DWORD* seed)' },
{ 'offset': 0x576F, 'name': 'D2GAME_exit0', 'ctype': 'DWORD __fastcall D2GAME_exit0()' },

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
