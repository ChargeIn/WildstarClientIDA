#include "../winhttp.h"

//----- (0000000140406850) ----------------------------------------------------
void __fastcall sub_140406850(__int64 a1)
{
	int* v2; // rbp
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rsi
	__int64 v11; // rdi
	unsigned __int64 v12; // rbx
	__int64 v13; // rax
	char* v14; // rdx
	int v15; // ecx
	__int64 v16; // rax
	__int64 i; // rbx
	__int64 v18; // rcx
	__int64 v19; // [rsp+20h] [rbp-88h]
	__int64 v20; // [rsp+30h] [rbp-78h] BYREF
	int* v21; // [rsp+38h] [rbp-70h]
	char* v22; // [rsp+40h] [rbp-68h]
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
	while (asc_140AF88C8[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v21 = v2;
		v23 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	v22 = (char*)v2 + 2 * v5;
	if (v22)
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
	sub_14018F570((__int64)v28, (__int64)v24, (__int64)&v20, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v10 = v30;
	v11 = v29;
	v12 = (v30 - v29) >> 5;
	if (v12 && (v13 = sub_140404300(qword_140C658A0, v29)) != 0)
	{
		if (v12 < 2)
			v14 = (char*)&unk_1409E86DC;
		else
			v14 = *(char**)(v11 + 40);
		v20 = 0i64;
		v21 = 0i64;
		v22 = 0i64;
		v21 = *(int**)(v13 + 16);
		v15 = **(_DWORD**)(v13 + 8);
		v22 = v14;
		LODWORD(v20) = v15;
		sub_1403F4740(qword_140C65898, 0x1D0u, (__int64)&v20);
	}
	else
	{
		v16 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		LODWORD(v19) = 1;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v16, v19);
	}
	for (i = v11; i != v10; i += 32i64)
	{
		v18 = *(_QWORD*)(i + 8);
		if (v18)
			sub_14018B900(v18, 0);
	}
	if (v11)
		sub_14018B900(v11, 0);
}
// 140406A74: variable 'v19' is possibly undefined
// 140AF88C8: using guessed type wchar_t asc_140AF88C8[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140406850: using guessed type char var_58[8];
// 140406850: using guessed type char var_38[8];

