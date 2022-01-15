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
typedef int32_t(__fastcall* UNITFINDTEST)(D2UnitStrc* pUnit, D2UnitFindArgStrc* pUnitFindArg);

#pragma pack(push, 1)



struct D2MonStatsInitStrc
{
	int32_t nMinHP;								//0x00
	int32_t nMaxHP;								//0x04
	int32_t nAC;								//0x08
	int32_t nTH;								//0x0C
	int32_t nExp;								//0x10
	int32_t nA1MinD;							//0x14
	int32_t nA1MaxD;							//0x18
	int32_t nA2MinD;							//0x1C
	int32_t nA2MaxD;							//0x20
	int32_t nS1MinD;							//0x24
	int32_t nS1MaxD;							//0x28
	int32_t nElMinD;							//0x2C
	int32_t nElMaxD;							//0x30
	int32_t nElDur;								//0x34
};

struct D2ItemRatioTxt
{
	uint32_t dwUnique;						//0x00
	uint32_t dwUniqueDivisor;				//0x04
	uint32_t dwUniqueMin;					//0x08
	uint32_t dwRare;						//0x0C
	uint32_t dwRareDivisor;					//0x10
	uint32_t dwRareMin;						//0x14
	uint32_t dwSet;							//0x18
	uint32_t dwSetDivisor;					//0x1C
	uint32_t dwSetMin;						//0x20
	uint32_t dwMagic;						//0x24
	uint32_t dwMagicDivisor;				//0x28
	uint32_t dwMagicMin;					//0x2C
	uint32_t dwHiQuality;					//0x30
	uint32_t dwHiQualityDivisor;			//0x34
	uint32_t dwNormal;						//0x38
	uint32_t dwNormalDivisor;				//0x3C
	uint16_t wVersion;						//0x40
	uint8_t nUber;							//0x42
	uint8_t nClassSpecific;					//0x43 
};


struct D2MagicAffixTxt
{
	char szName[32];								//0x00
	uint16_t wTblIndex;								//0x20
	uint16_t wVersion;								//0x22
	D2PropertyStrc pProperties[3];					//0x24
	uint16_t wSpawnable;							//0x54
	char nTransformColor;							//0x56
	uint8_t unk0x57;								//0x57
	uint32_t dwLevel;								//0x58
	uint32_t dwGroup;								//0x5C
	uint32_t dwMaxLevel;							//0x60
	uint8_t nRare;									//0x64
	uint8_t nLevelReq;								//0x65
	uint8_t nClassSpecific;							//0x66
	uint8_t nClass;									//0x67
	uint8_t nClassLevelReq;							//0x68
	uint8_t pad0x69;								//0x69
	uint16_t wIType[7];								//0x6A
	uint16_t wEType[5];								//0x78
	uint16_t wFrequency;							//0x82
	uint32_t dwDivide;								//0x84
	uint32_t dwMultiply;							//0x88
	uint32_t dwAdd;									//0x8C
};

struct D2UnkDrlgLogicStrc
{
	D2RoomExStrc* pRoomEx;					//0x00
	D2DrlgGridStrc* field_4;				//0x04
	D2DrlgGridStrc* pOrientationGrid;		//0x08
	D2DrlgGridStrc* pWallGrid;				//0x0C
	D2DrlgGridStrc* pFloorGrid;				//0x10
	D2DrlgGridStrc* field_14;				//0x14
	int32_t field_18;						//0x18
	int32_t nFlags;							//0x1C
};


struct D2TileLibraryHashStrc
{
	D2TileLibraryHashNodeStrc* pNodes[128];	//0x00
};

struct D2TileLibraryHashRefStrc
{
	D2TileLibraryEntryStrc* pTile;			//0x00
	D2TileLibraryHashRefStrc* pPrev;		//0x04
};

struct D2TileLibraryHashNodeStrc
{
	int32_t nIndex;								//0x00
	int32_t nSubIndex;							//0x04
	int32_t nOrientation;						//0x08
	D2TileLibraryHashRefStrc* pRef;			//0x0C
	D2TileLibraryHashNodeStrc* pPrev;		//0x10
};

struct D2TileRecordStrc
{
	char szLibraryName[260];				//0x00
	void* pLibrary;							//0x104
	D2TileLibraryHashStrc* pHashBlock;		//0x108
	D2TileRecordStrc* pPrev;				//0x10C
};
struct D2TileLibraryEntryStrc
{
	int32_t nDirection;							//0x00
	uint16_t nRoofHeight;						//0x04
	uint16_t nFlags;							//0x06
	int32_t nHeight;							//0x08
	int32_t nWidth;								//0x0C
	int32_t unk0x10;							//0x10
	int32_t nOrientation;						//0x14
	int32_t nIndex;								//0x18
	int32_t nSubIndex;							//0x1C
	int32_t nFrame_Rarity;						//0x20
	int32_t unk0x24;							//0x24
	uint8_t dwTileFlags[4];					//0x28
	int32_t dwBlockOffset_pBlock;				//0x2C
	int32_t nBlockSize;							//0x30
	int32_t nBlocks;							//0x34
	D2TileRecordStrc* pParent;				//0x38
	uint16_t unk0x3C;							//0x3C
	uint16_t nCacheIndex;						//0x3E
	uint32_t unk0x40[4];						//0x40
	//int32_t field_50;
	//int32_t field_54;
	//int32_t field_58;
	//int32_t field_5C;
};

struct D2DrlgTileDataStrc
{
	int32_t nWidth;								//0x00
	int32_t nHeight;							//0x04
	int32_t nPosX;								//0x08
	int32_t nPosY;								//0x0C
	int32_t unk0x10;							//0x10
	uint32_t dwFlags;					//0x14
	D2TileLibraryEntryStrc* pTile;			//0x18
	int32_t unk0x1C;							//0x1C
	D2DrlgTileDataStrc* unk0x20;			//0x20
	int32_t unk0x24;							//0x24
	uint8_t nRed;								//0x28
	uint8_t nGreen;							//0x29
	uint8_t nBlue;								//0x2A
	uint8_t nIntensity;						//0x2B
	int32_t unk0x2C;							//0x2C
};

struct D2SeedStrc
{
	union
	{
		struct
		{
			uint32_t nLowSeed;					//0x00
			uint32_t nHighSeed;					//0x04
		};
		uint64_t lSeed;		//0x00
	};
};

struct D2DrlgLevelLinkDataStrc
{
	D2SeedStrc pSeed;						//0x00
	D2DrlgCoordStrc pLevelCoord[15];		//0x08
	D2DrlgLinkStrc* pLink;					//0xF8
	union
	{
		int32_t nRand[4][15];					//0xFC
		int32_t nRand2[60];						//0xFC
	};
	int32_t nIteration;							//0x1EC
	int32_t nCurrentLevel;						//0x1F0
};


struct D2DrlgLinkStrc
{
	void* pfLinker;							//0x00
	int32_t nLevel;								//0x04
	int32_t nLevelLink;							//0x08
	int32_t nLevelLinkEx;						//0x0C
};

struct D2DrlgWarpStrc
{
	int32_t nLevel;								//0x00
	int32_t nVis[8];							//0x04
	int32_t nWarp[8];
	int32_t unkval;
	D2DrlgWarpStrc* pNext;					//0x44
};

struct D2MissileDamageDataStrc
{
	int32_t nFlags;								//0x00
	int32_t nMinDamage;							//0x04
	int32_t nMaxDamage;							//0x08
	int32_t nFireMinDamage;						//0x0C
	int32_t nFireMaxDamage;						//0x10
	int32_t nFireLength;						//0x14
	int32_t nLightMinDamage;					//0x18
	int32_t nLightMaxDamage;					//0x1C
	int32_t nMagicMinDamage;					//0x20
	int32_t nMagicMaxDamage;					//0x24
	int32_t nColdMinDamage;						//0x28
	int32_t nColdMaxDamage;						//0x2C
	int32_t nColdLength;						//0x30
	int32_t nPoisonMinDamage;					//0x34
	int32_t nPoisonMaxDamage;					//0x38
	int32_t nPoisonLength;						//0x3C
	int32_t nPoisonCount;						//0x40
	int32_t nLifeDrainMinDamage;				//0x44
	int32_t nLifeDrainMaxDamage;				//0x48
	int32_t nManaDrainMinDamage;				//0x4C
	int32_t nManaDrainMaxDamage;				//0x50
	int32_t nStaminaDrainMinDamage;				//0x54
	int32_t nStaminaDrainMaxDamage;				//0x58
	int32_t nStunLength;						//0x5C
	int32_t nBurningMin;						//0x60
	int32_t nBurningMax;						//0x64
	int32_t nBurnLength;						//0x68
	int32_t nDemonDamagePercent;				//0x6C
	int32_t nUndeadDamagePercent;				//0x70
	int32_t nDamageTargetAC;					//0x74
	int32_t nDamagePercent;						//0x78
};

