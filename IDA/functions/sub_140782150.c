#include "../winhttp.h"

//----- (0000000140782150) ----------------------------------------------------
void __fastcall sub_140782150(__m128* a1, __int64 a2, __int32 a3, __m128* a4, __m128* a5, __m128* a6)
{
	__int32 v8; // r8d
	__int32 v9; // edx
	__m128 v10; // xmm3
	__m128 v11; // xmm0
	__int32 v12; // eax
	__m128 v13; // xmm6
	__m128 v14; // xmm7
	__m128 v15; // xmm0
	__m128 v16; // xmm2
	__m128 v17; // xmm5
	__m128 v18; // xmm1
	__m128 v19; // xmm3
	__m128 v20; // xmm2
	__m128 v21; // xmm5
	__m128 v22; // xmm2
	__m128 v23; // xmm1
	__m128 v24; // xmm4
	__m128 v25; // xmm3
	float v26; // xmm1_4

	if (!a1[6].m128_i32[3])
	{
		a1[4] = *a4;
		a1[6].m128_i32[3] = 1;
	}
	v8 = a1[6].m128_i32[1];
	v9 = a1[6].m128_i32[2];
	if (v8 - v9 < 0)
	{
		v10 = 0i64;
		v11 = _mm_xor_ps((__m128)a1[6].m128_u32[0], (__m128)xmmword_140B7B530);
		v12 = a1[6].m128_i32[2];
		if (a3 - v9 < 0)
			v12 = a3;
		v13 = 0i64;
		v14 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v11, (__m128)0i64));
		v13.m128_f32[0] = (float)(v12 - v8) * 0.001;
		v10.m128_f32[0] = (float)(v9 - v8) * 0.001;
		v15 = v10;
		v15.m128_f32[0] = v10.m128_f32[0] * 0.5;
		v16 = _mm_shuffle_ps(v13, v13, 0);
		v17 = _mm_sub_ps(
			_mm_div_ps(_mm_sub_ps(a1[5], a1[4]), _mm_shuffle_ps(v10, v10, 0)),
			_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v14));
		v18 = v13;
		v19 = _mm_add_ps(_mm_mul_ps(v16, v14), v17);
		v20 = _mm_mul_ps(v16, v17);
		v21 = v19;
		v18.m128_f32[0] = (float)(v13.m128_f32[0] * 0.5) * v13.m128_f32[0];
		v22 = _mm_add_ps(_mm_add_ps(v20, _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14)), a1[4]);
		a1[4] = v22;
		*a4 = v22;
		*a5 = v19;
		v23 = _mm_mul_ps(v19, v19);
		if ((float)((float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 85).m128_f32[0])
			+ _mm_shuffle_ps(v23, v23, 170).m128_f32[0]) > *(float*)&dword_140C4B928)
		{
			v24 = (__m128)0x40400000u;
			v25 = _mm_mul_ps(v19, v19);
			v25.m128_f32[0] = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
				+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
			v26 = 1.0 / fsqrt(v25.m128_f32[0]);
			v24.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v25.m128_f32[0] * v26) * v26)) * 0.5) * v26, 0.0);
			*a6 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v21);
		}
		if (a3 - a1[6].m128_i32[2] >= 0)
		{
			if (a1[1].m128_u64[1])
				sub_14079AB20(a1[1].m128_i64[0], (__int64)a1);
		}
		a1[6].m128_i32[1] = a3;
	}
	else
	{
		*a4 = a1[4];
		*a5 = 0i64;
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4B928: using guessed type int dword_140C4B928;

