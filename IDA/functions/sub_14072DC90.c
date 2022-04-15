//----- (000000014072DC90) ----------------------------------------------------
__int64 __fastcall sub_14072DC90(_QWORD* a1)
{
	_QWORD* v1; // r13
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rax
	_DWORD* v6; // r8
	unsigned __int64 v7; // r9
	_DWORD* v8; // rcx
	_DWORD* v9; // rdx
	int v10; // ebp
	int v11; // eax
	BOOL v12; // r15d
	_DWORD* v13; // rdx
	int v14; // eax
	BOOL v15; // r14d
	int v16; // eax
	BOOL v17; // r12d
	int v18; // esi
	unsigned int v19; // ebx
	int* v20; // rax
	int* v21; // rbx
	__int64 v22; // rdx
	int v23; // eax
	__int64 v24; // rbx
	__int64 v25; // rcx
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int* v29; // rax
	_BOOL8 v30; // rbp
	int* v31; // rsi
	_BOOL8 v32; // r15
	int* v33; // rdi
	int v34; // r13d
	__int64 v35; // r14
	int v36; // r11d
	unsigned int* v37; // r9
	unsigned int v38; // r8d
	__int64 v39; // rax
	__int64 v40; // rdx
	__int64 v41; // rcx
	__int64* v42; // rcx
	__int16* v43; // rax
	__int16* v44; // rbp
	int* v45; // rbx
	__int64 v46; // rcx
	unsigned __int16* v47; // rax
	int* v48; // rcx
	int* v49; // rcx
	int* v50; // rbx
	unsigned int i; // edi
	__int64 v52; // rax
	__int64 v53; // rdx
	__m128i v54; // xmm0
	int* v55; // rbx
	__int64 v56; // rcx
	int* v57; // rbx
	__int64 v58; // rcx
	_BOOL8 v59; // [rsp+20h] [rbp-68h]
	char v60[8]; // [rsp+28h] [rbp-60h] BYREF
	int* v61; // [rsp+30h] [rbp-58h]
	__int64 v63; // [rsp+98h] [rbp+10h] BYREF
	__int64 v64; // [rsp+A0h] [rbp+18h]
	__int64 v65; // [rsp+A8h] [rbp+20h] BYREF

	v1 = a1;
	result = sub_140056AB0(a1, 1u);
	if (!result)
		return result;
	v3 = *(_QWORD*)result;
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	if (!v3 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 168i64))(v3))
		return 1i64;
	v6 = (_DWORD*)v1[3];
	v7 = v1[2];
	v8 = dword_140A12138;
	v9 = dword_140A12138;
	if ((unsigned __int64)(v6 + 4) < v7)
		v9 = v6 + 4;
	v10 = 0;
	v11 = v9[2];
	LODWORD(v63) = 0;
	v12 = v11 && (v11 != 1 || *v9);
	v13 = dword_140A12138;
	if ((unsigned __int64)(v6 + 8) < v7)
		v13 = v6 + 8;
	v14 = v13[2];
	v15 = v14 && (v14 != 1 || *v13);
	if ((unsigned __int64)(v6 + 12) < v7)
		v8 = v6 + 12;
	v16 = v8[2];
	v17 = v16 && (v16 != 1 || *v8);
	v18 = 0;
	v19 = sub_1400584E0((__int64)v1, 5);
	v61 = sub_14018B280(40i64, 0);
	*(_QWORD*)v61 = v61;
	*((_QWORD*)v61 + 1) = v61;
	(*(void(__fastcall**)(__int64, _QWORD, char*, _QWORD))(*(_QWORD*)v3 + 160i64))(v3, v19, v60, 0i64);
	v20 = v61;
	v21 = *(int**)v61;
	if (*(int**)v61 != v61)
	{
		while (1)
		{
			v22 = *((_QWORD*)v21 + 3);
			if (!v22)
				goto LABEL_99;
			v23 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v22 + 8));
			if (v23 <= 0)
				goto LABEL_34;
			if (v23 <= 2)
				goto LABEL_33;
			if (v23 == 4)
				break;
		LABEL_34:
			v21 = *(int**)v21;
			v20 = v61;
			if (v21 == v61)
				goto LABEL_35;
		}
		v10 = 1;
	LABEL_33:
		v18 = 1;
		goto LABEL_34;
	}
