//----- (00000001402C77D0) ----------------------------------------------------
__int64 __fastcall sub_1402C77D0(const __m128i* a1, __int64* a2, unsigned __int8 a3, unsigned __int8 a4)
{
	__m128i si128; // xmm4
	__m128i v5; // xmm10
	__m128i v6; // xmm5
	__m128i v7; // xmm3
	__m128i v8; // xmm1
	__m128i v9; // xmm6
	__m128i v10; // xmm0
	__m128i v11; // xmm2
	__m128i v12; // xmm5
	__m128i v13; // xmm6
	__m128i v14; // xmm8
	__m128i v15; // xmm1
	__m128i v16; // xmm4
	__m128i v17; // xmm9
	__m128i v18; // xmm7
	__m128i v19; // xmm1
	__m128i v20; // xmm0
	__m128i v21; // xmm2
	__m128i v22; // xmm3
	__m128i v23; // xmm9
	__m128i v24; // xmm0
	_DWORD* v25; // rcx
	__m128i v26; // xmm9
	__m128i v27; // xmm3
	__int64 result; // rax
	__m128i v29; // xmm9
	__m128i v30; // xmm3
	__m128i v31; // xmm2

	si128 = _mm_load_si128((const __m128i*) & xmmword_140C385D0);
	v5 = _mm_packus_epi16(
		_mm_packus_epi16(_mm_srli_epi32(_mm_load_si128(a1), 0x18u), _mm_srli_epi32(_mm_load_si128(a1 + 1), 0x18u)),
		_mm_packus_epi16(_mm_srli_epi32(_mm_load_si128(a1 + 2), 0x18u), _mm_srli_epi32(_mm_load_si128(a1 + 3), 0x18u)));
	v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a4), 0), 0);
	v7 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a3), 0), 0);
	v8 = _mm_load_si128((const __m128i*) & xmmword_140C385C0);
	v9 = _mm_sub_epi16(v6, v7);
	v10 = _mm_mullo_epi16(si128, v6);
	v11 = _mm_mullo_epi16(v8, v6);
	v12 = _mm_load_si128((const __m128i*) & xmmword_140C385A0);
	v13 = _mm_mulhi_epi16(v9, (__m128i)xmmword_140C385E0);
	v14 = _mm_add_epi16(v13, v7);
	v15 = _mm_add_epi16(_mm_mulhi_epi16(_mm_add_epi16(_mm_mullo_epi16(v8, v7), v10), (__m128i)xmmword_140C385F0), v13);
	v16 = _mm_add_epi16(_mm_mulhi_epi16(_mm_add_epi16(_mm_mullo_epi16(si128, v7), v11), (__m128i)xmmword_140C385F0), v13);
	v17 = _mm_shuffle_epi32(v15, 0);
	v18 = _mm_shuffle_epi32(v15, 85);
	v19 = _mm_shuffle_epi32(v15, 170);
	v20 = _mm_shuffle_epi32(v16, 170);
	v21 = _mm_shuffle_epi32(v16, 85);
	v22 = _mm_shuffle_epi32(v16, 0);
	v23 = _mm_adds_epu8(
		_mm_adds_epu8(
			_mm_adds_epu8(
				_mm_adds_epu8(
					_mm_adds_epu8(
						_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v17, v17), v5), v5), v12),
						_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v14, v14), v5), v5), v12)),
					_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v18, v18), v5), v5), v12)),
				_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v19, v19), v5), v5), v12)),
			_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v20, v20), v5), v5), v12)),
		_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v21, v21), v5), v5), v12));
	v24 = _mm_load_si128((const __m128i*) & xmmword_140C385B0);
	v25 = (_DWORD*)*a2;
	v26 = _mm_adds_epu8(v23, _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(_mm_packus_epi16(v22, v22), v5), v5), v12));
	v27 = _mm_load_si128((const __m128i*) & xmmword_140C38590);
	result = *a2 + 6;
	*a2 = result;
	v29 = _mm_and_si128(_mm_adds_epu8(v26, v12), (__m128i)xmmword_140C38580);
	v30 = _mm_xor_si128(_mm_and_si128(_mm_cmpgt_epi8(v27, v29), v12), v29);
	v31 = _mm_or_si128(
		_mm_or_si128(
			_mm_or_si128(
				_mm_or_si128(
					_mm_or_si128(
						_mm_or_si128(
							_mm_or_si128(
								_mm_and_si128(_mm_srli_epi64(v30, 5u), (__m128i)xmmword_140C38560),
								_mm_and_si128(v24, v30)),
							_mm_and_si128(_mm_srli_epi64(v30, 0xAu), (__m128i)xmmword_140C38550)),
						_mm_and_si128(_mm_srli_epi64(v30, 0xFu), (__m128i)xmmword_140C38540)),
					_mm_and_si128(_mm_srli_epi64(v30, 0x14u), (__m128i)xmmword_140C38530)),
				_mm_and_si128(_mm_srli_epi64(v30, 0x19u), (__m128i)xmmword_140C38520)),
			_mm_and_si128(_mm_srli_epi64(v30, 0x1Eu), (__m128i)xmmword_140C38510)),
		_mm_and_si128(_mm_srli_epi64(v30, 0x23u), (__m128i)xmmword_140C38500));
	*v25 = _mm_cvtsi128_si32(v31);
	*(_DWORD*)((char*)v25 + 3) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v31, 78));
	return result;
}
// 140C38500: using guessed type __int128 xmmword_140C38500;
// 140C38510: using guessed type __int128 xmmword_140C38510;
// 140C38520: using guessed type __int128 xmmword_140C38520;
// 140C38530: using guessed type __int128 xmmword_140C38530;
// 140C38540: using guessed type __int128 xmmword_140C38540;
// 140C38550: using guessed type __int128 xmmword_140C38550;
// 140C38560: using guessed type __int128 xmmword_140C38560;
// 140C38580: using guessed type __int128 xmmword_140C38580;
// 140C38590: using guessed type __int128 xmmword_140C38590;
// 140C385A0: using guessed type __int128 xmmword_140C385A0;
// 140C385B0: using guessed type __int128 xmmword_140C385B0;
// 140C385C0: using guessed type __int128 xmmword_140C385C0;
// 140C385D0: using guessed type __int128 xmmword_140C385D0;
// 140C385E0: using guessed type __int128 xmmword_140C385E0;
// 140C385F0: using guessed type __int128 xmmword_140C385F0;

