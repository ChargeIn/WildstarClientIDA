//----- (00000001402650F0) ----------------------------------------------------
__int64 __fastcall sub_1402650F0(__int64 a1, __m128* a2, int a3)
{
	__m128* v3; // r9
	_WORD* v4; // rcx
	__m128 v5; // xmm2
	__int64 result; // rax

	v3 = &a2[a3];
	if (a2 < v3)
	{
		v4 = (_WORD*)(a1 + 4);
		do
		{
			if (v4 != (_WORD*)4)
			{
				v5 = _mm_add_ps(
					(__m128)xmmword_140B7AC50,
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, *a2), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B626B0));
				*(v4 - 2) = (int)v5.m128_f32[0];
				*(v4 - 1) = (int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0];
				*v4 = (int)_mm_shuffle_ps(v5, v5, 170).m128_f32[0];
				result = (unsigned int)(int)_mm_shuffle_ps(v5, v5, 255).m128_f32[0];
				v4[1] = result;
			}
			++a2;
			v4 += 4;
		} while (a2 < v3);
	}
	return result;
}
// 140B626B0: using guessed type __int128 xmmword_140B626B0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

