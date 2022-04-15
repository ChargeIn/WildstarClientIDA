#include "../winhttp.h"

//----- (00000001401AE000) ----------------------------------------------------
__int64 __fastcall sub_1401AE000(__m128* a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm3
	__int64 v4; // rax
	float v5; // xmm1_4
	bool v6; // cc
	__m128 v7; // xmm1
	__m128 v8; // xmm3
	__int64 result; // rax
	__m128 v10; // xmm3
	__m128 v11; // xmm2
	__m128 v12; // xmm2
	__m128 v13; // xmm4
	__m128 v14; // xmm2

	if ((dword_140C8E130 & 1) == 0)
	{
		dword_140C8E130 |= 1u;
		xmmword_140C8E140[0] = xmmword_140B7A330;
		xmmword_140C8E150 = xmmword_140B7A4B0;
		xmmword_140C8E160 = xmmword_140B7A700;
	}
	v3 = *a3;
	v4 = 0i64;
	v5 = fabs(a3->m128_f32[2]);
	if (fabs(a3->m128_f32[0]) > fabs(a3->m128_f32[1]))
		v4 = 1i64;
	v6 = fabs(a3->m128_f32[v4]) <= v5;
	v7 = _mm_shuffle_ps(v3, v3, 201);
	v8 = _mm_shuffle_ps(v3, v3, 210);
	if (!v6)
		v4 = 2i64;
	result = v4;
	v10 = _mm_sub_ps(
		_mm_mul_ps(v8, _mm_shuffle_ps((__m128)xmmword_140C8E140[result], (__m128)xmmword_140C8E140[result], 201)),
		_mm_mul_ps(v7, _mm_shuffle_ps((__m128)xmmword_140C8E140[result], (__m128)xmmword_140C8E140[result], 210)));
	v11 = _mm_mul_ps(v10, v10);
	v11.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
			+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]);
	v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v10);
	*a1 = v12;
	v13 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v12, v12, 210), _mm_shuffle_ps(*a3, *a3, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v12, v12, 201), _mm_shuffle_ps(*a3, *a3, 210)));
	v14 = _mm_mul_ps(v13, v13);
	v14.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0]);
	*a2 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v13);
	return result * 2;
}
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140C8E130: using guessed type int dword_140C8E130;
// 140C8E140: using guessed type __int128 xmmword_140C8E140[];
// 140C8E150: using guessed type __int128 xmmword_140C8E150;
// 140C8E160: using guessed type __int128 xmmword_140C8E160;

