#include "../winhttp.h"

//----- (00000001401BC7B0) ----------------------------------------------------
__int64 __fastcall sub_1401BC7B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rcx
	__int64 v4; // rdx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // r8

	v3 = 2 * a1;
	v4 = 2 * a2;
	if (*(_QWORD*)(a3 + 8 * v3 + 8))
	{
		if (!*(_QWORD*)(a3 + 8 * v4 + 8))
			return 0xFFFFFFFFi64;
	}
	else if (*(_QWORD*)(a3 + 8 * v4 + 8))
	{
		return 1i64;
	}
	v6 = *(_QWORD*)(a3 + 8 * v3);
	v7 = *(_QWORD*)(a3 + 8 * v4);
	if (v6 < v7)
		return 0xFFFFFFFFi64;
	return v6 > v7;
}
// 1401BC7CF: conditional instruction was optimized away because rax.8!=0

