//----- (00000001402564A0) ----------------------------------------------------
void __fastcall sub_1402564A0(__m128* a1, __int64 a2)
{
	__m128* v4; // rsi
	float* m128_f32; // rbx
	__int64 v6; // rbp
	__m128 v7; // xmm0
	float v8; // xmm7_4
	float v9; // xmm1_4
	float v10; // xmm7_4
	__m128 v11; // xmm1
	__m128i v12; // xmm1
	__m128i v13; // xmm1
	__m128i v14; // xmm1
	__m128i v15; // xmm1

	v4 = a1 + 51;
	m128_f32 = a1[72].m128_f32;
	v6 = 12i64;
	do
	{
		v7 = 0i64;
		if (a1[38].m128_i32[0])
		{
			if (*m128_f32 > *(m128_f32 - 1))
			{
				v8 = sub_140262FB0(*(m128_f32 - 1), *m128_f32, *(m128_f32 - 4));
				v7 = 0i64;
				v7.m128_f32[0] = fmaxf(0.0, fminf(v8, 1.0));
			}
		}
		else
		{
			v9 = *(m128_f32 - 2);
			if (v9 > *(m128_f32 - 3))
			{
				v10 = sub_140262FB0(*(m128_f32 - 3), v9, *(m128_f32 - 6));
				v7 = 0i64;
				v7.m128_f32[0] = fmaxf(0.0, fminf(v10, 1.0));
			}
		}
		v11 = *v4;
		a2 += 4i64;
		++v4;
		m128_f32 += 10;
		v12 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(
							_mm_max_ps(
								(__m128)0i64,
								_mm_mul_ps(
									v4[-13],
									_mm_add_ps(
										_mm_mul_ps(_mm_sub_ps(v11, (__m128)xmmword_140B7B240), _mm_shuffle_ps(v7, v7, 0)),
										(__m128)xmmword_140B7B240))),
							(__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v13 = _mm_packus_epi16(v12, v12);
		*(_DWORD*)(a2 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v13, v13));
		v14 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, v4[-1]), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v15 = _mm_packus_epi16(v14, v14);
		*(_DWORD*)(a2 + 44) = _mm_cvtsi128_si32(_mm_packus_epi16(v15, v15));
		--v6;
	} while (v6);
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

