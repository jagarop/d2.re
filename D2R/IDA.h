struct D2DataTablesStrc;
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
struct D2DrlgFileStrc;
struct D2ObjectDataStrc;
struct D2ItemExtraDataStrc;
struct D2ItemDataStrc;
struct D2DrlgCoordStrc;
struct D2LvlPrestTxt;
struct D2PlayerTradeStrc;
struct D2DrlgPresetInfoStrc;
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
struct D2DrlgMapStrc;
struct D2PresetUnitStrc;
struct D2StatStrc;
struct D2DrlgStrc;
struct D2RoomExStrc;
struct D2DrlgCoordsStrc;
struct D2DrlgGridStrc;
struct D2RoomCollisionGridStrc;
struct D2RoomTileStrc;
struct D2DrlgLevelStrc;
struct D2LvlWarpTxt;
struct D2StaticPathStrc;
struct D2GSServerToClientHandler;
struct D2InventoryRect;
struct D2BeltText;
struct D2MissileDataStrc;
struct D2Point32;
struct D2BitBufferStrc;
struct D2InventoryGridStrc;
struct D2AnimDataRecordStrc;
struct D2Point16;
struct D2UIPanelManagerStrc_VMT;
struct D2UIPanelManagerStrc;
struct D2UIWidgetStrc_VMT;
struct D2UIWidgetStrc;
struct D2BinFieldStrc;
struct D2UnkExcelStrc;
struct D2UnkFogStrc;
struct D2UIButtonStrc_VMT;
struct D2UIButtonStrc;
struct D2MissilesTxt;
struct D2UnkOutdoorStrc;
struct D2DrlgWarpStrc;
struct D2DrlgLinkStrc;
struct D2DrlgLevelLinkDataStrc;
struct D2SeedStrc;
struct D2DrlgTileDataStrc;
struct D2TileLibraryEntryStrc;
struct D2TileRecordStrc;
struct D2TileLibraryHashStrc;
struct D2TileLibraryHashRefStrc;
struct D2TileLibraryHashNodeStrc;
struct D2UnkDrlgLogicStrc;
struct D2PropertyStrc;
struct D2MagicAffixTxt;
struct D2DrlgEnvironmentStrc;
struct D2ItemRatioTxt;
struct D2InventoryNodeStrc;
struct D2PathInfoStrc;
struct D2UnitFindDataStrc;
struct D2UnitFindArgStrc;
struct D2MissileDamageDataStrc;
struct D2HirelingInitStrc;
struct D2MonStatsInitStrc;
struct D2TCExInfoStrc;
struct D2TCExShortStrc;
struct D2MissileCalcStrc;
struct D2SkillCalcStrc;
struct D2ItemCalcStrc;
struct D2ItemSaleInfo;
struct D2UnkMissileCalcStrc;
struct D2RunesTxt;
struct D2CorpseStrc;
struct D2MonModeTxtStub;
struct D2HireDescTxt;
struct D2DrlgVertexStrc;
enum D2TradeStates;
struct D2LvlPrestTxt;
struct D2TxtLinkTblStrc;
struct D2DrlgTileGridStrc;
struct D2DrlgTileLinkStrc;
struct D2DrlgRoomTilesStrc;
struct D2DrlgAnimTileGridStrc;
struct AutomapCell;
struct AutomapLayer;
struct TransactionDialogsLine;
struct TransactionDialogsInfo;
struct D2QuestInfo;
struct D2Waypoint;
struct RosterUnit;
struct HostileInfo;
struct unkqwordGameStruct;
struct BnetData;
struct D2RString;
class D2ChatMsg;
class D2MouseOver;
struct InputBoxData;
struct D2RosterPetStrc;
enum D2PanelName;
struct GamePanelStates;
struct Grid;
enum ItemInvPage;
enum NodePage;
enum ItemFlags;
enum ItemRarity;
enum MonsterTypeFlags;

typedef int32_t(__fastcall *UNITFINDTEST)(D2UnitStrc *pUnit, D2UnitFindArgStrc *pUnitFindArg);
#pragma pack(push, 1)

enum MonsterTypeFlags: uint8_t
{
    MONSTERTYPE_NORMAL = 0x0,
    MONSTERTYPE_CHAMPION = 0xC,
    MONSTERTYPE_SUPERUNIQUE = 0xA,
    MONSTERTYPE_UNIQUE = 0x8,
    MONSTERTYPE_UNIQUEFOLLOWER = 0x10
};

enum ItemFlags: uint32_t
{
    IFLAG_NEWITEM = 0x00000001,
    IFLAG_TARGET = 0x00000002,
    IFLAG_TARGETING = 0x00000004,
    IFLAG_DELETED = 0x00000008,
    IFLAG_IDENTIFIED = 0x00000010,
    IFLAG_QUANTITY = 0x00000020,
    IFLAG_SWITCHIN = 0x00000040,
    IFLAG_SWITCHOUT = 0x00000080,
    IFLAG_BROKEN = 0x00000100,
    IFLAG_REPAIRED = 0x00000200,
    IFLAG_UNK1 = 0x00000400,
    IFLAG_SOCKETED = 0x00000800,
    IFLAG_NOSELL = 0x00001000,
    IFLAG_INSTORE = 0x00002000,
    IFLAG_NOEQUIP = 0x00004000,
    IFLAG_NAMED = 0x00008000,
    IFLAG_ISEAR = 0x00010000,
    IFLAG_STARTITEM = 0x00020000,
    IFLAG_UNK2 = 0x00040000,
    IFLAG_INIT = 0x00080000,
    IFLAG_UNK3 = 0x00100000,
    IFLAG_COMPACTSAVE = 0x00200000,
    IFLAG_ETHEREAL = 0x00400000,
    IFLAG_JUSTSAVED = 0x00800000,
    IFLAG_PERSONALIZED = 0x01000000,
    IFLAG_LOWQUALITY = 0x02000000,
    IFLAG_RUNEWORD = 0x04000000,
    IFLAG_ITEM = 0x08000000
};

enum ItemRarity: uint32_t
{
    ITEMQUAL_INFERIOR = 0x01,	//0x01 Inferior
    ITEMQUAL_NORMAL = 0x02,	//0x02 Normal
    ITEMQUAL_SUPERIOR = 0x03,	//0x03 Superior
    ITEMQUAL_MAGIC = 0x04,	//0x04 Magic
    ITEMQUAL_SET = 0x05,	//0x05 Set
    ITEMQUAL_RARE = 0x06,	//0x06 Rare
    ITEMQUAL_UNIQUE = 0x07,	//0x07 Unique
    ITEMQUAL_CRAFT = 0x08,	//0x08 Crafted
    ITEMQUAL_TEMPERED = 0x09	//0x09 Tempered
};

enum NodePage: uint8_t
{
    NODEPAGE_STORAGE = 1,
    NODEPAGE_BELTSLOTS = 2,
    NODEPAGE_EQUIP = 3
};

enum ItemInvPage: uint8_t
{
    INVPAGE_INVENTORY = 0,
    INVPAGE_EQUIP = 1,
    INVPAGE_TRADE = 2,
    INVPAGE_CUBE = 3,
    INVPAGE_STASH = 4,
    INVPAGE_BELT = 5,
    INVPAGE_NULL = 255
};

struct GamePanelStates
{
    bool InGame;	//0x0000
    bool InventoryVisible;	//0x0001
    bool StatsVisible;	//0x0002
    bool SkillPopoverVisible;	//0x0003
    bool SkillTreeVisible;	//0x0004
    bool ChatVisible;	//0x0005
    bool N000012BC;	//0x0006
    bool N000012CF;	//0x0007
    bool NpcDialogVisible;	//0x0008
    bool PauseMenuVisible;	//0x0009
    bool AutomapVisible;	//0x000A
    bool VendorInventoryVisible;	//0x000B
    bool ItemsOnGroundVisible;	//0x000C
    bool N000012D5;	//0x000D
    bool QuestMenuVisible;	//0x000E
    bool N000012D7;	//0x000F
    bool N00001256;	//0x0010
    bool N000012E1;	//0x0011
    bool N0000130D;	//0x0012
    bool WaypointMenuVisible;	//0x0013
    bool UNK2Visible;	//0x0014 1 when nothing is open - changes to 0 when pause menu is opened
    bool PartyVisible;	//0x0015
    bool N00001310;	//0x0016
    bool N000012E3;	//0x0017
    bool StashVisible;	//0x0018
    bool CubeVisible;	//0x0019
    bool BeltVisible;	//0x001A
    bool N00001353;	//0x001B
    bool N00001314;	//0x001C
    bool AvatarsVisible;	//0x001D 1 when nothing is open - changes to 0 when pause menu is opened
    bool MercInventoryVisible;	//0x001E
};

struct Grid
{
    D2UnitStrc * Item;	//0x0000
    D2UnitStrc * LastItem;	//0x0008
    int8_t Columns;	//0x0010
    int8_t Rows;	//0x0011
    uint32_t Unk0x0012;	//0x0012
    uint16_t Unk0x0016;	//0x0016
    uint64_t * ItemArray;	//0x0018
};

enum D2PanelName: uint8_t
{
    g_unkpanel0 = 0,
    g_InventoryOpen = 1,
    g_CharacterWindowOpen = 2,
    g_unkpanel3 = 3,
    g_SkillTreeOpen = 4,
    g_unkpanel5 = 5,
    g_NewStatNotifyIcon = 6,
    g_unkpanel7 = 7,
    g_TalkDialogOpen = 8,
    g_Paused = 9,
    g_AutomapOn = 10,
    g_TradeOpen = 11,
    g_unkpanel12 = 12,
    g_ImbuneOrSocketOpen = 13,
    g_QuestLogOpen = 14,
    g_unkpanel15 = 15,
    g_unkpanel16 = 16,
    g_unkpanel17 = 17,
    g_unkpanel18 = 18,
    g_WpMenuOpen = 19,
    g_unkpanel20 = 20,
    g_unkpanel21 = 21,
    g_unkpanel22 = 22,
    g_unkpanel23 = 23,
    g_StashOpen = 24,
    g_CubeOpen = 25,
    g_unkpanel26 = 26,
    g_HelpOpen = 27,
    g_HelpNotifyIcon = 28,
    g_unkpanel29 = 29,
    g_unkpanel30 = 30,
    g_unkpanel31 = 31,
    g_unkpanel32 = 32,
    g_unkpanel33 = 33,
    g_unkpanel34 = 34,
};

struct InputBoxData
{
    wchar_t *pData;	//0x0000
    uint32_t Len;	//0x0008
    uint32_t Unk0x000C;	//0x000C
    uint32_t MaxLen;	//0x0010
    uint32_t Unk0x0014;	//0x0014
    wchar_t Data[0xF];
    uint64_t Valid;
};

class D2MouseOver
{
    int8_t g_bIsMouseOverUnit;	//0x0000
    char pad_0001[3];	//0x0001
    int32_t g_MouseOverUnitType;	//0x0004
    int32_t g_MouseOverUnitID;	//0x0008
};

class D2RosterPetStrc
{
    int32_t nMonStatsId;	//0x0000
    int32_t nPetTypeId;	//0x0004
    int32_t dwUnitId;	//0x0008
    int32_t dwOwnerId;	//0x000C
    bool bDrawIcon;	//0x0010
    char pad_0011[11];	//0x0011
    int32_t nLifePercent;	//0x001C
    char pad_0020[16];	//0x0020
    class D2RosterPetStrc * pNext;	//0x0030

};

class D2ChatMsg
{
    char *pMessage;
    uint16_t MessageLen;
    char pad1[6];
    uint16_t MessageLenMax;
    char pad2[6];
    char Message[512];
    uint64_t ChannelID;
    char *pChannelName;
    uint16_t ChannelNameLen;
    char pad3[6];
    uint16_t ChannelNameLenMax;
    char pad4[6];
    char ChannelName[16];
    char pad5[112];	//was 104 last patch
};

struct D2RString
{
    int32_t Size;	//0x0000
    char pad_0004[12];	//0x0004
    char Data[24];	//0x0010
};

class LauncherData
{
    char pad_0000[192];	//0x0000
    char *SessionID;	//0x00C0
    char pad_00C8[104];	//0x00C8
    char *BnetUserName;	//0x0130
    char pad_0138[80];	//0x0138
    char *BnetOwnername;	//0x0188
    char pad_0190[64];	//0x0190
};

class BnetData
{
    class LauncherData * pLaunchData;	//0x0000
    char pad_0008[32];	//0x0008
    char *SessionID;	//0x0028
    D2RString SessionIDString;
    char *GameName;	//0x0058
    D2RString GameNameString;
    char *GamePassword;	//0x0088
    D2RString GamePasswordString;
    char *RegionString;	//0x00B8
    char pad_00C0[288];	//0x00C0
    char *GameIPAddress;	//0x01E0
    char pad_01E8[96];	//0x01E8
    char *GitBuild;	//0x0248
    char pad_0250[1584];	//0x0250
};

struct unkqwordGameStruct
{
    char unkstuff[92];
    bool bIsExpansion;
    char pad_005D[3];	//0x005D
    bool bIsLadder;	//0x0060 -- based on offline chars with ladder flag set.
};

class HostileInfo
{
    int32_t dwUnitId;	//0x0000
    int32_t hostileFlag;	//0x0004
    class HostileInfo * nextHostile;	//0x0008
};
class RosterUnit
{
    char Name[16];	//0x0000
    char pad_0010[8];	//0x0010
    int32_t dwUnitId;	//0x0018
    char pad_001C[8];	//0x001C
    int32_t playerClass;	//0x0024
    int16_t playerLevel;	//0x0028
    int16_t partyID;	//0x002A
    int32_t area;	//0x002C
    int32_t posX;	//0x0030
    int32_t posY;	//0x0034
    int32_t partyFlags;	//0x0038
    char pad_003C[4];	//0x003C
    class HostileInfo * pHostileInfo;	//0x0040
    char pad_0048[192];	//0x0048
    class RosterUnit * pNextRoster;	//0x0108
};

struct TransactionDialogsLine
{
    wchar_t text[120];	// 0x000
    int32_t unk[6];	// 0x0F0
    void(__stdcall *handler)();	// 0x108
    int32_t bMaybeSelectable;	// 0x10C
};

struct TransactionDialogsInfo
{
    int32_t unk[0x14];	// 0x000
    int32_t numLines;	// 0x050
    int32_t unk_2[0x5];	// 0x054
    TransactionDialogsLine dialogLines[10];	// 0x068
    void *something;	// 0xB08
};

class D2Point32
{
public:
    int32_t X;
    int32_t Y;
};

struct AutomapCell
{
    int32_t fSaved;	// 0x00
    int16_t nCellNo;	// 0x04
    int16_t xPixel;	// 0x06
    int16_t yPixel;	// 0x08
    int16_t wWeight;	// 0x0A
    AutomapCell * pLess;	// 0x0C
    AutomapCell * pMore;	// 0x10
};

struct AutomapLayer
{
    int32_t nLayerNo;	// 0x00
    int32_t fSaved;	// 0x04
    AutomapCell * pFloors;	// 0x08
    AutomapCell * pWalls;	// 0x0C
    AutomapCell * pObjects;	// 0x10
    AutomapCell * pExtras;	// 0x14
    AutomapLayer * pNextLayer;	// 0x18
};

struct AutomapLayer2
{
    int32_t _1[2];	// 0x00
    int32_t nLayerNo;	// 0x08
};

enum D2TradeStates
{
    TRADESTATE_OTHERNOROOM,
    TRADESTATE_SELFNOROOM,
};

struct D2DrlgVertexStrc
{
    int32_t nPosX;	//0x00
    int32_t nPosY;	//0x04
    uint8_t nDirection;	//0x08
    uint8_t pad0x09[3];	//0x09
    int32_t dwFlags;	//0x0C
    D2DrlgVertexStrc * pNext;	//0x10
};

struct D2CorpseStrc
{
    uint32_t unk0x00;	//0x00
    uint32_t dwUnitId;	//0x04
    uint32_t unk0x08;	//0x08
    D2CorpseStrc * pNextCorpse;	//0x0C
};

struct D2PropertyStrc
{
    int32_t nProperty;	//0x00
    int32_t nLayer;	//0x04
    int32_t nMin;	//0x08
    int32_t nMax;	//0x0C
};

