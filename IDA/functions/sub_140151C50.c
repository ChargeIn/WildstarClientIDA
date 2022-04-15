#include "../winhttp.h"

//----- (0000000140151C50) ----------------------------------------------------
__int64 __fastcall sub_140151C50(__int64 a1, int* a2)
{
	__int64 v5; // rax
	int* v6; // rsi
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	_WORD* v9; // r14
	_QWORD* v10; // rbp
	_QWORD* v11; // rdi
	_QWORD* v12; // rbx
	_QWORD* v13; // [rsp+48h] [rbp+10h]

	if (!a2)
		return 0i64;
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
	v9 = (_WORD*)((char*)v6 + v8);
	if ((int*)((char*)v6 + v8))
		*v9 = 0;
	v10 = *(_QWORD**)(a1 + 24);
	v11 = v10;
	v12 = (_QWORD*)v10[1];
	while (v12)
	{
		if ((int)sub_1400454D0(v12[5], v12[6], (unsigned __int16*)v6, (__int64)v9) < 0)
		{
			v12 = (_QWORD*)v12[3];
		}
		else
		{
			v11 = v12;
			v12 = (_QWORD*)v12[2];
		}
	}
	if (v11 == v10 || (v13 = v11, (int)sub_1400454D0((__int64)v6, (__int64)v9, (unsigned __int16*)v11[5], v11[6]) < 0))
		v13 = v10;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	if (v13 == *(_QWORD**)(a1 + 24))
		return 0i64;
	else
		return v13[8];
}

