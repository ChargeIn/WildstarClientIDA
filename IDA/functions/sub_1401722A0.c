#include "../winhttp.h"

//----- (00000001401722A0) ----------------------------------------------------
__int64 __fastcall sub_1401722A0(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rcx
	__m128i v8; // xmm0
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
	v5 = *(_QWORD*)(v4 + 96);
	if (*(_QWORD*)v5 == v5)
		return 0i64;
	v6 = *(_DWORD*)(*(_QWORD*)v5 + 16i64);
	if (v6 == -1)
		return 0i64;
	v7 = a1[2];
	v8 = _mm_cvtsi32_si128(v6);
	result = 1i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
	a1[2] += 16i64;
	return result;
}

