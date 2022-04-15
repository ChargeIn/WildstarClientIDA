//----- (00000001405EB290) ----------------------------------------------------
__int64 __fastcall sub_1405EB290(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // r11d
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // r10
	unsigned __int64 v11; // r8
	unsigned int* v12; // rdx
	__int64 v13; // rcx
	__int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		goto LABEL_16;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		goto LABEL_16;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		goto LABEL_16;
	v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120));
	if (v5
		&& (v6 = **(_DWORD**)(v5 + 112), (v7 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
		&& (v8 = *(int*)(v7 + 220), (int)v8 < 23)
		&& (v9 = 16 * v8 + qword_140C65B70 + 88) != 0
		&& (v10 = *(_QWORD*)(v9 + 8), v11 = 0i64, v10))
	{
		v12 = *(unsigned int**)v9;
		while (**(_DWORD**)(*(_QWORD*)v12 + 112i64) != v6)
		{
			++v11;
			v12 += 6;
			if (v11 >= v10)
				goto LABEL_16;
		}
		v13 = v12[3];
		v15[1] = 1i64;
		v15[0] = v13;
		v15[2] = 0i64;
		sub_140501210(a1, v15);
		return 1i64;
	}
	else
	{
	LABEL_16:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

