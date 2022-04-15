#include "../winhttp.h"

//----- (00000001401723E0) ----------------------------------------------------
__int64 __fastcall sub_1401723E0(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int v3; // eax
	__int64 v4; // rdx
	__m128i v5; // xmm0
	__int64 result; // rax

	v2 = sub_140171EB0(a1);
	if (!*(_QWORD*)(v2 + 1600))
		return 0i64;
	v3 = **(_DWORD**)(v2 + 1592);
	if (v3 == -1)
		return 0i64;
	v4 = a1[2];
	v5 = _mm_cvtsi32_si128(v3);
	result = 1i64;
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	a1[2] += 16i64;
	return result;
}

