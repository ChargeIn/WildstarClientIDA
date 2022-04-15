#include "../winhttp.h"

//----- (00000001404072B0) ----------------------------------------------------
void __fastcall sub_1404072B0(__int64 a1)
{
	__int64 v1; // rdi
	int* v3; // r15
	__int64 v4; // rax
	__int64 v6; // rsi
	int* v7; // rsi
	__int64 v8; // rax
	int* v9; // r14
	__int64 v10; // r12
	__int64 v11; // r14
	__int64 v12; // rsi
	unsigned __int64 v13; // rbx
	BOOL v14; // edx
	int v15; // ecx
	__int64 v16; // rax
	__int64 i; // rbx
	__int64 v18; // rcx
	__int64 v19; // [rsp+20h] [rbp-39h]
	__int64 v20; // [rsp+30h] [rbp-29h] BYREF
	int* v21; // [rsp+38h] [rbp-21h]
	char* v22; // [rsp+40h] [rbp-19h]
	__int64 v23; // [rsp+48h] [rbp-11h]
	char v24[8]; // [rsp+50h] [rbp-9h] BYREF
	int* v25; // [rsp+58h] [rbp-1h]
	__int64 v27; // [rsp+68h] [rbp+Fh]
	char v28[8]; // [rsp+70h] [rbp+17h] BYREF
	__int64 v29; // [rsp+78h] [rbp+1Fh]
	__int64 v30; // [rsp+80h] [rbp+27h]

	v1 = 0i64;
	v3 = 0i64;
	v21 = 0i64;
	v23 = 0i64;
	v4 = 0i64;
	while (asc_140AF8A28[++v4] != 0)
		;
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v21 = v3;
		v23 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t\r\n", 2 * v6);
	v22 = (char*)v3 + 2 * v6;
	if (v22)
		*((_WORD*)v3 + v6) = 0;
	v7 = *(int**)(a1 + 8);
	v8 = 0i64;
	v25 = 0i64;
	v9 = 0i64;
	v27 = 0i64;
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
		v25 = v9;
		v27 = (__int64)v9 + 2 * v10 + 2;
	}
	sub_1407DB590(v9, v7, 2 * v10);
	if ((int*)((char*)v9 + 2 * v10))
		*((_WORD*)v9 + v10) = 0;
	sub_14018F570((__int64)v28, (__int64)v24, (__int64)&v20, 34, 92);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v11 = v30;
	v12 = v29;
	v13 = (v30 - v29) >> 5;
	if (v13)
		v1 = sub_140404300(qword_140C658A0, v29);
	v14 = v13 < 2 || sub_140407530(v12 + 32);
	if (v1)
	{
		v20 = 0i64;
		v21 = 0i64;
		v22 = 0i64;
		v23 = 0i64;
		v21 = *(int**)(v1 + 16);
		v15 = **(_DWORD**)(v1 + 8);
		LODWORD(v23) = v14;
		LODWORD(v20) = v15;
		v22 = (char*)&unk_1409E86BC;
		sub_1403F4740(qword_140C65898, 0x1CEu, (__int64)&v20);
	}
	else
	{
		v16 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		LODWORD(v19) = 1;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v16, v19);
	}
	for (i = v12; i != v11; i += 32i64)
	{
		v18 = *(_QWORD*)(i + 8);
		if (v18)
			sub_14018B900(v18, 0);
	}
	if (v12)
		sub_14018B900(v12, 0);
}
// 1404074D1: variable 'v19' is possibly undefined
// 140AF8A28: using guessed type wchar_t asc_140AF8A28[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1404072B0: using guessed type char var_60[8];
// 1404072B0: using guessed type char var_40[8];

