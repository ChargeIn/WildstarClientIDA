//----- (000000014051B4F0) ----------------------------------------------------
__int64 __fastcall sub_14051B4F0(_QWORD* a1, _QWORD* a2)
{
	_WORD* v2; // rax
	__int64 v3; // r9
	unsigned int v6; // ecx
	unsigned __int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rax
	_QWORD* v10; // rsi
	char* v11; // rdx
	_DWORD* v12; // rax
	__int64 v13; // rcx
	_QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v16; // [rsp+40h] [rbp-28h] BYREF
	__int64 v17; // [rsp+48h] [rbp-20h]

	v2 = (_WORD*)a1[3];
	v3 = 0i64;
	if (v2 != (_WORD*)a1[4])
	{
		*v2 = 0;
		a1[4] = a1[3];
	}
	v6 = 0;
	v7 = *(_QWORD*)(qword_140C63650 + 768);
	if (v7)
	{
		v8 = *(_QWORD*)(qword_140C63650 + 760);
		v9 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a2)
		{
			v9 = ++v6;
			if (v6 >= v7)
				goto LABEL_9;
		}
		v3 = *(_QWORD*)(v8 + 8i64 * v6);
	}
LABEL_9:
	v10 = *(_QWORD**)(v3 + 400);
	v11 = (char*)sub_14018F0E0(&v16, 0i64)[1];
	v12 = (_DWORD*)(v10[3] + 32i64);
	if ((unsigned __int64)v12 < v10[2] && v12 != dword_140A12138 && *(int*)(v10[3] + 40i64) > 0)
		v11 = (char*)sub_140056BB0(v10, 3u, 0i64);
	sub_14018F2D0(v15, v11);
	if (v17)
		sub_14018B900(v17, 0);
	v13 = a1[3];
	a1[3] = v15[1];
	a1[4] = v15[2];
	a1[5] = v15[3];
	if (v13)
		sub_14018B900(v13, 0);
	if (a1[3] == a1[4])
		sub_140056570(a2, 3u, "can not copy an empty string");
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

