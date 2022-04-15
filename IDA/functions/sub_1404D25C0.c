//----- (00000001404D25C0) ----------------------------------------------------
__int64 __fastcall sub_1404D25C0(_QWORD* a1)
{
	_QWORD* v1; // r15
	unsigned int v2; // r14d
	__int64(__fastcall * v3)(wchar_t**, __int64); // rax
	unsigned int v4; // eax
	__int64 v5; // rax
	int* v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	int v9; // eax
	_QWORD* v10; // rsi
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // r15
	int* v14; // rdx
	__int64 v15; // rcx
	unsigned int i; // r14d
	unsigned int v17; // eax
	__int64 v18; // rax
	unsigned int* v19; // rbx
	__int64 v20; // r8
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	__int64 v25; // rsi
	int* v26; // rax
	int* v27; // rdi
	__int64 v28; // r9
	unsigned int v29; // r8d
	__int64 v30; // rcx
	__int64 v31; // rbx
	bool v32; // al
	__int64 v33; // rdx
	__int64 j; // rax
	__int64 v35; // rax
	int* v36; // rcx
	__int64 v37; // rax
	__int64 v38; // rax
	_QWORD* v39; // r9
	_QWORD* v40; // rbx
	__int64 v41; // r13
	_DWORD* v42; // r10
	unsigned int v43; // edx
	__int64 v44; // r8
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	_QWORD* v49; // rsi
	__int64 v50; // r8
	__int64 v51; // rax
	unsigned __int64 v52; // rdx
	__int64 v53; // r9
	unsigned __int64 v54; // rcx
	_QWORD* v55; // rax
	__int64 v56; // rdi
	int* v57; // rax
	int* v58; // r14
	int* v59; // rdx
	__int64 v60; // rcx
	__int64 v61; // r8
	__int64 v62; // rax
	unsigned __int64 v63; // rcx
	_QWORD* v64; // rax
	void(__fastcall * **v65)(_QWORD, __int64); // rcx
	__int64 v66; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v70; // [rsp+30h] [rbp-38h] BYREF
	int* v71; // [rsp+38h] [rbp-30h]
	char v72[24]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v74; // [rsp+A8h] [rbp+40h] BYREF
	__int64 v75; // [rsp+B0h] [rbp+48h] BYREF
	int* v76; // [rsp+B8h] [rbp+50h] BYREF

	v1 = a1;
	v2 = 0;
	while (1)
	{
		v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		if (qword_140C63838)
		{
			v4 = qword_140C63838(off_140A6CC10, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C64CAC)
			goto LABEL_27;
		if ((int)sub_1402309E0() < 0)
			break;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64718 + 40i64))(qword_140C64718);
	LABEL_7:
		if (v2 >= v4)
			break;
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6CC10, v2, qword_140C63858);
		LABEL_15:
			v6 = (int*)v5;
			goto LABEL_16;
		}
		if (dword_140C64CAC)
		{
			v6 = 0i64;
		}
		else
		{
			if ((int)sub_1402309E0() >= 0)
			{
				v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64718 + 32i64))(qword_140C64718, v2);
				goto LABEL_15;
			}
			v6 = 0i64;
		}
	LABEL_16:
		v7 = sub_14018B280(72i64, 0);
		v8 = v7;
		if (v7)
		{
			*((_QWORD*)v7 + 1) = 0i64;
			*((_QWORD*)v7 + 3) = 0i64;
			*((_QWORD*)v7 + 2) = 0i64;
			*((_QWORD*)v7 + 4) = 0i64;
			*((_QWORD*)v7 + 6) = 0i64;
			*((_QWORD*)v7 + 5) = 0i64;
			*((_QWORD*)v7 + 8) = 0i64;
			*((_QWORD*)v7 + 7) = 0i64;
			*(_QWORD*)v7 = off_140B69010;
		}
		else
		{
			v8 = 0i64;
		}
		if ((*(int(__fastcall**)(int*, int*))(*(_QWORD*)v8 + 8i64))(v8, v6) >= 0)
		{
			v9 = *v6;
			v71 = v8;
			LODWORD(v70) = v9;
			sub_140055F80((__int64)(v1 + 1), (__int64)v72, &v70);
			v10 = &v1[2 * *(int*)(*((_QWORD*)v8 + 1) + 4i64)];
			v11 = v10[10];
			v12 = sub_14018DB00(v10[9], v11 + 1, 8i64);
			v13 = v12;
			*(_QWORD*)&v12[2 * v11] = v8;
			v14 = (int*)v10[9];
			if (v14 != v12)
			{
				sub_1407DB590(v12, v14, 8i64 * v10[10]);
				v15 = v10[9];
				if (v15)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
				v10[9] = v13;
			}
			v1 = a1;
			v10[10] = v11 + 1;
			++v2;
		}
		else
		{
			(**(void(__fastcall***)(int*, __int64))v8)(v8, 1i64);
			++v2;
		}
	}
	v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
