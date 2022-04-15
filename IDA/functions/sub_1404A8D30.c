//----- (00000001404A8D30) ----------------------------------------------------
__int64 __fastcall sub_1404A8D30(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r15d
	unsigned int i; // esi
	_DWORD* v5; // rax
	_DWORD* v6; // rdi
	int v7; // r14d
	unsigned int v8; // ebx
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rbx
	unsigned int v12; // edi
	int* v13; // rcx
	int v14; // eax
	int* v15; // rax
	int* v16; // rcx
	int v17; // eax
	int* v18; // rax
	int v19; // eax
	unsigned int v20; // ebx
	unsigned int v21; // ecx
	_DWORD* v22; // rax
	_DWORD* v23; // rbx
	unsigned int v24; // r13d
	__int64 v25; // rax
	int v26; // esi
	unsigned int* v27; // rdi
	__int64 v28; // r14
	__int64 v29; // r15
	unsigned int v30; // edx
	__int64 v31; // r8
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rax
	_QWORD* v36; // rbx
	__int64 v37; // rdx
	int* v38; // rdx
	__int64 v39; // rcx
	unsigned int v40; // edi
	__int64 v41; // r8
	bool v42; // al
	__int64 v43; // rdx
	__int64 v44; // rbx
	__int64 v45; // rcx
	int* v46; // rcx
	__int64 v47; // rax
	__int64 v48; // rax
	__int64 k; // rax
	__int64 v50; // rax
	__int64 v51; // r8
	bool v52; // al
	__int64 v53; // rdx
	__int64 v54; // rbx
	__int64 v55; // rcx
	__int64 j; // rax
	__int64 v57; // rax
	int* v58; // rcx
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v62[2]; // [rsp+20h] [rbp-79h] BYREF
	__int64 v63[2]; // [rsp+30h] [rbp-69h] BYREF
	__int64 v64[2]; // [rsp+40h] [rbp-59h] BYREF
	__int64 v65[2]; // [rsp+50h] [rbp-49h] BYREF
	_QWORD v66[2]; // [rsp+60h] [rbp-39h] BYREF
	char v67[16]; // [rsp+70h] [rbp-29h] BYREF
	char v68[16]; // [rsp+80h] [rbp-19h] BYREF
	char v69[16]; // [rsp+90h] [rbp-9h] BYREF
	char v70[16]; // [rsp+A0h] [rbp+7h] BYREF
	char v71[16]; // [rsp+B0h] [rbp+17h] BYREF
	int v72; // [rsp+108h] [rbp+6Fh] BYREF
	unsigned int v73; // [rsp+110h] [rbp+77h]
	__int64 v74; // [rsp+118h] [rbp+7Fh] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6A0C0, qword_140C63858);
	}
	else
	{
		if (dword_140C645C4)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401FC000() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64BF0 + 40i64))(qword_140C64BF0);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = (_DWORD*)qword_140C63848(off_140A6A0C0, i, qword_140C63858);
		}
		else
		{
			if (dword_140C645C4 || (int)sub_1401FC000() < 0)
				continue;
			v5 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BF0 + 32i64))(
				qword_140C64BF0,
				i);
		}
		v6 = v5;
		if (v5)
		{
			v7 = *v5;
			if (*v5)
			{
				v8 = v5[10];
				if (qword_140C63840)
				{
					v9 = qword_140C63840(off_140A6E3E8, v8, qword_140C63858);
					goto LABEL_22;
				}
				if (!dword_140C64634 && (int)sub_14024D920() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v8);
				LABEL_22:
					if (v9)
					{
						v10 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
						LODWORD(v62[0]) = v7;
						*v10 = v6;
						v11 = (__int64)v10;
						v62[1] = (__int64)v10;
						sub_140055F80((__int64)(a1 + 1), (__int64)v68, v62);
						v12 = *(_DWORD*)(*(_QWORD*)v11 + 56i64);
						if ((v12 & 0xFFFFFFFD) == 0)
						{
							LODWORD(v63[0]) = v7;
							v63[1] = v11;
							sub_140055F80((__int64)(a1 + 9), (__int64)v70, v63);
							v13 = *(int**)v11;
							if (!*(_DWORD*)(*(_QWORD*)v11 + 4i64))
							{
								v14 = *v13;
								v64[1] = v11;
								LODWORD(v64[0]) = v14;
								v72 = v13[10];
								v15 = sub_1404A8A10((__int64)(a1 + 25), &v72);
								sub_140055F80((__int64)v15, (__int64)v67, v64);
							}
						}
						if (v12 <= 1)
						{
							LODWORD(v65[0]) = v7;
							v65[1] = v11;
							sub_140055F80((__int64)(a1 + 5), (__int64)v69, v65);
							v16 = *(int**)v11;
							if (!*(_DWORD*)(*(_QWORD*)v11 + 4i64))
							{
								v17 = *v16;
								v66[1] = v11;
								LODWORD(v66[0]) = v17;
								v72 = v16[10];
								v18 = sub_1404A8A10((__int64)(a1 + 21), &v72);
								sub_140055F80((__int64)v18, (__int64)v71, v66);
							}
						}
					}
				}
			}
		}
	}
	if (qword_140C63838)
	{
		v19 = qword_140C63838(off_140A6A0F8, qword_140C63858);
	}
	else if (dword_140C64594)
	{
		v19 = 0;
	}
	else if ((int)sub_1401FC440() >= 0)
	{
		v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63948 + 40i64))(qword_140C63948);
	}
	else
	{
		v19 = 0;
	}
	v20 = 0;
	v72 = v19;
	v73 = 0;
	if (v19)
	{
		v21 = v19;
		while (!qword_140C63848)
		{
			if (!dword_140C64594)
			{
				if ((int)sub_1401FC440() >= 0)
				{
					v22 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63948 + 32i64))(
						qword_140C63948,
						v20);
					goto LABEL_44;
				}
			LABEL_135:
				v21 = v72;
			}
			v20 = ++v73;
			if (v73 >= v21)
				return 0i64;
		}
		v22 = (_DWORD*)qword_140C63848(off_140A6A0F8, v20, qword_140C63858);
	LABEL_44:
		v23 = v22;
		if (!v22)
			goto LABEL_135;
		v24 = *v22;
		if (!*v22)
			goto LABEL_135;
		v25 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1);
		v26 = 0;
		v27 = v23 + 4;
		*(_DWORD*)(v25 + 40) = 0;
		v28 = 16i64;
		v29 = v25;
		*(_QWORD*)v25 = v23;
		do
		{
			v30 = *v27;
			if (*v27)
			{
				v31 = a1[2];
				v32 = v31;
				v33 = *(_QWORD*)(v31 + 8);
				while (v33)
				{
					if (*(_DWORD*)(v33 + 32) < v30)
					{
						v33 = *(_QWORD*)(v33 + 24);
					}
					else
					{
						v32 = v33;
						v33 = *(_QWORD*)(v33 + 16);
					}
				}
				if (v32 == v31 || v30 < *(_DWORD*)(v32 + 32))
				{
					v65[0] = a1[2];
					v34 = v65;
				}
				else
				{
					v74 = v32;
					v34 = &v74;
				}
				v35 = *v34;
				if (v35 != v31)
				{
					v36 = *(_QWORD**)(v35 + 40);
					v37 = (__int64)(*(_QWORD*)(v29 + 24) - *(_QWORD*)(v29 + 16)) >> 3;
					if (!(_DWORD)v37 || *(_DWORD*)(*v36 + 56i64) == *(_DWORD*)(v29 + 40))
					{
						v64[0] = *(_QWORD*)(v35 + 40);
						if (!v37)
							*(_DWORD*)(v29 + 40) = *(_DWORD*)(*v36 + 56i64);
						v38 = *(int**)(v29 + 24);
						if (v38 == *(int**)(v29 + 32))
						{
							sub_1400B9430((_QWORD*)(v29 + 8), v38, v64);
						}
						else
						{
							if (v38)
								*(_QWORD*)v38 = v36;
							*(_QWORD*)(v29 + 24) += 8i64;
						}
						v36[1] = v29;
						++v26;
					}
				}
			}
			++v27;
			--v28;
		} while (v28);
		if (!v26)
		{
			v39 = *(_QWORD*)(v29 + 16);
			if (v39)
				sub_14018B900(v39, 0);
			sub_14018B900(v29, 0);
			goto LABEL_135;
		}
		v40 = *(_DWORD*)(v29 + 40);
		if ((v40 & 0xFFFFFFFD) != 0)
		{
		LABEL_104:
			if (v40 > 1)
				goto LABEL_135;
			v51 = a1[18];
			LODWORD(v62[0]) = v24;
			v52 = 1;
			v53 = *(_QWORD*)(v51 + 8);
			v54 = v51;
			while (v53)
			{
				v54 = v53;
				v52 = v24 < *(_DWORD*)(v53 + 32);
				if (v24 >= *(_DWORD*)(v53 + 32))
					v53 = *(_QWORD*)(v53 + 24);
				else
					v53 = *(_QWORD*)(v53 + 16);
			}
			v55 = v54;
			if (v52)
			{
				if (v54 == *(_QWORD*)(v51 + 16))
					goto LABEL_122;
				if (*(_BYTE*)v54 || *(_QWORD*)(*(_QWORD*)(v54 + 8) + 8i64) != v54)
				{
					v55 = *(_QWORD*)(v54 + 16);
					if (v55)
					{
						for (j = *(_QWORD*)(v55 + 24); j; j = *(_QWORD*)(j + 24))
							v55 = j;
					}
					else
					{
						v55 = *(_QWORD*)(v54 + 8);
						if (v54 == *(_QWORD*)(v55 + 16))
						{
							do
							{
								v57 = v55;
								v55 = *(_QWORD*)(v55 + 8);
							} while (v57 == *(_QWORD*)(v55 + 16));
						}
					}
				}
				else
				{
					v55 = *(_QWORD*)(v54 + 24);
				}
			}
			if (*(_DWORD*)(v55 + 32) >= v24)
				goto LABEL_135;
		LABEL_122:
			if (v54 == v51 || v24 < *(_DWORD*)(v54 + 32))
			{
				v58 = sub_14018B280(48i64, 0);
				if (v58 != (int*)-32i64)
				{
					*((_QWORD*)v58 + 4) = v62[0];
					*((_QWORD*)v58 + 5) = v29;
				}
				*(_QWORD*)(v54 + 16) = v58;
				v60 = a1[18];
				if (v54 == v60)
				{
					*(_QWORD*)(v60 + 8) = v58;
					*(_QWORD*)(a1[18] + 24i64) = v58;
				}
				else if (v54 == *(_QWORD*)(v60 + 16))
				{
					*(_QWORD*)(v60 + 16) = v58;
				}
			}
			else
			{
				v58 = sub_14018B280(48i64, 0);
				if (v58 != (int*)-32i64)
				{
					*((_QWORD*)v58 + 4) = v62[0];
					*((_QWORD*)v58 + 5) = v29;
				}
				*(_QWORD*)(v54 + 24) = v58;
				v59 = a1[18];
				if (v54 == *(_QWORD*)(v59 + 24))
					*(_QWORD*)(v59 + 24) = v58;
			}
			*((_QWORD*)v58 + 1) = v54;
			*((_QWORD*)v58 + 2) = 0i64;
			*((_QWORD*)v58 + 3) = 0i64;
			sub_1400081C0((__int64)v58, (_QWORD*)(a1[18] + 8i64));
			++a1[19];
			goto LABEL_135;
		}
		v41 = a1[14];
		LODWORD(v63[0]) = v24;
		v42 = 1;
		v43 = *(_QWORD*)(v41 + 8);
		v44 = v41;
		while (v43)
		{
			v44 = v43;
			v42 = v24 < *(_DWORD*)(v43 + 32);
			if (v24 >= *(_DWORD*)(v43 + 32))
				v43 = *(_QWORD*)(v43 + 24);
			else
				v43 = *(_QWORD*)(v43 + 16);
		}
		v45 = v44;
		if (v42)
		{
			if (v44 == *(_QWORD*)(v41 + 16))
			{
			LABEL_81:
				if (v44 == v41 || v24 < *(_DWORD*)(v44 + 32))
				{
					v46 = sub_14018B280(48i64, 0);
					if (v46 != (int*)-32i64)
					{
						*((_QWORD*)v46 + 4) = v63[0];
						*((_QWORD*)v46 + 5) = v29;
					}
					*(_QWORD*)(v44 + 16) = v46;
					v48 = a1[14];
					if (v44 == v48)
					{
						*(_QWORD*)(v48 + 8) = v46;
						*(_QWORD*)(a1[14] + 24i64) = v46;
					}
					else if (v44 == *(_QWORD*)(v48 + 16))
					{
						*(_QWORD*)(v48 + 16) = v46;
					}
				}
				else
				{
					v46 = sub_14018B280(48i64, 0);
					if (v46 != (int*)-32i64)
					{
						*((_QWORD*)v46 + 4) = v63[0];
						*((_QWORD*)v46 + 5) = v29;
					}
					*(_QWORD*)(v44 + 24) = v46;
					v47 = a1[14];
					if (v44 == *(_QWORD*)(v47 + 24))
						*(_QWORD*)(v47 + 24) = v46;
				}
				*((_QWORD*)v46 + 1) = v44;
				*((_QWORD*)v46 + 2) = 0i64;
				*((_QWORD*)v46 + 3) = 0i64;
				sub_1400081C0((__int64)v46, (_QWORD*)(a1[14] + 8i64));
				++a1[15];
				goto LABEL_104;
			}
			if (*(_BYTE*)v44 || *(_QWORD*)(*(_QWORD*)(v44 + 8) + 8i64) != v44)
			{
				v45 = *(_QWORD*)(v44 + 16);
				if (v45)
				{
					for (k = *(_QWORD*)(v45 + 24); k; k = *(_QWORD*)(k + 24))
						v45 = k;
				}
				else
				{
					v45 = *(_QWORD*)(v44 + 8);
					if (v44 == *(_QWORD*)(v45 + 16))
					{
						do
						{
							v50 = v45;
							v45 = *(_QWORD*)(v45 + 8);
						} while (v50 == *(_QWORD*)(v45 + 16));
					}
				}
			}
			else
			{
				v45 = *(_QWORD*)(v44 + 24);
			}
		}
		if (*(_DWORD*)(v45 + 32) >= v24)
			goto LABEL_104;
		goto LABEL_81;
	}
	return 0i64;
}
// 1404A919A: conditional instruction was optimized away because rdx.8==0
// 1404A935F: conditional instruction was optimized away because rdx.8==0
// 140A6A0C0: using guessed type wchar_t *off_140A6A0C0[2];
// 140A6A0F8: using guessed type wchar_t *off_140A6A0F8[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63948: using guessed type __int64 qword_140C63948;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64594: using guessed type int dword_140C64594;
// 140C645C4: using guessed type int dword_140C645C4;
// 140C64634: using guessed type int dword_140C64634;
// 140C64BF0: using guessed type __int64 qword_140C64BF0;
// 1404A8D30: using guessed type char var_70[16];
// 1404A8D30: using guessed type char var_50[16];
// 1404A8D30: using guessed type char var_80[16];
// 1404A8D30: using guessed type char var_60[16];
// 1404A8D30: using guessed type char var_40[16];

