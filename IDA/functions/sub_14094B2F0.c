#include "../winhttp.h"

//----- (000000014094B2F0) ----------------------------------------------------
void sub_14094B2F0()
{
	__m128 v0; // xmm0

	xmmword_140C7F830 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C4ED58,
			(__m128)(unsigned int)dword_140C4ED58),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C53CE8, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C4ED58, (__m128)xmmword_140B7B530);
	xmmword_140C7F820 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C53CE8, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4ED58: using guessed type int dword_140C4ED58;
// 140C53CE8: using guessed type int dword_140C53CE8;
// 140C7F820: using guessed type __int128 xmmword_140C7F820;
// 140C7F830: using guessed type __int128 xmmword_140C7F830;

