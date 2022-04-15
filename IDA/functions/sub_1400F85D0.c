#include "../winhttp.h"

//----- (00000001400F85D0) ----------------------------------------------------
void __fastcall sub_1400F85D0(__int64 a1, int* a2, _QWORD* a3)
{
	__int64 v5; // rax
	int* v7; // rsi
	__int64 v8; // r14
	_WORD* v9; // rax
	int* v10; // rax
	char v11[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v12; // [rsp+28h] [rbp-30h]
	_WORD* v13; // [rsp+30h] [rbp-28h]
	__int64 v14; // [rsp+38h] [rbp-20h]

	if (a2)
	{
		v5 = 0i64;
		v7 = 0i64;
		v12 = 0i64;
		v14 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v5;
			while (*((_WORD*)a2 + v5));
		}
		v8 = (2 * v5) >> 1;
		if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v7 = sub_14018B280(2 * (v8 + 1), 0);
			v12 = v7;
			v14 = (__int64)v7 + 2 * v8 + 2;
		}
		sub_1407DB590(v7, a2, 2 * v8);
		v9 = (_WORD*)v7 + v8;
		v13 = v9;
		if (v9)
			*v9 = 0;
		v10 = sub_1400F89B0(a1 + 16, (__int64)v11);
		*((_QWORD*)v10 + 1) = a3[1];
		*(_QWORD*)v10 = *a3;
		if (v7)
			sub_14018B900((__int64)v7, 0);
	}
}
// 1400F85D0: using guessed type char var_38[8];