struct D2RunesTxt
{
    char szName[64];	//0x00
    char szRuneName[64];	//0x40
    uint8_t nComplete;	//0x80
    uint8_t nServer;	//0x81
    uint16_t wStringId;	//0x82
    uint16_t pad0x84;	//0x84
    uint16_t wIType[6];	//0x86
    uint16_t wEType[3];	//0x92
    int32_t nRune[6];	//0x98
    D2PropertyStrc pProperties[7];	//0xB0
};

struct D2SeedStrc
{
    union
    {
        struct
        {
            uint32_t nLowSeed;	//0x00
            uint32_t nHighSeed;	//0x04
        };
        uint64_t lSeed;	//0x00
    };
};

struct D2UnkMissileCalcStrc
{
    int32_t field_0;
    int32_t field_4;
    int32_t field_8;
    int32_t field_C;
    int32_t field_10;
    int32_t field_14;
    int32_t field_18;
    int32_t field_1C;
    D2SeedStrc pSeed;
};

struct D2ItemSaleInfo
{
    uint32_t Unk0x0000;	//0x0000
    int32_t Page;	//0x0004
    int16_t PosX;	//0x0008
    int16_t PosY;	//0x000A
    uint32_t Unk0x000C;	//0x000C
    int32_t Valid;	//0x0010
};

struct D2ItemCalcStrc
{
    D2UnitStrc * pUnit;	//0x00
    D2UnitStrc * pItem;	//0x04
};

struct D2SkillCalcStrc
{
    D2UnitStrc * pUnit;	//0x00
    int32_t nSkillId;	//0x04
    int32_t nSkillLevel;	//0x08
};

struct D2TCExInfoStrc
{
    int32_t nClassic;
    int32_t nProb;
    int16_t nItemId;
    int16_t nTxtRow;
    uint8_t nFlags;
    int8_t unk0x0D;
    int16_t unk0x0E;
    int16_t unk0x10;
    int16_t unk0x12;
    int16_t unk0x14;
    int16_t unk0x16;
    int16_t unk0x18;
    int16_t unk0x1A;
};

struct D2TCExShortStrc
{
    int16_t nGroup;	//0x00
    int16_t nLevel;	//0x02
    int32_t nTypes;	//0x04
    int32_t nClassic;	//0x08
    int32_t nProb;	//0x0C
    int32_t nPicks;	//0x10
    int32_t nNoDrop;	//0x14
    int16_t unk0x18;	//0x18
    int16_t nMagic;	//0x1A
    int16_t nRare;	//0x1C
    int16_t nSet;	//0x1E
    int16_t nUnique;	//0x20
    int16_t nSuperior;	//0x22
    int16_t nNormal;	//0x24
    int16_t unk0x26;	//0x26
    D2TCExInfoStrc * pInfo;	//0x28
};

struct D2MonStatsInitStrc
{
    int32_t nMinHP;	//0x00
    int32_t nMaxHP;	//0x04
    int32_t nAC;	//0x08
    int32_t nTH;	//0x0C
    int32_t nExp;	//0x10
    int32_t nA1MinD;	//0x14
    int32_t nA1MaxD;	//0x18
    int32_t nA2MinD;	//0x1C
    int32_t nA2MaxD;	//0x20
    int32_t nS1MinD;	//0x24
    int32_t nS1MaxD;	//0x28
    int32_t nElMinD;	//0x2C
    int32_t nElMaxD;	//0x30
    int32_t nElDur;	//0x34
};

struct D2ItemRatioTxt
{
    uint32_t dwUnique;	//0x00
    uint32_t dwUniqueDivisor;	//0x04
    uint32_t dwUniqueMin;	//0x08
    uint32_t dwRare;	//0x0C
    uint32_t dwRareDivisor;	//0x10
    uint32_t dwRareMin;	//0x14
    uint32_t dwSet;	//0x18
    uint32_t dwSetDivisor;	//0x1C
    uint32_t dwSetMin;	//0x20
    uint32_t dwMagic;	//0x24
    uint32_t dwMagicDivisor;	//0x28
    uint32_t dwMagicMin;	//0x2C
    uint32_t dwHiQuality;	//0x30
    uint32_t dwHiQualityDivisor;	//0x34
    uint32_t dwNormal;	//0x38
    uint32_t dwNormalDivisor;	//0x3C
    uint16_t wVersion;	//0x40
    uint8_t nUber;	//0x42
    uint8_t nClassSpecific;	//0x43
};

// jmr: This is wrong, pretty sure this is 0x8C in size.
//      See around 0x306D1F in 67554
struct D2MagicAffixTxt
{
    char szName[32];	//0x00
    uint16_t wTblIndex;	//0x20
    uint16_t wVersion;	//0x22
    D2PropertyStrc pProperties[3];	//0x24
    uint16_t wSpawnable;	//0x54
    char nTransformColor;	//0x56
    uint8_t unk0x57;	//0x57
    uint32_t dwLevel;	//0x58
    uint32_t dwGroup;	//0x5C
    uint32_t dwMaxLevel;	//0x60
    uint8_t nRare;	//0x64
    uint8_t nLevelReq;	//0x65
    uint8_t nClassSpecific;	//0x66
    uint8_t nClass;	//0x67
    uint8_t nClassLevelReq;	//0x68
    uint8_t pad0x69;	//0x69
    uint16_t wIType[7];	//0x6A
    uint16_t wEType[5];	//0x78
    uint16_t wFrequency;	//0x82
    uint32_t dwDivide;	//0x84
    uint32_t dwMultiply;	//0x88
    uint32_t dwAdd;	//0x8C
};

struct D2UnkDrlgLogicStrc
{
    D2RoomExStrc * pRoomEx;	//0x00
    D2DrlgGridStrc * field_4;	//0x04
    D2DrlgGridStrc * pOrientationGrid;	//0x08
    D2DrlgGridStrc * pWallGrid;	//0x0C
    D2DrlgGridStrc * pFloorGrid;	//0x10
    D2DrlgGridStrc * field_14;	//0x14
    int32_t field_18;	//0x18
    int32_t nFlags;	//0x1C
};

struct D2TileLibraryHashStrc
{
    D2TileLibraryHashNodeStrc *pNodes[128];	//0x00
};

struct D2TileLibraryHashRefStrc
{
    D2TileLibraryEntryStrc * pTile;	//0x00
    D2TileLibraryHashRefStrc * pPrev;	//0x04
};

struct D2TileLibraryHashNodeStrc
{
    int32_t nIndex;	//0x00
    int32_t nSubIndex;	//0x04
    int32_t nOrientation;	//0x08
    D2TileLibraryHashRefStrc * pRef;	//0x0C
    D2TileLibraryHashNodeStrc * pPrev;	//0x10
};

struct D2TileRecordStrc
{
    char szLibraryName[260];	//0x00
    void *pLibrary;	//0x104
    D2TileLibraryHashStrc * pHashBlock;	//0x108
    D2TileRecordStrc * pPrev;	//0x10C
};
struct D2TileLibraryEntryStrc
{
    int32_t nDirection;	//0x00
    uint16_t nRoofHeight;	//0x04
    uint16_t nFlags;	//0x06
    int32_t nHeight;	//0x08
    int32_t nWidth;	//0x0C
    int32_t unk0x10;	//0x10
    int32_t nOrientation;	//0x14
    int32_t nIndex;	//0x18
    int32_t nSubIndex;	//0x1C
    int32_t nFrame_Rarity;	//0x20
    int32_t unk0x24;	//0x24
    uint8_t dwTileFlags[4];	//0x28
    int32_t dwBlockOffset_pBlock;	//0x2C
    int32_t nBlockSize;	//0x30
    int32_t nBlocks;	//0x34
    D2TileRecordStrc * pParent;	//0x38
    uint16_t unk0x3C;	//0x3C
    uint16_t nCacheIndex;	//0x3E
    uint32_t unk0x40[4];	//0x40
    //int32_t field_50;
    //int32_t field_54;
    //int32_t field_58;
    //int32_t field_5C;
};

struct D2DrlgTileDataStrc
{
    int32_t nWidth;	//0x00
    int32_t nHeight;	//0x04
    int32_t nPosX;	//0x08
    int32_t nPosY;	//0x0C
    int32_t unk0x10;	//0x10
    uint32_t dwFlags;
    int64_t unk0pad;	//0x14
    D2TileLibraryEntryStrc * pTile;	//0x18
    int32_t unk0x1C;	//0x1C
    D2DrlgTileDataStrc * unk0x20;	//0x20
    int32_t unk0x24;	//0x24
    uint8_t nRed;	//0x28
    uint8_t nGreen;	//0x29
    uint8_t nBlue;	//0x2A
    uint8_t nIntensity;	//0x2B
    int32_t unk0x2C;	//0x2C
};

struct D2DrlgCoordStrc
{
    int32_t nPosX;	//0x00
    int32_t nPosY;	//0x04
    int32_t nWidth;	//0x08
    int32_t nHeight;	//0x0C
};

struct D2DrlgLevelLinkDataStrc
{
    D2SeedStrc pSeed;	//0x00
    D2DrlgCoordStrc pLevelCoord[15];	//0x08
    D2DrlgLinkStrc * pLink;	//0xF8
    union
    {
        int32_t nRand[4][15];	//0xFC
        int32_t nRand2[60];	//0xFC
    };
    int32_t nIteration;	//0x1EC
    int32_t nCurrentLevel;	//0x1F0
};

struct D2DrlgLinkStrc
{
    void *pfLinker;	//0x00
    int32_t nLevel;	//0x04
    int32_t nLevelLink;	//0x08
    int32_t nLevelLinkEx;	//0x0C
};

struct D2DrlgWarpStrc
{
    int32_t nLevel;	//0x00
    int32_t nVis[8];	//0x04
    int32_t nWarp[8];
    int32_t unkval;
    D2DrlgWarpStrc * pNext;	//0x44
};

struct D2MissileDamageDataStrc
{
    int32_t nFlags;	//0x00
    int32_t nMinDamage;	//0x04
    int32_t nMaxDamage;	//0x08
    int32_t nFireMinDamage;	//0x0C
    int32_t nFireMaxDamage;	//0x10
    int32_t nFireLength;	//0x14
    int32_t nLightMinDamage;	//0x18
    int32_t nLightMaxDamage;	//0x1C
    int32_t nMagicMinDamage;	//0x20
    int32_t nMagicMaxDamage;	//0x24
    int32_t nColdMinDamage;	//0x28
    int32_t nColdMaxDamage;	//0x2C
    int32_t nColdLength;	//0x30
    int32_t nPoisonMinDamage;	//0x34
    int32_t nPoisonMaxDamage;	//0x38
    int32_t nPoisonLength;	//0x3C
    int32_t nPoisonCount;	//0x40
    int32_t nLifeDrainMinDamage;	//0x44
    int32_t nLifeDrainMaxDamage;	//0x48
    int32_t nManaDrainMinDamage;	//0x4C
    int32_t nManaDrainMaxDamage;	//0x50
    int32_t nStaminaDrainMinDamage;	//0x54
    int32_t nStaminaDrainMaxDamage;	//0x58
    int32_t nStunLength;	//0x5C
    int32_t nBurningMin;	//0x60
    int32_t nBurningMax;	//0x64
    int32_t nBurnLength;	//0x68
    int32_t nDemonDamagePercent;	//0x6C
    int32_t nUndeadDamagePercent;	//0x70
    int32_t nDamageTargetAC;	//0x74
    int32_t nDamagePercent;	//0x78
};

struct D2UnkOutdoorStrc
{
    D2DrlgLevelStrc * pLevel;	//0x00
    int32_t * field_4;	//0x04
    D2DrlgGridStrc * pGrid1;	//0x08
    D2DrlgGridStrc * pGrid2;	//0x0C
    int32_t nLevelPrestId;	//0x10
    int32_t field_14;	//0x14
    int32_t nLvlSubId;	//0x18
    unsigned int(__fastcall *field_1C)(D2DrlgLevelStrc *pLevel, int nX, int nY);	//0x1C
    BOOL(__fastcall *field_20)(D2DrlgLevelStrc *pLevel, int nX, int nY, int nId, int nOffset, char nFlags);	//0x20
    BOOL(__fastcall *field_24)(D2DrlgLevelStrc *pLevel, int nX, int nY, int a4, int a5, unsigned int a6);	//0x24
    int(__fastcall *field_28)(D2DrlgLevelStrc *pLevel, int nStyle, int a3);	//0x28
    void(__fastcall *field_2C)(D2DrlgLevelStrc *pLevel, int nX, int nY);	//0x2C
    void(__fastcall *field_30)(D2DrlgLevelStrc *pLevel, int nX, int nY);	//0x30
    void(__fastcall *field_34)(D2DrlgLevelStrc *pLevel, int nX, int nY, int nLevelPrestId, int nRand, BOOL a6);	//0x34
};

struct D2MissilesTxt
{
    uint16_t wId;	//0x00
    uint16_t pad0x02;	//0x02
    uint32_t dwMissileFlags;	//0x04
    uint16_t wCltDoFunc;	//0x08
    uint16_t wCltHitFunc;	//0x0A
    uint16_t wSrvDoFunc;	//0x0C
    uint16_t wSrvHitFunc;	//0x0E
    uint16_t wSrvDmgFunc;	//0x10
    uint16_t wTravelSound;	//0x12
    uint16_t wHitSound;	//0x14
    uint16_t wExplosionMissile;	//0x16
    uint16_t wSubMissile[3];	//0x18
    uint16_t wCltSubMissile[3];	//0x1E
    uint16_t wHitSubMissile[4];	//0x24
    uint16_t wCltHitSubMissile[4];	//0x2C
    uint16_t wProgSound;	//0x34
    uint16_t wProgOverlay;	//0x36
    uint32_t dwParam[5];	//0x38
    uint32_t dwHitPar[3];	//0x4C
    uint32_t dwCltParam[5];	//0x58
    uint32_t dwCltHitPar[3];	//0x6C
    uint32_t dwDmgParam[2];	//0x78
    uint32_t dwSrvCalc;	//0x80
    uint32_t dwCltCalc;	//0x84
    uint32_t dwHitCalc;	//0x88
    uint32_t dwCltHitCalc;	//0x8C
    uint32_t dwDmgCalc;	//0x90
    uint8_t nHitClass;	//0x94
    uint8_t pad0x95;	//0x95
    uint16_t wRange;	//0x96
    uint16_t wLevRange;	//0x98
    uint8_t nVel;	//0x9A
    uint8_t nVelLev;	//0x9B
    uint8_t nMaxVel;	//0x9C
    uint8_t pad0x9D;	//0x9D
    uint16_t wAccel;	//0x9E
    uint16_t wAnimRate;	//0xA0
    uint16_t wXoffset;	//0xA2
    uint16_t wYoffset;	//0xA4
    uint16_t wZoffset;	//0xA6
    uint32_t dwHitFlags;	//0xA8
    uint16_t wResultFlags;	//0xAC
    uint8_t nKnockBack;	//0xAE
    uint8_t pad0xAF;	//0xAF
    uint32_t dwMinDamage;	//0xB0
    uint32_t dwMaxDamage;	//0xB4
    uint32_t dwMinLevDam[5];	//0xB8
    uint32_t dwMaxLevDam[5];	//0xCC
    uint32_t dwDmgSymPerCalc;	//0xE0
    uint8_t nElemType;	//0xE4
    uint8_t pad0xE5[3];	//0xE5
    uint32_t dwElemMin;	//0xE8
    uint32_t dwElemMax;	//0xEC
    uint32_t dwMinElemLev[5];	//0xF0
    uint32_t dwMaxElemLev[5];	//0x104
    uint32_t dwElemDmgSymPerCalc;	//0x118
    uint32_t dwElemLen;	//0x11C
    uint32_t dwElemLevLen[3];	//0x120
    uint8_t nCltSrcTown;	//0x12C
    uint8_t nSrcDamage;	//0x12D
    uint8_t nSrcMissDmg;	//0x12E
    uint8_t nHoly;	//0x12F
    uint8_t nLight;	//0x130
    uint8_t nFlicker;	//0x131
    uint8_t nRGB[3];	//0x132
    uint8_t nInitSteps;	//0x135
    uint8_t nActivate;	//0x136
    uint8_t nLoopAnim;	//0x137
    char szCelFile[64];	//0x138
    uint8_t nAnimLen;	//0x178
    uint8_t pad0x179[3];	//0x179
    uint32_t dwRandStart;	//0x17C
    uint8_t nSubLoop;	//0x180
    uint8_t nSubStart;	//0x181
    uint8_t nSubStop;	//0x182
    uint8_t nCollideType;	//0x183
    uint8_t nCollision;	//0x184
    uint8_t nClientCol;	//0x185
    uint8_t nCollideKill;	//0x186
    uint8_t nCollideFriend;	//0x187
    uint8_t nNextHit;	//0x188
    uint8_t nNextDelay;	//0x189
    uint8_t nSize;	//0x18A
    uint8_t nToHit;	//0x18B
    uint8_t nAlwaysExplode;	//0x18C
    uint8_t nTrans;	//0x18D
    uint8_t nQty;	//0x18E
    uint8_t pad0x18F;	//0x18F
    uint32_t dwSpecialSetup;	//0x190
    int16_t nSkill;	//0x194
    uint8_t nHitShift;	//0x196
    uint8_t unk0x197[5];	//0x197
    uint32_t dwDamageRate;	//0x19C
    uint8_t nNumDirections;	//0x1A0
    uint8_t nAnimSpeed;	//0x1A1
    uint8_t nLocalBlood;	//0x1A2
    uint8_t pad0x1A3;	//0x1A3
};

