//----- (0000000140662550) ----------------------------------------------------
__int64 __fastcall sub_140662550(_QWORD* a1)
{
	_DWORD* v2; // rdi
	_DWORD* v3; // rax
	_DWORD* v4; // rdx
	bool v5; // zf
	_DWORD* v6; // rax

	v2 = (_DWORD*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)sub_140056AB0(a1, 2u);
	if (v2 && v3)
	{
		v4 = (_DWORD*)a1[2];
		v5 = *v2 == *v3;
		v4[2] = 1;
		*v4 = v5;
	}
	else
	{
		v6 = (_DWORD*)a1[2];
		*v6 = 0;
		v6[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
