//----- (00000001403F6A00) ----------------------------------------------------
_QWORD* __fastcall sub_1403F6A00(_QWORD* a1, int* a2)
{
	int* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rbp
	int* v7; // rax
	const __m128i* v8; // rsi
	int** v9; // r12
	int i; // r14d
	char* v11; // rax
	void(__fastcall * **v12)(_QWORD); // rbx
	const __m128i* v13; // rax
	char* v14; // rax
	const __m128i* v15; // rax
	int* v16; // rax
	int* v17; // rdi
	int* v18; // rax
	int v19; // xmm0_4
	char v21[8]; // [rsp+20h] [rbp-68h] BYREF
	const __m128i* v22; // [rsp+28h] [rbp-60h]
	int* v23; // [rsp+30h] [rbp-58h]
	int* v24; // [rsp+38h] [rbp-50h]
	__int64 v25; // [rsp+40h] [rbp-48h] BYREF
	__int64 v26; // [rsp+48h] [rbp-40h]

	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v4 = sub_14018B280(16i64, 0);
	a1[1] = v4;
	a1[2] = v4;
	a1[3] = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	sub_14001C480((__int64)a1, a2, (int*)((char*)a2 + 2 * v5));
	v6 = *(_QWORD*)(qword_140C65898 + 29504) + 240i64;
	v7 = sub_14018B280(16i64, 0);
	v8 = (const __m128i*)v7;
	v22 = (const __m128i*)v7;
	v23 = v7;
	v24 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v9 = (int**)(a1 + 4);
	for (i = 0; i < 10; ++i)
	{
		v11 = (char*)sub_14018EFA0(&v25, (__int64)L"%s%d", a2, (unsigned int)i);
		if (v11 != v21)
		{
			sub_14001C480((__int64)v21, *((int**)v11 + 1), *((int**)v11 + 2));
			v8 = v22;
		}
		if (v26)
			sub_14018B900(v26, 0);
		if (v8 && v8->m128i_i16[0] && ((*(_QWORD*)(v6 + 104) - *(_QWORD*)(v6 + 96)) & 0xFFFFFFFFFFFFFFF8ui64) != 0)
		{
			v12 = (void(__fastcall***)(_QWORD))sub_1400FDFE0(v6 + 48, (__int64)v8);
			if (v12)
				goto LABEL_18;
			v13 = sub_1407DF6E0(v8, stru_1409D5204);
			if (v13)
			{
				v12 = (void(__fastcall***)(_QWORD))sub_1400FDFE0(v6 + 48, (__int64)v13->m128i_i64 + 2);
			LABEL_18:
				if (v12)
					goto LABEL_30;
			}
		}
		v14 = (char*)sub_14018EFA0(&v25, (__int64)L"%s_%d", a2, (unsigned int)i);
		if (v14 != v21)
		{
			sub_14001C480((__int64)v21, *((int**)v14 + 1), *((int**)v14 + 2));
			v8 = v22;
		}
		if (v26)
			sub_14018B900(v26, 0);
		if (!v8 || !v8->m128i_i16[0] || ((*(_QWORD*)(v6 + 104) - *(_QWORD*)(v6 + 96)) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
			goto LABEL_29;
		v12 = (void(__fastcall***)(_QWORD))sub_1400FDFE0(v6 + 48, (__int64)v8);
		if (v12)
			goto LABEL_30;
		v15 = sub_1407DF6E0(v8, stru_1409D5204);
		if (v15)
			v12 = (void(__fastcall***)(_QWORD))sub_1400FDFE0(v6 + 48, (__int64)v15->m128i_i64 + 2);
		else
			LABEL_29:
		v12 = 0i64;
	LABEL_30:
		v16 = sub_14018B280(48i64, 0);
		v17 = v16;
		if (v16)
		{
			*((_QWORD*)v16 + 3) = 0i64;
			*((_QWORD*)v16 + 4) = 0i64;
			*((_QWORD*)v16 + 5) = 0i64;
			v18 = sub_14018B280(16i64, 0);
			*((_QWORD*)v17 + 3) = v18;
			*((_QWORD*)v17 + 4) = v18;
			*((_QWORD*)v17 + 5) = v18 + 4;
			if (v18)
				*(_WORD*)v18 = 0;
			v19 = dword_140C63664;
			*(_QWORD*)v17 = 0i64;
			v17[3] = 1065353216;
			v17[2] = v19;
		}
		else
		{
			v17 = 0i64;
		}
		if (v12 != *(void(__fastcall****)(_QWORD))v17)
		{
			if (v12)
				(**v12)(v12);
			if (*(_QWORD*)v17)
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v17 + 8i64))(*(_QWORD*)v17);
				*(_QWORD*)v17 = 0i64;
			}
			*(_QWORD*)v17 = v12;
		}
		*v9++ = v17;
	}
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return a1;
}
// 1409D5204: using guessed type __m128i stru_1409D5204[10];
// 140AF8418: using guessed type wchar_t aSD_4[6];
// 140AF8488: using guessed type wchar_t aSD_3[5];
// 140C63664: using guessed type int dword_140C63664;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403F6A00: using guessed type char var_68[8];