struct D2TxtLinkNodeStrc
{
    char szText[32];	//0x00
    int nLinkIndex;	//0x20
    D2TxtLinkNodeStrc * pPrevious;	//0x24
    D2TxtLinkNodeStrc * pNext;	//0x28
};

struct D2TxtLinkTblStrc
{
    union
    {
        char szCode[4];	//0x00
        uint32_t dwCode;	//0x00
    };
    int nLinkIndex;	//0x04
};

struct D2TxtLinkStrc
{
    int32_t nRecords;	//0x00
    int32_t nAllocatedCells;	//0x04
    D2TxtLinkTblStrc * pTbl;	//0x08
    D2TxtLinkNodeStrc * pFirstNode;	//0x0C
};

struct D2BinFileStrc
{
    uint8_t * pDataBuffer;	//0x00
    uint8_t * pData;	//0x04
    int32_t nRecordCount;	//0x08
    int32_t nCellCount;	//0x0C
};

enum D2C_TxtFieldTypes: uint32_t
{
    TXTFIELD_NONE,
    TXTFIELD_ASCII,
    TXTFIELD_DWORD,
    TXTFIELD_WORD,
    TXTFIELD_BYTE,
    TXTFIELD_UNKNOWN1,
    TXTFIELD_UNKNOWN2,
    TXTFIELD_BYTE2,
    TXTFIELD_DWORD2,
    TXTFIELD_RAW,
    TXTFIELD_ASCIITOCODE,
    TXTFIELD_UNKNOWN3,
    TXTFIELD_UNKNOWN4,
    TXTFIELD_CODETOBYTE,
    TXTFIELD_UNKNOWN5,
    TXTFIELD_CODETOWORD,
    TXTFIELD_UNKNOWN6,
    TXTFIELD_NAMETOINDEX,
    TXTFIELD_NAMETOINDEX2,
    TXTFIELD_NAMETODWORD,
    TXTFIELD_NAMETOWORD,
    TXTFIELD_NAMETOWORD2,
    TXTFIELD_KEYTOWORD,
    TXTFIELD_CUSTOMLINK,
    TXTFIELD_UNKNOWN7,
    TXTFIELD_CALCTODWORD,
    TXTFIELD_BIT
};

struct D2BinFieldStrc
{
    char *szFieldName;	//0x00
    D2C_TxtFieldTypes nFieldType;	//0x04
    int32_t nFieldLength;	//0x08
    int32_t nFieldOffset;	//0x0C
    void *pLinkField;	//0x10
};

struct D2UnkExcelStrc
{
    D2UnkExcelStrc * pNext;	//0x00
    uint32_t dwHash;	//0x04
    D2BinFieldStrc * pBinField;	//0x08
};

struct D2UnkFogStrc
{
    void *pCallback;	//0x00
    int32_t unk0x04;	//0x04
};

struct D2MonModeTxtStub
{
    uint32_t dwCode;	//0x00
};

struct D2HireDescTxt
{
    uint32_t dwCode;	//0x00
};

