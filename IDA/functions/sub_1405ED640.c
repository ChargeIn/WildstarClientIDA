//----- (00000001405ED640) ----------------------------------------------------
__int64 __fastcall sub_1405ED640(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rbp
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // r14d
	float v10; // xmm6_4
	_QWORD* v11; // rax
	__int64 v12; // rdx
	unsigned __int64 v13; // rbx
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	__int64 v16; // rax
	__int64* v17; // rax
	float v18; // xmm6_4
	_QWORD* v19; // rax
	__int64 v20; // r10
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	__int64 v23; // rax
	__int64* v24; // rax
	float v25; // xmm6_4
	_QWORD* v26; // rax
	__int64 v27; // r10
	unsigned __int64* v28; // rdx
	__int64 v29; // rax
	__int64* v30; // rax
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	__int64 v35; // [rsp+20h] [rbp-38h] BYREF
	__int64 v36; // [rsp+28h] [rbp-30h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2]
		|| (v3 = sub_140056AB0(a1, 1u)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0
		|| (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120)), (v6 = v5) == 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_33;
	}
	if (!*(_QWORD*)(v5 + 80))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_33:
		a1[2] += 16i64;
		return 1i64;
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v9 = sub_1400578C0((__int64)a1);
	v10 = (float)*(int*)(*(_QWORD*)(v6 + 80) + 4i64) * 0.001;
	v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v12 = a1[2];
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	v13 = -1i64;
	v14 = (unsigned __int64*)sub_14018F0E0(&v35, L"fMaxTime")[1];
	if (v14)
	{
		v15 = -1i64;
		do
			++v15;
		while (*((_BYTE*)v14 + v15));
		sub_140058710((__int64)a1, v14, v15);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v36)
		sub_14018B900(v36, 0);
	v16 = a1[2];
	*(_DWORD*)(v16 + 8) = 3;
	*(double*)v16 = v10;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v18 = (float)**(int**)(v6 + 80) * 0.001;
	v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	a1[2] += 16i64;
	v21 = (unsigned __int64*)sub_14018F0E0(&v35, L"fInitialDelay")[1];
	if (v21)
	{
		v22 = -1i64;
		do
			++v22;
		while (*((_BYTE*)v21 + v22));
		sub_140058710((__int64)a1, v21, v22);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v36)
		sub_14018B900(v36, 0);
	v23 = a1[2];
	*(_DWORD*)(v23 + 8) = 3;
	*(double*)v23 = v18;
	a1[2] += 16i64;
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v25 = (float)*(int*)(*(_QWORD*)(v6 + 80) + 8i64) * 0.001;
	v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	a1[2] += 16i64;
	v28 = (unsigned __int64*)sub_14018F0E0(&v35, L"fPulseTime")[1];
	if (v28)
	{
		do
			++v13;
		while (*((_BYTE*)v28 + v13));
		sub_140058710((__int64)a1, v28, v13);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v36)
		sub_14018B900(v36, 0);
	v29 = a1[2];
	*(_DWORD*)(v29 + 8) = 3;
	*(double*)v29 = v25;
	a1[2] += 16i64;
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	*(_QWORD*)v32 = *v31;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v33, v9);
	return 1i64;
}
// 1405ED82F: variable 'v20' is possibly undefined
// 1405ED901: variable 'v27' is possibly undefined
// 1405ED9BC: variable 'v32' is possibly undefined
// 1405ED9CE: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23910: using guessed type wchar_t aFmaxtime[9];
// 140B23BE8: using guessed type wchar_t aFinitialdelay[14];
// 140B23C08: using guessed type wchar_t aFpulsetime[11];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

