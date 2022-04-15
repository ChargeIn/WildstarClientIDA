//----- (0000000140175310) ----------------------------------------------------
__int64 __fastcall sub_140175310(__int64 a1)
{
	int v1; // edi
	unsigned int v2; // esi
	int v3; // r15d
	int v4; // r12d
	__int64 result; // rax
	char v7; // al
	signed int v8; // r14d
	_QWORD* v9; // r10
	unsigned int v10; // eax
	__int128 v11; // xmm7
	_QWORD* v12; // r10
	unsigned int v13; // eax
	_QWORD* v14; // rcx
	unsigned int v15; // eax
	_QWORD* v16; // rcx
	char v17; // al
	__int64 v18; // r15
	int v19; // edi
	int v20; // eax
	_QWORD* v21; // rcx
	char v22; // al
	__int64 v23; // rsi
	_QWORD* v24; // rcx
	_QWORD* v25; // rcx
	float v26; // xmm8_4
	_QWORD* v27; // rcx
	float v28; // xmm6_4
	unsigned int v29; // edx
	float v30; // xmm1_4
	_QWORD* v31; // rcx
	__m128i v32; // xmm0
	bool v33; // zf
	_QWORD* v34; // rcx
	int v35; // xmm0_4
	unsigned int v36; // [rsp+38h] [rbp-59h] BYREF
	int v37; // [rsp+3Ch] [rbp-55h]
	int v38; // [rsp+40h] [rbp-51h]
	int v39; // [rsp+44h] [rbp-4Dh]
	unsigned int v40; // [rsp+48h] [rbp-49h] BYREF
	int v41; // [rsp+4Ch] [rbp-45h]
	int v42; // [rsp+50h] [rbp-41h]
	int v43; // [rsp+54h] [rbp-3Dh]
	unsigned int v44[4]; // [rsp+58h] [rbp-39h] BYREF
	__int128 v45; // [rsp+68h] [rbp-29h] BYREF
	unsigned int v46; // [rsp+F8h] [rbp+67h] BYREF

	v1 = *(_DWORD*)(a1 + 724);
	v2 = *(_DWORD*)(a1 + 716);
	v3 = *(_DWORD*)(a1 + 720);
	v4 = *(_DWORD*)(a1 + 728);
	result = v1 - v2;
	if ((int)(v1 - v2) <= 0)
		return result;
	v7 = *(_BYTE*)(a1 + 664);
	v8 = 0;
	v36 = *(_DWORD*)(a1 + 716);
	v37 = v3;
	v38 = v1;
	v39 = v4;
	if ((v7 & 8) == 0)
	{
		v9 = *(_QWORD**)(a1 + 2304);
		v40 = v2;
		v41 = v3;
		v42 = v1;
		v43 = v4;
		if (v9)
		{
			sub_140101470(v9, (int*)&v46);
			v10 = v46;
		}
		else
		{
			v10 = 0;
		}
		v11 = xmmword_140B7B240;
		v45 = xmmword_140B7B240;
		v42 = v2 + v10;
		if (v9)
			sub_140103CF0(
				v9,
				&v40,
				(__m128*) & v45,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2312)) * *(float*)(a1 + 2316)));
		v12 = *(_QWORD**)(a1 + 2352);
		v40 = v2;
		v41 = v3;
		v42 = v1;
		v43 = v4;
		if (v12)
		{
			sub_140101470(v12, (int*)&v46);
			v13 = v46;
		}
		else
		{
			v13 = 0;
		}
		v45 = xmmword_140B7B240;
		v40 = v1 - v13;
		if (v12)
			sub_140103CF0(
				v12,
				&v40,
				(__m128*) & v45,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2360)) * *(float*)(a1 + 2364)));
		v14 = *(_QWORD**)(a1 + 2304);
		if (v14)
		{
			sub_140101470(v14, (int*)&v46);
			v15 = v46;
		}
		else
		{
			v15 = 0;
		}
		v16 = *(_QWORD**)(a1 + 2352);
		v36 += v15;
		if (v16)
		{
			sub_140101470(v16, (int*)&v46);
			result = v46;
			v38 -= v46;
		}
		else
		{
			result = 0i64;
		}
		goto LABEL_43;
	}
	v17 = *(_BYTE*)(a1 + 1468);
	v11 = xmmword_140B7B240;
	v18 = a1 + 1056;
	v45 = xmmword_140B7B240;
	v19 = 4;
	if ((v17 & 0x10) == 0)
	{
		v20 = 4;
		goto LABEL_29;
	}
	if (v17 >= 0)
	{
		if ((v17 & 0x40) != 0)
		{
			v20 = 1;
			goto LABEL_29;
		}
	}
	else if ((v17 & 0x40) != 0)
	{
		v20 = 3;
		goto LABEL_29;
	}
	if (v17 >= 0)
		v20 = (*(_BYTE*)(a1 + 1470) & 1) != 0 ? 5 : 0;
	else
		v20 = 2;
