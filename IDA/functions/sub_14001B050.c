#include "../winhttp.h"

//----- (000000014001B050) ----------------------------------------------------
_QWORD* __fastcall sub_14001B050(_QWORD* a1, int* a2, int* a3)
{
	__int64 v6; // r8
	unsigned __int64 v7; // r14
	unsigned __int64 v8; // rdx
	__int64 v9; // rcx
	__int64* v10; // rax
	__int64 v11; // r13
	int* v12; // rax
	int* v13; // rbx
	__int64 v14; // rbp
	int* v15; // r12
	int* v16; // rbp
	_BYTE* v17; // rbp
	__int64 v18; // rcx
	_BYTE* v20; // rcx
	__int64 v21; // [rsp+60h] [rbp+8h] BYREF
	unsigned __int64 v22; // [rsp+68h] [rbp+10h] BYREF

	if (a2 == a3)
		return a1;
	v6 = a1[2];
	v7 = (char*)a3 - (char*)a2;
	v8 = v6 - a1[1];
	v9 = a1[3] - a1[1];
	v22 = v8;
	if ((char*)a3 - (char*)a2 + v8 <= v9 - 1)
	{
		sub_1407DB590((int*)(v6 + 1), (int*)((char*)a2 + 1), (char*)a3 - ((char*)a2 + 1));
		v20 = (_BYTE*)(v7 + a1[2]);
		if (v20)
			*v20 = 0;
		*(_BYTE*)a1[2] = *(_BYTE*)a2;
		a1[2] += v7;
		return a1;
	}
	else
	{
		v10 = &v21;
		v21 = (char*)a3 - (char*)a2;
		if (v8 >= v7)
			v10 = (__int64*)&v22;
		v11 = *v10 + v8 + 1;
		v12 = sub_14018B280(v11, 0);
		v13 = (int*)a1[1];
		v14 = a1[2];
		v15 = v12;
		sub_1407DB590(v12, v13, v14 - (_QWORD)v13);
		v16 = (int*)((char*)v15 + v14 - (_QWORD)v13);
		sub_1407DB590(v16, a2, (char*)a3 - (char*)a2);
		v17 = (char*)v16 + (char*)a3 - (char*)a2;
		if (v17)
			*v17 = 0;
		v18 = a1[1];
		if (v18)
			sub_14018B900(v18, 0);
		a1[3] = (char*)v15 + v11;
		a1[1] = v15;
		a1[2] = v17;
		return a1;
	}
}

