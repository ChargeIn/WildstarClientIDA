#include "../winhttp.h"

//----- (000000014093AE60) ----------------------------------------------------
void sub_14093AE60()
{
	__m128 v0; // xmm0

	xmmword_140C79D30 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C41BF4,
			(__m128)(unsigned int)dword_140C41BF4),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C41CFC, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C41BF4, (__m128)xmmword_140B7B530);
	xmmword_140C79D20 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C41CFC, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41BF4: using guessed type int dword_140C41BF4;
// 140C41CFC: using guessed type int dword_140C41CFC;
// 140C79D20: using guessed type __int128 xmmword_140C79D20;
// 140C79D30: using guessed type __int128 xmmword_140C79D30;

