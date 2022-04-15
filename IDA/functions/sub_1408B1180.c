#include "../winhttp.h"

//----- (00000001408B1180) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408B1180(__m128* a1, int a2)
{
	__m128* v2; // r8
	unsigned __int64 result; // rax
	__m128 v4; // xmm3
	__m128 v5; // xmm2
	__m128 v6; // xmm0
	__m128 v7; // xmm2
	__m128 v8; // xmm1

	v2 = a1;
	result = (unsigned __int64)a1->m128_u64 + 4 * (unsigned int)(2 * a2);
	if ((unsigned __int64)a1 < result)
	{
		do
		{
			v4 = *v2++;
			v5 = _mm_xor_ps(_mm_shuffle_ps(v4, v4, 245), (__m128)xmmword_140B7B530);
			v6 = _mm_cmple_ps((__m128)xmmword_140B7B530, _mm_sub_ps(v5, (__m128)xmmword_1409AA000));
			v7 = _mm_add_ps(
				v5,
				_mm_or_ps(_mm_and_ps(v6, (__m128)xmmword_1409AA010), _mm_andnot_ps(v6, (__m128)xmmword_1409AA000)));
			v8 = _mm_mul_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_andnot_ps((__m128)xmmword_140B7B530, v7), (__m128)xmmword_1409AA070),
					(__m128)xmmword_1409AA050),
				v7);
			v2[-1] = _mm_mul_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_sub_ps(_mm_mul_ps(_mm_andnot_ps((__m128)xmmword_140B7B530, v8), v8), v8),
						(__m128)xmmword_1409AA030),
					v8),
				_mm_shuffle_ps(v4, v4, 160));
		} while ((unsigned __int64)v2 < result);
	}
	return result;
}
// 1409AA000: using guessed type __int128 xmmword_1409AA000;
// 1409AA010: using guessed type __int128 xmmword_1409AA010;
// 1409AA030: using guessed type __int128 xmmword_1409AA030;
// 1409AA050: using guessed type __int128 xmmword_1409AA050;
// 1409AA070: using guessed type __int128 xmmword_1409AA070;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

