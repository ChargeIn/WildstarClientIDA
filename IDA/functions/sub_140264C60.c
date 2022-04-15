//----- (0000000140264C60) ----------------------------------------------------
__int64 __fastcall sub_140264C60(__m128* a1, __int64 a2, int a3)
{
	__m128* v3; // r9
	__int64 v4; // rdx
	__int64 result; // rax

	v3 = &a1[a3];
	if (a1 < v3)
	{
		v4 = a2 - (_QWORD)a1;
		do
		{
			if (a1)
			{
				result = a1->m128_u8[v4];
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
		} while (a1 < v3);
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;

