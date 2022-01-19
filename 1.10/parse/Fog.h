#pragma once


#include "D2BasicTypes.h"
#ifdef FOG_IMPL
#define FOG_DLL_DECL 
#else
#define FOG_DLL_DECL __declspec( dllimport )
#endif

#pragma pack(1)

struct D2TxtLinkNodeStrc
{
	char szText[32];				//0x00
	int nLinkIndex;					//0x20
	D2TxtLinkNodeStrc* pPrevious;	//0x24
	D2TxtLinkNodeStrc* pNext;		//0x28
};

struct D2TxtLinkTblStrc
{
	union
	{
		char szCode[4];				//0x00
		uint32_t dwCode;			//0x00
	};
	int nLinkIndex;					//0x04
};

struct D2TxtLinkStrc
{
	int32_t nRecords;				//0x00
	int32_t nAllocatedCells;		//0x04
	D2TxtLinkTblStrc* pTbl;			//0x08
	D2TxtLinkNodeStrc* pFirstNode;	//0x0C
};


struct D2BinFileStrc
{
	uint8_t* pDataBuffer;			//0x00
	uint8_t* pData;					//0x04
	int32_t nRecordCount;			//0x08
	int32_t nCellCount;				//0x0C
};

enum D2C_TxtFieldTypes : uint32_t
{
	TXTFIELD_NONE,
	TXTFIELD_ASCII,
	TXTFIELD_DWORD,
	TXTFIELD_WORD,
	TXTFIELD_BYTE,
	TXTFIELD_UNKNOWN1,
	TXTFIELD_UNKNOWN2,
	TXTFIELD_BYTE2,
	TXTFIELD_DWORD2,
	TXTFIELD_RAW,
	TXTFIELD_ASCIITOCODE,
	TXTFIELD_UNKNOWN3,
	TXTFIELD_UNKNOWN4,
	TXTFIELD_CODETOBYTE,
	TXTFIELD_UNKNOWN5,
	TXTFIELD_CODETOWORD,
	TXTFIELD_UNKNOWN6,
	TXTFIELD_NAMETOINDEX,
	TXTFIELD_NAMETOINDEX2,
	TXTFIELD_NAMETODWORD,
	TXTFIELD_NAMETOWORD,
	TXTFIELD_NAMETOWORD2,
	TXTFIELD_KEYTOWORD,
	TXTFIELD_CUSTOMLINK,
	TXTFIELD_UNKNOWN7,
	TXTFIELD_CALCTODWORD,
	TXTFIELD_BIT
};

struct D2BinFieldStrc
{
	char* szFieldName;				//0x00
	D2C_TxtFieldTypes nFieldType;	//0x04
	int32_t nFieldLength;			//0x08
	int32_t nFieldOffset;			//0x0C
	void* pLinkField;				//0x10
};

struct D2UnkExcelStrc
{
	D2UnkExcelStrc* pNext;			//0x00
	uint32_t dwHash;				//0x04
	D2BinFieldStrc* pBinField;		//0x08
};

struct D2UnkFogStrc
{
	void* pCallback;				//0x00
	int32_t unk0x04;				//0x04
};

#pragma pack()

#define D2_ALLOC_CLIENT(size) FOG_AllocClientMemory((size), __FILE__, __LINE__, 0)
#define D2_CALLOC_CLIENT(size) memset(FOG_AllocClientMemory(size, __FILE__, __LINE__, 0), 0x00, size)
#define D2_ALLOC_STRC_CLIENT(type) (type*)FOG_AllocClientMemory(sizeof(type), __FILE__, __LINE__, 0)
#define D2_CALLOC_STRC_CLIENT(type) (type*)memset(FOG_AllocClientMemory(sizeof(type), __FILE__, __LINE__, 0), 0x00, sizeof(type))
#define D2_FREE_CLIENT(ptr) FOG_FreeClientMemory(ptr, __FILE__, __LINE__, 0)


#define D2_ALLOC_SERVER(pMemPool, size) FOG_AllocServerMemory(pMemPool, size, __FILE__, __LINE__, 0)
#define D2_CALLOC_SERVER(pMemPool, size) memset(FOG_AllocServerMemory(pMemPool, size, __FILE__, __LINE__, 0),0x00,size)
#define D2_REALLOC_SERVER(pMemPool, pMem, size) FOG_ReallocServerMemory(pMemPool, pMem, size, __FILE__, __LINE__, 0)
#define D2_ALLOC_STRC_SERVER(pMemPool, type) (type*)FOG_AllocServerMemory(pMemPool, sizeof(type), __FILE__, __LINE__, 0)
#define D2_CALLOC_STRC_SERVER(pMemPool, type) (type*)memset(FOG_AllocServerMemory(pMemPool, sizeof(type), __FILE__, __LINE__, 0), 0x00, sizeof(type))
#define D2_FREE_SERVER(pMemPool, ptr) FOG_FreeServerMemory(pMemPool, ptr, __FILE__, __LINE__, 0)

#ifndef NDEBUG
// Assert that an expression must be true, otherwise assume the program state will not be recoverable.
// In debug builds, this will trigger a log and exit, in release this is used as a hint for performance optimization.
// Do NOT use this if the program can recover when expr if false, as it is used as a hint for performance and can impact generated code.
// For recoverable errors, use D2_VERIFY
#define D2_ASSERT(expr) (void)( (!!(expr)) || (FOG_Assertion(#expr, __FILE__, __LINE__), exit(-1) , 0))
#define D2_ASSERTM(expr,msg) (void)( (!!(expr)) || (FOG_Assertion(msg, __FILE__, __LINE__), exit(-1) , 0))

// Assert that an expression must be true, even though the program may be recoverable.
// Contrary to D2_ASSERT, this is still evaluated in release builds, and can be used anywhere the expression would be valid.
// This is to be used when one can recover from an error
// Example:
// if(D2_VERIFY(ptr != nullptr)) ptr->method(); // The only difference between debug and release build is the logging and breakpoint
#define D2_VERIFY(expr) ((!!(expr)) || (FOG_Assertion(#expr, __FILE__, __LINE__), false))
#define D2_VERIFYM(expr,msg) ((!!(expr)) || (FOG_Assertion(msg, __FILE__, __LINE__), false))
#else
#define D2_ASSERT(expr) (__assume(expr), (void)0)
#define D2_ASSERTM(expr,msg) (__assume(expr), (void)0)
#define D2_VERIFY(expr) (!!(expr))
#define D2_VERIFYM(expr,msg) (!!(expr))
#endif
#define D2_UNREACHABLE D2_ASSERT(false)
