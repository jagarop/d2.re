#pragma once


#include "D2DrlgDrlg.h"


#pragma pack(1)

struct D2UnkOutPlaceStrc
{
	D2DrlgCoordStrc pDrlgCoord;				//0x00
	int32_t field_10;						//0x10
	int32_t nBranch;						//0x14
	D2UnkOutPlaceStrc* field_18;			//0x18
	D2UnkOutPlaceStrc* field_1C[3];			//0x1C
	int32_t field_28;						//0x18
	int32_t field_2C;						//0x2C
	int32_t* pJungleDefs;					//0x30
	int32_t nJungleDefs;					//0x34
};


#pragma pack()
