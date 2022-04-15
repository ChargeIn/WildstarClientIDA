//----- (0000000140198B40) ----------------------------------------------------
void __fastcall sub_140198B40(__int64 a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rdi
	int* v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	bool v9; // zf
	__int64 v10; // r8
	__int64 v11; // rax
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rdi
	__int64 i; // rbx
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	int* v18; // [rsp+28h] [rbp-40h]
	int* v19; // [rsp+30h] [rbp-38h]
	int* v20; // [rsp+38h] [rbp-30h]
	char v21[8]; // [rsp+40h] [rbp-28h] BYREF
	int* v22; // [rsp+48h] [rbp-20h]
	int* v23; // [rsp+50h] [rbp-18h]

	v4 = sub_14018B280(16i64, 0);
	v5 = 0i64;
	v18 = v4;
	v19 = v4;
	v20 = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v6 = *(int**)(a2 + 8);
	v7 = 0i64;
	if (*(_WORD*)v6)
	{
		do
			++v7;
		while (*((_WORD*)v6 + v7));
	}
	if ((2 * v7) >> 1)
		sub_14001C310(&v17, v6, (int*)((char*)v6 + 2 * v7));
	else
		sub_1407DB590(v4, v6, 0i64);
	v8 = 0i64;
	do
		v9 = *(_WORD*)&asc_1409E1F64[2 * v8++ + 2] == 0;
	while (!v9);
	sub_14001C310(&v17, (int*)" ", (int*)&asc_1409E1F64[2 * v8]);
	v10 = *(unsigned int*)(a2 + 16);
	if (*(_DWORD*)qword_140C63750 < (int)v10)
		v10 = *(unsigned int*)qword_140C63750;
	(*(void(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)a2 + 16i64))(a2, v21, v10);
	sub_14001C310(&v17, v22, v23);
	if (v22)
		sub_14018B900((__int64)v22, 0);
	if (*(_DWORD*)(a2 + 16) != 1)
	{
		v11 = 0i64;
		do
			v9 = *(_WORD*)&asc_1409E345C[2 * v11++ + 2] == 0;
		while (!v9);
		sub_14001C310(&v17, (int*)L" (", (int*)&asc_1409E345C[2 * v11]);
		v12 = (int*)off_140C2CBA0[*(int*)(a2 + 16)];
		v13 = 0i64;
		if (*(_WORD*)v12)
		{
			do
				++v13;
			while (*((_WORD*)v12 + v13));
		}
		sub_14001C310(&v17, v12, (int*)((char*)v12 + 2 * v13));
		v14 = 0i64;
		do
			v9 = *(_WORD*)&asc_1409E1F7C[2 * v14++ + 2] == 0;
		while (!v9);
		sub_14001C310(&v17, (int*)")", (int*)&asc_1409E1F7C[2 * v14]);
	}
	if ((*(_BYTE*)(a2 + 20) & 1) != 0)
	{
		do
			v9 = aUnsaved[++v5] == 0;
		while (!v9);
		sub_14001C310(&v17, (int*)L" [Unsaved]", (int*)&aUnsaved[v5]);
	}
	v15 = (__int64)v18;
	if (v18)
	{
		for (i = *(_QWORD*)(a1 + 56); i != *(_QWORD*)(a1 + 64); i += 16i64)
			(*(void(__fastcall**)(_QWORD, __int64))(i + 8))(*(_QWORD*)i, v15);
		sub_14018B900(v15, 0);
	}
}
// 1409E345C: using guessed type int asc_1409E345C[20];
// 140A43F40: using guessed type wchar_t aUnsaved[11];
// 140C2CBA0: using guessed type wchar_t *off_140C2CBA0[10];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140198B40: using guessed type char var_28[8];

