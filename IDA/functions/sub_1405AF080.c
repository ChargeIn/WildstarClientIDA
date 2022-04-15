//----- (00000001405AF080) ----------------------------------------------------
__int64 __fastcall sub_1405AF080(__int64 a1, float* a2)
{
	__int64 result; // rax
	__int64 v5; // r14
	__int64 v6; // rdi
	unsigned int v7; // eax
	__int64 v8; // rax
	unsigned int* v9; // rbp
	unsigned int v10; // esi
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned int* v13; // rax
	__m128i v14; // xmm1
	__m128i v15; // xmm3
	int v16; // eax
	unsigned int v17; // r8d
	__m128 v18; // xmm6
	__m128 v19; // xmm1
	__m128 v20; // [rsp+20h] [rbp-38h] BYREF

	result = sub_1402074E0(*(_DWORD*)(a1 + 68));
	v5 = result;
	if (result)
	{
		v6 = sub_1402070A0(*(_DWORD*)(a1 + 64));
		if (v6 && (v7 = sub_1404BC060(qword_140C659F0, 0), (v8 = sub_140205FA0(v7)) != 0))
		{
			result = sub_14024C200(*(_DWORD*)(v8 + 4));
			v9 = (unsigned int*)result;
			if (result)
			{
				v10 = 0;
				if ((__int64)(*(_QWORD*)(a1 + 256) - *(_QWORD*)(a1 + 248)) >> 3)
					v11 = **(_QWORD**)(a1 + 248);
				else
					v11 = 0i64;
				v12 = sub_140206C60(*(_DWORD*)(v11 + 4));
				if (v12
					&& (v13 = (unsigned int*)sub_14024ACC0(*(_DWORD*)(v12 + 4i64 * *(unsigned int*)(v6 + 20) + 16))) != 0i64)
				{
					v14 = _mm_cvtsi32_si128(v13[11]);
					v15 = _mm_cvtsi32_si128(v13[10]);
					v16 = v9[6] - v13[14];
					v17 = *(_DWORD*)(v5 + 4i64 * *(unsigned int*)(v6 + 20) + 20);
					v18 = _mm_mul_ps(
						_mm_sub_ps(
							_mm_div_ps(
								_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(0)))),
								(__m128)xmmword_140B7B490),
							(__m128)xmmword_140B7AC50),
						(__m128)xmmword_140B7B4B0);
					v19 = _mm_mul_ps(
						_mm_sub_ps(
							_mm_div_ps(
								_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9[2]), _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9[3]), _mm_cvtsi32_si128(0)))),
								(__m128)xmmword_140B7B490),
							(__m128)xmmword_140B7AC50),
						(__m128)xmmword_140B7B4B0);
					v20 = _mm_sub_ps(
						_mm_unpacklo_ps(_mm_unpacklo_ps(v19, _mm_shuffle_ps(v19, v19, 85)), (__m128)0i64),
						_mm_unpacklo_ps(_mm_unpacklo_ps(v18, _mm_shuffle_ps(v18, v18, 85)), (__m128)0i64));
					v20.m128_f32[1] = _mm_shuffle_ps(v20, v20, 85).m128_f32[0] + (float)((float)v16 * *(float*)&dword_140C4A0E8);
					LOBYTE(v10) = (unsigned int)sub_1405A97C0(a2, v20.m128_f32, v17) != 0;
					return v10;
				}
				else
				{
					return 0i64;
				}
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C4A0E8: using guessed type int dword_140C4A0E8;
// 140C659F0: using guessed type __int64 qword_140C659F0;

