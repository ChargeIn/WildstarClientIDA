#include "../winhttp.h"

//----- (00000001400B86F0) ----------------------------------------------------
__int64 __fastcall sub_1400B86F0(__int64 a1, int a2, unsigned __int16* a3)
{
	int* v6; // rax
	__int64 v7; // r14
	unsigned __int16* v8; // rax
	__int64 v9; // rdi
	int* v10; // r15
	__int64 v11; // r12
	__int64 v12; // rbp
	int* v13; // rsi
	__int64 v14; // rax
	__int64 v16; // r14
	_WORD* v17; // rax
	__int64 v18; // rbp
	__int64 v19; // rsi
	__int64 v20; // rax
	__int64 i; // rbx
	__int64 v22; // rcx
	char v23[8]; // [rsp+30h] [rbp-88h] BYREF
	int* v24; // [rsp+38h] [rbp-80h]
	_WORD* v25; // [rsp+40h] [rbp-78h]
	__int64 v26; // [rsp+48h] [rbp-70h]
	char v27[8]; // [rsp+50h] [rbp-68h] BYREF
	int* v28; // [rsp+58h] [rbp-60h]
	__int64 v29; // [rsp+60h] [rbp-58h]
	__int64 v30; // [rsp+68h] [rbp-50h]
	char v31[8]; // [rsp+70h] [rbp-48h] BYREF
	__int64 v32; // [rsp+78h] [rbp-40h]
	__int64 v33; // [rsp+80h] [rbp-38h]

	if (!a3)
		return 0i64;
	v6 = sub_14018B280(16i64, 0);
	v7 = (__int64)v6;
	if (v6)
		*(_WORD*)v6 = 0;
	v8 = sub_14018E670(a3);
	if (v8)
	{
		v9 = v8 - a3 + 1;
	}
	else
	{
		v9 = 0i64;
		if (*a3)
		{
			do
				++v9;
			while (a3[v9]);
		}
	}
	v10 = 0i64;
	v11 = 0i64;
	v12 = (2 * v9 - 2) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v10 = sub_14018B280(2 * (v12 + 1), 0);
		v11 = (__int64)v10 + 2 * v12 + 2;
	}
	sub_1407DB590(v10, (int*)a3, 2 * v12);
	if ((int*)((char*)v10 + 2 * v12))
		*((_WORD*)v10 + v12) = 0;
	v28 = v10;
	v29 = (__int64)v10 + 2 * v12;
	v30 = v11;
	if (v7)
		sub_14018B900(v7, 0);
	v13 = 0i64;
	v24 = 0i64;
	v26 = 0i64;
	v14 = 0i64;
	while (*((_WORD*)&unk_1409D1994 + ++v14) != 0)
		;
	v16 = (2 * v14) >> 1;
	if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v13 = sub_14018B280(2 * (v16 + 1), 0);
		v24 = v13;
		v26 = (__int64)v13 + 2 * v16 + 2;
	}
	sub_1407DB590(v13, (int*)&unk_1409D1994, 2 * v16);
	v17 = (_WORD*)v13 + v16;
	v25 = v17;
	if (v17)
		*v17 = 0;
	sub_14018F570((__int64)v31, (__int64)v27, (__int64)v23, 0, 0);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	v18 = v32;
	v19 = v33;
	if (v32 != v33)
	{
		v20 = (v33 - v32) >> 5;
		if (a2 >= (int)v20)
			a2 = v20 - 1;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 56i64))(a1, *(_QWORD*)(32i64 * a2 + v32 + 8));
	}
	for (i = v18; i != v19; i += 32i64)
	{
		v22 = *(_QWORD*)(i + 8);
		if (v22)
			sub_14018B900(v22, 0);
	}
	if (v18)
		sub_14018B900(v18, 0);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v9;
}
// 1400B86F0: using guessed type char var_88[8];
// 1400B86F0: using guessed type char var_68[8];
// 1400B86F0: using guessed type char var_48[8];

