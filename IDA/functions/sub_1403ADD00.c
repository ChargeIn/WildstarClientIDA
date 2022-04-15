#include "../winhttp.h"

//----- (00000001403ADD00) ----------------------------------------------------
__int64 __fastcall sub_1403ADD00(__m128* a1, __m128* a2, float a3)
{
	int v6; // eax
	unsigned int v7; // ecx

	if (!a1)
		return 58i64;
	if (!a2)
		return 59i64;
	if ((unsigned int)sub_14045E5E0((__int64)a1))
		return 60i64;
	if ((unsigned int)sub_14045E5E0((__int64)a2))
		return 61i64;
	if (!sub_1403AD690(a1, a2, 0.0, a3, 3.0))
		return 17i64;
	v6 = sub_14045A950((__int64)a1, a2->m128_i32[2]);
	v7 = 0;
	if (v6 < 1)
		return 62;
	return v7;
}

