#include "../winhttp.h"

//----- (000000014058A570) ----------------------------------------------------
void __fastcall sub_14058A570(__int64 a1)
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
	__int64* v14; // rbp
	__int16* v15; // rax
	__int64 j; // rbx
	__int64 v17; // rcx
	__int64 v18; // rbx
	int v19; // eax
	__int64 i; // rbx
	__int64 v21; // rcx
	char v22[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v23; // [rsp+38h] [rbp-70h]
	__int64 v25; // [rsp+48h] [rbp-60h]
	char v26[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v27; // [rsp+58h] [rbp-50h]
	__int64 v29; // [rsp+68h] [rbp-40h]
	char v30[8]; // [rsp+70h] [rbp-38h] BYREF
	__int64 v31; // [rsp+78h] [rbp-30h]
	__int64 v32; // [rsp+80h] [rbp-28h]

	v2 = 0i64;
	v23 = 0i64;
	v25 = 0i64;
	v3 = 0i64;
	while (asc_140B1F4A8[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v23 = v2;
		v25 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v27 = 0i64;
	v8 = 0i64;
	v29 = 0i64;
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
		v27 = v8;
		v29 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v30, (__int64)v26, (__int64)v22, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v11 = v32;
	v12 = v31;
	if ((unsigned __int64)((v32 - v31) >> 5) >= 3)
	{
		v14 = (__int64*)sub_1405846F0(v10, v31);
		if (v14)
		{
			v18 = *(_QWORD*)(v12 + 72);
			v19 = sub_14018E820(*(WCHAR**)(v12 + 40));
			sub_14057EBD0(v14, v19 - 1, v18);
			for (i = v12; i != v11; i += 32i64)
			{
				v21 = *(_QWORD*)(i + 8);
				if (v21)
					sub_14018B900(v21, 0);
			}
			goto LABEL_31;
		}
		v13 = 240550;
	}
	else
	{
		v13 = 240387;
	}
	v15 = sub_14034BDD0(v10, v13);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v15, 0, 0i64);
	for (j = v12; j != v11; j += 32i64)
	{
		v17 = *(_QWORD*)(j + 8);
		if (v17)
			sub_14018B900(v17, 0);
	}
	if (v12)
		LABEL_31:
	sub_14018B900(v12, 0);
}
// 14058A6F9: variable 'v10' is possibly undefined
// 140B1F4A8: using guessed type wchar_t asc_140B1F4A8[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14058A570: using guessed type char var_78[8];
// 14058A570: using guessed type char var_58[8];
// 14058A570: using guessed type char var_38[8];

