#include "../winhttp.h"

//----- (000000014062DBF0) ----------------------------------------------------
float __fastcall sub_14062DBF0(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm2
	__m128 v3; // xmm0

	v2 = _mm_sub_ps(a1[2], a2[1]);
	v3 = _mm_mul_ps(v2, v2);
	return (float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
}

