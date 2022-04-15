#include "../winhttp.h"

//----- (0000000140341740) ----------------------------------------------------
__int64 __fastcall sub_140341740(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm1
	float v4; // xmm3_4

	v2 = _mm_mul_ps(a1[1], a1[1]);
	v3 = _mm_mul_ps(a2[1], a2[1]);
	v4 = (float)((float)(v2.m128_f32[0] + _mm_shuffle_ps(v2, v2, 85).m128_f32[0]) + _mm_shuffle_ps(v2, v2, 170).m128_f32[0])
		- (float)((float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0]);
	if (v4 <= 0.0)
		return (unsigned int)(v4 >= 0.0) - 1;
	else
		return 1i64;
}

