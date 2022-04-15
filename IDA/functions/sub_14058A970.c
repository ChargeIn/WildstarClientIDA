//----- (000000014058A970) ----------------------------------------------------
void __fastcall sub_14058A970(__int64 a1)
{
	int* v2; // r14
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r15
	__int64 v10; // rcx
	__int64 v11; // rsi
	__int64 v12; // rdi
	unsigned __int64 v13; // rbx
	__int64* v14; // rbp
	int v15; // edx
	__int64 v16; // rbx
	__int16* v17; // rax
	__int64 v18; // rcx
	__int16* v19; // rax
	_QWORD* v20; // rax
	__int64 v21; // rbx
	__int16* v22; // rax
	__int64 i; // rbx
	__int64 v24; // rcx
	char v25[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v26; // [rsp+38h] [rbp-70h]
	__int64 v28; // [rsp+48h] [rbp-60h]
	__int64 v29; // [rsp+50h] [rbp-58h] BYREF
	int* v30; // [rsp+58h] [rbp-50h]
	__int64 v32; // [rsp+68h] [rbp-40h]
	__int64 v33; // [rsp+70h] [rbp-38h] BYREF
	__int64 v34; // [rsp+78h] [rbp-30h]
	__int64 v35; // [rsp+80h] [rbp-28h]

	v2 = 0i64;
	v26 = 0i64;
	v28 = 0i64;
	v3 = 0i64;
	while (asc_140B1F458[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v26 = v2;
		v28 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v30 = 0i64;
	v8 = 0i64;
	v32 = 0i64;
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
		v30 = v8;
		v32 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)&v33, (__int64)&v29, (__int64)v25, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v11 = v35;
	v12 = v34;
	v13 = (v35 - v34) >> 5;
	if (v13 < 2)
		goto LABEL_30;
	v14 = (__int64*)sub_1405846F0(v10, v34);
	if (!v14)
	{
		v15 = 240550;
	LABEL_31:
		v22 = sub_14034BDD0(v10, v15);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v22, 0, 0i64);
		goto LABEL_32;
	}
	if (v13 == 2)
	{
		v16 = *(_QWORD*)(v12 + 40);
		v17 = sub_14034BDD0(v10, 64);
		if (!(unsigned int)sub_14018E2C0(v16, (unsigned __int16*)v17))
		{
			sub_14057ED50(v14, 1);
			goto LABEL_32;
		}
		v19 = sub_14034BDD0(v18, 65);
		if (!(unsigned int)sub_14018E2C0(v16, (unsigned __int16*)v19))
		{
			sub_14057ED50(v14, 0);
			goto LABEL_32;
		}
		goto LABEL_30;
	}
	if (v13 != 3)
	{
	LABEL_30:
		v15 = 240352;
		goto LABEL_31;
	}
	v20 = sub_1400EEC00(&v33, v12 + 32, dword_1409F300C);
	sub_1400422A0(&v29, (__int64)v20, v12 + 64);
	if (v34)
		sub_14018B900(v34, 0);
	v21 = (__int64)v30;
	sub_14057ECD0(v14, (__int64)v30);
	if (v21)
		sub_14018B900(v21, 0);
LABEL_32:
	for (i = v12; i != v11; i += 32i64)
	{
		v24 = *(_QWORD*)(i + 8);
		if (v24)
			sub_14018B900(v24, 0);
	}
	if (v12)
		sub_14018B900(v12, 0);
}
// 14058AAF6: variable 'v10' is possibly undefined
// 14058AB45: variable 'v18' is possibly undefined
// 1409F300C: using guessed type int dword_1409F300C[14];
// 140B1F458: using guessed type wchar_t asc_140B1F458[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14058A970: using guessed type char var_78[8];

