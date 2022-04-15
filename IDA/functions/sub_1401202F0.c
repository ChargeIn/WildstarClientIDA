//----- (00000001401202F0) ----------------------------------------------------
__int64 __fastcall sub_1401202F0(_QWORD* a1)
{
	char* v2; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rax
	int v5; // esi
	_DWORD* v6; // rbx
	unsigned __int64 v7; // rcx
	_DWORD* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int i; // ebx
	__int64 v12; // rcx
	_DWORD* v13; // rax
	__int64 v14; // rdx
	int v15; // eax
	unsigned int v16; // ebx
	unsigned __int64 v17; // r8
	__int64 v18; // rdx
	__int64 v19; // r9
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rsi
	__int64 v25; // [rsp+30h] [rbp-28h] BYREF
	__int64 v26; // [rsp+38h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v25, v2);
	v3 = a1[2];
	v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = -2;
	v6 = dword_140A12138;
	if ((unsigned __int64)v4 < v3
		&& (v4 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 6)
		&& (unsigned __int64)v4 < v3
		&& v4 != dword_140A12138
		&& !*(_DWORD*)(a1[3] + 24i64))
	{
		sub_140056570(a1, 2u, "not function or nil");
	}
	v7 = a1[2];
	v8 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v8 < v7 && v8 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 6)
	{
		if ((unsigned __int64)v8 < v7)
			v6 = (_DWORD*)(a1[3] + 16i64);
		*(_QWORD*)v7 = *(_QWORD*)v6;
		*(_DWORD*)(v7 + 8) = v6[2];
		a1[2] += 16i64;
		v5 = sub_1400578C0((__int64)a1);
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v9 = a1[2];
	v10 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	a1[2] += 16i64;
	for (i = 3; i < (int)((__int64)(a1[2] - a1[3]) >> 4); ++i)
	{
		v12 = a1[2];
		*(_DWORD*)(v12 + 8) = 3;
		*(double*)v12 = (double)(i - 2);
		a1[2] += 16i64;
		v13 = sub_1400580E0((__int64)a1, i);
		v14 = a1[2];
		*(_QWORD*)v14 = *(_QWORD*)v13;
		*(_DWORD*)(v14 + 8) = v13[2];
		a1[2] += 16i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
	}
	v15 = sub_1400578C0((__int64)a1);
	v16 = 0;
	v17 = *(_QWORD*)(qword_140C63650 + 768);
	v18 = 0i64;
	if (v17)
	{
		v19 = *(_QWORD*)(qword_140C63650 + 760);
		v20 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v19 + 8 * v20) + 400i64) != a1)
		{
			v18 = (unsigned int)(v18 + 1);
			v20 = (unsigned int)v18;
			if ((unsigned int)v18 >= v17)
				goto LABEL_22;
		}
		v21 = *(_QWORD*)(v19 + 8i64 * (unsigned int)v18);
	}
	else
	{
	LABEL_22:
		v21 = 0i64;
	}
	v22 = sub_140123700(v21, v18, v26, v5, v15);
	v23 = v22;
	if (v22)
	{
		*(_DWORD*)(v22 + 1136) = 1;
		sub_1400D62A0(a1, v22);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		v16 = 1;
	}
	if (v26)
		sub_14018B900(v26, 0);
	return v16;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

