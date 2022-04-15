//----- (00000001406798B0) ----------------------------------------------------
__int64 __fastcall sub_1406798B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax
	_DWORD* v9; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_1406849E0(qword_140C65970, ***(_DWORD***)(v3 + 8))) != 0)
	{
		v5 = sub_140573130(v4, *(_QWORD*)(qword_140C65898 + 120));
		v6 = (_DWORD*)a1[2];
		v7 = v5 == 0;
		v6[2] = 1;
		result = 1i64;
		*v6 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

