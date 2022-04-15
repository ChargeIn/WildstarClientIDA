#include "../winhttp.h"

//----- (00000001400B6530) ----------------------------------------------------
__int64 __fastcall sub_1400B6530(__int64 a1, int* a2)
{
	unsigned int v2; // r14d
	__int64 v5; // rax
	int* v6; // rbp
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	_QWORD* v9; // rbx
	_QWORD* v10; // rsi
	_QWORD* v11; // rdi
	_QWORD* v13; // [rsp+40h] [rbp+8h]

	v2 = 0;
	v5 = 0i64;
	v6 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v6 = sub_14018B280(2 * (v7 + 1), 0);
	v8 = 2 * v7;
	sub_1407DB590(v6, a2, v8);
	if ((int*)((char*)v6 + v8))
		*(_WORD*)((char*)v6 + v8) = 0;
	v9 = *(_QWORD**)(a1 + 32);
	v10 = v9;
	v11 = (_QWORD*)v9[1];
	while (v11)
	{
		if ((int)sub_14018E2C0(v11[5], (unsigned __int16*)v6) < 0)
		{
			v11 = (_QWORD*)v11[3];
		}
		else
		{
			v10 = v11;
			v11 = (_QWORD*)v11[2];
		}
	}
	if (v10 == v9 || (v13 = v10, (int)sub_14018E2C0((__int64)v6, (unsigned __int16*)v10[5]) < 0))
		v13 = v9;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	LOBYTE(v2) = v13 != v9;
	return v2;
}

