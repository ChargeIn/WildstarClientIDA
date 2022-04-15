//----- (0000000140687820) ----------------------------------------------------
__int64 __fastcall sub_140687820(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // esi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // r14
	int v8; // ebx
	BOOL v9; // edx
	_DWORD* v10; // rcx
	_DWORD* v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v5 = sub_140056AB0(a1, 2u);
	if (v5)
		v6 = *(_QWORD*)(v5 + 8);
	else
		v6 = 0i64;
	if (v4 && v6)
	{
		if (*(_QWORD*)(v4 + 8) && (v7 = *(_QWORD*)(v6 + 8)) != 0)
		{
			v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 8) + 32i64))(*(_QWORD*)(v4 + 8));
			v9 = v8 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
		}
		else
		{
			v9 = 0;
		}
		v10 = (_DWORD*)a1[2];
		LOBYTE(v3) = v9;
		v10[2] = 1;
		*v10 = v3;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

