#include "../winhttp.h"

//----- (000000014058D070) ----------------------------------------------------
void __fastcall sub_14058D070(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int16* v4; // rax
	__int64* v5; // r14
	int* v6; // rbp
	__int64 v7; // rax
	__int64 v9; // rdi
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 v13; // r15
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rbx
	__int16* v19; // rax
	__int64 v20; // rcx
	__int16* v21; // rax
	__int64 j; // rbx
	__int64 v23; // rcx
	__int16* v24; // rax
	__int64 i; // rbx
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
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 3)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v5 = *(__int64**)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = sub_14034BDD0(a1, 282577);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	v6 = 0i64;
	v28 = 0i64;
	v30 = 0i64;
	v7 = 0i64;
	while (asc_140B1F520[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v28 = v6;
		v30 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v12 = 0i64;
	v32 = 0i64;
	v34 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	v13 = (2 * v11) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v13 + 1), 0);
		v32 = v12;
		v34 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v35, (__int64)v31, (__int64)v27, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v15 = v37;
	v16 = v36;
	v17 = (v37 - v36) >> 5;
	if (v17 == 1)
	{
		v18 = *(_QWORD*)(v36 + 8);
		v19 = sub_14034BDD0(v14, 64);
		if (!(unsigned int)sub_14018E2C0(v18, (unsigned __int16*)v19))
		{
			sub_14057ED50(v5, 1);
			goto LABEL_29;
		}
		v21 = sub_14034BDD0(v20, 65);
		if (!(unsigned int)sub_14018E2C0(v18, (unsigned __int16*)v21))
		{
			sub_14057ED50(v5, 0);
			goto LABEL_29;
		}
	LABEL_34:
		v24 = sub_14034BDD0(v14, 282584);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v24, 0, 0i64);
		for (i = v16; i != v15; i += 32i64)
		{
			v26 = *(_QWORD*)(i + 8);
			if (v26)
				sub_14018B900(v26, 0);
		}
		goto LABEL_38;
	}
	if (v17 != 2)
		goto LABEL_34;
	sub_14057ECD0(v5, *(_QWORD*)(a1 + 8));
LABEL_29:
	for (j = v16; j != v15; j += 32i64)
	{
		v23 = *(_QWORD*)(j + 8);
		if (v23)
			sub_14018B900(v23, 0);
	}
LABEL_38:
	if (v16)
		sub_14018B900(v16, 0);
}
// 14058D290: variable 'v14' is possibly undefined
// 14058D2B6: variable 'v20' is possibly undefined
// 140B1F520: using guessed type wchar_t asc_140B1F520[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 14058D070: using guessed type char var_88[8];
// 14058D070: using guessed type char var_68[8];
// 14058D070: using guessed type char var_48[8];