struct D2DataTablesStrc
{
    uint64_t * pPlayerClassTxt;	//0x0000
    uint64_t nPlayerClassTxtCount;	//0x0008
    uint64_t nPlayerClassTxtCountEx;	//0x0010
    uint64_t * pPlayerClassTxtLinker;	//0x0018
    uint64_t * pBodyLocsTxt;	//0x0020
    uint64_t nBodyLocsTxtCount;	//0x0028
    uint64_t nBodyLocsTxtCountEx;	//0x0030
    uint64_t * pBodyLocsTxtLinker;	//0x0038
    uint64_t * pStorePageTxt;	//0x0040
    uint64_t nStorePageTxtCount;	//0x0048
    uint64_t nStorePageTxtCountEx;	//0x0050
    uint64_t * pStorePageTxtLinker;	//0x0058
    uint64_t * pElemTypesTxt;	//0x0060
    uint64_t nElemTypesTxtCount;	//0x0068
    uint64_t nElemTypesTxtCountEx;	//0x0070
    uint64_t * pElemTypesTxtLinker;	//0x0078
    uint64_t * pHitClassTxt;	//0x0080
    uint64_t nHitClassTxtCount;	//0x0088
    uint64_t nHitClassTxtCountEx;	//0x0090
    uint64_t * pHitClassTxtLinker;	//0x0098
    char pad_00A0[64];	//0x00A0
    uint64_t * pActInfoTxt;	//0x00E0
    uint64_t nActInfoTxtCount;	//0x00E8
    uint64_t nActInfoTxtCountEx;	//0x00F0
    uint64_t * pActInfoTxtLinker;	//0x00F8
    uint64_t * pCommonActCOF;	//0x0100
    uint64_t nCommonActCOFCount;	//0x0108
    uint64_t nCommonActCOFCountEx;	//0x0110
    uint64_t * pSkillCalcTxt;	//0x0118
    uint64_t nSkillCalcTxtCount;	//0x0120
    uint64_t nSkillCalcTxtCountEx;	//0x0128
    uint64_t * pSkillCalcTxtLinker;	//0x0130
    uint64_t * pSkillsCode;	//0x0138 something dealing w/ skills
    uint64_t nSkillsCodeSize;	//0x0140
    uint64_t N000000D5;	//0x0148
    uint64_t * N000000D6;	//0x0150 something dealing w/ skills
    uint64_t N000000D7;	//0x0158
    uint64_t N000000D8;	//0x0160
    uint64_t * pMissileCalcTxt;	//0x0168
    uint64_t nMissileCalcTxtCount;	//0x0170
    uint64_t nMissileCalcTxtCountEx;	//0x0178
    uint64_t * pMissileCalcTxtLinker;	//0x0180
    uint64_t * pMissCode;	//0x0188
    uint64_t nMissCodeCount;	//0x0190
    uint64_t nMissCodeCountEx;	//0x0198
    uint64_t * pSkillCode;	//0x01A0
    uint64_t nSkillCodeCount;	//0x01A8
    uint64_t nSkillCodeCountEx;	//0x01B0
    uint64_t * iSkillCode;	//0x01B8
    uint64_t pEventsTxt;	//0x01C0
    uint64_t nEventsTxtCount;	//0x01C8
    uint64_t nEventsTxtCountEx;	//0x01D0
    uint64_t * pEventsTxtLinker;	//0x01D8
    uint64_t * pCompCodeTxt;	//0x01E0
    uint64_t nCompCodeTxtCount;	//0x01E8
    uint64_t nCompCodeTxtCountEx;	//0x01F0
    uint64_t * pCompCodeTxtLinker;	//0x01F8
    uint64_t * pMonAiTxt;	//0x0200
    uint64_t nMonAiTxtCount;	//0x0208
    uint64_t nMonAiTxtCountEx;	//0x0210
    uint64_t * pMonAiTxtLinker;	//0x0218
    uint64_t * pItemsLinker;	//0x0220
    uint64_t * pItemsCode;	//0x0228
    uint64_t nItemsCodeCount;	//0x0230
    uint64_t nItemsCodeCountEx;	//0x0238
    uint64_t * pPropertiesTxt;	//0x0240
    uint64_t nPropertiesTxtCount;	//0x0248
    uint64_t nPropertiesTxtCountEx;	//0x0250
    uint64_t * pPropertiesTxtLinker;	//0x0258
    uint64_t * pRunesTxtLinker;	//0x0260 this doesnt seem right?
    uint64_t * pObjectsTxtLinker;	//0x0268 this doesnt seem right?
    uint64_t * pStatesTxt;	//0x0270
    uint64_t nStatesTxtCount;	//0x0278
    uint64_t nStatesTxtCountEx;	//0x0280
    uint64_t * pStatesTxtLinker;	//0x0288
    uint32_t * pStateMasks;	//0x0290
    uint64_t nStateMasksCount;	//0x0298 ?????
    uint64_t nStateMasksCountEx;	//0x02A0 ?????
    uint32_t *fStateMasks[40];	//0x02A8
    uint64_t * pProgressiveStates;	//0x03E8
    char pad_03F0[8];	//0x03F0
    uint64_t nProgressiveStates;	//0x03F8
    uint64_t nMaxProgressiveStates;	//0x0400
    uint64_t * pCurseStates;	//0x0408
    uint64_t nCurseStates;	//0x0410
    uint64_t nMaxCurseStates;	//0x0418
    uint64_t * N0000012F;	//0x0420
    uint64_t N00000130;	//0x0428
    uint64_t N00000131;	//0x0430
    uint64_t * pTransformStates;	//0x0438
    uint64_t nTransformStates;	//0x0440
    uint64_t nMaxTransformStates;	//0x0448
    uint64_t * N00000135;	//0x0450
    uint64_t N00000136;	//0x0458
    uint64_t N00000137;	//0x0460
    uint64_t * pActionStates;	//0x0468
    uint64_t nActionStates;	//0x0470
    uint64_t nMaxActionStates;	//0x0478
    uint64_t * pColourStates;	//0x0480
    uint64_t nColourStates;	//0x0488
    uint64_t nMaxColourStates;	//0x0490
    uint64_t * pSoundsTxt;	//0x0498
    uint64_t nSoundsTxtCount;	//0x04A0
    uint64_t nSoundsTxtCountEx;	//0x04A8
    uint64_t * pSoundTxtLinker;	//0x04B0
    uint64_t * pSoundEnvTxt;	//0x04B8
    uint64_t nSoundEnvTxtCount;	//0x04C0
    uint64_t nSoundEnvTxtCountEx;	//0x04C8
    uint64_t * pSoundEnvTxtLinker;	//0x04D0
    uint64_t * pHirelingTxt;	//0x04D8
    uint64_t nHirelingTxtCount;	//0x04E0
    uint64_t nHirelingTxtCountEx;	//0x04E8
    uint32_t nClassicHirelingStartRecordIds[256];	//0x04F0
    uint32_t nExpansionHirelingStartRecordIds[256];	//0x08F0
    uint64_t * pNpcTxt;	//0x0CF0
    uint64_t nNpcTxtCount;	//0x0CF8
    uint64_t nNpcTxtCountEx;	//0x0D00
    uint64_t * pColorsTxt;	//0x0D08
    uint64_t nColorsTxtCount;	//0x0D10
    uint64_t nColorsTxtCountEx;	//0x0D18
    uint64_t * pColorsLinker;	//0x0D20
    uint64_t * pTreasureClassExTxtLinker;	//0x0D28
    uint64_t * pTreasureClassEx;	//0x0D30
    uint64_t N0000087F;	//0x0D38
    uint64_t N00000880;	//0x0D40
    uint64_t * N00000881;	//0x0D48 something to w/ treasure classes
    uint64_t N00000882;	//0x0D50
    uint32_t N00000883;	//0x0D58
    uint32_t N00001823;	//0x0D5C
    uint64_t * N00000884;	//0x0D60
    uint64_t * N00000885;	//0x0D68
    uint64_t * N00000886;	//0x0D70
    uint64_t * N00000887;	//0x0D78
    uint64_t * N00000888;	//0x0D80
    uint64_t * N00000889;	//0x0D88
    uint64_t * N0000088A;	//0x0D90
    uint64_t * N0000088B;	//0x0D98
    uint64_t * N0000088C;	//0x0DA0
    uint64_t * N0000088D;	//0x0DA8
    uint64_t * N0000088E;	//0x0DB0
    uint64_t * N0000088F;	//0x0DB8
    uint64_t * N00000890;	//0x0DC0
    uint64_t * N00000891;	//0x0DC8
    uint64_t * N00000892;	//0x0DD0
    uint64_t * N00000893;	//0x0DD8
    uint64_t N00000894;	//0x0DE0
    uint32_t N00000895;	//0x0DE8
    uint32_t N00001820;	//0x0DEC
    uint64_t * N00000896;	//0x0DF0
    uint64_t * N00000897;	//0x0DF8
    uint64_t * N00000898;	//0x0E00
    uint64_t * N00000899;	//0x0E08
    uint64_t * N0000089A;	//0x0E10
    uint64_t * N0000089B;	//0x0E18
    uint64_t * N0000089C;	//0x0E20
    uint64_t * N0000089D;	//0x0E28
    uint64_t * N0000089E;	//0x0E30
    uint64_t * N0000089F;	//0x0E38
    uint64_t * N000008A0;	//0x0E40
    uint64_t * N000008A1;	//0x0E48
    uint64_t * N000008A2;	//0x0E50
    uint64_t * N000008A3;	//0x0E58
    uint64_t * N000008A4;	//0x0E60
    uint64_t * N000008A5;	//0x0E68
    uint64_t N000008A6;	//0x0E70
    uint32_t N000008A7;	//0x0E78
    uint32_t N0000181D;	//0x0E7C
    uint64_t * N000008A8;	//0x0E80
    uint64_t * N000008A9;	//0x0E88
    uint64_t * N000008AA;	//0x0E90
    uint64_t * N000008AB;	//0x0E98
    uint64_t * N000008AC;	//0x0EA0
    uint64_t * N000008AD;	//0x0EA8
    uint64_t * N000008AE;	//0x0EB0
    uint64_t * N000008AF;	//0x0EB8
    uint64_t * N000008B0;	//0x0EC0
    uint64_t * N000008B1;	//0x0EC8
    uint64_t * N000008B2;	//0x0ED0
    uint64_t * N000008B3;	//0x0ED8
    uint64_t * N000008B4;	//0x0EE0
    uint64_t * N000008B5;	//0x0EE8
    uint64_t * N000008B6;	//0x0EF0
    D2MonStatsTxt * pMonStatsTxt;	//0x0EF8
    uint64_t nMonStatsTxtCount;	//0x0F00
    uint64_t nMonStatsTxtCountEx;	//0x0F08
    uint64_t * pMonStatsTxtLinker;	//0x0F10
    uint64_t * pMonSoundsTxt;	//0x0F18
    uint64_t nMonSoundsTxtCount;	//0x0F20
    uint64_t nMonSoundsTxtCountEx;	//0x0F28
    uint64_t * pMonSoundsTxtLinker;	//0x0F30
    uint64_t * pMonStats2Txt;	//0x0F38
    uint64_t nMonStats2TxtCount;	//0x0F40
    uint64_t nMonStats2TxtCountEx;	//0x0F48
    uint64_t * pMonStats2TxtLinker;	//0x0F50
    uint64_t pMonPlaceTxt;	//0x0F58
    uint64_t nMonPlaceTxtCount;	//0x0F60
    uint64_t nMonPlaceTxtCountEx;	//0x0F68
    uint64_t * pMonPlaceTxtLinker;	//0x0F70
    uint64_t * pMonPresetTxt;	//0x0F78
    uint64_t nMonPresetTxtCount;	//0x0F80
    uint64_t nMonPresetTxtCountEx;	//0x0F88
    uint64_t * Unk0xF88;	//0x0F90
    uint64_t N000008CB;	//0x0F98
    uint32_t N000008CC;	//0x0FA0
    uint32_t N00001827;	//0x0FA4
    uint64_t * Unk0xFA0;	//0x0FA8
    uint64_t *pMonPresetTxtActSections[5];	//0x0FB0
    uint64_t N000008D3;	//0x0FD8
    uint32_t N000008D4;	//0x0FE0
    uint32_t N0000182A;	//0x0FE4
    uint32_t nMonPresetTxtActRecordCounts[5];	//0x0FE8
    uint32_t N00001CC6;	//0x0FFC
    uint64_t * Unk0xFF8;	//0x1000 pWanderingMonTxt???
    uint64_t N000008D9;	//0x1008
    uint64_t N000008DA;	//0x1010
    uint64_t * pSuperUniquesTxt;	//0x1018
    uint64_t nSuperUniquesTxtCount;	//0x1020
    uint64_t nSuperUniquesTxtCountEx;	//0x1028
    uint64_t * pSuperUniquesLinker;	//0x1030
    uint16_t nSuperUniqueIds[66];	//0x1038
    uint32_t N0000184D;	//0x10BC
    uint64_t * pMissilesTxt;	//0x10C0
    uint64_t nMissilesTxtCount;	//0x10C8
    uint64_t nMissilesTxtCountEx;	//0x10D0
    uint64_t * pMissilesTxtLinker;	//0x10D8
    uint64_t * pMonLvlTxt;	//0x10E0
    uint64_t nMonLvlTxtCount;	//0x10E8
    uint64_t nMonLvlTxtCountEx;	//0x10F0
    uint64_t * pMonSeqTxt;	//0x10F8
    uint64_t nMonSeqTxtCount;	//0x1100
    uint64_t nMonSeqTxtCountEx;	//0x1108
    uint64_t * N000008FA;	//0x1110
    uint64_t * pMonSeqTable;	//0x1118
    uint64_t nMonSeqTableCount;	//0x1120
    uint64_t nMonSeqTableCountEx;	//0x1128
    uint64_t * pSkillDescTxt;	//0x1130
    uint64_t nSkillDescTxtCount;	//0x1138
    uint64_t nSkillDescTxtCountEx;	//0x1140
    uint64_t * pSkillDescTxtLinker;	//0x1148
    D2SkillsTxt * pSkillsTxt;	//0x1150
    uint64_t nSkillTxtCount;	//0x1158
    uint64_t nSkillTxtCountEx;	//0x1160
    uint64_t * pSkillsTxtLinker;	//0x1168
    uint64_t * Unk0x1168;	//0x1170
    uint64_t Unk0x1170;	//0x1178
    uint64_t Unk0x1178;	//0x1180
    uint64_t N00000909;	//0x1188
    uint64_t * N0000090A;	//0x1190
    uint64_t N0000090B;	//0x1198
    uint64_t N0000090C;	//0x11A0
    uint64_t * pPassiveSkills;	//0x11A8
    uint64_t nPassiveSkills;	//0x11B0
    uint64_t N0000090F;	//0x11B8
    uint64_t * N00000910;	//0x11C0
    uint64_t * pOverlayTxt;	//0x11C8
    uint64_t nOverlayTxtCount;	//0x11D0
    uint64_t nOverlayTxtCountEx;	//0x11D8
    uint64_t * pCharStatsTxt;	//0x11E0
    uint64_t nCharStatTxtCount;	//0x11E8
    uint64_t nCharStatTxtCountEx;	//0x11F0
    uint64_t * pItemStatCostTxt;	//0x11F8
    uint64_t nItemStatCostTxtCount;	//0x1200
    uint64_t nItemStatCostTxtCountEx;	//0x1208
    uint64_t * pItemStatCostTxtLinker;	//0x1210
    uint64_t * N0000091B;	//0x1218
    uint64_t N0000091C;	//0x1220
    uint64_t N0000091D;	//0x1228
    uint64_t * pMonEquipTxt;	//0x1230
    uint64_t nMonEquipTxtCount;	//0x1238
    uint64_t nMonEquipTxtCountEx;	//0x1240
    uint64_t * pPetTypeTxt;	//0x1248
    uint64_t nPetTypeTxtCount;	//0x1250
    uint64_t nPetTypeTxtCountEx;	//0x1258
    uint64_t * pPetTypeTxtLinker;	//0x1260
    uint64_t * pItemTypesTxtLinker;	//0x1268
    D2ItemTypesTxt * pItemTypesTxt;	//0x1270
    uint64_t nItemTypesTxtCount;	//0x1278
    uint64_t nItemTypesTxtCountEx;	//0x1280
    uint64_t nItemTypesIndex;	//0x1288
    uint32_t * pItemTypesEquivalenceLUTs;	//0x1290
    uint64_t N0000092B;	//0x1298
    uint64_t N0000092C;	//0x12A0
    uint64_t * pSetsTxtLinker;	//0x12A8
    uint64_t * pSetsTxt;	//0x12B0
    uint64_t nSetTxtCount;	//0x12B8
    uint64_t nSetTxtCountEx;	//0x12C0
    uint64_t * pSetItemsTxtLinker;	//0x12C8
    uint64_t * pSetItemsTxt;	//0x12D0
    uint64_t nSetItemsTxtCount;	//0x12D8
    uint64_t nSetItemsTxtCountEx;	//0x12E0
    uint64_t * pUniqueItemsTxtLinker;	//0x12E8
    uint64_t * pUniqueItemsTxt;	//0x12F0
    uint64_t nUniqueItemsTxtCount;	//0x12F8
    uint64_t nUniqueItemsTxtCountEx;	//0x1300
    uint64_t * pMonPropTxtLinker;	//0x1308
    uint64_t * pMonPropTxt;	//0x1310
    uint64_t nMonPropTxtCount;	//0x1318
    uint64_t nMonPropTxtCountEx;	//0x1320
    uint64_t * pMonTypeTxtLinker;	//0x1328
    uint64_t * pMonTypeTxt;	//0x1330
    uint64_t nMonTypeTxtCount;	//0x1338
    uint64_t nMonTypeTxtCountEx;	//0x1340
    uint64_t * N00000941;	//0x1348
    uint64_t N00000942;	//0x1350
    uint64_t N00000943;	//0x1358
    uint64_t N00000944;	//0x1360
    uint64_t * pMonUModTxtLinker;	//0x1368
    uint64_t * pMonUModTxt;	//0x1370
    uint64_t nMonUModTxtCount;	//0x1378
    uint64_t nMonUModTxtCountEx;	//0x1380
    D2LevelsTxt * pLevelsTxt;	//0x1388
    uint64_t nLevelsTxtCount;	//0x1390
    uint64_t nLevelsTxtCountEx;	//0x1398
    uint64_t * N0000094C;	//0x13A0
    uint64_t * N0000094D;	//0x13A8
    uint64_t N0000094E;	//0x13B0
    uint64_t N0000094F;	//0x13B8
    uint64_t * pLvlPrestTxt;	//0x13C0
    uint64_t nLvlPrestTxtCount;	//0x13C8
    uint64_t nLvlPrestTxtCountEx;	//0x13D0
    uint64_t N00000953;	//0x13D8
    uint64_t * pAnimData;	//0x13E0 maybe?
    uint64_t * pExperienceTxt;	//0x13E8
    uint64_t nExperienceTxtCount;	//0x13F0
    uint64_t nExperienceTxtCountEx;	//0x13F8
    uint64_t * pDifficultyLevelsTxt;	//0x1400
    uint64_t nDifficultyLevelsTxtCount;	//0x1408
    uint64_t nDifficultyLevelsTxtCountEx;	//0x1410
    uint64_t N0000095B;	//0x1418
    uint64_t N0000095C;	//0x1420
    uint64_t N0000095D;	//0x1428
    D2ObjectsTxt * pObjectsTxt;	//0x1430
    uint64_t nObjectsTxtCount;	//0x1438
    uint64_t nObjectsTxtCountEx;	//0x1440
    uint64_t * pObjGroupTxt;	//0x1448
    uint64_t nObjGroupTxtCount;	//0x1450
    uint64_t nObjGroupTxtCountEx;	//0x1458
    D2RunesTxt * pRunesTxt_wrong;	//0x1460
    uint64_t nRunesTxtCount;	//0x1468
    uint64_t nRunesTxtCountEx;	//0x1470
    uint64_t * N00000967;	//0x1478
    uint64_t N00000968;	//0x1480
    uint64_t N00000969;	//0x1488
    uint64_t * N0000096A;	//0x1490
    uint64_t * N0000096B;	//0x1498
    uint64_t * N0000096C;	//0x14A0
    uint64_t * N0000096D;	//0x14A8 i think this struct ends here
    uint64_t N00000A77;	//0x14B0
    uint64_t N00000A78;	//0x14B8
    uint64_t N00000A79;	//0x14C0
    uint64_t N00000A7A;	//0x14C8
    uint64_t N00000A7B;	//0x14D0
    uint64_t N00000A7C;	//0x14D8
    uint64_t N00000A7D;	//0x14E0
    uint64_t N00000A7E;	//0x14E8
    uint64_t N00000A7F;	//0x14F0
    uint64_t N00000A80;	//0x14F8
    uint64_t N00000A81;	//0x1500
    uint32_t N00000A82;	//0x1508
    uint32_t Unk0x1504;	//0x150C
    uint64_t N00000A83;	//0x1510
    uint64_t * N00000A84;	//0x1518
    uint32_t N00000A85;	//0x1520
    uint32_t N00001F8B;	//0x1524
    uint64_t N00000A86;	//0x1528
    uint64_t * N00000A87;	//0x1530
    uint64_t * N00000A88;	//0x1538
    uint64_t * N00000A89;	//0x1540
    uint64_t * N00000A8A;	//0x1548
    uint64_t N00000A8B;	//0x1550
    uint64_t N00000A8C;	//0x1558
    uint64_t N00000A8D;	//0x1560
    uint64_t N00000A8E;	//0x1568
    uint64_t N00000A8F;	//0x1570
    uint64_t N00000A90;	//0x1578
    uint64_t N00000A91;	//0x1580
    uint64_t N00000A92;	//0x1588
    uint64_t N00000A93;	//0x1590
    uint64_t N00000A94;	//0x1598
    uint64_t N00000A95;	//0x15A0
    uint64_t N00000A96;	//0x15A8
    uint64_t N00000A97;	//0x15B0
    uint64_t * N00000A98;	//0x15B8
    uint32_t N00000A99;	//0x15C0
    uint32_t Unk0x15BC;	//0x15C4
    uint64_t N00000A9A;	//0x15C8
    uint64_t * N00000A9B;	//0x15D0
    uint64_t * N00000A9C;	//0x15D8
    uint64_t * N00000A9D;	//0x15E0
    uint64_t * N00000A9E;	//0x15E8
    uint64_t N00000A9F;	//0x15F0
    uint64_t N00000AA0;	//0x15F8
    uint64_t N00000AA1;	//0x1600
    uint64_t N00000AA2;	//0x1608
    uint64_t N00000AA3;	//0x1610
    uint64_t N00000AA4;	//0x1618
    uint64_t N00000AA5;	//0x1620
    uint64_t N00000AA6;	//0x1628
    uint64_t N00000AA7;	//0x1630
    uint64_t N00000AA8;	//0x1638
    uint64_t N00000AA9;	//0x1640
    uint64_t N00000AAA;	//0x1648
    uint64_t N00000AAB;	//0x1650
    uint64_t N00000AAC;	//0x1658
    uint32_t N00000AAD;	//0x1660
    uint32_t Unk0x165C;	//0x1664
    uint64_t N00000AAE;	//0x1668
    uint64_t N00000AAF;	//0x1670
    uint64_t N00000AB0;	//0x1678
    uint64_t N00000AB1;	//0x1680
    uint64_t N00000AB2;	//0x1688
    uint64_t N00000AB3;	//0x1690
    uint64_t N00000AB4;	//0x1698
    uint64_t N00000AB5;	//0x16A0
    uint64_t N00000AB6;	//0x16A8
    uint64_t N00000AB7;	//0x16B0
    uint64_t N00000AB8;	//0x16B8
    uint64_t N00000AB9;	//0x16C0
    uint64_t N00000ABA;	//0x16C8
    uint64_t N00000ABB;	//0x16D0
    uint64_t N00000ABC;	//0x16D8
    uint64_t N00000ABD;	//0x16E0
    uint64_t N00000ABE;	//0x16E8
    uint64_t N00000ABF;	//0x16F0
    uint64_t N00000AC0;	//0x16F8
    uint32_t N00000AC1;	//0x1700
    uint32_t Unk0x16FC;	//0x1704
    uint64_t N00000AC2;	//0x1708
    uint64_t N00000AC3;	//0x1710
    uint64_t N00000AC4;	//0x1718
    uint64_t N00000AC5;	//0x1720
    uint64_t N00000AC6;	//0x1728
    uint64_t N00000AC7;	//0x1730
    uint64_t N00000AC8;	//0x1738
    uint64_t N00000AC9;	//0x1740
    uint64_t N00000ACA;	//0x1748
    uint64_t N00000ACB;	//0x1750
    uint64_t N00000ACC;	//0x1758
    uint64_t N00000ACD;	//0x1760
    uint64_t N00000ACE;	//0x1768
    uint64_t N00000ACF;	//0x1770
    uint64_t N00000AD0;	//0x1778
    D2RunesTxt * pRunesTxt;	//0x1780
    uint64_t nRunesTxtRecordCount;	//0x1788
    uint64_t N00000AD3;	//0x1790
    uint64_t * pLowQualityItemsTxt;	//0x1798
    uint64_t nLowQualityItemsTxtCount;	//0x17A0
    uint64_t nLowQualityItemsTxtCountEx;	//0x17A8
    uint64_t * N00000AD7;	//0x17B0
    uint64_t N00000AD8;	//0x17B8
    uint64_t N00000AD9;	//0x17C0
    uint64_t * pGambleTxt;	//0x17C8
    uint32_t Unk0x17C8[104];	//0x17D0
    uint64_t * pItemRatioTxt;	//0x1970
    uint64_t nItemRatioTxtCount;	//0x1978
    uint64_t nItemRatioTxtCountEx;	//0x1980
    uint64_t * pBooksTxt;	//0x1988
    uint64_t nBooksTxtCount;	//0x1990
    uint64_t nBooksTxtCountEx;	//0x1998
    D2RareAffixTxt * pMagicAffixTxt;	//0x19A0
    uint64_t nMagicAffixTxtCount;	//0x19A8
    uint64_t nMagicAffixTxtCountEx;	//0x19B0
    D2RareAffixTxt * pMagicSuffix;	//0x19B8
    D2RareAffixTxt * pMagicPrefix;	//0x19C0
    D2RareAffixTxt * pAutoMagic;	//0x19C8
    D2RareAffixTxt * pRareAffixTxt;	//0x19D0
    uint64_t nRareAffixTxtCount;	//0x19D8
    uint64_t nRareAffixTxtCountEx;	//0x19E0
    uint64_t * pRareSuffix;	//0x19E8
    uint64_t * pRarePrefix;	//0x19F0
    uint64_t * pGemsTxt;	//0x19F8
    uint64_t nGemsTxtCount;	//0x1A00
    uint64_t nGemsTxtCountEx;	//0x1A08
    D2ItemsTxt * pItemTxt;	//0x1A10
    uint64_t nItemTxtCount;	//0x1A18
    uint64_t nItemTxtCountEx;	//0x1A20
    D2ItemsTxt * pWeaponsTxt;	//0x1A28
    D2ItemsTxt * pArmorTxt;	//0x1A30
    D2ItemsTxt * pMiscTxt;	//0x1A38
    char pad_1A40[24];	//0x1A40
    uint64_t * N000004DB;	//0x1A58
    uint64_t N000004DC;	//0x1A60
    uint64_t N000004DD;	//0x1A68
    uint64_t * N000004DE;	//0x1A70
    uint64_t N000004DF;	//0x1A78
    uint64_t N000004E0;	//0x1A80
    uint64_t * N000004E1;	//0x1A88
    uint64_t N000004E2;	//0x1A90
    uint64_t N000004E3;	//0x1A98
    uint64_t * N000004E4;	//0x1AA0
    uint64_t * N000004E5;	//0x1AA8
    uint64_t * N000004E6;	//0x1AB0
    uint64_t * N000004E7;	//0x1AB8
    uint64_t N000004E8;	//0x1AC0
    uint64_t N000004E9;	//0x1AC8
    uint64_t N000004EA;	//0x1AD0
    uint64_t N000004EB;	//0x1AD8
    uint64_t N000004EC;	//0x1AE0
    uint64_t N000004ED;	//0x1AE8
    uint64_t N000004EE;	//0x1AF0
    uint64_t N000004EF;	//0x1AF8
    uint64_t N000004F0;	//0x1B00
    uint64_t N000004F1;	//0x1B08
    uint64_t N000004F2;	//0x1B10
    uint64_t N000004F3;	//0x1B18
    uint64_t N000004F4;	//0x1B20
    uint64_t * N000004F5;	//0x1B28
    uint64_t N000004F6;	//0x1B30
    uint64_t N000004F7;	//0x1B38
    uint64_t * N000004F8;	//0x1B40
    uint64_t * N000004F9;	//0x1B48
    uint64_t * N000004FA;	//0x1B50
    uint64_t * N000004FB;	//0x1B58
    uint64_t N000004FC;	//0x1B60
    uint64_t N000004FD;	//0x1B68
    uint64_t N000004FE;	//0x1B70
    uint64_t N000004FF;	//0x1B78
    uint64_t N00000500;	//0x1B80
    uint64_t N00000501;	//0x1B88
    uint64_t N00000502;	//0x1B90
    uint64_t N00000503;	//0x1B98
    uint64_t N00000504;	//0x1BA0
    uint64_t N00000505;	//0x1BA8
    uint64_t N00000506;	//0x1BB0
    uint64_t N00000507;	//0x1BB8
    uint64_t N00000508;	//0x1BC0
    uint64_t * N00000509;	//0x1BC8
    uint64_t N0000050A;	//0x1BD0
    uint64_t N0000050B;	//0x1BD8
    uint64_t * N0000050C;	//0x1BE0
    uint64_t * N0000050D;	//0x1BE8
    uint64_t * N0000050E;	//0x1BF0
    uint64_t * N0000050F;	//0x1BF8
    uint64_t N00000510;	//0x1C00
    uint64_t N00000511;	//0x1C08
    uint64_t N00000512;	//0x1C10
    uint64_t N00000513;	//0x1C18
    uint64_t N00000514;	//0x1C20
    uint64_t N00000515;	//0x1C28
    uint64_t N00000516;	//0x1C30
    uint64_t N00000517;	//0x1C38
    uint64_t N00000518;	//0x1C40
    uint64_t N00000519;	//0x1C48
    uint64_t N0000051A;	//0x1C50
    uint64_t N0000051B;	//0x1C58
    uint64_t N0000051C;	//0x1C60
    uint64_t * N0000051D;	//0x1C68
    uint64_t N0000051E;	//0x1C70
    uint64_t N0000051F;	//0x1C78
    uint64_t * N00000520;	//0x1C80
    uint64_t * N00000521;	//0x1C88
    uint64_t * N00000522;	//0x1C90
    uint64_t * N00000523;	//0x1C98
    uint64_t N00000524;	//0x1CA0
    uint64_t N00000525;	//0x1CA8
    uint64_t N00000526;	//0x1CB0
    uint64_t N00000527;	//0x1CB8
    uint64_t N00000528;	//0x1CC0
    uint64_t N00000529;	//0x1CC8
    uint64_t N0000052A;	//0x1CD0
    uint64_t N0000052B;	//0x1CD8
    uint64_t N0000052C;	//0x1CE0
    uint64_t N0000052D;	//0x1CE8
    uint64_t N0000052E;	//0x1CF0
    uint64_t N0000052F;	//0x1CF8
    uint64_t N00000530;	//0x1D00
    uint64_t * N00000531;	//0x1D08
    uint64_t N00000532;	//0x1D10
};

