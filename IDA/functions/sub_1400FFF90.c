#include "../winhttp.h"

//----- (00000001400FFF90) ----------------------------------------------------
__int64 __fastcall sub_1400FFF90(_QWORD* a1, unsigned int* a2, __m128* a3, float a4, char a5)
{
	__int64 result; // rax
	__m128i v7; // xmm2
	__m128i v8; // xmm1
	__m128i v9; // xmm3
	__m128 v10[2]; // [rsp+30h] [rbp-28h] BYREF

	result = 0i64;
	v7 = _mm_cvtsi32_si128(0);
	v8 = _mm_cvtsi32_si128(a2[1]);
	v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v7);
	v10[1] = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[2]), v7),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[3]), v7)));
	v10[0] = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v9, _mm_unpacklo_epi32(v8, v7)));
	if (*a1)
		return sub_140100010((__int64)a1, v10, a3, a4, a5);
	return result;
}

