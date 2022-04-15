//----- (0000000140307F60) ----------------------------------------------------
unsigned int* __fastcall sub_140307F60(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4)
{
	__int64 v7; // rdi
	__int64 v8; // r15
	unsigned int* result; // rax
	__int64 v10; // r9
	float* v11; // rbp
	unsigned int v12; // edx
	__m128 v13; // xmm1
	__m128 v14; // xmm2
	__m128i v15; // xmm1
	__m128i v16; // xmm1
	unsigned int v17; // [rsp+C0h] [rbp+8h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(unsigned int**)(a1 + 16);
			*a2 = *result;
		}
		else
		{
			result = 0i64;
			*a2 = 0;
		}
	}
	else
	{
		v7 = (unsigned int)(*(_DWORD*)(a3 + 104) - 1);
		v8 = v7;
		result = (unsigned int*)sub_140309CA0(a1, *(_DWORD*)(a3 + 24 * v7 + 8), a2, a4, (char*)&a2[v7 + 1]);
		if ((_DWORD)v7)
		{
			v11 = (float*)(a3 + 24 * v7 + 12);
			do
			{
				v12 = *((_DWORD*)v11 - 7);
				v11 -= 6;
				result = (unsigned int*)sub_140309CA0(a1, v12, &v17, v10, (char*)&a2[v8--]);
				v13 = (__m128)0x3F800000u;
				v13.m128_f32[0] = 1.0 - *v11;
				v14 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v17), 0), (__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				v15 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(
									_mm_max_ps(
										(__m128)0i64,
										_mm_add_ps(
											_mm_mul_ps(
												_mm_sub_ps(
													_mm_mul_ps(
														_mm_cvtepi32_ps(
															_mm_shuffle_epi32(
																_mm_unpacklo_epi16(
																	_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*a2), 0), (__m128i)0i64),
																	(__m128i)0i64),
																198)),
														(__m128)xmmword_140B7AB70),
													v14),
												_mm_shuffle_ps(v13, v13, 0)),
											v14)),
									(__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v16 = _mm_packus_epi16(v15, v15);
				*a2 = _mm_cvtsi128_si32(_mm_packus_epi16(v16, v16));
				LODWORD(v7) = v7 - 1;
			} while ((_DWORD)v7);
		}
	}
	return result;
}
// 140308052: variable 'v10' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