struct D2CharStatsTxt
{
    wchar_t WideClassName[16];	//0x0000
    char ClassName[16];	//0x0020
    char pad_0030[192];	//0x0030
};

// jmr: pretty sure this is wrong.
//       Should be 0x264 in size
//       ReqLevel is at 0x18C
//       CharClass should be 0x2C
//       See around 0x3168A0 on 67554
struct D2SkillsTxt
{
    uint16_t ID;	//0x0000
    char Name[32];	//0x0002
    char pad_0022[2];	//0x0022
    uint32_t Flags;	//0x0024
    char N000172D5[500];	//0x0028
    uint16_t EType;	//0x021C
    char N000172D4[102];	//0x021E

};

struct D2ItemTypesTxt
{
    char Code[4];	//0x0000
    uint16_t Equiv[2];	//0x0004
    uint8_t Repair;	//0x0008
    uint8_t Body;	//0x0009
    uint8_t BodyLoc1;	//0x000A
    uint8_t BodyLoc2;	//0x000B
    uint16_t Shoots;	//0x000C
    int16_t Quiver;	//0x000E
    uint8_t Throwable;	//0x0010
    uint8_t Reload;	//0x0011
    uint8_t ReEquip;	//0x0012
    uint8_t AutoStack;	//0x0013
    uint8_t Magic;	//0x0014
    uint8_t Rare;	//0x0015
    uint8_t Normal;	//0x0016
    uint8_t Charm;	//0x0017
    uint8_t Gem;	//0x0018
    uint8_t Beltable;	//0x0019
    uint8_t MaxSock1;	//0x001A
    uint8_t MaxSock25;	//0x001B
    uint8_t MaxSock40;	//0x001C
    uint8_t TreasureClass;	//0x001D
    uint8_t Rarity;	//0x001E
    uint8_t StaffMods;	//0x001F
    uint8_t CostFormula;	//0x0020
    uint8_t StorePage;	//0x0021
    uint8_t Class;	//0x0022
    uint8_t VarInvGfx;	//0x0023
    uint8_t szInvGfx[6][32];	//0x0024
};

struct D2RareAffixTxt
{
    char pad_0000[38];	//0x0000
    char Name[32];	//0x0026
    char pad_0046[2];	//0x0046
};

struct D2ItemsTxt
{
    char FlippyFile[32];	//0x0000
    char InvFile[32];	//0x0020
    char UniqueInvFile[32];	//0x0040
    char SetInvFile[32];	//0x0060
    union
    {
        uint32_t Code;	//0x0080
        char CodeString[4];	//0x0080
    };
    uint32_t NormCode;	//0x0084
    uint32_t UberCode;	//0x0088
    uint32_t UltraCode;	//0x008C
    uint32_t AlternateGfx;	//0x0090
    uint32_t Pspell;	//0x0094
    uint16_t State;	//0x0098
    uint16_t CurseState[2];	//0x009A
    uint16_t Stat[3];	//0x009E
    uint32_t Calc[3];	//0x00A4
    uint32_t Len;	//0x00B0
    uint8_t SpellDesc;	//0x00B4
    uint8_t Unk0xB5[3];	//0x00B5	new 2 bytes?
    uint16_t SpellDescStr;	//0x00B8
    uint32_t SpellDescCalc;	//0x00B0
    uint32_t BetterGem;	//0x00BE
    uint8_t Unk0xC2[2];	//0x00C2		new 2 bytes?
    uint32_t WeapClass;	//0x00C8
    uint32_t WeapClass2Hand;	//0x00C4
    uint32_t TransmogrifyType;	//0x00C8
    int32_t MinAc;	//0x00CC
    int32_t MaxAc;	//0x00D0
    uint32_t GambleCost;	//0x00D4
    int32_t Speed;	//0x00D8
    uint32_t BitField1;	//0x00DC
    uint32_t Cost;	//0x00E0
    uint32_t MinStack;	//0x00E4
    uint32_t MaxStack;	//0x00E8
    uint32_t SpawnStack;	//0x00EC
    uint32_t GemOffset;	//0x00F0
    uint16_t NameStr;	//0x00F4
    uint16_t Version;	//0x00F6
    uint16_t AutoPrefix;	//0x00F8
    uint16_t MissileType;	//0x00FA
    uint8_t Rarity;	//0x00FC
    uint8_t Level;	//0x00FD
    uint8_t MinDam;	//0x00FE
    uint8_t MaxDam;	//0x00FF
    uint8_t MinMisDam;	//0x0100
    uint8_t MaxMisDam;	//0x0101
    uint8_t _2HandMinDam;	//0x0102
    uint8_t _2HandMaxDam;	//0x0103
    uint8_t RangeAdder;	//0x0104
    uint8_t Unk0x0105;	//0x0105
    int16_t StrBonus;	//0x0106
    int16_t DexBonus;	//0x0108
    uint16_t ReqStr;	//0x010A
    uint16_t ReqDex;	//0x010C
    uint8_t InvWidth;	//0x010F
    uint8_t InvHeight;	//0x0110
    uint8_t Absorb;	//0x010E
    uint8_t Block;	//0x0111
    uint8_t Durability;	//0x0112
    uint8_t NoDurability;	//0x0113
    uint8_t Missile;	//0x0114
    uint8_t Component;	//0x0115
    uint8_t ArmorComp[6];	//0x0116
    uint8_t _2Handed;	//0x011C
    uint8_t Useable;	//0x011D
    int16_t Type[2];	//0x011E
    uint8_t SubType;	//0x0122
    uint8_t Unk0x0123;	//0x0123
    uint16_t DropSound;	//0x0124
    uint16_t UseSound;	//0x0126
    uint8_t DropSfxFrame;	//0x0128
    uint8_t Unique;	//0x0129
    uint8_t Quest;	//0x012A
    uint8_t QuestDiffCheck;	//0x012B
    uint8_t Transparent;	//0x012C
    uint8_t TransTbl;	//0x012D
    uint8_t Unk0x012E;	//0x012E
    uint8_t LightRadius;	//0x012F
    uint8_t Belt;	//0x0130
    uint8_t AutoBelt;	//0x0131
    uint8_t Stackable;	//0x0132
    uint8_t Spawnable;	//0x0133
    uint8_t SpellIcon;	//0x0134
    uint8_t DurWarning;	//0x0135
    uint8_t QuantityWarning;	//0x0136
    uint8_t HasInv;	//0x0137
    uint8_t GemSockets;	//0x0138
    uint8_t Transmogrify;	//0x0139
    uint8_t TmogMin;	//0x013A
    uint8_t TmogMax;	//0x013B
    uint8_t HitClass;	//0x013C
    uint8_t _1or2Handed;	//0x013D
    uint8_t GemApplyType;	//0x013E
    uint8_t LevelReq;	//0x013F
    uint8_t MagicLevel;	//0x0140
    int8_t Transform;	//0x0141
    int8_t InvTrans;	//0x0142
    uint8_t CompactSave;	//0x0143
    uint8_t SkipName;	//0x0144
    uint8_t Nameable;	//0x0145
    uint8_t VendorMin[17];	//0x0146
    uint8_t VendorMax[17];	//0x0157
    uint8_t VendorMagicMin[17];	//0x0168
    uint8_t VendorMagicMax[17];	//0x0179
    uint8_t VendorMagicLvl[17];	//0x018A
    uint8_t Unk0x019B;	//0x019B
    uint32_t NightmareUpgrade;	//0x019C
    uint32_t HellUpgrade;	//0x01A0
    uint8_t PermStoreItem;	//0x01A4
    uint8_t Multibuy;	//0x01A5
};

struct D2UniqueItemsTxt
{
    char pad_0000[2];	//0x0000
    char Name[32];	//0x0002
    char pad_0022[6];	//0x0022
    char Code[4];	//0x0028
    char pad_002C[10];	//0x002C
    uint16_t LvlReq;	//0x0036
    char pad_0038[280];	//0x0038
};	//Size: 0x0150

struct D2SetItemsTxt
{
    char pad_0000[2];	//0x0000
    char Name[32];	//0x0002
    char pad_0022[6];	//0x0022
    char Code[4];	//0x0028
    char pad_002C[6];	//0x002C
    int16_t LvlReq;	//0x0032
    char pad_0034[392];	//0x0034
};	//Size: 0x01BC

class BNetSession
{
    char pad_0000[304];	//0x0000
    char *BattleTag;	//0x0130
    uint64_t BattleTagLength;	//0x0138
    char pad_0140[64];	//0x0140
};

struct D2DrlgEnvironmentStrc
{
    int32_t nCycleIndex;	//0x00
    int32_t nPeriodOfDay;	//0x04
    int32_t nTicks;	//0x08
    int32_t nIntensity;	//0x0C
    uint32_t dwInitTick;	//0x10
    int32_t unk0x14;	//0x14
    uint8_t nRed;	//0x18
    uint8_t nGreen;	//0x19
    uint8_t nBlue;	//0x1A
    uint8_t pad0x1B;	//0x1B
    float fCos;	//0x1C
    float fLast;	//0x20
    float fSin;	//0x24
    int32_t nTimeRate;	//0x28
    int32_t nTimeRateIndex;	//0x2C
    BOOL bEclipse;	//0x30
    int32_t nPrev;	//0x34
};

