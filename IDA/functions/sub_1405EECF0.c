//----- (00000001405EECF0) ----------------------------------------------------
__int64 __fastcall sub_1405EECF0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	int* v7; // r8
	__int64 result; // rax
	int v9; // edx
	_DWORD* v10; // rax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = *(_QWORD*)(v5 + 112);
		v7 = (int*)a1[2];
		result = 1i64;
		v9 = *(_DWORD*)(v6 + 268);
		v7[2] = 1;
		*v7 = (unsigned __int16)(v9 & 0x200) >> 9;
		a1[2] += 16i64;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
