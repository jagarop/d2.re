struct D2CharStatsTxt;
struct D2SkillsTxt;
struct D2ItemTypesTxt;
struct D2RareAffixTxt;
struct D2ItemsTxt;
struct D2MonStatsTxt;
struct D2ObjectsTxt;
struct D2LevelsTxt;
struct D2UnitHashTableStrc;
struct D2UnitStrc;
struct D2PlayerDataStrc;
struct D2MonsterDataStrc;
struct D2ObjectDataStrc;
struct D2ItemExtraDataStrc;
struct D2ItemDataStrc;
struct D2MissileDataStrc;
struct D2DrlgActStrc;
struct D2StatsArrayStrc;
struct D2StatListStrc;
struct D2StatListExStrc;
struct D2InventoryStrc;
struct D2PathPointStrc;
struct D2DynamicPathStrc;
struct D2RoomStrc;
struct D2SkillListStrc;
struct D2SkillStrc;
struct D2GameStrc;
struct D2ClientStrc;
struct D2PresetUnitStrc;
struct D2StatStrc;
struct D2DrlgStrc;
struct D2RoomExStrc;
struct D2DrlgCoordsStrc;
struct D2RoomCollisionGridStrc;
struct D2RoomTileStrc;
struct D2DrlgLevelStrc;
struct D2LvlWarpTxt;
struct D2StaticPathStrc;
struct D2GSServerToClientHandler;
#pragma pack(push, 1)

struct D2CharStatsTxt {
 	wchar_t WideClassName[16]; //0x0000
	char ClassName[16]; //0x0020
	char pad_0030[192]; //0x0030 
};

struct D2SkillsTxt {
 	uint16_t ID; //0x0000
	char Name[32]; //0x0002
	char pad_0022[570]; //0x0022 
};

struct D2ItemTypesTxt {
 	char Code[4]; //0x0000
	uint16_t Equiv[2]; //0x0004
	uint8_t Repair; //0x0008
	uint8_t Body; //0x0009
	uint8_t BodyLoc1; //0x000A
	uint8_t BodyLoc2; //0x000B
	uint16_t Shoots; //0x000C
	int16_t Quiver; //0x000E
	uint8_t Throwable; //0x0010
	uint8_t Reload; //0x0011
	uint8_t ReEquip; //0x0012
	uint8_t AutoStack; //0x0013
	uint8_t Magic; //0x0014
	uint8_t Rare; //0x0015
	uint8_t Normal; //0x0016
	uint8_t Charm; //0x0017
	uint8_t Gem; //0x0018
	uint8_t Beltable; //0x0019
	uint8_t MaxSock1; //0x001A
	uint8_t MaxSock25; //0x001B
	uint8_t MaxSock40; //0x001C
	uint8_t TreasureClass; //0x001D
	uint8_t Rarity; //0x001E
	uint8_t StaffMods; //0x001F
	uint8_t CostFormula; //0x0020
	uint8_t Class; //0x0021
	uint8_t StorePage; //0x0022
	uint8_t VarInvGfx; //0x0023
	uint8_t szInvGfx[6][32]; //0x0024 
};

struct D2RareAffixTxt {
 	char pad_0000[128]; //0x0000 
};

