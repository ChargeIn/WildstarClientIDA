//----- (0000000140264DA0) ----------------------------------------------------
__int16 __fastcall sub_140264DA0(_WORD* a1, __m128* a2, int a3)
{
	__m128* i; // r10
	__m128 v5; // xmm1
	__int16 result; // ax

	for (i = &a2[a3]; a2 < i; ++a1)
	{
		if (a1)
		{
			v5 = _mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a2), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7A840));
			result = (int)_mm_shuffle_ps(v5, v5, 170).m128_f32[0] & 0x1F;
			*a1 = result | (32
				* (((unsigned __int16)(int)v5.m128_f32[0] << 6) | (int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0] & 0x3F));
		}
		++a2;
	}
	return result;
}
// 140B7A840: using guessed type __int128 xmmword_140B7A840;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

