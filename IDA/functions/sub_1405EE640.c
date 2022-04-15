//----- (00000001405EE640) ----------------------------------------------------
__int64 __fastcall sub_1405EE640(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned int* v7; // rcx
	unsigned int v8; // edx
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	unsigned int* v15; // r8
	int v16; // edx
	unsigned int* v17; // rdx
	int v18; // ecx
	_DWORD* v19; // rax
	__int64 v21; // [rsp+38h] [rbp+10h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120)), (v6 = v5) != 0))
	{
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
		if (v10 == v9 || (v21 = v10, v8 < *(_DWORD*)(v10 + 32)))
			v21 = *(_QWORD*)(qword_140C65B70 + 1928);
		if (v21 != v9
			&& (v12 = *(int**)(v21 + 40), v12[2] > 0)
			&& (v13 = *(_QWORD*)v12, *(_QWORD*)v13)
			&& (v14 = sub_1407A0FD0(qword_140C65B70, *(_DWORD*)(*(_QWORD*)v13 + 4i64))) != 0)
		{
			v15 = (unsigned int*)a1[2];
			v16 = *(_DWORD*)(*(_QWORD*)(v14 + 112) + 264i64);
			v15[2] = 1;
			*v15 = (v16 & 0x400000u) >> 22;
		}
		else
		{
		LABEL_21:
			v17 = (unsigned int*)a1[2];
			v18 = *(_DWORD*)(*(_QWORD*)(v6 + 112) + 264i64);
			v17[2] = 1;
			*v17 = (v18 & 0x400000u) >> 22;
		}
	}
	else
	{
		v19 = (_DWORD*)a1[2];
		*v19 = 0;
		v19[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

