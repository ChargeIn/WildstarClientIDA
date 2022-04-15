//----- (000000014004E540) ----------------------------------------------------
__int64 __fastcall sub_14004E540(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // ebx
	__int64* v4; // rax
	__int64 v5; // rdi
	_DWORD* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v11; // [rsp+38h] [rbp+10h]

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v4 = (__int64*)sub_140056AB0(a1, 1u)) != 0i64)
	{
		v5 = *v4;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v2 = sub_140056D60(a1, 2u);
	if (!v5 || !v2)
		return 0i64;
	v7 = *(_QWORD*)(v5 + 416);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v11 = v8, v2 < *(_DWORD*)(v8 + 32)))
		v11 = *(_QWORD*)(v5 + 416);
	if (v11 != v7)
		return sub_140049EA0(*(_QWORD*)(v11 + 40), a1);
	else
		return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

