#include "../winhttp.h"

//----- (00000001400DF690) ----------------------------------------------------
__int64 __fastcall sub_1400DF690(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // rsi
	char* v4; // rax
	char* v5; // rax
	int v6; // esi
	_DWORD* v7; // rdx
	__int64 v8; // [rsp+20h] [rbp-48h] BYREF
	int* v9; // [rsp+28h] [rbp-40h]
	__int64 v10; // [rsp+40h] [rbp-28h] BYREF
	__int64 v11; // [rsp+48h] [rbp-20h]

	result = sub_1400D66A0(a1, 1u);
	v3 = (_QWORD*)result;
	if (result)
	{
		v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v10, v4);
		v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v8, v5);
		v6 = (unsigned __int8)sub_1400C6FF0(v3, v9, v11);
		if (v9)
			sub_14018B900((__int64)v9, 0);
		if (v11)
			sub_14018B900(v11, 0);
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
		result = 1i64;
		*v7 = v6 != 0;
		a1[2] += 16i64;
	}
	return result;
}