struct D2ItemsTxt {
 	char FlippyFile[32]; //0x0000
	char InvFile[32]; //0x0020
	char UniqueInvFile[32]; //0x0040
	char SetInvFile[32]; //0x0060
	union //0x0080
	{
		char CodeString[4]; //0x0000
		uint32_t Code; //0x0000
	};
	uint32_t NormCode; //0x0084
	uint32_t UberCode; //0x0088
	uint32_t UltraCode; //0x008C
	uint32_t AlternateGfx; //0x0090
	uint32_t Pspell; //0x0094
	uint16_t State; //0x0098
	uint16_t CurseState[2]; //0x009A
	uint16_t Stat[3]; //0x009E
	uint16_t Calc[3]; //0x00A4
	char pad_00AA[6]; //0x00AA
	uint32_t Len; //0x00B0
	uint8_t SpellDesc; //0x00B4
	char pad_00B5[3]; //0x00B5
	uint16_t SpellDescStr; //0x00B8
	uint32_t SpellDescCalc; //0x00BA
	uint32_t BetterGem; //0x00BE
	char pad_00C2[6]; //0x00C2
	uint32_t WeapClass; //0x00C8
	uint32_t WeapClass2Hand; //0x00CC
	uint32_t TransmogrifyType; //0x00D0
	int32_t MinAc; //0x00D4
	int32_t MaxAc; //0x00D8
	uint32_t GambleCost; //0x00DC
	int32_t Speed; //0x00E0
	uint32_t BitField1; //0x00E4
	uint32_t Cost; //0x00E8
	uint32_t MinStack; //0x00EC
	uint32_t MaxStack; //0x00F0
	uint32_t SpawnStack; //0x00F4
	uint32_t GemOffset; //0x00F8
	uint16_t NameStr; //0x00FC
	uint16_t Version; //0x00FE
	uint16_t AutoPrefix; //0x0100
	uint16_t MissileType; //0x0102
	uint8_t Rarity; //0x0104
	uint8_t Level; //0x0105
	char pad_0106[1]; //0x0106
	uint8_t MinDam; //0x0107
	uint8_t MaxDam; //0x0108
	uint8_t MinMisDam; //0x0109
	uint8_t MaxMisDam; //0x010A
	uint8_t _2HandMinDam; //0x010B
	uint8_t _2HandMaxDam; //0x010C
	uint8_t RangeAdder; //0x010D
	int16_t StrBonus; //0x010E
	int16_t DexBonus; //0x0110
	uint16_t ReqStr; //0x0112
	uint16_t ReqDex; //0x0114
	uint8_t InvWidth; //0x0116
	uint8_t InvHeight; //0x0117
	char pad_0118[1]; //0x0118
	uint8_t Durability; //0x0119
	uint8_t NoDurability; //0x011A
	uint8_t Missile; //0x011B
	uint8_t Component; //0x011C
	uint8_t ArmorComp[6]; //0x011D
	uint8_t _2Handed; //0x0123
	uint8_t Useable; //0x0124
	uint16_t Type[2]; //0x0125
	uint16_t SubType; //0x0129
	uint16_t DropSound; //0x012B
	uint16_t UseSound; //0x012D
	char pad_012F[117]; //0x012F
	uint32_t NightmareUpgrade; //0x01A4
	uint32_t HellUpgrade; //0x01A8
	char pad_01AC[4]; //0x01AC 
};

struct D2MonStatsTxt {
 	uint16_t ID; //0x0000
	char Name[16]; //0x0002
	char pad_0012[36]; //0x0012
	uint16_t NameStr; //0x0036
	char pad_0038[416]; //0x0038 
};

struct D2ObjectsTxt {
 	uint16_t ID; //0x0000
	char Name[64]; //0x0002
	char Description[64]; //0x0042
	char Token[3]; //0x0082
	char pad_0085[227]; //0x0085 
};

struct D2LevelsTxt {
 	uint32_t LineId; //0x0000
	uint16_t Id; //0x0004
	uint8_t Pal; //0x0006
	uint8_t Act; //0x0007
	uint8_t Teleport; //0x0008
	uint8_t Rain; //0x0009
	uint8_t Mud; //0x000A
	uint8_t NoPer; //0x000B
	uint8_t IsInside; //0x000C
	uint8_t DrawEdges; //0x000D
	char pad_000E[2]; //0x000E
	uint32_t WarpDist; //0x0010
	uint16_t MonLvl[3]; //0x0014
	uint16_t MonLvlEx[3]; //0x001A
	uint32_t MonDen[3]; //0x0020
	uint8_t MonUMin[3]; //0x002C
	uint8_t MonUMax[3]; //0x002F
	char pad_0032[342]; //0x0032 
};

struct D2UnitHashTableStrc {
 	D2UnitStrc *Players[128]; //0x0000
	D2UnitStrc *Monsters[128]; //0x0400
	D2UnitStrc *Objects[128]; //0x0800
	D2UnitStrc *Missiles[128]; //0x0C00
	D2UnitStrc *Items[128]; //0x1000
	D2UnitStrc *Tiles[128]; //0x1400 
};

