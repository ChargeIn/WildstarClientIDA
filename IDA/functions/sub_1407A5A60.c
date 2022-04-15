#include "../winhttp.h"

//----- (00000001407A5A60) ----------------------------------------------------
__m128* __fastcall sub_1407A5A60(__m128* a1, __m128* a2, __m128* a3, __m128* a4, __m128* a5)
{
	__m128 v5; // xmm4
	__m128 v6; // xmm2
	__m128 v7; // xmm3
	__m128 v8; // xmm7
	float v9; // xmm7_4
	__m128 v10; // xmm6
	__m128 v11; // xmm1
	float v12; // xmm6_4
	__m128 v13; // xmm5
	__m128 v14; // xmm0
	__m128 v15; // xmm4
	__m128 v16; // xmm3
	float v17; // xmm1_4
	__m128 v18; // xmm5
	__m128* result; // rax
	__m128 v20; // xmm0

	v6 = _mm_sub_ps(*a2, *a1);
	v7 = _mm_sub_ps(*a3, *a2);
	v8 = _mm_mul_ps(v6, v6);
	v9 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
	v10 = _mm_mul_ps(v7, v7);
	v11 = _mm_shuffle_ps(v10, v10, 170);
	v12 = (float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) + v11.m128_f32[0];
	if (v9 <= *(float*)&dword_140C4E988 || v12 <= *(float*)&dword_140C4E988)
	{
		if (a4)
			*a4 = v7;
		result = a5;
		if (a5)
			*a5 = v6;
	}
	else
	{
		v13 = (__m128)0x40400000u;
		v5.m128_f32[0] = v9;
		v11.m128_f32[0] = v12;
		v14 = 0i64;
		v15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v6));
		v16 = _mm_mul_ps(v15, v15);
		v16.m128_f32[0] = (float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
			+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
		v17 = 1.0 / fsqrt(v16.m128_f32[0]);
		v13.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v16.m128_f32[0] * v17) * v17)) * 0.5) * v17, 0.0);
		v18 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v15);
		if (a4)
		{
			v14.m128_f32[0] = fsqrt(v12);
			*a4 = _mm_mul_ps(v18, _mm_shuffle_ps(v14, v14, 0));
		}
		result = a5;
		if (a5)
		{
			v20 = 0i64;
			v20.m128_f32[0] = fsqrt(v9);
			*a5 = _mm_mul_ps(v18, _mm_shuffle_ps(v20, v20, 0));
		}
	}
	return result;
}
// 1407A5AE3: variable 'v5' is possibly undefined
// 140C4E988: using guessed type int dword_140C4E988;

