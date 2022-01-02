#pragma once 

#include "D2BasicTypes.h"

#pragma pack()
struct D2MonSeqTxt
{
	uint16_t wSequence;					//0x00
	uint8_t nMode;						//0x02
	uint8_t nFrame;						//0x03
	uint8_t nDir;						//0x04
	uint8_t nEvent;						//0x05
};

struct D2SeqRecordStrc
{
	D2MonSeqTxt* pMonSeqTxtRecord;		//0x00
	int32_t unk0x04;					//0x04
	int32_t unk0x08;					//0x08
};

//TODO: Find a better name
struct D2UnkSequenceStrc
{
	D2SeqRecordStrc unk0x00[14];		//0x00
};

#pragma pack()
