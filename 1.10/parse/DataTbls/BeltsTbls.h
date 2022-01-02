#pragma once 

#include "../D2Common.h"
#include "D2BasicTypes.h"

#pragma pack(1)

struct D2BeltsTxt
{
	uint8_t nIndex;						//0x00
	uint8_t pad0x01[3];					//0x01
	int32_t nBoxes;						//0x04
	D2InvRectStrc beltBoxes[16];		//0x08
};

#pragma pack()

