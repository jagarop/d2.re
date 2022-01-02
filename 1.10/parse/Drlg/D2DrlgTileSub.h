#pragma once

#include "D2DrlgDrlg.h"
#include "D2DrlgDrlgGrid.h"
#include "../DataTbls/LevelsTbls.h"


#pragma pack(1)


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

struct D2UnkOutdoorStrc2
{
	D2RoomExStrc* pRoomEx;					//0x00
	D2DrlgOutdoorRoomStrc* pOutdoorRoom;	//0x04
	int32_t field_8;						//0x08
	int32_t field_C;						//0x0C
	int32_t field_10;						//0x10
	D2DrlgGridStrc* pWallGrid;				//0x14
	int32_t field_18;						//0x18
	int32_t field_1C;						//0x1C
	int32_t field_20;						//0x20
	D2DrlgGridStrc* pFloorGrid;				//0x24
	int32_t field_28;						//0x28
	int32_t field_2C;						//0x28
	int32_t nSubWaypoint_Shrine;			//0x2C
	int32_t nSubTheme;						//0x30
	int32_t nSubThemePicked;				//0x34
};

struct D2UnkOutdoorStrc3
{
	int32_t nLevelId;						//0x00
	int32_t nExcludedLevel1;				//0x04
	int32_t nExcludedLevel2;				//0x08
	int32_t nRand;							//0x0C
	int32_t nNextRand;						//0x10
	int32_t nFlags;							//0x14
};

struct D2DrlgSubstGroupStrc
{
	int32_t field_0;
	int32_t field_4;
	int32_t field_8;
	int32_t field_C;
	int32_t field_10;
	int32_t field_14;
};


#pragma pack()