#include "../winhttp.h"

//----- (0000000140137280) ----------------------------------------------------
void __fastcall sub_140137280(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // r14
	_WORD* v7; // r8
	_QWORD* v8; // rax
	_QWORD* v9; // rcx
	char v10[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v11; // [rsp+28h] [rbp-30h]
	_WORD* v12; // [rsp+30h] [rbp-28h]
	__int64 v13; // [rsp+38h] [rbp-20h]

	v4 = 0i64;
	v5 = 0i64;
	v11 = 0i64;
	v13 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v6 + 1), 0);
		v11 = v5;
		v13 = (__int64)v5 + 2 * v6 + 2;
	}
	sub_1407DB590(v5, a2, 2 * v6);
	v7 = (_WORD*)v5 + v6;
	v12 = v7;
	if (v7)
		*v7 = 0;
	v8 = *(_QWORD**)(a1 + 520);
	if (v8 == *(_QWORD**)(a1 + 528))
	{
		sub_1400F8CF0((__int64*)(a1 + 504), *(char**)(a1 + 520), (__int64)v10);
	}
	else
	{
		if (v8)
		{
			v9 = *(_QWORD**)(a1 + 520);
			v8[1] = 0i64;
			v8[2] = 0i64;
			v8[3] = 0i64;
			sub_14001C1B0(v9, v5, (__int64)v7);
		}
		*(_QWORD*)(a1 + 520) += 32i64;
	}
	if (v5)
		sub_14018B900((__int64)v5, 0);
}
// 140137280: using guessed type char var_38[8];

