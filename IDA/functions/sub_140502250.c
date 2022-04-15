//----- (0000000140502250) ----------------------------------------------------
__int64 __fastcall sub_140502250(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // ecx
	_DWORD* v5; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		*(_QWORD*)(v2 + 8) = 15i64;
		v4 = 0;
		*(_DWORD*)(v2 + 16) = 0;
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v4 = sub_140056D60(a1, 2u);
		*(_DWORD*)(v3 + 20) = v4;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

