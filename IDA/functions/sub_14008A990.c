#include "../winhttp.h"

//----- (000000014008A990) ----------------------------------------------------
__int64 __fastcall sub_14008A990(unsigned __int8* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int8 i; // al
	__int64 result; // rax

	*a2 += 4i64;
	*a2 += 32i64 * *a1;
	*a3 += 4i64 * *a1;
	*a2 += 8i64;
	*a3 += 8i64 * a1[17];
	for (i = 0; i < a1[17]; ++i)
		*a2 += 26i64;
	*a2 += 7i64;
	*a2 += 16i64 * a1[32];
	result = 2i64 * a1[32];
	*a3 += result;
	return result;
}

