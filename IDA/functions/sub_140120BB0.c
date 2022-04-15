//----- (0000000140120BB0) ----------------------------------------------------
__int64 __fastcall sub_140120BB0(_QWORD* a1)
{
	char* v2; // rax
	float v3; // xmm7_4
	int v4; // xmm8_4
	double v5; // xmm0_8
	_DWORD* v6; // rax
	_DWORD* v7; // rbx
	int v8; // xmm9_4
	double v9; // xmm0_8
	unsigned int v10; // esi
	_DWORD* v11; // rax
	float v12; // xmm6_4
	int v13; // ebp
	unsigned __int64 v14; // rcx
	int v15; // r14d
	_DWORD* v16; // rax
	unsigned __int64 v17; // rcx
	_DWORD* v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	int i; // ebx
	__int64 v22; // rcx
	_DWORD* v23; // rax
	__int64 v24; // rcx
	int v25; // eax
	unsigned int v26; // ecx
	unsigned __int64 v27; // rdx
	int v28; // r9d
	__int64 v29; // r8
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rbp
	__int64 v33; // rax
	__int64 v34; // rbx
	int v36; // [rsp+38h] [rbp-80h]
	__int64 v37; // [rsp+50h] [rbp-68h] BYREF
	__int64 v38; // [rsp+58h] [rbp-60h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v37, v2);
	v3 = sub_140056C40(a1, 2u);
	*(float*)&v4 = sub_140056C40(a1, 3u);
	v5 = sub_140056C40(a1, 4u);
	v6 = (_DWORD*)(a1[3] + 64i64);
	v7 = dword_140A12138;
	*(float*)&v8 = v5;
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
		v9 = 1.0;
	else
		v9 = sub_140056C40(a1, 5u);
	v10 = 0;
	v11 = (_DWORD*)(a1[3] + 80i64);
	if ((unsigned __int64)v11 >= a1[2] || v11 == dword_140A12138 || *(int*)(a1[3] + 88i64) <= 0)
		v13 = 0;
	else
		v13 = sub_140056D60(a1, 6u);
	v14 = a1[2];
	v15 = -2;
	v16 = (_DWORD*)(a1[3] + 96i64);
	if ((unsigned __int64)v16 < v14
		&& (v16 == dword_140A12138 || *(_DWORD*)(a1[3] + 104i64) != 6)
		&& (unsigned __int64)v16 < v14
		&& v16 != dword_140A12138
		&& !*(_DWORD*)(a1[3] + 104i64))
	{
		sub_140056570(a1, 7u, "not function or nil");
	}
	v17 = a1[2];
	v18 = (_DWORD*)(a1[3] + 96i64);
	if ((unsigned __int64)v18 < v17 && v18 != dword_140A12138 && *(_DWORD*)(a1[3] + 104i64) == 6)
	{
		if ((unsigned __int64)v18 < v17)
			v7 = (_DWORD*)(a1[3] + 96i64);
		*(_QWORD*)v17 = *(_QWORD*)v7;
		*(_DWORD*)(v17 + 8) = v7[2];
		a1[2] += 16i64;
		v15 = sub_1400578C0((__int64)a1);
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	a1[2] += 16i64;
	for (i = 8; i < (int)((__int64)(a1[2] - a1[3]) >> 4); ++i)
	{
		v22 = a1[2];
		*(_DWORD*)(v22 + 8) = 3;
		*(double*)v22 = (double)(i - 7);
		a1[2] += 16i64;
		v23 = sub_1400580E0((__int64)a1, i);
		v24 = a1[2];
		*(_QWORD*)v24 = *(_QWORD*)v23;
		*(_DWORD*)(v24 + 8) = v23[2];
		a1[2] += 16i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
	}
	v25 = sub_1400578C0((__int64)a1);
	v26 = 0;
	v27 = *(_QWORD*)(qword_140C63650 + 768);
	v28 = v25;
	if (v27)
	{
		v29 = *(_QWORD*)(qword_140C63650 + 760);
		v30 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v29 + 8 * v30) + 400i64) != a1)
		{
			v30 = ++v26;
			if (v26 >= v27)
				goto LABEL_32;
		}
		v31 = *(_QWORD*)(v29 + 8i64 * v26);
	}
	else
	{
	LABEL_32:
		v31 = 0i64;
	}
	v36 = v13;
	v32 = v38;
	v12 = v9;
	v33 = sub_140123DE0(v31, v27, v38, v3, v4, v8, v12, v36, v15, v28);
	v34 = v33;
	if (v33)
	{
		*(_DWORD*)(v33 + 1136) = 1;
		sub_1400D62A0(a1, v33);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
		v10 = 1;
	}
	if (v32)
		sub_14018B900(v32, 0);
	return v10;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

