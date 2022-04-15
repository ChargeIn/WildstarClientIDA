//----- (0000000140308E40) ----------------------------------------------------
unsigned __int64 __fastcall sub_140308E40(__int64 a1, unsigned int a2, __m128* a3, __int64 a4, char* a5)
{
	unsigned int v5; // r11d
	__m128i v9; // xmm1
	__m128i v10; // xmm1
	unsigned __int64 result; // rax
	char* v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rdx
	unsigned int v15; // r11d
	unsigned int v16; // r8d
	__int64 v17; // rax
	__m128 v18; // xmm2
	int v19; // r8d
	__m128 v20; // xmm4
	__m128 v21; // xmm3
	__m128 v22; // xmm3
	__int64 v23; // r8
	__int64 v24; // rdi
	__int64 v25; // rdx
	__m128 v26; // xmm2
	__m128 v27; // xmm3
	__int64 v28; // rdx
	unsigned int v29; // r8d
	__int64 v30; // rcx
	__int64 v31; // rdi
	__m128 v32; // xmm1
	__int64 v33; // rcx
	__m128 v34; // xmm4
	__m128i v35; // xmm0
	__m128 v36; // xmm3
	char v37; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v5 == 1)
		{
			result = *(_QWORD*)(a1 + 16);
			*a3 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)result), 0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			return result;
		}
		v12 = a5;
		if (a5)
		{
			v13 = *(unsigned int*)a5;
			v14 = *(_QWORD*)(a1 + 8);
			v15 = *(_DWORD*)(v14 + 4 * v13);
			if (v15 <= a2)
			{
				v16 = *(_DWORD*)(v14 + 4i64 * (unsigned int)(v13 + 1));
				if (a2 < v16)
				{
					v17 = *(_QWORD*)(a1 + 16);
					v18 = (__m128)xmmword_140B7AB70;
					v19 = v16 - v15;
					v20 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(
										_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v17 + 4i64 * (unsigned int)(v13 + 1))), 0),
										(__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					v21 = _mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v17 + 4 * v13)), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198));
					result = (unsigned int)v19;
					v22 = _mm_mul_ps(v21, (__m128)xmmword_140B7AB70);
					v18.m128_f32[0] = (float)(int)(a2 - v15) / (float)v19;
					*a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), _mm_sub_ps(v20, v22)), v22);
					return result;
				}
			}
			v23 = (unsigned int)(v13 + 1);
			*(_DWORD*)a5 = v23;
			v5 = *(_DWORD*)a1;
			if ((unsigned int)v23 < *(_DWORD*)a1 - 1)
			{
				v24 = *(_QWORD*)(a1 + 8);
				if (*(_DWORD*)(v24 + 4 * v23) <= a2 && a2 < *(_DWORD*)(v24 + 4i64 * (unsigned int)(v13 + 2)))
				{
					v25 = *(_QWORD*)(a1 + 16);
					v26 = (__m128)xmmword_140B7AB70;
					result = (unsigned int)(*(_DWORD*)(v24 + 4i64 * (unsigned int)(v13 + 2)) - *(_DWORD*)(v24 + 4 * v23));
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
					*a3 = _mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v26, v26, 0),
							_mm_sub_ps(
								_mm_mul_ps(
									_mm_cvtepi32_ps(
										_mm_shuffle_epi32(
											_mm_unpacklo_epi16(
												_mm_unpacklo_epi8(
													_mm_shuffle_epi32(
														_mm_cvtsi32_si128(*(_DWORD*)(v25 + 4i64 * (unsigned int)(v13 + 2))),
														0),
													(__m128i)0i64),
												(__m128i)0i64),
											198)),
									(__m128)xmmword_140B7AB70),
								v27)),
						v27);
					return result;
				}
			}
		}
		else
		{
			v12 = &v37;
		}
		v28 = 0i64;
		v29 = v5;
		while ((unsigned int)v28 < v29)
		{
			v30 = (unsigned int)v28 + ((v29 - (unsigned int)v28) >> 1);
			if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v30))
				v28 = (unsigned int)(v30 + 1);
			else
				v29 = v28 + ((v29 - (unsigned int)v28) >> 1);
		}
		result = *(_QWORD*)(a1 + 16);
		v31 = (unsigned int)(v28 - 1);
		v32 = 0i64;
		if ((_DWORD)v28)
		{
			if (v5 == (_DWORD)v28)
			{
				*a3 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(result + 4 * v31)), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v12 = result;
			}
			else
			{
				v33 = *(_QWORD*)(a1 + 8);
				v34 = _mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(
								_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(result + 4 * v28)), 0),
								(__m128i)0i64),
							(__m128i)0i64),
						198));
				v35 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(result + 4 * v31)), 0);
				result = (unsigned int)(*(_DWORD*)(v33 + 4 * v28) - *(_DWORD*)(v33 + 4 * v31));
				v36 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v35, (__m128i)0i64), (__m128i)0i64), 198)),
					(__m128)xmmword_140B7AB70);
				v32.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v33 + 4 * v31)) / (float)(int)result;
				*a3 = _mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), _mm_sub_ps(_mm_mul_ps(v34, (__m128)xmmword_140B7AB70), v36)),
					v36);
				*(_DWORD*)v12 = v31;
			}
		}
		else
		{
			*a3 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)result), 0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			*(_DWORD*)v12 = 0;
		}
	}
	else
	{
		if ((dword_140DC0DC0 & 1) == 0)
			dword_140DC0DC0 |= 1u;
		v9 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140DC0DD0), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v10 = _mm_packus_epi16(v9, v9);
		result = (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v10, v10));
		*a3 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(result), 0), (__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140DC0DC0: using guessed type int dword_140DC0DC0;
// 140DC0DD0: using guessed type __int128 xmmword_140DC0DD0;

