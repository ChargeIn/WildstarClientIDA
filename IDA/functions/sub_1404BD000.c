#include "../winhttp.h"

//----- (00000001404BD000) ----------------------------------------------------
__int64 __fastcall sub_1404BD000(__int64 a1, __m128* a2)
{
	__m128 v2; // xmm3
	__m128 v5; // xmm8
	__m128 v6; // xmm1
	__m128 v7; // xmm9
	__m128 v8; // xmm7
	__m128 v9; // xmm4
	float v10; // xmm2_4
	float v11; // xmm0_4
	__m128 v12; // xmm9
	__m128 v13; // xmm3
	__m128 v14; // xmm1
	float v15; // xmm2_4
	float v16; // xmm0_4
	__m128 v17; // xmm7
	__m128 v18; // xmm3
	__m128 v19; // xmm1
	float v20; // xmm2_4
	float v21; // xmm0_4
	__m128 v22; // xmm4
	__m128 v23; // xmm1
	float v24; // xmm2_4
	float v25; // xmm0_4
	__m128 v26; // xmm8
	__int64 result; // rax
	__m128 v28; // xmm3
	__m128 v29; // xmm1
	__m128 v30[8]; // [rsp+20h] [rbp-88h] BYREF

	v2 = a2[3];
	v5 = (__m128)0x40400000u;
	v6 = _mm_mul_ps(v2, v2);
	v7 = (__m128)0x40400000u;
	v8 = (__m128)0x40400000u;
	v9 = (__m128)0x40400000u;
	v10 = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0]) + _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	v11 = fsqrt(v10);
	v7.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v10 * (float)(1.0 / v11)) * (float)(1.0 / v11))) * 0.5)
		* (float)(1.0 / v11),
		0.0);
	v12 = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v2);
	v13 = a2[2];
	v14 = _mm_mul_ps(v13, v13);
	v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]) + _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
	v16 = fsqrt(v15);
	v8.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v15 * (float)(1.0 / v16)) * (float)(1.0 / v16))) * 0.5)
		* (float)(1.0 / v16),
		0.0);
	v17 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v13);
	v18 = a2[1];
	v19 = _mm_mul_ps(v18, v18);
	v20 = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0]) + _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
	v21 = fsqrt(v20);
	v9.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v20 * (float)(1.0 / v21)) * (float)(1.0 / v21))) * 0.5)
		* (float)(1.0 / v21),
		0.0);
	v22 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v18);
	v23 = _mm_mul_ps(*a2, *a2);
	v24 = (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0]) + _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
	v25 = fsqrt(v24);
	v5.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v24 * (float)(1.0 / v25)) * (float)(1.0 / v25))) * 0.5)
		* (float)(1.0 / v25),
		0.0);
	v26 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *a2);
	v30[0] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v26, _mm_shuffle_ps(v26, v26, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v26, v26, 85), (__m128)0i64));
	v30[1] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v22, _mm_shuffle_ps(v22, v22, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v22, v22, 85), (__m128)0i64));
	v30[2] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v17, _mm_shuffle_ps(v17, v17, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v17, v17, 85), (__m128)0i64));
	v30[3] = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v12, _mm_shuffle_ps(v12, v12, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v12, v12, 85), (__m128)0x3F800000u));
	sub_1401B1D60((float*)a1, v30[0].m128_f32);
	result = a1;
	v28 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a2[3].m128_u32[0], (__m128)a2[3].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a2[3].m128_u32[1], (__m128)0i64));
	*(_DWORD*)(a1 + 16) = v28.m128_i32[0];
	*(_DWORD*)(a1 + 20) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
	*(_DWORD*)(a1 + 24) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
	v29 = _mm_mul_ps(*a2, *a2);
	*(float*)(a1 + 28) = fsqrt(
		(float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
		+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
	return result;
}
// 1404BD000: using guessed type __m128 var_88[8];

