//----- (000000014043E6D0) ----------------------------------------------------
__int64 __fastcall sub_14043E6D0(__int64 a1, unsigned int a2, unsigned int a3, float* a4)
{
	__int64 result; // rax
	float* v8; // rbx
	__int64 v9; // r14
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	unsigned int* v15; // rbp
	_DWORD* v16; // rdi
	__m128i v17; // xmm2
	__m128 v18; // xmm6
	__m128 v19; // xmm2
	__m128 v20; // xmm2
	float v21; // xmm1_4
	__int64 v22; // [rsp+20h] [rbp-28h]

	result = sub_14024B980(a3);
	v8 = (float*)result;
	if (result)
	{
		v9 = a1 + 72;
		if (*(_DWORD*)(result + 40) == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(a1 + 72) + 8i64))(a1 + 72))
		{
			*a4 = v8[3];
			a4[1] = v8[4];
			a4[2] = v8[5];
			return 1i64;
		}
		v10 = *(_QWORD*)(a1 + 29304);
		v11 = v10;
		v12 = *(_QWORD*)(v10 + 8);
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < a2)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v11 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v11 == v10 || (v22 = v11, a2 < *(_DWORD*)(v11 + 32)))
			v22 = *(_QWORD*)(a1 + 29304);
		if ((v22 == v10
			|| (v13 = *(_QWORD*)(v22 + 40)) == 0
			|| (v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13)) == 0
			|| *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14) == *((_DWORD*)v8 + 10))
			&& (v15 = (unsigned int*)sub_14024ACC0(*((_DWORD*)v8 + 10))) != 0i64
			&& (v16 = (_DWORD*)sub_14024C200(a2)) != 0i64
			&& v16[1] == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9))
		{
			if (!a4)
				return 1i64;
			v17 = _mm_cvtsi32_si128(0);
			v18 = _mm_mul_ps(
				_mm_sub_ps(
					_mm_div_ps(
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15[10]), v17),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15[11]), v17))),
						(__m128)xmmword_140B7B490),
					(__m128)xmmword_140B7AC50),
				(__m128)xmmword_140B7B4B0);
			v19 = _mm_mul_ps(
				_mm_sub_ps(
					_mm_div_ps(
						_mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v16[2]), v17),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v16[3]), v17))),
						(__m128)xmmword_140B7B490),
					(__m128)xmmword_140B7AC50),
				(__m128)xmmword_140B7B4B0);
			v20 = _mm_sub_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps(v19, _mm_shuffle_ps(v19, v19, 85)), (__m128)0i64),
				_mm_unpacklo_ps(_mm_unpacklo_ps(v18, _mm_shuffle_ps(v18, v18, 85)), (__m128)0i64));
			*a4 = v20.m128_f32[0] + v8[3];
			v21 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0] + v8[4];
			a4[1] = v21;
			a4[2] = _mm_shuffle_ps(v20, v20, 170).m128_f32[0] + v8[5];
			result = 1i64;
			a4[1] = (float)((float)(int)(v16[6] - v15[14]) * *(float*)&dword_140C44F78) + v21;
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
// 140C44F78: using guessed type int dword_140C44F78;

