#include "../winhttp.h"

//----- (00000001400E01C0) ----------------------------------------------------
__m128* __fastcall sub_1400E01C0(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128 v4; // xmm0
	__m128 v5; // xmm1
	__m128* result; // rax
	float v7; // xmm4_4
	__m128 v8; // xmm0

	v5 = (__m128)0x3F800000u;
	result = a1;
	v7 = a4 * 2.0;
	if ((float)(a4 * 2.0) >= 1.0)
	{
		v5.m128_f32[0] = (float)((float)(v7 - 1.0) * (float)(v7 - 3.0)) - 1.0;
		*a1 = _mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), _mm_div_ps(_mm_sub_ps(*a2, *a3), (__m128)xmmword_140B7B2F0)),
			*a2);
	}
	else
	{
		v4.m128_f32[0] = v7;
		v8 = _mm_shuffle_ps(v4, v4, 0);
		*a1 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_div_ps(_mm_sub_ps(*a3, *a2), (__m128)xmmword_140B7B2F0), v8), v8), *a2);
	}
	return result;
}
// 1400E01E3: variable 'v4' is possibly undefined
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;

