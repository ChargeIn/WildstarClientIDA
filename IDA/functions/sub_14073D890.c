//----- (000000014073D890) ----------------------------------------------------
__int64 __fastcall sub_14073D890(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // edi
	_DWORD* v4; // rsi
	_DWORD* v5; // rax
	_DWORD* v6; // rcx
	_DWORD* v7; // rcx
	int v8; // eax
	int v9; // ecx
	_DWORD* v10; // rax

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		v4 = (_DWORD*)sub_140056AB0(a1, 1u);
	else
		v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		v6 = (_DWORD*)sub_140056AB0(a1, 2u);
	else
		v6 = 0i64;
	if (v4)
	{
		if (v6)
		{
			if (*v4 != *v6 || (v8 = v6[1], v9 = 1, v4[1] != v8))
				v9 = 0;
			LOBYTE(v2) = v9 != 0;
		}
		goto LABEL_19;
	}
	if (v6)
	{
	LABEL_19:
		v10 = (_DWORD*)a1[2];
		v10[2] = 1;
		*v10 = v2;
		goto LABEL_20;
	}
	v7 = (_DWORD*)a1[2];
	*v7 = 1;
	v7[2] = 1;
LABEL_20:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

