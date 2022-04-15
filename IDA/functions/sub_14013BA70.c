//----- (000000014013BA70) ----------------------------------------------------
__int64 __fastcall sub_14013BA70(_QWORD* a1)
{
	char* v1; // rdi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	_QWORD* v7; // rsi
	_DWORD* v8; // rcx
	int* v9; // rbx
	__int64 v10; // rax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	int* v13; // [rsp+28h] [rbp-20h]

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
				goto LABEL_5;
		}
		v7 = *(_QWORD**)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = dword_140A12138;
	if (a1[3] < a1[2])
		v8 = (_DWORD*)a1[3];
	if (v8[2] == 4)
		goto LABEL_14;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v8))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v8 = dword_140A12138;
		if (a1[3] < a1[2])
			v8 = (_DWORD*)a1[3];
	LABEL_14:
		v1 = (char*)(*(_QWORD*)v8 + 32i64);
	}
	sub_14018F2D0(&v12, v1);
	v9 = v13;
	v10 = sub_14013A630((__int64)(v7 + 312), v13);
	if (v10 && (int)((__int64)(*(_QWORD*)(v10 + 520) - *(_QWORD*)(v10 + 512)) >> 5) > 0)
	{
		*(_DWORD*)(v10 + 536) = 5;
		sub_1400ED370(v7, v10);
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

