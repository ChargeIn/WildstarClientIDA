//----- (00000001406D74A0) ----------------------------------------------------
__int64 __fastcall sub_1406D74A0(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	int v4; // eax
	BOOL v5; // eax

	v2 = sub_1406D5FA0(a1);
	if (v2)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = v3[2];
		v5 = v4 && (v4 != 1 || *v3);
		*(_DWORD*)(v2 + 2084) = v5;
		*(_DWORD*)(v2 + 2080) = 1;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

