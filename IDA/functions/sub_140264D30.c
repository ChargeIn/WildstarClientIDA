//----- (0000000140264D30) ----------------------------------------------------
__int64 __fastcall sub_140264D30(__int64 a1, __m128* a2, int a3)
{
	__m128* v3; // r9
	_BYTE* v4; // rcx
	__m128 v5; // xmm0
	__m128 v6; // xmm1
	__int64 result; // rax

	v3 = &a2[a3];
	if (a2 < v3)
	{
		v4 = (_BYTE*)(a1 + 1);
		do
		{
			if (v4 != (_BYTE*)1)
			{
				v5 = _mm_max_ps((__m128)0i64, *a2);
				v4[2] = -1;
				v6 = _mm_add_ps(
					(__m128)xmmword_140B7AC50,
					_mm_mul_ps(_mm_min_ps(v5, (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470));
				v4[1] = (int)v6.m128_f32[0];
				*v4 = (int)_mm_shuffle_ps(v6, v6, 85).m128_f32[0];
				result = (unsigned int)(int)_mm_shuffle_ps(v6, v6, 170).m128_f32[0];
				*(v4 - 1) = result;
			}
			++a2;
			v4 += 4;
		} while (a2 < v3);
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

