//----- (00000001402DCBE0) ----------------------------------------------------
__int64 __fastcall sub_1402DCBE0(__int64 a1, unsigned int* a2, __m128* a3)
{
	float v7; // xmm4_4
	int v8; // ecx
	__m128i v9; // xmm2
	__m128 v10; // xmm1
	__m128 v11; // xmm1
	__int64 v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]

	if (*a2 >= 0x80 || a2[1] >= 0x80 || !a3)
		return 2147942487i64;
	v7 = *(float*)&dword_140C41D6C;
	a3->m128_i32[0] = *a2;
	a3->m128_i32[1] = a2[1];
	v8 = 16 * *a2;
	v9 = _mm_cvtsi32_si128(0);
	a3->m128_i32[2] = v8;
	a3->m128_i32[3] = 16 * a2[1];
	a3[1].m128_i32[0] = v8 + 16;
	a3[1].m128_i32[1] = a3->m128_i32[3] + 16;
	v10 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_div_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v9),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), v9))),
				(__m128)xmmword_140B7B460),
			(__m128)xmmword_140B7AC50),
		(__m128)xmmword_140B7B4B0);
	a3[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, _mm_shuffle_ps(v10, v10, 85)), (__m128)0i64);
	a3[2].m128_f32[1] = -v7;
	v11 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_div_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2 + (unsigned int)qword_140C77768), v9),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1] + HIDWORD(qword_140C77768)), v9))),
				(__m128)xmmword_140B7B460),
			(__m128)xmmword_140B7AC50),
		(__m128)xmmword_140B7B4B0);
	a3[3] = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, _mm_shuffle_ps(v11, v11, 85)), (__m128)0i64);
	a3[3].m128_f32[1] = v7;
	sub_14001B370(&a3[4], 260i64, L"%s\\%s.%0.2x%0.2x.tex", a1 + 16, a1 + 536, a2[1], *a2);
	LODWORD(v13) = *a2;
	LODWORD(v12) = a2[1];
	sub_14001B370(&a3[36].m128_i8[8], 260i64, L"%s\\%s.%0.2x%0.2x.area", a1 + 16, a1 + 536, v12, v13);
	return 0i64;
}
// 1402DCD91: variable 'v12' is possibly undefined
// 1402DCD91: variable 'v13' is possibly undefined
// 140AF0E78: using guessed type wchar_t aSS02x02xTex[21];
// 140AF0EA8: using guessed type wchar_t aSS02x02xArea[22];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B460: using guessed type __int128 xmmword_140B7B460;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41D6C: using guessed type int dword_140C41D6C;
// 140C77768: using guessed type __int64 qword_140C77768;