struct D2UnkOutdoorStrc
{
	D2DrlgLevelStrc* pLevel;			//0x00
	int32_t* field_4;					//0x04
	D2DrlgGridStrc* pGrid1;				//0x08
	D2DrlgGridStrc* pGrid2;				//0x0C
	int32_t nLevelPrestId;				//0x10
	int32_t field_14;					//0x14
	int32_t nLvlSubId;					//0x18
	unsigned int(__fastcall* field_1C)(D2DrlgLevelStrc* pLevel, int nX, int nY);						//0x1C
	BOOL(__fastcall* field_20)(D2DrlgLevelStrc* pLevel, int nX, int nY, int nId, int nOffset, char nFlags);						//0x20
	BOOL(__fastcall* field_24)(D2DrlgLevelStrc* pLevel, int nX, int nY, int a4, int a5, unsigned int a6);						//0x24
	int(__fastcall* field_28)(D2DrlgLevelStrc* pLevel, int nStyle, int a3);						//0x28
	void(__fastcall* field_2C)(D2DrlgLevelStrc* pLevel, int nX, int nY);						//0x2C
	void(__fastcall* field_30)(D2DrlgLevelStrc* pLevel, int nX, int nY);						//0x30
	void(__fastcall* field_34)(D2DrlgLevelStrc* pLevel, int nX, int nY, int nLevelPrestId, int nRand, BOOL a6);						//0x34
};


struct D2MissilesTxt
{
	uint16_t wId;							//0x00
	uint16_t pad0x02;						//0x02
	uint32_t dwMissileFlags;				//0x04
	uint16_t wCltDoFunc;					//0x08
	uint16_t wCltHitFunc;					//0x0A
	uint16_t wSrvDoFunc;					//0x0C
	uint16_t wSrvHitFunc;					//0x0E
	uint16_t wSrvDmgFunc;					//0x10
	uint16_t wTravelSound;					//0x12
	uint16_t wHitSound;						//0x14
	uint16_t wExplosionMissile;				//0x16
	uint16_t wSubMissile[3];				//0x18
	uint16_t wCltSubMissile[3];				//0x1E
	uint16_t wHitSubMissile[4];				//0x24
	uint16_t wCltHitSubMissile[4];			//0x2C
	uint16_t wProgSound;					//0x34
	uint16_t wProgOverlay;					//0x36
	uint32_t dwParam[5];					//0x38
	uint32_t dwHitPar[3];					//0x4C
	uint32_t dwCltParam[5];					//0x58
	uint32_t dwCltHitPar[3];				//0x6C
	uint32_t dwDmgParam[2];					//0x78
	uint32_t dwSrvCalc;						//0x80
	uint32_t dwCltCalc;						//0x84
	uint32_t dwHitCalc;						//0x88
	uint32_t dwCltHitCalc;					//0x8C
	uint32_t dwDmgCalc;						//0x90
	uint8_t nHitClass;						//0x94
	uint8_t pad0x95;						//0x95
	uint16_t wRange;						//0x96
	uint16_t wLevRange;						//0x98
	uint8_t nVel;							//0x9A
	uint8_t nVelLev;						//0x9B
	uint8_t nMaxVel;						//0x9C
	uint8_t pad0x9D;						//0x9D
	uint16_t wAccel;						//0x9E
	uint16_t wAnimRate;						//0xA0
	uint16_t wXoffset;						//0xA2
	uint16_t wYoffset;						//0xA4
	uint16_t wZoffset;						//0xA6
	uint32_t dwHitFlags;					//0xA8
	uint16_t wResultFlags;					//0xAC
	uint8_t nKnockBack;						//0xAE
	uint8_t pad0xAF;						//0xAF
	uint32_t dwMinDamage;					//0xB0
	uint32_t dwMaxDamage;					//0xB4
	uint32_t dwMinLevDam[5];				//0xB8
	uint32_t dwMaxLevDam[5];				//0xCC
	uint32_t dwDmgSymPerCalc;				//0xE0
	uint8_t nElemType;						//0xE4
	uint8_t pad0xE5[3];						//0xE5
	uint32_t dwElemMin;						//0xE8
	uint32_t dwElemMax;						//0xEC
	uint32_t dwMinElemLev[5];				//0xF0
	uint32_t dwMaxElemLev[5];				//0x104
	uint32_t dwElemDmgSymPerCalc;			//0x118
	uint32_t dwElemLen;						//0x11C
	uint32_t dwElemLevLen[3];				//0x120
	uint8_t nCltSrcTown;					//0x12C
	uint8_t nSrcDamage;						//0x12D
	uint8_t nSrcMissDmg;					//0x12E
	uint8_t nHoly;							//0x12F
	uint8_t nLight;							//0x130
	uint8_t nFlicker;						//0x131
	uint8_t nRGB[3];						//0x132
	uint8_t nInitSteps;						//0x135
	uint8_t nActivate;						//0x136
	uint8_t nLoopAnim;						//0x137
	char szCelFile[64];						//0x138
	uint8_t nAnimLen;						//0x178
	uint8_t pad0x179[3];					//0x179
	uint32_t dwRandStart;					//0x17C
	uint8_t nSubLoop;						//0x180
	uint8_t nSubStart;						//0x181
	uint8_t nSubStop;						//0x182
	uint8_t nCollideType;					//0x183
	uint8_t nCollision;						//0x184
	uint8_t nClientCol;						//0x185
	uint8_t nCollideKill;					//0x186
	uint8_t nCollideFriend;					//0x187
	uint8_t nNextHit;						//0x188
	uint8_t nNextDelay;						//0x189
	uint8_t nSize;							//0x18A
	uint8_t nToHit;							//0x18B
	uint8_t nAlwaysExplode;					//0x18C
	uint8_t nTrans;							//0x18D
	uint8_t nQty;							//0x18E
	uint8_t pad0x18F;						//0x18F
	uint32_t dwSpecialSetup;				//0x190
	int16_t nSkill;							//0x194
	uint8_t nHitShift;						//0x196
	uint8_t unk0x197[5];					//0x197
	uint32_t dwDamageRate;					//0x19C
	uint8_t nNumDirections;					//0x1A0
	uint8_t nAnimSpeed;						//0x1A1
	uint8_t nLocalBlood;					//0x1A2
	uint8_t pad0x1A3;						//0x1A3
};


struct D2TxtLinkNodeStrc
{
	char szText[32];				//0x00
	int nLinkIndex;					//0x20
	D2TxtLinkNodeStrc* pPrevious;	//0x24
	D2TxtLinkNodeStrc* pNext;		//0x28
};

struct D2TxtLinkTblStrc
{
	union
	{
		char szCode[4];				//0x00
		uint32_t dwCode;			//0x00
	};
	int nLinkIndex;					//0x04
};

struct D2TxtLinkStrc
{
	int32_t nRecords;				//0x00
	int32_t nAllocatedCells;		//0x04
	D2TxtLinkTblStrc* pTbl;			//0x08
	D2TxtLinkNodeStrc* pFirstNode;	//0x0C
};


struct D2BinFileStrc
{
	uint8_t* pDataBuffer;			//0x00
	uint8_t* pData;					//0x04
	int32_t nRecordCount;			//0x08
	int32_t nCellCount;				//0x0C
};

enum D2C_TxtFieldTypes : uint32_t
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
	char* szFieldName;				//0x00
	D2C_TxtFieldTypes nFieldType;	//0x04
	int32_t nFieldLength;			//0x08
	int32_t nFieldOffset;			//0x0C
	void* pLinkField;				//0x10
};

struct D2UnkExcelStrc
{
	D2UnkExcelStrc* pNext;			//0x00
	uint32_t dwHash;				//0x04
	D2BinFieldStrc* pBinField;		//0x08
};

struct D2UnkFogStrc
{
	void* pCallback;				//0x00
	int32_t unk0x04;				//0x04
};


