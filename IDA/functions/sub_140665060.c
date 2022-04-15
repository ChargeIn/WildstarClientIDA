//----- (0000000140665060) ----------------------------------------------------
__int64 __fastcall sub_140665060(_QWORD* a1)
{
	__int64* v2; // rax
	_DWORD* v3; // rdx
	__int64 result; // rax
	BOOL v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = sub_140552930(*v2);
		v6 = (_DWORD*)a1[2];
		v7 = !v5;
		v6[2] = 1;
		result = 1i64;
		*v6 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

