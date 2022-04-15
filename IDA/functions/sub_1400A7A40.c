#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A7A40) ----------------------------------------------------
_BOOL8 __fastcall sub_1400A7A40(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128 v5; // xmm7
	__m128 v6; // xmm6
	float v7; // xmm0_4
	__m128 v8; // xmm5
	__m128 v9; // [rsp+20h] [rbp-58h]

	if (a4 == 0.0)
		return 1i64;
	v5 = (__m128)0x40400000u;
	v9 = _mm_sub_ps(*a3, *a1);
	v9.m128_i32[1] = 0;
	v6 = _mm_mul_ps(v9, v9);
	v6.m128_f32[0] = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	v7 = 1.0 / fsqrt(v6.m128_f32[0]);
	v5.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v6.m128_f32[0] * v7) * v7)) * 0.5) * v7, 0.0);
	v8 = _mm_mul_ps(*a2, _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v9));
	return sub_1408FCCB0(
		fmaxf(
			-1.0,
			fminf(
				(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
				+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0],
				1.0))).m128_f32[0] <= (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)(a4 * 0.5));
}
// 140C3B438: using guessed type int dword_140C3B438;