struct D2MonStatsTxt
{
    uint16_t ID;	//0x0000
    char Name[16];	//0x0002
    char N0000810D[32];	//0x0012
    int16_t BaseId;	//0x0032
    uint8_t NextClass;	//0x0034
    uint8_t TransLvl;	//0x0035
    uint16_t NameStr;	//0x0036
    int8_t MonType;	//0x0038
    int8_t Ai;	//0x0039
    int8_t N000085A2;	//0x003A
    int8_t N000085A3;	//0x003B
    uint32_t Flags;	//0x003C
    char Code[2];	//0x0040
    bool Enabled;	//0x0042
    bool RangedType;	//0x0043
    bool PlaceSpawn;	//0x0044
    uint8_t N0000805A;	//0x0045
    uint8_t N00006B38;	//0x0046
    uint8_t N00006B3B;	//0x0047
    uint8_t N00006B41;	//0x0048
    uint8_t N00006B49;	//0x0049
    uint8_t N00006B42;	//0x004A
    uint8_t N00006B3C;	//0x004B
    uint8_t N00006B44;	//0x004C
    uint8_t N00006B3D;	//0x004D
    uint8_t N00006B39;	//0x004E
    uint8_t N00006B47;	//0x004F
    int16_t Spawn;	//0x0050
    int8_t SpawnX;	//0x0052
    int8_t SpawnY;	//0x0053
    uint8_t N0000805B;	//0x0054
    uint8_t N00006B5A;	//0x0055
    uint8_t N00006B5E;	//0x0056
    uint8_t N00006B64;	//0x0057
    uint8_t N00006B5F;	//0x0058
    uint8_t N00006B5B;	//0x0059
    uint8_t N00006B61;	//0x005A
    uint8_t N00006B5C;	//0x005B
    int8_t PartyMin;	//0x005C
    int8_t PartyMax;	//0x005D
    int8_t N00003A10;	//0x005E
    int8_t MinGrp;	//0x005F
    int8_t MaxGrp;	//0x0060
    int8_t SparsePopulate;	//0x0061
    int16_t Velocity;	//0x0062
    uint8_t Run;	//0x0064
    uint8_t N0000805C;	//0x0065
    uint8_t N00006B69;	//0x0066
    uint8_t N00006B6D;	//0x0067
    uint8_t N00006B78;	//0x0068
    uint8_t N00006B87;	//0x0069
    uint8_t N00006B79;	//0x006A
    uint8_t N00006B6E;	//0x006B
    uint8_t N00006B7B;	//0x006C
    uint8_t N00006B6F;	//0x006D
    uint8_t N00006B6A;	//0x006E
    uint8_t N00006B71;	//0x006F
    uint8_t N00006B7E;	//0x0070
    uint8_t N00006B8B;	//0x0071
    uint8_t N00006B7F;	//0x0072
    uint8_t N00006B72;	//0x0073
    uint8_t N00006B81;	//0x0074
    uint8_t N00006B73;	//0x0075
    uint8_t N00006B6B;	//0x0076
    uint8_t N00006B75;	//0x0077
    uint8_t N00006B84;	//0x0078
    uint8_t N00006B76;	//0x0079
    uint16_t MonSound;	//0x007A
    uint16_t UMonSound;	//0x007C
    uint8_t Threat;	//0x007E
    uint8_t aidel;	//0x007F
    uint8_t aidelN;	//0x0080
    uint8_t aidelH;	//0x0081
    uint8_t aidist;	//0x0082
    uint8_t aidistN;	//0x0083
    uint8_t aidistH;	//0x0084
    uint8_t N00003983;	//0x0085
    uint16_t aip1;	//0x0086
    uint16_t aip1N;	//0x0088
    uint16_t aip1H;	//0x008A
    uint16_t aip2;	//0x008C
    uint16_t aip2N;	//0x008E
    uint16_t aip2H;	//0x0090
    uint16_t aip3;	//0x0092
    uint16_t aip3N;	//0x0094
    uint16_t aip3H;	//0x0096
    uint16_t aip4;	//0x0098
    uint16_t aip4N;	//0x009A
    uint16_t aip4H;	//0x009C
    uint16_t aip5;	//0x009E
    uint16_t aip5N;	//0x00A0
    uint16_t aip5H;	//0x00A2
    uint16_t aip6;	//0x00A4
    uint16_t aip6N;	//0x00A6
    uint16_t aip6H;	//0x00A8
    uint16_t aip7;	//0x00AA
    uint16_t aip7N;	//0x00AC
    uint16_t aip7H;	//0x00AE
    uint16_t aip8;	//0x00B0
    uint16_t aip8N;	//0x00B2
    uint16_t aip8H;	//0x00B4
    uint8_t N000085A6;	//0x00B6
    uint8_t N00006B92;	//0x00B7
    uint8_t N00006B98;	//0x00B8
    uint8_t N00006BA5;	//0x00B9
    uint8_t N00006BB7;	//0x00BA
    uint8_t N00006BA6;	//0x00BB
    uint8_t N00006B99;	//0x00BC
    uint8_t N00006BA8;	//0x00BD
    uint8_t N00006B9A;	//0x00BE
    uint8_t N00006B93;	//0x00BF
    uint8_t N00006B9C;	//0x00C0
    uint8_t N00006BAB;	//0x00C1
    uint8_t N00006BBB;	//0x00C2
    uint8_t N00006BAC;	//0x00C3
    uint8_t N00006B9D;	//0x00C4
    uint8_t N00006BAE;	//0x00C5
    uint8_t N00006B9E;	//0x00C6
    uint8_t N00006B94;	//0x00C7
    uint8_t N00006BA0;	//0x00C8
    uint8_t N00006BB1;	//0x00C9
    uint8_t N00006BBF;	//0x00CA
    uint8_t N00006BB2;	//0x00CB
    uint8_t N00006BA1;	//0x00CC
    uint8_t N00006BB4;	//0x00CD
    uint8_t N00006BA2;	//0x00CE
    uint8_t N00006B95;	//0x00CF
    uint8_t Drain;	//0x00D0
    uint8_t DrainN;	//0x00D1
    uint8_t DrainH;	//0x00D2
    uint8_t ToBlock;	//0x00D3
    uint8_t ToBlockN;	//0x00D4
    uint8_t ToBlockH;	//0x00D5
    uint8_t Crit;	//0x00D6
    int8_t N000081B4;	//0x00D7
    int8_t N00008121;	//0x00D8
    int8_t N00008123;	//0x00D9
    int16_t N00008388;	//0x00DA
    int16_t N000081B7;	//0x00DC
    int16_t N00008281;	//0x00DE
    uint16_t minHP;	//0x00E0
    uint16_t minHPN;	//0x00E2
    uint16_t minHPH;	//0x00E4
    uint16_t maxHP;	//0x00E6
    uint16_t maxHPN;	//0x00E8
    uint16_t maxHPH;	//0x00EA
    uint16_t AC;	//0x00EC
    uint16_t ACN;	//0x00EE
    uint16_t ACH;	//0x00F0
    uint8_t N000085A7;	//0x00F2
    uint8_t N00006BC6;	//0x00F3
    uint8_t N00006BCA;	//0x00F4
    uint8_t N00006BD3;	//0x00F5
    uint8_t N00006BDF;	//0x00F6
    uint8_t N00006BD4;	//0x00F7
    uint8_t N00006BCB;	//0x00F8
    uint8_t N00006BD6;	//0x00F9
    uint8_t N00006BCC;	//0x00FA
    uint8_t N00006BC7;	//0x00FB
    uint8_t N00006BCE;	//0x00FC
    uint8_t N00006BD9;	//0x00FD
    uint8_t N00006BE3;	//0x00FE
    uint8_t N00006BDA;	//0x00FF
    uint8_t N00006BCF;	//0x0100
    uint8_t N00006BDC;	//0x0101
    uint8_t N00006BD0;	//0x0102
    uint8_t N00006BC8;	//0x0103
    uint16_t Exp;	//0x0104
    uint16_t ExpN;	//0x0106
    uint16_t ExpH;	//0x0108
    uint16_t A1MinD;	//0x010A
    uint16_t A1MinDN;	//0x010C
    uint16_t A1MinDH;	//0x010E
    uint16_t A1MaxD;	//0x0110
    uint16_t A1MaxDN;	//0x0112
    uint16_t A1MaxDH;	//0x0114
    uint8_t N000085A8;	//0x0116
    uint8_t N00006BE9;	//0x0117
    uint8_t N00006BEF;	//0x0118
    uint8_t N00006BFF;	//0x0119
    uint8_t N00006C14;	//0x011A
    uint8_t N00006C00;	//0x011B
    uint8_t N00006BF0;	//0x011C
    uint8_t N00006C02;	//0x011D
    uint8_t N00006BF1;	//0x011E
    uint8_t N00006BEA;	//0x011F
    uint8_t N00006BF3;	//0x0120
    uint8_t N00006C05;	//0x0121
    uint8_t N00006C18;	//0x0122
    uint8_t N00006C06;	//0x0123
    uint8_t N00006BF4;	//0x0124
    uint8_t N00006C08;	//0x0125
    uint8_t N00006BF5;	//0x0126
    uint8_t N00006BEB;	//0x0127
    uint8_t N00006BF7;	//0x0128
    uint8_t N00006C0B;	//0x0129
    uint8_t N00006C1C;	//0x012A
    uint8_t N00006C0C;	//0x012B
    uint8_t N00006BF8;	//0x012C
    uint8_t N00006C0E;	//0x012D
    uint8_t N00006BF9;	//0x012E
    uint8_t N00006BEC;	//0x012F
    uint8_t N00006BFB;	//0x0130
    uint8_t N00006C11;	//0x0131
    uint8_t N00006BFC;	//0x0132
    uint8_t N00006BED;	//0x0133
    int8_t El1Pct;	//0x0134
    int8_t El1PctN;	//0x0135
    int8_t El1PctH;	//0x0136
    uint8_t N000085A9;	//0x0137
    uint8_t N00006C24;	//0x0138
    uint8_t N00006C27;	//0x0139
    uint8_t N00006C2C;	//0x013A
    uint8_t N00006C28;	//0x013B
    uint8_t N00006C25;	//0x013C
    uint8_t N00006C2A;	//0x013D
    int16_t El1MinD;	//0x013E
    int16_t El1MinDN;	//0x0140
    int16_t El1MinDH;	//0x0142
    uint8_t N000085AA;	//0x0144
    uint8_t N00006C31;	//0x0145
    uint8_t N00006C35;	//0x0146
    uint8_t N00006C3C;	//0x0147
    uint8_t N00006C43;	//0x0148
    uint8_t N00006C3D;	//0x0149
    uint8_t N00006C36;	//0x014A
    uint8_t N00006C3F;	//0x014B
    uint8_t N00006C37;	//0x014C
    uint8_t N00006C32;	//0x014D
    uint8_t N00006C39;	//0x014E
    uint8_t N00006C33;	//0x014F
    int16_t El1MaxD;	//0x0150
    int16_t El1MaxDN;	//0x0152
    int16_t El1MaxDH;	//0x0154
    uint8_t N000085AB;	//0x0156
    uint8_t N00006C48;	//0x0157
    uint8_t N00006C4D;	//0x0158
    uint8_t N00006C54;	//0x0159
    uint8_t N00006C5B;	//0x015A
    uint8_t N00006C55;	//0x015B
    uint8_t N00006C4E;	//0x015C
    uint8_t N00006C57;	//0x015D
    uint8_t N00006C4F;	//0x015E
    uint8_t N00006C49;	//0x015F
    uint8_t N00006C51;	//0x0160
    uint8_t N00006C4A;	//0x0161
    int16_t El1Dur;	//0x0162
    int16_t El1DurN;	//0x0164
    int16_t El1DurH;	//0x0166
    uint8_t N000085AC;	//0x0168
    uint8_t N00006C60;	//0x0169
    uint8_t N00006C65;	//0x016A
    uint8_t N00006C6C;	//0x016B
    uint8_t N00006C73;	//0x016C
    uint8_t N00006C6D;	//0x016D
    uint8_t N00006C66;	//0x016E
    uint8_t N00006C6F;	//0x016F
    uint8_t N00006C67;	//0x0170
    uint8_t N00006C61;	//0x0171
    uint8_t N00006C69;	//0x0172
    uint8_t N00006C62;	//0x0173
    int16_t ResDm;	//0x0174
    int16_t ResDmN;	//0x0176
    int16_t ResDmH;	//0x0178
    int16_t ResMa;	//0x017A
    int16_t ResMaN;	//0x017C
    int16_t ResMaH;	//0x017E
    int16_t ResFi;	//0x0180
    int16_t ResFiN;	//0x0182
    int16_t ResFiH;	//0x0184
    int16_t ResLi;	//0x0186
    int16_t ResLiN;	//0x0188
    int16_t ResLiH;	//0x018A
    int16_t ResCo;	//0x018C
    int16_t ResCoN;	//0x018E
    int16_t ResCoH;	//0x0190
    int16_t ResPo;	//0x0192
    int16_t ResPoN;	//0x0194
    int16_t ResPoH;	//0x0196
    uint8_t N00007B67;	//0x0198
    uint8_t N0000817B;	//0x0199
    uint8_t N0000823B;	//0x019A
    uint8_t N000082D9;	//0x019B
    uint8_t N0000823C;	//0x019C
    uint8_t N0000817C;	//0x019D
    uint8_t N0000823E;	//0x019E
    uint8_t N0000817D;	//0x019F
    uint8_t N00007B90;	//0x01A0
    uint8_t N0000817F;	//0x01A1
    uint8_t N00008241;	//0x01A2
    uint8_t N000082DD;	//0x01A3
    uint8_t N00008242;	//0x01A4
    uint8_t N00008180;	//0x01A5
    uint8_t N00008244;	//0x01A6
    uint8_t N00008181;	//0x01A7
    uint8_t N000076D1;	//0x01A8
    uint8_t N00008183;	//0x01A9
    uint8_t N00008247;	//0x01AA
    uint8_t N000082E1;	//0x01AB
    uint8_t N00008248;	//0x01AC
    uint8_t N00008184;	//0x01AD
    uint8_t N0000824A;	//0x01AE
    uint8_t N00008185;	//0x01AF
    uint8_t N00007B92;	//0x01B0
    uint8_t N00008187;	//0x01B1
    uint8_t N0000824D;	//0x01B2
    uint8_t N000082E5;	//0x01B3
    uint8_t N0000824E;	//0x01B4
    uint8_t N00008188;	//0x01B5
    uint8_t N00008250;	//0x01B6
    uint8_t N00008189;	//0x01B7
    uint8_t N00007B69;	//0x01B8
    uint8_t N0000818B;	//0x01B9
    uint8_t N00008253;	//0x01BA
    uint8_t N000082E9;	//0x01BB
    uint8_t N00008254;	//0x01BC
    uint8_t N0000818C;	//0x01BD
    uint8_t N00008256;	//0x01BE
    uint8_t N0000818D;	//0x01BF
    uint8_t N00007B94;	//0x01C0
    uint8_t N0000818F;	//0x01C1
    uint8_t N00008259;	//0x01C2
    uint8_t N000082ED;	//0x01C3
    uint8_t N0000825A;	//0x01C4
    uint8_t N00008190;	//0x01C5
    uint8_t N0000825C;	//0x01C6
    uint8_t N00008191;	//0x01C7
    uint8_t N0000791F;	//0x01C8
    uint8_t N00008193;	//0x01C9
    uint8_t N0000825F;	//0x01CA
    uint8_t N000082F1;	//0x01CB
    uint8_t N00008260;	//0x01CC
    uint8_t N00008194;	//0x01CD
    uint8_t N00008262;	//0x01CE
    uint8_t N00008195;	//0x01CF
    char pad_01D0[8];	//0x01D0
};

class D2ObjectsTxt
{
    uint16_t ID;	//0x0000
    char Class[64];	//0x0002
    char Name[64];	//0x0042
    char Token[6];	//0x0082
    char pad_0088[224];	//0x0088
};
struct D2ObjectDataTbl
{
    D2ObjectsTxt * pObjectsTxt;	//0x0000
};
struct D2LevelsTxt
{
    uint32_t LineId;	//0x0000
    uint16_t Id;	//0x0004
    uint8_t Pal;	//0x0006
    uint8_t Act;	//0x0007
    uint8_t Teleport;	//0x0008
    uint8_t Rain;	//0x0009
    uint8_t Mud;	//0x000A
    uint8_t NoPer;	//0x000B
    uint8_t IsInside;	//0x000C
    uint8_t DrawEdges;	//0x000D
    char pad_000E[2];	//0x000E
    uint32_t WarpDist;	//0x0010
    uint16_t MonLvl[3];	//0x0014
    uint16_t MonLvlEx[3];	//0x001A
    uint32_t MonDen[3];	//0x0020
    uint8_t MonUMin[3];	//0x002C
    uint8_t MonUMax[3];	//0x002F
    char pad_0032[342];	//0x0032
};

struct D2UnitHashTableStrc
{
    D2UnitStrc *Players[128];	//0x0000
    D2UnitStrc *Monsters[128];	//0x0400
    D2UnitStrc *Objects[128];	//0x0800
    D2UnitStrc *Missiles[128];	//0x0C00
    D2UnitStrc *Items[128];	//0x1000
    D2UnitStrc *Tiles[128];	//0x1400
};

struct D2MissileCalcStrc
{
    D2UnitStrc * pMissile;	//0x00
    D2UnitStrc * pOwner;	//0x04
    int32_t nMissileId;	//0x08
    int32_t nMissileLevel;	//0x0C
};

struct D2UnitStrc
{
    uint32_t dwUnitType;	//0x0000
    uint32_t dwClassId;	//0x0004
    uint32_t dwUnitId;	//0x0008
    uint32_t AnimationMode;	//0x000c
    union
    {
        //0x0010
        D2PlayerDataStrc * pPlayerData;
        D2MonsterDataStrc * pMonsterData;
        D2ObjectDataStrc * pObjectData;
        D2ItemDataStrc * pItemData;
        void *pMissleData;
    };
    uint8_t nAct;	//0x0018
    uint8_t Unk0x001A[0x7];	//0x0019
    D2DrlgActStrc * pAct;	//0x0020
    uint8_t Unk0x0028[0x10];	//0x0028
    union
    {
        //0x0038
        D2DynamicPathStrc  * pDynamicPath;
        D2StaticPathStrc  * pStaticPath;
    };
    uint8_t Unk0x0040[0x24];	//0x0040
    uint32_t dwFrameRemain;	//0x0064
    uint8_t Unk0x0068[0x20];	//0x0068
    D2StatListExStrc * pStatListEx;	//0x0088
    D2InventoryStrc * pInventory;	//0x0090
    uint8_t pad_0098[40];	//0x0098
    uint64_t * pUpdateUnit;	//0x00C0
    uint8_t pad_00C8[16];	//0x00C8
    uint64_t StashOrder;	//0x00D8
    uint8_t pad_00E0[8];	//0x00E0
    uint32_t OwnerType;	//0x00E8
    uint32_t OwnerID;	//0x00EC
    uint8_t Unk0x00F0[0x10];	//0x00F0
    D2SkillListStrc * pSkills;	//0x0100
    uint8_t Unk0x0108[0xC];	//0x0108
    uint32_t Flags;	//0x0114
    uint32_t FlagsEx;	//0x0118
    uint8_t Unk0x011C[0x2C];	//0x011C
    D2UnitStrc * pChangeNextUnit;	//0x0148
    D2UnitStrc * pListNext;	//0x0150	Next unit in the hash table. The ID % 128 and the pListNext->ID % 128 should always be equal.
    D2UnitStrc * pRoomNext;	//0x0158	Next unit in the room.
    uint8_t Unk0x0160[0x18];	//0x0160
    uint32_t SizeX;	//0x0178
    uint32_t SizeY;	//0x017C
};

