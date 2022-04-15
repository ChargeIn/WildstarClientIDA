#include "../winhttp.h"

//----- (00000001400E0320) ----------------------------------------------------
__m128* __fastcall sub_1400E0320(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128 v4; // xmm0
	__m128* result; // rax
	__m128 v6; // xmm0

	v4.m128_f32[0] = a4;
	result = a1;
	v6 = _mm_shuffle_ps(v4, v4, 0);
	*a1 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_mul_ps(_mm_mul_ps(_mm_sub_ps(*a3, *a2), v6), v6), v6), v6), *a2);
	return result;
}
// 1400E032B: variable 'v4' is possibly undefined

