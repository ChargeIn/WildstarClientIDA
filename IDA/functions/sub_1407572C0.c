#include "../winhttp.h"

//----- (00000001407572C0) ----------------------------------------------------
__int64 __fastcall sub_1407572C0(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // eax
	__int64 v4; // rcx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0

	if (qword_140C659B0)
	{
		v3 = sub_140056D60(a1, 1u);
		v5 = sub_1404A8510(v4, v3);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1407572FA: variable 'v4' is possibly undefined
// 140C659B0: using guessed type __int64 qword_140C659B0;

