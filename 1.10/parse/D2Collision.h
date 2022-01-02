#pragma once

#include "CommonDefinitions.h"
#include "Drlg/D2DrlgDrlg.h"
// TODO: Reimport from .cpp

#pragma pack(1)

struct D2BoundingBoxStrc
{
	int32_t nLeft;								//0x00
	int32_t nBottom;							//0x04
	int32_t nRight;								//0x08
	int32_t nTop;								//0x0C
};

enum D2C_CollisionFlags : uint32_t
{
	COLLIDE_NONE = 0x0000,
	COLLIDE_BLOCK_PLAYER = 0x0001,			// 'black space' in arcane sanctuary, cliff walls etc
	COLLIDE_BLOCK_MISSILE = 0x0002,			// tile based obstacles you can't shoot over
	COLLIDE_WALL = 0x0004,					// again used inconsistantly -.-
	COLLIDE_BLOCK_LEAP = 0x0008,
	COLLIDE_ALTERNATE_FLOOR = 0x0010,		// some floors have this set, others don't
	COLLIDE_BLANK = 0x0020,					// returned if the subtile is invalid
	COLLIDE_MISSILE = 0x0040,
	COLLIDE_PLAYER = 0x0080,
	COLLIDE_MONSTER = 0x0100,
	COLLIDE_ITEM = 0x0200,
	COLLIDE_OBJECT = 0x0400,
	COLLIDE_DOOR = 0x0800,
	COLLIDE_UNIT_RELATED = 0x1000,			// set for units sometimes, but not always
	COLLIDE_PET = 0x2000,
	COLLIDE_4000 = 0x4000,
	COLLIDE_CORPSE = 0x8000,				// also used by portals, but dead monsters are mask 0x8000
	COLLIDE_ALL_MASK = 0xFFFFFFFF,
};

struct D2RoomCollisionGridStrc
{
	D2DrlgCoordsStrc pRoomCoords;			//0x00
	uint16_t* pCollisionMask;					//0x20
};
#pragma pack()
