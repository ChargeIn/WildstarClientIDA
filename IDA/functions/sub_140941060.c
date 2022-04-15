//----- (0000000140941060) ----------------------------------------------------
void sub_140941060()
{
	__m128 v0; // xmm0

	xmmword_140C7CE30 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C45098,
			(__m128)(unsigned int)dword_140C45098),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C45678, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C45098, (__m128)xmmword_140B7B530);
	xmmword_140C7CE20 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C45678, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C45098: using guessed type int dword_140C45098;
// 140C45678: using guessed type int dword_140C45678;
// 140C7CE20: using guessed type __int128 xmmword_140C7CE20;
// 140C7CE30: using guessed type __int128 xmmword_140C7CE30;

