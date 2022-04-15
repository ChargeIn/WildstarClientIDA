#include "../winhttp.h"

//----- (00000001403073A0) ----------------------------------------------------
__m128* __fastcall sub_1403073A0(__int64 a1, unsigned int a2, __m128* a3, __int64 a4, __int64* a5)
{
	unsigned int v5; // r11d
	__m128 v9; // xmm2
	int v10; // eax
	float v11; // xmm0_4
	float v12; // xmm1_4
	__m128* result; // rax
	__m128i v14; // xmm0
	__int64* v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // rdx
	unsigned int v18; // r11d
	unsigned int v19; // r8d
	__int64 v20; // rax
	__m128i v21; // xmm1
	__m128i v22; // xmm0
	__int64 v23; // r8
	__int64 v24; // rdi
	__int64 v25; // rdx
	int v26; // r9d
	__m128i v27; // xmm0
	int v28; // eax
	__m128i v29; // xmm0
	__int64 v30; // rdx
	unsigned int v31; // r8d
	__int64 v32; // rcx
	__int64 v33; // rdi
	__m128i v34; // xmm0
	__m128i v35; // xmm0
	__int64 v36; // rcx
	__m128i v37; // xmm0
	__m128i v38; // xmm0
	__int64 v39; // rcx
	int v40; // r9d
	int v41; // eax
	__m128 v42; // [rsp+20h] [rbp-38h] BYREF
	__m128 v43; // [rsp+30h] [rbp-28h] BYREF
	__m128 v44; // [rsp+40h] [rbp-18h] BYREF
	__int64 v45; // [rsp+78h] [rbp+20h] BYREF

	v45 = a4;
	v5 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		if ((dword_140DC0DA0 & 1) == 0)
			dword_140DC0DA0 |= 1u;
		v9 = _mm_mul_ps((__m128)xmmword_140DC0DB0, (__m128)xmmword_140B7B4A0);
		v10 = (int)v9.m128_f32[0];
		v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
		v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
		v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
		LOWORD(v45) = v10;
		WORD1(v45) = (int)v11;
		WORD2(v45) = (int)v12;
		result = (__m128*)(unsigned int)(int)v9.m128_f32[0];
		HIWORD(v45) = (int)v9.m128_f32[0];
		v14 = _mm_loadl_epi64((const __m128i*) & v45);
		goto LABEL_5;
	}
	if (v5 == 1)
	{
		result = *(__m128**)(a1 + 16);
		v14 = _mm_loadl_epi64((const __m128i*)result);
	LABEL_5:
		*a3 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v14, v14), 0x10u)), (__m128)xmmword_140B7AB20);
		return result;
	}
	v15 = a5;
	if (a5)
	{
		v16 = *(unsigned int*)a5;
		v17 = *(_QWORD*)(a1 + 8);
		v18 = *(_DWORD*)(v17 + 4 * v16);
		if (v18 <= a2)
		{
			v19 = *(_DWORD*)(v17 + 4i64 * (unsigned int)(v16 + 1));
			if (a2 < v19)
			{
				v20 = *(_QWORD*)(a1 + 16);
				v21 = _mm_loadl_epi64((const __m128i*)(v20 + 8 * v16));
				v22 = _mm_loadl_epi64((const __m128i*)(v20 + 8i64 * (unsigned int)(v16 + 1)));
				v42 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v22, v22), 0x10u)),
					(__m128)xmmword_140B7AB20);
				v43 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v21, v21), 0x10u)),
					(__m128)xmmword_140B7AB20);
				result = sub_1401B1EE0(
					&v44,
					&v43,
					&v42,
					COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)(int)(a2 - v18) / (float)(int)(v19 - v18))));
				*a3 = *result;
				return result;
			}
		}
		v23 = (unsigned int)(v16 + 1);
		*(_DWORD*)a5 = v23;
		v5 = *(_DWORD*)a1;
		if ((unsigned int)v23 < *(_DWORD*)a1 - 1)
		{
			v24 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v24 + 4 * v23) <= a2 && a2 < *(_DWORD*)(v24 + 4i64 * (unsigned int)(v16 + 2)))
			{
				v25 = *(_QWORD*)(a1 + 16);
				v26 = a2 - *(_DWORD*)(v24 + 4 * v23);
				v27 = _mm_loadl_epi64((const __m128i*)(v25 + 8i64 * (unsigned int)(v16 + 2)));
				v28 = *(_DWORD*)(v24 + 4i64 * (unsigned int)(v16 + 2)) - *(_DWORD*)(v24 + 4i64 * (unsigned int)(v16 + 1));
				v43 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v27, v27), 0x10u)),
					(__m128)xmmword_140B7AB20);
				v29 = _mm_loadl_epi64((const __m128i*)(v25 + 8 * v23));
				v42 = _mm_mul_ps(
					_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v29, v29), 0x10u)),
					(__m128)xmmword_140B7AB20);
				result = sub_1401B1EE0(
					&v44,
					&v42,
					&v43,
					COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)v26 / (float)v28)));
				*a3 = *result;
				return result;
			}
		}
	}
	else
	{
		v15 = &v45;
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
	v33 = (unsigned int)(v30 - 1);
	if ((_DWORD)v30)
	{
		if (v5 == (_DWORD)v30)
		{
			v35 = _mm_loadl_epi64((const __m128i*)(*(_QWORD*)(a1 + 16) + 8 * v33));
			*a3 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v35, v35), 0x10u)), (__m128)xmmword_140B7AB20);
			result = (__m128*)(unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v15 = (_DWORD)result;
		}
		else
		{
			v36 = *(_QWORD*)(a1 + 16);
			v37 = _mm_loadl_epi64((const __m128i*)(v36 + 8 * v30));
			v43 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v37, v37), 0x10u)), (__m128)xmmword_140B7AB20);
			v38 = _mm_loadl_epi64((const __m128i*)(v36 + 8 * v33));
			v39 = *(_QWORD*)(a1 + 8);
			v40 = a2 - *(_DWORD*)(v39 + 4 * v33);
			v41 = *(_DWORD*)(v39 + 4 * v30) - *(_DWORD*)(v39 + 4 * v33);
			v42 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v38, v38), 0x10u)), (__m128)xmmword_140B7AB20);
			result = sub_1401B1EE0(
				&v44,
				&v42,
				&v43,
				COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)v40 / (float)v41)));
			*a3 = *result;
			*(_DWORD*)v15 = v33;
		}
	}
	else
	{
		result = *(__m128**)(a1 + 16);
		v34 = _mm_loadl_epi64((const __m128i*)result);
		*a3 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(v34, v34), 0x10u)), (__m128)xmmword_140B7AB20);
		*(_DWORD*)v15 = 0;
	}
	return result;
}
// 140B7AB20: using guessed type __int128 xmmword_140B7AB20;
// 140B7B4A0: using guessed type __int128 xmmword_140B7B4A0;
// 140DC0DA0: using guessed type int dword_140DC0DA0;
// 140DC0DB0: using guessed type __int128 xmmword_140DC0DB0;
// 1403073A0: using guessed type __m128 var_18;

