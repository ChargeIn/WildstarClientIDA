#include "../winhttp.h"

//----- (00000001402C74E0) ----------------------------------------------------
__int64 __fastcall sub_1402C74E0(__int64 a1, __int64* a2, unsigned int* a3, unsigned int* a4)
{
	__int64 v4; // rcx
	__m128i v5; // xmm8
	__m128i v6; // xmm0
	__m128i v7; // xmm1
	__int64 v8; // rax
	__m128i si128; // xmm13
	__m128i v10; // xmm3
	__m128i v11; // xmm14
	__m128i v12; // xmm15
	__m128i v13; // xmm2
	__m128i v14; // xmm9
	__m128i v15; // xmm12
	__m128i v16; // xmm11
	__m128i v17; // xmm10
	__m128i v18; // xmm0
	__m128i v19; // xmm7
	__m128i v20; // xmm0
	__m128i v21; // xmm3
	__m128i v22; // xmm2
	__m128i v23; // xmm5
	__m128i v24; // xmm4
	__m128i v25; // xmm6
	__m128i v26; // xmm7
	__m128i v27; // xmm0
	__m128i v28; // xmm2
	_DWORD* v29; // rcx
	__int64 result; // rax

	v4 = a1 + 48;
	v5 = 0i64;
	v6 = _mm_unpacklo_epi8(_mm_and_si128(_mm_cvtsi32_si128(*a4), (__m128i)xmmword_140C38570), (__m128i)0i64);
	v7 = _mm_unpacklo_epi8(_mm_and_si128(_mm_cvtsi32_si128(*a3), (__m128i)xmmword_140C38570), (__m128i)0i64);
	v8 = 2i64;
	si128 = _mm_load_si128(xmmword_140C657D0);
	v10 = _mm_or_si128(
		_mm_or_si128(_mm_srli_epi16(_mm_shufflelo_epi16(v6, 236), 5u), v6),
		_mm_srli_epi16(_mm_shufflelo_epi16(v6, 247), 6u));
	v11 = _mm_load_si128((const __m128i*) & xmmword_140C38610);
	v12 = _mm_load_si128((const __m128i*) & xmmword_140C38620);
	v13 = _mm_or_si128(
		_mm_or_si128(_mm_srli_epi16(_mm_shufflelo_epi16(v7, 236), 5u), v7),
		_mm_srli_epi16(_mm_shufflelo_epi16(v7, 247), 6u));
	v14 = _mm_shuffle_epi32(
		_mm_packus_epi16(
			_mm_mulhi_epi16(_mm_add_epi16(_mm_add_epi16(v13, v13), v10), (__m128i)xmmword_140C38600),
			(__m128i)0i64),
		68);
	v15 = _mm_shuffle_epi32(_mm_packus_epi16(v10, (__m128i)0i64), 68);
	v16 = _mm_shuffle_epi32(_mm_packus_epi16(v13, (__m128i)0i64), 68);
	v17 = _mm_shuffle_epi32(
		_mm_packus_epi16(
			_mm_mulhi_epi16(_mm_add_epi16(_mm_add_epi16(v10, v10), v13), (__m128i)xmmword_140C38600),
			(__m128i)0i64),
		68);
	do
	{
		v18 = _mm_loadl_epi64((const __m128i*)(v4 - 16));
		v4 -= 32i64;
		v19 = _mm_shuffle_epi32(v18, 216);
		v20 = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i*)(v4 + 24)), 216);
		v21 = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i*)(v4 + 32)), 216);
		v22 = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i*)(v4 + 40)), 216);
		v23 = _mm_packs_epi32(
			_mm_packs_epi32(_mm_sad_epu8(v19, v15), _mm_sad_epu8(v20, v15)),
			_mm_packs_epi32(_mm_sad_epu8(v21, v15), _mm_sad_epu8(v22, v15)));
		v24 = _mm_packs_epi32(
			_mm_packs_epi32(_mm_sad_epu8(v19, v16), _mm_sad_epu8(v20, v16)),
			_mm_packs_epi32(_mm_sad_epu8(v21, v16), _mm_sad_epu8(v22, v16)));
		v25 = _mm_packs_epi32(
			_mm_packs_epi32(_mm_sad_epu8(v19, v17), _mm_sad_epu8(v20, v17)),
			_mm_packs_epi32(_mm_sad_epu8(v21, v17), _mm_sad_epu8(v22, v17)));
		v26 = _mm_packs_epi32(
			_mm_packs_epi32(_mm_sad_epu8(v19, v14), _mm_sad_epu8(v20, v14)),
			_mm_packs_epi32(_mm_sad_epu8(v21, v14), _mm_sad_epu8(v22, v14)));
		v27 = _mm_cmpgt_epi16(v23, v26);
		v28 = _mm_or_si128(
			_mm_and_si128(
				_mm_or_si128(
					_mm_and_si128(_mm_cmpgt_epi16(v24, v25), _mm_cmpgt_epi16(v23, v25)),
					_mm_and_si128(_mm_cmpgt_epi16(v24, v26), v27)),
				v11),
			_mm_and_si128(_mm_and_si128(_mm_cmpgt_epi16(v25, v26), v27), v12));
		v5 = _mm_or_si128(
			_mm_or_si128(
				_mm_slli_epi32(_mm_unpacklo_epi16(_mm_shuffle_epi32(v28, 78), si128), 8u),
				_mm_slli_epi32(v5, 0x10u)),
			_mm_unpacklo_epi16(v28, si128));
		--v8;
	} while (v8);
	v29 = (_DWORD*)*a2;
	result = *a2 + 4;
	*a2 = result;
	*v29 = _mm_cvtsi128_si32(
		_mm_or_si128(
			_mm_or_si128(
				_mm_or_si128(_mm_slli_epi32(_mm_shuffle_epi32(v5, 57), 2u), v5),
				_mm_slli_epi32(_mm_shuffle_epi32(v5, 78), 4u)),
			_mm_slli_epi32(_mm_shuffle_epi32(v5, 147), 6u)));
	return result;
}
// 140C38570: using guessed type __int128 xmmword_140C38570;
// 140C38600: using guessed type __int128 xmmword_140C38600;
// 140C38610: using guessed type __int128 xmmword_140C38610;
// 140C38620: using guessed type __int128 xmmword_140C38620;
// 140C657D0: using guessed type __m128i xmmword_140C657D0[2];

