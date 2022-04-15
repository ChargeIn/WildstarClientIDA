//----- (0000000140166870) ----------------------------------------------------
__int64 __fastcall sub_140166870(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	_DWORD* v4; // rcx
	int v5; // eax
	int v6; // edx
	BOOL v7; // edx
	__int64 v8; // r8

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = dword_140A12138;
	v5 = v3 - 1;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 32i64);
	v6 = v4[2];
	v7 = v6 && (v6 != 1 || *v4);
	if (v5 >= 0 && v5 < *(_DWORD*)(v2 + 1160))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v5);
		if (v8)
			*(_BYTE*)(v8 + 8) = v7;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

