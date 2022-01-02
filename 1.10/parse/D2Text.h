#pragma once

#include "CommonDefinitions.h"
#pragma pack(1)

#define MAX_TEXT_LIST_NODES 8

struct D2MessageStrc			//sizeof 0x04
{
	uint8_t nMenu;				//0x00
	uint8_t pad0x01;			//0x01
	uint16_t nStringId;			//0x02
};

struct D2MessageListStrc		//sizeof 0x22
{
	uint8_t nCount;				//0x00
	uint8_t pad0x01;			//0x01
	D2MessageStrc pMessages[8];	//0x02
};

struct D2TextHeaderStrc
{
	void* pMemPool;				//0x00
	uint16_t nCount;			//0x04
	uint16_t pad0x06;			//0x06
	D2TextNodeStrc* pNode;		//0x08
};

struct D2TextMessageStrc
{
	wchar_t* pStringLines[6];	//0x00
	uint16_t nLines;			//0x18
	int32_t nColor;				//0x1A
	uint32_t nEndTick;			//0x1E
	D2TextMessageStrc* pNext;	//0x22
};

struct D2TextNodeStrc
{
	int16_t nStringId;			//0x00
	uint16_t pad0x02;			//0x02
	int32_t nMenu;				//0x04
	D2TextNodeStrc* pNext;		//0x08
};
#pragma pack()
