#include "../winhttp.h"

//----- (00000001409393F0) ----------------------------------------------------
void sub_1409393F0()
{
	__m128 v0; // xmm0

	xmmword_140C79AB0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C3FF70,
			(__m128)(unsigned int)dword_140C3FF70),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C3FF78, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C3FF70, (__m128)xmmword_140B7B530);
	xmmword_140C79AA0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C3FF78, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3FF70: using guessed type int dword_140C3FF70;
// 140C3FF78: using guessed type int dword_140C3FF78;
// 140C79AA0: using guessed type __int128 xmmword_140C79AA0;
// 140C79AB0: using guessed type __int128 xmmword_140C79AB0;