struct D2UnitStrc {
 	uint32_t Type; //0x0000
	uint32_t LineID; //0x0004
	uint32_t ID; //0x0008
	uint32_t AnimationMode; //0x000C
	union //0x0010
	{
		D2PlayerDataStrc *PlayerData; //0x0000
		D2MonsterDataStrc *MonsterData; //0x0000
		D2ObjectDataStrc *ObjectData; //0x0000
		D2ItemDataStrc *ItemData; //0x0000
		D2MissileDataStrc *MissileData; //0x0000
	};
	uint8_t ActID; //0x0018
	char pad_0019[7]; //0x0019
	D2DrlgActStrc *DrlgAct; //0x0020
	char pad_0028[16]; //0x0028
	union //0x0038
	{
		D2DynamicPathStrc *pDynamicPath; //0x0000
		D2StaticPathStrc *pStaticPath; //0x0000
	};
	char pad_0040[72]; //0x0040
	D2StatListExStrc *pStatListEx; //0x0088
	D2InventoryStrc *pInventory; //0x0090
	char pad_0098[80]; //0x0098
	uint32_t OwnerType; //0x00E8
	uint32_t OwnerID; //0x00EC
	char pad_00F0[16]; //0x00F0
	D2SkillListStrc *pSkills; //0x0100
	char pad_0108[12]; //0x0108
	uint32_t Flags; //0x0114
	uint32_t FlagsEx; //0x0118
	char pad_011C[44]; //0x011C
	D2UnitStrc *pChangeNextUnit; //0x0148
	D2UnitStrc *pListNext; //0x0150
	D2UnitStrc *pRoomNext; //0x0158 
};

struct D2PlayerDataStrc {
 	char Name[16]; //0x0000
	char pad_0010[128]; //0x0010 
};

struct D2MonsterDataStrc {
 	D2MonStatsTxt *pMonstatsTxt; //0x0000
	char pad_0008[16]; //0x0008
	uint16_t NameSeed; //0x0018
	uint8_t TypeFlags; //0x001A
	uint8_t LastAnimationMode; //0x001B
	uint32_t DurielFlag; //0x001C
	uint8_t MonUMod[10]; //0x0020
	uint16_t BossLineID; //0x002A 
};

struct D2ObjectDataStrc {
 	D2ObjectsTxt *pObjectTxt; //0x0000
	uint8_t InteractType; //0x0008
	uint8_t PortalFlags; //0x0009
	char pad_000A[2]; //0x000A
	uint64_t *pShrineTxt; //0x000C 
};

struct D2ItemExtraDataStrc {
 	D2InventoryStrc *pParentInventory; //0x0000
	D2UnitStrc *pPreviousItem; //0x0008
	D2UnitStrc *pUnk0x0010; //0x0010
	D2UnitStrc *pUnk0x0018; //0x0018
	D2UnitStrc *pNextItem; //0x0020
	uint8_t NodePos; //0x0028
	uint8_t NodePosOther; //0x0029 
};

struct D2ItemDataStrc {
 	uint32_t Rarity; //0x0000
	uint32_t LowSeed; //0x0004
	uint32_t HighSeed; //0x0008
	uint32_t OwnerGUID; //0x000C
	uint32_t InitSeed; //0x0010
	uint32_t CommandFlags; //0x0014
	uint32_t Flags; //0x0018
	char pad_001C[28]; //0x001C
	uint32_t ItemLevel; //0x0038
	char pad_003C[4]; //0x003C
	uint16_t ItemFormat; //0x0040 0: classic 101: xp
	uint16_t RarePrefix; //0x0042
	uint16_t RareSuffix; //0x0044
	uint16_t AutoAffix; //0x0046
	uint16_t MagicPrefix[3]; //0x0048
	uint16_t MagicSuffix[3]; //0x004E
	uint8_t BodyLoc; //0x0054
	uint8_t InvPage; //0x0055
	uint8_t CellOverlap; //0x0056
	uint8_t ItemCell; //0x0057
	uint8_t EarLvl; //0x0058
	uint8_t InvGfxIdx; //0x0059
	char pad_005A[22]; //0x005A
	D2ItemExtraDataStrc pExtraData; //0x0070 
};

