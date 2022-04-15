#include "../winhttp.h"

//----- (00000001400E0110) ----------------------------------------------------
__m128* __fastcall sub_1400E0110(__m128* a1, __m128* a2, __m128* a3, double a4)
{
	__m128 v4; // xmm1
	__m128 v6; // xmm7
	__m128 v7; // xmm6
	float v8; // xmm0_4
	__m128* result; // rax

	*(float*)&a4 = *(float*)&a4 * 3.1415927;
	v6 = *a2;
	v7 = _mm_div_ps(_mm_sub_ps(*a2, *a3), (__m128)xmmword_140B7B2F0);
	v8 = sub_1408FC950(a4);
	result = a1;
	v4.m128_f32[0] = v8 - 1.0;
	*a1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7), v6);
	return result;
}
// 1400E0153: variable 'v4' is possibly undefined
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;

