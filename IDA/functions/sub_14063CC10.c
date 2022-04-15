//----- (000000014063CC10) ----------------------------------------------------
void __fastcall sub_14063CC10(__int64 a1)
{
	int v1; // edi
	int* v3; // r14
	__int64 v4; // rax
	__int64 v6; // rsi
	int* v7; // rsi
	__int64 v8; // rax
	int* v9; // rbp
	__int64 v10; // r15
	__int64 v11; // rsi
	__int64 v12; // rbp
	__int64 v13; // rcx
	int v14; // eax
	__int64 i; // rbx
	__int64 v16; // rcx
	char v17[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v18; // [rsp+38h] [rbp-70h]
	__int64 v20; // [rsp+48h] [rbp-60h]
	char v21[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v22; // [rsp+58h] [rbp-50h]
	__int64 v24; // [rsp+68h] [rbp-40h]
	char v25[8]; // [rsp+70h] [rbp-38h] BYREF
	__int64 v26; // [rsp+78h] [rbp-30h]
	__int64 v27; // [rsp+80h] [rbp-28h]

	v1 = 0;
	v3 = 0i64;
	v18 = 0i64;
	v20 = 0i64;
	v4 = 0i64;
	while (asc_140B28C68[++v4] != 0)
		;
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v18 = v3;
		v20 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t\r\n", 2 * v6);
	if ((int*)((char*)v3 + 2 * v6))
		*((_WORD*)v3 + v6) = 0;
	v7 = *(int**)(a1 + 8);
	v8 = 0i64;
	v22 = 0i64;
	v9 = 0i64;
	v24 = 0i64;
	if (*(_WORD*)v7)
	{
		do
			++v8;
		while (*((_WORD*)v7 + v8));
	}
	v10 = (2 * v8) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = sub_14018B280(2 * (v10 + 1), 0);
		v22 = v9;
		v24 = (__int64)v9 + 2 * v10 + 2;
	}
	sub_1407DB590(v9, v7, 2 * v10);
	if ((int*)((char*)v9 + 2 * v10))
		*((_WORD*)v9 + v10) = 0;
	sub_14018F570((__int64)v25, (__int64)v21, (__int64)v17, 34, 92);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v11 = v27;
	v12 = v26;
	if ((v27 - v26) >> 5)
	{
		v13 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v13)
			v1 = *(_DWORD*)(v13 + 264);
		v14 = sub_1407DF510(*(WCHAR**)(v26 + 8));
		if (v14)
			sub_1406020B0(qword_140C65898 + 27664, v14, v1);
	}
	for (i = v12; i != v11; i += 32i64)
	{
		v16 = *(_QWORD*)(i + 8);
		if (v16)
			sub_14018B900(v16, 0);
	}
	if (v12)
		sub_14018B900(v12, 0);
}
// 140B28C68: using guessed type wchar_t asc_140B28C68[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 14063CC10: using guessed type char var_78[8];
// 14063CC10: using guessed type char var_58[8];
// 14063CC10: using guessed type char var_38[8];

