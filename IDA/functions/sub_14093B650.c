//----- (000000014093B650) ----------------------------------------------------
void sub_14093B650()
{
	__m128 v0; // xmm0

	xmmword_140C79DC0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C41DEC,
			(__m128)(unsigned int)dword_140C41DEC),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C41EF4, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C41DEC, (__m128)xmmword_140B7B530);
	xmmword_140C79DB0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C41EF4, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41DEC: using guessed type int dword_140C41DEC;
// 140C41EF4: using guessed type int dword_140C41EF4;
// 140C79DB0: using guessed type __int128 xmmword_140C79DB0;
// 140C79DC0: using guessed type __int128 xmmword_140C79DC0;

