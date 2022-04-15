//----- (000000014058AC50) ----------------------------------------------------
void __fastcall sub_14058AC50(__int64 a1)
{
	int* v2; // rbp
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rsi
	int v13; // edx
	__int64* v14; // rax
	__int16* v15; // rax
	__int64 i; // rbx
	__int64 v17; // rcx
	__int64 j; // rbx
	__int64 v19; // rcx
	char v20[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v21; // [rsp+38h] [rbp-70h]
	__int64 v23; // [rsp+48h] [rbp-60h]
	char v24[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v25; // [rsp+58h] [rbp-50h]
	__int64 v27; // [rsp+68h] [rbp-40h]
	char v28[8]; // [rsp+70h] [rbp-38h] BYREF
	__int64 v29; // [rsp+78h] [rbp-30h]
	__int64 v30; // [rsp+80h] [rbp-28h]

	v2 = 0i64;
	v21 = 0i64;
	v23 = 0i64;
	v3 = 0i64;
	while (asc_140B1F478[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v21 = v2;
		v23 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v25 = 0i64;
	v8 = 0i64;
	v27 = 0i64;
	if (*(_WORD*)v6)
	{
		do
			++v7;
		while (*((_WORD*)v6 + v7));
	}
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v8 = sub_14018B280(2 * (v9 + 1), 0);
		v25 = v8;
		v27 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v28, (__int64)v24, (__int64)v20, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v11 = v30;
	v12 = v29;
	if (!((v30 - v29) >> 5))
	{
		v13 = 249415;
		goto LABEL_21;
	}
	v14 = (__int64*)sub_1405846F0(v10, v29);
	if (!v14)
	{
		v13 = 240550;
	LABEL_21:
		v15 = sub_14034BDD0(v10, v13);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v15, 0, 0i64);
		for (i = v12; i != v11; i += 32i64)
		{
			v17 = *(_QWORD*)(i + 8);
			if (v17)
				sub_14018B900(v17, 0);
		}
		goto LABEL_30;
	}
	sub_14057EDD0(v14);
	for (j = v12; j != v11; j += 32i64)
	{
		v19 = *(_QWORD*)(j + 8);
		if (v19)
			sub_14018B900(v19, 0);
	}
LABEL_30:
	if (v12)
		sub_14018B900(v12, 0);
}
// 14058ADD9: variable 'v10' is possibly undefined
// 140B1F478: using guessed type wchar_t asc_140B1F478[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14058AC50: using guessed type char var_78[8];
// 14058AC50: using guessed type char var_58[8];
// 14058AC50: using guessed type char var_38[8];

