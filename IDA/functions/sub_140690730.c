//----- (0000000140690730) ----------------------------------------------------
__int64 __fastcall sub_140690730(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	int v6; // eax
	_DWORD* v7; // rdx
	_DWORD* v8; // rax

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
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 488i64))(v5);
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
		*v7 = v6 != 0;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 1;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
