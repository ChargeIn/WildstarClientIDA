//----- (000000014017FFD0) ----------------------------------------------------
__int64 __fastcall sub_14017FFD0(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // r9
	bool v4; // r8
	_DWORD* v5; // rcx
	_DWORD* v6; // rax
	int v7; // ecx
	BOOL v8; // eax

	v2 = sub_14017F690(a1);
	if (v2)
	{
		v3 = a1[2];
		v4 = 0;
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < v3)
		{
			v6 = dword_140A12138;
			if (v5 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
			{
				if ((unsigned __int64)v5 < v3)
					v6 = (_DWORD*)(a1[3] + 16i64);
				v7 = v6[2];
				v8 = v7 && (v7 != 1 || *v6);
				v4 = v8;
			}
		}
		*(_BYTE*)(v2 + 2152) = 0;
		if (v4)
		{
			*(_BYTE*)(v2 + 2153) = 1;
			*(_DWORD*)(v2 + 2156) = 1120272384;
			return 0i64;
		}
		*(_BYTE*)(v2 + 2153) = 0;
		*(_DWORD*)(v2 + 2156) = 0;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

