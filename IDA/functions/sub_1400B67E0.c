#include "../winhttp.h"

//----- (00000001400B67E0) ----------------------------------------------------
void __fastcall sub_1400B67E0(__int64 a1, int* a2)
{
	__int64 v3; // rax
	int* v5; // rsi
	__int64 v6; // r14
	_WORD* v7; // rax
	char v8[16]; // [rsp+20h] [rbp-48h] BYREF
	char v9[8]; // [rsp+30h] [rbp-38h] BYREF
	int* v10; // [rsp+38h] [rbp-30h]
	_WORD* v11; // [rsp+40h] [rbp-28h]
	__int64 v12; // [rsp+48h] [rbp-20h]

	if (a2)
	{
		v10 = 0i64;
		v12 = 0i64;
		v3 = 0i64;
		v5 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v3;
			while (*((_WORD*)a2 + v3));
		}
		v6 = (2 * v3) >> 1;
		if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v5 = sub_14018B280(2 * (v6 + 1), 0);
			v10 = v5;
			v12 = (__int64)v5 + 2 * v6 + 2;
		}
		sub_1407DB590(v5, a2, 2 * v6);
		v7 = (_WORD*)v5 + v6;
		v11 = v7;
		if (v7)
			*v7 = 0;
		sub_1400B8F50(a1 + 24, (__int64)v8, (__int64)v9);
		if (v5)
			sub_14018B900((__int64)v5, 0);
	}
}
// 1400B67E0: using guessed type char var_38[8];
// 1400B67E0: using guessed type char var_48[16];