struct D2PlayerTradeStrc
{
    int32_t nSaveLength;	//0x00
    uint8_t * pSaveData;	//0x04
    int32_t unk0x08[4];
};

struct D2QuestInfo
{
    void *pBuffer;	// 0x00
    uint64_t _1;	// 0x04
};
struct D2Waypoint
{
    BYTE flags;	// 0x00
};

struct D2PlayerDataStrc
{
    char Name[16];	//0x0000
    uint64_t *pQuestData[3];	//0x0010 not sure on these two
    uint64_t *pWaypointData[3];	//0x0028
    char pad_00401[20];
    uint32_t bodylocation;
    char pad_00unk1[24];
    D2PlayerTradeStrc * pTrade;
    char pad_00unk2[8];
    D2UnitStrc * pNextItem;
    char pad_00unk3[16];
    uint32_t nRightSkillId;
    char pad_00402[244];	//0x0040
    D2QuestInfo * pNormalQuest;
    D2QuestInfo * pNightmareQuest;
    D2QuestInfo * pHellQuest;
    D2Waypoint *pNormalWaypoint;
    D2Waypoint *pNightmareWaypoint;
    D2Waypoint *pHellWaypoint;
    char pad_00403[352];	//0x0040
};

struct D2MonsterDataStrc
{
    D2MonStatsTxt * pMonstatsTxt;	//0x0000
    char pad_0008[16];	//0x0008
    uint16_t NameSeed;	//0x0018
    uint8_t TypeFlags;	//0x001A
    uint8_t LastAnimationMode;	//0x001B
    uint32_t DurielFlag;	//0x001C
    uint8_t MonUMod[10];	//0x0020
    uint16_t BossLineID;	//0x002A
    uint8_t Unk0x002C[0x6];	//0x002C
    uint16_t MercName;	//0x0032
};

struct D2ObjectDataStrc
{
    D2ObjectsTxt * pObjectTxt;	//0x0000
    uint8_t InteractType;	//0x0008
    uint8_t PortalFlags;	//0x0009
    char pad_000A[2];	//0x000A
    uint64_t * pShrineTxt;	//0x000C
    char pad_0014[32];	//0x0014
    char szOwner[16];	//0x0034
};

struct ItemExtraData
{
    D2InventoryStrc * pParentInventory;	//0x0000
    D2InventoryStrc * pPreviousItem;	//0x0008
    D2InventoryStrc * pNextItem;	//0x0010
    uint8_t NodePos;	//0x0018
    uint8_t NodePosOther;	//0x0019
    char pad_001A[6];	//0x001A
    D2InventoryStrc * pPrevItemSamePage;	//0x0020
    D2InventoryStrc * pNextItemSamePage;	//0x0028
};
struct ItemData
{
    //This changed since alpha a lot of it is wrong... i thnk somewhere near the rare prefixes it gets off (maybe ilvl)
    uint32_t Rarity;	//0x0000
    uint32_t LowSeed;	//0x0004
    uint32_t HighSeed;	//0x0008
    uint32_t OwnerGUID;	//0x000C
    uint32_t InitSeed;	//0x0010
    uint32_t CommandFlags;	//0x0014
    uint32_t Flags;	//0x0018
    char pad_001C[24];	//0x001C
    uint32_t FileText;	//0x0034
    uint32_t ItemLevel;	//0x0038
    char pad_003C[4];	//0x003C
    uint16_t ItemFormat;	//0x0040 0: classic 101: xp
    uint16_t RarePrefix;	//0x0042
    uint16_t RareSuffix;	//0x0044
    uint16_t AutoAffix;	//0x0046
    uint16_t MagicPrefix[3];	//0x0048
    uint16_t MagicSuffix[3];	//0x004E
    uint8_t BodyLoc;	//0x0054
    uint8_t InvPage;	//0x0055
    uint8_t CellOverlap;	//0x0056
    uint8_t ItemCell;	//0x0057
    uint8_t EarLvl;	//0x0058
    uint8_t InvGfxIdx;	//0x0059
    char pad_005A[70];	//0x005A
    D2ItemExtraDataStrc * pExtraData;	//0x00A0
};

struct D2DrlgActStrc
{
    char pad_0000[28];	//0x0000
    int32_t nSeed;	//0x0014
    D2RoomStrc* pRoom;	//0x0018
    uint32_t ActNo;	//0x0020
    char pad_0024[36];	//0x0024
    size_t MaybeTilesPtr;	//0x0048
    char pad_0050[32];	//0x0050
    D2DrlgStrc* pDrlg;	//0x0070
    char pad_0078[16];	//0x0078
};

struct D2StatsArrayStrc
{
    D2StatStrc * pStat;	//0x0000
    uint64_t Count;	//0x0008
    uint64_t Capacity;	//0x0010
};

struct D2StatListStrc
{
    D2UnitStrc * pUnit;	//0x0000
    uint32_t OwnerType;	//0x0008
    uint32_t OwnerID;	//0x000C
    char pad_0010[12];	//0x0010
    uint32_t dwFlags;	//0x001C
    uint32_t SkillID;	//0x0020
    float ExpireFrame;	//0x0024
    char pad_0028[8];	//0x0028
    D2StatsArrayStrc Stats;	//0x0030
};

struct D2StatListExStrc
{
    D2UnitStrc * pUnit;	//0x0000
    uint32_t OwnerType;	//0x0008
    uint32_t OwnerID;	//0x000C
    char pad_0010[12];	//0x0010
    uint32_t dwFlags;	//0x001C
    uint32_t SkillID;	//0x0020
    float ExpireFrame;	//0x0024
    char pad_0028[8];	//0x0028
    D2StatsArrayStrc Stats;	//0x0030
    D2StatListExStrc * pPrevLink;	//0x0048 might be wrong
    char pad_0050[8];	//0x0050
    D2StatListExStrc * pParent;	//0x0058
    char pad_0060[8];	//0x0060
    D2StatListExStrc * pMyLastList;	//0x0068
    D2StatListExStrc * pMyStats;	//0x0070
    D2UnitStrc * pOwner;	//0x0078
    D2StatsArrayStrc FullStats;	//0x0080
    D2StatsArrayStrc ModStats;	//0x0098 could be wrong
    char pad_00B0[2584];	//0x00B0
    uint32_t StatFlags[6];	//0x0AC8
    uint32_t StatFlagsEx[6];	//0x0AE0
};

struct D2PathPointStrc
{
    uint16_t X;	//0x0000
    uint16_t Y;	//0x0002
};

struct D2PathInfoStrc
{
    D2PathPointStrc pStartCoord;	//0x00
    D2PathPointStrc tTargetCoord;	//0x04
    D2RoomStrc * pRoom;	//0x08
    D2RoomStrc * field_C;	//0x0C
    int32_t field_10;	//0x10
    uint8_t field_14;	//0x14
    uint8_t field_15;	//0x15
    uint16_t field_16;	//0x16
    int32_t nDistMax;	//0x18
    uint8_t field_1C;	//0x1C
    uint8_t field_1D;	//0x1D
    uint16_t field_1E;	//0x1E
    int32_t nPathType;	//0x20
    int32_t nUnitSize;	//0x24
    int32_t nCollisionPattern;	//0x28
    int32_t nCollisionType;	//0x2C
    union
    {
        D2DynamicPathStrc * pDynamicPath;	//0x30 - not sure yet
        D2PathInfoStrc * pNext;	//0x30
    };
};

struct D2InventoryNodeStrc
{
    int32_t nItemId;	//0x00
    D2InventoryNodeStrc * pNext;	//0x04
};

struct D2InventoryStrc
{
    uint32_t Signature;	//0x0000
    char pad_0004[4];	//0x0004
    D2UnitStrc * pOwner;	//0x0008
    D2UnitStrc * pFirstItem;	//0x0010
    D2UnitStrc * pLastItem;	//0x0018
    D2InventoryGridStrc * pGrids;	//0x0020
    int32_t GridCount;	//0x0028
    char pad_002C[12];	//0x002C
    int64_t dwLeftItemGUID;	//0x0038
    D2UnitStrc * pCursorItem;	//0x0040
    uint32_t OwnerID;	//0x0048
    uint32_t ItemCount;	//0x004C
    D2InventoryNodeStrc * pFirstNode;	//0x2C
    D2InventoryNodeStrc * pLastNode;	//0x30
    D2CorpseStrc * pFirstCorpse;	//0x34
    D2CorpseStrc * pLastCorpse;	//0x38
    int32_t nCorpseCount;	//0x3C
};

struct D2HirelingInitStrc
{
    int32_t nId;	//0x00
    int32_t nLevel;	//0x04
    int32_t nHitpoints;	//0x08
    int32_t nStrength;	//0x0C
    int32_t nDexterity;	//0x10
    int32_t nGold;	//0x14
    int32_t nExperience;	//0x18
    int32_t nDefense;	//0x1C
    int32_t nMinDamage;	//0x20
    int32_t nMaxDamage;	//0x24
    int32_t nShare;	//0x28
    int32_t nResist;	//0x2C
    int32_t nHireDesc;	//0x30
    int32_t field_34;	//0x34
    int16_t nFlags;	//0x38
};

struct D2DynamicPathStrc
{
    union {
        struct {
            uint16_t OffsetX;		//0x0000
            uint16_t PosX;			//0x0002
            uint16_t OffsetY;		//0x0004
            uint16_t PosY;			//0x0006
        };
        struct {
            uint32_t PrecisionX;	//0x0000
            uint32_t PrecisionY;	//0x0004
        };
    };
    uint16_t PosX;	//0x0002
    uint16_t OffsetY;	//0x0004
    uint16_t PosY;	//0x0006
    int32_t dwTargetX;	//0x0008 Result of DUNGEON_WorldToScreenCoords
    int32_t dwTargetY;	//0x000C
    D2PathPointStrc SP1;	//0x0010
    D2PathPointStrc SP2;	//0x0014
    D2PathPointStrc SP3;	//0x0018
    char pad_001C[4];	//0x001C
    D2RoomStrc * pRoom;	//0x0020
    D2RoomStrc * pRoomNext;	//0x0028
    uint32_t dwCurrentPointIdx;	//0x0030
    uint32_t dwPathPoints;	//0x0034
    char pad_0038[8];	//0x0038
    D2UnitStrc * pUnit;	//0x0040
    char pad_0048[8];	//0x0048
    uint32_t dwPathType;
    uint32_t dwUnitSize;
    uint32_t dwCollisionPattern;
    uint32_t dwCollisionType;	//0x0060
    uint32_t nUnk0x64;	//0x0064
    char pad_0068[56];	//0x0068
    uint32_t dwVelocity;	//0x00A0
    char pad_00A4[24];	//0x00A4
    uint8_t nDistMax;	//0x00BD
    uint8_t nUnk0xBE;	//0x00BE
    char pad_00BF[6];	//0x00BF
    D2PathPointStrc PathPoints[78];	//0x00C8
    uint32_t nSavedStepsCount;	//0x0200
    D2PathPointStrc SavedSteps[7];	//0x0204
    char pad_0220[360];	//0x0220
};

struct D2RoomStrc
{
    D2RoomStrc **pRoomsNear;	//0x0000
    char pad_0008[16];	//0x0008
    D2RoomExStrc * pRoomEx;	//0x0018
    char pad_0020[24];	//0x0020
    D2RoomCollisionGridStrc * pCollisionGrid;	//0x0038
    uint32_t dwRoomsNear;	//0x0040
    char pad_0044[4];	//0x0044
    D2DrlgActStrc * pAct;	//0x0048
    char pad_0050[48];	//0x0050
    uint32_t StartX;	//0x0080
    uint32_t StartY;	//0x0084
    uint32_t SizeX;	//0x0088
    uint32_t SizeY;	//0x008C
    uint32_t PosX;	//0x0090
    uint32_t PosY;	//0x0094
    uint32_t RoomSizeX;	//0x0098
    uint32_t RoomSizeY;	//0x009C
    char pad_00A0[8];	//0x00A0
    D2UnitStrc * pUnitFirst;	//0x00A8
    D2RoomStrc * pRoomNext;	//0x00B0
};

struct D2SkillListStrc
{
    D2SkillStrc * pFirstSkill;	//0x0000
    D2SkillStrc * pLeftSkill;	//0x0008
    D2SkillStrc * pRightSkill;	//0x0010
    D2SkillStrc * pLastUsedSkill;	//0x0018
    char pad_0020[96];	//0x0020
};

struct D2SkillStrc
{
    D2SkillsTxt * pSkillsTxt;	//0x0000
    D2SkillStrc * pNextSkill;	//0x0008
    uint32_t SkillMode;	//0x0010
    uint32_t Flags;	//0x0014
    uint32_t Unk0x0010[2];	//0x0018
    union	//0x0020
    {
        uint32_t TargetInfo;
        uint32_t Xpos;
        uint32_t Par1;
    };
    union	//0x0024
    {
        uint32_t TargetType;
        uint32_t Ypos;
        uint32_t Par2;
    };
    union	//0x0028
    {
        uint32_t TargetGUID;
        uint32_t Par3;
    };
    uint32_t Par4;	//0x002C
    uint32_t Unk1;	//0x0030
    uint32_t SkillLevel;	//0x0034
    uint32_t LevelBonus;	//0x0038
    int32_t Quantity;	//0x003C
    int32_t OwnerGUID;	//0x0040
    int32_t Charges;	//0x0044
    int32_t Unk0x0040;	//0x0048
};

struct D2GameStrc
{
    char pad_0000[77];	//0x0000
    uint8_t Difficulty;	//0x004D
    char pad_004E[18];	//0x004E
    uint32_t InitSeed;	//0x0060
    char pad_0064[12];	//0x0064
    D2ClientStrc * pClientList;	//0x0070
    uint32_t ClientCount;	//0x0078
    uint32_t SpawnedPlayerCount;	//0x007C
    uint32_t SpawnedMonsterCount;	//0x0080
    uint32_t SpawnedObjectCount;	//0x0084
    uint32_t SpawnedMissileCount;	//0x0088
    uint32_t SpawnedItemCount;	//0x008C
    uint32_t SpawnedTiles;	//0x0090
    char pad_0094[36];	//0x0094
    D2DrlgActStrc **pActList;	//0x00B8 list size 5
};

struct D2FieldStrc
{
    int32_t X;	//0x0000
    int32_t Y;	//0x0004
};

struct D2UnitFindArgStrc
{
    int32_t nFlags;	//0x00
    int32_t unk0x04;	//0x04
    D2UnitStrc * pUnit;	//0x08
    int32_t nX;	//0x0C
    int32_t nY;	//0x10
    int32_t nSize;	//0x14
    int32_t nMaxArrayEntries;	//0x18
    int32_t nIndex;	//0x1C
    D2FieldStrc * pField;	//0x20
    UNITFINDTEST pfnUnitTest;	//0x24
    int32_t unk0x28;	//0x28
    int32_t unk0x2C;	//0x2C
    int32_t unk0x30;	//0x30
    int32_t unk0x34;	//0x34
};

struct D2UnitFindDataStrc
{
    D2UnitStrc **pUnitsArray;	//0x04
    D2RoomStrc * pRoom;	//0x08
    UNITFINDTEST pfnUnitTest;	//0x0C
    D2UnitFindArgStrc * pUnitFindArg;	//0x10
    int32_t nFlags;	//0x14
    int32_t nIndex;	//0x18
    int32_t nMaxArrayEntries;	//0x1C
    int32_t nX;	//0x20
    int32_t nY;	//0x24
    int32_t nSize;	//0x28
};

struct D2ClientStrc
{
    char pad_0000[136];	//0x0000
};

