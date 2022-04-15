//----- (00000001404F24B0) ----------------------------------------------------
__int64 __fastcall sub_1404F24B0(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	_QWORD* v6; // rbx
	char* v7; // rdx
	_DWORD* v8; // rax
	__int64 v9; // rbx
	__int64 v11; // [rsp+20h] [rbp-48h] BYREF
	__int64 v12; // [rsp+28h] [rbp-40h]
	__int64 v13; // [rsp+40h] [rbp-28h] BYREF
	__int64 v14; // [rsp+48h] [rbp-20h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = *(_QWORD**)(v1 + 400);
	v7 = (char*)sub_14018F0E0(&v11, 0i64)[1];
	v8 = (_DWORD*)v6[3];
	if ((unsigned __int64)v8 < v6[2] && v8 != dword_140A12138 && (int)v8[2] > 0)
		v7 = (char*)sub_140056BB0(v6, 1u, 0i64);
	sub_14018F2D0(&v13, v7);
	if (v12)
		sub_14018B900(v12, 0);
	v9 = v14;
	sub_1404F47D0((__int64*)(qword_140C65898 + 72), *(_QWORD*)(qword_140C635F0 + 5792), v14);
	if (v9)
		sub_14018B900(v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

