#include "../winhttp.h"

//----- (0000000140731430) ----------------------------------------------------
__int64 __fastcall sub_140731430(__int64 a1, __int64* a2)
{
	int* v2; // rdi
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // r14
	_WORD* v7; // rax
	__int64 v9; // [rsp+20h] [rbp-38h] BYREF
	int* v10; // [rsp+28h] [rbp-30h]
	_WORD* v11; // [rsp+30h] [rbp-28h]
	__int64 v12; // [rsp+38h] [rbp-20h]

	v2 = *(int**)(a1 + 8);
	v4 = 0i64;
	v5 = 0i64;
	v10 = 0i64;
	v12 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v4;
		while (*((_WORD*)v2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v6 + 1), 0);
		v10 = v5;
		v12 = (__int64)v5 + 2 * v6 + 2;
	}
	sub_1407DB590(v5, v2, 2 * v6);
	v7 = (_WORD*)v5 + v6;
	v11 = v7;
	if (v7)
		*v7 = 0;
	sub_140115DF0(a2, &v9);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 1i64;
}

