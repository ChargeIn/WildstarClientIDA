#include "../winhttp.h"

//----- (0000000140613330) ----------------------------------------------------
_BYTE* __fastcall sub_140613330(_QWORD* a1, char a2)
{
	__int64 v2; // r10
	unsigned __int64* v5; // rax
	unsigned __int64 v6; // r9
	unsigned __int64 v7; // rcx
	unsigned __int64* v8; // rax
	__int64 v9; // r15
	int* v10; // rax
	int* v11; // rbx
	__int64 v12; // rsi
	int* v13; // r14
	_BYTE* v14; // rsi
	__int64 v15; // rcx
	_BYTE* result; // rax
	unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
	unsigned __int64 v18; // [rsp+60h] [rbp+18h] BYREF

	v2 = a1[2];
	if (v2 + 1 == a1[3])
	{
		v17 = 1i64;
		v5 = &v17;
		v6 = v2 - a1[1];
		v18 = v6;
		if (v6)
			v5 = &v18;
		v7 = *v5;
		v8 = &v17;
		v17 = v6;
		v18 = v2 + v7 - a1[1];
		if (v18 >= v6)
			v8 = &v18;
		v9 = *v8 + 1;
		v10 = sub_14018B280(v9, 0);
		v11 = (int*)a1[1];
		v12 = a1[2];
		v13 = v10;
		sub_1407DB590(v10, v11, v12 - (_QWORD)v11);
		v14 = (char*)v13 + v12 - (_QWORD)v11;
		if (v14)
			*v14 = 0;
		v15 = a1[1];
		if (v15)
			sub_14018B900(v15, 0);
		a1[1] = v13;
		a1[2] = v14;
		a1[3] = (char*)v13 + v9;
	}
	if (a1[2] != -1i64)
		*(_BYTE*)(a1[2] + 1i64) = 0;
	result = (_BYTE*)a1[2];
	*result = a2;
	++a1[2];
	return result;
}

