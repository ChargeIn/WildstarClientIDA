//----- (0000000140683110) ----------------------------------------------------
__int64 __fastcall sub_140683110(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	__int64 v5; // rax
	int v6; // edx
	unsigned int v7; // ecx
	int v8; // eax
	unsigned __int8 v9; // cf
	int v10; // eax
	_DWORD* v11; // rcx
	bool v12; // zf
	__int64 result; // rax
	_DWORD* v14; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (v5 = sub_140617410((__int64)v4, *v4)) != 0)
	{
		v6 = 0;
		v7 = *(_DWORD*)(*(_QWORD*)(v5 + 152) + 4i64);
		if (v7 > 8 || (v8 = 410, v9 = _bittest(&v8, v7), v10 = 1, !v9))
			v10 = 0;
		v11 = (_DWORD*)a1[2];
		v12 = v10 == 0;
		result = 1i64;
		LOBYTE(v6) = !v12;
		v11[2] = 1;
		*v11 = v6;
		a1[2] += 16i64;
	}
	else
	{
		v14 = (_DWORD*)a1[2];
		*v14 = 0;
		v14[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

