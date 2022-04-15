//----- (000000014093D4E0) ----------------------------------------------------
void sub_14093D4E0()
{
	__m128 v0; // xmm0

	xmmword_140C7AC90 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C444E8,
			(__m128)(unsigned int)dword_140C444E8),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C44550, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C444E8, (__m128)xmmword_140B7B530);
	unk_140C7AC80 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C44550, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C444E8: using guessed type int dword_140C444E8;
// 140C44550: using guessed type int dword_140C44550;
// 140C7AC90: using guessed type __int128 xmmword_140C7AC90;

