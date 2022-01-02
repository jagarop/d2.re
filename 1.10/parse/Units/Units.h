#pragma once

#include "Item.h"
#include "Missile.h"
#include "Monster.h"
#include "Object.h"
#include "Player.h"

#pragma pack(1)

enum D2C_UnitTypes
{
	UNIT_PLAYER,
	UNIT_MONSTER,
	UNIT_OBJECT,
	UNIT_MISSILE,
	UNIT_ITEM,
	UNIT_TILE,
	UNIT_TYPES_COUNT // Used as an invalid value
};

enum D2C_UnitFlags
{
	UNITFLAG_DOUPDATE = 0x00000001,				//tells to update the unit
	UNITFLAG_TARGETABLE = 0x00000002,			//whenever the unit can be selected or not
	UNITFLAG_CANBEATTACKED = 0x00000004,		//whenever the unit can be attacked
	UNITFLAG_ISVALIDTARGET = 0x00000008,		//used to check if unit is a valid target
	UNITFLAG_INITSEEDSET = 0x00000010,			//tells whenever the unit seed has been initialized
	UNITFLAG_DRAWSHADOW = 0x00000020,			//tells whenver to draw a shadow or not (client only)
	UNITFLAG_SKSRVDOFUNC = 0x00000040,			//set when skill srvdofunc is executed
	UNITFLAG_OBJPREOPERATE = 0x00000080,		//unknown, used by objects with pre-operate disabled
	UNITFLAG_HASTXTMSG = 0x00000100,			//whenever this unit has a text message attached to it
	UNITFLAG_ISMERC = 0x00000200,				//is mercenary unit
	UNITFLAG_HASEVENTSOUND = 0x00000400,		//does this unit have an event-sound attached to it (server)
	UNITFLAG_SUMMONER = 0x00000800,				//set for the summoner only
	UNITFLAG_SENDREFRESHMSG = 0x00001000,		//used by items to send a refresh message when it drops on ground
	UNITFLAG_ISLINKREFRESHMSG = 0x00002000,		//tells whenever this unit is linked to an update message chain
	UNITFLAG_SQGFXCHANGE = 0x00004000,			//tells whenever to load new anim for skill SQ
	UNITFLAG_UPGRLIFENHITCLASS = 0x00008000,	//updates life% and hitclass on client
	UNITFLAG_ISDEAD = 0x00010000,				//unit is dead
	UNITFLAG_NOTC = 0x00020000,					//disables treasureclass drops
	UNITFLAG_MONMODEISCHANGING = 0x00080000,	//set when monmode changes
	UNITFLAG_PREDRAW = 0x00100000,				//pre-draw this unit (like floor tiles, client only)
	UNITFLAG_ISASYNC = 0x00200000,				//is async unit (critters)
	UNITFLAG_ISCLIENTUNIT = 0x00400000,			//is client unit
	UNITFLAG_ISINIT = 0x01000000,				//set when unit has been initialized
	UNITFLAG_ISRESURRECT = 0x02000000,			//set for resurrected units and items on floor
	UNITFLAG_NOXP = 0x04000000,					//no xp gain from killing this unit
	UNITFLAG_AUTOMAP = 0x10000000,				//automap stuff
	UNITFLAG_AUTOMAP2 = 0x20000000,				//automap stuff
	UNITFLAG_PETIGNORE = 0x40000000,			//ignored by pets
	UNITFLAG_ISREVIVE = 0x80000000				//is revived monster
};

enum D2C_UnitFlagsEx
{
	UNITFLAGEX_HASINV = 0x00000001,				//unit has inventory attached to it
	UNITFLAGEX_UPDATEINV = 0x00000002,			//tells to update inventory content
	UNITFLAGEX_ISVENDORITEM = 0x00000004,		//set for vendor shop items
	UNITFLAGEX_ISSHAPESHIFTED = 0x00000008,		//unit is shapeshifted
	UNITFLAGEX_ITEMINIT = 0x00000010,			//set for items, related to init
	UNITFLAGEX_ISINLOS = 0x00000080,			//unit is in client's line of sight
	UNITFLAGEX_HASBEENDELETED = 0x00000100,		//unit has been deleted but not free'd yet
	UNITFLAGEX_STOREOWNERINFO = 0x00000400,		//unit stores info about owner
	UNITFLAGEX_ISCORPSE = 0x00001000,			//unit is a corpse (use UNITFLAG_ISDEAD instead)
	UNITFLAGEX_UNK_PATH_RELATED = 0x00002000,	//related to path
	UNITFLAGEX_TELEPORTED = 0x00010000,			//unit has been teleported, needs resync
	UNITFLAGEX_STORELASTATTACKER = 0x00020000,	//unit stores info about last attacker
	UNITFLAGEX_NODRAW = 0x00040000,				//don't draw this unit
	UNITFLAGEX_ISEXPANSION = 0x02000000,		//is expansion unit
	UNITFLAGEX_SERVERUNIT = 0x04000000			//is server-side unit
};

