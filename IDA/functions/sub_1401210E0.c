//----- (00000001401210E0) ----------------------------------------------------
__int64 __fastcall sub_1401210E0(_QWORD* a1)
{
	char* v2; // rax
	_DWORD* v3; // rbx
	_DWORD* v4; // rax
	char* v5; // rax
	unsigned __int64 v6; // rcx
	_DWORD* v7; // rax
	int v8; // esi
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int i; // ebx
	__int64 v14; // rcx
	_DWORD* v15; // rax
	__int64 v16; // rdx
	int v17; // eax
	unsigned int v18; // ebx
	unsigned __int64 v19; // r8
	__int64 v20; // rdx
	__int64 v21; // r9
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rsi
	__int64 v27; // [rsp+30h] [rbp-48h] BYREF
	__int64 v28; // [rsp+38h] [rbp-40h]
	__int64 v29; // [rsp+50h] [rbp-28h] BYREF
	__int64 v30; // [rsp+58h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v29, v2);
	v3 = dword_140A12138;
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v5 = (char*)&unk_1409D050B;
	else
		v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v27, v5);
	v6 = a1[2];
	v7 = (_DWORD*)(a1[3] + 32i64);
	v8 = -2;
	if ((unsigned __int64)v7 < v6
		&& (v7 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64) != 6)
		&& (unsigned __int64)v7 < v6
		&& v7 != dword_140A12138
		&& !*(_DWORD*)(a1[3] + 40i64))
	{
		sub_140056570(a1, 3u, "not function or nil");
	}
	v9 = a1[2];
	v10 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v10 < v9 && v10 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 6)
	{
		if ((unsigned __int64)v10 < v9)
			v3 = (_DWORD*)(a1[3] + 32i64);
		*(_QWORD*)v9 = *(_QWORD*)v3;
		*(_DWORD*)(v9 + 8) = v3[2];
		a1[2] += 16i64;
		v8 = sub_1400578C0((__int64)a1);
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v11 = a1[2];
	v12 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	a1[2] += 16i64;
	for (i = 4; i < (int)((__int64)(a1[2] - a1[3]) >> 4); ++i)
	{
		v14 = a1[2];
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)(i - 3);
		a1[2] += 16i64;
		v15 = sub_1400580E0((__int64)a1, i);
		v16 = a1[2];
		*(_QWORD*)v16 = *(_QWORD*)v15;
		*(_DWORD*)(v16 + 8) = v15[2];
		a1[2] += 16i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
	}
	v17 = sub_1400578C0((__int64)a1);
	v18 = 0;
	v19 = *(_QWORD*)(qword_140C63650 + 768);
	v20 = 0i64;
	if (v19)
	{
		v21 = *(_QWORD*)(qword_140C63650 + 760);
		v22 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v21 + 8 * v22) + 400i64) != a1)
		{
			v20 = (unsigned int)(v20 + 1);
			v22 = (unsigned int)v20;
			if ((unsigned int)v20 >= v19)
				goto LABEL_27;
		}
		v23 = *(_QWORD*)(v21 + 8i64 * (unsigned int)v20);
	}
	else
	{
	LABEL_27:
		v23 = 0i64;
	}
	v24 = sub_140124A00(v23, v20, v30, v28, v8, v17);
	v25 = v24;
	if (v24)
	{
		*(_DWORD*)(v24 + 1136) = 1;
		sub_1400D62A0(a1, v24);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		v18 = 1;
	}
	if (v28)
		sub_14018B900(v28, 0);
	if (v30)
		sub_14018B900(v30, 0);
	return v18;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

