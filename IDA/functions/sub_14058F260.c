//----- (000000014058F260) ----------------------------------------------------
void __fastcall sub_14058F260(__int64 a1)
{
	int* v2; // r14
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r15
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rsi
	__int64 v13; // rdx
	int v14; // edx
	__int64 v15; // rax
	__int16* v16; // rax
	__int64 i; // rbx
	__int64 v18; // rcx
	__int64* v19; // rbx
	__int64 v20; // rbp
	__int16* v21; // rax
	__int64 v22; // rcx
	__int16* v23; // rax
	__int16* v24; // rax
	__int64 j; // rbx
	__int64 v26; // rcx
	char v27[8]; // [rsp+30h] [rbp-88h] BYREF
	int* v28; // [rsp+38h] [rbp-80h]
	__int64 v30; // [rsp+48h] [rbp-70h]
	char v31[8]; // [rsp+50h] [rbp-68h] BYREF
	int* v32; // [rsp+58h] [rbp-60h]
	__int64 v34; // [rsp+68h] [rbp-50h]
	char v35[8]; // [rsp+70h] [rbp-48h] BYREF
	__int64 v36; // [rsp+78h] [rbp-40h]
	__int64 v37; // [rsp+80h] [rbp-38h]

	v2 = 0i64;
	v28 = 0i64;
	v30 = 0i64;
	v3 = 0i64;
	while (asc_140B1F598[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v28 = v2;
		v30 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v8 = 0i64;
	v32 = 0i64;
	v34 = 0i64;
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
		v32 = v8;
		v34 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v35, (__int64)v31, (__int64)v27, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v11 = v37;
	v12 = v36;
	v13 = (v37 - v36) >> 5;
	if (!v13)
	{
		v14 = 628446;
	LABEL_23:
		v16 = sub_14034BDD0(v10, v14);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v16, 0, 0i64);
		goto LABEL_24;
	}
	v10 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_22;
	while (1)
	{
		v15 = *(_QWORD*)(qword_140C7DE18 + 8 * v10);
		if (*(_DWORD*)(v15 + 16) == 7)
			break;
		if (++v10 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_22;
	}
	v19 = *(__int64**)(qword_140C7DE18 + 8 * v10);
	if (!v15)
	{
	LABEL_22:
		v14 = 628499;
		goto LABEL_23;
	}
	if (v13 == 1)
	{
		v20 = *(_QWORD*)(v36 + 8);
		v21 = sub_14034BDD0(v10, 64);
		if (!(unsigned int)sub_14018E2C0(v20, (unsigned __int16*)v21))
		{
			sub_14057ED50(v19, 1);
			goto LABEL_24;
		}
		v23 = sub_14034BDD0(v22, 65);
		if (!(unsigned int)sub_14018E2C0(v20, (unsigned __int16*)v23))
		{
			sub_14057ED50(v19, 0);
			goto LABEL_24;
		}
	}
	else if (v13 == 2)
	{
		sub_14057ECD0(*(__int64**)(qword_140C7DE18 + 8 * v10), *(_QWORD*)(a1 + 8));
	LABEL_24:
		for (i = v12; i != v11; i += 32i64)
		{
			v18 = *(_QWORD*)(i + 8);
			if (v18)
				sub_14018B900(v18, 0);
		}
		goto LABEL_28;
	}
	v24 = sub_14034BDD0(v10, 628446);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v24, 0, 0i64);
	for (j = v12; j != v11; j += 32i64)
	{
		v26 = *(_QWORD*)(j + 8);
		if (v26)
			sub_14018B900(v26, 0);
	}
LABEL_28:
	if (v12)
		sub_14018B900(v12, 0);
}
// 14058F41B: variable 'v10' is possibly undefined
// 14058F4DD: variable 'v22' is possibly undefined
// 140B1F598: using guessed type wchar_t asc_140B1F598[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 14058F260: using guessed type char var_88[8];
// 14058F260: using guessed type char var_68[8];
// 14058F260: using guessed type char var_48[8];