//TODO: Redo Header defs when .cpp is done

struct D2UnitStrc
{
	uint32_t dwUnitType;						//0x00
	int32_t dwClassId;							//0x04
	void* pMemoryPool;							//0x08
	uint32_t dwUnitId;							//0x0C
	union										//0x10
	{
		uint32_t dwAnimMode;					//Player, Monster, Object, Items
		uint32_t dwCollideType;					//Missiles
	};
	union										//0x14
	{
		D2PlayerDataStrc* pPlayerData;
		D2ItemDataStrc* pItemData;
		D2MonsterDataStrc* pMonsterData;
		D2ObjectDataStrc* pObjectData;
		D2MissileDataStrc* pMissileData;
	};
	uint8_t nAct;								//0x18
	uint8_t unk0x19[3];							//0x19
	D2DrlgActStrc* pDrlgAct;					//0x1C
	D2SeedStrc pSeed;							//0x20
	uint32_t dwInitSeed;						//0x28
	union										//0x2C
	{
		D2DynamicPathStrc* pDynamicPath;
		D2StaticPathStrc* pStaticPath;
	};
	struct D2MonSeqTxt* pAnimSeq;				//0x30
	uint32_t dwSeqFrameCount;					//0x34
	uint32_t dwSeqFrame;						//0x38
	uint32_t dwAnimSpeed;						//0x3C
	uint32_t dwSeqMode;							//0x40
	uint32_t dwGFXcurrentFrame;					//0x44
	uint32_t dwFrameCount;						//0x48
	int16_t wAnimSpeed;							//0x4C
	uint8_t nActionFrame;						//0x4E
	uint8_t unk0x4F;							//0x4F
	D2AnimDataRecordStrc* pAnimData;			//0x50
	D2GfxDataStrc* pGfxData;					//0x54
	D2GfxDataStrc* pGfxDataCopy;				//0x58
	D2StatListExStrc* pStatListEx;				//0x5C
	D2InventoryStrc* pInventory;				//0x60
	union
	{
		struct									//Server Unit
		{
			uint32_t dwInteractGUID;			//0x064
			uint32_t dwInteractType;			//0x068
			uint16_t nInteract;					//0x06C
			uint16_t nUpdateType;				//0x06E
			D2UnitStrc* pUpdateUnit;			//0x070
			D2QuestChainStrc* pQuestEventList;	//0x074
			BOOL bSparkChest;					//0x078
			void* pTimerParams;					//0x07C
			D2GameStrc* pGame;					//0x080
			uint32_t __084[3];					//0x084
			D2TimerStrc* pSrvTimerList;			//0x090
		};

		struct									//Client Unit
		{
			D2GfxLightStrc* pLight;				//0x064
			uint32_t dwStartLight;				//0x068
			int32_t nPaletteIndex;				//0x06C
			BOOL bUnitSfx;						//0x070
			uint32_t dwSfxMode;					//0x074
			void* pUnitSfxData;					//0x078
			uint32_t dwSfxTicks;				//0x07C
			uint32_t dwSfxAsyncTicks;			//0x080
			uint32_t dwSfxStepTicks;			//0x084
			BOOL bHasActiveSound;				//0x088
			uint16_t nLastClickX;				//0x08C
			uint16_t nLastClickY;				//0x08E
			D2EventListStrc* pCltTimerList;		//0x090
		};
	};
	uint32_t dwOwnerType;						//0x94
	uint32_t dwOwnerGUID;						//0x98
	uint32_t dwKillerType;						//0x09C
	uint32_t dwKillerGUID;						//0x0A0
	D2HoverTextStrc* pHoverText;				//0xA4
	D2SkillListStrc* pSkills;					//0xA8
	D2CombatStrc* pCombat;						//0xAC
	uint32_t dwLastHitClass;					//0xB0
	uint32_t unk0xB4;							//0xB4
	uint32_t dwDropItemCode;					//0xB8
	uint32_t unk0xBC[2];						//0xBC
	uint32_t dwFlags;							//0xC4
	uint32_t dwFlagEx;							//0xC8
	void* pQuestData;							//0xCC

	//union										//0xCC
	//{
	//	D2QuestSrvStrc* pSrvQuestData;			//Server pUnit
	//	D2QuestCltStrc* pCltQuestData;			//Client pUnit
	//};

	uint32_t dwNodeIndex;						//0xD0
	uint32_t dwTickCount;						//0xD4
	union										//0xD8
	{
		uint32_t dwSrvTickCount;				//Server pUnit
		D2PacketListStrc* pPacketList;			//Client pUnit
	};
	D2TimerStrc* pTimer;						//0xDC
	D2UnitStrc* pChangeNextUnit;				//0xE0
	D2UnitStrc* pListNext;						//0xE4
	D2UnitStrc* pRoomNext;						//0xE8
	void* pMsgFirst;							//0xEC
	void* pMsgLast;								//0xF0
};

#pragma pack()
