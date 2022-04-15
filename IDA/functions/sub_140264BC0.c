//----- (0000000140264BC0) ----------------------------------------------------
__int64 __fastcall sub_140264BC0(__m128* a1, unsigned __int8* a2, int a3)
{
	__m128* i; // r9
	__int64 result; // rax

	for (i = &a1[a3]; a1 < i; ++a2)
	{
		if (a1)
		{
			result = *a2;
			*a1 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(result), 0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
		}
		++a1;
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

