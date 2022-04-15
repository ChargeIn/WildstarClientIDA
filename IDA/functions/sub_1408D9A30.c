#include "../winhttp.h"

//----- (00000001408D9A30) ----------------------------------------------------
float __fastcall sub_1408D9A30(__int64 a1)
{
	__m128 v1; // xmm3
	__m128 v2; // xmm1
	__m128 v3; // xmm2
	float v4; // xmm2_4
	float v5; // xmm1_4
	float v6; // xmm2_4
	float v7; // xmm1_4

	v1 = (__m128) * (unsigned int*)(a1 + 12);
	v2 = v1;
	v2.m128_f32[0] = v1.m128_f32[0] * v1.m128_f32[0];
	v3 = v2;
	v3.m128_f32[0] = (float)(v1.m128_f32[0] * v1.m128_f32[0]) - (float)(*(float*)(a1 + 16) * 4.0);
	if (v3.m128_f32[0] >= 0.0)
	{
		v5 = _mm_sqrt_ps(v3).m128_f32[0];
		v6 = (float)-v1.m128_f32[0] - v5;
		v7 = fabs(v5 - v1.m128_f32[0]);
		v4 = fabs(v6);
		if (v4 <= v7)
			v4 = v7;
	}
	else
	{
		v2.m128_f32[0] = v2.m128_f32[0] - v3.m128_f32[0];
		LODWORD(v4) = _mm_sqrt_ps(v2).m128_u32[0];
	}
	return 1.0 / (float)(1.0 - (float)(v4 * 0.5));
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

