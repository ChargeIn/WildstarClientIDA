//----- (000000014015B6E0) ----------------------------------------------------
__int64 __fastcall sub_14015B6E0(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rbp
	int v9; // r14d
	int v10; // eax
	unsigned __int64 v11; // r8
	_DWORD* v12; // rdx
	int v13; // r15d
	int v14; // eax
	_DWORD* v15; // rcx
	int v17; // [rsp+58h] [rbp+10h] BYREF
	int v18; // [rsp+5Ch] [rbp+14h]

	v1 = 0i64;
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
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_14015B0A0((__int64)a1, 1);
	v8 = sub_1400D6530((__int64)a1, 2);
	v9 = sub_140056D60(a1, 3u);
	v10 = sub_140056D60(a1, 4u);
	v11 = a1[2];
	v12 = (_DWORD*)(a1[3] + 64i64);
	v13 = v10;
	v14 = -2;
	if ((unsigned __int64)v12 < v11)
	{
		v15 = dword_140A12138;
		if (v12 != dword_140A12138 && *(_DWORD*)(a1[3] + 72i64) == 5)
		{
			if ((unsigned __int64)v12 < v11)
				v15 = (_DWORD*)(a1[3] + 64i64);
			*(_QWORD*)v11 = *(_QWORD*)v15;
			*(_DWORD*)(v11 + 8) = v15[2];
			a1[2] += 16i64;
			v14 = sub_1400578C0((__int64)a1);
		}
	}
	if ((unsigned int)((__int64)(*(_QWORD*)(v7 + 48) - *(_QWORD*)(v7 + 40)) >> 3))
	{
		v17 = v9;
		v18 = v13;
		sub_1400ECF40(v1, v8, &v17, v7, v14);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