struct D2DataTablesStrc {
 	uint64_t *pPlayerClassTxt; //0x0000
	uint64_t nPlayerClassTxtCount; //0x0008
	uint64_t nPlayerClassTxtCountEx; //0x0010
	uint64_t *pPlayerClassTxtLinker; //0x0018
	uint64_t *pBodyLocsTxt; //0x0020
	uint64_t nBodyLocsTxtCount; //0x0028
	uint64_t nBodyLocsTxtCountEx; //0x0030
	uint64_t *pBodyLocsTxtLinker; //0x0038
	uint64_t *pStorePageTxt; //0x0040
	uint64_t nStorePageTxtCount; //0x0048
	uint64_t nStorePageTxtCountEx; //0x0050
	uint64_t *pStorePageTxtLinker; //0x0058
	uint64_t *pElemTypesTxt; //0x0060
	uint64_t nElemTypesTxtCount; //0x0068
	uint64_t nElemTypesTxtCountEx; //0x0070
	uint64_t *pElemTypesTxtLinker; //0x0078
	uint64_t *pHitClassTxt; //0x0080
	uint64_t nHitClassTxtCount; //0x0088
	uint64_t nHitClassTxtCountEx; //0x0090
	uint64_t *pHitClassTxtLinker; //0x0098
	char pad_00A0[64]; //0x00A0
	uint64_t *pActInfoTxt; //0x00E0
	uint64_t nActInfoTxtCount; //0x00E8
	uint64_t nActInfoTxtCountEx; //0x00F0
	uint64_t *pActInfoTxtLinker; //0x00F8
	uint64_t *pCommonActCOF; //0x0100
	uint64_t nCommonActCOFCount; //0x0108
	uint64_t nCommonActCOFCountEx; //0x0110
	uint64_t *pSkillCalcTxt; //0x0118
	uint64_t nSkillCalcTxtCount; //0x0120
	uint64_t nSkillCalcTxtCountEx; //0x0128
	uint64_t *pSkillCalcTxtLinker; //0x0130
	uint64_t *N000000D3; //0x0138 something dealing w/ skills
	uint64_t N000000D4; //0x0140
	uint64_t N000000D5; //0x0148
	uint64_t *N000000D6; //0x0150 something dealing w/ skills
	uint64_t N000000D7; //0x0158
	uint64_t N000000D8; //0x0160
	uint64_t *pMissileCalcTxt; //0x0168
	uint64_t nMissileCalcTxtCount; //0x0170
	uint64_t nMissileCalcTxtCountEx; //0x0178
	uint64_t *pMissileCalcTxtLinker; //0x0180
	uint64_t *pMissCode; //0x0188
	uint64_t nMissCodeCount; //0x0190
	uint64_t nMissCodeCountEx; //0x0198
	uint64_t *pSkillCode; //0x01A0
	uint64_t nSkillCodeCount; //0x01A8
	uint64_t nSkillCodeCountEx; //0x01B0
	uint64_t *iSkillCode; //0x01B8
	uint64_t pEventsTxt; //0x01C0
	uint64_t nEventsTxtCount; //0x01C8
	uint64_t nEventsTxtCountEx; //0x01D0
	uint64_t *pEventsTxtLinker; //0x01D8
	uint64_t *pCompCodeTxt; //0x01E0
	uint64_t nCompCodeTxtCount; //0x01E8
	uint64_t nCompCodeTxtCountEx; //0x01F0
	uint64_t *pCompCodeTxtLinker; //0x01F8
	uint64_t *pMonAiTxt; //0x0200
	uint64_t nMonAiTxtCount; //0x0208
	uint64_t nMonAiTxtCountEx; //0x0210
	uint64_t *pMonAiTxtLinker; //0x0218
	uint64_t *pItemsLinker; //0x0220
	uint64_t *pItemsCode; //0x0228
	uint64_t nItemsCodeCount; //0x0230
	uint64_t nItemsCodeCountEx; //0x0238
	uint64_t *pPropertiesTxt; //0x0240
	uint64_t nPropertiesTxtCount; //0x0248
	uint64_t nPropertiesTxtCountEx; //0x0250
	uint64_t *pPropertiesTxtLinker; //0x0258
	uint64_t *pRunesTxtLinker; //0x0260 this doesnt seem right?
	uint64_t *pObjectsTxtLinker; //0x0268 this doesnt seem right?
	uint64_t *pStatesTxt; //0x0270
	uint64_t nStatesTxtCount; //0x0278
	uint64_t nStatesTxtCountEx; //0x0280
	uint64_t *pStatesTxtLinker; //0x0288
	uint32_t *pStateMasks; //0x0290
	uint64_t nStateMasksCount; //0x0298 ?????
	uint64_t nStateMasksCountEx; //0x02A0 ?????
	uint32_t *fStateMasks[40]; //0x02A8
	uint64_t *pProgressiveStates; //0x03E8
	char pad_03F0[8]; //0x03F0
	uint64_t nProgressiveStates; //0x03F8
	uint64_t nMaxProgressiveStates; //0x0400
	uint64_t *pCurseStates; //0x0408
	uint64_t nCurseStates; //0x0410
	uint64_t nMaxCurseStates; //0x0418
	uint64_t *N0000012F; //0x0420
	uint64_t N00000130; //0x0428
	uint64_t N00000131; //0x0430
	uint64_t *pTransformStates; //0x0438
	uint64_t nTransformStates; //0x0440
	uint64_t nMaxTransformStates; //0x0448
	uint64_t *N00000135; //0x0450
	uint64_t N00000136; //0x0458
	uint64_t N00000137; //0x0460
	uint64_t *pActionStates; //0x0468
	uint64_t nActionStates; //0x0470
	uint64_t nMaxActionStates; //0x0478
	uint64_t *pColourStates; //0x0480
	uint64_t nColourStates; //0x0488
	uint64_t nMaxColourStates; //0x0490
	uint64_t *pSoundsTxt; //0x0498
	uint64_t nSoundsTxtCount; //0x04A0
	uint64_t nSoundsTxtCountEx; //0x04A8
	uint64_t *pSoundTxtLinker; //0x04B0
	uint64_t *pSoundEnvTxt; //0x04B8
	uint64_t nSoundEnvTxtCount; //0x04C0
	uint64_t nSoundEnvTxtCountEx; //0x04C8
	uint64_t *pSoundEnvTxtLinker; //0x04D0
	uint64_t *pHirelingTxt; //0x04D8
	uint64_t nHirelingTxtCount; //0x04E0
	uint64_t nHirelingTxtCountEx; //0x04E8
	uint32_t nClassicHirelingStartRecordIds[256]; //0x04F0
	uint32_t nExpansionHirelingStartRecordIds[256]; //0x08F0
	uint64_t *pNpcTxt; //0x0CF0
	uint64_t nNpcTxtCount; //0x0CF8
	uint64_t nNpcTxtCountEx; //0x0D00
	uint64_t *pColorsTxt; //0x0D08
	uint64_t nColorsTxtCount; //0x0D10
	uint64_t nColorsTxtCountEx; //0x0D18
	uint64_t *pColorsLinker; //0x0D20
	uint64_t *pTreasureClassExTxtLinker; //0x0D28
	uint64_t *pTreasureClassEx; //0x0D30
	uint64_t N0000087F; //0x0D38
	uint64_t N00000880; //0x0D40
	uint64_t *N00000881; //0x0D48 something to w/ treasure classes
	uint64_t N00000882; //0x0D50
	uint32_t N00000883; //0x0D58
	uint32_t N00001823; //0x0D5C
	uint64_t *N00000884; //0x0D60
	uint64_t *N00000885; //0x0D68
	uint64_t *N00000886; //0x0D70
	uint64_t *N00000887; //0x0D78
	uint64_t *N00000888; //0x0D80
	uint64_t *N00000889; //0x0D88
	uint64_t *N0000088A; //0x0D90
	uint64_t *N0000088B; //0x0D98
	uint64_t *N0000088C; //0x0DA0
	uint64_t *N0000088D; //0x0DA8
	uint64_t *N0000088E; //0x0DB0
	uint64_t *N0000088F; //0x0DB8
	uint64_t *N00000890; //0x0DC0
	uint64_t *N00000891; //0x0DC8
	uint64_t *N00000892; //0x0DD0
	uint64_t *N00000893; //0x0DD8
	uint64_t N00000894; //0x0DE0
	uint32_t N00000895; //0x0DE8
	uint32_t N00001820; //0x0DEC
	uint64_t *N00000896; //0x0DF0
	uint64_t *N00000897; //0x0DF8
	uint64_t *N00000898; //0x0E00
	uint64_t *N00000899; //0x0E08
	uint64_t *N0000089A; //0x0E10
	uint64_t *N0000089B; //0x0E18
	uint64_t *N0000089C; //0x0E20
	uint64_t *N0000089D; //0x0E28
	uint64_t *N0000089E; //0x0E30
	uint64_t *N0000089F; //0x0E38
	uint64_t *N000008A0; //0x0E40
	uint64_t *N000008A1; //0x0E48
	uint64_t *N000008A2; //0x0E50
	uint64_t *N000008A3; //0x0E58
	uint64_t *N000008A4; //0x0E60
	uint64_t *N000008A5; //0x0E68
	uint64_t N000008A6; //0x0E70
	uint32_t N000008A7; //0x0E78
	uint32_t N0000181D; //0x0E7C
	uint64_t *N000008A8; //0x0E80
	uint64_t *N000008A9; //0x0E88
	uint64_t *N000008AA; //0x0E90
	uint64_t *N000008AB; //0x0E98
	uint64_t *N000008AC; //0x0EA0
	uint64_t *N000008AD; //0x0EA8
	uint64_t *N000008AE; //0x0EB0
	uint64_t *N000008AF; //0x0EB8
	uint64_t *N000008B0; //0x0EC0
	uint64_t *N000008B1; //0x0EC8
	uint64_t *N000008B2; //0x0ED0
	uint64_t *N000008B3; //0x0ED8
	uint64_t *N000008B4; //0x0EE0
	uint64_t *N000008B5; //0x0EE8
	uint64_t *N000008B6; //0x0EF0
	D2MonStatsTxt *pMonStatsTxt; //0x0EF8
	uint64_t nMonStatsTxtCount; //0x0F00
	uint64_t nMonStatsTxtCountEx; //0x0F08
	uint64_t *pMonStatsTxtLinker; //0x0F10
	uint64_t *pMonSoundsTxt; //0x0F18
	uint64_t nMonSoundsTxtCount; //0x0F20
	uint64_t nMonSoundsTxtCountEx; //0x0F28
	uint64_t *pMonSoundsTxtLinker; //0x0F30
	uint64_t *pMonStats2Txt; //0x0F38
	uint64_t nMonStats2TxtCount; //0x0F40
	uint64_t nMonStats2TxtCountEx; //0x0F48
	uint64_t *pMonStats2TxtLinker; //0x0F50
	uint64_t pMonPlaceTxt; //0x0F58
	uint64_t nMonPlaceTxtCount; //0x0F60
	uint64_t nMonPlaceTxtCountEx; //0x0F68
	uint64_t *pMonPlaceTxtLinker; //0x0F70
	uint64_t *pMonPresetTxt; //0x0F78
	uint64_t nMonPresetTxtCount; //0x0F80
	uint64_t nMonPresetTxtCountEx; //0x0F88
	uint64_t *Unk0xF88; //0x0F90
	uint64_t N000008CB; //0x0F98
	uint32_t N000008CC; //0x0FA0
	uint32_t N00001827; //0x0FA4
	uint64_t *Unk0xFA0; //0x0FA8
	uint64_t *pMonPresetTxtActSections[5]; //0x0FB0
	uint64_t N000008D3; //0x0FD8
	uint32_t N000008D4; //0x0FE0
	uint32_t N0000182A; //0x0FE4
	uint32_t nMonPresetTxtActRecordCounts[5]; //0x0FE8
	uint32_t N00001CC6; //0x0FFC
	uint64_t *Unk0xFF8; //0x1000 pWanderingMonTxt???
	uint64_t N000008D9; //0x1008
	uint64_t N000008DA; //0x1010
	uint64_t *pSuperUniquesTxt; //0x1018
	uint64_t nSuperUniquesTxtCount; //0x1020
	uint64_t nSuperUniquesTxtCountEx; //0x1028
	uint64_t *pSuperUniquesLinker; //0x1030
	uint16_t nSuperUniqueIds[66]; //0x1038
	uint32_t N0000184D; //0x10BC
	uint64_t *pMissilesTxt; //0x10C0
	uint64_t nMissilesTxtCount; //0x10C8
	uint64_t nMissilesTxtCountEx; //0x10D0
	uint64_t *pMissilesTxtLinker; //0x10D8
	uint64_t *pMonLvlTxt; //0x10E0
	uint64_t nMonLvlTxtCount; //0x10E8
	uint64_t nMonLvlTxtCountEx; //0x10F0
	uint64_t *pMonSeqTxt; //0x10F8
	uint64_t nMonSeqTxtCount; //0x1100
	uint64_t nMonSeqTxtCountEx; //0x1108
	uint64_t *N000008FA; //0x1110
	uint64_t *pMonSeqTable; //0x1118
	uint64_t nMonSeqTableCount; //0x1120
	uint64_t nMonSeqTableCountEx; //0x1128
	uint64_t *pSkillDescTxt; //0x1130
	uint64_t nSkillDescTxtCount; //0x1138
	uint64_t nSkillDescTxtCountEx; //0x1140
	uint64_t *pSkillDescTxtLinker; //0x1148
	D2SkillsTxt *pSkillsTxt; //0x1150
	uint64_t nSkillTxtCount; //0x1158
	uint64_t nSkillTxtCountEx; //0x1160
	uint64_t *pSkillsTxtLinker; //0x1168
	uint64_t *Unk0x1168; //0x1170
	uint64_t Unk0x1170; //0x1178
	uint64_t Unk0x1178; //0x1180
	uint64_t N00000909; //0x1188
	uint64_t *N0000090A; //0x1190
	uint64_t N0000090B; //0x1198
	uint64_t N0000090C; //0x11A0
	uint64_t *N0000090D; //0x11A8
	uint64_t N0000090E; //0x11B0
	uint64_t N0000090F; //0x11B8
	uint64_t *N00000910; //0x11C0
	uint64_t *pOverlayTxt; //0x11C8
	uint64_t nOverlayTxtCount; //0x11D0
	uint64_t nOverlayTxtCountEx; //0x11D8
	uint64_t *pCharStatsTxt; //0x11E0
	uint64_t nCharStatTxtCount; //0x11E8
	uint64_t nCharStatTxtCountEx; //0x11F0
	uint64_t *pItemStatCostTxt; //0x11F8
	uint64_t nItemStatCostTxtCount; //0x1200
	uint64_t nItemStatCostTxtCountEx; //0x1208
	uint64_t *pItemStatCostTxtLinker; //0x1210
	uint64_t *N0000091B; //0x1218
	uint64_t N0000091C; //0x1220
	uint64_t N0000091D; //0x1228
	uint64_t *pMonEquipTxt; //0x1230
	uint64_t nMonEquipTxtCount; //0x1238
	uint64_t nMonEquipTxtCountEx; //0x1240
	uint64_t *pPetTypeTxt; //0x1248
	uint64_t nPetTypeTxtCount; //0x1250
	uint64_t nPetTypeTxtCountEx; //0x1258
	uint64_t *pPetTypeTxtLinker; //0x1260
	uint64_t *pItemTypesTxtLinker; //0x1268
	D2ItemTypesTxt *pItemTypesTxt; //0x1270
	uint64_t nItemTypesTxtCount; //0x1278
	uint64_t nItemTypesTxtCountEx; //0x1280
	uint64_t nItemTypesIndex; //0x1288
	uint32_t *pItemTypesEquivalenceLUTs; //0x1290
	uint64_t N0000092B; //0x1298
	uint64_t N0000092C; //0x12A0
	uint64_t *pSetsTxtLinker; //0x12A8
	uint64_t *pSetsTxt; //0x12B0
	uint64_t nSetTxtCount; //0x12B8
	uint64_t nSetTxtCountEx; //0x12C0
	uint64_t *pSetItemsTxtLinker; //0x12C8
	uint64_t *pSetItemsTxt; //0x12D0
	uint64_t nSetItemsTxtCount; //0x12D8
	uint64_t nSetItemsTxtCountEx; //0x12E0
	uint64_t *pUniqueItemsTxtLinker; //0x12E8
	uint64_t *pUniqueItemsTxt; //0x12F0
	uint64_t nUniqueItemsTxtCount; //0x12F8
	uint64_t nUniqueItemsTxtCountEx; //0x1300
	uint64_t *pMonPropTxtLinker; //0x1308
	uint64_t *pMonPropTxt; //0x1310
	uint64_t nMonPropTxtCount; //0x1318
	uint64_t nMonPropTxtCountEx; //0x1320
	uint64_t *pMonTypeTxtLinker; //0x1328
	uint64_t *pMonTypeTxt; //0x1330
	uint64_t nMonTypeTxtCount; //0x1338
	uint64_t nMonTypeTxtCountEx; //0x1340
	uint64_t *N00000941; //0x1348
	uint64_t N00000942; //0x1350
	uint64_t N00000943; //0x1358
	uint64_t N00000944; //0x1360
	uint64_t *pMonUModTxtLinker; //0x1368
	uint64_t *pMonUModTxt; //0x1370
	uint64_t nMonUModTxtCount; //0x1378
	uint64_t nMonUModTxtCountEx; //0x1380
	D2LevelsTxt *pLevelsTxt; //0x1388
	uint64_t nLevelsTxtCount; //0x1390
	uint64_t nLevelsTxtCountEx; //0x1398
	uint64_t *N0000094C; //0x13A0
	uint64_t *N0000094D; //0x13A8
	uint64_t N0000094E; //0x13B0
	uint64_t N0000094F; //0x13B8
	uint64_t *pLvlPrestTxt; //0x13C0
	uint64_t nLvlPrestTxtCount; //0x13C8
	uint64_t nLvlPrestTxtCountEx; //0x13D0
	uint64_t N00000953; //0x13D8
	uint64_t *pAnimData; //0x13E0 maybe?
	uint64_t *pExperienceTxt; //0x13E8
	uint64_t nExperienceTxtCount; //0x13F0
	uint64_t nExperienceTxtCountEx; //0x13F8
	uint64_t *pDifficultyLevelsTxt; //0x1400
	uint64_t nDifficultyLevelsTxtCount; //0x1408
	uint64_t nDifficultyLevelsTxtCountEx; //0x1410
	uint64_t N0000095B; //0x1418
	uint64_t N0000095C; //0x1420
	uint64_t N0000095D; //0x1428
	D2ObjectsTxt *pObjectsTxt; //0x1430
	uint64_t nObjectsTxtCount; //0x1438
	uint64_t nObjectsTxtCountEx; //0x1440
	uint64_t *pObjGroupTxt; //0x1448
	uint64_t nObjGroupTxtCount; //0x1450
	uint64_t nObjGroupTxtCountEx; //0x1458
	uint64_t *pRunesTxt; //0x1460
	uint64_t nRunesTxtCount; //0x1468
	uint64_t nRunesTxtCountEx; //0x1470
	uint64_t *N00000967; //0x1478
	uint64_t N00000968; //0x1480
	uint64_t N00000969; //0x1488
	uint64_t *N0000096A; //0x1490
	uint64_t *N0000096B; //0x1498
	uint64_t *N0000096C; //0x14A0
	uint64_t *N0000096D; //0x14A8 i think this struct ends here
	uint64_t N00000A77; //0x14B0
	uint64_t N00000A78; //0x14B8
	uint64_t N00000A79; //0x14C0
	uint64_t N00000A7A; //0x14C8
	uint64_t N00000A7B; //0x14D0
	uint64_t N00000A7C; //0x14D8
	uint64_t N00000A7D; //0x14E0
	uint64_t N00000A7E; //0x14E8
	uint64_t N00000A7F; //0x14F0
	uint64_t N00000A80; //0x14F8
	uint64_t N00000A81; //0x1500
	uint32_t N00000A82; //0x1508
	uint32_t Unk0x1504; //0x150C
	uint64_t N00000A83; //0x1510
	uint64_t *N00000A84; //0x1518
	uint32_t N00000A85; //0x1520
	uint32_t N00001F8B; //0x1524
	uint64_t N00000A86; //0x1528
	uint64_t *N00000A87; //0x1530
	uint64_t *N00000A88; //0x1538
	uint64_t *N00000A89; //0x1540
	uint64_t *N00000A8A; //0x1548
	uint64_t N00000A8B; //0x1550
	uint64_t N00000A8C; //0x1558
	uint64_t N00000A8D; //0x1560
	uint64_t N00000A8E; //0x1568
	uint64_t N00000A8F; //0x1570
	uint64_t N00000A90; //0x1578
	uint64_t N00000A91; //0x1580
	uint64_t N00000A92; //0x1588
	uint64_t N00000A93; //0x1590
	uint64_t N00000A94; //0x1598
	uint64_t N00000A95; //0x15A0
	uint64_t N00000A96; //0x15A8
	uint64_t N00000A97; //0x15B0
	uint64_t *N00000A98; //0x15B8
	uint32_t N00000A99; //0x15C0
	uint32_t Unk0x15BC; //0x15C4
	uint64_t N00000A9A; //0x15C8
	uint64_t *N00000A9B; //0x15D0
	uint64_t *N00000A9C; //0x15D8
	uint64_t *N00000A9D; //0x15E0
	uint64_t *N00000A9E; //0x15E8
	uint64_t N00000A9F; //0x15F0
	uint64_t N00000AA0; //0x15F8
	uint64_t N00000AA1; //0x1600
	uint64_t N00000AA2; //0x1608
	uint64_t N00000AA3; //0x1610
	uint64_t N00000AA4; //0x1618
	uint64_t N00000AA5; //0x1620
	uint64_t N00000AA6; //0x1628
	uint64_t N00000AA7; //0x1630
	uint64_t N00000AA8; //0x1638
	uint64_t N00000AA9; //0x1640
	uint64_t N00000AAA; //0x1648
	uint64_t N00000AAB; //0x1650
	uint64_t N00000AAC; //0x1658
	uint32_t N00000AAD; //0x1660
	uint32_t Unk0x165C; //0x1664
	uint64_t N00000AAE; //0x1668
	uint64_t N00000AAF; //0x1670
	uint64_t N00000AB0; //0x1678
	uint64_t N00000AB1; //0x1680
	uint64_t N00000AB2; //0x1688
	uint64_t N00000AB3; //0x1690
	uint64_t N00000AB4; //0x1698
	uint64_t N00000AB5; //0x16A0
	uint64_t N00000AB6; //0x16A8
	uint64_t N00000AB7; //0x16B0
	uint64_t N00000AB8; //0x16B8
	uint64_t N00000AB9; //0x16C0
	uint64_t N00000ABA; //0x16C8
	uint64_t N00000ABB; //0x16D0
	uint64_t N00000ABC; //0x16D8
	uint64_t N00000ABD; //0x16E0
	uint64_t N00000ABE; //0x16E8
	uint64_t N00000ABF; //0x16F0
	uint64_t N00000AC0; //0x16F8
	uint32_t N00000AC1; //0x1700
	uint32_t Unk0x16FC; //0x1704
	uint64_t N00000AC2; //0x1708
	uint64_t N00000AC3; //0x1710
	uint64_t N00000AC4; //0x1718
	uint64_t N00000AC5; //0x1720
	uint64_t N00000AC6; //0x1728
	uint64_t N00000AC7; //0x1730
	uint64_t N00000AC8; //0x1738
	uint64_t N00000AC9; //0x1740
	uint64_t N00000ACA; //0x1748
	uint64_t N00000ACB; //0x1750
	uint64_t N00000ACC; //0x1758
	uint64_t N00000ACD; //0x1760
	uint64_t N00000ACE; //0x1768
	uint64_t N00000ACF; //0x1770
	uint64_t N00000AD0; //0x1778
	uint64_t N00000AD1; //0x1780
	uint64_t N00000AD2; //0x1788
	uint64_t N00000AD3; //0x1790
	uint64_t *pLowQualityItemsTxt; //0x1798
	uint64_t nLowQualityItemsTxtCount; //0x17A0
	uint64_t nLowQualityItemsTxtCountEx; //0x17A8
	uint64_t *N00000AD7; //0x17B0
	uint64_t N00000AD8; //0x17B8
	uint64_t N00000AD9; //0x17C0
	uint64_t *pGambleTxt; //0x17C8
	uint32_t Unk0x17C8[104]; //0x17D0
	uint64_t *pItemRatioTxt; //0x1970
	uint64_t nItemRatioTxtCount; //0x1978
	uint64_t nItemRatioTxtCountEx; //0x1980
	uint64_t *pBooksTxt; //0x1988
	uint64_t nBooksTxtCount; //0x1990
	uint64_t nBooksTxtCountEx; //0x1998
	D2RareAffixTxt *pMagicAffixTxt; //0x19A0
	uint64_t nMagicAffixTxtCount; //0x19A8
	uint64_t nMagicAffixTxtCountEx; //0x19B0
	D2RareAffixTxt *pMagicSuffix; //0x19B8
	D2RareAffixTxt *pMagicPrefix; //0x19C0
	D2RareAffixTxt *pAutoMagic; //0x19C8
	D2RareAffixTxt *pRareAffixTxt; //0x19D0
	uint64_t nRareAffixTxtCount; //0x19D8
	uint64_t nRareAffixTxtCountEx; //0x19E0
	uint64_t *pRareSuffix; //0x19E8
	uint64_t *pRarePrefix; //0x19F0
	uint64_t *pGemsTxt; //0x19F8
	uint64_t nGemsTxtCount; //0x1A00
	uint64_t nGemsTxtCountEx; //0x1A08
	D2ItemsTxt *pItemTxt; //0x1A10
	uint64_t nItemTxtCount; //0x1A18
	uint64_t nItemTxtCountEx; //0x1A20
	D2ItemsTxt *pWeaponsTxt; //0x1A28
	D2ItemsTxt *pArmorTxt; //0x1A30
	D2ItemsTxt *pMiscTxt; //0x1A38
	char pad_1A40[24]; //0x1A40
	uint64_t *N000004DB; //0x1A58
	uint64_t N000004DC; //0x1A60
	uint64_t N000004DD; //0x1A68
	uint64_t *N000004DE; //0x1A70
	uint64_t N000004DF; //0x1A78
	uint64_t N000004E0; //0x1A80
	uint64_t *N000004E1; //0x1A88
	uint64_t N000004E2; //0x1A90
	uint64_t N000004E3; //0x1A98
	uint64_t *N000004E4; //0x1AA0
	uint64_t *N000004E5; //0x1AA8
	uint64_t *N000004E6; //0x1AB0
	uint64_t *N000004E7; //0x1AB8
	uint64_t N000004E8; //0x1AC0
	uint64_t N000004E9; //0x1AC8
	uint64_t N000004EA; //0x1AD0
	uint64_t N000004EB; //0x1AD8
	uint64_t N000004EC; //0x1AE0
	uint64_t N000004ED; //0x1AE8
	uint64_t N000004EE; //0x1AF0
	uint64_t N000004EF; //0x1AF8
	uint64_t N000004F0; //0x1B00
	uint64_t N000004F1; //0x1B08
	uint64_t N000004F2; //0x1B10
	uint64_t N000004F3; //0x1B18
	uint64_t N000004F4; //0x1B20
	uint64_t *N000004F5; //0x1B28
	uint64_t N000004F6; //0x1B30
	uint64_t N000004F7; //0x1B38
	uint64_t *N000004F8; //0x1B40
	uint64_t *N000004F9; //0x1B48
	uint64_t *N000004FA; //0x1B50
	uint64_t *N000004FB; //0x1B58
	uint64_t N000004FC; //0x1B60
	uint64_t N000004FD; //0x1B68
	uint64_t N000004FE; //0x1B70
	uint64_t N000004FF; //0x1B78
	uint64_t N00000500; //0x1B80
	uint64_t N00000501; //0x1B88
	uint64_t N00000502; //0x1B90
	uint64_t N00000503; //0x1B98
	uint64_t N00000504; //0x1BA0
	uint64_t N00000505; //0x1BA8
	uint64_t N00000506; //0x1BB0
	uint64_t N00000507; //0x1BB8
	uint64_t N00000508; //0x1BC0
	uint64_t *N00000509; //0x1BC8
	uint64_t N0000050A; //0x1BD0
	uint64_t N0000050B; //0x1BD8
	uint64_t *N0000050C; //0x1BE0
	uint64_t *N0000050D; //0x1BE8
	uint64_t *N0000050E; //0x1BF0
	uint64_t *N0000050F; //0x1BF8
	uint64_t N00000510; //0x1C00
	uint64_t N00000511; //0x1C08
	uint64_t N00000512; //0x1C10
	uint64_t N00000513; //0x1C18
	uint64_t N00000514; //0x1C20
	uint64_t N00000515; //0x1C28
	uint64_t N00000516; //0x1C30
	uint64_t N00000517; //0x1C38
	uint64_t N00000518; //0x1C40
	uint64_t N00000519; //0x1C48
	uint64_t N0000051A; //0x1C50
	uint64_t N0000051B; //0x1C58
	uint64_t N0000051C; //0x1C60
	uint64_t *N0000051D; //0x1C68
	uint64_t N0000051E; //0x1C70
	uint64_t N0000051F; //0x1C78
	uint64_t *N00000520; //0x1C80
	uint64_t *N00000521; //0x1C88
	uint64_t *N00000522; //0x1C90
	uint64_t *N00000523; //0x1C98
	uint64_t N00000524; //0x1CA0
	uint64_t N00000525; //0x1CA8
	uint64_t N00000526; //0x1CB0
	uint64_t N00000527; //0x1CB8
	uint64_t N00000528; //0x1CC0
	uint64_t N00000529; //0x1CC8
	uint64_t N0000052A; //0x1CD0
	uint64_t N0000052B; //0x1CD8
	uint64_t N0000052C; //0x1CE0
	uint64_t N0000052D; //0x1CE8
	uint64_t N0000052E; //0x1CF0
	uint64_t N0000052F; //0x1CF8
	uint64_t N00000530; //0x1D00
	uint64_t *N00000531; //0x1D08
	uint64_t N00000532; //0x1D10
	uint64_t N00000533; //0x1D18
	uint64_t *N00000534; //0x1D20
	uint64_t *N00000535; //0x1D28
	uint64_t *N00000536; //0x1D30
	uint64_t *N00000537; //0x1D38
	uint64_t N00000538; //0x1D40
	uint64_t N00000539; //0x1D48
	uint64_t N0000053A; //0x1D50
	uint64_t N0000053B; //0x1D58
	uint64_t N0000053C; //0x1D60
	uint64_t N0000053D; //0x1D68
	uint64_t N0000053E; //0x1D70
	uint64_t N0000053F; //0x1D78
	uint64_t N00000540; //0x1D80
	uint64_t N00000541; //0x1D88
	uint64_t N00000542; //0x1D90
	uint64_t N00000543; //0x1D98
	uint64_t N00000544; //0x1DA0
	uint64_t *N00000545; //0x1DA8
	uint64_t N00000546; //0x1DB0
	uint64_t N00000547; //0x1DB8
	uint64_t *N00000548; //0x1DC0
	uint64_t *N00000549; //0x1DC8
	uint64_t *N0000054A; //0x1DD0
	uint64_t *N0000054B; //0x1DD8
	uint64_t N0000054C; //0x1DE0
	uint64_t N0000054D; //0x1DE8
	uint64_t N0000054E; //0x1DF0
	uint64_t N0000054F; //0x1DF8
	uint64_t N00000550; //0x1E00
	uint64_t N00000551; //0x1E08
	uint64_t N00000552; //0x1E10
	uint64_t N00000553; //0x1E18
	uint64_t N00000554; //0x1E20
	uint64_t N00000555; //0x1E28
	uint64_t N00000556; //0x1E30
	uint64_t N00000557; //0x1E38
	uint64_t N00000558; //0x1E40
	uint64_t *pLvlSubTxt; //0x1E48
	uint64_t nLvlSubTxtCount; //0x1E50
	uint64_t nLvlSubTxtCountEx; //0x1E58
	uint64_t *pAutoMap; //0x1E60
	uint64_t nAutoMap; //0x1E68
	uint64_t nAutoMapEx; //0x1E70
	uint64_t *N0000055F; //0x1E78
	uint64_t N00000560; //0x1E80
	uint64_t N00000561; //0x1E88
	uint64_t *pLvlMazeTxt; //0x1E90
	uint64_t nLvlMazeTxtCount; //0x1E98
	uint64_t nLvlMazeTxtCountEx; //0x1EA0
	uint64_t *pLvlTypesTxt; //0x1EA8
	uint64_t nLvlTypesTxtCount; //0x1EB0
	uint64_t nLvlTypesTxtCountEx; //0x1EB8
	uint64_t *pLvlWarpTxt; //0x1EC0
	uint64_t nLvlWarpTxtCount; //0x1EC8
	uint64_t nLvlWarpTxtCountEx; //0x1ED0
	uint64_t N0000056B; //0x1ED8
	uint64_t N0000056C; //0x1EE0
	uint64_t N0000056D; //0x1EE8
	uint64_t *N0000056E; //0x1EF0
	uint64_t N0000056F; //0x1EF8
	uint64_t N00000570; //0x1F00
	uint64_t *N00000571; //0x1F08
	uint64_t N00000572; //0x1F10
	uint64_t N00000573; //0x1F18
	uint64_t N00000574; //0x1F20
	uint64_t *N00000575; //0x1F28
	uint64_t N00000576; //0x1F30
	uint64_t N00000577; //0x1F38
	uint64_t *N00000578; //0x1F40
	uint64_t N00000579; //0x1F48
	uint64_t N0000057A; //0x1F50
	uint64_t *N0000057B; //0x1F58
	uint64_t N0000057C; //0x1F60
	uint64_t N0000057D; //0x1F68
	uint64_t *N0000057E; //0x1F70
	uint64_t N0000057F; //0x1F78
	uint64_t N00000580; //0x1F80
	uint64_t *N00000581; //0x1F88
	uint64_t N00000582; //0x1F90
	uint64_t N00000583; //0x1F98
	uint64_t *N00000584; //0x1FA0
	uint64_t *N00000585; //0x1FA8
	uint64_t *N00000586; //0x1FB0
	uint64_t *N00000587; //0x1FB8
	uint64_t N00000588; //0x1FC0
	uint64_t N00000589; //0x1FC8
	uint64_t N0000058A; //0x1FD0
	uint64_t N0000058B; //0x1FD8
	uint64_t N0000058C; //0x1FE0
	uint64_t N0000058D; //0x1FE8
	uint64_t N0000058E; //0x1FF0
	uint64_t N0000058F; //0x1FF8
	uint64_t N00000590; //0x2000
	uint64_t N00000591; //0x2008
	uint64_t N00000592; //0x2010
	uint64_t N00000593; //0x2018
	uint64_t N00000594; //0x2020
	uint64_t *N00000595; //0x2028
	uint64_t N00000596; //0x2030
	uint64_t N00000597; //0x2038
	uint64_t *N00000598; //0x2040
	uint64_t *pPlrModeTxt; //0x2048
	uint64_t *N0000059A; //0x2050 pCompositTxt??
	uint64_t N0000059B; //0x2058
	uint64_t N0000059C; //0x2060
	uint64_t *N0000059D; //0x2068
	uint64_t *N0000059E; //0x2070
	uint64_t *N0000059F; //0x2078
	uint64_t N000005A0; //0x2080
	uint64_t N000005A1; //0x2088
	uint64_t *pMonModeTxt; //0x2090
	uint64_t nMonModeTxtCount; //0x2098
	uint64_t nMonModeTxtCountEx; //0x20A0
	uint64_t *pMonModeTxtEx; //0x20A8 ????
	uint64_t *pMonModeTxtExEx; //0x20B0 ????
	uint64_t *pInventoryTxt; //0x20B8
	uint64_t nInventoryTxtCount; //0x20C0
	uint64_t nInventoryTxtCountEx; //0x20C8
	uint64_t *N000005AA; //0x20D0
	uint64_t N000005AB; //0x20D8
	uint64_t N000005AC; //0x20E0
	uint64_t N000005AD; //0x20E8
	uint64_t N000005AE; //0x20F0
	uint64_t *N000005AF; //0x20F8
	uint64_t N000005B0; //0x2100
	uint64_t N000005B1; //0x2108
	uint64_t *N000005B2; //0x2110
	uint64_t N000005B3; //0x2118
	uint64_t N000005B4; //0x2120
	uint64_t *N000005B5; //0x2128
	uint64_t N000005B6; //0x2130
	uint64_t N000005B7; //0x2138
	uint64_t *N000005B8; //0x2140
	uint64_t N000005B9; //0x2148
	uint64_t N000005BA; //0x2150
	uint64_t *N000005BB; //0x2158
	uint64_t N000005BC; //0x2160
	uint64_t N000005BD; //0x2168
	char pad_2170[24]; //0x2170 
};

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
	uint8_t StorePage; //0x0021
	uint8_t Class; //0x0022
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
	char pad_012F[9]; //0x012F
	uint8_t BeltType; //0x0138
	uint8_t AutoBelt; //0x0139
	char pad_013A[106]; //0x013A
	uint32_t NightmareUpgrade; //0x01A4
	uint32_t HellUpgrade; //0x01A8
	char pad_01AC[4]; //0x01AC 
};


