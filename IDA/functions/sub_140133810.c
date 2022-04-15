#include "../winhttp.h"

//----- (0000000140133810) ----------------------------------------------------
__int64 __fastcall sub_140133810(_QWORD* a1)
{
	BOOL v1; // ebp
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rbx
	unsigned __int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // r8
	__int64 v9; // r14
	_QWORD* v10; // rcx
	_DWORD* v11; // rdi
	_DWORD* v12; // rax
	double v13; // xmm0_8
	_DWORD* v14; // r8
	unsigned __int64 v15; // r9
	float v16; // xmm0_4
	BOOL v17; // r15d
	__int64 v18; // rax
	_DWORD* v19; // rdx
	int v20; // eax
	BOOL v21; // eax
	__int64 v22; // rax
	int v23; // eax
	BOOL v24; // eax

	v1 = 1;
	v3 = sub_1401334C0(a1, 1u);
	v4 = 0i64;
	v5 = v3;
	v6 = *(_QWORD*)(qword_140C63650 + 768);
	if (v6)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v4 = (unsigned int)(v4 + 1);
			v8 = (unsigned int)v4;
			if ((unsigned int)v4 >= v6)
				goto LABEL_5;
		}
		v9 = *(_QWORD*)(v7 + 8 * v4);
	}
	else
	{
	LABEL_5:
		v9 = 0i64;
	}
	if (v5 && *(_QWORD*)(v5 + 24) == v9)
	{
		v10 = *(_QWORD**)(v9 + 400);
		v11 = dword_140A12138;
		v12 = (_DWORD*)(v10[3] + 16i64);
		if ((unsigned __int64)v12 >= v10[2] || v12 == dword_140A12138 || *(int*)(v10[3] + 24i64) <= 0)
			v13 = 0.0;
		else
			v13 = sub_140056C40(v10, 2u);
		v14 = (_DWORD*)a1[3];
		v15 = a1[2];
		v16 = v13;
		v17 = 1;
		if ((unsigned __int64)(v14 + 8) < v15 && v14 + 8 != dword_140A12138 && v14[10] == 1)
		{
			v18 = *(_QWORD*)(v9 + 400);
			v19 = dword_140A12138;
			if ((unsigned __int64)(*(_QWORD*)(v18 + 24) + 32i64) < *(_QWORD*)(v18 + 16))
				v19 = (_DWORD*)(*(_QWORD*)(v18 + 24) + 32i64);
			v20 = v19[2];
			v21 = v20 && (v20 != 1 || *v19);
			v17 = v21;
		}
		if ((unsigned __int64)(v14 + 12) < v15 && v14 + 12 != dword_140A12138 && v14[14] == 1)
		{
			v22 = *(_QWORD*)(v9 + 400);
			if ((unsigned __int64)(*(_QWORD*)(v22 + 24) + 48i64) < *(_QWORD*)(v22 + 16))
				v11 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 48i64);
			v23 = v11[2];
			v24 = v23 && (v23 != 1 || *v11);
			v1 = v24;
		}
		if (*(_QWORD*)(v5 + 112))
		{
			sub_140195D70(v5 + 96);
			*(_DWORD*)(v5 + 72) = 0;
		}
		*(_DWORD*)(v5 + 64) = (int)(float)(v16 * 1000.0);
		*(_DWORD*)(v5 + 76) = v17;
		*(_DWORD*)(v5 + 80) = v1;
		sub_140133080(v5);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

