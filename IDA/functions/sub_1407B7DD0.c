#include "../winhttp.h"

//----- (00000001407B7DD0) ----------------------------------------------------
__int64 __fastcall sub_1407B7DD0(__int64 a1, __int64 a2, __m128* a3, __m128* a4)
{
	__m128 v4; // xmm4
	__m128 v5; // xmm5
	__m128 v6; // xmm3
	float v7; // xmm1_4
	__int64 result; // rax
	__int64 v9; // rcx
	__m128* v10; // r11
	__m128* v11; // r10
	__m128 v12; // xmm5
	__m128 v13; // xmm3
	__m128 v14; // xmm4
	__m128 v15; // xmm3
	__m128 v16; // xmm3
	float v17; // xmm3_4
	__m128 v18; // xmm3
	__m128 v19; // xmm3
	__m128 v20; // xmm2
	__m128 v21; // [rsp+20h] [rbp-48h] BYREF
	__m128 v22; // [rsp+30h] [rbp-38h] BYREF
	__m128 v23; // [rsp+40h] [rbp-28h] BYREF
	__int64 v24; // [rsp+50h] [rbp-18h]

	v4 = (__m128)0x40400000u;
	v5 = _mm_sub_ps(*a4, *a3);
	v6 = _mm_mul_ps(v5, v5);
	v6.m128_f32[0] = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	v7 = 1.0 / fsqrt(v6.m128_f32[0]);
	v4.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v6.m128_f32[0] * v7) * v7)) * 0.5) * v7, 0.0);
	v21 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v5);
	result = sub_1401AE000(&v23, &v22, &v21);
	v12 = _mm_sub_ps(v10[23], *v11);
	v13 = _mm_mul_ps(v23, v12);
	v14 = _mm_mul_ps(v22, v12);
	v14.m128_f32[0] = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
		+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
	v13.m128_f32[0] = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
		+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
	v15 = _mm_unpacklo_ps(_mm_unpacklo_ps(v13, (__m128)0i64), _mm_unpacklo_ps(v14, (__m128)0i64));
	v16 = _mm_mul_ps(v15, v15);
	v17 = fsqrt(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0]);
	if (v17 >= 0.0000099999997 && v17 <= 1.0078125)
	{
		v24 = v10[61].m128_i64[0];
		v18 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 210), _mm_shuffle_ps(v12, v12, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v12, v12, 210)));
		v19 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v18, v18, 210), _mm_shuffle_ps(v21, v21, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v18, v18, 201), _mm_shuffle_ps(v21, v21, 210)));
		v20 = _mm_mul_ps(v19, v19);
		v20.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
				+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]);
		v23 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v19);
		return sub_1407BCA70(v9, (__int64)&v23);
	}
	return result;
}
// 1407B7E49: variable 'v10' is possibly undefined
// 1407B7E51: variable 'v11' is possibly undefined
// 1407B7F52: variable 'v9' is possibly undefined

