//----- (00000001405EE4A0) ----------------------------------------------------
__int64 __fastcall sub_1405EE4A0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned int* v7; // rcx
	unsigned int v8; // edx
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	BOOL* v15; // rbx
	BOOL v16; // eax
	_DWORD* v17; // rax
	int v18; // ecx
	unsigned int v19; // edx
	int v20; // r8d
	_DWORD* v21; // rax
	__int64 v23; // [rsp+38h] [rbp+10h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2]
		|| (v3 = sub_140056AB0(a1, 1u)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0
		|| (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120)), (v6 = v5) == 0))
	{
		v18 = 0;
	LABEL_29:
		v21 = (_DWORD*)a1[2];
		v21[2] = 1;
		*v21 = v18;
		goto LABEL_30;
	}
	v7 = *(unsigned int**)(v5 + 112);
	if (v7[6] != 7)
		goto LABEL_21;
	v8 = *v7;
	v9 = *(_QWORD*)(qword_140C65B70 + 1928);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v8)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v23 = v10, v8 < *(_DWORD*)(v10 + 32)))
		v23 = *(_QWORD*)(qword_140C65B70 + 1928);
	if (v23 == v9
		|| (v12 = *(int**)(v23 + 40), v12[2] <= 0)
		|| (v13 = **(_QWORD**)v12) == 0
		|| (v14 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v13 + 4), *(_QWORD*)(qword_140C65898 + 120))) == 0)
	{
	LABEL_21:
		v17 = *(_DWORD**)(v6 + 112);
		v18 = 0;
		v19 = v17[31];
		LOBYTE(v18) = v19 <= 7 && (v20 = 133, _bittest(&v20, v19))
			|| v17[6] == 3 && !v17[39] && ((v19 - 4) & 0xFFFFFFFB) == 0;
		goto LABEL_29;
	}
	v15 = (BOOL*)a1[2];
	v16 = sub_1403B4EC0(v14);
	v15[2] = 1;
	*v15 = v16;
LABEL_30:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

