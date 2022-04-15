//----- (000000014019CC10) ----------------------------------------------------
__int64 __fastcall sub_14019CC10(int* a1, signed int a2, const __m128i* a3)
{
	__int64 v3; // r13
	unsigned int v5; // r14d
	int* v7; // rax
	unsigned int v8; // r12d
	unsigned __int16* v9; // r15
	int v10; // eax
	int* v11; // rdi
	int* v12; // rax
	__int64 v13; // rdx
	int* v14; // rsi
	unsigned __int64 v15; // r14
	unsigned __int64 v16; // r14
	int* v17; // r12
	int* v18; // rax
	int v19; // eax
	unsigned __int16* v20; // r13
	int* v21; // rax
	__int64 v22; // rcx
	int* v23; // r15
	__int64 v24; // rbx
	unsigned __int64 v25; // rbx
	int* v26; // r8
	__int64 v27; // rax
	_QWORD* v29; // rax
	_QWORD* v30; // rbx
	int* v31; // rdx
	unsigned __int64 v32; // rsi
	int v33; // eax
	int* v34; // rax
	int* v35; // rcx
	__int64 v36; // rbx
	int v37; // ecx
	__int64 v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned __int16* v45; // rdx
	__int64 v46; // r14
	__int64 v47; // r8
	int v48; // esi
	__int64 v49; // rcx
	unsigned __int16 v50; // ax
	int v51; // eax
	int* v52; // rbx
	unsigned __int64 v53; // rsi
	__int64 v54; // rax
	__int64 v55; // rcx
	__int64 v56; // r8
	char v57[8]; // [rsp+30h] [rbp-89h] BYREF
	int* v58; // [rsp+38h] [rbp-81h]
	__int64 v59; // [rsp+40h] [rbp-79h]
	__int64 v60; // [rsp+50h] [rbp-69h] BYREF
	int* v61; // [rsp+58h] [rbp-61h]
	int* v62; // [rsp+60h] [rbp-59h]
	int* v63; // [rsp+68h] [rbp-51h]
	__int64 v64; // [rsp+70h] [rbp-49h] BYREF
	unsigned __int16* v65; // [rsp+78h] [rbp-41h]
	int* v66; // [rsp+80h] [rbp-39h]
	int* v67; // [rsp+88h] [rbp-31h]
	__int64 v68; // [rsp+90h] [rbp-29h] BYREF
	__int64 v69; // [rsp+98h] [rbp-21h]
	__int64 v70; // [rsp+A0h] [rbp-19h] BYREF
	__int64 v71; // [rsp+A8h] [rbp-11h]
	char v72[24]; // [rsp+C0h] [rbp+7h] BYREF
	int* v73; // [rsp+120h] [rbp+67h] BYREF
	signed int v74; // [rsp+128h] [rbp+6Fh]
	const __m128i* v75; // [rsp+130h] [rbp+77h]
	int* v76; // [rsp+138h] [rbp+7Fh] BYREF

	v75 = a3;
	v74 = a2;
	v73 = a1;
	v3 = qword_140C63750;
	v5 = a2;
	v69 = qword_140C63750;
	if (a2 > *(_DWORD*)qword_140C63750)
		return 2147500037i64;
	v7 = sub_14018B280(16i64, 0);
	v8 = 0;
	v9 = (unsigned __int16*)v7;
	v61 = v7;
	v62 = v7;
	v63 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v76 = 0i64;
	v59 = 0i64;
	v58 = sub_14018B280(40i64, 0);
	*(_BYTE*)v58 = 0;
	*((_QWORD*)v58 + 1) = 0i64;
	*((_QWORD*)v58 + 2) = v58;
	*((_QWORD*)v58 + 3) = v58;
	v10 = sub_14019C5C0(a3, &v76);
	v11 = v76;
	if (v10 < 0)
		goto LABEL_39;
	v12 = (int*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v76 + 32i64))(v76);
	v13 = *(_QWORD*)v11;
	v14 = v12;
	v73 = v12;
	v15 = 2 * ((unsigned __int64)(*(__int64(__fastcall**)(int*))(v13 + 16))(v11) >> 1);
	v16 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v11 + 32i64))(v11) + v15;
	if ((unsigned __int64)v14 >= v16)
		goto LABEL_38;
	do
	{
		v17 = v14;
		v18 = sub_14018B280(16i64, 0);
		v65 = (unsigned __int16*)v18;
		v66 = v18;
		v67 = v18 + 4;
		if (v18)
			*(_WORD*)v18 = 0;
		v19 = sub_14019A770((WCHAR**)&v73, v16, &v64);
		v20 = v65;
		v14 = v73;
		if (!v19)
			goto LABEL_14;
		v21 = v73;
		if ((unsigned __int64)v73 >= v16)
			goto LABEL_19;
		while (1)
		{
			v22 = *(unsigned __int16*)v21;
			if ((_WORD)v22 != 32 && (_WORD)v22 != 9)
				break;
			v21 = (int*)((char*)v21 + 2);
			if ((unsigned __int64)v21 >= v16)
				goto LABEL_14;
		}
		if ((unsigned __int64)v21 >= v16
			|| *(_WORD*)v21 != 61
			|| (v14 = (int*)((char*)v21 + 2), v73 = (int*)((char*)v21 + 2),
				v36 = sub_14019D200(v22, v65),
				(v68 = v36) == 0))
		{
		LABEL_14:
			if ((unsigned __int64)v14 < v16)
			{
				do
				{
					if (*(_WORD*)v14 == 13)
						break;
					if (*(_WORD*)v14 == 10)
						break;
					v14 = (int*)((char*)v14 + 2);
				} while ((unsigned __int64)v14 < v16);
				v73 = v14;
			}
		LABEL_19:
			v23 = 0i64;
			v24 = ((char*)v14 - (char*)v17) >> 1;
			if ((unsigned __int64)(v24 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v23 = sub_14018B280(2 * (v24 + 1), 0);
			v25 = 2 * v24;
			sub_1407DB590(v23, v17, v25);
			v26 = (int*)((char*)v23 + v25);
			if ((int*)((char*)v23 + v25))
				*(_WORD*)v26 = 0;
			sub_14001C310(&v60, v23, v26);
			if (v23)
				sub_14018B900((__int64)v23, 0);
			v27 = 0i64;
			while (asc_1409E3D24[++v27] != 0)
				;
			sub_14001C310(&v60, (int*)L"\r\n", (int*)&asc_1409E3D24[v27]);
		LABEL_28:
			if ((unsigned __int64)v14 < v16)
			{
				if (*(_WORD*)v14 == 13)
				{
					v14 = (int*)((char*)v14 + 2);
					v73 = v14;
				}
				if ((unsigned __int64)v14 < v16 && *(_WORD*)v14 == 10)
				{
					v14 = (int*)((char*)v14 + 2);
					v73 = v14;
				}
			}
			goto LABEL_34;
		}
		sub_140007810((__int64)v57, (__int64)v72, (unsigned __int64*)&v68);
		if ((*(_BYTE*)(v36 + 20) & 1) == 0)
		{
			v37 = *(_DWORD*)(v36 + 24);
			if (_bittest(&v37, v74))
			{
				v38 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD))(*(_QWORD*)v36 + 16i64))(
					v36,
					&v70,
					(unsigned int)v74);
				v39 = sub_14018EFA0(&v64, (__int64)L"%s=%s\r\n", *(_QWORD*)(v36 + 8), *(_QWORD*)(v38 + 8));
				sub_14001C310(&v60, (int*)v39[1], (int*)v39[2]);
				if (v65)
					sub_14018B900((__int64)v65, 0);
				if (v71)
					sub_14018B900(v71, 0);
			}
		}
		if ((unsigned __int64)v14 < v16)
		{
			while (*(_WORD*)v14 != 13 && *(_WORD*)v14 != 10)
			{
				v14 = (int*)((char*)v14 + 2);
				v73 = v14;
				if ((unsigned __int64)v14 >= v16)
					goto LABEL_34;
			}
			goto LABEL_28;
		}
	LABEL_34:
		if (v20)
			sub_14018B900((__int64)v20, 0);
	} while ((unsigned __int64)v14 < v16);
	v9 = (unsigned __int16*)v61;
	v11 = v76;
	v3 = v69;
	v8 = 0;
