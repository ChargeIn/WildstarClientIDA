#include "../winhttp.h"

//----- (000000014093D410) ----------------------------------------------------
void sub_14093D410()
{
	__m128 v0; // xmm0

	unk_140C7AC70 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C44138, (__m128)(unsigned int)dword_140C44138),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C44198, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C44138, (__m128)xmmword_140B7B530);
	unk_140C7AC60 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C44198, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44138: using guessed type int dword_140C44138;
// 140C44198: using guessed type int dword_140C44198;