LABEL_35:
	v24 = (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 96i64))(v3);
	v25 = *(_QWORD*)(qword_140C65898 + 120);
	if (v25)
	{
		if (v15)
		{
			v26 = 0;
		}
		else
		{
			v27 = *(_DWORD*)(v25 + 60);
			if (!v27)
				v27 = *(_DWORD*)(v25 + 56);
			v26 = v27 - 10;
		}
		LODWORD(v63) = v26;
	}
	v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3);
	if ((_DWORD)v24)
	{
		if (!v12 && !v18 && !v10)
			goto LABEL_98;
	}
	else if ((int)v63 > v28)
	{
		goto LABEL_98;
	}
	v29 = sub_14018B280(24i64, 0);
	v30 = v12;
	v64 = v24;
	*(_QWORD*)v29 = v29;
	*((_QWORD*)v29 + 1) = v29;
	v31 = v29;
	v59 = v12;
	v32 = v15;
	v33 = *(int**)v61;
	if (*(int**)v61 == v61)
		goto LABEL_93;
	v34 = v63;
	do
	{
		v35 = *((_QWORD*)v33 + 3);
		v36 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v35 + 8));
		if (v36)
		{
			v37 = *(unsigned int**)(v35 + 8);
			v38 = *v37;
			v39 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
			v40 = v39;
			v41 = *(_QWORD*)(v39 + 8);
			while (v41)
			{
				if (*(_DWORD*)(v41 + 32) < v38)
				{
					v41 = *(_QWORD*)(v41 + 24);
				}
				else
				{
					v40 = v41;
					v41 = *(_QWORD*)(v41 + 16);
				}
			}
			if (v40 == v39 || v38 < *(_DWORD*)(v40 + 32))
			{
				v65 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
				v42 = &v65;
			}
			else
			{
				v63 = v40;
				v42 = &v63;
			}
			if (*v42 == v39 || v36 == 4)
			{
				if (v24)
				{
					if (!v30 && v36 == 3 || !v32 && v34 > (int)v37[4])
						goto LABEL_91;
					if (v17)
					{
						if (v37 && (v43 = sub_14034BDD0((__int64)v42, v37[1]), (v44 = v43) != 0i64) && *v43)
						{
							v45 = *(int**)v31;
							if (*(int**)v31 == v31)
								goto LABEL_77;
							while (1)
							{
								v46 = *(_QWORD*)(*((_QWORD*)v45 + 2) + 8i64);
								if (v46)
								{
									v47 = (unsigned __int16*)sub_14034BDD0(v46, *(_DWORD*)(v46 + 4));
									if (v47)
									{
										if (*v47 && (int)sub_14018E220(v44, v47) < 0)
											break;
									}
								}
								v45 = *(int**)v45;
								if (v45 == v31)
									goto LABEL_77;
							}
						}
						else
						{
							v45 = *(int**)v31;
						}
						goto LABEL_81;
					}
					v45 = *(int**)v31;
					if (*(int**)v31 != v31)
					{
						while (v37[4] >= *(_DWORD*)(*(_QWORD*)(*((_QWORD*)v45 + 2) + 8i64) + 16i64))
						{
							v45 = *(int**)v45;
							if (v45 == v31)
								goto LABEL_77;
						}
					LABEL_81:
						v49 = sub_14018B280(24i64, 0);
						if (v49 != (int*)-16i64)
							*((_QWORD*)v49 + 2) = v35;
						*(_QWORD*)v49 = v45;
						*((_QWORD*)v49 + 1) = *((_QWORD*)v45 + 1);
						**((_QWORD**)v45 + 1) = v49;
						*((_QWORD*)v45 + 1) = v49;
						v24 = v64;
						goto LABEL_91;
					}
				LABEL_77:
					v48 = sub_14018B280(24i64, 0);
					if (v48 != (int*)-16i64)
						*((_QWORD*)v48 + 2) = v35;
					v24 = v64;
				}
				else
				{
					v48 = sub_14018B280(24i64, 0);
					if (v48 != (int*)-16i64)
						*((_QWORD*)v48 + 2) = v35;
				}
				*(_QWORD*)v48 = v31;
				*((_QWORD*)v48 + 1) = *((_QWORD*)v31 + 1);
				**((_QWORD**)v31 + 1) = v48;
				*((_QWORD*)v31 + 1) = v48;
			}
		}
	LABEL_91:
		v33 = *(int**)v33;
		v30 = v59;
	} while (v33 != v61);
	v1 = a1;
LABEL_93:
	v50 = *(int**)v31;
	for (i = 1; v50 != v31; v50 = *(int**)v50)
	{
		v52 = v1[2];
		v53 = *((_QWORD*)v50 + 2);
		v54 = _mm_cvtsi32_si128(i);
		*(_DWORD*)(v52 + 8) = 3;
		++i;
		*(_QWORD*)v52 = *(_OWORD*)&_mm_cvtepi32_pd(v54);
		v1[2] += 16i64;
		sub_140663030(v1, v53);
		sub_14005EA50((__int64)v1, (__int64*)(v1[2] - 48i64), (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
		v1[2] -= 32i64;
	}
	v55 = *(int**)v31;
	while (v55 != v31)
	{
		v56 = (__int64)v55;
		v55 = *(int**)v55;
		sub_14018B900(v56, 0);
	}
	*(_QWORD*)v31 = v31;
	*((_QWORD*)v31 + 1) = v31;
	sub_14018B900((__int64)v31, 0);
LABEL_98:
	v20 = v61;
LABEL_99:
	v57 = *(int**)v20;
	if (*(int**)v20 != v20)
	{
		do
		{
			v58 = (__int64)v57;
			v57 = *(int**)v57;
			sub_14018B900(v58, 0);
			v20 = v61;
		} while (v57 != v61);
	}
	*(_QWORD*)v20 = v20;
	*((_QWORD*)v61 + 1) = v61;
	sub_14018B900((__int64)v61, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 14072DC90: using guessed type char var_60[8];

