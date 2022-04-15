//----- (00000001405E9D50) ----------------------------------------------------
__int64 __fastcall sub_1405E9D50(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rdx
	int v8; // ecx
	__int64 result; // rax
	__int64 v10; // rax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = sub_14054E340(*(_QWORD*)(v5 + 112), **(_DWORD**)(v5 + 112), *(_QWORD*)(qword_140C65898 + 120));
		v7 = a1[2];
		v8 = v6;
		*(_DWORD*)(v7 + 8) = 3;
		result = 1i64;
		*(double*)v7 = (float)((float)v8 * 0.001);
		a1[2] += 16i64;
	}
	else
	{
		v10 = a1[2];
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

