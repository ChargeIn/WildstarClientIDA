#include "../winhttp.h"

//----- (00000001407B08C0) ----------------------------------------------------
__m128* __fastcall sub_1407B08C0(unsigned __int8* a1, __m128* a2)
{
	__m128 v2; // xmm4
	__m128 v3; // xmm1
	__m128 v4; // xmm5
	__m128 v5; // xmm3
	__m128 v6; // xmm1
	__m128 v7; // xmm7
	__m128 v8; // xmm4
	__m128 v9; // xmm3
	__m128* result; // rax
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // [rsp+0h] [rbp-48h]
	unsigned __int64 v14; // [rsp+0h] [rbp-48h]

	v7 = (__m128)0x3F800000u;
	v2 = (__m128)COERCE_UNSIGNED_INT((float)*a1);
	v2.m128_f32[0] = v2.m128_f32[0] * 0.0039215689;
	v3 = (__m128)COERCE_UNSIGNED_INT((float)a1[1]);
	v3.m128_f32[0] = v3.m128_f32[0] * 0.0039215689;
	v4 = _mm_sub_ps(
		_mm_mul_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v2, (__m128)0i64), _mm_unpacklo_ps(v3, (__m128)0i64)),
			(__m128)xmmword_140B7B2F0),
		(__m128)xmmword_140B7B240);
	v5 = _mm_shuffle_ps(v4, v4, 85);
	v13.m128_i32[0] = v4.m128_i32[0] & 0x7FFFFFFF;
	v13.m128_i32[1] = v5.m128_i32[0] & 0x7FFFFFFF;
	v6 = _mm_mul_ps(v13, (__m128)xmmword_140B7B240);
	v7.m128_f32[0] = 1.0 - (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0]);
	if (v7.m128_f32[0] < 0.0)
	{
		v8 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(v4.m128_f32[0] >= 0.0)), (__m128)0i64),
					_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(v5.m128_f32[0] >= 0.0)), (__m128)0i64)),
				(__m128)xmmword_140B7B2F0),
			(__m128)xmmword_140B7B240);
		v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), _mm_unpacklo_ps(v4, (__m128)0i64));
		v13.m128_i32[1] = fabs(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
		v13.m128_i32[0] = v9.m128_i32[0] & 0x7FFFFFFF;
		v14 = _mm_sub_ps(v8, _mm_mul_ps(v13, v8)).m128_u64[0];
		v5 = (__m128)HIDWORD(v14);
		v4 = (__m128)(unsigned int)v14;
	}
	result = a2;
	v11 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, v7), _mm_unpacklo_ps(v5, (__m128)0i64));
	v12 = _mm_mul_ps(v11, v11);
	v12.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
			+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]);
	*a2 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v11);
	return result;
}
// 1407B0954: variable 'v13' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

