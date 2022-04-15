#include "../winhttp.h"

//----- (0000000140781010) ----------------------------------------------------
__m128* __fastcall sub_140781010(__int64 a1, __int64 a2, int a3, __m128* a4, __m128* a5, __m128* a6)
{
	_DWORD* v7; // rax
	__m128 v8; // xmm5
	__m128 v9; // xmm0
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	int v12; // eax
	__m128 v13; // xmm2
	__m128 v14; // xmm3
	__m128 v15; // xmm4
	__m128* result; // rax
	__m128 v17; // xmm5
	__m128 v18; // xmm3
	float v19; // xmm0_4
	unsigned int v20; // [rsp+30h] [rbp-28h] BYREF
	unsigned int v21; // [rsp+34h] [rbp-24h]
	unsigned int v22; // [rsp+38h] [rbp-20h]
	int v23[6]; // [rsp+40h] [rbp-18h] BYREF
	int v24; // [rsp+60h] [rbp+8h] BYREF

	v7 = sub_140783690(a1 + 56, v23, a3, *(_DWORD*)(a2 + 3412), &v24, (__int64)&v20);
	v8 = (__m128)v22;
	v9 = (__m128)(unsigned int)v7[2];
	v10 = (__m128)(unsigned int)v7[1];
	v11 = (__m128)(unsigned int) * v7;
	v12 = v24;
	*a4 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v9), _mm_unpacklo_ps(v10, (__m128)0i64));
	if (v12)
	{
		v13 = _mm_unpacklo_ps((__m128)v21, (__m128)0i64);
		v14 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v20, v8), v13);
		v13.m128_f32[0] = 1000.0 / (float)v12;
		*a5 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v14);
	}
	else
	{
		*a5 = 0i64;
	}
	v15 = (__m128)0x40400000u;
	result = a6;
	v17 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v20, v8), _mm_unpacklo_ps((__m128)v21, (__m128)0i64));
	v18 = _mm_mul_ps(v17, v17);
	v18.m128_f32[0] = (float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
		+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
	v19 = 1.0 / fsqrt(v18.m128_f32[0]);
	v15.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v18.m128_f32[0] * v19) * v19)) * 0.5) * v19, 0.0);
	*a6 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v17);
	return result;
}
// 140781010: using guessed type int var_18[6];

