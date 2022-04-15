#include "../winhttp.h"

//----- (00000001409417E0) ----------------------------------------------------
__int64 sub_1409417E0()
{
	__m128* v0; // rax
	__int64 v1; // rcx
	__m128 v2; // xmm2

	qword_140C47700 = 0i64;
	dword_140C47708 = 0;
	qword_140C47710 = 0i64;
	v0 = stru_140C47680;
	v1 = 5i64;
	v2 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B680), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	for (xmmword_140C476F0 = (__int128)v2; ; v2 = (__m128)xmmword_140C476F0)
	{
		*v0++ = v2;
		if (!--v1)
			break;
	}
	return sub_1407DD89C(sub_140951990);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B680: using guessed type __int128 xmmword_140B7B680;
// 140C47680: using guessed type __m128 stru_140C47680[7];
// 140C476F0: using guessed type __int128 xmmword_140C476F0;
// 140C47700: using guessed type __int64 qword_140C47700;
// 140C47708: using guessed type int dword_140C47708;
// 140C47710: using guessed type __int64 qword_140C47710;

