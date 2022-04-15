#include "../winhttp.h"

//----- (00000001401335B0) ----------------------------------------------------
__int64 __fastcall sub_1401335B0(_QWORD* a1)
{
	unsigned int v1; // ebx
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	_QWORD* v7; // rbp
	_QWORD* v8; // rcx
	_DWORD* v9; // r14
	_DWORD* v10; // rax
	double v11; // xmm0_8
	float v12; // xmm0_4
	int v13; // esi
	_DWORD* v14; // rax
	__int64 v15; // rax
	_DWORD* v16; // rdx
	int v17; // eax
	BOOL v18; // eax
	int* v19; // rax
	int** v20; // r15
	int* v21; // rsi
	unsigned __int64 v22; // rcx
	int v23; // edx
	_DWORD* v24; // rax
	__int64 v26; // [rsp+30h] [rbp-38h] BYREF
	int* v27; // [rsp+38h] [rbp-30h]
	int* v28; // [rsp+40h] [rbp-28h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD**)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = (_QWORD*)v7[50];
	v9 = dword_140A12138;
	v10 = (_DWORD*)v8[3];
	if ((unsigned __int64)v10 >= v8[2] || v10 == dword_140A12138 || (int)v10[2] <= 0)
		v11 = 0.0;
	else
		v11 = sub_140056C40(v8, 1u);
	v12 = v11;
	v13 = 1;
	v14 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v14 < a1[2] && v14 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
	{
		v15 = v7[50];
		v16 = dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(v15 + 24) + 16i64) < *(_QWORD*)(v15 + 16))
			v16 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64);
		v17 = v16[2];
		v18 = v17 && (v17 != 1 || *v16);
		v13 = v18;
	}
	v19 = sub_14018B280(168i64, 0);
	if (v19)
		v20 = (int**)sub_140132D40((__int64)v19, (__int64)v7, (int)(float)(v12 * 1000.0), v13);
	else
		v20 = 0i64;
	sub_1400F2540((__int64)(v7 + 48), &v26, 3);
	v21 = v27;
	if (v27 != v28)
	{
		v22 = a1[2];
		v23 = -2;
		v24 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v24 < v22 && v24 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 5)
		{
			if ((unsigned __int64)v24 < v22)
				v9 = (_DWORD*)(a1[3] + 48i64);
			*(_QWORD*)v22 = *(_QWORD*)v9;
			*(_DWORD*)(v22 + 8) = v9[2];
			a1[2] += 16i64;
			v23 = sub_1400578C0((__int64)a1);
		}
		sub_1400EB7D0(v7, v20[5], v21, *(int**)(qword_140C63650 + 784), v23);
		sub_140133420(a1, (__int64)v20);
		(*((void(__fastcall**)(int**)) * v20 + 1))(v20);
		v1 = 1;
	}
	if (v21)
		sub_14018B900((__int64)v21, 0);
	return v1;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

