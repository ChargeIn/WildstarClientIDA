#include "../winhttp.h"

//----- (000000014093AD20) ----------------------------------------------------
void sub_14093AD20()
{
	__m128 v0; // xmm0

	xmmword_140C79CA0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C41B90,
			(__m128)(unsigned int)dword_140C41B90),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C41B94, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C41B90, (__m128)xmmword_140B7B530);
	unk_140C79C90 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C41B94, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41B90: using guessed type int dword_140C41B90;
// 140C41B94: using guessed type int dword_140C41B94;
// 140C79CA0: using guessed type __int128 xmmword_140C79CA0;

