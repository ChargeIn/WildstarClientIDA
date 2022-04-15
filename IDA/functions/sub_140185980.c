#include "../winhttp.h"

//----- (0000000140185980) ----------------------------------------------------
void __fastcall sub_140185980(__int64 a1, __int64 a2)
{
	int* v2; // rdi
	__int64 v4; // rax
	int* v6; // rsi
	__int64 v7; // r14
	_WORD* v8; // rax
	int* v9; // rdi
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // r14
	_WORD* v13; // rax
	char v14[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v15; // [rsp+28h] [rbp-40h]
	_WORD* v16; // [rsp+30h] [rbp-38h]
	__int64 v17; // [rsp+38h] [rbp-30h]

	v2 = *(int**)(a2 + 24);
	v4 = 0i64;
	v6 = 0i64;
	v15 = 0i64;
	v17 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v4;
		while (*((_WORD*)v2 + v4));
	}
	v7 = (2 * v4) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v7 + 1), 0);
		v15 = v6;
		v17 = (__int64)v6 + 2 * v7 + 2;
	}
	sub_1407DB590(v6, v2, 2 * v7);
	v8 = (_WORD*)v6 + v7;
	v16 = v8;
	if (v8)
		*v8 = 0;
	*(_QWORD*)sub_1400EDA60(a1 + 192, (__int64)v14) = a2;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v9 = *(int**)(a1 + 24);
	v10 = 0i64;
	v11 = 0i64;
	v15 = 0i64;
	v17 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	v12 = (2 * v10) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v11 = sub_14018B280(2 * (v12 + 1), 0);
		v15 = v11;
		v17 = (__int64)v11 + 2 * v12 + 2;
	}
	sub_1407DB590(v11, v9, 2 * v12);
	v13 = (_WORD*)v11 + v12;
	v16 = v13;
	if (v13)
		*v13 = 0;
	*(_QWORD*)sub_1400EDA60(a2 + 160, (__int64)v14) = a1;
	if (v11)
		sub_14018B900((__int64)v11, 0);
}
// 140185980: using guessed type char var_48[8];

