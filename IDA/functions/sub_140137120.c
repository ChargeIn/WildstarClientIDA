#include "../winhttp.h"

//----- (0000000140137120) ----------------------------------------------------
void __fastcall sub_140137120(__int64 a1, int a2, int* a3)
{
	__int64 v4; // rax
	int* v7; // rbp
	__int64 v8; // r14
	_WORD* v9; // r8
	_QWORD* v10; // rax
	_QWORD* v11; // rcx
	_QWORD* v12; // rcx
	char v13[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v14; // [rsp+28h] [rbp-30h]
	_WORD* v15; // [rsp+30h] [rbp-28h]
	__int64 v16; // [rsp+38h] [rbp-20h]

	*(_DWORD*)(a1 + 536) = a2;
	v4 = 0i64;
	v7 = 0i64;
	v14 = 0i64;
	v16 = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v4;
		while (*((_WORD*)a3 + v4));
	}
	v8 = (2 * v4) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = sub_14018B280(2 * (v8 + 1), 0);
		v14 = v7;
		v16 = (__int64)v7 + 2 * v8 + 2;
	}
	sub_1407DB590(v7, a3, 2 * v8);
	v9 = (_WORD*)v7 + v8;
	v15 = v9;
	if (v9)
		*v9 = 0;
	v10 = *(_QWORD**)(a1 + 520);
	if (v10 == *(_QWORD**)(a1 + 528))
	{
		sub_1400F8CF0((__int64*)(a1 + 504), *(char**)(a1 + 520), (__int64)v13);
	}
	else
	{
		if (v10)
		{
			v11 = *(_QWORD**)(a1 + 520);
			v10[1] = 0i64;
			v10[2] = 0i64;
			v10[3] = 0i64;
			sub_14001C1B0(v11, v7, (__int64)v9);
		}
		*(_QWORD*)(a1 + 520) += 32i64;
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	if (a2 < 7)
		++* (_DWORD*)(a1 + 500);
	if (*(int*)(a1 + 500) > 10)
	{
		v12 = *(_QWORD**)(a1 + 8);
		*(_DWORD*)(a1 + 536) = 5;
		sub_1400ED370(v12, a1);
	}
}
// 140137120: using guessed type char var_38[8];

