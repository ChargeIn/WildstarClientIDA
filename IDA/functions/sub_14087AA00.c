#include "../winhttp.h"

//----- (000000014087AA00) ----------------------------------------------------
float* __fastcall sub_14087AA00(float* a1, __m128* a2, float a3)
{
	__m128 v4; // xmm3
	float v5; // xmm0_4
	float v6; // xmm1_4
	float v7; // xmm5_4
	__m128 v8; // xmm3
	float v9; // xmm2_4
	float v10; // xmm1_4
	float v11; // xmm0_4
	float v12; // xmm3_4
	__m128 v13; // xmm2
	float v14; // xmm1_4
	float* result; // rax

	if (dword_140C61C54)
	{
		v12 = fsqrt(
			(float)(COERCE_FLOAT(*(_OWORD*)&a2[2]) * COERCE_FLOAT(*(_OWORD*)&a2[2]))
			+ (float)(a2[2].m128_f32[1] * a2[2].m128_f32[1]));
		*a1 = v12;
		v13 = *a2;
		v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
		v11 = fsqrt((float)(v14 * v14) + (float)(v13.m128_f32[0] * v13.m128_f32[0])) - v12;
	}
	else
	{
		v4 = a2[2];
		v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
		v6 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
		v7 = fsqrt(
			(float)((float)((float)(v4.m128_f32[0] * v4.m128_f32[0]) + (float)(v5 * v5)) + (float)(v6 * v6))
			+ (float)((float)((float)(COERCE_FLOAT(a2[3].m128_u64[0]) * COERCE_FLOAT(a2[3].m128_u64[0]))
				+ (float)(a2[2].m128_f32[3] * a2[2].m128_f32[3]))
				* 0.5));
		*a1 = v7;
		v8 = *a2;
		v9 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
		v10 = _mm_shuffle_ps(*a2, *a2, 170).m128_f32[0];
		v11 = fsqrt(
			(float)((float)((float)(v9 * v9) + (float)(v8.m128_f32[0] * v8.m128_f32[0])) + (float)(v10 * v10))
			+ (float)((float)((float)(a2->m128_f32[3] * a2->m128_f32[3])
				+ (float)(COERCE_FLOAT(a2[1].m128_u64[0]) * COERCE_FLOAT(a2[1].m128_u64[0])))
				* 0.5))
			- v7;
	}
	result = a1;
	a1[1] = v11 * a3;
	return result;
}
// 140C61C54: using guessed type int dword_140C61C54;

