//----- (00000001407B1670) ----------------------------------------------------
__int64 __fastcall sub_1407B1670(__int64* a1, _QWORD* a2, _QWORD* a3, int** a4)
{
	int* v5; // rdi
	int* v6; // rax
	int* v7; // rax
	int* v8; // rsi
	_QWORD* v9; // r10
	int v10; // edi
	__int64 v11; // rcx
	__int64 v12; // rax
	bool i; // zf
	_WORD* v14; // r9
	unsigned __int64 v15; // rcx
	int* v16; // rbx
	__int64 v17; // r11
	unsigned __int64 v18; // rdx
	__int16 v19; // r8
	__int16 v20; // r9
	int v21; // edi
	int v22; // eax
	__int64 v23; // rcx
	unsigned __int64 v24; // rcx
	__int64 v25; // rdx
	unsigned __int64 v26; // rcx
	__int16 v27; // r8
	__int16 v28; // r9
	unsigned __int64 v29; // rcx
	__int16 v30; // r8
	__int16 v31; // r9
	unsigned __int64 v32; // rcx
	__int64 v33; // rdx
	unsigned __int64 v34; // rcx
	__int64 v35; // rdx
	int* v36; // rbx
	__int64 v37; // rdx
	char* v38; // rdi
	int* v39; // rax
	__int64 v40; // rdi
	__int64 v41; // rdi
	__int64 v42; // rcx
	_QWORD* v43; // rcx
	__int64 v45; // [rsp+20h] [rbp-29h] BYREF
	int* v46; // [rsp+28h] [rbp-21h] BYREF
	__int64 v47; // [rsp+30h] [rbp-19h] BYREF
	int* v48; // [rsp+38h] [rbp-11h]
	__int64 v49; // [rsp+40h] [rbp-9h] BYREF
	int* v50; // [rsp+48h] [rbp-1h]
	int* v51; // [rsp+50h] [rbp+7h] BYREF
	char v52[8]; // [rsp+58h] [rbp+Fh] BYREF
	int* v53; // [rsp+60h] [rbp+17h]
	int* v54; // [rsp+68h] [rbp+1Fh]
	int* v55; // [rsp+70h] [rbp+27h]
	__int64 v56; // [rsp+78h] [rbp+2Fh] BYREF
	__int64 v57[4]; // [rsp+80h] [rbp+37h] BYREF

	v5 = sub_14018B280(48i64, 1u);
	v48 = v5;
	if (!v5)
		return 2147942414i64;
	*(_QWORD*)v5 = off_140B79270;
	v5[2] = 1;
	v6 = sub_14018B280(72i64, 0);
	*((_QWORD*)v5 + 3) = v6;
	*((_QWORD*)v5 + 4) = 0i64;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*((_QWORD*)v5 + 3) + 8i64) = 0i64;
	*(_QWORD*)(*((_QWORD*)v5 + 3) + 16i64) = *((_QWORD*)v5 + 3);
	*(_QWORD*)(*((_QWORD*)v5 + 3) + 24i64) = *((_QWORD*)v5 + 3);
	v7 = sub_14018B280(16i64, 0);
	v8 = v7;
	v53 = v7;
	v50 = v7;
	v54 = v7;
	v55 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v9 = a2;
	v10 = 0;
	v11 = *a2;
	*a3 = *a2;
	v12 = *a1;
	for (i = *a1 == v11; ; i = v45 + 32 == *a2)
	{
		v45 = v12;
		if (i)
			break;
		v14 = word_1409FAD94;
		v15 = 0i64;
		do
			++v15;
		while (word_1409FAD94[v15]);
		v16 = *(int**)(v12 + 8);
		v17 = (__int64)(*(_QWORD*)(v12 + 16) - (_QWORD)v16) >> 1;
		if (v17 == v15)
		{
			v18 = 0i64;
			if (!v15)
			{
			LABEL_14:
				if (!v10)
					goto LABEL_47;
				v49 = 0i64;
				v45 = v12 + 32;
				v21 = ((__int64(__fastcall*)(__int64*, _QWORD*, __int64*, __int64*))sub_1407B1670)(&v45, v9, v57, &v49);
				if (v21 < 0)
				{
					v23 = v49;
				LABEL_81:
					if (v23)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
						(*(void(__fastcall**)(int*))(*(_QWORD*)v48 + 8i64))(v48);
						goto LABEL_95;
					}
					goto LABEL_93;
				}
				v45 = v57[0];
				v22 = (*(__int64(__fastcall**)(int*, int*, __int64))(*(_QWORD*)v48 + 200i64))(v48, v8, v49);
				v23 = v49;
				goto LABEL_17;
			}
			while (1)
			{
				v19 = *((_WORD*)v16 + v18);
				v20 = word_1409FAD94[v18];
				if (v19 != v20)
					break;
				++v18;
				v14 = word_1409FAD94;
				if (v18 >= v15)
				{
					v9 = a2;
					v12 = v45;
					goto LABEL_14;
				}
			}
		}
		v24 = 0i64;
		do
			++v24;
		while (word_1409FAE1C[v24]);
		if (v17 == v24)
		{
			v25 = 0i64;
			if (!v24)
			{
			LABEL_83:
				v43 = a3;
				v9 = a2;
				*a3 = v45;
				goto LABEL_91;
			}
			while (*((_WORD*)v16 + v25) == word_1409FAE1C[v25])
			{
				if (++v25 >= v24)
					goto LABEL_83;
			}
		}
		v26 = 0i64;
		v14 = word_1409FAE3C;
		do
			++v26;
		while (word_1409FAE3C[v26]);
		if (v17 == v26)
		{
			v18 = 0i64;
			if (!v26)
			{
			LABEL_35:
				if (!v10)
					goto LABEL_47;
				v47 = 0i64;
				v51 = (int*)(v45 + 32);
				v21 = sub_1407B1160(&v51, a2, &v56, &v47);
				if (v21 < 0)
				{
					if (v47)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
						(*(void(__fastcall**)(int*))(*(_QWORD*)v48 + 8i64))(v48);
						goto LABEL_95;
					}
					goto LABEL_93;
				}
				v45 = v56;
				v22 = (*(__int64(__fastcall**)(int*, int*, __int64))(*(_QWORD*)v48 + 200i64))(v48, v8, v47);
				v23 = v47;
			LABEL_17:
				v21 = v22;
				if (v22 < 0)
					goto LABEL_81;
				v10 = 0;
				if (v23)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
				goto LABEL_79;
			}
			while (1)
			{
				v27 = *((_WORD*)v16 + v18);
				v28 = word_1409FAE3C[v18];
				if (v27 != v28)
					break;
				++v18;
				v14 = word_1409FAE3C;
				if (v18 >= v26)
					goto LABEL_35;
			}
		}
		v29 = 0i64;
		v14 = word_1409FAE7C;
		do
			++v29;
		while (word_1409FAE7C[v29]);
		if (v17 == v29)
		{
			v18 = 0i64;
			if (!v29)
			{
			LABEL_46:
				if (!v10)
				{
				LABEL_47:
					v21 = -2147418113;
					(*(void(__fastcall**)(int*, unsigned __int64, _QWORD, _WORD*))(*(_QWORD*)v48 + 8i64))(
						v48,
						v18,
						0i64,
						v14);
					goto LABEL_95;
				}
				goto LABEL_79;
			}
			while (1)
			{
				v30 = *((_WORD*)v16 + v18);
				v31 = word_1409FAE7C[v18];
				if (v30 != v31)
					break;
				++v18;
				v14 = word_1409FAE7C;
				if (v18 >= v29)
					goto LABEL_46;
			}
		}
		v32 = 0i64;
		do
			++v32;
		while (word_1409FAE9C[v32]);
		if (v17 == v32)
		{
			v33 = 0i64;
			if (!v32)
				goto LABEL_79;
			while (*((_WORD*)v16 + v33) == word_1409FAE9C[v33])
			{
				if (++v33 >= v32)
					goto LABEL_79;
			}
		}
		v34 = 0i64;
		do
			++v34;
		while (word_1409FAECC[v34]);
		if (v17 == v34)
		{
			v35 = 0i64;
			if (!v34)
				goto LABEL_79;
			while (*((_WORD*)v16 + v35) == word_1409FAECC[v35])
			{
				if (++v35 >= v34)
					goto LABEL_79;
			}
		}
		if (v10)
		{
			v46 = 0i64;
			v21 = sub_1407B1D40(v16, &v46);
			if (v21 < 0)
			{
				if (v46)
				{
					(*(void(__fastcall**)(int*))(*(_QWORD*)v46 + 8i64))(v46);
					(*(void(__fastcall**)(int*))(*(_QWORD*)v48 + 8i64))(v48);
					goto LABEL_95;
				}
				goto LABEL_93;
			}
			v36 = v46;
			v21 = (*(__int64(__fastcall**)(int*, int*, int*))(*(_QWORD*)v48 + 200i64))(v48, v8, v46);
			if (v21 < 0)
			{
				if (v36)
				{
					(*(void(__fastcall**)(int*))(*(_QWORD*)v36 + 8i64))(v36);
					(*(void(__fastcall**)(int*))(*(_QWORD*)v48 + 8i64))(v48);
					goto LABEL_95;
				}
				goto LABEL_93;
			}
			v10 = 0;
			if (v36)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v36 + 8i64))(v36);
		}
		else
		{
			if ((char*)v45 == v52)
			{
				v37 = (__int64)v50;
			}
			else
			{
				sub_14001C480((__int64)v52, v16, *(int**)(v45 + 16));
				v37 = (__int64)v54;
				v8 = v53;
				v50 = v54;
			}
			if (*(_WORD*)v8 == 34)
			{
				v38 = (char*)v8 + 2 * ((v37 - (__int64)v8) >> 1) - 2;
				if (*(_WORD*)v38 == 34)
				{
					v39 = (int*)((char*)v8 + 2);
					v40 = v38 - ((char*)v8 + 2);
					v8 = 0i64;
					v46 = 0i64;
					v41 = v40 >> 1;
					v51 = v39;
					if ((unsigned __int64)(v41 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v8 = sub_14018B280(2 * (v41 + 1), 0);
						v46 = (int*)((char*)v8 + 2 * v41 + 2);
						v39 = v51;
					}
					sub_1407DB590(v8, v39, 2 * v41);
					v50 = (int*)((char*)v8 + 2 * v41);
					if (v50)
						*((_WORD*)v8 + v41) = 0;
					v42 = (__int64)v53;
					v54 = (int*)((char*)v8 + 2 * v41);
					v53 = v8;
					v55 = v46;
					if (v42)
						sub_14018B900(v42, 0);
				}
			}
			v10 = 1;
		}
	LABEL_79:
		v9 = a2;
		v12 = v45 + 32;
	}
	v43 = a3;
LABEL_91:
	if (*v43 == *v9)
	{
		v21 = -2147467259;
	LABEL_93:
		(*(void(__fastcall**)(int*))(*(_QWORD*)v48 + 8i64))(v48);
		goto LABEL_95;
	}
	v21 = 0;
	*a4 = v48;
LABEL_95:
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return (unsigned int)v21;
}
// 1407B17B8: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B18B1: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B1928: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B19F8: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B1A8D: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B1B00: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B1160: using guessed type __int64 __fastcall sub_1407B1160(_QWORD, _QWORD, _QWORD, _QWORD);
// 1409FAD94: using guessed type _WORD word_1409FAD94[64];
// 1409FAE1C: using guessed type _WORD word_1409FAE1C[16];
// 1409FAE3C: using guessed type _WORD word_1409FAE3C[28];
// 1409FAE7C: using guessed type _WORD word_1409FAE7C[16];
// 1409FAE9C: using guessed type _WORD word_1409FAE9C[24];
// 1409FAECC: using guessed type _WORD word_1409FAECC[12];
// 140B79270: using guessed type __int64 (__fastcall *off_140B79270[10])();
// 1407B1670: using guessed type __int64 var_20[4];
// 1407B1670: using guessed type char var_48[8];

