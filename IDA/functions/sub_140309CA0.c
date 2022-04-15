//----- (0000000140309CA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140309CA0(__int64 a1, unsigned int a2, _DWORD* a3, __int64 a4, char* a5)
{
	unsigned int v5; // ebx
	unsigned __int64 result; // rax
	char* v10; // r11
	__int64 v11; // rcx
	__int64 v12; // rdx
	unsigned int v13; // ebx
	unsigned int v14; // r8d
	__int64 v15; // rax
	__m128 v16; // xmm2
	int v17; // r8d
	__m128 v18; // xmm4
	__m128 v19; // xmm3
	__m128 v20; // xmm3
	__m128i v21; // xmm1
	__m128i v22; // xmm1
	__int64 v23; // r8
	__int64 v24; // rsi
	__int64 v25; // rdx
	__m128 v26; // xmm2
	__m128 v27; // xmm3
	__m128i v28; // xmm1
	__m128i v29; // xmm1
	__int64 v30; // rdx
	unsigned int v31; // r8d
	__int64 v32; // rcx
	__int64 v33; // rsi
	__int64 v34; // rcx
	__m128 v35; // xmm1
	__m128 v36; // xmm4
	__m128i v37; // xmm0
	__m128 v38; // xmm3
	__m128i v39; // xmm1
	__m128i v40; // xmm1
	char v41; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v5 == 1)
		{
			result = *(_QWORD*)(a1 + 16);
			*a3 = *(_DWORD*)result;
			return result;
		}
		v10 = a5;
		if (a5)
		{
			v11 = *(unsigned int*)a5;
			v12 = *(_QWORD*)(a1 + 8);
			v13 = *(_DWORD*)(v12 + 4 * v11);
			if (v13 <= a2)
			{
				v14 = *(_DWORD*)(v12 + 4i64 * (unsigned int)(v11 + 1));
				if (a2 < v14)
				{
					v15 = *(_QWORD*)(a1 + 16);
					v16 = (__m128)xmmword_140B7AB70;
					v17 = v14 - v13;
					v18 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(
										_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v15 + 4i64 * (unsigned int)(v11 + 1))), 0),
										(__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					v19 = _mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v15 + 4 * v11)), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198));
					result = (unsigned int)v17;
					v20 = _mm_mul_ps(v19, (__m128)xmmword_140B7AB70);
					v16.m128_f32[0] = (float)(int)(a2 - v13) / (float)v17;
					v21 = _mm_shuffle_epi32(
						_mm_cvttps_epi32(
							_mm_add_ps(
								_mm_mul_ps(
									_mm_min_ps(
										_mm_max_ps(
											(__m128)0i64,
											_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), _mm_sub_ps(v18, v20)), v20)),
										(__m128)xmmword_140B7B240),
									(__m128)xmmword_140B7B470),
								(__m128)xmmword_140B7AC50)),
						198);
					v22 = _mm_packus_epi16(v21, v21);
					*a3 = _mm_cvtsi128_si32(_mm_packus_epi16(v22, v22));
					return result;
				}
			}
			v23 = (unsigned int)(v11 + 1);
			*(_DWORD*)a5 = v23;
			v5 = *(_DWORD*)a1;
			if ((unsigned int)v23 < *(_DWORD*)a1 - 1)
			{
				v24 = *(_QWORD*)(a1 + 8);
				if (*(_DWORD*)(v24 + 4 * v23) <= a2 && a2 < *(_DWORD*)(v24 + 4i64 * (unsigned int)(v11 + 2)))
				{
					v25 = *(_QWORD*)(a1 + 16);
					v26 = (__m128)xmmword_140B7AB70;
					result = (unsigned int)(*(_DWORD*)(v24 + 4i64 * (unsigned int)(v11 + 2)) - *(_DWORD*)(v24 + 4 * v23));
					v27 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(
										_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v25 + 4 * v23)), 0),
										(__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					v26.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v24 + 4 * v23)) / (float)(int)result;
					v28 = _mm_shuffle_epi32(
						_mm_cvttps_epi32(
							_mm_add_ps(
								_mm_mul_ps(
									_mm_min_ps(
										_mm_max_ps(
											(__m128)0i64,
											_mm_add_ps(
												_mm_mul_ps(
													_mm_shuffle_ps(v26, v26, 0),
													_mm_sub_ps(
														_mm_mul_ps(
															_mm_cvtepi32_ps(
																_mm_shuffle_epi32(
																	_mm_unpacklo_epi16(
																		_mm_unpacklo_epi8(
																			_mm_shuffle_epi32(
																				_mm_cvtsi32_si128(*(_DWORD*)(v25 + 4i64 * (unsigned int)(v11 + 2))),
																				0),
																			(__m128i)0i64),
																		(__m128i)0i64),
																	198)),
															(__m128)xmmword_140B7AB70),
														v27)),
												v27)),
										(__m128)xmmword_140B7B240),
									(__m128)xmmword_140B7B470),
								(__m128)xmmword_140B7AC50)),
						198);
					v29 = _mm_packus_epi16(v28, v28);
					*a3 = _mm_cvtsi128_si32(_mm_packus_epi16(v29, v29));
					return result;
				}
			}
		}
		else
		{
			v10 = &v41;
		}
		v30 = 0i64;
		v31 = v5;
		while ((unsigned int)v30 < v31)
		{
			v32 = (unsigned int)v30 + ((v31 - (unsigned int)v30) >> 1);
			if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v32))
				v30 = (unsigned int)(v32 + 1);
			else
				v31 = v30 + ((v31 - (unsigned int)v30) >> 1);
		}
		result = *(_QWORD*)(a1 + 16);
		v33 = (unsigned int)(v30 - 1);
		if ((_DWORD)v30)
		{
			if (v5 == (_DWORD)v30)
			{
				*a3 = *(_DWORD*)(result + 4 * v33);
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v10 = result;
			}
			else
			{
				v34 = *(_QWORD*)(a1 + 8);
				v35 = 0i64;
				v36 = _mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(
								_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(result + 4 * v30)), 0),
								(__m128i)0i64),
							(__m128i)0i64),
						198));
				v37 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(result + 4 * v33)), 0);
				result = (unsigned int)(*(_DWORD*)(v34 + 4 * v30) - *(_DWORD*)(v34 + 4 * v33));
				v38 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v37, (__m128i)0i64), (__m128i)0i64), 198)),
					(__m128)xmmword_140B7AB70);
				v35.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v34 + 4 * v33)) / (float)(int)result;
				v39 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(
									_mm_max_ps(
										(__m128)0i64,
										_mm_add_ps(
											_mm_mul_ps(
												_mm_shuffle_ps(v35, v35, 0),
												_mm_sub_ps(_mm_mul_ps(v36, (__m128)xmmword_140B7AB70), v38)),
											v38)),
									(__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v40 = _mm_packus_epi16(v39, v39);
				*a3 = _mm_cvtsi128_si32(_mm_packus_epi16(v40, v40));
				*(_DWORD*)v10 = v33;
			}
		}
		else
		{
			*a3 = *(_DWORD*)result;
			*(_DWORD*)v10 = 0;
		}
	}
	else
	{
		if ((dword_140DC0E00 & 1) == 0)
			dword_140DC0E00 |= 1u;
		result = (unsigned int)dword_140DC0E04;
		*a3 = dword_140DC0E04;
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140DC0E00: using guessed type int dword_140DC0E00;
// 140DC0E04: using guessed type int dword_140DC0E04;

