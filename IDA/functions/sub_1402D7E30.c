//----- (00000001402D7E30) ----------------------------------------------------
void __fastcall sub_1402D7E30(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	__m128* v5; // rbx
	unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v4 = 16i64;
		v5 = (__m128*)(a1 + 112);
		do
		{
			if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, unsigned int*))(*(_QWORD*)a2 + 32i64))(
				a2,
				3i64,
				*(unsigned int*)(*(_QWORD*)(a1 + 8) + v4),
				&v6))
			{
				*v5 = _mm_mul_ps(
					_mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 0), (__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70),
					(__m128)xmmword_140B7B2F0);
			}
			else
			{
				*v5 = (__m128)xmmword_140B7B240;
			}
			if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, unsigned int*))(*(_QWORD*)a2 + 32i64))(
				a2,
				4i64,
				*(unsigned int*)(*(_QWORD*)(a1 + 8) + v4),
				&v6))
			{
				v5[2] = _mm_mul_ps(
					_mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 0), (__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70),
					(__m128)xmmword_140B7B2F0);
				v5[2].m128_i32[3] = 1065353216;
			}
			else
			{
				v5[2] = 0i64;
			}
			v4 += 4i64;
			++v5;
		} while (v4 < 0x18);
	}
	else
	{
		*(_OWORD*)(a1 + 112) = xmmword_140B7B240;
		*(_OWORD*)(a1 + 128) = xmmword_140B7B240;
		*(_OWORD*)(a1 + 144) = 0i64;
		*(_OWORD*)(a1 + 160) = 0i64;
	}
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;

