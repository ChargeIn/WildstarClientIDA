//----- (000000014093A610) ----------------------------------------------------
void sub_14093A610()
{
	__m128 v0; // xmm0

	xmmword_140C79C60 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C411C4,
			(__m128)(unsigned int)dword_140C411C4),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C412CC, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C411C4, (__m128)xmmword_140B7B530);
	xmmword_140C79C50 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C412CC, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C411C4: using guessed type int dword_140C411C4;
// 140C412CC: using guessed type int dword_140C412CC;
// 140C79C50: using guessed type __int128 xmmword_140C79C50;
// 140C79C60: using guessed type __int128 xmmword_140C79C60;

