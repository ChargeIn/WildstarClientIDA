#include "../winhttp.h"

//----- (000000014093D540) ----------------------------------------------------
void sub_14093D540()
{
	__m128 v0; // xmm0

	xmmword_140C7ACB0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C4457C,
			(__m128)(unsigned int)dword_140C4457C),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C44568, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C4457C, (__m128)xmmword_140B7B530);
	unk_140C7ACA0 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C44568, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44568: using guessed type int dword_140C44568;
// 140C4457C: using guessed type int dword_140C4457C;
// 140C7ACB0: using guessed type __int128 xmmword_140C7ACB0;

