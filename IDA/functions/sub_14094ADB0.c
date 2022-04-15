#include "../winhttp.h"

//----- (000000014094ADB0) ----------------------------------------------------
void sub_14094ADB0()
{
	__m128 v0; // xmm0

	xmmword_140C7F5C0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C4B7A8,
			(__m128)(unsigned int)dword_140C4B7A8),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C4B8C8, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C4B7A8, (__m128)xmmword_140B7B530);
	xmmword_140C7F5B0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C4B8C8, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4B7A8: using guessed type int dword_140C4B7A8;
// 140C4B8C8: using guessed type int dword_140C4B8C8;
// 140C7F5B0: using guessed type __int128 xmmword_140C7F5B0;
// 140C7F5C0: using guessed type __int128 xmmword_140C7F5C0;

