//----- (0000000140938A90) ----------------------------------------------------
void sub_140938A90()
{
	xmmword_140C67340 = (__int128)_mm_mul_ps(
		_mm_cvtepi32_ps(
			_mm_shuffle_epi32(
				_mm_unpacklo_epi16(
					_mm_unpacklo_epi8(
						_mm_load_si128((const __m128i*) & xmmword_140B7B6C0),
						(__m128i)0i64),
					(__m128i)0i64),
				198)),
		(__m128)xmmword_140B7AB70);
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6C0: using guessed type __int128 xmmword_140B7B6C0;
// 140C67340: using guessed type __int128 xmmword_140C67340;

