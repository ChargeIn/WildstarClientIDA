//----- (000000014011A940) ----------------------------------------------------
__int64 __fastcall sub_14011A940(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rsi
	_DWORD* v8; // rcx
	char* v9; // rdx
	int* v10; // rdi
	__int64 v11; // rax
	unsigned int v12; // ebx
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	int* v15; // [rsp+28h] [rbp-20h]
	int* v16; // [rsp+30h] [rbp-18h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = v6 + 2496;
	v8 = dword_140A12138;
	if (a1[3] < a1[2])
		v8 = (_DWORD*)a1[3];
	if (v8[2] == 4)
		goto LABEL_16;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v8))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v8 = dword_140A12138;
		if (a1[3] < a1[2])
			v8 = (_DWORD*)a1[3];
	LABEL_16:
		v9 = (char*)(*(_QWORD*)v8 + 32i64);
		goto LABEL_17;
	}
	v9 = 0i64;
LABEL_17:
	sub_14018F2D0(&v14, v9);
	v10 = v15;
	if (v15 != v16 && (v11 = sub_14013A270(v7, v15)) != 0)
	{
		v12 = sub_140186240(v11, (__int64)a1);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		v12 = 1;
	}
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v12;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
