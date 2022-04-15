#include "../winhttp.h"

//----- (0000000140708D50) ----------------------------------------------------
__int64 __fastcall sub_140708D50(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rdx
	__m128i v6; // xmm0
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_1403FA980(v3, v2);
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	v6 = _mm_cvtsi32_si128(v4);
	result = 1i64;
	*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	a1[2] += 16i64;
	return result;
}
// 140708D65: variable 'v3' is possibly undefined

