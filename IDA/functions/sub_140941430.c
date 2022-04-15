#include "../winhttp.h"

//----- (0000000140941430) ----------------------------------------------------
__int64 sub_140941430()
{
	__m128* v0; // rax
	__int64 v1; // rcx
	__m128 v2; // xmm2

	qword_140C46F10 = 0i64;
	dword_140C46F18 = 0;
	qword_140C46F20 = 0i64;
	v0 = (__m128*) & unk_140C46E90;
	v1 = 5i64;
	v2 = _mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B630), (__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
	for (xmmword_140C46F00 = (__int128)v2; ; v2 = (__m128)xmmword_140C46F00)
	{
		*v0++ = v2;
		if (!--v1)
			break;
	}
	return sub_1407DD89C(sub_140951510);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B630: using guessed type __int128 xmmword_140B7B630;
// 140C46F00: using guessed type __int128 xmmword_140C46F00;
// 140C46F10: using guessed type __int64 qword_140C46F10;
// 140C46F18: using guessed type int dword_140C46F18;
// 140C46F20: using guessed type __int64 qword_140C46F20;