LABEL_27:
	for (i = 0; ; ++i)
	{
	LABEL_28:
		if (v3)
		{
			v17 = v3(off_140A6CC48, qword_140C63858);
			goto LABEL_33;
		}
		if (dword_140C64C80 || (int)sub_140230E20() < 0)
			break;
		v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D60 + 40i64))(qword_140C64D60);
	LABEL_33:
		if (i >= v17)
			break;
		if (qword_140C63848)
		{
			v18 = qword_140C63848(off_140A6CC48, i, qword_140C63858);
		}
		else
		{
			if (dword_140C64C80)
			{
				v19 = 0i64;
				goto LABEL_42;
			}
			if ((int)sub_140230E20() < 0)
			{
				v19 = 0i64;
				goto LABEL_42;
			}
			v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D60 + 32i64))(qword_140C64D60, i);
		}
		v19 = (unsigned int*)v18;
	LABEL_42:
		v20 = v1[2];
		v21 = v20;
		v22 = *(_QWORD*)(v20 + 8);
		while (v22)
		{
			if (*(_DWORD*)(v22 + 32) < v19[1])
			{
				v22 = *(_QWORD*)(v22 + 24);
			}
			else
			{
				v21 = v22;
				v22 = *(_QWORD*)(v22 + 16);
			}
		}
		if (v21 == v20 || v19[1] < *(_DWORD*)(v21 + 32))
		{
			v75 = v1[2];
			v23 = &v75;
		}
		else
		{
			v74 = v21;
			v23 = &v74;
		}
		v24 = *v23;
		if (v24 != v20)
		{
			v25 = *(_QWORD*)(v24 + 40);
			v26 = sub_14018B280(32i64, 0);
			v27 = v26;
			if (v26)
			{
				*((_QWORD*)v26 + 1) = 0i64;
				*((_QWORD*)v26 + 3) = 0i64;
				*((_QWORD*)v26 + 2) = 0i64;
				*(_QWORD*)v26 = off_140B69008;
			}
			else
			{
				v27 = 0i64;
			}
			if ((int)sub_1404D3050(v27, (__int64)v19) >= 0)
			{
				sub_1404D2EA0(v25, (__int64)v27);
				v28 = v1[6];
				v29 = *v19;
				v30 = *(_QWORD*)(v28 + 8);
				LODWORD(v70) = *v19;
				v71 = v27;
				v31 = v28;
				v32 = 1;
				while (v30)
				{
					v31 = v30;
					v32 = v29 < *(_DWORD*)(v30 + 32);
					if (v29 >= *(_DWORD*)(v30 + 32))
						v30 = *(_QWORD*)(v30 + 24);
					else
						v30 = *(_QWORD*)(v30 + 16);
				}
				v33 = v31;
				if (v32)
				{
					if (v31 == *(_QWORD*)(v28 + 16))
					{
						sub_140055E80((__int64)(v1 + 5), &v76, v30, v31, &v70);
						v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
						++i;
						goto LABEL_28;
					}
					if (*(_BYTE*)v31 || *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8i64) != v31)
					{
						v33 = *(_QWORD*)(v31 + 16);
						if (v33)
						{
							for (j = *(_QWORD*)(v33 + 24); j; j = *(_QWORD*)(j + 24))
								v33 = j;
						}
						else
						{
							v33 = *(_QWORD*)(v31 + 8);
							if (v31 == *(_QWORD*)(v33 + 16))
							{
								do
								{
									v35 = v33;
									v33 = *(_QWORD*)(v33 + 8);
								} while (v35 == *(_QWORD*)(v33 + 16));
							}
						}
					}
					else
					{
						v33 = *(_QWORD*)(v31 + 24);
					}
				}
				if (*(_DWORD*)(v33 + 32) < v29)
				{
					if (v31 == v28 || v29 < *(_DWORD*)(v31 + 32))
					{
						v36 = sub_14018B280(48i64, 0);
						if (v36 != (int*)-32i64)
						{
							*((_QWORD*)v36 + 4) = v70;
							*((_QWORD*)v36 + 5) = v27;
						}
						*(_QWORD*)(v31 + 16) = v36;
						v38 = v1[6];
						if (v31 == v38)
						{
							*(_QWORD*)(v38 + 8) = v36;
							*(_QWORD*)(v1[6] + 24i64) = v36;
						}
						else if (v31 == *(_QWORD*)(v38 + 16))
						{
							*(_QWORD*)(v38 + 16) = v36;
						}
					}
					else
					{
						v36 = sub_14018B280(48i64, 0);
						if (v36 != (int*)-32i64)
						{
							*((_QWORD*)v36 + 4) = v70;
							*((_QWORD*)v36 + 5) = v27;
						}
						*(_QWORD*)(v31 + 24) = v36;
						v37 = v1[6];
						if (v31 == *(_QWORD*)(v37 + 24))
							*(_QWORD*)(v37 + 24) = v36;
					}
					*((_QWORD*)v36 + 1) = v31;
					*((_QWORD*)v36 + 2) = 0i64;
					*((_QWORD*)v36 + 3) = 0i64;
					sub_1400081C0((__int64)v36, (_QWORD*)(v1[6] + 8i64));
					++v1[7];
				}
			}
			else if (v27)
			{
				(**(void(__fastcall***)(int*, __int64))v27)(v27, 1i64);
				v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
				++i;
				goto LABEL_28;
			}
		}
		v3 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	}
	v39 = (_QWORD*)v1[2];
	v40 = (_QWORD*)v39[2];
	if (v40 != v39)
	{
		while (1)
		{
			v41 = v40[5];
			v42 = *(_DWORD**)(v41 + 8);
			v43 = v42[20];
			if (v43)
				break;
		LABEL_124:
			v66 = v40[3];
			if (v66)
			{
				v40 = (_QWORD*)v40[3];
				for (k = *(_QWORD**)(v66 + 16); k; k = (_QWORD*)k[2])
					v40 = k;
			}
			else
			{
				for (m = v40[1]; v40 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v40 = (_QWORD*)m;
				if (v40[3] != m)
					v40 = (_QWORD*)m;
			}
			v39 = (_QWORD*)v1[2];
			if (v40 == v39)
				return 0i64;
		}
		v44 = v1[2];
		v45 = v44;
		v46 = *(_QWORD*)(v44 + 8);
		while (v46)
		{
			if (*(_DWORD*)(v46 + 32) < v43)
			{
				v46 = *(_QWORD*)(v46 + 24);
			}
			else
			{
				v45 = v46;
				v46 = *(_QWORD*)(v46 + 16);
			}
		}
		if (v45 == v44 || v43 < *(_DWORD*)(v45 + 32))
		{
			v76 = (int*)v1[2];
			v47 = (__int64*)&v76;
		}
		else
		{
			v75 = v45;
			v47 = &v75;
		}
		v48 = *v47;
		if ((_QWORD*)v48 == v39 || (v49 = *(_QWORD**)(v48 + 40)) == 0i64)
		{
			LODWORD(v74) = *v42;
			sub_1404D2F60((__int64)(v1 + 1), &v74);
			v61 = v40[5];
			v62 = *(_QWORD*)(v61 + 8);
			v52 = 0i64;
			v53 = 2i64 * *(int*)(v62 + 4);
			v63 = v1[2 * *(int*)(v62 + 4) + 10];
			if (!v63)
				goto LABEL_122;
			v64 = (_QWORD*)v1[2 * *(int*)(v62 + 4) + 9];
			while (*v64 != v61)
			{
				++v52;
				++v64;
				if (v52 >= v63)
					goto LABEL_122;
			}
		}
		else
		{
			if ((*(_BYTE*)(v49[1] + 84i64) & 1) == 0 || !v49[6] || !*(_QWORD*)v49[5])
			{
				v56 = v49[6];
				v57 = sub_14018DB00(v49[5], v56 + 1, 8i64);
				v58 = v57;
				*(_QWORD*)&v57[2 * v56] = v41;
				v59 = (int*)v49[5];
				if (v59 != v57)
				{
					sub_1407DB590(v57, v59, 8i64 * v49[6]);
					v60 = v49[5];
					if (v60)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v60 - 16) + 8i64))(v60 - 16);
					v49[5] = v58;
				}
				v49[6] = v56 + 1;
				v1 = a1;
				*(_QWORD*)(v40[5] + 32i64) = v49;
				goto LABEL_124;
			}
			LODWORD(v74) = *v42;
			sub_1404D2F60((__int64)(v1 + 1), &v74);
			v50 = v40[5];
			v51 = *(_QWORD*)(v50 + 8);
			v52 = 0i64;
			v53 = 2i64 * *(int*)(v51 + 4);
			v54 = v1[2 * *(int*)(v51 + 4) + 10];
			if (!v54)
				goto LABEL_122;
			v55 = (_QWORD*)v1[2 * *(int*)(v51 + 4) + 9];
			while (*v55 != v50)
			{
				++v52;
				++v55;
				if (v52 >= v54)
					goto LABEL_122;
			}
		}
		sub_140007270((__int64)&v1[v53 + 9], v52);
	LABEL_122:
		v65 = (void(__fastcall***)(_QWORD, __int64))v40[5];
		if (v65)
			(**v65)(v65, 1i64);
		goto LABEL_124;
	}
	return 0i64;
}
// 1404D29CF: conditional instruction was optimized away because rcx.8==0
// 140A6CC10: using guessed type wchar_t *off_140A6CC10[2];
// 140A6CC48: using guessed type wchar_t *off_140A6CC48[2];
// 140B69008: using guessed type __int64 (__fastcall *off_140B69008[26])();
// 140B69010: using guessed type __int64 (__fastcall *off_140B69010[25])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64718: using guessed type __int64 qword_140C64718;
// 140C64C80: using guessed type int dword_140C64C80;
// 140C64CAC: using guessed type int dword_140C64CAC;
// 140C64D60: using guessed type __int64 qword_140C64D60;
// 1404D25C0: using guessed type char var_28[24];

