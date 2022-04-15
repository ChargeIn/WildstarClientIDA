#include "../winhttp.h"

//----- (00000001400F9A50) ----------------------------------------------------
_QWORD* __fastcall sub_1400F9A50(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rsi
	char v7; // r9
	int* v8; // rax
	_WORD* v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rax
	_WORD* v12; // rax
	_WORD* v13; // rcx
	_WORD* v14; // rax
	__int64 v15; // rax
	_WORD* v17[3]; // [rsp+20h] [rbp-18h] BYREF

	v6 = sub_1400F96D0(a2, a3, a3);
	if (v6 == -1)
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v8 = sub_14018B280(16i64, 0);
		a1[1] = v8;
		a1[2] = v8;
		a1[3] = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
	}
	else
	{
		v9 = *(_WORD**)(a3 + 8);
		v10 = *(_QWORD*)(a2 + 16);
		v11 = *(_QWORD*)(a3 + 16) - (_QWORD)v9;
		v17[0] = v9;
		v12 = &v9[v11 >> 1];
		v13 = *(_WORD**)(a2 + 8);
		v17[1] = v12;
		v14 = sub_1400F9810(v13, v10, v17, v7);
		if (v14 == *(_WORD**)(a2 + 16))
			v15 = -1i64;
		else
			v15 = ((__int64)v14 - *(_QWORD*)(a2 + 8)) >> 1;
		if (v15 == -1)
			v15 = 0i64;
		sub_14002C9D0(a2, a1, v15, v6 - v15 + 1);
	}
	return a1;
}
// 1400F9AE7: variable 'v7' is possibly undefined

