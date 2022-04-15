//----- (00000001404F90C0) ----------------------------------------------------
__int64 __fastcall sub_1404F90C0(_QWORD* a1)
{
	_DWORD* v2; // rdx
	unsigned __int64 v3; // r9
	_DWORD* v4; // r8
	BOOL v5; // ecx
	_DWORD* v6; // rax
	int v7; // ecx
	BOOL v8; // eax

	v2 = (_DWORD*)sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v3 = a1[2];
		v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = 0;
		if ((unsigned __int64)v4 < v3)
		{
			v6 = dword_140A12138;
			if (v4 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
			{
				if ((unsigned __int64)v4 < v3)
					v6 = (_DWORD*)(a1[3] + 16i64);
				v7 = v6[2];
				v8 = v7 && (v7 != 1 || *v6);
				v5 = v8;
			}
		}
		v2[570] = 0;
		if (v2[569])
		{
			v2[569] = 0;
			v2[571] = 0;
			return 0i64;
		}
		v2[569] = 1;
		if (v5)
		{
			v2[571] = 1120272384;
			return 0i64;
		}
		v2[571] = 1050253722;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

