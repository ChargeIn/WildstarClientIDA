//----- (00000001406959C0) ----------------------------------------------------
__int64 __fastcall sub_1406959C0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edi
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rdx
	bool v8; // zf
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
		v7 = (_DWORD*)a1[2];
		v8 = *(_QWORD*)(v4 + 8) == *(_QWORD*)(v6 + 8);
		v7[2] = 1;
		LOBYTE(v3) = v8;
		*v7 = v3;
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

