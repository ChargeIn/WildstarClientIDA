//----- (00000001405373C0) ----------------------------------------------------
__int64 __fastcall sub_1405373C0(_QWORD* a1)
{
	__int64 v2; // rbx
	_DWORD* v3; // rax
	unsigned int v4; // r9d
	_QWORD* v5; // r10
	_QWORD* v6; // rax
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // r8
	__int64 v13; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx
	__int64 v17; // [rsp+38h] [rbp+10h] BYREF
	__int64 v18; // [rsp+40h] [rbp+18h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = 0;
	else
		v4 = sub_140056D60(a1, 2u);
	v5 = *(_QWORD**)(v2 + 1384);
	v6 = (_QWORD*)v5[2];
	if (v6 == v5)
		return 0i64;
	while (1)
	{
		v7 = v6[109];
		v8 = v7;
		v9 = *(_QWORD*)(v7 + 8);
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < v4)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v8 == v7 || v4 < *(_DWORD*)(v8 + 32))
		{
			v18 = v6[109];
			v10 = &v18;
		}
		else
		{
			v17 = v8;
			v10 = &v17;
		}
		v11 = *v10;
		if (v11 != v7)
		{
			v12 = *(_QWORD*)(v11 + 40);
			if (v12)
				break;
		}
		v13 = v6[3];
		if (v13)
		{
			v6 = (_QWORD*)v6[3];
			for (i = *(_QWORD**)(v13 + 16); i; i = (_QWORD*)i[2])
				v6 = i;
		}
		else
		{
			for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = (_QWORD*)j;
			if (v6[3] != j)
				v6 = (_QWORD*)j;
		}
		if (v6 == v5)
			return 0i64;
	}
	return sub_140774A40(v11, a1, v12);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

