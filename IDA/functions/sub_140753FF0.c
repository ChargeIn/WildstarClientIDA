//----- (0000000140753FF0) ----------------------------------------------------
__int64 __fastcall sub_140753FF0(_QWORD* a1)
{
	unsigned __int64 v1; // r8
	bool v3; // cf
	_DWORD* v4; // rcx
	int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	_DWORD* v10; // rax
	int* v11; // rax
	__int64 v12; // rbx
	int* v13; // r15
	__int64 v14; // rax
	__int64 v15; // r9
	int i; // ebp
	__int64 v17; // rax
	_DWORD* v18; // rax
	_DWORD* v19; // rax
	__int64 v20; // rcx
	const char* v21; // r9
	const char* v22; // rax
	_DWORD* v23; // rax
	_DWORD* v24; // rax
	__int64 v25; // rcx
	const char* v26; // r9
	const char* v27; // rax
	int* v28; // rax
	__int64 v29; // rsi
	int* v30; // rbx
	__int64 v31; // r8
	int* v32; // rdx
	__int64 v33; // rcx
	__int64 v34; // rbx
	float v35; // xmm6_4
	__int64 v36; // rax
	__int64 v37; // r9
	_DWORD* v38; // rax
	int v39; // r12d
	__int64 v40; // rsi
	__int64 v41; // rbx
	__int64 v42; // rax
	int* j; // rbx
	__int64 v44; // rax
	unsigned __int64* v45; // r14
	unsigned __int64 v46; // rbp
	__int64 v47; // rdi
	__int64 v48; // rax
	__int64 v49; // rcx
	int v50; // ebx
	__int64 v51; // rdx
	int* v52; // rbx
	__int64 v53; // rdi
	__int64 v54; // rcx
	__int64 v56; // [rsp+30h] [rbp-78h] BYREF
	int* v57; // [rsp+38h] [rbp-70h]
	__int64 v58; // [rsp+40h] [rbp-68h]
	__int64 v59; // [rsp+50h] [rbp-58h] BYREF
	__int64 v60; // [rsp+58h] [rbp-50h]
	unsigned int v61; // [rsp+B0h] [rbp+8h]

	v1 = a1[2];
	v3 = a1[3] < v1;
	v4 = dword_140A12138;
	if (v3)
		v4 = (_DWORD*)a1[3];
	v5 = v4[2];
	if (v5 == 5 || v5 == 7)
		v6 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	else
		v6 = *(_QWORD*)(a1[4] + 8i64 * (int)v4[2] + 224);
	if (v6)
	{
		*(_QWORD*)v1 = v6;
		*(_DWORD*)(v1 + 8) = 5;
		a1[2] += 16i64;
	}
	v7 = a1[2];
	v61 = 1;
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"iWindowType", 0xBui64);
	v9 = a1[2];
	v56 = v8;
	LODWORD(v57) = 4;
	sub_14005E8E0((__int64)a1, v7 - 16, (int*)&v56, v9);
	a1[2] += 16i64;
	v10 = (_DWORD*)(a1[2] - 16i64);
	if (v10 == dword_140A12138 || v10[2])
		v61 = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v11 = sub_14018B280(48i64, 0);
	*(_QWORD*)v11 = v11;
	*((_QWORD*)v11 + 1) = v11;
	v12 = a1[2];
	v13 = v11;
	v14 = sub_140062650((__int64)a1, (unsigned __int64*)"tLines", 6ui64);
	v15 = a1[2];
	v56 = v14;
	LODWORD(v57) = 4;
	sub_14005E8E0((__int64)a1, v12 - 16, (int*)&v56, v15);
	a1[2] += 16i64;
	for (i = 1; ; ++i)
	{
		v17 = a1[2];
		*(_DWORD*)(v17 + 8) = 3;
		*(double*)v17 = (double)i;
		a1[2] += 16i64;
		sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
		v18 = (_DWORD*)(a1[2] - 16i64);
		if (v18 != dword_140A12138 && !v18[2])
			break;
		if (v18[2] != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
				goto LABEL_21;
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v18 = (_DWORD*)(a1[2] - 16i64);
		}
		if (*(_QWORD*)v18 == -32i64)
		{
		LABEL_21:
			v19 = (_DWORD*)(a1[2] - 16i64);
			if (v19 == dword_140A12138 || (v20 = (int)v19[2], (_DWORD)v20 == -1))
				v21 = aNoValue;
			else
				v21 = off_140A123B0[v20];
			v22 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v21);
			sub_140056570(a1, 0xFFFFFFFF, v22);
		}
		sub_14018F2D0(&v59, (char*)(*(_QWORD*)v18 + 32i64));
		v23 = (_DWORD*)(a1[2] - 16i64);
		if (v23[2] != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
				goto LABEL_32;
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v23 = (_DWORD*)(a1[2] - 16i64);
		}
		if (*(_QWORD*)v23 == -32i64)
		{
		LABEL_32:
			v24 = (_DWORD*)(a1[2] - 16i64);
			if (v24 == dword_140A12138 || (v25 = (int)v24[2], (_DWORD)v25 == -1))
				v26 = aNoValue;
			else
				v26 = off_140A123B0[v25];
			v27 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v26);
			sub_140056570(a1, 0xFFFFFFFF, v27);
		}
		sub_14018F2D0(&v56, (char*)(*(_QWORD*)v23 + 32i64));
		v28 = sub_14018B280(48i64, 0);
		v29 = (__int64)v57;
		v30 = v28;
		if (v28 != (int*)-16i64)
		{
			v31 = v58;
			v32 = v57;
			*((_QWORD*)v28 + 3) = 0i64;
			*((_QWORD*)v28 + 4) = 0i64;
			*((_QWORD*)v28 + 5) = 0i64;
			sub_14001C1B0((_QWORD*)v28 + 2, v32, v31);
		}
		*(_QWORD*)v30 = v13;
		*((_QWORD*)v30 + 1) = *((_QWORD*)v13 + 1);
		**((_QWORD**)v13 + 1) = v30;
		*((_QWORD*)v13 + 1) = v30;
		if (v29)
			sub_14018B900(v29, 0);
		v33 = v60;
		a1[2] -= 16i64;
		if (v33)
			sub_14018B900(v33, 0);
	}
	a1[2] -= 32i64;
	v34 = a1[2];
	v35 = 0.0;
	v36 = sub_140062650((__int64)a1, (unsigned __int64*)"nDisplayLength", 0xEui64);
	v37 = a1[2];
	v56 = v36;
	LODWORD(v57) = 4;
	sub_14005E8E0((__int64)a1, v34 - 16, (int*)&v56, v37);
	a1[2] += 16i64;
	v38 = (_DWORD*)(a1[2] - 16i64);
	v39 = 1;
	if (v38 == dword_140A12138 || v38[2])
		v35 = sub_140056C40(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v40 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	if (*(_QWORD*)(*(_QWORD*)(v40 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v40 + 32) + 112i64))
		sub_14005E2C0(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64));
	v41 = *(_QWORD*)(v40 + 16);
	v42 = sub_14005C1B0(v40, 0, 0);
	*(_DWORD*)(v41 + 8) = 5;
	*(_QWORD*)v41 = v42;
	*(_QWORD*)(v40 + 16) += 16i64;
	for (j = *(int**)v13; j != v13; ++v39)
	{
		v44 = *(_QWORD*)(v40 + 16);
		*(_DWORD*)(v44 + 8) = 3;
		*(double*)v44 = (double)v39;
		*(_QWORD*)(v40 + 16) += 16i64;
		v45 = (unsigned __int64*)sub_14018F0E0(&v59, *((unsigned __int16**)j + 3))[1];
		if (v45)
		{
			v46 = -1i64;
			do
				++v46;
			while (*((_BYTE*)v45 + v46));
			if (*(_QWORD*)(*(_QWORD*)(v40 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v40 + 32) + 112i64))
				sub_14005E2C0(v40);
			v47 = *(_QWORD*)(v40 + 16);
			v48 = sub_140062650(v40, v45, v46);
			*(_DWORD*)(v47 + 8) = 4;
			*(_QWORD*)v47 = v48;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v40 + 16) + 8i64) = 0;
		}
		v49 = v60;
		*(_QWORD*)(v40 + 16) += 16i64;
		if (v49)
			sub_14018B900(v49, 0);
		sub_14005EA50(
			v40,
			(__int64*)(*(_QWORD*)(v40 + 16) - 48i64),
			(int*)(*(_QWORD*)(v40 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(v40 + 16) - 16i64));
		*(_QWORD*)(v40 + 16) -= 32i64;
		j = *(int**)j;
	}
	v50 = sub_1400578C0(v40);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MessageManager_DisplayStoryPanel", "iTf", v61, v50, v35);
	sub_1400579E0(v40, v51, v50);
	v52 = *(int**)v13;
	while (v52 != v13)
	{
		v53 = (__int64)v52;
		v52 = *(int**)v52;
		v54 = *(_QWORD*)(v53 + 24);
		if (v54)
			sub_14018B900(v54, 0);
		sub_14018B900(v53, 0);
	}
	*(_QWORD*)v13 = v13;
	*((_QWORD*)v13 + 1) = v13;
	sub_14018B900((__int64)v13, 0);
	return 0i64;
}
// 140754525: variable 'v51' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140C65898: using guessed type __int64 qword_140C65898;

