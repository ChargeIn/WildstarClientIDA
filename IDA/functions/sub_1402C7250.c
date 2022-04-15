//----- (00000001402C7250) ----------------------------------------------------
void** __fastcall sub_1402C7250(const __m128i* a1, _DWORD* a2, _DWORD* a3)
{
	void** result; // rax
	__m128i si128; // xmm4
	__m128i v5; // xmm3
	__m128i v6; // xmm3
	__m128i v7; // xmm9
	__m128i v8; // xmm9
	__m128i v9; // xmm3
	__m128i v10; // xmm9
	__m128i v11; // xmm7
	__m128i v12; // xmm1
	__m128i v13; // xmm8
	__m128i v14; // xmm9
	__m128 v15; // xmm4
	__m128 v16; // xmm0
	__m128i v17; // xmm8
	__m128i v18; // xmm6
	__m128i v19; // xmm1
	__m128 v20; // xmm2
	__m128 v21; // xmm0
	__m128i v22; // xmm5
	__m128i v23; // xmm1
	__m128 v24; // xmm2
	__m128 v25; // xmm0
	__m128i v26; // xmm4
	__m128i v27; // xmm1
	__m128 v28; // xmm3
	__m128 v29; // xmm1
	__m128i v30; // xmm0
	__m128i v31; // xmm5
	__m128i v32; // xmm2
	__m128i v33; // xmm3
	__m128i v34; // xmm10
	__m128i v35; // xmm10
	__m128i v36; // xmm2
	__m128i v37; // xmm4
	__m128i v38; // xmm0
	void* retaddr; // [rsp+58h] [rbp+0h] BYREF

	result = &retaddr;
	si128 = _mm_load_si128(a1);
	v5 = _mm_min_epu8(_mm_min_epu8(_mm_min_epu8(si128, a1[1]), a1[2]), a1[3]);
	v6 = _mm_min_epu8(v5, _mm_shuffle_epi32(v5, 238));
	v7 = _mm_max_epu8(_mm_max_epu8(_mm_max_epu8(si128, a1[1]), a1[2]), a1[3]);
	v8 = _mm_max_epu8(v7, _mm_shuffle_epi32(v7, 238));
	v9 = _mm_unpacklo_epi8(_mm_min_epu8(v6, _mm_shufflelo_epi16(v6, 238)), (__m128i)0i64);
	v10 = _mm_unpacklo_epi8(_mm_max_epu8(v8, _mm_shufflelo_epi16(v8, 238)), (__m128i)0i64);
	v11 = _mm_shuffle_epi32(_mm_avg_epu16(_mm_slli_epi16(v9, 2u), _mm_slli_epi16(v10, 2u)), 68);
	v12 = _mm_unpacklo_epi8(si128, (__m128i)0i64);
	v13 = _mm_srli_epi16(_mm_sub_epi16(v10, v9), 4u);
	v14 = _mm_sub_epi16(v10, v13);
	v15 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpackhi_epi8(si128, (__m128i)0i64), 2u), v11);
	v16 = (__m128)_mm_sub_epi16(_mm_slli_epi16(v12, 2u), v11);
	v17 = _mm_add_epi16(v13, v9);
	v18 = _mm_madd_epi16(
		_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v16, v15, 136), 216), 216),
		_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v16, v15, 221), 136), 136));
	v19 = _mm_load_si128(a1 + 1);
	v20 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpackhi_epi8(v19, (__m128i)0i64), 2u), v11);
	v21 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpacklo_epi8(v19, (__m128i)0i64), 2u), v11);
	v22 = _mm_madd_epi16(
		_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v21, v20, 136), 216), 216),
		_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v21, v20, 221), 136), 136));
	v23 = _mm_load_si128(a1 + 2);
	v24 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpackhi_epi8(v23, (__m128i)0i64), 2u), v11);
	v25 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpacklo_epi8(v23, (__m128i)0i64), 2u), v11);
	v26 = _mm_madd_epi16(
		_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v25, v24, 136), 216), 216),
		_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v25, v24, 221), 136), 136));
	v27 = _mm_load_si128(a1 + 3);
	v28 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpackhi_epi8(v27, (__m128i)0i64), 2u), v11);
	v29 = (__m128)_mm_sub_epi16(_mm_slli_epi16(_mm_unpacklo_epi8(v27, (__m128i)0i64), 2u), v11);
	v30 = _mm_add_epi32(_mm_add_epi32((__m128i)0i64, v18), v22);
	v31 = _mm_load_si128((const __m128i*) & xmmword_140C58B20);
	v32 = _mm_add_epi32(
		_mm_madd_epi16(
			_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v29, v28, 136), 216), 216),
			_mm_shufflehi_epi16(_mm_shufflelo_epi16((__m128i)_mm_shuffle_ps(v29, v28, 221), 136), 136)),
		_mm_add_epi32(v30, v26));
	v33 = _mm_and_si128(v31, v17);
	v34 = _mm_cmpgt_epi32((__m128i)0i64, _mm_add_epi32(_mm_shuffle_epi32(v32, 78), v32));
	v35 = _mm_packs_epi32(v34, v34);
	v36 = _mm_and_si128(v31, v14);
	v37 = _mm_or_si128(_mm_or_si128(_mm_andnot_si128(v35, v33), _mm_and_si128(v36, v35)), _mm_andnot_si128(v31, v17));
	*a2 = _mm_cvtsi128_si32(_mm_packus_epi16(v37, v37));
	v38 = _mm_or_si128(_mm_or_si128(_mm_andnot_si128(v35, v36), _mm_and_si128(v33, v35)), _mm_andnot_si128(v31, v14));
	*a3 = _mm_cvtsi128_si32(_mm_packus_epi16(v38, v38));
	return result;
}
// 1402C7250: returning address of temporary local variable '%" r"'
// 140C58B20: using guessed type __int128 xmmword_140C58B20;

