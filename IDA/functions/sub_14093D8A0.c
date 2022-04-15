//----- (000000014093D8A0) ----------------------------------------------------
void sub_14093D8A0()
{
	__m128 v0; // xmm0

	xmmword_140C7AD50 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C448B8,
			(__m128)(unsigned int)dword_140C448B8),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C44918, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C448B8, (__m128)xmmword_140B7B530);
	unk_140C7AD40 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C44918, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C448B8: using guessed type int dword_140C448B8;
// 140C44918: using guessed type int dword_140C44918;
// 140C7AD50: using guessed type __int128 xmmword_140C7AD50;

