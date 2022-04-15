//----- (0000000140536EC0) ----------------------------------------------------
__int64 __fastcall sub_140536EC0(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	int v4; // eax

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = v3[2];
		if (v4 && (v4 != 1 || *v3))
		{
			*(_DWORD*)(v2 + 1340) = 1;
			return 0i64;
		}
		*(_DWORD*)(v2 + 1340) = 0;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

