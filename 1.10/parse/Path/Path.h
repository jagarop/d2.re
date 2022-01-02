#pragma once


#pragma pack(1)

enum D2PathTypes
{
	PATHTYPE_IDASTAR = 0,
	PATHTYPE_TOWARD = 2,
	PATHTYPE_MISSILE = 4,
	PATHTYPE_MON_CIRCLE_1 = 5,
	PATHTYPE_MON_CIRCLE_2 = 6,
	PATHTYPE_UNKNOWN_7 = 7,
	PATHTYPE_KNOCKBACK_SERVER = 8,
	PATHTYPE_LEAP = 9,
	PATHTYPE_CHARGEDBOLT = 10,
	PATHTYPE_KNOCKBACK_CLIENT = 11,
	PATHTYPE_MON_OTHER_2 = 13,
	PATHTYPE_BLESSEDHAMMER = 14,
	PATHTYPE_MOTION = 15,

	PATHTYPE_COUNT = 18
};

enum D2PathFlags : uint32_t {
	PATH_UNKNOWN_FLAG_0x00001 = 0x00001, // Set when rider and mount were in different rooms
	PATH_UNKNOWN_FLAG_0x00002 = 0x00002,
	PATH_UNKNOWN_FLAG_0x00004 = 0x00004,
	PATH_UNKNOWN_FLAG_0x00008 = 0x00008, // Set when rider and mount have the same position
	PATH_UNKNOWN_FLAG_0x00010 = 0x00010,
	PATH_UNKNOWN_FLAG_0x00020 = 0x00020,
	PATH_UNKNOWN_FLAG_0x00040 = 0x00040,
	PATH_UNKNOWN_FLAG_0x00200 = 0x00200,
	PATH_UNKNOWN_FLAG_0x02000 = 0x02000,
	PATH_UNKNOWN_FLAG_0x04000 = 0x04000,
	PATH_UNKNOWN_FLAG_0x08000 = 0x08000,
	PATH_UNKNOWN_FLAG_0x10000 = 0x10000,
	PATH_SAVE_STEPS_MASK      = 0x20000,
	PATH_MISSILE_MASK         = 0x40000,
};

struct D2PathPointStrc
{
	uint16_t X;
	uint16_t Y;
};

struct D2DynamicPathStrc
{
	union
	{
		struct
		{
			uint16_t wOffsetX;					//0x00
			uint16_t wPosX;						//0x02
			uint16_t wOffsetY;					//0x04
			uint16_t wPosY;						//0x06
		};

		struct
		{
			uint32_t dwPrecisionX;				//0x00
			uint32_t dwPrecisionY;				//0x04
		};
	};
	uint32_t dwTargetX;							//0x08
	uint32_t dwTargetY;							//0x0C
	D2PathPointStrc SP1;						//0x10
	D2PathPointStrc SP2;						//0x14
	D2PathPointStrc SP3;						//0x18
	D2RoomStrc* pRoom;							//0x1C
	D2RoomStrc* pRoomNext;						//0x20
	int32_t dwCurrentPointIdx;					//0x24
	int32_t dwPathPoints;						//0x28
	void* unk0x2C;								//0x2C
	D2UnitStrc* pUnit;							//0x30
	uint32_t dwFlags;							//0x34
	uint32_t unk0x38;							//0x38
	uint32_t dwPathType;						//0x3C
	uint32_t dwPrevPathType;					//0x40
	uint32_t dwUnitSize;						//0x44
	uint32_t dwCollisionPattern;				//0x48
	uint32_t dwCollisionType;					//0x4C
	uint32_t unk0x50;							//0x50
	uint16_t unk0x54;							//0x54
	uint16_t unk0x56;							//0x56
	D2UnitStrc* pTargetUnit;					//0x58
	uint32_t dwTargetType;						//0x5C
	uint32_t dwTargetId;						//0x60
	uint8_t nDirection;							//0x64
	uint8_t nNewDirection;						//0x65
	uint8_t nDiffDirection;						//0x66
	uint8_t unk0x67;							//0x67
	uint8_t unk0x68[2];							//0x68
	D2CoordStrc tDirectionVector;				//0x6A
	D2CoordStrc tVelocityVector;				//0x72
	char unk0x7A[2];							//0x7A
	uint32_t dwVelocity;						//0x7C
	uint32_t unk0x80;							//0x80
	uint32_t dwVelocity2;						//0x84
	uint32_t unk0x88[2];						//0x88
	uint8_t nDist;								//0x90
	uint8_t nDistMax;							//0x91
	uint8_t unk0x92;							//0x92 // Used only with PATHTYPE_IDASTAR
	uint8_t nStepNum;							//0x93
	uint8_t nDistance;							//0x94
	char unk0x95[3];							//0x95
	int32_t dwUnitTypeRelated;					//0x98
	D2PathPointStrc PathPoints[78];		//0x9C
	int32_t nSavedStepsCount;					//0x1D4
	D2PathPointStrc SavedSteps[7];				//0x1D8
	char unk0x1DC[12];							//0x1DC
};

struct D2PathInfoStrc
{
	D2PathPointStrc pStartCoord;			//0x00
	D2PathPointStrc tTargetCoord;				//0x04
	D2RoomStrc* pRoom;						//0x08
	D2RoomStrc* field_C;					//0x0C
	int32_t field_10;							//0x10
	uint8_t field_14;							//0x14
	uint8_t field_15;							//0x15
	uint16_t field_16;							//0x16
	int32_t nDistMax;							//0x18
	uint8_t field_1C;							//0x1C
	uint8_t field_1D;							//0x1D
	uint16_t field_1E;							//0x1E
	int32_t nPathType;							//0x20
	int32_t nUnitSize;							//0x24
	int32_t nCollisionPattern;					//0x28
	int32_t nCollisionType;						//0x2C
	union
	{
		D2DynamicPathStrc* pDynamicPath;	//0x30 - not sure yet
		void* pNext;				//0x30
	};
};

struct D2StaticPathStrc
{
	D2RoomStrc* pRoom;						//0x00
	int32_t nTargetX;							//0x04
	int32_t nTargetY;							//0x08
	int32_t nXPos;								//0x0C
	int32_t nYPos;								//0x10
	uint32_t unk0x14[2];						//0x14
	uint8_t nDirection;						//0x1C
	uint8_t unk0x1D[3];						//0x1D
};

#pragma pack()

// Path "precise" positions are encoded using 16bits fixed point
inline uint32_t PATH_ToFP16(uint16_t value) {
	return (value << 16) + (1 << 15);
}
inline uint16_t PATH_FromFP16(uint32_t value) {
	return (value >> 16) & 0xFFFF;
}

enum D2PathConstants {
	PATH_NB_DIRECTIONS = 64,
	PATH_DIR_NULL = 255,
	PATH_MAX_STEPNUM = 20,
};
inline uint8_t PATH_NormalizeDirection(uint8_t nDirection) { return nDirection % PATH_NB_DIRECTIONS; }
