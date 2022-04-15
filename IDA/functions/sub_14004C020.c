//----- (000000014004C020) ----------------------------------------------------
__int64 __fastcall sub_14004C020(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rbx
	int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v4 = 1;
		v5 = sub_140056AB0(a1, 1u);
		if (v5)
		{
			v6 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
			if (v6)
			{
				if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
					v3 = (_DWORD*)(a1[3] + 16i64);
				v7 = v3[2];
				if (!v7 || v7 == 1 && !*v3)
					v4 = 0;
				*(_DWORD*)(v6 + 5072) = v4;
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

