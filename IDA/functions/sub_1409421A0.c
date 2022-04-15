//----- (00000001409421A0) ----------------------------------------------------
void sub_1409421A0()
{
	__m128 v0; // xmm0

	xmmword_140C7D6D0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C461C8,
			(__m128)(unsigned int)dword_140C461C8),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C46228, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C461C8, (__m128)xmmword_140B7B530);
	xmmword_140C7D6C0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C46228, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C461C8: using guessed type int dword_140C461C8;
// 140C46228: using guessed type int dword_140C46228;
// 140C7D6C0: using guessed type __int128 xmmword_140C7D6C0;
// 140C7D6D0: using guessed type __int128 xmmword_140C7D6D0;