struct D2DrlgEnvironmentStrc
{
	int32_t nCycleIndex;					//0x00
	int32_t nPeriodOfDay;					//0x04
	int32_t nTicks;							//0x08
	int32_t nIntensity;						//0x0C
	uint32_t dwInitTick;					//0x10
	int32_t unk0x14;						//0x14
	uint8_t nRed;							//0x18
	uint8_t nGreen;							//0x19
	uint8_t nBlue;							//0x1A
	uint8_t pad0x1B;						//0x1B
	float fCos;								//0x1C
	float fLast;							//0x20
	float fSin;								//0x24
	int32_t nTimeRate;						//0x28
	int32_t nTimeRateIndex;					//0x2C
	BOOL bEclipse;							//0x30
	int32_t nPrev;							//0x34
};


struct D2MonStatsTxt {
 	uint16_t ID; //0x0000
	char Name[16]; //0x0002
	char pad_0012[36]; //0x0012
	uint16_t NameStr; //0x0036
	uint32_t Unk; //0x0038
	uint32_t MonStatsFlags; //0x003C
	char pad_0040[408]; //0x0040 
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
		D2PlayerDataStrc *pPlayerData; //0x0000
		D2MonsterDataStrc *pMonsterData; //0x0000
		D2ObjectDataStrc *pObjectData; //0x0000
		D2ItemDataStrc *pItemData; //0x0000
		void *pMissileData; //0x0000
	};
	uint8_t ActID; //0x0018
	char pad_0019[7]; //0x0019
	D2DrlgActStrc *pDrlgAct; //0x0020
	uint32_t LowSeed; //0x0028
	uint32_t HighSeed; //0x002C
	char pad_0030[8]; //0x0030
	union //0x0038
	{
		D2DynamicPathStrc *pDynamicPath; //0x0000
		D2StaticPathStrc *pStaticPath; //0x0000
	};
	int64_t *pAnimSeq; //0x0040
	uint32_t SeqFrameCount; //0x0048
	uint32_t SeqFrame; //0x004C
	char pad_0050[4]; //0x0050
	uint32_t AnimSpeed; //0x0054
	char pad_0058[4]; //0x0058
	uint32_t GFXCurrentFrame; //0x005C
	char pad_0060[4]; //0x0060
	uint32_t FrameCount; //0x0064
	uint16_t AnimSpeedEx; //0x0068
	char pad_006A[6]; //0x006A
	D2AnimDataRecordStrc *pAnimData; //0x0070
	uint64_t *pUnk0x78; //0x0078
	char pad_0080[8]; //0x0080
	D2StatListExStrc *pStatListEx; //0x0088
	D2InventoryStrc *pInventory; //0x0090
	char pad_0098[16]; //0x0098
	uint64_t *pUnk0xA8; //0x00A8
	char pad_00B0[56]; //0x00B0
	uint32_t OwnerType; //0x00E8
	uint32_t OwnerID; //0x00EC
	char pad_00F0[16]; //0x00F0
	D2SkillListStrc *pSkills; //0x0100
	char pad_0108[28]; //0x0108
	uint32_t Flags; //0x0120
	uint32_t FlagsEx; //0x0124
	char pad_0128[32]; //0x0128
	D2UnitStrc *pChangeNextUnit; //0x0148
	D2UnitStrc *pListNext; //0x0150
	D2UnitStrc *pRoomNext; //0x0158 
};

