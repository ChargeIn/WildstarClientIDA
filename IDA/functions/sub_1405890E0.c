//----- (00000001405890E0) ----------------------------------------------------
void __fastcall sub_1405890E0(__int64 a1)
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
	unsigned __int64 v13; // rbx
	int v14; // edx
	__int64* v15; // rbp
	__int16* v16; // rax
	__int64 i; // rbx
	__int64 v18; // rcx
	__int16* v19; // rax
	__int16* v20; // rax
	__int64 j; // rbx
	__int64 v22; // rcx
	char v23[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v24; // [rsp+38h] [rbp-70h]
	__int64 v26; // [rsp+48h] [rbp-60h]
	char v27[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v28; // [rsp+58h] [rbp-50h]
	__int64 v30; // [rsp+68h] [rbp-40h]
	char v31[8]; // [rsp+70h] [rbp-38h] BYREF
	__int64 v32; // [rsp+78h] [rbp-30h]
	__int64 v33; // [rsp+80h] [rbp-28h]

	v2 = 0i64;
	v24 = 0i64;
	v26 = 0i64;
	v3 = 0i64;
	while (asc_140B1F358[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v24 = v2;
		v26 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v28 = 0i64;
	v8 = 0i64;
	v30 = 0i64;
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
		v28 = v8;
		v30 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v31, (__int64)v27, (__int64)v23, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v11 = v33;
	v12 = v32;
	v13 = (v33 - v32) >> 5;
	if (!v13)
	{
		v14 = 240353;
		goto LABEL_21;
	}
	v15 = (__int64*)sub_1405846F0(v10, v32);
	if (!v15)
	{
		v14 = 240550;
	LABEL_21:
		v16 = sub_14034BDD0(v10, v14);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v16, 0, 0i64);
		for (i = v12; i != v11; i += 32i64)
		{
			v18 = *(_QWORD*)(i + 8);
			if (v18)
				sub_14018B900(v18, 0);
		}
		goto LABEL_34;
	}
	if (v13 < 2
		|| (v19 = sub_14034BDD0(v10, 134485), (unsigned int)sub_14018E2C0(*(_QWORD*)(v12 + 40), (unsigned __int16*)v19)))
	{
		v20 = sub_14034BDD0(v10, 240353);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v20, 0, 0i64);
	}
	else
	{
		sub_14057E730(v15);
	}
	for (j = v12; j != v11; j += 32i64)
	{
		v22 = *(_QWORD*)(j + 8);
		if (v22)
			sub_14018B900(v22, 0);
	}
LABEL_34:
	if (v12)
		sub_14018B900(v12, 0);
}
// 140589269: variable 'v10' is possibly undefined
// 140B1F358: using guessed type wchar_t asc_140B1F358[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1405890E0: using guessed type char var_78[8];
// 1405890E0: using guessed type char var_58[8];
// 1405890E0: using guessed type char var_38[8];

