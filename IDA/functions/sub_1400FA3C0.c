//----- (00000001400FA3C0) ----------------------------------------------------
__int64 __fastcall sub_1400FA3C0(__int64 a1, __int64 a2, float* a3)
{
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // r10
	float v10; // xmm6_4
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rdi
	unsigned __int64 v15; // rbx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // rax
	float v20; // xmm6_4
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	__int64 v24; // rdi
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v27; // rax
	__int64* v28; // rax
	float v29; // xmm6_4
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	__int64 v33; // rdi
	unsigned __int64* v34; // rdx
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v38; // [rsp+20h] [rbp-38h] BYREF
	__int64 v39; // [rsp+28h] [rbp-30h]

	*(_DWORD*)(a1 + 8) = -2;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 24) = 1;
	*(_QWORD*)a1 = off_140B569F0;
	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v6 = *(_QWORD*)(a2 + 16);
	v7 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a2 + 16) += 16i64;
	v8 = sub_1400578C0(a2);
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 8) = v8;
	v10 = *a3;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v8);
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	v14 = *(_QWORD*)(a1 + 16);
	v15 = -1i64;
	v16 = (unsigned __int64*)sub_14018F0E0(&v38, word_1409D489C)[1];
	if (v16)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v16 + v17));
		sub_140058710(v14, v16, v17);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v14 + 16) + 8i64) = 0;
		*(_QWORD*)(v14 + 16) += 16i64;
	}
	if (v39)
		sub_14018B900(v39, 0);
	v18 = *(_QWORD*)(v14 + 16);
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = v10;
	*(_QWORD*)(v14 + 16) += 16i64;
	v19 = (__int64*)sub_1400580E0(v14, -3);
	sub_14005EA50(v14, v19, (int*)(*(_QWORD*)(v14 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v14 + 16) - 16i64));
	*(_QWORD*)(v14 + 16) -= 32i64;
	v20 = a3[1];
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v23 = *(_QWORD*)(v22 + 16);
	*(_QWORD*)v23 = *v21;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v21 + 2);
	*(_QWORD*)(v22 + 16) += 16i64;
	v24 = *(_QWORD*)(a1 + 16);
	v25 = (unsigned __int64*)sub_14018F0E0(&v38, word_1409D48E4)[1];
	if (v25)
	{
		v26 = -1i64;
		do
			++v26;
		while (*((_BYTE*)v25 + v26));
		sub_140058710(v24, v25, v26);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v24 + 16) + 8i64) = 0;
		*(_QWORD*)(v24 + 16) += 16i64;
	}
	if (v39)
		sub_14018B900(v39, 0);
	v27 = *(_QWORD*)(v24 + 16);
	*(_DWORD*)(v27 + 8) = 3;
	*(double*)v27 = v20;
	*(_QWORD*)(v24 + 16) += 16i64;
	v28 = (__int64*)sub_1400580E0(v24, -3);
	sub_14005EA50(v24, v28, (int*)(*(_QWORD*)(v24 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v24 + 16) - 16i64));
	*(_QWORD*)(v24 + 16) -= 32i64;
	v29 = a3[2];
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v32 = *(_QWORD*)(v31 + 16);
	*(_QWORD*)v32 = *v30;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(v31 + 16) += 16i64;
	v33 = *(_QWORD*)(a1 + 16);
	v34 = (unsigned __int64*)sub_14018F0E0(&v38, word_1409D4924)[1];
	if (v34)
	{
		do
			++v15;
		while (*((_BYTE*)v34 + v15));
		sub_140058710(v33, v34, v15);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v33 + 16) + 8i64) = 0;
		*(_QWORD*)(v33 + 16) += 16i64;
	}
	if (v39)
		sub_14018B900(v39, 0);
	v35 = *(_QWORD*)(v33 + 16);
	*(_DWORD*)(v35 + 8) = 3;
	*(double*)v35 = v29;
	*(_QWORD*)(v33 + 16) += 16i64;
	v36 = (__int64*)sub_1400580E0(v33, -3);
	sub_14005EA50(v33, v36, (int*)(*(_QWORD*)(v33 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v33 + 16) - 16i64));
	*(_QWORD*)(v33 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return a1;
}
// 1400FA45A: variable 'v12' is possibly undefined
// 1400FA52E: variable 'v22' is possibly undefined
// 1400FA5FE: variable 'v31' is possibly undefined
// 1409D489C: using guessed type unsigned __int16 word_1409D489C[36];
// 1409D48E4: using guessed type unsigned __int16 word_1409D48E4[32];
// 1409D4924: using guessed type unsigned __int16 word_1409D4924[320];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