struct D2MissileDataStrc {
 	char pad_0000[136]; //0x0000 
};

struct D2DrlgActStrc {
 	char pad_0000[20]; //0x0000
	uint32_t nSeed; //0x0014
	D2RoomStrc *pRoom; //0x0018
	uint32_t ActNo; //0x0020
	char pad_0024[76]; //0x0024
	D2DrlgStrc *pDrlg; //0x0070
	char pad_0078[16]; //0x0078 
};

struct D2StatsArrayStrc {
 	D2StatStrc *pStat; //0x0000
	uint64_t Count; //0x0008
	uint64_t Capacity; //0x0010 
};

struct D2StatListStrc {
 	D2UnitStrc *pUnit; //0x0000
	uint32_t OwnerType; //0x0008
	uint32_t OwnerID; //0x000C
	char pad_0010[12]; //0x0010
	uint32_t Flags; //0x001C
	uint32_t SkillID; //0x0020
	float ExpireFrame; //0x0024
	char pad_0028[8]; //0x0028
	D2StatsArrayStrc Stats; //0x0030 
};

struct D2StatListExStrc {
 	D2UnitStrc *pUnit; //0x0000
	uint32_t OwnerType; //0x0008
	uint32_t OwnerID; //0x000C
	char pad_0010[12]; //0x0010
	uint32_t Flags; //0x001C
	uint32_t SkillID; //0x0020
	float ExpireFrame; //0x0024
	char pad_0028[8]; //0x0028
	D2StatsArrayStrc Stats; //0x0030
	D2StatListExStrc *pPrevLink; //0x0048 might be wrong
	char pad_0050[8]; //0x0050
	D2StatListExStrc *pParent; //0x0058
	char pad_0060[8]; //0x0060
	D2StatListExStrc *pMyLastList; //0x0068
	D2StatListExStrc *pMyStats; //0x0070
	D2UnitStrc *pOwner; //0x0078
	D2StatsArrayStrc FullStats; //0x0080
	D2StatsArrayStrc ModStats; //0x0098 could be wrong
	char pad_00B0[2584]; //0x00B0
	uint32_t StatFlags[6]; //0x0AC8
	uint32_t StatFlagsEx[6]; //0x0AE0 
};

struct D2InventoryStrc {
 	uint32_t Signature; //0x0000
	char pad_0004[4]; //0x0004
	D2UnitStrc *pOwner; //0x0008
	D2UnitStrc *pFirstItem; //0x0010
	D2UnitStrc *pLastItem; //0x0018
	uint64_t *pGrids; //0x0020
	char pad_0028[96]; //0x0028 
};

struct D2PathPointStrc {
 	uint16_t X; //0x0000
	uint16_t Y; //0x0002 
};

struct D2DynamicPathStrc {
 	uint16_t OffsetX; //0x0000 union { struct { uint16_t OffsetX; uint16_t PosX; uint16_t OffsetY; uint16_t PosY; }; struct { uint32_t PrecisionX; uint32_t PrecisionY; };	};
	uint16_t PosX; //0x0002
	uint16_t OffsetY; //0x0004
	uint16_t PosY; //0x0006
	int32_t dwTargetX; //0x0008 Result of DUNGEON_WorldToScreenCoords
	int32_t dwTargetY; //0x000C
	D2PathPointStrc SP1; //0x0010
	D2PathPointStrc SP2; //0x0014
	D2PathPointStrc SP3; //0x0018
	char pad_001C[4]; //0x001C
	D2RoomStrc *pRoom; //0x0020
	D2RoomStrc *pRoomNext; //0x0028
	uint32_t dwCurrentPointIdx; //0x0030
	uint32_t dwPathPoints; //0x0034
	char pad_0038[8]; //0x0038
	D2UnitStrc *pUnit; //0x0040
	char pad_0048[24]; //0x0048
	uint32_t dwCollisionType; //0x0060
	uint32_t nUnk0x64; //0x0064
	char pad_0068[56]; //0x0068
	uint32_t dwVelocity; //0x00A0
	char pad_00A4[25]; //0x00A4
	uint8_t nDistMax; //0x00BD
	uint8_t nUnk0xBE; //0x00BE
	char pad_00BF[9]; //0x00BF
	D2PathPointStrc PathPoints[78]; //0x00C8
	uint32_t nSavedStepsCount; //0x0200
	D2PathPointStrc SavedSteps[7]; //0x0204
	char pad_0220[360]; //0x0220 
};

