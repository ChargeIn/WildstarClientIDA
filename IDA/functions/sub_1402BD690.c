//----- (00000001402BD690) ----------------------------------------------------
__int64 __fastcall sub_1402BD690(__m128i* a1, __m128i* a2)
{
	__m128i v2; // xmm3
	__m128i v3; // xmm5
	__m128i v4; // xmm1
	__m128i v5; // xmm7
	__m128i v6; // xmm4
	__m128i v7; // xmm2
	__m128i v8; // xmm3
	__m128i v9; // xmm3
	__m128i v10; // xmm5
	__m128i v11; // xmm1
	__m128i v12; // xmm7
	__m128i v13; // xmm4
	__m128i v14; // xmm6
	__m128i v15; // xmm3
	__m128i v16; // xmm3
	__m128i v17; // xmm5
	__m128i v18; // xmm1
	__m128i v19; // xmm7
	__m128i v20; // xmm4
	__m128i v21; // xmm6
	__m128i v22; // xmm3
	__m128i v23; // xmm0
	__m128i v24; // xmm1
	__m128i v25; // xmm4
	__m128i v26; // xmm8
	__m128i v27; // xmm1
	__m128i v28; // xmm7
	__m128i si128; // xmm5
	__m128i v30; // xmm9
	__m128i v31; // xmm3
	__m128i v32; // xmm4
	__m128i v33; // xmm2
	__m128i v34; // xmm6
	__m128i v35; // xmm10
	__m128i v36; // xmm5
	__m128i v37; // xmm2
	__m128i v38; // xmm10
	__m128i v39; // xmm3
	__m128i v40; // xmm9
	__m128i v41; // xmm3
	__m128i v42; // xmm5
	__m128i v43; // xmm3
	__m128i v44; // xmm0
	__m128i v45; // xmm2
	__m128i v46; // xmm3
	__m128i v47; // xmm8
	__m128i v48; // xmm7
	__m128i v49; // xmm4
	__m128i v50; // xmm5
	__m128i v51; // xmm2
	__m128i v52; // xmm6
	__m128i v53; // xmm4
	__m128i v54; // xmm3
	__m128i v55; // xmm2
	__m128i v56; // xmm5
	__int64 result; // rax

	v2 = _mm_shufflelo_epi16(a2[2], 216);
	v3 = _mm_shufflelo_epi16(_mm_shufflehi_epi16(a2[3], 216), 216);
	v4 = _mm_shufflehi_epi16(v2, 216);
	v5 = _mm_add_epi32(
		_mm_add_epi32(_mm_madd_epi16(_mm_shuffle_epi32(v2, 0), (__m128i)xmmword_140AED5E0), (__m128i)xmmword_140C79B80),
		_mm_madd_epi16(_mm_shuffle_epi32(v4, 170), (__m128i)xmmword_140AED5F0));
	v6 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v4, 255), (__m128i)xmmword_140AED610),
		_mm_madd_epi16(_mm_shuffle_epi32(v2, 85), (__m128i)xmmword_140AED600));
	v7 = _mm_add_epi32(
		_mm_add_epi32(_mm_madd_epi16(_mm_shuffle_epi32(v3, 0), (__m128i)xmmword_140AED620), (__m128i)xmmword_140C79B80),
		_mm_madd_epi16(_mm_shuffle_epi32(v3, 170), (__m128i)xmmword_140AED630));
	v8 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v3, 255), (__m128i)xmmword_140AED650),
		_mm_madd_epi16(_mm_shuffle_epi32(v3, 85), (__m128i)xmmword_140AED640));
	a1[2] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v5, v6), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v5, v6), 0xCu), 27));
	a1[3] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v7, v8), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v7, v8), 0xCu), 27));
	v9 = _mm_shufflelo_epi16(a2[4], 216);
	v10 = _mm_shufflelo_epi16(_mm_shufflehi_epi16(a2[5], 216), 216);
	v11 = _mm_shufflehi_epi16(v9, 216);
	v12 = _mm_add_epi32(
		_mm_add_epi32(
			_mm_madd_epi16(_mm_shuffle_epi32(v9, 0), (__m128i)xmmword_140AED560),
			(__m128i)xmmword_140C79B80),
		_mm_madd_epi16(_mm_shuffle_epi32(v11, 170), (__m128i)xmmword_140AED570));
	v13 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v11, 255), (__m128i)xmmword_140AED590),
		_mm_madd_epi16(_mm_shuffle_epi32(v9, 85), (__m128i)xmmword_140AED580));
	v14 = _mm_add_epi32(
		_mm_add_epi32(
			_mm_madd_epi16(_mm_shuffle_epi32(v10, 0), (__m128i)xmmword_140AED620),
			(__m128i)xmmword_140C79B80),
		_mm_madd_epi16(_mm_shuffle_epi32(v10, 170), (__m128i)xmmword_140AED630));
	v15 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v10, 255), (__m128i)xmmword_140AED650),
		_mm_madd_epi16(_mm_shuffle_epi32(v10, 85), (__m128i)xmmword_140AED640));
	a1[4] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v12, v13), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v12, v13), 0xCu), 27));
	a1[5] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v14, v15), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v14, v15), 0xCu), 27));
	v16 = _mm_shufflelo_epi16(*a2, 216);
	v17 = _mm_shufflelo_epi16(_mm_shufflehi_epi16(a2[1], 216), 216);
	v18 = _mm_shufflehi_epi16(v16, 216);
	v19 = _mm_add_epi32(
		_mm_add_epi32(
			_mm_madd_epi16(_mm_shuffle_epi32(v16, 0), (__m128i)xmmword_140AED560),
			(__m128i)xmmword_140C79B80),
		_mm_madd_epi16(_mm_shuffle_epi32(v18, 170), (__m128i)xmmword_140AED570));
	v20 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v18, 255), (__m128i)xmmword_140AED590),
		_mm_madd_epi16(_mm_shuffle_epi32(v16, 85), (__m128i)xmmword_140AED580));
	v21 = _mm_add_epi32(
		_mm_add_epi32(
			_mm_madd_epi16(_mm_shuffle_epi32(v17, 0), (__m128i)xmmword_140AED5A0),
			(__m128i)xmmword_140C79B80),
		_mm_madd_epi16(_mm_shuffle_epi32(v17, 170), (__m128i)xmmword_140AED5B0));
	v22 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v17, 255), (__m128i)xmmword_140AED5D0),
		_mm_madd_epi16(_mm_shuffle_epi32(v17, 85), (__m128i)xmmword_140AED5C0));
	*a1 = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v19, v20), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v19, v20), 0xCu), 27));
	a1[1] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v21, v22), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v21, v22), 0xCu), 27));
	v23 = _mm_shufflelo_epi16(a2[6], 216);
	v24 = _mm_shufflehi_epi16(v23, 216);
	v25 = _mm_shufflelo_epi16(_mm_shufflehi_epi16(a2[7], 216), 216);
	v26 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v24, 170), (__m128i)xmmword_140AED5F0),
		_mm_add_epi32(
			_mm_madd_epi16(_mm_shuffle_epi32(v23, 0), (__m128i)xmmword_140AED5E0),
			(__m128i)xmmword_140C79B80));
	v27 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v24, 255), (__m128i)xmmword_140AED610),
		_mm_madd_epi16(_mm_shuffle_epi32(v23, 85), (__m128i)xmmword_140AED600));
	v28 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v25, 170), (__m128i)xmmword_140AED5B0),
		_mm_add_epi32(
			_mm_madd_epi16(_mm_shuffle_epi32(v25, 0), (__m128i)xmmword_140AED5A0),
			(__m128i)xmmword_140C79B80));
	si128 = _mm_load_si128(a1 + 5);
	v30 = _mm_load_si128(a1 + 1);
	v31 = _mm_add_epi32(
		_mm_madd_epi16(_mm_shuffle_epi32(v25, 255), (__m128i)xmmword_140AED5D0),
		_mm_madd_epi16(_mm_shuffle_epi32(v25, 85), (__m128i)xmmword_140AED5C0));
	a1[6] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v26, v27), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v26, v27), 0xCu), 27));
	a1[7] = _mm_packs_epi32(
		_mm_srai_epi32(_mm_add_epi32(v28, v31), 0xCu),
		_mm_shuffle_epi32(_mm_srai_epi32(_mm_sub_epi32(v28, v31), 0xCu), 27));
	v32 = _mm_load_si128((const __m128i*) & xmmword_140C79B70);
	v33 = _mm_load_si128(a1 + 3);
	v34 = _mm_add_epi16(_mm_add_epi16(_mm_mulhi_epi16(si128, (__m128i)xmmword_140C79BD0), si128), v33);
	v35 = _mm_add_epi16(_mm_mulhi_epi16(_mm_load_si128(a1 + 7), (__m128i)xmmword_140C79BB0), v30);
	v36 = _mm_sub_epi16(si128, _mm_add_epi16(_mm_mulhi_epi16(v33, (__m128i)xmmword_140C79BD0), v33));
	v37 = _mm_sub_epi16(v35, v34);
	v38 = _mm_add_epi16(_mm_add_epi16(v35, v34), v32);
	v39 = _mm_sub_epi16(_mm_mulhi_epi16(v30, (__m128i)xmmword_140C79BB0), a1[7]);
	v40 = _mm_add_epi16(v39, v36);
	v41 = _mm_sub_epi16(v39, v36);
	v42 = _mm_load_si128(a1);
	v43 = _mm_add_epi16(v41, v32);
	v44 = _mm_add_epi16(v37, v43);
	v45 = _mm_sub_epi16(v37, v43);
	v46 = _mm_load_si128(a1 + 2);
	v47 = _mm_or_si128(_mm_add_epi16(_mm_mulhi_epi16(v44, (__m128i)xmmword_140C79BE0), v44), v32);
	v48 = _mm_or_si128(_mm_add_epi16(_mm_mulhi_epi16(v45, (__m128i)xmmword_140C79BE0), v45), v32);
	v49 = _mm_add_epi16(v42, a1[4]);
	v50 = _mm_sub_epi16(v42, a1[4]);
	v51 = _mm_add_epi16(_mm_mulhi_epi16(_mm_load_si128(a1 + 6), (__m128i)xmmword_140C79BC0), v46);
	v52 = _mm_add_epi16(_mm_add_epi16(v49, v51), (__m128i)xmmword_140C79B90);
	v53 = _mm_add_epi16(_mm_sub_epi16(v49, v51), (__m128i)xmmword_140C79BA0);
	v54 = _mm_sub_epi16(_mm_mulhi_epi16(v46, (__m128i)xmmword_140C79BC0), a1[6]);
	v55 = _mm_add_epi16(_mm_add_epi16(v50, v54), (__m128i)xmmword_140C79B90);
	v56 = _mm_add_epi16(_mm_sub_epi16(v50, v54), (__m128i)xmmword_140C79BA0);
	*a1 = _mm_srai_epi16(_mm_add_epi16(v52, v38), 5u);
	a1[1] = _mm_srai_epi16(_mm_add_epi16(v47, v55), 5u);
	a1[2] = _mm_srai_epi16(_mm_add_epi16(v48, v56), 5u);
	result = 0i64;
	a1[7] = _mm_srai_epi16(_mm_sub_epi16(v52, v38), 5u);
	a1[3] = _mm_srai_epi16(_mm_add_epi16(v53, v40), 5u);
	a1[4] = _mm_srai_epi16(_mm_sub_epi16(v53, v40), 5u);
	a1[5] = _mm_srai_epi16(_mm_sub_epi16(v56, v48), 5u);
	a1[6] = _mm_srai_epi16(_mm_sub_epi16(v55, v47), 5u);
	return result;
}
// 140AED560: using guessed type __int128 xmmword_140AED560;
// 140AED570: using guessed type __int128 xmmword_140AED570;
// 140AED580: using guessed type __int128 xmmword_140AED580;
// 140AED590: using guessed type __int128 xmmword_140AED590;
// 140AED5A0: using guessed type __int128 xmmword_140AED5A0;
// 140AED5B0: using guessed type __int128 xmmword_140AED5B0;
// 140AED5C0: using guessed type __int128 xmmword_140AED5C0;
// 140AED5D0: using guessed type __int128 xmmword_140AED5D0;
// 140AED5E0: using guessed type __int128 xmmword_140AED5E0;
// 140AED5F0: using guessed type __int128 xmmword_140AED5F0;
// 140AED600: using guessed type __int128 xmmword_140AED600;
// 140AED610: using guessed type __int128 xmmword_140AED610;
// 140AED620: using guessed type __int128 xmmword_140AED620;
// 140AED630: using guessed type __int128 xmmword_140AED630;
// 140AED640: using guessed type __int128 xmmword_140AED640;
// 140AED650: using guessed type __int128 xmmword_140AED650;
// 140C79B70: using guessed type __int128 xmmword_140C79B70;
// 140C79B80: using guessed type __int128 xmmword_140C79B80;
// 140C79B90: using guessed type __int128 xmmword_140C79B90;
// 140C79BA0: using guessed type __int128 xmmword_140C79BA0;
// 140C79BB0: using guessed type __int128 xmmword_140C79BB0;
// 140C79BC0: using guessed type __int128 xmmword_140C79BC0;
// 140C79BD0: using guessed type __int128 xmmword_140C79BD0;
// 140C79BE0: using guessed type __int128 xmmword_140C79BE0;