struct D2PlayerTradeStrc
{
	int32_t nSaveLength;						//0x00
	uint8_t* pSaveData;						//0x04
	int32_t unk0x08[4];
};

struct D2PlayerDataStrc {
 	char Name[16]; //0x0000
	uint64_t *pQuestData[3]; //0x0010 not sure on these two
	uint64_t *pWaypointData[3]; //0x0028
	char pad_00401[20];
	uint32_t bodylocation;
	char pad_00unk1[24];
	D2PlayerTradeStrc* pTrade;
	char pad_00unk2[8];
	D2UnitStrc* pNextItem;
	char pad_00unk3[16];
	uint32_t nRightSkillId;
	char pad_00402[244]; //0x0040
	char pad_00403[352]; //0x0040 
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
	D2UnitStrc *pNextItem; //0x0010
	uint8_t NodePos; //0x0018
	uint8_t NodePosOther; //0x0019
	char pad_001A[6]; //0x001A
	D2UnitStrc *pPrevGridItem; //0x0020
	D2UnitStrc *pNextGridItem; //0x0028 
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

struct D2PathInfoStrc
{
	D2PathPointStrc pStartCoord;			//0x00
	D2PathPointStrc tTargetCoord;				//0x04
	D2RoomStrc* pRoom;						//0x08
	D2RoomStrc* field_C;					//0x0C
	int32_t field_10;							//0x10
	uint8_t field_14;							//0x14
	uint8_t field_15;							//0x15
	uint16_t field_16;							//0x16
	int32_t nDistMax;							//0x18
	uint8_t field_1C;							//0x1C
	uint8_t field_1D;							//0x1D
	uint16_t field_1E;							//0x1E
	int32_t nPathType;							//0x20
	int32_t nUnitSize;							//0x24
	int32_t nCollisionPattern;					//0x28
	int32_t nCollisionType;						//0x2C
	union
	{
		D2DynamicPathStrc* pDynamicPath;	//0x30 - not sure yet
		D2PathInfoStrc* pNext;				//0x30
	};
};

struct D2InventoryNodeStrc
{
	int32_t nItemId;							//0x00
	D2InventoryNodeStrc* pNext;				//0x04
};

struct D2InventoryStrc {
 	uint32_t Signature; //0x0000
	char pad_0004[4]; //0x0004
	D2UnitStrc *pOwner; //0x0008
	D2UnitStrc *pFirstItem; //0x0010
	D2UnitStrc *pLastItem; //0x0018
	D2InventoryGridStrc *pGrids; //0x0020
	int32_t GridCount; //0x0028
	char pad_002C[12]; //0x002C
	int64_t dwLeftItemGUID; //0x0038
	D2UnitStrc *pCursorItem; //0x0040
	uint32_t OwnerID; //0x0048
	uint32_t ItemCount; //0x004C
	char pad_0050[24]; //0x0050
	D2InventoryNodeStrc* pFirstNode;
	D2InventoryNodeStrc* pLastNode;
};

struct D2PathPointStrc {
 	uint16_t X; //0x0000
	uint16_t Y; //0x0002 
};

struct D2HirelingInitStrc
{
	int32_t nId;								//0x00
	int32_t nLevel;								//0x04
	int32_t nHitpoints;							//0x08
	int32_t nStrength;							//0x0C
	int32_t nDexterity;							//0x10
	int32_t nGold;								//0x14
	int32_t nExperience;						//0x18
	int32_t nDefense;							//0x1C
	int32_t nMinDamage;							//0x20
	int32_t nMaxDamage;							//0x24
	int32_t nShare;								//0x28
	int32_t nResist;							//0x2C
	int32_t nHireDesc;							//0x30
	int32_t field_34;							//0x34
	int16_t nFlags;							//0x38
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
	char pad_0048[8]; //0x0048
	uint32_t dwPathType;
	uint32_t dwUnitSize;
	uint32_t dwCollisionPattern;
	uint32_t dwCollisionType; //0x0060
	uint32_t nUnk0x64; //0x0064
	char pad_0068[56]; //0x0068
	uint32_t dwVelocity; //0x00A0
	char pad_00A4[24]; //0x00A4
	uint8_t nDistMax; //0x00BD
	uint8_t nUnk0xBE; //0x00BE
	char pad_00BF[6]; //0x00BF
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
	D2SkillStrc *pLastUsedSkill; //0x0018
	char pad_0020[96]; //0x0020 
};

struct D2SkillStrc {
 	D2SkillsTxt *pSkillsTxt; //0x0000
	D2SkillStrc *pNextSkill; //0x0008
	uint32_t dwSkillMode;
	char pad_0010[34]; //0x0010
	uint32_t Level; //0x0034
	char pad_0038[4]; //0x0038
	uint32_t Quantity; //0x003C
	char pad_0040[8]; //0x0040
	uint32_t Charges; //0x0048
	char pad_004C[4]; //0x004C 
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

struct D2UnitFindArgStrc
{
	int32_t nFlags;								//0x00
	int32_t unk0x04;							//0x04
	D2UnitStrc* pUnit;						//0x08
	int32_t nX;									//0x0C
	int32_t nY;									//0x10
	int32_t nSize;								//0x14
	int32_t nMaxArrayEntries;					//0x18
	int32_t nIndex;								//0x1C
	D2FieldStrc* pField;					//0x20
	UNITFINDTEST pfnUnitTest;				//0x24
	int32_t unk0x28;							//0x28
	int32_t unk0x2C;							//0x2C
	int32_t unk0x30;							//0x30
	int32_t unk0x34;							//0x34
};

struct D2UnitFindDataStrc
{
	D2UnitStrc** pUnitsArray;				//0x04
	D2RoomStrc* pRoom;						//0x08
	UNITFINDTEST pfnUnitTest;				//0x0C
	D2UnitFindArgStrc* pUnitFindArg;		//0x10
	int32_t nFlags;								//0x14
	int32_t nIndex;								//0x18
	int32_t nMaxArrayEntries;					//0x1C
	int32_t nX;									//0x20
	int32_t nY;									//0x24
	int32_t nSize;								//0x28
};


struct D2ClientStrc {
 	char pad_0000[136]; //0x0000 
};

struct D2PresetUnitStrc {
 	uint32_t LevelNo; //0x0000
	uint32_t Index; //0x0004
	uint32_t PosX; //0x0008
	char pad_000C[4]; //0x000C
	D2PresetUnitStrc *pPresetNext; //0x0010
	uint64_t AreaID; //0x0018
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
 	char pad_0000[280]; //0x0000
	D2DrlgWarpStrc* pWarp;
	uint32_t StaffTombLevel; //0x0120
	char pad_0124[1844]; //0x0124
	D2DrlgActStrc *pAct; //0x0858
	char pad_0860[8]; //0x0860
	D2DrlgLevelStrc *pLevelFirst; //0x0868
	uint32_t ActNo; //0x0870
	char pad_0874[12]; //0x0874 
};

struct D2RoomExStrc {
	D2RoomExStrc* pFirstRoomEx; //0x0000
	D2RoomExStrc **pRoomExNear; //0x0010
	uint32_t RoomsNear; //0x0018
	char pad_001C[44]; //0x001C
	D2RoomExStrc *pNextRoomEx; //0x0048
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

struct D2BoundingBoxStrc
{
	int32_t nLeft;								//0x00
	int32_t nBottom;							//0x04
	int32_t nRight;								//0x08
	int32_t nTop;								//0x0C
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

struct D2LvlPrestTxt
{
	uint32_t dwDef;							//0x00
	uint32_t dwLevelId;						//0x04
	uint32_t dwPopulate;					//0x08
	uint32_t dwLogicals;					//0x0C
	uint32_t dwOutdoors;					//0x10
	uint32_t dwAnimate;						//0x14
	uint32_t dwKillEdge;					//0x18
	uint32_t dwFillBlanks;					//0x1C
	uint32_t dwExpansion;					//0x20
	uint32_t nAnimSpeed;					//0x24
	int32_t nSizeX;							//0x28
	int32_t nSizeY;							//0x2C
	uint32_t dwAutoMap;						//0x30
	uint32_t dwScan;						//0x34
	uint32_t dwPops;						//0x38
	uint32_t dwPopPad;						//0x3C
	uint32_t dwFiles;						//0x40
	char szFile[6][60];						//0x44
	//char szFile1[60];						//0x44
	//char szFile2[60];						//0x80
	//char szFile3[60];						//0xBC
	//char szFile4[60];						//0xF8
	//char szFile5[60];						//0x134
	//char szFile6[60];						//0x170
	uint32_t dwDt1Mask;						//0x1AC
};

struct D2DrlgCoordStrc
{
	int32_t nPosX;								//0x00
	int32_t nPosY;								//0x04
	int32_t nWidth;								//0x08
	int32_t nHeight;							//0x0C
};

struct D2DrlgFileStrc
{
	int32_t unk0x00;							//0x00
	void* pDS1File;								//0x04
	int32_t unk0x08;							//0x08
	int32_t nWidth;								//0x0C
	int32_t nHeight;							//0x10
	int32_t nWalls;								//0x14
	int32_t nFloors;							//0x18
	void* pOrientationLayer[4];					//0x1C
	void* pWallLayer[4];						//0x2C
	void* pFloorLayer[2];						//0x3C
	void* pShadowLayer;							//0x44
	void* pSubstGroupTags;						//0x48
	int32_t nSubstGroups;						//0x4C named nClusters in original game
	struct D2DrlgSubstGroupStrc* pSubstGroups;	//0x50
	D2PresetUnitStrc* pPresetUnit;				//0x54
	D2DrlgFileStrc* pNext;						//0x58
};

struct D2DrlgGridStrc
{
	int32_t* pCellsFlags;					//0x00
	int32_t* pCellsRowOffsets;				//0x04
	int32_t nWidth;							//0x08
	int32_t nHeight;						//0x0C
	int32_t unk0x10;						//0x10 Maybe indicates if uninitialized? No memset when set to 1
};

struct D2DrlgMapStrc
{
	int32_t nLevelPrest;						//0x00
	int32_t nPickedFile;						//0x04
	D2LvlPrestTxt* pLvlPrestTxtRecord;		//0x08
	D2DrlgFileStrc* pFile;					//0x0C
	D2DrlgCoordStrc pDrlgCoord;				//0x10
	BOOL bHasInfo;							//0x20
	D2DrlgGridStrc pMapGrid;				//0x24
	D2PresetUnitStrc* pPresetUnit;			//0x38
	BOOL bInited;							//0x3C
	int32_t nPops;								//0x40
	int32_t* pPopsIndex;						//0x44
	int32_t* pPopsSubIndex;						//0x48
	int32_t* pPopsOrientation;					//0x4C
	D2DrlgCoordStrc* pPopsLocation;			//0x50
	D2DrlgMapStrc* pNext;					//0x54
};

struct D2DrlgPresetInfoStrc
{
	D2DrlgMapStrc* pDrlgMap;				//0x00
	int32_t nDirection;							//0x04
};

struct D2DrlgLevelStrc {
 	char pad_0000[16]; //0x0000
	D2RoomExStrc *pRoomExFirst; //0x0010
	D2DrlgPresetInfoStrc* pPreset;
	uint32_t PosX; //0x0024
	uint32_t PosY; //0x0028
	uint32_t SizeX; //0x002C
	uint32_t SizeY; //0x0030
	char pad_0034[388]; //0x0034
	D2DrlgLevelStrc *pLevelNext; //0x01B8
	char pad_01C0[8]; //0x01C0
	D2DrlgStrc *pDrlg; //0x01C8
	char pad_01D0[40]; //0x01D0
	uint64_t nLevelId; //0x01F8
	char pad_01FC[8]; //0x01FC
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

struct D2InventoryRect {
 	uint32_t Left; //0x0000
	uint32_t Right; //0x0004
	uint32_t Top; //0x0008
	uint32_t Down; //0x000C 
};

struct D2BeltText {
 	uint32_t Id; //0x0000
	uint32_t Capacity; //0x0004
	D2InventoryRect InventoryRect[16]; //0x0008
	char pad_0108[136]; //0x0108 
};

struct D2MazeLevelIdStrc
{
	int32_t nLevelPrestId1;					//0x00
	int32_t nLevelPrestId2;					//0x04
	int32_t nPickedFile;					//0x08
	int32_t nDirection;						//0x0C
};

struct D2MissileDataStrc {
 	char pad_0000[136]; //0x0000 
};

struct D2Point32 {
 	int32_t X; //0x0000
	int32_t Y; //0x0004 
};

struct D2FieldStrc {
 	int32_t X; //0x0000
	int32_t Y; //0x0004 
};

struct D2BitBufferStrc {
 	uint8_t *pBuffer; //0x0000
	uint64_t Bits; //0x0008
	uint64_t Pos; //0x0010
	uint64_t PosBits; //0x0018
	uint32_t bFull; //0x0020 
};

struct D2InventoryGridStrc {
 	D2UnitStrc *pItem; //0x0000
	D2UnitStrc *pLastItem; //0x0008
	int8_t Width; //0x0010
	int8_t Height; //0x0011
	char pad_0012[6]; //0x0012
	D2UnitStrc* pItems; //0x0018
};

struct D2AnimDataRecordStrc {
 	char AnimDataName[8]; //0x0000
	uint32_t Frames; //0x0008
	uint32_t AnimSpeed; //0x000C
	char pad_0010[120]; //0x0010 
};

struct D2Point16 {
 	int16_t X; //0x0000
	int16_t Y; //0x0002 
};

struct D2UIPanelManagerStrc_VMT {
 	void(__fastcall* WIDGET_Func0)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func1)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func2)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func3)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_OnMessage)(D2UIPanelManagerStrc* pThis, uint64_t aMessage[]);
	void(__fastcall* WIDGET_Func5)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func6)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func7)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func8)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func9)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func10)(D2UIPanelManagerStrc* pThis);
	void(__fastcall* WIDGET_Func11)(D2UIPanelManagerStrc* pThis); 
};

