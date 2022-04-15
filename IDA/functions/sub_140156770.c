//----- (0000000140156770) ----------------------------------------------------
__int64 __fastcall sub_140156770(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	int* v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	int* v13; // rdx
	__int64 v14; // rax
	unsigned __int64 i; // rbx
	wchar_t* v16; // rdx
	__int64 v17; // rax
	wchar_t* v18; // rax
	__int64 v19; // rax
	_WORD* v20; // rax
	bool v22; // [rsp+60h] [rbp+8h] BYREF

	v2 = 0i64;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B5C868;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v5;
	*(_QWORD*)(a1 + 32) = v5;
	*(_QWORD*)(a1 + 40) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 56) = v6;
	*(_QWORD*)(a1 + 64) = v6;
	*(_QWORD*)(a1 + 72) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 1065353216i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v7 = sub_1401A6B80(a2, L"Name");
	if (v7)
		v8 = sub_1401A4F40(v7 + 32);
	else
		v8 = 0i64;
	v9 = (int*)&unk_1409DBAEC;
	if (v8)
		v9 = (int*)v8;
	v10 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	sub_14001C480(a1 + 48, v9, (int*)((char*)v9 + 2 * v10));
	v11 = sub_1401A6B80(a2, L"Face");
	if (v11)
		v12 = sub_1401A4F40(v11 + 32);
	else
		v12 = 0i64;
	v13 = (int*)&unk_1409DBA94;
	if (v12)
		v13 = (int*)v12;
	v14 = 0i64;
	if (*(_WORD*)v13)
	{
		do
			++v14;
		while (*((_WORD*)v13 + v14));
	}
	sub_14001C480(a1 + 16, v13, (int*)((char*)v13 + 2 * v14));
	for (i = 0i64; i < 5; ++i)
	{
		v16 = off_140A348C0[i];
		v22 = 0;
		v17 = sub_1401A6B80(a2, v16);
		if (v17)
		{
			v18 = (wchar_t*)sub_1401A4F40(v17 + 32);
			sub_1401A52E0(v18, &v22);
			if (v22)
				v2 |= 1i64 << i;
		}
	}
	*(_DWORD*)(a1 + 84) = v2;
	v19 = sub_1401A6B80(a2, L"Size");
	if (v19)
	{
		v20 = (_WORD*)sub_1401A4F40(v19 + 32);
		sub_1407DF428(v20, (__int64)L"%d", a1 + 80);
	}
	if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65680 + 32i64))(
		qword_140C65680,
		*(_QWORD*)(a1 + 24),
		*(unsigned int*)(a1 + 80)) >= 0)
		*(_DWORD*)(a1 + 92) = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96));
	return a1;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A347D0: using guessed type wchar_t aSize_1[5];
// 140A347E0: using guessed type wchar_t aFace_0[5];
// 140A348C0: using guessed type wchar_t *off_140A348C0[6];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5C868: using guessed type __int64 (__fastcall *off_140B5C868[4])();
// 140C65680: using guessed type __int64 qword_140C65680;

