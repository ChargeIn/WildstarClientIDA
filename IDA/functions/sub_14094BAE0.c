//----- (000000014094BAE0) ----------------------------------------------------
void sub_14094BAE0()
{
	__m128 v0; // xmm0

	xmmword_140C7F900 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C54BA4,
			(__m128)(unsigned int)dword_140C54BA4),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C54C78, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C54BA4, (__m128)xmmword_140B7B530);
	xmmword_140C7F8F0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C54C78, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C54BA4: using guessed type int dword_140C54BA4;
// 140C54C78: using guessed type int dword_140C54C78;
// 140C7F8F0: using guessed type __int128 xmmword_140C7F8F0;
// 140C7F900: using guessed type __int128 xmmword_140C7F900;

