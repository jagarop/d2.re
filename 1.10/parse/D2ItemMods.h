#pragma once

#include "CommonDefinitions.h"
#include "Units/Missile.h"
#include "DataTbls/ItemsTbls.h"

#pragma pack(1)

//struct D2PropertySetFuncStrc
//{
//	int32_t nState;
//	int32_t fStatList;
//};

typedef BOOL(__fastcall* PROPERTYASSIGN)(int32_t, D2UnitStrc*, D2UnitStrc*, D2PropertyStrc*, int32_t, int32_t, int32_t, int32_t, D2UnitStrc*);

typedef int32_t(__fastcall* PROPERTYASSIGNFN)(int32_t, D2UnitStrc*, D2UnitStrc*, const D2PropertyStrc*, int32_t, int16_t, int32_t, int32_t, int32_t, int32_t, D2UnitStrc*);

struct D2PropertyAssignStrc
{
	PROPERTYASSIGN pfAssign;				//0x00
	int32_t nStatId;							//0x04
};


struct D2ItemCalcStrc
{
	D2UnitStrc* pUnit;						//0x00
	D2UnitStrc* pItem;						//0x04
};

#pragma pack()
