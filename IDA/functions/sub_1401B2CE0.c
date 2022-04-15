//----- (00000001401B2CE0) ----------------------------------------------------
__m128i* __fastcall sub_1401B2CE0(__m128i* a1, unsigned __int16* a2)
{
	__m128i si128; // xmm11
	__m128i v3; // xmm2
	__m128i v4; // xmm3
	__m128i v5; // xmm10
	__m128i v6; // xmm11
	__m128i v7; // xmm9
	__m128i v8; // xmm10
	__m128i v9; // xmm12
	__m128i v10; // xmm2
	__m128i v11; // xmm0
	__m128i v12; // xmm7
	__m128i v13; // xmm1
	__m128i v14; // xmm6
	__m128i v15; // xmm3
	__m128i v16; // xmm0
	__m128i v17; // xmm1
	__m128i v18; // xmm5
	__m128i v19; // xmm2
	__m128i v20; // xmm0
	__m128i v21; // xmm1
	__m128i v22; // xmm3
	__m128i v23; // xmm4
	__m128i v24; // xmm1
	__m128i v25; // xmm7
	__m128i* result; // rax

	si128 = _mm_load_si128((const __m128i*) & xmmword_140B7AA30);
	v3 = _mm_cvtsi32_si128(0);
	v4 = _mm_unpacklo_epi32(
		_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v3),
		_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), v3));
	v5 = _mm_andnot_si128(si128, v4);
	v6 = _mm_slli_epi32(_mm_and_si128(si128, v4), 0x10u);
	v7 = _mm_add_epi32(_mm_slli_epi32(v5, 0xDu), (__m128i)xmmword_140B7AB00);
	v8 = _mm_cmpeq_epi32(v5, (__m128i)0i64);
	v9 = _mm_andnot_si128(v8, _mm_cmpgt_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7AB20), v7));
	if (_mm_movemask_epi8(v9))
	{
		v10 = _mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7AA90), v7);
		v11 = _mm_slli_epi32(v10, 8u);
		v12 = _mm_load_si128((const __m128i*) & xmmword_140B7AAC0);
		v13 = _mm_cmpgt_epi32(v12, v11);
		v14 = _mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7A970), v13);
		v15 = _mm_or_si128(_mm_and_si128(v13, v11), _mm_andnot_si128(v13, v10));
		v16 = _mm_slli_epi32(v15, 4u);
		v17 = _mm_cmpgt_epi32(v12, v16);
		v18 = _mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7A960), v17);
		v19 = _mm_or_si128(_mm_and_si128(v17, v16), _mm_andnot_si128(v17, v15));
		v20 = _mm_slli_epi32(v19, 2u);
		v21 = _mm_cmpgt_epi32(v12, v20);
		v22 = _mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7A940), v21);
		v23 = _mm_or_si128(_mm_and_si128(v21, v20), _mm_andnot_si128(v21, v19));
		v24 = _mm_slli_epi32(v23, 1u);
		v25 = _mm_cmpgt_epi32(v12, v24);
		v7 = _mm_or_si128(
			_mm_and_si128(
				_mm_or_si128(
					_mm_slli_epi32(
						_mm_sub_epi32(
							_mm_sub_epi32(
								_mm_sub_epi32(_mm_sub_epi32(_mm_load_si128((const __m128i*) & xmmword_140B7A9D0), v14), v18),
								v22),
							_mm_and_si128(_mm_load_si128((const __m128i*) & xmmword_140B7A8F0), v25)),
						0x17u),
					_mm_and_si128(
						_mm_or_si128(_mm_and_si128(v25, v24), _mm_andnot_si128(v25, v23)),
						(__m128i)xmmword_140B7AA90)),
				v9),
			_mm_andnot_si128(v9, v7));
	}
	result = a1;
	*a1 = _mm_or_si128(_mm_andnot_si128(v8, v7), v6);
	return result;
}
// 140B7A8F0: using guessed type __int128 xmmword_140B7A8F0;
// 140B7A940: using guessed type __int128 xmmword_140B7A940;
// 140B7A960: using guessed type __int128 xmmword_140B7A960;
// 140B7A970: using guessed type __int128 xmmword_140B7A970;
// 140B7A9D0: using guessed type __int128 xmmword_140B7A9D0;
// 140B7AA30: using guessed type __int128 xmmword_140B7AA30;
// 140B7AA90: using guessed type __int128 xmmword_140B7AA90;
// 140B7AAC0: using guessed type __int128 xmmword_140B7AAC0;
// 140B7AB00: using guessed type __int128 xmmword_140B7AB00;
// 140B7AB20: using guessed type __int128 xmmword_140B7AB20;