struct D2UIPanelManagerStrc {
 	D2UIPanelManagerStrc_VMT *_VMT;
	char *pName; //0x0008
	uint64_t NameLength; //0x0010
	uint32_t MaxNameLength; //0x0018
	uint32_t TextFlags; //0x001C
	char InlineName[16]; //0x0020
	D2UIWidgetStrc *pParent; //0x0030
	char pad_0038[16]; //0x0038
	float RelPosX; //0x0048
	float RelPosY; //0x004C
	uint8_t Enabled; //0x0050
	uint8_t Visible; //0x0051
	char pad_0052[6]; //0x0052
	D2UIWidgetStrc **pChildren; //0x0058
	uint64_t NumChildren; //0x0060
	uint64_t Allocated; //0x0068
	char pad_0070[256]; //0x0070
	 
};

struct D2UIWidgetStrc_VMT {
 	void(__fastcall* WIDGET_Func0)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func1)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func2)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func3)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_OnMessage)(D2UIWidgetStrc* pThis, uint64_t aMessage[]);
	void(__fastcall* WIDGET_Func5)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func6)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func7)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func8)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func9)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func10)(D2UIWidgetStrc* pThis);
	void(__fastcall* WIDGET_Func11)(D2UIWidgetStrc* pThis); 
};

struct D2UIWidgetStrc {
 	D2UIWidgetStrc_VMT *_VMT;
	char *pName; //0x0008
	uint64_t NameLength; //0x0010
	uint32_t MaxNameLength; //0x0018
	uint32_t TextFlags; //0x001C
	char InlineName[16]; //0x0020
	D2UIWidgetStrc *pParent; //0x0030
	char pad_0038[16]; //0x0038
	float RelPosX; //0x0048
	float RelPosY; //0x004C
	uint8_t Enabled; //0x0050
	uint8_t Visible; //0x0051
	char pad_0052[6]; //0x0052
	D2UIWidgetStrc **pChildren; //0x0058
	uint64_t NumChildren; //0x0060
	uint64_t Allocated; //0x0068
	char pad_0070[32]; //0x0070
	 
};