struct D2PresetUnitStrc
{
    uint32_t LevelNo;	//0x0000
    uint32_t Index;	//0x0004
    uint32_t PosX;	//0x0008
    char pad_000C[4];	//0x000C
    D2PresetUnitStrc * pPresetNext;	//0x0010
    uint64_t AreaID;	//0x0018
    uint32_t Type;	//0x0020
    uint32_t PosY;	//0x0024
    char pad_0028[8];	//0x0028
};

struct D2StatStrc
{
    uint16_t Layer;	//0x0000
    uint16_t ID;	//0x0002
    uint32_t Value;	//0x0004
};

struct D2DrlgStrc
{
    char pad_0000[280];	//0x0000
    D2DrlgWarpStrc * pWarp;
    uint32_t StaffTombLevel;	//0x0120
    char pad_0124[1844];	//0x0124
    D2DrlgActStrc * pAct;	//0x0858
    char pad_0860[8];	//0x0860
    D2DrlgLevelStrc * pLevelFirst;	//0x0868
    uint32_t ActNo;	//0x0870
    char pad_0874[12];	//0x0874
};

struct D2RoomExStrc
{
    D2RoomExStrc * pFirstRoomEx;	//0x0000
    D2RoomExStrc **pRoomExNear;	//0x0010
    uint32_t RoomsNear;	//0x0018
    char pad_001C[44];	//0x001C
    D2RoomExStrc * pNextRoomEx;	//0x0048
    uint32_t RoomFlags;	//0x0050
    char pad_0054[4];	//0x0054
    D2RoomStrc * pRoom1;	//0x0058
    uint32_t PosX;	//0x0060
    uint32_t PosY;	//0x0064
    uint32_t SizeX;	//0x0068
    uint32_t SizeY;	//0x006C
    char pad_0070[4];	//0x0070
    uint32_t dwPresetType;	//0x0074
    D2RoomTileStrc * pRoomTiles;	//0x0078
    char pad_0080[16];	//0x0080
    D2DrlgLevelStrc * pLevel;	//0x0090
    D2PresetUnitStrc * pPreset;	//0x0098
};

struct D2BoundingBoxStrc
{
    int32_t nLeft;	//0x00
    int32_t nBottom;	//0x04
    int32_t nRight;	//0x08
    int32_t nTop;	//0x0C
};

struct D2DrlgCoordsStrc
{
    uint32_t dwSubtilesLeft;	//0x0000
    uint32_t dwSubtilesTop;	//0x0004
    uint32_t dwSubtilesWidth;	//0x0008
    uint32_t dwSubtilesHeight;	//0x000C
    uint32_t dwTilesLeft;	//0x0010
    uint32_t dwTilesTop;	//0x0014
    uint32_t dwTilesWidth;	//0x0018
    uint32_t dwTilesHeight;	//0x001C
};

struct D2RoomCollisionGridStrc
{
    uint32_t dwSubtilesLeft;	//0x0000
    uint32_t dwSubtilesTop;	//0x0004
    uint32_t dwSubtilesWidth;	//0x0008
    uint32_t dwSubtilesHeight;	//0x000C
    uint32_t dwTilesLeft;	//0x0010
    uint32_t dwTilesTop;	//0x0014
    uint32_t dwTilesWidth;	//0x0018
    uint32_t dwTilesHeight;	//0x001C
    uint16_t * pCollisionMask;	//0x0020
};

struct D2RoomTileStrc
{
    D2RoomExStrc * pRoomEx;	//0x0000
    D2RoomTileStrc * pNext;	//0x0008
    uint64_t nEnabled;	//0x0010
    uint64_t * Unk0x0018;	//0x0018
    D2LvlWarpTxt * pLvlWarpTxtRecord;	//0x0020
    uint64_t * Unk0x0028;	//0x0028
};

struct D2LvlPrestTxt
{
    uint32_t dwDef;	//0x00
    uint32_t dwLevelId;	//0x04
    uint32_t dwPopulate;	//0x08
    uint32_t dwLogicals;	//0x0C
    uint32_t dwOutdoors;	//0x10
    uint32_t dwAnimate;	//0x14
    uint32_t dwKillEdge;	//0x18
    uint32_t dwFillBlanks;	//0x1C
    uint32_t dwExpansion;	//0x20
    uint32_t nAnimSpeed;	//0x24
    int32_t nSizeX;	//0x28
    int32_t nSizeY;	//0x2C
    uint32_t dwAutoMap;	//0x30
    uint32_t dwScan;	//0x34
    uint32_t dwPops;	//0x38
    uint32_t dwPopPad;	//0x3C
    uint32_t dwFiles;	//0x40
    char szFile[6][60];	//0x44
    //char szFile1[60];						//0x44
    //char szFile2[60];						//0x80
    //char szFile3[60];						//0xBC
    //char szFile4[60];						//0xF8
    //char szFile5[60];						//0x134
    //char szFile6[60];						//0x170
    uint32_t dwDt1Mask;	//0x1AC
};

struct D2DrlgFileStrc
{
    int32_t unk0x00;	//0x00
    void *pDS1File;	//0x04
    int32_t unk0x08;	//0x08
    int32_t nWidth;	//0x0C
    int32_t nHeight;	//0x10
    int32_t nWalls;	//0x14
    int32_t nFloors;	//0x18
    void *pOrientationLayer[4];	//0x1C
    void *pWallLayer[4];	//0x2C
    void *pFloorLayer[2];	//0x3C
    void *pShadowLayer;	//0x44
    void *pSubstGroupTags;	//0x48
    int32_t nSubstGroups;	//0x4C named nClusters in original game
    struct D2DrlgSubstGroupStrc * pSubstGroups;	//0x50
    D2PresetUnitStrc * pPresetUnit;	//0x54
    D2DrlgFileStrc * pNext;	//0x58
};

struct D2DrlgGridStrc
{
    int32_t * pCellsFlags;	//0x00
    int32_t * pCellsRowOffsets;	//0x04
    int32_t nWidth;	//0x08
    int32_t nHeight;	//0x0C
    int32_t unk0x10;	//0x10 Maybe indicates if uninitialized? No memset when set to 1
};

struct D2DrlgRoomTilesStrc
{
    D2DrlgTileDataStrc * pWallTiles;	//0x00
    int32_t nWalls;	//0x04
    D2DrlgTileDataStrc * pFloorTiles;	//0x08
    int32_t nFloors;	//0x0C
    D2DrlgTileDataStrc * pRoofTiles;	//0x10
    int32_t nRoofs;	//0x14
};

struct D2DrlgTileGridStrc
{
    D2DrlgTileLinkStrc * pMapLinks;	//0x00
    D2DrlgAnimTileGridStrc * pAnimTiles;	//0x04
    int32_t nWalls;	//0x08
    int32_t nFloors;	//0x0C
    int32_t nShadows;	//0x10
    D2DrlgRoomTilesStrc pTiles;	//0x14
};

struct D2DrlgTileLinkStrc
{
    BOOL bFloor;	//0x00
    D2DrlgTileDataStrc * pMapTile;	//0x04
    D2DrlgTileLinkStrc * pNext;	//0x08
};

struct D2DrlgAnimTileGridStrc
{
    D2DrlgTileDataStrc **ppMapTileData;	//0x00
    int32_t nFrames;	//0x04
    int32_t nCurrentFrame;	//0x08
    int32_t nAnimationSpeed;	//0x0C
    D2DrlgAnimTileGridStrc * pNext;	//0x10
};
struct D2DrlgTileGridStrc
{
    D2DrlgTileLinkStrc * pMapLinks;	//0x00
    D2DrlgAnimTileGridStrc * pAnimTiles;	//0x04
    int32_t nWalls;	//0x08
    int32_t nFloors;	//0x0C
    int32_t nShadows;	//0x10
    D2DrlgRoomTilesStrc pTiles;	//0x14
};

struct D2DrlgMapStrc
{
    int32_t nLevelPrest;	//0x00
    int32_t nPickedFile;	//0x04
    D2LvlPrestTxt * pLvlPrestTxtRecord;	//0x08
    D2DrlgFileStrc * pFile;	//0x0C
    D2DrlgCoordStrc pDrlgCoord;	//0x10
    BOOL bHasInfo;	//0x20
    D2DrlgGridStrc pMapGrid;	//0x24
    D2PresetUnitStrc * pPresetUnit;	//0x38
    BOOL bInited;	//0x3C
    int32_t nPops;	//0x40
    int32_t * pPopsIndex;	//0x44
    int32_t * pPopsSubIndex;	//0x48
    int32_t * pPopsOrientation;	//0x4C
    D2DrlgCoordStrc * pPopsLocation;	//0x50
    D2DrlgMapStrc * pNext;	//0x54
};

struct D2DrlgPresetInfoStrc
{
    D2DrlgMapStrc * pDrlgMap;	//0x00
    int32_t nDirection;	//0x04
};

struct D2DrlgLevelStrc
{
    uint32_t nDrlgType;
    char pad_0000[12];	//0x0000
    D2RoomExStrc * pRoomExFirst;	//0x0010
    D2DrlgPresetInfoStrc * pPreset;
    uint32_t PosX;	//0x0024
    uint32_t PosY;	//0x0028
    uint32_t SizeX;	//0x002C
    uint32_t SizeY;	//0x0030
    char pad_0034[388];	//0x0034
    D2DrlgLevelStrc * pLevelNext;	//0x01B8
    char pad_01C0[8];	//0x01C0
    D2DrlgStrc * pDrlg;	//0x01C8
    char pad_01D0[20];
    uint32_t nLevelType;
    char pad_01D[20];	//0x01D0
    uint64_t nLevelId;	//0x01F8
    char pad_01FC[8];	//0x01FC
    union	//0x0208
    {
        int32_t RoomCenterX[9];	//0x0000
        int32_t WarpX[9];	//0x0000
    };
    union	//0x022C
    {
        int32_t RoomCenterY[9];	//0x0000
        int32_t WarpY[9];	//0x0000
    };
    char pad_0250[56];	//0x0250
};

struct D2LvlWarpTxt
{
    char Name[32];	//0x0000
    char pad_0020[12];	//0x0020
    uint32_t ID;	//0x002C
    char pad_0030[48];	//0x0030
};

struct D2StaticPathStrc
{
    D2RoomStrc * pRoom;	//0x0000
    uint32_t TargetX;	//0x0008
    uint32_t TargetY;	//0x000C
    uint32_t PosX;	//0x0010
    uint32_t PosY;	//0x0014
};

struct D2GSServerToClientHandler
{
    void *pHandler;	//0x0000 void (__fastcall* D2GSServerToClient_t)(void* pPacket);
    uint64_t PacketSize;	//0x0008
    void *pHandlerEx;	//0x0010 void (__fastcall* D2GSServerToClient_t)(D2UnitStrc* pUnit, void* pPacket);
};

struct D2InventoryRect
{
    uint32_t Left;	//0x0000
    uint32_t Right;	//0x0004
    uint32_t Top;	//0x0008
    uint32_t Down;	//0x000C
};

struct D2BeltText
{
    uint32_t Id;	//0x0000
    uint32_t Capacity;	//0x0004
    D2InventoryRect InventoryRect[16];	//0x0008
    char pad_0108[136];	//0x0108
};

struct D2MazeLevelIdStrc
{
    int32_t nLevelPrestId1;	//0x00
    int32_t nLevelPrestId2;	//0x04
    int32_t nPickedFile;	//0x08
    int32_t nDirection;	//0x0C
};

struct D2MissileDataStrc
{
    char pad_0000[136];	//0x0000
};

struct D2BitBufferStrc
{
    uint8_t * pBuffer;	//0x0000
    uint64_t Bits;	//0x0008
    uint64_t Pos;	//0x0010
    uint64_t PosBits;	//0x0018
    uint32_t bFull;	//0x0020
};

struct D2InventoryGridStrc
{
    D2UnitStrc * pItem;	//0x0000
    D2UnitStrc * pLastItem;	//0x0008
    int8_t Width;	//0x0010
    int8_t Height;	//0x0011
    char pad_0012[6];	//0x0012
    D2UnitStrc **ppItems;	//0x0018
};

struct D2AnimDataRecordStrc
{
    char AnimDataName[8];	//0x0000
    uint32_t Frames;	//0x0008
    uint32_t AnimSpeed;	//0x000C
    char pad_0010[120];	//0x0010
};

struct D2Point16
{
    int16_t X;	//0x0000
    int16_t Y;	//0x0002
};

struct D2UIPanelManagerStrc_VMT
{
    void(__fastcall *WIDGET_Func0)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func1)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func2)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func3)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_OnMessage)(D2UIPanelManagerStrc *pThis, uint64_t aMessage[]);
    void(__fastcall *WIDGET_Func5)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func6)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func7)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func8)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func9)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func10)(D2UIPanelManagerStrc *pThis);
    void(__fastcall *WIDGET_Func11)(D2UIPanelManagerStrc *pThis);
};

struct D2UIPanelManagerStrc
{
    D2UIPanelManagerStrc_VMT * _VMT;
    char *pName;	//0x0008
    uint64_t NameLength;	//0x0010
    uint32_t MaxNameLength;	//0x0018
    uint32_t TextFlags;	//0x001C
    char InlineName[16];	//0x0020
    D2UIWidgetStrc * pParent;	//0x0030
    char pad_0038[16];	//0x0038
    float RelPosX;	//0x0048
    float RelPosY;	//0x004C
    uint8_t Enabled;	//0x0050
    uint8_t Visible;	//0x0051
    char pad_0052[6];	//0x0052
    D2UIWidgetStrc **pChildren;	//0x0058
    uint64_t NumChildren;	//0x0060
    uint64_t Allocated;	//0x0068
    char pad_0070[256];	//0x0070

};

struct D2UIWidgetStrc_VMT
{
    void(__fastcall *WIDGET_Func0)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func1)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func2)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func3)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_OnMessage)(D2UIWidgetStrc *pThis, uint64_t aMessage[]);
    void(__fastcall *WIDGET_Func5)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func6)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func7)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func8)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func9)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func10)(D2UIWidgetStrc *pThis);
    void(__fastcall *WIDGET_Func11)(D2UIWidgetStrc *pThis);
};

struct D2UIWidgetStrc
{
    D2UIWidgetStrc_VMT * _VMT;
    char *pName;	//0x0008
    uint64_t NameLength;	//0x0010
    uint32_t MaxNameLength;	//0x0018
    uint32_t TextFlags;	//0x001C
    char InlineName[16];	//0x0020
    D2UIWidgetStrc * pParent;	//0x0030
    char pad_0038[16];	//0x0038
    float RelPosX;	//0x0048
    float RelPosY;	//0x004C
    uint8_t Enabled;	//0x0050
    uint8_t Visible;	//0x0051
    char pad_0052[6];	//0x0052
    D2UIWidgetStrc **pChildren;	//0x0058
    uint64_t NumChildren;	//0x0060
    uint64_t Allocated;	//0x0068
    char pad_0070[32];	//0x0070

};
struct D2UIButtonStrc_VMT
{
    void(__fastcall *BUTTON_Func0)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func1)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func2)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func3)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_OnMessage)(D2UIButtonStrc *pThis, uint64_t aMessage[]);
    void(__fastcall *BUTTON_Func5)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func6)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func7)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func8)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func9)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func10)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func11)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func12)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func13)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func14)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func15)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func16)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func17)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func18)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Func19)(D2UIButtonStrc *pThis);
    void(__fastcall *BUTTON_Click)(D2UIButtonStrc *pThis, bool bClicked);
};

struct D2UIButtonStrc
{
    D2UIButtonStrc_VMT * _VMT;
    char *pName;	//0x0008
    uint64_t NameLength;	//0x0010
    uint32_t MaxNameLength;	//0x0018
    uint32_t TextFlags;	//0x001C
    char InlineName[16];	//0x0020
    D2UIWidgetStrc * pParent;	//0x0030
    char pad_0038[16];	//0x0038
    float RelPosX;	//0x0048
    float RelPosY;	//0x004C
    uint8_t Enabled;	//0x0050
    uint8_t Visible;	//0x0051
    char pad_0052[6];	//0x0052
    D2UIWidgetStrc **pChildren;	//0x0058
    uint64_t NumChildren;	//0x0060
    uint64_t Allocated;	//0x0068

};

#pragma pack(pop)