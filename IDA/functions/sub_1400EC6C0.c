#include "../winhttp.h"

//----- (00000001400EC6C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400EC6C0(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // rbp
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	_QWORD* v8; // rbx
	_QWORD* v9; // rsi
	_QWORD* v10; // rdi
	bool v11; // bl
	_QWORD* v13; // [rsp+40h] [rbp+8h]

	v4 = 0i64;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, a2, v7);
	if ((int*)((char*)v5 + v7))
		*(_WORD*)((char*)v5 + v7) = 0;
	v8 = *(_QWORD**)(a1 + 3600);
	v9 = v8;
	v10 = (_QWORD*)v8[1];
	while (v10)
	{
		if ((int)sub_14018E2C0(v10[5], (unsigned __int16*)v5) < 0)
		{
			v10 = (_QWORD*)v10[3];
		}
		else
		{
			v9 = v10;
			v10 = (_QWORD*)v10[2];
		}
	}
	if (v9 == v8 || (v13 = v9, (int)sub_14018E2C0((__int64)v5, (unsigned __int16*)v9[5]) < 0))
		v13 = v8;
	v11 = v13 != v8;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return v11;
}

