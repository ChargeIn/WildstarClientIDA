#include "../winhttp.h"

//----- (00000001400E0560) ----------------------------------------------------
__m128* __fastcall sub_1400E0560(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128 v4; // xmm2
	__m128 v5; // xmm7
	__m128 v7; // xmm6
	double v8; // xmm0_8
	__m128* result; // rax

	v5 = *a2;
	v7 = _mm_sub_ps(*a3, *a2);
	v8 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), a4 * -10.0);
	result = a1;
	v4.m128_f32[0] = 1.0 - *(float*)&v8;
	*a1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7), v5);
	return result;
}
// 1400E05A8: variable 'v4' is possibly undefined

