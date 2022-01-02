#pragma once 

#include "../D2Common.h"
#include "D2BasicTypes.h"

#pragma pack(1)

struct D2AnimDataRecordStrc
{
	char szAnimDataName[8];					//0x00
	uint32_t dwFrames;							//0x08
	uint32_t dwAnimSpeed;						//0x0C
	uint8_t pFrameFlags[144];					//0x10
};

struct D2AnimDataStrc
{
	D2AnimDataRecordStrc* pRecords;			//0x00
	D2AnimDataRecordStrc* pHashTable[256];	//0x04
	D2AnimDataRecordStrc pDefaultRecord;	//0x404
};

struct D2UnitStrc;
struct D2InventoryStrc;

#pragma pack()