#include "../winhttp.h"

//----- (00000001409413B0) ----------------------------------------------------
__int64 sub_1409413B0()
{
	__m128* v0; // rax
	__int64 v1; // rcx
	__m128 v2; // xmm2

	qword_140C46E50 = 0i64;
	dword_140C46E58 = 0;
	qword_140C46E60 = 0i64;
	v0 = (__m128*) & unk_140C46DD0;
	v1 = 5i64;
	v2 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6D0), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	for (xmmword_140C46E40 = (__int128)v2; ; v2 = (__m128)xmmword_140C46E40)
	{
		*v0++ = v2;
		if (!--v1)
			break;
	}
	return sub_1407DD89C(sub_1409514D0);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6D0: using guessed type __int128 xmmword_140B7B6D0;
// 140C46E40: using guessed type __int128 xmmword_140C46E40;
// 140C46E50: using guessed type __int64 qword_140C46E50;
// 140C46E58: using guessed type int dword_140C46E58;
// 140C46E60: using guessed type __int64 qword_140C46E60;

