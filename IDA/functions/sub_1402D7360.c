#include "../winhttp.h"

//----- (00000001402D7360) ----------------------------------------------------
__int64 __fastcall sub_1402D7360(__m128* a1, __m128* a2, __m128* a3, __m128* a4, __m128* a5)
{
	__m128 v6; // xmm2
	__int64 v7; // r10
	__m128 v8; // xmm3
	__m128 v9; // xmm2
	__m128 v10; // xmm3
	__m128 v12[2]; // [rsp+30h] [rbp-C8h] BYREF
	__m128 v13[4]; // [rsp+50h] [rbp-A8h] BYREF
	__m128* v14[10]; // [rsp+90h] [rbp-68h] BYREF

	if (!a1[3].m128_i32[0])
		return 0i64;
	v6 = _mm_mul_ps(*a2, a1[4]);
	if ((float)((float)((float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0])
		+ a1[4].m128_f32[3]) > 0.0)
		return 0i64;
	v14[1] = a3;
	v14[0] = a1 + 7;
	sub_1401AFB10(v14, v13);
	if (!(unsigned int)sub_1402D6A30(v7, v13, v12))
		return 0i64;
	v8 = _mm_sub_ps(a4[1], *a4);
	v9 = _mm_min_ps(_mm_add_ps(_mm_mul_ps(v8, v12[1]), *a4), a4[1]);
	v10 = _mm_max_ps(_mm_add_ps(_mm_mul_ps(v8, v12[0]), *a4), *a4);
	if (v10.m128_f32[0] >= v9.m128_f32[0]
		|| _mm_shuffle_ps(v10, v10, 85).m128_f32[0] >= _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
	{
		return 0i64;
	}
	if (a5)
	{
		*a5 = v10;
		a5[1] = v9;
	}
	return 1i64;
}
// 1402D7408: variable 'v7' is possibly undefined
// 1402D7360: using guessed type __m128 var_A8[4];

