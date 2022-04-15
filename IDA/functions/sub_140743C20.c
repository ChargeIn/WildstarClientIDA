//----- (0000000140743C20) ----------------------------------------------------
__int64 __fastcall sub_140743C20(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rsi
	char* v9; // rdx
	_DWORD* v10; // rax
	_WORD* v11; // rsi
	int v12; // eax
	_DWORD* v13; // rdx
	__int64 v15; // [rsp+20h] [rbp-48h] BYREF
	__int64 v16; // [rsp+28h] [rbp-40h]
	__int64 v17; // [rsp+40h] [rbp-28h] BYREF
	_WORD* v18; // [rsp+48h] [rbp-20h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = *(_QWORD**)(v7 + 400);
	v9 = (char*)sub_14018F0E0(&v15, 0i64)[1];
	v10 = (_DWORD*)v8[3];
	if ((unsigned __int64)v10 < v8[2] && v10 != dword_140A12138 && (int)v10[2] > 0)
		v9 = (char*)sub_140056BB0(v8, 1u, 0i64);
	sub_14018F2D0(&v17, v9);
	if (v16)
		sub_14018B900(v16, 0);
	v11 = v18;
	v12 = sub_140602020(qword_140C65898 + 27664, v18);
	v13 = *(_DWORD**)(a1 + 16);
	v13[2] = 1;
	LOBYTE(v1) = v12 != 0;
	*v13 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

