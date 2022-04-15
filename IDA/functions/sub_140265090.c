#include "../winhttp.h"

//----- (0000000140265090) ----------------------------------------------------
__int64 __fastcall sub_140265090(_WORD* a1, __m128* a2, int a3)
{
	__m128* i; // r9
	__m128 v4; // xmm1
	__int64 result; // rax

	for (i = &a2[a3]; a2 < i; a1 += 2)
	{
		if (a1)
		{
			v4 = _mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a2), (__m128)xmmword_140B7B240), (__m128)xmmword_140B626B0));
			*a1 = (int)v4.m128_f32[0];
			result = (unsigned int)(int)_mm_shuffle_ps(v4, v4, 85).m128_f32[0];
			a1[1] = result;
		}
		++a2;
	}
	return result;
}
// 140B626B0: using guessed type __int128 xmmword_140B626B0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

