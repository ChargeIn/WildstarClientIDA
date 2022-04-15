//----- (00000001406C24E0) ----------------------------------------------------
__int64 __fastcall sub_1406C24E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // ecx
	_DWORD* v5; // rax

	v2 = sub_1406C01C0(a1);
	v3 = v2;
	if (v2)
	{
		v4 = *(_DWORD*)(v2 + 2300);
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v4 = sub_140056D60(a1, 2u);
		*(_DWORD*)(v3 + 2300) = v4;
		sub_1406BFD00(v3);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

