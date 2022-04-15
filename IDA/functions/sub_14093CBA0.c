//----- (000000014093CBA0) ----------------------------------------------------
void sub_14093CBA0()
{
	__m128 v0; // xmm0

	xmmword_140C7AC20 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(
			(__m128)(unsigned int)dword_140C436E8,
			(__m128)(unsigned int)dword_140C436E8),
		_mm_unpacklo_ps((__m128)(unsigned int)dword_140C43B98, (__m128)0i64));
	v0 = _mm_xor_ps((__m128)(unsigned int)dword_140C436E8, (__m128)xmmword_140B7B530);
	xmmword_140C7AC10 = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps(v0, v0),
		_mm_unpacklo_ps(
			_mm_xor_ps((__m128)(unsigned int)dword_140C43B98, (__m128)xmmword_140B7B530),
			(__m128)0i64));
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C436E8: using guessed type int dword_140C436E8;
// 140C43B98: using guessed type int dword_140C43B98;
// 140C7AC10: using guessed type __int128 xmmword_140C7AC10;
// 140C7AC20: using guessed type __int128 xmmword_140C7AC20;

