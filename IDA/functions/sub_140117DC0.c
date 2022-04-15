//----- (0000000140117DC0) ----------------------------------------------------
__int64 __fastcall sub_140117DC0(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // r8
	_DWORD* v4; // rax
	_DWORD* v5; // rcx
	int v6; // eax

	v2 = sub_140117A50(a1);
	if (v2)
	{
		v3 = a1[2];
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 < v3)
		{
			v5 = dword_140A12138;
			if (v4 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
			{
				if ((unsigned __int64)v4 < v3)
					v5 = (_DWORD*)(a1[3] + 16i64);
				v6 = v5[2];
				if (v6 && (v6 != 1 || *v5))
				{
					*(_BYTE*)(v2 + 1889) = 1;
					return 0i64;
				}
				*(_BYTE*)(v2 + 1889) = 0;
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

