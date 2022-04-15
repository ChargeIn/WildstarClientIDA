//----- (00000001406B78E0) ----------------------------------------------------
__int64 __fastcall sub_1406B78E0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edi
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	_DWORD* v8; // rcx
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v5 = sub_140056AB0(a1, 2u);
	v6 = 0i64;
	if (v5)
		v6 = *(_QWORD*)(v5 + 8);
	if (v4 && v6)
	{
		if (*(_DWORD*)(v4 + 8) != *(_DWORD*)(v6 + 8) || (v7 = 1, *(_DWORD*)(v4 + 12) != *(_DWORD*)(v6 + 12)))
			v7 = 0;
		v8 = (_DWORD*)a1[2];
		LOBYTE(v3) = v7 != 0;
		v8[2] = 1;
		*v8 = v3;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

