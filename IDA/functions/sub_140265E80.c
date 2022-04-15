//----- (0000000140265E80) ----------------------------------------------------
__int64 __fastcall sub_140265E80(_DWORD* a1, __m128* a2, int a3)
{
	__m128* i; // r10
	__m128 v5; // xmm2
	__int64 result; // rax

	for (i = &a2[a3]; a2 < i; ++a1)
	{
		if (a1)
		{
			v5 = _mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a2), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B330));
			result = (int)v5.m128_f32[0] & 0x3FF;
			*a1 = result | (((int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0] & 0x3FF | ((((int)_mm_shuffle_ps(v5, v5, 255).m128_f32[0] << 10) | (int)_mm_shuffle_ps(v5, v5, 170).m128_f32[0] & 0x3FF) << 10)) << 10);
		}
		++a2;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B330: using guessed type __int128 xmmword_140B7B330;

