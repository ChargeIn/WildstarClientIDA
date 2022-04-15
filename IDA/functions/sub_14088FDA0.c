#include "../winhttp.h"

//----- (000000014088FDA0) ----------------------------------------------------
__int64 __fastcall sub_14088FDA0(_QWORD* a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(*a1 + 8i64) - *(unsigned int*)(a1[1] + 144i64);
	if (result < 0)
		return 0i64;
	return result;
}

