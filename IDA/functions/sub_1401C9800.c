//----- (00000001401C9800) ----------------------------------------------------
_WORD* __fastcall sub_1401C9800(_WORD* a1, __m128i* a2)
{
	__m128i si128; // xmm6
	__m128i v3; // xmm3
	__m128i v4; // xmm2
	__m128i v5; // xmm4
	__m128i v6; // xmm7
	__m128i v7; // xmm6
	__m128i v8; // xmm5
	__m128i v9; // xmm1
	__m128i v10; // xmm2
	__m128i v12; // [rsp+0h] [rbp-38h] BYREF

	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B530);
	v3 = _mm_andnot_si128(si128, *a2);
	v4 = _mm_cmpgt_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7AAE0), v3);
	v5 = _mm_cmpgt_epi32(v3, (__m128i)xmmword_140B7B4C0);
	v6 = _mm_andnot_si128(v4, _mm_cmpgt_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7AB10), v3));
	v7 = _mm_srli_epi32(_mm_and_si128(si128, *a2), 0x10u);
	v8 = _mm_add_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7B600), v3);
	if (_mm_movemask_epi8(v6))
	{
		v9 = _mm_sub_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7A9D0), _mm_srli_epi32(v3, 0x17u));
		v12 = _mm_or_si128(
			_mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7AA90), v3),
			(__m128i)xmmword_140B7AAA0);
		v12.m128i_i32[0] = (unsigned int)_mm_cvtsi128_si32(v12) >> _mm_cvtsi128_si32(v9);
		v12.m128i_i32[1] = (unsigned __int32)v12.m128i_i32[1] >> _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
		v12.m128i_i32[2] = (unsigned __int32)v12.m128i_i32[2] >> _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
		v8 = _mm_or_si128(_mm_and_si128(_mm_load_si128(&v12), v6), _mm_andnot_si128(v6, v8));
	}
	v10 = _mm_or_si128(
		_mm_andnot_si128(
			v4,
			_mm_or_si128(
				_mm_andnot_si128(
					v5,
					_mm_srli_epi32(_mm_add_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7AA10), v8), 0xDu)),
				_mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7AA20), v5))),
		v7);
	*a1 = _mm_extract_epi16(v10, 0);
	a1[1] = _mm_extract_epi16(v10, 2);
	a1[2] = _mm_extract_epi16(v10, 4);
	return a1;
}
// 140B7A9D0: using guessed type __int128 xmmword_140B7A9D0;
// 140B7AA10: using guessed type __int128 xmmword_140B7AA10;
// 140B7AA20: using guessed type __int128 xmmword_140B7AA20;
// 140B7AA90: using guessed type __int128 xmmword_140B7AA90;
// 140B7AAA0: using guessed type __int128 xmmword_140B7AAA0;
// 140B7AAE0: using guessed type __int128 xmmword_140B7AAE0;
// 140B7AB10: using guessed type __int128 xmmword_140B7AB10;
// 140B7B4C0: using guessed type __int128 xmmword_140B7B4C0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140B7B600: using guessed type __int128 xmmword_140B7B600;

