#include "../winhttp.h"

//----- (00000001407B80B0) ----------------------------------------------------
__int64 __fastcall sub_1407B80B0(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm3
	__m128 v3; // xmm1
	__int64 v4; // rax
	__m128 v5; // xmm4
	__m128* i; // rcx
	__m128 v7; // xmm1

	if (!qword_140C7F878)
		return 1i64;
	v2 = *a2;
	v3 = _mm_mul_ps(v2, v2);
	if ((float)((float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0]) < *(float*)&dword_140C54B18)
		return 1i64;
	v4 = 0i64;
	v5 = _mm_mul_ps(
		a1[29],
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v2, v2, 85), a1[51]), _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), a1[50])),
			_mm_mul_ps(_mm_shuffle_ps(v2, v2, 170), a1[52])));
	if (!qword_140C7F878)
		return 1i64;
	for (i = (__m128*)qword_140C7F870; ; ++i)
	{
		v7 = _mm_mul_ps(*i, v5);
		if ((float)((float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
			+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]) < -0.0000099999997)
			break;
		if (++v4 >= (unsigned __int64)qword_140C7F878)
			return 1i64;
	}
	return 0i64;
}
// 140C54B18: using guessed type int dword_140C54B18;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;

