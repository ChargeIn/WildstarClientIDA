#include "../winhttp.h"

//----- (000000014062DC20) ----------------------------------------------------
__int64 __fastcall sub_14062DC20(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v4; // xmm1
	__m128 v5; // xmm2
	__m128 v6; // xmm1
	__m128 v7; // xmm3
	__m128 v8; // xmm1
	float v9; // xmm3_4

	if (a1->m128_i32[0] != a2->m128_i32[0])
		return (unsigned int)(a1->m128_i32[0] - a2->m128_i32[0]);
	v4 = a3[2];
	v5 = _mm_sub_ps(v4, a2[2]);
	v6 = _mm_sub_ps(v4, a1[2]);
	v7 = _mm_mul_ps(v6, v6);
	v8 = _mm_mul_ps(v5, v5);
	v9 = (float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0]) + _mm_shuffle_ps(v7, v7, 170).m128_f32[0])
		- (float)((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
	if (v9 >= 0.0)
		return v9 > 0.0;
	else
		return 0xFFFFFFFFi64;
}

