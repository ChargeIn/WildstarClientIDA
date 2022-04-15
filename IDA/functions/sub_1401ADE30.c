#include "../winhttp.h"

//----- (00000001401ADE30) ----------------------------------------------------
float __fastcall sub_1401ADE30(__m128* a1, __m128* a2)
{
	__int64 v2; // r8
	float v3; // xmm1_4
	__int64 v4; // rdx
	__m128 v6; // [rsp+0h] [rbp-18h]

	v2 = 0i64;
	v6 = _mm_mul_ps(*a1, *a2);
	LODWORD(v3) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
	if (_mm_shuffle_ps(v6, v6, 85).m128_f32[0] > v6.m128_f32[0])
		v2 = 1i64;
	v4 = 1 - v2;
	if (v3 > v6.m128_f32[v2])
		v2 = 2i64;
	return (float)(v6.m128_f32[-v4 + 3 - v2] + v6.m128_f32[v4]) + v6.m128_f32[v2];
}
// 1401ADE30: using guessed type __m128 var_18;

