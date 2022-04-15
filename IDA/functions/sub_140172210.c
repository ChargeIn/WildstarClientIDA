#include "../winhttp.h"

//----- (0000000140172210) ----------------------------------------------------
__int64 __fastcall sub_140172210(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	__int64 v4; // rdx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	if (v3 < 0)
		return 0i64;
	if (v3 >= (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3))
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)(v2 + 1416) + 8i64 * v3);
	if (!v4)
		return 0i64;
	v5 = *(_DWORD*)(v4 + 104);
	if (v5 == -1)
		return 0i64;
	v6 = a1[2];
	v7 = _mm_cvtsi32_si128(v5);
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
	a1[2] += 16i64;
	return result;
}

