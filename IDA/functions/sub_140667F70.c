//----- (0000000140667F70) ----------------------------------------------------
__int64 __fastcall sub_140667F70(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	int v4; // eax
	__int64 v5; // rcx
	unsigned int v6; // edx
	int v7; // edx
	int v8; // eax
	__int64 v9; // r8
	_DWORD* v10; // rcx
	_DWORD* v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && (v5 = *(_QWORD*)v2, v4 < *(_DWORD*)(*(_QWORD*)v2 + 16i64)))
	{
		v6 = *(_DWORD*)(v5 + 16);
		if (v4 == v6 || v4 > v6)
		{
			v7 = 0;
			v8 = 0;
		}
		else
		{
			v7 = 0;
			v9 = *(_QWORD*)(v5 + 8i64 * (unsigned int)v4 + 24);
			v8 = 0;
			if (v9)
				LOBYTE(v8) = *(_DWORD*)(v9 + 40) != 0;
		}
		v10 = (_DWORD*)a1[2];
		LOBYTE(v7) = v8 != 0;
		v10[2] = 1;
		*v10 = v7;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

