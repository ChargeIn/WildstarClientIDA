//----- (00000001400FA180) ----------------------------------------------------
__int64 __fastcall sub_1400FA180(__int64 a1, __int64 a2, float* a3)
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
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v29; // [rsp+20h] [rbp-38h] BYREF
	__int64 v30; // [rsp+28h] [rbp-30h]

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
	v16 = (unsigned __int64*)sub_14018F0E0(&v29, word_1409D486C)[1];
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
	if (v30)
		sub_14018B900(v30, 0);
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
	v25 = (unsigned __int64*)sub_14018F0E0(&v29, word_1409D4884)[1];
	if (v25)
	{
		do
			++v15;
		while (*((_BYTE*)v25 + v15));
		sub_140058710(v24, v25, v15);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v24 + 16) + 8i64) = 0;
		*(_QWORD*)(v24 + 16) += 16i64;
	}
	if (v30)
		sub_14018B900(v30, 0);
	v26 = *(_QWORD*)(v24 + 16);
	*(_DWORD*)(v26 + 8) = 3;
	*(double*)v26 = v20;
	*(_QWORD*)(v24 + 16) += 16i64;
	v27 = (__int64*)sub_1400580E0(v24, -3);
	sub_14005EA50(v24, v27, (int*)(*(_QWORD*)(v24 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v24 + 16) - 16i64));
	*(_QWORD*)(v24 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return a1;
}
// 1400FA21A: variable 'v12' is possibly undefined
// 1400FA2EE: variable 'v22' is possibly undefined
// 1409D486C: using guessed type unsigned __int16 word_1409D486C[12];
// 1409D4884: using guessed type unsigned __int16 word_1409D4884[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

