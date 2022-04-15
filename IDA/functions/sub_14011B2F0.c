//----- (000000014011B2F0) ----------------------------------------------------
__int64 __fastcall sub_14011B2F0(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // r8
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rsi
	int v7; // ebp
	_QWORD* v8; // rcx
	_DWORD* v9; // rdi
	_DWORD* v10; // rax
	double v11; // xmm0_8
	float v12; // xmm0_4
	bool v13; // r9
	_DWORD* v14; // rax
	int v15; // edx
	__int64 v16; // rax
	int v17; // eax
	int* v18; // rbx
	__int64 v20; // [rsp+20h] [rbp-28h] BYREF
	int* v21; // [rsp+28h] [rbp-20h]
	int* v22; // [rsp+30h] [rbp-18h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v5 = (unsigned int)v1;
			if ((unsigned int)v1 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = 1;
	sub_1400F2540(v6 + 384, &v20, 1);
	v8 = *(_QWORD**)(v6 + 400);
	v9 = dword_140A12138;
	v10 = (_DWORD*)(v8[3] + 16i64);
	if ((unsigned __int64)v10 >= v8[2] || v10 == dword_140A12138 || *(int*)(v8[3] + 24i64) <= 0)
		v11 = 0.0;
	else
		v11 = sub_140056C40(v8, 2u);
	v12 = v11;
	v13 = 1;
	v14 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
	v15 = (int)(float)(v12 * 1000.0);
	if ((unsigned __int64)v14 < *(_QWORD*)(a1 + 16)
		&& v14 != dword_140A12138
		&& *(_DWORD*)(*(_QWORD*)(a1 + 24) + 40i64) == 1)
	{
		v16 = *(_QWORD*)(v6 + 400);
		if ((unsigned __int64)(*(_QWORD*)(v16 + 24) + 32i64) < *(_QWORD*)(v16 + 16))
			v9 = (_DWORD*)(*(_QWORD*)(v16 + 24) + 32i64);
		v17 = v9[2];
		if (!v17 || v17 == 1 && !*v9)
			v7 = 0;
		v13 = v7 != 0;
	}
	v18 = v21;
	if (v22 != v21 && v15)
	{
		if (!v21)
			return 0i64;
		sub_1400EB040(v6, v21, v15, v13);
	}
	if (v18)
		sub_14018B900((__int64)v18, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

