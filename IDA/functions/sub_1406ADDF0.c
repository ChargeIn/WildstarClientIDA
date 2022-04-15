//----- (00000001406ADDF0) ----------------------------------------------------
__int64 __fastcall sub_1406ADDF0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // edx
	int v6; // eax
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = sub_140056AB0(a1, 2u);
	v4 = v3;
	if (v2 && v3)
	{
		v5 = 0;
		if (*(_DWORD*)(v2 + 8) == *(_DWORD*)(v3 + 8) || (v6 = 0, *(_QWORD*)(v2 + 16) == *(_QWORD*)(v4 + 16)))
			v6 = 1;
		v7 = (_DWORD*)a1[2];
		LOBYTE(v5) = v6 != 0;
		v7[2] = 1;
		*v7 = v5;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

