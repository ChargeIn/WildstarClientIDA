//----- (000000014073D730) ----------------------------------------------------
__int64 __fastcall sub_14073D730(_QWORD* a1)
{
	_DWORD* v1; // rax
	int* v3; // rax
	__int64 v4; // rcx
	BOOL v5; // edx
	BOOL* v6; // rcx
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	v5 = ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = (int*)sub_140056AB0(a1, 1u)) != 0i64
		&& (int)sub_1404B41C0(v4, v3) >= 0;
	v6 = (BOOL*)a1[2];
	result = 1i64;
	*v6 = v5;
	v6[2] = 1;
	a1[2] += 16i64;
	return result;
}
// 14073D775: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

