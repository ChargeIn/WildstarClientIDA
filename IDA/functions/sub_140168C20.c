//----- (0000000140168C20) ----------------------------------------------------
__int64 __fastcall sub_140168C20(__int64 a1)
{
	unsigned __int64 v1; // rdx
	__int64 v2; // r8
	__int64 v4; // r10
	__int64 v5; // r9
	int v6; // r11d
	__m128* v7; // rcx
	_QWORD* v8; // rcx
	float v9; // xmm4_4
	float v10; // xmm5_4
	double v11; // xmm6_8
	double v12; // xmm9_8
	float v13; // xmm3_4
	float v14; // xmm0_4
	double v15; // xmm7_8
	int v16; // edi
	__m128i v17; // xmm2
	int v18; // eax
	_QWORD* v19; // rcx
	__m128i v20; // xmm2
	_QWORD* v21; // rcx
	unsigned int v23; // [rsp+38h] [rbp-D0h] BYREF
	unsigned int v24; // [rsp+3Ch] [rbp-CCh]
	__int64 v25; // [rsp+40h] [rbp-C8h]
	__m128 v26; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v27; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v28; // [rsp+68h] [rbp-A0h]
	__m128 v29[16]; // [rsp+78h] [rbp-90h] BYREF

	v1 = *(unsigned int*)(a1 + 712);
	v2 = qword_140C63678;
	v23 = *(_DWORD*)(a1 + 716);
	v24 = *(_DWORD*)(a1 + 720);
	v25 = *(_QWORD*)(a1 + 724);
	if (v1 >= *(_QWORD*)(qword_140C63678 + 48))
		goto LABEL_6;
	v4 = *(_QWORD*)(qword_140C63678 + 40);
	v5 = 32i64 * (unsigned int)v1;
	v6 = *(_DWORD*)(v5 + v4 + 16);
	if ((unsigned int)(v6 - 1) <= 0xFFFFFFFD)
		*(_DWORD*)(v5 + v4 + 16) = v6 + 1;
	if (v1 >= *(_QWORD*)(v2 + 48))
		LABEL_6:
	v7 = *(__m128**)(v2 + 40);
	else
		v7 = (__m128*)(*(_QWORD*)(v2 + 40) + 32i64 * (unsigned int)v1);
	v26 = *v7;
	sub_1401429A0(v2, v1);
	v8 = *(_QWORD**)(a1 + 1024);
	if (v8)
		sub_140103CF0(
			v8,
			&v23,
			&v26,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036)));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v9 = *(float*)(a1 + 1312);
	v10 = *(float*)(a1 + 1316);
	if (v9 == v10)
	{
		if ((*(_DWORD*)(a1 + 664) & 0x2000i64) != 0)
		{
			*(_QWORD*)&v11 = *(unsigned int*)(a1 + 1332);
			*(_QWORD*)&v12 = *(unsigned int*)(a1 + 1336);
		}
		else
		{
			*(_QWORD*)&v11 = *(unsigned int*)(a1 + 1336);
			*(_QWORD*)&v12 = *(unsigned int*)(a1 + 1332);
		}
	}
	else
	{
		v13 = fmaxf(0.0, fminf(1.0, v9 / v10));
		if ((*(_DWORD*)(a1 + 664) & 0x2000i64) != 0)
		{
			*(_QWORD*)&v12 = *(unsigned int*)(a1 + 1336);
			v14 = *(float*)(a1 + 1336) - *(float*)(a1 + 1332);
			if (v14 <= 0.0)
				v14 = v14 + 6.2831855;
			*(_QWORD*)&v11 = *(unsigned int*)(a1 + 1336);
			for (*(float*)&v11 = *(float*)&v12 - (float)(v14 * v13);
				*(float*)&v11 < 0.0;
				*(float*)&v11 = *(float*)&v11 + 6.2831855)
			{
				;
			}
			for (; *(float*)&v11 > 6.2831855; *(float*)&v11 = *(float*)&v11 + -6.2831855)
				;
		}
		else
		{
			*(_QWORD*)&v11 = *(unsigned int*)(a1 + 1336);
			*(_QWORD*)&v12 = *(unsigned int*)(a1 + 1332);
			*(float*)&v12 = *(float*)&v12 - *(float*)&v11;
			if (*(float*)&v12 <= 0.0)
				*(float*)&v12 = *(float*)&v12 + 6.2831855;
			*(float*)&v12 = (float)(*(float*)&v12 * v13) + *(float*)&v11;
		}
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	HIDWORD(v15) = HIDWORD(v12);
	for (*(float*)&v15 = *(float*)&v12 - *(float*)&v11; *(float*)&v15 < 0.0; *(float*)&v15 = *(float*)&v15
		+ 6.2831855)
		;
	for (; *(float*)&v15 > 6.2831855; *(float*)&v15 = *(float*)&v15 + -6.2831855)
		;
	if (*(float*)&v15 <= 3.1415927)
	{
		v16 = 0;
		v20 = _mm_cvtsi32_si128(0);
		v28 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v20),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v25)), v20)));
		v27 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v20),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), v20)));
		if (*(float*)&v11 >= (float)(*(float*)&v12 - 3.1415927))
			v16 = sub_1400CF1A0(&v27, v11, v12, v29);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
		v16 = 0;
		v17 = _mm_cvtsi32_si128(0);
		*(float*)&v15 = (float)(*(float*)&v15 * 0.5) + *(float*)&v11;
		v28 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v17),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v25)), v17)));
		v27 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v17),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), v17)));
		if (*(float*)&v11 >= (float)(*(float*)&v15 - 3.1415927))
			v18 = sub_1400CF1A0(&v27, v11, v15, v29);
		else
			v18 = 0;
		(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)qword_140C65680 + 120i64))(qword_140C65680, v29, v18);
		v19 = *(_QWORD**)(a1 + 1072);
		if (v19)
			sub_140103CF0(
				v19,
				&v23,
				&v26,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1080)) * *(float*)(a1 + 1084)));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		v28 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v25)), _mm_cvtsi32_si128(0))));
		v27 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(0))));
		if (*(float*)&v15 >= (float)(*(float*)&v12 - 3.1415927))
			v16 = sub_1400CF1A0(&v27, v15, v12, v29);
	}
	(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)qword_140C65680 + 120i64))(qword_140C65680, v29, v16);
	v21 = *(_QWORD**)(a1 + 1072);
	if (v21)
		sub_140103CF0(
			v21,
			&v23,
			&v26,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1080)) * *(float*)(a1 + 1084)));
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140168C20: using guessed type __m128 var_170[16];

