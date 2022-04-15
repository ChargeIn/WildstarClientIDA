//----- (000000014069EF50) ----------------------------------------------------
__int64 __fastcall sub_14069EF50(_QWORD* a1)
{
	_DWORD*** v2; // rdi
	_DWORD*** v3; // rax
	_DWORD** v4; // rax
	int v5; // edx
	BOOL v6; // r8d
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = (_DWORD***)sub_140056AB0(a1, 1u);
	v3 = (_DWORD***)sub_140056AB0(a1, 2u);
	if (v2 && v3)
	{
		if (*v2 && (v4 = *v3) != 0i64)
		{
			v5 = 0;
			v6 = ***v2 == **v4;
		}
		else
		{
			v5 = 0;
			v6 = 0;
		}
		v7 = (_DWORD*)a1[2];
		LOBYTE(v5) = v6;
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

