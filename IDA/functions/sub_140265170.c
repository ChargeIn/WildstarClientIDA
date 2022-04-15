//----- (0000000140265170) ----------------------------------------------------
__int64 __fastcall sub_140265170(_BYTE* a1, __m128* a2, int a3)
{
	__m128* i; // r10
	__m128 v5; // xmm2
	int v6; // ecx
	float v7; // xmm1_4
	int v8; // ecx
	__int64 result; // rax

	for (i = &a2[a3]; a2 < i; a1 += 2)
	{
		if (a1)
		{
			v5 = _mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_max_ps((__m128)xmmword_140B7B5B0, _mm_min_ps(*a2, (__m128)xmmword_140B7B240)),
					(__m128)xmmword_140B626A0));
			v6 = (int)v5.m128_f32[0];
			if ((int)v5.m128_f32[0] != 0x80000000 && (float)v6 != v5.m128_f32[0])
				v5.m128_f32[0] = (float)(v6 - (_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1));
			v7 = v5.m128_f32[1];
			v8 = (int)v5.m128_f32[1];
			*a1 = (int)v5.m128_f32[0];
			if ((int)v5.m128_f32[1] != 0x80000000 && (float)v8 != v5.m128_f32[1])
				v7 = (float)(v8 - (_mm_movemask_ps(_mm_unpacklo_ps((__m128)v5.m128_u32[1], (__m128)v5.m128_u32[1])) & 1));
			result = (unsigned int)(int)v7;
			a1[1] = result;
		}
		++a2;
	}
	return result;
}
// 140B626A0: using guessed type __int128 xmmword_140B626A0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B5B0: using guessed type __int128 xmmword_140B7B5B0;

