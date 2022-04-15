#include "../winhttp.h"

//----- (0000000140947D60) ----------------------------------------------------
void sub_140947D60()
{
	__m128 v0; // xmm0

	xmmword_140C7E020 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C4A488,
			(__m128)(unsigned int)dword_140C4A488),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C4A4E8, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C4A488, (__m128)xmmword_140B7B530);
	xmmword_140C7E010 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C4A4E8, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4A488: using guessed type int dword_140C4A488;
// 140C4A4E8: using guessed type int dword_140C4A4E8;
// 140C7E010: using guessed type __int128 xmmword_140C7E010;
// 140C7E020: using guessed type __int128 xmmword_140C7E020;

