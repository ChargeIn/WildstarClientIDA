//----- (000000014068ED90) ----------------------------------------------------
__int64 __fastcall sub_14068ED90(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rsi
	int v6; // edi
	bool v7; // zf
	int v8; // eax
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
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4))
	{
		v6 = 0;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 472i64))(v5)
			|| (v7 = (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 328i64))(v5) + 8) & 0x4000) == 0,
				v8 = 0,
				!v7))
		{
			v8 = 1;
		}
		v9 = (_DWORD*)a1[2];
		LOBYTE(v6) = v8 != 0;
		v9[2] = 1;
		*v9 = v6;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

