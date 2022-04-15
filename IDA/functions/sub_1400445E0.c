//----- (00000001400445E0) ----------------------------------------------------
__int64 __fastcall sub_1400445E0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	_DWORD* v4; // rax
	bool v5; // cf
	_DWORD* v6; // rcx
	char* v7; // rdx
	int* v8; // rdi
	__int64 v9; // rax
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	int* v11; // [rsp+28h] [rbp-20h]

	result = qword_140C65898;
	if (!qword_140C65898)
		return result;
	v3 = *(_QWORD*)(qword_140C65898 + 29504);
	v4 = (_DWORD*)a1[3];
	v5 = (unsigned __int64)v4 < a1[2];
	v6 = dword_140A12138;
	if (v5)
		v6 = v4;
	if (v6[2] == 4)
		goto LABEL_11;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v6))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v6 = dword_140A12138;
		if (a1[3] < a1[2])
			v6 = (_DWORD*)a1[3];
	LABEL_11:
		v7 = (char*)(*(_QWORD*)v6 + 32i64);
		goto LABEL_12;
	}
	v7 = 0i64;
LABEL_12:
	sub_14018F2D0(&v10, v7);
	v8 = v11;
	v9 = sub_14013A630(v3 + 2496, v11);
	if (v9)
	{
		sub_1400430B0((__int64)a1, v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

