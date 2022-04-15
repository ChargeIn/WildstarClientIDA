//----- (0000000140937C60) ----------------------------------------------------
void sub_140937C60()
{
	__m128 v0; // xmm0

	xmmword_140C66F30 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C3B738,
			(__m128)(unsigned int)dword_140C3B738),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C3BDAC, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C3B738, (__m128)xmmword_140B7B530);
	xmmword_140C66F20 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C3BDAC, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B738: using guessed type int dword_140C3B738;
// 140C3BDAC: using guessed type int dword_140C3BDAC;
// 140C66F20: using guessed type __int128 xmmword_140C66F20;
// 140C66F30: using guessed type __int128 xmmword_140C66F30;

