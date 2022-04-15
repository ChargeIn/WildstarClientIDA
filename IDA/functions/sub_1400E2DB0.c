#include "../winhttp.h"

//----- (00000001400E2DB0) ----------------------------------------------------
_QWORD* __fastcall sub_1400E2DB0(_QWORD* a1, int* a2)
{
	int* v2; // rsi
	int* v5; // rbx
	bool v6; // zf
	_BYTE* v7; // rbx
	__int64 v9; // rax
	char* v10; // r14
	unsigned __int64 v11; // rbp
	__int64 v12; // r15
	__int64 v13; // r14
	_BYTE* v14; // r14
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	int* v16; // [rsp+28h] [rbp-30h]
	_BYTE* v17; // [rsp+30h] [rbp-28h]
	__int64 v18; // [rsp+38h] [rbp-20h]

	v2 = 0i64;
	if (a2)
	{
		v16 = 0i64;
		v18 = 0i64;
		v9 = -1i64;
		do
			v6 = *((_BYTE*)a2 + ++v9) == 0;
		while (!v6);
		v10 = (char*)a2 + v9;
		v11 = v9;
		v12 = v9 + 1;
		if (v9 != -2)
		{
			v2 = sub_14018B280(v9 + 1, 0);
			v16 = v2;
			v18 = (__int64)v2 + v12;
		}
		sub_1407DB590(v2, a2, v11);
		v13 = v10 - (char*)a2;
		v6 = (int*)((char*)v2 + v13) == 0i64;
		v14 = (char*)v2 + v13;
		v17 = v14;
		if (!v6)
			*v14 = 0;
		sub_14001B050(&v15, (int*)"_TE", (int*)"");
		a1[1] = v16;
		a1[2] = v17;
		a1[3] = v18;
	}
	else
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v5 = sub_14018B280(6i64, 0);
		a1[1] = v5;
		a1[3] = (char*)v5 + 6;
		a1[2] = v5;
		sub_1407DB590(v5, (int*)"ERROR", 5ui64);
		v6 = (int*)((char*)v5 + 5) == 0i64;
		v7 = (char*)v5 + 5;
		a1[2] = v7;
		if (!v6)
		{
			*v7 = 0;
			return a1;
		}
	}
	return a1;
}

