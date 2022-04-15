//----- (00000001406908B0) ----------------------------------------------------
__int64 __fastcall sub_1406908B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	int v6; // esi
	int v7; // eax
	int v8; // edx
	_DWORD* v9; // rcx
	_DWORD* v10; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64),
			(v5 = v4) != 0)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4))
	{
		v6 = 1;
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5);
		v8 = 0;
		if ((unsigned int)(v7 - 24) <= 1 || v7 == 31)
			v6 = 0;
		v9 = (_DWORD*)a1[2];
		LOBYTE(v8) = v6 != 0;
		v9[2] = 1;
		*v9 = v8;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 1;
		v10[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

