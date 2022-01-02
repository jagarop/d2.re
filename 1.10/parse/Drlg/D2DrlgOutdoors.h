#pragma once

#include "D2DrlgDrlg.h"
#include "D2DrlgDrlgGrid.h"


#pragma pack(1)


struct D2DrlgOutdoorGridStrc
{
	int32_t dwFlags;						//0x00
	D2DrlgGridStrc* pSectors;				//0x04
	int32_t nWidth;							//0x08
	int32_t nHeight;						//0x0C
	BOOL bInit;								//0x10
};

struct D2DrlgOutdoorInfoStrc
{
	uint32_t dwFlags;							//0x00
	D2DrlgGridStrc pGrid[4];				//0x04
	union
	{
		struct
		{
			int32_t nWidth;								//0x54
			int32_t nHeight;							//0x58
			int32_t nGridWidth;							//0x5C
			int32_t nGridHeight;						//0x60
		};
		D2DrlgCoordStrc pCoord;
	};
	D2DrlgVertexStrc* pVertex;				//0x64
	D2DrlgVertexStrc* unk0x68[6];			//0x68
	D2DrlgVertexStrc pVertices[24];			//0x80
	int32_t nVertices;							//0x260
	D2DrlgOrthStrc* pRoomData;				//0x264
};

#pragma pack()
