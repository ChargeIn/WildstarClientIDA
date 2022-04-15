//----- (00000001400C4790) ----------------------------------------------------
__int64 __fastcall sub_1400C4790(__int64 a1, char a2)
{
	char v4; // al
	int v5; // edi
	int v6; // eax
	_QWORD* v7; // rcx
	signed int v8; // ecx
	signed int v9; // r9d
	signed int v10; // r8d
	signed int v11; // edx
	signed int v12; // eax
	__m128i v13; // xmm2
	__m128i v14; // xmm1
	__m128i v15; // xmm3
	_QWORD* v16; // rcx
	__m128i v17; // xmm1
	__m128i v18; // xmm3
	_QWORD* v19; // rcx
	_QWORD* v20; // rcx
	int v21; // xmm0_4
	char v22; // al
	char v23; // cl
	__int64 result; // rax
	_QWORD* v25; // rcx
	unsigned int v26[4]; // [rsp+30h] [rbp-40h] BYREF
	__m128 v27; // [rsp+40h] [rbp-30h] BYREF
	__m128 v28; // [rsp+50h] [rbp-20h]

	if ((*(_BYTE*)(a1 + 1392) & 0x10) != 0)
		sub_1400C44B0(a1);
	v4 = *(_BYTE*)(a1 + 412);
	v5 = 3;
	v27 = (__m128)xmmword_140B7B240;
	if ((v4 & 0x10) == 0)
	{
		v6 = 4;
		goto LABEL_13;
	}
	if (v4 >= 0)
	{
		if ((v4 & 0x40) != 0)
		{
			v6 = 1;
			goto LABEL_13;
		}
	}
	else if ((v4 & 0x40) != 0)
	{
		v6 = 3;
		goto LABEL_13;
	}
	if (v4 >= 0)
		v6 = (*(_BYTE*)(a1 + 414) & 1) != 0 ? 5 : 0;
	else
		v6 = 2;
LABEL_13:
	if (!a2)
		v6 = 4;
	v7 = *(_QWORD**)(a1 + 48i64 * v6);
	if (v7)
		sub_140103CF0(
			v7,
			(unsigned int*)(a1 + 352),
			&v27,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 48i64 * v6 + 8)) * *(float*)(a1 + 48i64 * v6 + 12)));
	v8 = *(_DWORD*)(a1 + 1348);
	v9 = *(_DWORD*)(a1 + 1352);
	v10 = *(_DWORD*)(a1 + 1356);
	v11 = *(_DWORD*)(a1 + 1344);
	if (v9 < *(_DWORD*)(a1 + 1368))
		v9 = *(_DWORD*)(a1 + 1368);
	if (v10 < *(_DWORD*)(a1 + 1372))
		v10 = *(_DWORD*)(a1 + 1372);
	if (*(_DWORD*)(a1 + 1360) < v11)
		v11 = *(_DWORD*)(a1 + 1360);
	v12 = *(_DWORD*)(a1 + 1364);
	v26[2] = v9;
	v26[0] = v11;
	v26[3] = v10;
	if (v12 < v8)
		v8 = v12;
	v26[1] = v8;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v13 = _mm_cvtsi32_si128(0);
	v14 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1348));
	v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1344)), v13);
	v28 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1352)), v13),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1356)), v13)));
	v27 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v15, _mm_unpacklo_epi32(v14, v13)));
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v27);
	v16 = *(_QWORD**)(a1 + 1248);
	v27 = (__m128)xmmword_140B7B240;
	if (v16)
		sub_140103CF0(
			v16,
			v26,
			&v27,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1256)) * *(float*)(a1 + 1260)));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v17 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1364));
	v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1360)), _mm_cvtsi32_si128(0));
	v28 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1368)), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1372)), _mm_cvtsi32_si128(0))));
	v27 = _mm_cvtepi32_ps(_mm_unpacklo_epi32(v18, _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(0))));
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v27);
	v19 = *(_QWORD**)(a1 + 1248);
	v27 = (__m128)xmmword_140B7B240;
	if (v19)
		sub_140103CF0(
			v19,
			v26,
			&v27,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1256)) * *(float*)(a1 + 1260)));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	v27 = (__m128)xmmword_140B7B240;
	if (a2)
	{
		v22 = *(_BYTE*)(a1 + 1392);
		if ((v22 & 2) != 0)
		{
			if ((v22 & 8) != 0)
			{
				v20 = *(_QWORD**)(a1 + 976);
				if (!v20)
					goto LABEL_44;
				*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 984)) * *(float*)(a1 + 988);
			}
			else
			{
				v20 = *(_QWORD**)(a1 + 880);
				if (!v20)
					goto LABEL_44;
				*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 888)) * *(float*)(a1 + 892);
			}
		}
		else if ((v22 & 8) != 0)
		{
			v20 = *(_QWORD**)(a1 + 928);
			if (!v20)
				goto LABEL_44;
			*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 936)) * *(float*)(a1 + 940);
		}
		else
		{
			v20 = *(_QWORD**)(a1 + 832);
			if (!v20)
				goto LABEL_44;
			*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 840)) * *(float*)(a1 + 844);
		}
	}
	else
	{
		v20 = *(_QWORD**)(a1 + 1024);
		if (!v20)
			goto LABEL_44;
		*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036);
	}
	sub_140103CF0(v20, (unsigned int*)(a1 + 1376), &v27, 0, v21);
LABEL_44:
	v23 = *(_BYTE*)(a1 + 828);
	v27 = (__m128)xmmword_140B7B240;
	if ((v23 & 0x10) != 0)
	{
		if (v23 >= 0 || (v23 & 0x40) == 0)
		{
			if ((v23 & 0x40) != 0)
			{
				v5 = 1;
			}
			else if (v23 >= 0)
			{
				v5 = (*(_BYTE*)(a1 + 830) & 1) != 0 ? 5 : 0;
			}
			else
			{
				v5 = 2;
			}
		}
	}
	else
	{
		v5 = 4;
	}
	if (!a2)
		v5 = 4;
	result = v5;
	v25 = *(_QWORD**)(a1 + 48i64 * v5 + 416);
	if (v25)
		return sub_140103CF0(
			v25,
			(unsigned int*)(a1 + 768),
			&v27,
			0,
			COERCE_INT(
				(float)(*(float*)&dword_140C63664 - *(float*)(a1 + 48i64 * v5 + 424))
				* *(float*)(a1 + 48i64 * v5 + 428)));
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

