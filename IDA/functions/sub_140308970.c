//----- (0000000140308970) ----------------------------------------------------
unsigned __int64 __fastcall sub_140308970(__int64 a1, unsigned int a2, __m128* a3, __int64 a4, char* a5)
{
	unsigned int v5; // r11d
	__m128i v9; // xmm1
	__m128i v10; // xmm1
	unsigned __int64 result; // rax
	__m128i v12; // xmm0
	char* v13; // rbx
	__int64 v14; // rdx
	__int64 v15; // rcx
	unsigned int v16; // r11d
	__int64 v17; // rax
	unsigned int v18; // r8d
	__int64 v19; // rcx
	__m128 v20; // xmm2
	int v21; // r8d
	__m128 v22; // xmm4
	__m128 v23; // xmm3
	__int64 v24; // r8
	__int64 v25; // rdi
	__int64 v26; // rdx
	__m128 v27; // xmm2
	__m128 v28; // xmm3
	__int64 v29; // rdx
	unsigned int v30; // r8d
	__int64 v31; // rcx
	__int64 v32; // rdi
	__m128 v33; // xmm1
	__int64 v34; // rcx
	__m128i v35; // xmm0
	int v36; // eax
	__int64 v37; // rcx
	__m128 v38; // xmm4
	__m128i v39; // xmm0
	__m128 v40; // xmm3
	char v41; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		if ((dword_140C8A5C0 & 1) == 0)
			dword_140C8A5C0 |= 1u;
		v9 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140C8A5B0), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v10 = _mm_packus_epi16(v9, v9);
		result = _mm_cvtsi128_si32(_mm_packus_epi16(v10, v10)) & 0xFFFFFF | 0xFF000000;
		v12 = _mm_cvtsi32_si128(result);
		goto LABEL_5;
	}
	if (v5 == 1)
	{
		result = *(_QWORD*)(a1 + 16);
		v12 = _mm_cvtsi32_si128(*(_DWORD*)result | 0xFF000000);
	LABEL_5:
		*a3 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_shuffle_epi32(v12, 0), (__m128i)0i64), (__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		return result;
	}
	v13 = a5;
	if (a5)
	{
		v14 = *(unsigned int*)a5;
		v15 = *(_QWORD*)(a1 + 8);
		v16 = *(_DWORD*)(v15 + 4 * v14);
		if (v16 <= a2)
		{
			v17 = (unsigned int)(v14 + 1);
			v18 = *(_DWORD*)(v15 + 4 * v17);
			if (a2 < v18)
			{
				v19 = *(_QWORD*)(a1 + 16);
				v20 = (__m128)xmmword_140B7AB70;
				v21 = v18 - v16;
				v22 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v19 + 4 * v17) | 0xFF000000), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				result = (unsigned int)v21;
				v23 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v19 + 4 * v14) | 0xFF000000), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				v20.m128_f32[0] = (float)(int)(a2 - v16) / (float)v21;
				*a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), _mm_sub_ps(v22, v23)), v23);
				return result;
			}
		}
		v24 = (unsigned int)(v14 + 1);
		*(_DWORD*)a5 = v24;
		v5 = *(_DWORD*)a1;
		if ((unsigned int)v24 < *(_DWORD*)a1 - 1)
		{
			v25 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v25 + 4 * v24) <= a2 && a2 < *(_DWORD*)(v25 + 4i64 * (unsigned int)(v14 + 2)))
			{
				v26 = *(_QWORD*)(a1 + 16);
				v27 = (__m128)xmmword_140B7AB70;
				result = (unsigned int)(*(_DWORD*)(v25 + 4i64 * (unsigned int)(v24 + 1)) - *(_DWORD*)(v25 + 4 * v24));
				v28 = _mm_mul_ps(
					_mm_cvtepi32_ps(
						_mm_shuffle_epi32(
							_mm_unpacklo_epi16(
								_mm_unpacklo_epi8(
									_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v26 + 4 * v24) | 0xFF000000), 0),
									(__m128i)0i64),
								(__m128i)0i64),
							198)),
					(__m128)xmmword_140B7AB70);
				v27.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v25 + 4 * v24)) / (float)(int)result;
				*a3 = _mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v27, v27, 0),
						_mm_sub_ps(
							_mm_mul_ps(
								_mm_cvtepi32_ps(
									_mm_shuffle_epi32(
										_mm_unpacklo_epi16(
											_mm_unpacklo_epi8(
												_mm_shuffle_epi32(
													_mm_cvtsi32_si128(*(_DWORD*)(v26 + 4i64 * (unsigned int)(v24 + 1)) | 0xFF000000),
													0),
												(__m128i)0i64),
											(__m128i)0i64),
										198)),
								(__m128)xmmword_140B7AB70),
							v28)),
					v28);
				return result;
			}
		}
	}
	else
	{
		v13 = &v41;
	}
	v29 = 0i64;
	v30 = v5;
	while ((unsigned int)v29 < v30)
	{
		v31 = (unsigned int)v29 + ((v30 - (unsigned int)v29) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v31))
			v29 = (unsigned int)(v31 + 1);
		else
			v30 = v29 + ((v30 - (unsigned int)v29) >> 1);
	}
	v32 = (unsigned int)(v29 - 1);
	v33 = 0i64;
	if ((_DWORD)v29)
	{
		if (v5 == (_DWORD)v29)
		{
			*a3 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(
								_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v32) | 0xFF000000), 0),
								(__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v13 = result;
		}
		else
		{
			v34 = *(_QWORD*)(a1 + 16);
			v35 = _mm_cvtsi32_si128(*(_DWORD*)(v34 + 4 * v29) | 0xFF000000);
			v36 = *(_DWORD*)(v34 + 4 * v32);
			v37 = *(_QWORD*)(a1 + 8);
			v38 = _mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_shuffle_epi32(v35, 0), (__m128i)0i64), (__m128i)0i64),
					198));
			v39 = _mm_cvtsi32_si128(v36 | 0xFF000000);
			result = (unsigned int)(*(_DWORD*)(v37 + 4 * v29) - *(_DWORD*)(v37 + 4 * v32));
			v40 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_shuffle_epi32(v39, 0), (__m128i)0i64), (__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			v33.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v37 + 4 * v32)) / (float)(int)result;
			*a3 = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), _mm_sub_ps(_mm_mul_ps(v38, (__m128)xmmword_140B7AB70), v40)),
				v40);
			*(_DWORD*)v13 = v32;
		}
	}
	else
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_shuffle_epi32(
					_mm_unpacklo_epi16(
						_mm_unpacklo_epi8(
							_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)result | 0xFF000000), 0),
							(__m128i)0i64),
						(__m128i)0i64),
					198)),
			(__m128)xmmword_140B7AB70);
		*(_DWORD*)v13 = 0;
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C8A5B0: using guessed type __int128 xmmword_140C8A5B0;
// 140C8A5C0: using guessed type int dword_140C8A5C0;

