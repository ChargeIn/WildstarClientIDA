#include "../winhttp.h"

//----- (0000000140262160) ----------------------------------------------------
__int64 __fastcall sub_140262160(__int64 a1, __m128* a2)
{
	__m128* v4; // rax
	__m128i v5; // xmm1
	__m128i v6; // xmm1
	__m128 v8; // [rsp+30h] [rbp-18h]

	(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		a2[48].m128_u64[0],
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2120),
		0i64);
	v4 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		16i64,
		0i64);
	if (v4)
	{
		*v4 = _mm_mul_ps(a2[38], (__m128)xmmword_140B7B2F0);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 4i64, 5i64);
	v8 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	v8.m128_i32[3] = a2[46].m128_i32[1];
	v5 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, v8), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v6 = _mm_packus_epi16(v5, v5);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v6, v6)),
		*(_QWORD*)qword_140C65670,
		a1 + 1736,
		a1 + 1744,
		0i64,
		v8.m128_u64[0],
		v8.m128_u64[1]);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140262160: using guessed type __m128 var_18;