LABEL_38:
	v5 = v74;
LABEL_39:
	v29 = *(_QWORD**)(v3 + 16);
	v30 = (_QWORD*)v29[2];
	if (v30 != v29)
	{
		v31 = v58;
		do
		{
			v32 = v30[5];
			if ((*(_BYTE*)(v32 + 20) & 1) == 0)
			{
				v33 = *(_DWORD*)(v32 + 24);
				if (_bittest(&v33, v5))
				{
					v34 = (int*)*((_QWORD*)v31 + 1);
					v35 = v31;
					if (!v34)
						goto LABEL_64;
					do
					{
						if (*((_QWORD*)v34 + 4) < v32)
						{
							v34 = (int*)*((_QWORD*)v34 + 3);
						}
						else
						{
							v35 = v34;
							v34 = (int*)*((_QWORD*)v34 + 2);
						}
					} while (v34);
					if (v35 == v31 || v32 < *((_QWORD*)v35 + 4))
					{
					LABEL_64:
						v40 = (*(__int64(__fastcall**)(_QWORD, __int64*, _QWORD))(*(_QWORD*)v32 + 16i64))(v30[5], &v64, v5);
						v41 = sub_14018EFA0(&v70, (__int64)L"%s=%s\r\n", *(_QWORD*)(v32 + 8), *(_QWORD*)(v40 + 8));
						sub_14001C310(&v60, (int*)v41[1], (int*)v41[2]);
						if (v71)
							sub_14018B900(v71, 0);
						if (v65)
							sub_14018B900((__int64)v65, 0);
						v31 = v58;
					}
				}
			}
			v42 = v30[3];
			if (v42)
			{
				v30 = (_QWORD*)v30[3];
				for (i = *(_QWORD**)(v42 + 16); i; i = (_QWORD*)i[2])
					v30 = i;
			}
			else
			{
				for (j = v30[1]; v30 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v30 = (_QWORD*)j;
				if (v30[3] != j)
					v30 = (_QWORD*)j;
			}
		} while (v30 != *(_QWORD**)(v3 + 16));
		v9 = (unsigned __int16*)v61;
	}
	v73 = 0i64;
	v45 = v9;
	v46 = ((char*)v62 - (char*)v9) >> 1;
	v47 = v46;
	if (!v9 && v46)
	{
		v48 = -2147024809;
		goto LABEL_96;
	}
	v49 = 0i64;
	if (v46)
	{
		do
		{
			v50 = *v45;
			if (*v45 >= 0x80u)
			{
				if (v50 >= 0x1000u)
					v49 += 3i64;
				else
					v49 += 2i64;
			}
			else
			{
				++v49;
			}
			if (!v50)
				break;
			++v45;
			--v47;
		} while (v47);
	}
	v51 = sub_1401C5690(v49, &v73, 0);
	v52 = v73;
	v48 = v51;
	if (v51 < 0
		|| (v53 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v73 + 16i64))(v73),
			v54 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v52 + 32i64))(v52),
			v48 = sub_14018EB80(v9, v46, v54, v53, 0i64),
			v48 < 0)
		|| (v48 = sub_1401B6F30(v55, v75, v56, (__int64)v52), v48 < 0))
	{
		if (v52)
			(*(void(__fastcall**)(int*))(*(_QWORD*)v52 + 8i64))(v52);
	LABEL_96:
		v8 = v48;
	}
	else
	{
		(*(void(__fastcall**)(int*))(*(_QWORD*)v52 + 8i64))(v52);
	}
	sub_140008410((__int64)v57);
	sub_14018B900((__int64)v58, 0);
	if (v11)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v11 + 8i64))(v11);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return v8;
}
// 14019D16B: variable 'v55' is possibly undefined
// 14019D16B: variable 'v56' is possibly undefined
// 1409E3D24: using guessed type wchar_t asc_1409E3D24[3];
// 140A441D0: using guessed type wchar_t aSS_7[8];
// 140A441E0: using guessed type wchar_t aSS_6[8];
// 140C63750: using guessed type __int64 qword_140C63750;
// 14019CC10: using guessed type char var_50[24];
// 14019CC10: using guessed type char var_E0[8];

