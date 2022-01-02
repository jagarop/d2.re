#pragma once 

#include "D2BasicTypes.h"

#pragma pack(1)
struct D2CollisionFieldStrc
{
	int32_t nWidth;							//0x00
	int32_t nHeight;						//0x04
	int32_t nArea;							//0x08
	int32_t nCenterX;						//0x0C
	int32_t nCenterY;						//0x10
};

#pragma pack()
