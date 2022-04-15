//----- (00000001406FFBF0) ----------------------------------------------------
__int64 __fastcall sub_1406FFBF0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	unsigned int v4; // esi
	unsigned int v5; // eax
	__int64 v6; // rax
	int* v7; // rdi
	int* v8; // rcx
	__int64 v9; // rax
	unsigned int v10; // edx
	int** v11; // rax
	int* v12; // rax
	int* v13; // rbx
	int* v14; // rax
	int* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx
	int* v18; // rax
	__int64 v19; // rcx
	int v20; // r15d
	__int64 i; // rbx
	unsigned int v22; // edi
	int v23; // r15d
	__int64 v24; // rax
	int* v25; // rsi
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // rax
	int v30; // r15d
	__int64 v31; // rdi
	__int64 v32; // rax
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rcx
	__int16* v36; // rax
	__int64 v37; // rdx
	__int64 v38; // rdi
	__int64 v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdi
	__int64 v42; // rax
	int v43; // r12d
	_QWORD* v44; // rcx
	_QWORD* v45; // rdi
	__int64 v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rsi
	__int64 v49; // rax
	unsigned int v50; // esi
	__int64 v51; // rax
	int* v52; // r15
	int v53; // r13d
	__int64 v54; // rsi
	__int64 v55; // rax
	__int64 v56; // rax
	__int64* v57; // rax
	__int64 v58; // rcx
	__int16* v59; // rax
	__int64 v60; // rdx
	__int64 v61; // rsi
	_QWORD** v62; // rax
	_QWORD* v63; // rdi
	__int64 v64; // rcx
	__int64 v65; // rax
	__int64 j; // rax
	__int64 k; // rax
	__int64 v68; // rdi
	__int64 v69; // rbx
	_QWORD v71[2]; // [rsp+28h] [rbp-19h] BYREF
	char v72[8]; // [rsp+38h] [rbp-9h] BYREF
	int* v73; // [rsp+40h] [rbp-1h]
	__int64 v74; // [rsp+48h] [rbp+7h]
	int* v75; // [rsp+A8h] [rbp+67h] BYREF
	int* v76; // [rsp+B0h] [rbp+6Fh] BYREF
	int* v77; // [rsp+B8h] [rbp+77h] BYREF
	int* v78; // [rsp+C0h] [rbp+7Fh] BYREF

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v74 = 0i64;
	v4 = 0;
	v73 = sub_14018B280(48i64, 0);
	*(_BYTE*)v73 = 0;
	*((_QWORD*)v73 + 1) = 0i64;
	*((_QWORD*)v73 + 2) = v73;
	*((_QWORD*)v73 + 3) = v73;
	while (1)
	{
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A69560, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C64E58 || (int)sub_1401EE300() < 0)
			break;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C68 + 40i64))(qword_140C63C68);
	LABEL_9:
		if (v4 >= v5)
			break;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A69560, v4, qword_140C63858);
		LABEL_17:
			v7 = (int*)v6;
			goto LABEL_18;
		}
		if (dword_140C64E58)
		{
			v7 = 0i64;
		}
		else
		{
			if ((int)sub_1401EE300() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C68 + 32i64))(qword_140C63C68, v4);
				goto LABEL_17;
			}
			v7 = 0i64;
		}
	LABEL_18:
		v8 = v73;
		v9 = *((_QWORD*)v73 + 1);
		if (!v9)
			goto LABEL_27;
		v10 = v7[1];
		do
		{
			if (*(_DWORD*)(v9 + 32) < v10)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = (int*)v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		} while (v9);
		if (v8 == v73 || v10 < v8[8])
		{
		LABEL_27:
			v76 = v73;
			v11 = &v76;
		}
		else
		{
			v75 = v8;
			v11 = &v75;
		}
		v12 = *v11;
		if (v12 == v73)
		{
			v13 = sub_14018B280(16i64, 0);
			if (v13)
			{
				v14 = sub_14018B280(24i64, 0);
				*((_QWORD*)v13 + 1) = v14;
				*(_QWORD*)v14 = v14;
				*(_QWORD*)(*((_QWORD*)v13 + 1) + 8i64) = *((_QWORD*)v13 + 1);
			}
			else
			{
				v13 = 0i64;
			}
			v15 = v73;
			v16 = *((_QWORD*)v73 + 1);
			while (v16)
			{
				if (*(_DWORD*)(v16 + 32) < (unsigned int)v7[1])
				{
					v16 = *(_QWORD*)(v16 + 24);
				}
				else
				{
					v15 = (int*)v16;
					v16 = *(_QWORD*)(v16 + 16);
				}
			}
			if (v15 == v73 || v7[1] < (unsigned int)v15[8])
			{
				LODWORD(v71[0]) = v7[1];
				v71[1] = 0i64;
				v77 = v15;
				sub_140055C60((__int64)v72, &v78, (__int64*)&v77, v71);
				v15 = v78;
			}
			*((_QWORD*)v15 + 5) = v13;
		}
		else
		{
			v13 = (int*)*((_QWORD*)v12 + 5);
		}
		v17 = *((_QWORD*)v13 + 1);
		v18 = sub_14018B280(24i64, 0);
		if (v18 != (int*)-16i64)
			v18[4] = *v7;
		*(_QWORD*)v18 = v17;
		++v4;
		*((_QWORD*)v18 + 1) = *(_QWORD*)(v17 + 8);
		**(_QWORD**)(v17 + 8) = v18;
		*(_QWORD*)(v17 + 8) = v18;
	}
	v19 = (__int64)v73;
	v20 = 0;
	for (i = *((_QWORD*)v73 + 2); (int*)i != v73; v20 = (int)v75)
	{
		v22 = *(_DWORD*)(i + 32);
		v23 = v20 + 1;
		LODWORD(v75) = v23;
		if (qword_140C63840)
		{
			v24 = qword_140C63840(off_140A69528, v22, qword_140C63858);
		}
		else
		{
			if (dword_140C639B0)
			{
				v25 = 0i64;
				goto LABEL_54;
			}
			if ((int)sub_1401EDEC0() < 0)
			{
				v25 = 0i64;
				goto LABEL_54;
			}
			v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A08 + 24i64))(qword_140C63A08, v22);
		}
		v25 = (int*)v24;
	LABEL_54:
		v26 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v26 + 8) = 3;
		*(double*)v26 = (double)v23;
		v27 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v27 + 120) >= *(_QWORD*)(v27 + 112))
			sub_14005E2C0(a1);
		v28 = *(_QWORD*)(a1 + 16);
		v29 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v28 + 8) = 5;
		*(_QWORD*)v28 = v29;
		*(_QWORD*)(a1 + 16) += 16i64;
		v30 = *v25;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v31 = *(_QWORD*)(a1 + 16);
		v32 = sub_140062650(a1, (unsigned __int64*)&unk_1409F8474, 3ui64);
		*(_DWORD*)(v31 + 8) = 4;
		*(_QWORD*)v31 = v32;
		*(_QWORD*)(a1 + 16) += 16i64;
		v33 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v33 + 8) = 3;
		*(double*)v33 = (double)v30;
		*(_QWORD*)(a1 + 16) += 16i64;
		v34 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v34, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		v36 = sub_14034BDD0(v35, v25[1]);
		sub_1400F0090(a1, v37, (unsigned __int64*)"strName", (unsigned __int16*)v36);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v38 = *(_QWORD*)(a1 + 16);
		v39 = sub_140062650(a1, (unsigned __int64*)"tSubCategories", 0xEui64);
		*(_DWORD*)(v38 + 8) = 4;
		*(_QWORD*)v38 = v39;
		v40 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v40 + 120) >= *(_QWORD*)(v40 + 112))
			sub_14005E2C0(a1);
		v41 = *(_QWORD*)(a1 + 16);
		v42 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v41 + 8) = 5;
		v43 = 0;
		*(_QWORD*)v41 = v42;
		*(_QWORD*)(a1 + 16) += 16i64;
		v44 = *(_QWORD**)(*(_QWORD*)(i + 40) + 8i64);
		v45 = (_QWORD*)*v44;
		if ((_QWORD*)*v44 != v44)
		{
			while (1)
			{
				v46 = *(_QWORD*)(a1 + 16);
				++v43;
				*(_DWORD*)(v46 + 8) = 3;
				*(double*)v46 = (double)v43;
				v47 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v47 + 120) >= *(_QWORD*)(v47 + 112))
					sub_14005E2C0(a1);
				v48 = *(_QWORD*)(a1 + 16);
				v49 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v48 + 8) = 5;
				*(_QWORD*)v48 = v49;
				*(_QWORD*)(a1 + 16) += 16i64;
				v50 = *((_DWORD*)v45 + 4);
				if (qword_140C63840)
					break;
				if (dword_140C64E58)
				{
					v52 = 0i64;
				}
				else
				{
					if ((int)sub_1401EE300() >= 0)
					{
						v51 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C68 + 24i64))(
							qword_140C63C68,
							v50);
						goto LABEL_72;
					}
					v52 = 0i64;
				}
			LABEL_73:
				v53 = *v52;
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v54 = *(_QWORD*)(a1 + 16);
				v55 = sub_140062650(a1, (unsigned __int64*)&unk_1409F842C, 3ui64);
				*(_DWORD*)(v54 + 8) = 4;
				*(_QWORD*)v54 = v55;
				*(_QWORD*)(a1 + 16) += 16i64;
				v56 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v56 + 8) = 3;
				*(double*)v56 = (double)v53;
				*(_QWORD*)(a1 + 16) += 16i64;
				v57 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v57, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v59 = sub_14034BDD0(v58, v52[2]);
				sub_1400F0090(a1, v60, (unsigned __int64*)"strName", (unsigned __int16*)v59);
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v45 = (_QWORD*)*v45;
				if (v45 == *(_QWORD**)(*(_QWORD*)(i + 40) + 8i64))
					goto LABEL_76;
			}
			v51 = qword_140C63840(off_140A69560, v50, qword_140C63858);
		LABEL_72:
			v52 = (int*)v51;
			goto LABEL_73;
		}
	LABEL_76:
		v61 = *(_QWORD*)(i + 40);
		if (v61)
		{
			v62 = *(_QWORD***)(v61 + 8);
			v63 = *v62;
			if (*v62 != v62)
			{
				do
				{
					v64 = (__int64)v63;
					v63 = (_QWORD*)*v63;
					sub_14018B900(v64, 0);
				} while (v63 != *(_QWORD**)(v61 + 8));
			}
			**(_QWORD**)(v61 + 8) = *(_QWORD*)(v61 + 8);
			*(_QWORD*)(*(_QWORD*)(v61 + 8) + 8i64) = *(_QWORD*)(v61 + 8);
			sub_14018B900(*(_QWORD*)(v61 + 8), 0);
			sub_14018B900(v61, 0);
		}
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		v65 = *(_QWORD*)(i + 24);
		if (v65)
		{
			i = *(_QWORD*)(i + 24);
			for (j = *(_QWORD*)(v65 + 16); j; j = *(_QWORD*)(j + 16))
				i = j;
		}
		else
		{
			for (k = *(_QWORD*)(i + 8); i == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				i = k;
			if (*(_QWORD*)(i + 24) != k)
				i = k;
		}
		v19 = (__int64)v73;
	}
	if (v74)
	{
		v68 = *(_QWORD*)(v19 + 8);
		if (v68)
		{
			do
			{
				sub_1400083B0((__int64)v72, *(_QWORD*)(v68 + 24));
				v69 = *(_QWORD*)(v68 + 16);
				sub_14018B900(v68, 0);
				v68 = v69;
			} while (v69);
			v19 = (__int64)v73;
		}
		*(_QWORD*)(v19 + 16) = v19;
		*((_QWORD*)v73 + 1) = 0i64;
		*((_QWORD*)v73 + 3) = v73;
		v19 = (__int64)v73;
		v74 = 0i64;
	}
	sub_14018B900(v19, 0);
	return 1i64;
}
// 1406FFF93: variable 'v35' is possibly undefined
// 1406FFFA5: variable 'v37' is possibly undefined
// 140700172: variable 'v58' is possibly undefined
// 140700184: variable 'v60' is possibly undefined
// 140A69528: using guessed type wchar_t *off_140A69528[2];
// 140A69560: using guessed type wchar_t *off_140A69560[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639B0: using guessed type int dword_140C639B0;
// 140C63A08: using guessed type __int64 qword_140C63A08;
// 140C63C68: using guessed type __int64 qword_140C63C68;
// 140C64E58: using guessed type int dword_140C64E58;
// 1406FFBF0: using guessed type char var_60[8];

