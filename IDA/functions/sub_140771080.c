#include "../winhttp.h"

//----- (0000000140771080) ----------------------------------------------------
__m128* __fastcall sub_140771080(__m128* a1, __m128* a2, __m128* a3, double a4, unsigned int a5, _DWORD* a6)
{
	__m128 v7; // xmm8
	float v8; // xmm7_4
	float v9; // xmm0_4
	float v10; // xmm3_4
	__m128i v11; // xmm2
	__m128 v12; // xmm0
	float v13; // xmm1_4
	__m128 v15; // [rsp+20h] [rbp-68h]

	v7 = _mm_sub_ps(*a2, *a3);
	v8 = sub_1408FC950(COERCE_DOUBLE(*(_QWORD*)&a4 ^ 0x8000000080000000ui64));
	v9 = sub_1408FE3D0(COERCE_DOUBLE(*(_QWORD*)&a4 ^ 0x8000000080000000ui64));
	v10 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
	v15.m128_f32[2] = (float)(v10 * v8) - (float)(v7.m128_f32[0] * v9);
	v15.m128_i32[1] = 0;
	v11 = _mm_cvtsi32_si128(0);
	*a1 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((a6[1] + a6[3]) >> 1), v11),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128((a6[2] + a6[4]) >> 1), v11)));
	if (a6[3] - a6[1] > 0 && a6[4] - a6[2] > 0)
	{
		v15.m128_f32[0] = (float)(v10 * v9) + (float)(v7.m128_f32[0] * v8);
		v12 = _mm_div_ps(v15, _mm_shuffle_ps((__m128)a5, (__m128)a5, 0));
		v13 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] + a1->m128_f32[1];
		a1->m128_f32[0] = v12.m128_f32[0] + a1->m128_f32[0];
		a1->m128_f32[1] = v13;
	}
	return a1;
}
// 14077117C: variable 'v15' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

