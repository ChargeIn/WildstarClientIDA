//----- (00000001405B0600) ----------------------------------------------------
__m256* __fastcall sub_1405B0600(__int64 a1, __m256* a2)
{
	__int64 v4; // rax
	unsigned int* v5; // rax
	__m128i v6; // xmm2
	__m128 v7; // xmm6
	__m128 v8; // xmm1
	__int64 v9; // rax
	__int64 v10; // xmm7_8
	float v11; // xmm6_4
	__m128 v13; // [rsp+20h] [rbp-78h]
	__int128 v14; // [rsp+30h] [rbp-68h]
	__int128 v15; // [rsp+50h] [rbp-48h]
	__int128 v16; // [rsp+60h] [rbp-38h]

	v4 = sub_140205FA0(*(_DWORD*)(*(_QWORD*)(a1 + 232) + 8i64));
	if (v4 && (v5 = (unsigned int*)sub_14024C200(*(_DWORD*)(v4 + 4))) != 0i64)
	{
		v6 = _mm_cvtsi32_si128(0);
		v7 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[2]), v6),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[3]), v6))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v8 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[4]), v6),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5[5]), v6))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v13 = _mm_mul_ps(
			_mm_add_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v8, _mm_shuffle_ps(v8, v8, 85)), (__m128)xmmword_140B7A3D0),
				_mm_unpacklo_ps(_mm_unpacklo_ps(v7, _mm_shuffle_ps(v7, v7, 85)), (__m128)xmmword_140B7A3D0)),
			(__m128)xmmword_140B7AC50);
		v9 = sub_1402070A0(*(_DWORD*)(a1 + 64));
		if (v9)
		{
			v10 = 0i64;
			switch (*(_DWORD*)(v9 + 20))
			{
			case 1:
				v10 = 1078530011i64;
				break;
			case 2:
				v10 = 1070141403i64;
				break;
			case 3:
				v10 = 3217625051i64;
				break;
			}
			v11 = sub_1408FE3D0(*(double*)&v10);
			HIDWORD(v14) = 0;
			*(_QWORD*)&v15 = LODWORD(v11);
			*(_QWORD*)&v14 = COERCE_UNSIGNED_INT(sub_1408FC950(*(double*)&v10));
			*((_QWORD*)&v15 + 1) = v14;
			HIDWORD(v16) = HIDWORD(xmmword_140C78440);
			*((float*)&v14 + 2) = -v11;
			*(_QWORD*)&v16 = v13.m128_u64[0];
			*(_OWORD*)a2->m256_f32 = v14;
			DWORD2(v16) = v13.m128_i32[2];
			*(_OWORD*)&a2->m256_f32[4] = xmmword_140B7A4B0;
			*(_OWORD*)a2[1].m256_f32 = v15;
			*(_OWORD*)&a2[1].m256_f32[4] = v16;
		}
		else
		{
			*a2 = ymmword_140C78390;
			*(_OWORD*)a2[1].m256_f32 = xmmword_140C783B0;
			*(_OWORD*)&a2[1].m256_f32[4] = xmmword_140C783C0;
		}
	}
	else
	{
		*a2 = ymmword_140C78390;
		*(_OWORD*)a2[1].m256_f32 = xmmword_140C783B0;
		*(_OWORD*)&a2[1].m256_f32[4] = xmmword_140C783C0;
	}
	return a2;
}
// 140B7A3D0: using guessed type __int128 xmmword_140B7A3D0;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78440: using guessed type __int128 xmmword_140C78440;

