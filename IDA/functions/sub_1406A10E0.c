//----- (00000001406A10E0) ----------------------------------------------------
__int64 __fastcall sub_1406A10E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	_DWORD* v4; // rcx
	_DWORD* v6; // rdx
	int v7; // eax
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		if (*(_QWORD*)(v3 + 8))
		{
			v4 = (_DWORD*)a1[2];
			*v4 = 0;
			v4[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
		v6 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v6 = (_DWORD*)(a1[3] + 16i64);
		v7 = v6[2];
		if (v7 && (v7 != 1 || *v6))
		{
			*(_DWORD*)(v3 + 44) = 1;
			v8 = (_DWORD*)a1[2];
			*v8 = 1;
		}
		else
		{
			*(_DWORD*)(v3 + 44) = 0;
			v8 = (_DWORD*)a1[2];
			*v8 = 1;
		}
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
	}
	v8[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