LABEL_29:
	v21 = *(_QWORD**)(v18 + 48i64 * v20);
	if (v21)
		sub_140103CF0(
			v21,
			(unsigned int*)(v18 + 352),
			(__m128*) & v45,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v18 + 48i64 * v20 + 8)) * *(float*)(v18 + 48i64 * v20 + 12)));
	v22 = *(_BYTE*)(a1 + 1884);
	v23 = a1 + 1472;
	v45 = xmmword_140B7B240;
	if ((v22 & 0x10) == 0)
		goto LABEL_40;
	if (v22 >= 0)
	{
		if ((v22 & 0x40) != 0)
		{
			v19 = 1;
			goto LABEL_40;
		}
	LABEL_37:
		if (v22 >= 0)
			v19 = (*(_BYTE*)(a1 + 1886) & 1) != 0 ? 5 : 0;
		else
			v19 = 2;
		goto LABEL_40;
	}
	if ((v22 & 0x40) == 0)
		goto LABEL_37;
	v19 = 3;
LABEL_40:
	v24 = *(_QWORD**)(v23 + 48i64 * v19);
	if (v24)
		sub_140103CF0(
			v24,
			(unsigned int*)(a1 + 1824),
			(__m128*) & v45,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v23 + 48i64 * v19 + 8)) * *(float*)(v23 + 48i64 * v19 + 12)));
	v36 += *sub_1400C3930((_QWORD**)v18, (int*)&v46);
	result = (__int64)sub_1400C3930((_QWORD**)(a1 + 1472), (int*)&v46);
	v38 -= *(_DWORD*)result;
LABEL_43:
	v25 = *(_QWORD**)(a1 + 2400);
	v45 = v11;
	if (v25)
		result = sub_140103CF0(
			v25,
			&v36,
			(__m128*) & v45,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2408)) * *(float*)(a1 + 2412)));
	v26 = *(float*)(a1 + 1028) - *(float*)(a1 + 1024);
	if (v26 > 0.0)
	{
		result = (__int64)sub_1400C3930((_QWORD**)(a1 + 1888), (int*)&v46);
		if ((float)((float)(int)(v38 - v36) - (float)*(int*)result) > 0.0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			if ((*(_BYTE*)(a1 + 664) & 2) != 0)
			{
				v27 = *(_QWORD**)(a1 + 2448);
				if (v27)
				{
					sub_140101470(v27, (int*)&v46);
					v8 = v46;
				}
				v28 = *(float*)(a1 + 1024);
				if (*(int*)(a1 + 1048) > 0)
					v8 = *(_DWORD*)(a1 + 1048);
				if (v28 <= *(float*)(a1 + 1028))
				{
					v29 = v36;
					do
					{
						v41 = v37;
						v30 = (float)(v28 - *(float*)(a1 + 1024)) * (float)(1.0 / v26);
						v43 = v39;
						v31 = *(_QWORD**)(a1 + 2448);
						v32 = _mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1052)), 0), (__m128i)0i64);
						v40 = v29 + (int)(float)(v30 * (float)(int)(v38 - v29)) - v8 / 2;
						v42 = v8 + v40;
						v45 = (__int128)_mm_mul_ps(
							_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(v32, (__m128i)0i64), 198)),
							(__m128)xmmword_140B7AB70);
						if (v31)
						{
							sub_140103CF0(
								v31,
								&v40,
								(__m128*) & v45,
								0,
								COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2456)) * *(float*)(a1 + 2460)));
							v29 = v36;
						}
						v28 = v28 + *(float*)(a1 + 1036);
					} while (v28 <= *(float*)(a1 + 1028));
				}
			}
			result = (__int64)sub_140174CE0(a1, v44);
			v33 = *(_BYTE*)(a1 + 1040) == 0;
			v45 = v11;
			if (v33)
			{
				v34 = *(_QWORD**)(a1 + 1888);
				if (!v34)
					return result;
				*(float*)&v35 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1896)) * *(float*)(a1 + 1900);
			}
			else
			{
				v34 = *(_QWORD**)(a1 + 1936);
				if (!v34)
					return result;
				*(float*)&v35 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1944)) * *(float*)(a1 + 1948);
			}
			return sub_140103CF0(v34, v44, (__m128*) & v45, 0, v35);
		}
	}
	return result;
}
// 1401753C4: variable 'v9' is possibly undefined
// 140175431: variable 'v12' is possibly undefined
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140175310: using guessed type __m128 var_80;
// 140175310: using guessed type unsigned int var_90[4];

