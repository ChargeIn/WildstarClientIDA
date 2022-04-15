//----- (0000000140946FD0) ----------------------------------------------------
void sub_140946FD0()
{
	__m128 v0; // xmm0

	xmmword_140C7DBB0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C46798,
			(__m128)(unsigned int)dword_140C46798),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C47CB8, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C46798, (__m128)xmmword_140B7B530);
	xmmword_140C7DBA0 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C47CB8, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C46798: using guessed type int dword_140C46798;
// 140C47CB8: using guessed type int dword_140C47CB8;
// 140C7DBA0: using guessed type __int128 xmmword_140C7DBA0;
// 140C7DBB0: using guessed type __int128 xmmword_140C7DBB0;

