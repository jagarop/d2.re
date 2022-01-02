#pragma once

#include "CommonDefinitions.h"

#pragma pack(1)

enum D2EnvironmentDayCycles : int32_t {
	EnvCycleSunrise,
	EnvCycleMorning,
	EnvCycleNoon,
	EnvCycleAfteroon,
	EnvCycleSunset,
	EnvCycleNight,
	NUM_ENVIRONMENT_CYCLES
};

struct D2EnvironmentCycleStrc
{
	int32_t nTicksBegin;			//0x00
	int32_t nPeriodOfDay;				//0x04
	uint8_t nRed;					//0x08
	uint8_t nGreen;				//0x09
	uint8_t nBlue;					//0x0A
	uint8_t nIntensity;			//0x0B Unused
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

#pragma pack()
