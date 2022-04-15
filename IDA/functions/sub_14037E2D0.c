#include "../winhttp.h"

//----- (000000014037E2D0) ----------------------------------------------------
_BYTE* __fastcall sub_14037E2D0(_BYTE* a1, __m128* a2)
{
	float v2; // xmm6_4
	__m128 v3; // xmm2
	__m128 v4; // xmm0
	__m128 v5; // xmm5
	__m128 v6; // xmm3
	__m128 v7; // xmm2
	__m128 v8; // xmm5
	__m128 v9; // xmm3
	__m128 v10; // xmm0
	__m128 v12; // [rsp+0h] [rbp-48h]
	__m128 v13; // [rsp+0h] [rbp-48h]

	v2 = a2->m128_f32[1];
	v12.m128_i32[2] = fabs(a2->m128_f32[2]);
	v12.m128_i32[0] = fabs(a2->m128_f32[0]);
	v12.m128_i32[1] = LODWORD(v2) & 0x7FFFFFFF;
	v3 = _mm_mul_ps(v12, (__m128)xmmword_140B7B240);
	v4 = _mm_shuffle_ps(v3, v3, 85);
	v4.m128_f32[0] = (float)(v4.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
	v5 = _mm_div_ps(*a2, _mm_shuffle_ps(v4, v4, 0));
	v13 = v5;
	if (a2->m128_f32[2] < 0.0)
	{
		v6 = (__m128)0x3F800000u;
		if (v2 < 0.0)
			v7 = (__m128)0xBF800000;
		else
			v7 = (__m128)0x3F800000u;
		if (a2->m128_f32[0] < 0.0)
			v6 = (__m128)0xBF800000;
		v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, (__m128)0i64), _mm_unpacklo_ps(v7, (__m128)0i64));
		v9 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v13.m128_u32[1], (__m128)0i64),
			_mm_unpacklo_ps((__m128)v13.m128_u32[0], (__m128)0i64));
		v13.m128_u64[0] = __PAIR64__(
			COERCE_UNSIGNED_INT(fabs(_mm_shuffle_ps(v9, v9, 85).m128_f32[0])),
			COERCE_UNSIGNED_INT(fabs(v9.m128_f32[0])));
		v5 = _mm_sub_ps(v8, _mm_mul_ps(v13, v8));
	}
	v10 = _mm_mul_ps(
		(__m128)xmmword_140B7B470,
		_mm_add_ps((__m128)xmmword_140B7AC50, _mm_mul_ps((__m128)xmmword_140B7AC50, v5)));
	*a1 = (int)v10.m128_f32[0];
	a1[1] = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
	return a1;
}
// 14037E32E: variable 'v12' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

