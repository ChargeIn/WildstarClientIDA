#include "../winhttp.h"

//----- (0000000140698B00) ----------------------------------------------------
__int64 __fastcall sub_140698B00(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__m128i v6; // xmm0
	__int64 v7; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0)
	{
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(v5 + 492));
		v7 = a1[2];
		result = 1i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
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
// 140698B2C: variable 'v3' is possibly undefined