struct D2UIButtonStrc_VMT {
 	void(__fastcall* BUTTON_Func0)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func1)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func2)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func3)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_OnMessage)(D2UIButtonStrc* pThis, uint64_t aMessage[]);
	void(__fastcall* BUTTON_Func5)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func6)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func7)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func8)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func9)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func10)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func11)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func12)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func13)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func14)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func15)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func16)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func17)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func18)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Func19)(D2UIButtonStrc* pThis);
	void(__fastcall* BUTTON_Click)(D2UIButtonStrc* pThis, bool bClicked); 
};


struct D2PropertyStrc
{
	int32_t nProperty;					//0x00
	int32_t nLayer;						//0x04
	int32_t nMin;						//0x08
	int32_t nMax;						//0x0C
};

struct D2UIButtonStrc {
 	D2UIButtonStrc_VMT *_VMT;
	char *pName; //0x0008
	uint64_t NameLength; //0x0010
	uint32_t MaxNameLength; //0x0018
	uint32_t TextFlags; //0x001C
	char InlineName[16]; //0x0020
	D2UIWidgetStrc *pParent; //0x0030
	char pad_0038[16]; //0x0038
	float RelPosX; //0x0048
	float RelPosY; //0x004C
	uint8_t Enabled; //0x0050
	uint8_t Visible; //0x0051
	char pad_0052[6]; //0x0052
	D2UIWidgetStrc **pChildren; //0x0058
	uint64_t NumChildren; //0x0060
	uint64_t Allocated; //0x0068
	 
};

#pragma pack(pop)