struct D2RoomStrc {
 	D2RoomStrc **pRoomsNear; //0x0000
	char pad_0008[16]; //0x0008
	D2RoomExStrc *pRoomEx; //0x0018
	char pad_0020[24]; //0x0020
	D2RoomCollisionGridStrc *pCollisionGrid; //0x0038
	uint32_t dwRoomsNear; //0x0040
	char pad_0044[4]; //0x0044
	D2DrlgActStrc *pAct; //0x0048
	char pad_0050[48]; //0x0050
	uint32_t StartX; //0x0080
	uint32_t StartY; //0x0084
	uint32_t SizeX; //0x0088
	uint32_t SizeY; //0x008C
	uint32_t PosX; //0x0090
	uint32_t PosY; //0x0094
	uint32_t RoomSizeX; //0x0098
	uint32_t RoomSizeY; //0x009C
	char pad_00A0[8]; //0x00A0
	D2UnitStrc *pUnitFirst; //0x00A8
	D2RoomStrc *pRoomNext; //0x00B0 
};

struct D2SkillListStrc {
 	D2SkillStrc *pFirstSkill; //0x0000
	D2SkillStrc *pLeftSkill; //0x0008
	D2SkillStrc *pRightSkill; //0x0010
	char pad_0018[104]; //0x0018 
};

struct D2SkillStrc {
 	D2SkillsTxt *pSkillsTxt; //0x0000
	D2SkillStrc *pNextSkill; //0x0008
	char pad_0010[44]; //0x0010
	uint32_t N000000DD; //0x003C
	uint32_t N0000006C; //0x0040
	uint32_t N000000DA; //0x0044
	char pad_0048[56]; //0x0048 
};

struct D2GameStrc {
 	char pad_0000[77]; //0x0000
	uint8_t Difficulty; //0x004D
	char pad_004E[18]; //0x004E
	uint32_t InitSeed; //0x0060
	char pad_0064[12]; //0x0064
	D2ClientStrc *pClientList; //0x0070
	uint32_t ClientCount; //0x0078
	uint32_t SpawnedPlayerCount; //0x007C
	uint32_t SpawnedMonsterCount; //0x0080
	uint32_t SpawnedObjectCount; //0x0084
	uint32_t SpawnedMissileCount; //0x0088
	uint32_t SpawnedItemCount; //0x008C
	uint32_t SpawnedTiles; //0x0090
	char pad_0094[36]; //0x0094
	D2DrlgActStrc *pAct; //0x00B8 
};

struct D2ClientStrc {
 	char pad_0000[136]; //0x0000 
};

struct D2PresetUnitStrc {
 	char pad_0000[4]; //0x0000
	uint32_t Index; //0x0004
	uint32_t PosX; //0x0008
	char pad_000C[4]; //0x000C
	D2PresetUnitStrc *pPresetNext; //0x0010
	char pad_0018[8]; //0x0018
	uint32_t Type; //0x0020
	uint32_t PosY; //0x0024
	char pad_0028[8]; //0x0028 
};

struct D2StatStrc {
 	uint16_t Layer; //0x0000
	uint16_t ID; //0x0002
	uint32_t Value; //0x0004 
};

struct D2DrlgStrc {
 	char pad_0000[288]; //0x0000
	uint32_t StaffTombLevel; //0x0120
	char pad_0124[1844]; //0x0124
	D2DrlgActStrc *pAct; //0x0858
	char pad_0860[8]; //0x0860
	D2DrlgLevelStrc *pLevelFirst; //0x0868
	uint32_t ActNo; //0x0870
	char pad_0874[12]; //0x0874 
};

