//----- (0000000140502000) ----------------------------------------------------
__int64 __fastcall sub_140502000(_QWORD* a1)
{
	_QWORD* v2; // rax
	_DWORD* v3; // rdx
	__int64 result; // rax
	_DWORD* v5; // rcx
	bool v6; // zf

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = (_DWORD*)a1[2];
		v6 = *v2 == 0i64;
		v5[2] = 1;
		*v5 = v6;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 1;
		v3[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}

