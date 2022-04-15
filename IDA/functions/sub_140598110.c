//----- (0000000140598110) ----------------------------------------------------
__int64 __fastcall sub_140598110(__int64 a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	int v8; // esi
	unsigned int v9; // ebx
	__int64 v10; // rax
	int v11; // ecx
	__int64* v12; // rdx
	char* v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rcx
	int v18; // r15d
	int v19; // r14d
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // r12d
	__int64 v23; // rbx
	int v24; // r10d
	__int64 v25; // r9
	_DWORD* v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rcx
	int v29; // eax
	__int64 v30; // rax
	__int64 v31; // r8
	__int64 v32; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v35; // r13d
	__int64 v36; // r9
	_DWORD* v37; // rdx
	__int64 v38; // rcx
	unsigned __int64 v39; // r15
	unsigned __int64* v40; // r14
	unsigned __int64 v41; // rsi
	__int64 v42; // rbx
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 v45; // r9
	_DWORD* v46; // rdx
	__int64 v47; // rcx
	__int64 v48; // r8
	int v49; // r12d
	__int64 v50; // rbx
	__int64 v51; // rax
	int v52; // r14d
	__int64 v53; // rbx
	int v54; // r10d
	__int64 v55; // r9
	_DWORD* v56; // rdx
	__int64 v57; // rcx
	__int64 v58; // rcx
	int v59; // eax
	__int64 v60; // rax
	__int64 v61; // r8
	__int64 v62; // rax
	__int64 k; // rax
	__int64 m; // rax
	int v65; // r12d
	__int64 v66; // r9
	_DWORD* v67; // rdx
	double v68; // xmm0_8
	__int64 v69; // rcx
	unsigned __int64* v70; // rsi
	__int64 v71; // rbx
	__int64 v72; // rax
	__int64 v73; // r9
	_DWORD* v74; // rdx
	__int64 v75; // rcx
	__int64 v76; // r8
	__int64 v77; // rax
	__int64 v78; // r10
	__int64 v79; // r9
	_DWORD* v80; // rcx
	_DWORD* v81; // rdx
	__int64 v82; // rcx
	__int64 v83; // rax
	int v84; // ebx
	_DWORD* v85; // rdx
	__int64 v86; // rcx
	__int64 v87; // rax
	_DWORD* v88; // rdx
	__int64 v89; // rcx
	__int64 v90; // rax
	int* v91; // rax
	__int64 v92; // rdi
	__int64 v93; // rbx
	int* v94; // rax
	__int64 v95; // rdi
	__int64 v96; // rbx
	char v98; // [rsp+20h] [rbp-59h] BYREF
	__int64 v99; // [rsp+30h] [rbp-49h] BYREF
	__int64 v100; // [rsp+38h] [rbp-41h]
	char v101[8]; // [rsp+50h] [rbp-29h] BYREF
	int* v102; // [rsp+58h] [rbp-21h]
	__int64 v103; // [rsp+60h] [rbp-19h]
	char v104[8]; // [rsp+70h] [rbp-9h] BYREF
	int* v105; // [rsp+78h] [rbp-1h]
	__int64 v106; // [rsp+80h] [rbp+7h]
	double v107; // [rsp+E0h] [rbp+67h] BYREF
	int v108; // [rsp+E8h] [rbp+6Fh]
	double v109; // [rsp+F0h] [rbp+77h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = sub_14049BDC0(v7);
	v106 = 0i64;
	v105 = sub_14018B280(40i64, 0);
	*(_BYTE*)v105 = 0;
	*((_QWORD*)v105 + 1) = 0i64;
	*((_QWORD*)v105 + 2) = v105;
	*((_QWORD*)v105 + 3) = v105;
	v103 = 0i64;
	v102 = sub_14018B280(40i64, 0);
	*(_BYTE*)v102 = 0;
	*((_QWORD*)v102 + 1) = 0i64;
	v9 = 0;
	*((_QWORD*)v102 + 2) = v102;
	*((_QWORD*)v102 + 3) = v102;
	do
	{
		if (qword_140C63848)
		{
			v10 = qword_140C63848(off_140A6DEE0, v9, qword_140C63858);
		}
		else if (dword_140C64070)
		{
			v10 = 0i64;
		}
		else if ((int)sub_140247760() >= 0)
		{
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 32i64))(qword_140C64930, v9);
		}
		else
		{
			v10 = 0i64;
		}
		if ((*(_BYTE*)(v10 + 36) & 4) != 0)
		{
			v11 = *(_DWORD*)(v10 + 48);
			if (v11)
			{
				LODWORD(v107) = *(_DWORD*)v10;
				if ((v11 & v8) != 0)
				{
					v12 = (__int64*)&v98;
					v13 = v104;
				}
				else
				{
					v12 = &v99;
					v13 = v101;
				}
				sub_1403ADDD0((__int64)v13, (__int64)v12, (int*)&v107);
			}
		}
		++v9;
	} while (v9 < 0xC5);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v14 = *(_QWORD*)(a1 + 16);
	v15 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	*(_QWORD*)(a1 + 16) += 16i64;
	v16 = sub_1400578C0(a1);
	v17 = *(_QWORD*)(a1 + 32);
	v18 = v16;
	LODWORD(v107) = v16;
	v19 = 1;
	if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
		sub_14005E2C0(a1);
	v20 = *(_QWORD*)(a1 + 16);
	v21 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v20 + 8) = 5;
	*(_QWORD*)v20 = v21;
	*(_QWORD*)(a1 + 16) += 16i64;
	v22 = sub_1400578C0(a1);
	v108 = v22;
	v23 = *((_QWORD*)v105 + 2);
	while ((int*)v23 != v105)
	{
		v24 = *(_DWORD*)(v23 + 32);
		v25 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v22 - 1) >= *(_DWORD*)(v25 + 56))
		{
			v109 = (double)v22;
			if ((double)v22 == 0.0)
				v26 = *(_DWORD**)(v25 + 32);
			else
				v26 = (_DWORD*)(*(_QWORD*)(v25 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v109) + HIDWORD(v109)) % (((1i64 << *(_BYTE*)(v25 + 11)) - 1) | 1)));
			while (v26[6] != 3 || (double)v22 != *((double*)v26 + 2))
			{
				v26 = (_DWORD*)*((_QWORD*)v26 + 4);
				if (!v26)
				{
					v26 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v26 = (_DWORD*)(*(_QWORD*)(v25 + 24) + 16i64 * (v22 - 1));
		}
		v27 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v27 = *(_QWORD*)v26;
		*(_DWORD*)(v27 + 8) = v26[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v28 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v28 + 8) = 3;
		v29 = v19++;
		*(double*)v28 = (double)v29;
		*(_QWORD*)(a1 + 16) += 16i64;
		v30 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v30 + 8) = 3;
		*(double*)v30 = (double)v24;
		v31 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v31;
		sub_14005EA50(a1, (__int64*)(v31 - 48), (int*)(v31 - 32), (unsigned int*)(v31 - 16));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v32 = *(_QWORD*)(v23 + 24);
		if (v32)
		{
			v23 = *(_QWORD*)(v23 + 24);
			for (i = *(_QWORD*)(v32 + 16); i; i = *(_QWORD*)(i + 16))
				v23 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v23 + 8); v23 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v23 = j;
			if (*(_QWORD*)(v23 + 24) != j)
				v23 = j;
		}
	}
	v35 = v18 - 1;
	v36 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v18 - 1) >= *(_DWORD*)(v36 + 56))
	{
		v109 = (double)v18;
		if ((double)v18 == 0.0)
			v37 = *(_DWORD**)(v36 + 32);
		else
			v37 = (_DWORD*)(*(_QWORD*)(v36 + 32)
				+ 40 * ((unsigned int)(LODWORD(v109) + HIDWORD(v109)) % (((1i64 << *(_BYTE*)(v36 + 11)) - 1) | 1)));
		while (v37[6] != 3 || (double)v18 != *((double*)v37 + 2))
		{
			v37 = (_DWORD*)*((_QWORD*)v37 + 4);
			if (!v37)
			{
				v37 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v37 = (_DWORD*)(*(_QWORD*)(v36 + 24) + 16i64 * (v18 - 1));
	}
	v38 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v38 = *(_QWORD*)v37;
	*(_DWORD*)(v38 + 8) = v37[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v39 = -1i64;
	v40 = (unsigned __int64*)sub_14018F0E0(&v99, L"arPrimary")[1];
	if (v40)
	{
		v41 = -1i64;
		do
			++v41;
		while (*((_BYTE*)v40 + v41));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v42 = *(_QWORD*)(a1 + 16);
		v43 = sub_140062650(a1, v40, v41);
		*(_DWORD*)(v42 + 8) = 4;
		*(_QWORD*)v42 = v43;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v44 = v100;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v44)
		sub_14018B900(v44, 0);
	v45 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v22 - 1) >= *(_DWORD*)(v45 + 56))
	{
		v109 = (double)v22;
		if ((double)v22 == 0.0)
			v46 = *(_DWORD**)(v45 + 32);
		else
			v46 = (_DWORD*)(*(_QWORD*)(v45 + 32)
				+ 40 * ((unsigned int)(LODWORD(v109) + HIDWORD(v109)) % (((1i64 << *(_BYTE*)(v45 + 11)) - 1) | 1)));
		while (v46[6] != 3 || (double)v22 != *((double*)v46 + 2))
		{
			v46 = (_DWORD*)*((_QWORD*)v46 + 4);
			if (!v46)
			{
				v46 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v46 = (_DWORD*)(*(_QWORD*)(v45 + 24) + 16i64 * (v22 - 1));
	}
	v47 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v47 = *(_QWORD*)v46;
	*(_DWORD*)(v47 + 8) = v46[2];
	v48 = *(_QWORD*)(a1 + 16) + 16i64;
	*(_QWORD*)(a1 + 16) = v48;
	sub_14005EA50(a1, (__int64*)(v48 - 48), (int*)(v48 - 32), (unsigned int*)(v48 - 16));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v49 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v50 = *(_QWORD*)(a1 + 16);
	v51 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v50 + 8) = 5;
	*(_QWORD*)v50 = v51;
	*(_QWORD*)(a1 + 16) += 16i64;
	v52 = sub_1400578C0(a1);
	v53 = *((_QWORD*)v102 + 2);
	while ((int*)v53 != v102)
	{
		v54 = *(_DWORD*)(v53 + 32);
		v55 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v52 - 1) >= *(_DWORD*)(v55 + 56))
		{
			v109 = (double)v52;
			if ((double)v52 == 0.0)
				v56 = *(_DWORD**)(v55 + 32);
			else
				v56 = (_DWORD*)(*(_QWORD*)(v55 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v109) + HIDWORD(v109)) % (((1i64 << *(_BYTE*)(v55 + 11)) - 1) | 1)));
			while (v56[6] != 3 || (double)v52 != *((double*)v56 + 2))
			{
				v56 = (_DWORD*)*((_QWORD*)v56 + 4);
				if (!v56)
				{
					v56 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v56 = (_DWORD*)(*(_QWORD*)(v55 + 24) + 16i64 * (v52 - 1));
		}
		v57 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v57 = *(_QWORD*)v56;
		*(_DWORD*)(v57 + 8) = v56[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v58 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v58 + 8) = 3;
		v59 = v49++;
		*(double*)v58 = (double)v59;
		*(_QWORD*)(a1 + 16) += 16i64;
		v60 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v60 + 8) = 3;
		*(double*)v60 = (double)v54;
		v61 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v61;
		sub_14005EA50(a1, (__int64*)(v61 - 48), (int*)(v61 - 32), (unsigned int*)(v61 - 16));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v62 = *(_QWORD*)(v53 + 24);
		if (v62)
		{
			v53 = *(_QWORD*)(v53 + 24);
			for (k = *(_QWORD*)(v62 + 16); k; k = *(_QWORD*)(k + 16))
				v53 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v53 + 8); v53 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v53 = m;
			if (*(_QWORD*)(v53 + 24) != m)
				v53 = m;
		}
	}
	v65 = LODWORD(v107);
	v66 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if (v35 >= *(_DWORD*)(v66 + 56))
	{
		v68 = (double)SLODWORD(v107);
		v107 = (double)SLODWORD(v107);
		if (v68 == 0.0)
			v67 = *(_DWORD**)(v66 + 32);
		else
			v67 = (_DWORD*)(*(_QWORD*)(v66 + 32)
				+ 40 * ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
		while (v67[6] != 3 || v68 != *((double*)v67 + 2))
		{
			v67 = (_DWORD*)*((_QWORD*)v67 + 4);
			if (!v67)
			{
				v67 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v67 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (LODWORD(v107) - 1));
	}
	v69 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v69 = *(_QWORD*)v67;
	*(_DWORD*)(v69 + 8) = v67[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v70 = (unsigned __int64*)sub_14018F0E0(&v99, L"arSecondary")[1];
	if (v70)
	{
		do
			++v39;
		while (*((_BYTE*)v70 + v39));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v71 = *(_QWORD*)(a1 + 16);
		v72 = sub_140062650(a1, v70, v39);
		*(_DWORD*)(v71 + 8) = 4;
		*(_QWORD*)v71 = v72;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v100)
		sub_14018B900(v100, 0);
	v73 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v52 - 1) >= *(_DWORD*)(v73 + 56))
	{
		v107 = (double)v52;
		if ((double)v52 == 0.0)
			v74 = *(_DWORD**)(v73 + 32);
		else
			v74 = (_DWORD*)(*(_QWORD*)(v73 + 32)
				+ 40 * ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v73 + 11)) - 1) | 1)));
		while (v74[6] != 3 || (double)v52 != *((double*)v74 + 2))
		{
			v74 = (_DWORD*)*((_QWORD*)v74 + 4);
			if (!v74)
			{
				v74 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v74 = (_DWORD*)(*(_QWORD*)(v73 + 24) + 16i64 * (v52 - 1));
	}
	v75 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v75 = *(_QWORD*)v74;
	*(_DWORD*)(v75 + 8) = v74[2];
	v76 = *(_QWORD*)(a1 + 16) + 16i64;
	*(_QWORD*)(a1 + 16) = v76;
	sub_14005EA50(a1, (__int64*)(v76 - 48), (int*)(v76 - 32), (unsigned int*)(v76 - 16));
	v77 = *(_QWORD*)(a1 + 32);
	v78 = *(_QWORD*)(a1 + 16) - 48i64;
	*(_QWORD*)(a1 + 16) = v78;
	v79 = *(_QWORD*)(v77 + 160);
	if (v35 >= *(_DWORD*)(v79 + 56))
	{
		v107 = (double)v65;
		if ((double)v65 == 0.0)
			v80 = *(_DWORD**)(v79 + 32);
		else
			v80 = (_DWORD*)(*(_QWORD*)(v79 + 32)
				+ 40 * ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v79 + 11)) - 1) | 1)));
		while (v80[6] != 3 || (double)v65 != *((double*)v80 + 2))
		{
			v80 = (_DWORD*)*((_QWORD*)v80 + 4);
			if (!v80)
			{
				v80 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v80 = (_DWORD*)(*(_QWORD*)(v79 + 24) + 16i64 * (v65 - 1));
	}
	*(_QWORD*)v78 = *(_QWORD*)v80;
	*(_DWORD*)(v78 + 8) = v80[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v52 >= 0)
	{
		v81 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
		while (v81[6] != 3 || *((double*)v81 + 2) != 0.0)
		{
			v81 = (_DWORD*)*((_QWORD*)v81 + 4);
			if (!v81)
			{
				v81 = dword_140A12138;
				break;
			}
		}
		v82 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v82 = *(_QWORD*)v81;
		*(_DWORD*)(v82 + 8) = v81[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
		v83 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v83 + 8) = 3;
		*(double*)v83 = (double)v52;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
	}
	v84 = v108;
	if (v108 >= 0)
	{
		v85 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
		while (v85[6] != 3 || *((double*)v85 + 2) != 0.0)
		{
			v85 = (_DWORD*)*((_QWORD*)v85 + 4);
			if (!v85)
			{
				v85 = dword_140A12138;
				break;
			}
		}
		v86 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v86 = *(_QWORD*)v85;
		*(_DWORD*)(v86 + 8) = v85[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
		v87 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v87 + 8) = 3;
		*(double*)v87 = (double)v84;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
	}
	if (v65 >= 0)
	{
		v88 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(a1, -10000) + 32i64);
		while (v88[6] != 3 || *((double*)v88 + 2) != 0.0)
		{
			v88 = (_DWORD*)*((_QWORD*)v88 + 4);
			if (!v88)
			{
				v88 = dword_140A12138;
				break;
			}
		}
		v89 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v89 = *(_QWORD*)v88;
		*(_DWORD*)(v89 + 8) = v88[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
		v90 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v90 + 8) = 3;
		*(double*)v90 = (double)v65;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
	}
	if (v103)
	{
		v91 = v102;
		v92 = *((_QWORD*)v102 + 1);
		if (v92)
		{
			do
			{
				sub_1400083B0((__int64)v101, *(_QWORD*)(v92 + 24));
				v93 = *(_QWORD*)(v92 + 16);
				sub_14018B900(v92, 0);
				v92 = v93;
			} while (v93);
			v91 = v102;
		}
		*((_QWORD*)v91 + 2) = v91;
		*((_QWORD*)v102 + 1) = 0i64;
		*((_QWORD*)v102 + 3) = v102;
		v103 = 0i64;
	}
	sub_14018B900((__int64)v102, 0);
	if (v106)
	{
		v94 = v105;
		v95 = *((_QWORD*)v105 + 1);
		if (v95)
		{
			do
			{
				sub_1400083B0((__int64)v104, *(_QWORD*)(v95 + 24));
				v96 = *(_QWORD*)(v95 + 16);
				sub_14018B900(v95, 0);
				v95 = v96;
			} while (v96);
			v94 = v105;
		}
		*((_QWORD*)v94 + 2) = v94;
		*((_QWORD*)v105 + 1) = 0i64;
		*((_QWORD*)v105 + 3) = v105;
		v106 = 0i64;
	}
	sub_14018B900((__int64)v105, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140B1FAC0: using guessed type wchar_t aArsecondary[12];
// 140B1FAD8: using guessed type wchar_t aArprimary[10];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140598110: using guessed type char var_60[8];
// 140598110: using guessed type char var_80[8];

