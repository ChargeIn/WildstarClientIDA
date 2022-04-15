//----- (00000001406A9670) ----------------------------------------------------
__int64 __fastcall sub_1406A9670(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	unsigned __int64 v4; // rdx
	unsigned int v5; // ecx
	__int64 v6; // r8
	__int64 v7; // rax
	_QWORD* v8; // rbx
	char* v9; // rdx
	_DWORD* v10; // rax
	__int64 v11; // rcx
	_WORD* v12; // rbx
	__int64 v14; // [rsp+20h] [rbp-48h] BYREF
	__int64 v15; // [rsp+28h] [rbp-40h]
	__int64 v16; // [rsp+40h] [rbp-28h] BYREF
	_WORD* v17; // [rsp+48h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(qword_140C63650 + 768);
		v5 = 0;
		if (v4)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v4)
					goto LABEL_9;
			}
			v3 = *(_QWORD*)(v6 + 8i64 * v5);
		}
	LABEL_9:
		v8 = *(_QWORD**)(v3 + 400);
		v9 = (char*)sub_14018F0E0(&v14, 0i64)[1];
		v10 = (_DWORD*)(v8[3] + 16i64);
		if ((unsigned __int64)v10 < v8[2] && v10 != dword_140A12138 && *(int*)(v8[3] + 24i64) > 0)
			v9 = (char*)sub_140056BB0(v8, 2u, 0i64);
		sub_14018F2D0(&v16, v9);
		v11 = v15;
		if (v15)
			sub_14018B900(v15, 0);
		v12 = v17;
		sub_1404B6D00(v11, v17);
		if (v12)
			sub_14018B900((__int64)v12, 0);
	}
	return 0i64;
}
// 1406A974B: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