struct D2RoomExStrc {
 	char pad_0000[16]; //0x0000
	D2RoomExStrc **pRoomExNear; //0x0010
	uint32_t RoomsNear; //0x0018
	char pad_001C[52]; //0x001C
	uint32_t RoomFlags; //0x0050
	char pad_0054[4]; //0x0054
	D2RoomStrc *pRoom1; //0x0058
	uint32_t PosX; //0x0060
	uint32_t PosY; //0x0064
	uint32_t SizeX; //0x0068
	uint32_t SizeY; //0x006C
	char pad_0070[4]; //0x0070
	uint32_t dwPresetType; //0x0074
	D2RoomTileStrc *pRoomTiles; //0x0078
	char pad_0080[16]; //0x0080
	D2DrlgLevelStrc *pLevel; //0x0090
	D2PresetUnitStrc *pPreset; //0x0098 
};

struct D2DrlgCoordsStrc {
 	uint32_t dwSubtilesLeft; //0x0000
	uint32_t dwSubtilesTop; //0x0004
	uint32_t dwSubtilesWidth; //0x0008
	uint32_t dwSubtilesHeight; //0x000C
	uint32_t dwTilesLeft; //0x0010
	uint32_t dwTilesTop; //0x0014
	uint32_t dwTilesWidth; //0x0018
	uint32_t dwTilesHeight; //0x001C 
};

struct D2RoomCollisionGridStrc {
 	uint32_t dwSubtilesLeft; //0x0000
	uint32_t dwSubtilesTop; //0x0004
	uint32_t dwSubtilesWidth; //0x0008
	uint32_t dwSubtilesHeight; //0x000C
	uint32_t dwTilesLeft; //0x0010
	uint32_t dwTilesTop; //0x0014
	uint32_t dwTilesWidth; //0x0018
	uint32_t dwTilesHeight; //0x001C
	uint16_t *pCollisionMask; //0x0020 
};

struct D2RoomTileStrc {
 	D2RoomExStrc *pRoomEx; //0x0000
	D2RoomTileStrc *pNext; //0x0008
	uint64_t nEnabled; //0x0010
	uint64_t *Unk0x0018; //0x0018
	D2LvlWarpTxt *pLvlWarpTxtRecord; //0x0020
	uint64_t *Unk0x0028; //0x0028 
};

struct D2DrlgLevelStrc {
 	char pad_0000[16]; //0x0000
	D2RoomExStrc *pRoomExFirst; //0x0010
	char pad_0018[12]; //0x0018
	uint32_t PosX; //0x0024
	uint32_t PosY; //0x0028
	uint32_t SizeX; //0x002C
	uint32_t SizeY; //0x0030
	char pad_0034[388]; //0x0034
	D2DrlgLevelStrc *pLevelNext; //0x01B8
	char pad_01C0[8]; //0x01C0
	D2DrlgStrc *pDrlg; //0x01C8
	char pad_01D0[40]; //0x01D0
	uint32_t LevelNo; //0x01F8
	char pad_01FC[12]; //0x01FC
	union //0x0208
	{
		int32_t RoomCenterX[9]; //0x0000
		int32_t WarpX[9]; //0x0000
	};
	union //0x022C
	{
		int32_t RoomCenterY[9]; //0x0000
		int32_t WarpY[9]; //0x0000
	};
	char pad_0250[56]; //0x0250 
};

struct D2LvlWarpTxt {
 	char Name[32]; //0x0000
	char pad_0020[12]; //0x0020
	uint32_t ID; //0x002C
	char pad_0030[48]; //0x0030 
};

struct D2StaticPathStrc {
 	D2RoomStrc *pRoom; //0x0000
	uint32_t TargetX; //0x0008
	uint32_t TargetY; //0x000C
	uint32_t PosX; //0x0010
	uint32_t PosY; //0x0014 
};

struct D2GSServerToClientHandler {
 	void* pHandler; //0x0000 void (__fastcall* D2GSServerToClient_t)(void* pPacket);
	uint64_t PacketSize; //0x0008
	void* pHandlerEx; //0x0010 void (__fastcall* D2GSServerToClient_t)(D2UnitStrc* pUnit, void* pPacket); 
};

#pragma pack(pop)