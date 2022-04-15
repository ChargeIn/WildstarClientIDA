//----- (0000000140430F80) ----------------------------------------------------
void __fastcall sub_140430F80(__int64 a1, unsigned int a2, float* a3)
{
	__int64 v3; // rdi
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	float v10; // xmm6_4
	int v11; // r14d
	_QWORD* v12; // rax
	__int64 v13; // rdx
	unsigned __int64 v14; // rbx
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	__int64 v17; // rax
	__int64* v18; // rax
	float v19; // xmm6_4
	_QWORD* v20; // rax
	__int64 v21; // r10
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	__int64 v24; // rax
	__int64* v25; // rax
	float v26; // xmm6_4
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64* v29; // rdx
	__int64 v30; // rax
	__int64* v31; // rax
	__int64 v32; // rdx
	__int64 v33; // [rsp+30h] [rbp-48h] BYREF
	__int64 v34; // [rsp+38h] [rbp-40h]

	v3 = *(_QWORD*)(a1 + 400);
	if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
		sub_14005E2C0(v3);
	v7 = *(_QWORD*)(v3 + 16);
	v8 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v3 + 16) += 16i64;
	v9 = sub_1400578C0(v3);
	v10 = *a3;
	v11 = v9;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v9);
	v13 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v14 = -1i64;
	v15 = (unsigned __int64*)sub_14018F0E0(&v33, L"x")[1];
	if (v15)
	{
		v16 = -1i64;
		do
			++v16;
		while (*((_BYTE*)v15 + v16));
		sub_140058710(v3, v15, v16);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
		*(_QWORD*)(v3 + 16) += 16i64;
	}
	if (v34)
		sub_14018B900(v34, 0);
	v17 = *(_QWORD*)(v3 + 16);
	*(_DWORD*)(v17 + 8) = 3;
	*(double*)v17 = v10;
	*(_QWORD*)(v3 + 16) += 16i64;
	v18 = (__int64*)sub_1400580E0(v3, -3);
	sub_14005EA50(v3, v18, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
	*(_QWORD*)(v3 + 16) -= 48i64;
	v19 = a3[1];
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v11);
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v22 = (unsigned __int64*)sub_14018F0E0(&v33, L"y")[1];
	if (v22)
	{
		v23 = -1i64;
		do
			++v23;
		while (*((_BYTE*)v22 + v23));
		sub_140058710(v3, v22, v23);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
		*(_QWORD*)(v3 + 16) += 16i64;
	}
	if (v34)
		sub_14018B900(v34, 0);
	v24 = *(_QWORD*)(v3 + 16);
	*(_DWORD*)(v24 + 8) = 3;
	*(double*)v24 = v19;
	*(_QWORD*)(v3 + 16) += 16i64;
	v25 = (__int64*)sub_1400580E0(v3, -3);
	sub_14005EA50(v3, v25, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
	*(_QWORD*)(v3 + 16) -= 48i64;
	v26 = a3[2];
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v11);
	*(_QWORD*)v28 = *v27;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v29 = (unsigned __int64*)sub_14018F0E0(&v33, L"z")[1];
	if (v29)
	{
		do
			++v14;
		while (*((_BYTE*)v29 + v14));
		sub_140058710(v3, v29, v14);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
		*(_QWORD*)(v3 + 16) += 16i64;
	}
	if (v34)
		sub_14018B900(v34, 0);
	v30 = *(_QWORD*)(v3 + 16);
	*(_DWORD*)(v30 + 8) = 3;
	*(double*)v30 = v26;
	*(_QWORD*)(v3 + 16) += 16i64;
	v31 = (__int64*)sub_1400580E0(v3, -3);
	sub_14005EA50(v3, v31, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
	*(_QWORD*)(v3 + 16) -= 48i64;
	sub_1400EA3E0(a1, "MapTrackedUnitUpdate", "iT", a2, v11);
	sub_1400579E0(v3, v32, v11);
}
// 1404310DD: variable 'v21' is possibly undefined
// 14043119D: variable 'v28' is possibly undefined
// 14043127B: variable 'v32' is possibly undefined
// 1409EF474: using guessed type wchar_t aY_29[2];
// 1409EF4B4: using guessed type wchar_t asc_1409EF4B4[2];
// 1409EF67C: using guessed type wchar_t aZ_17[2];

