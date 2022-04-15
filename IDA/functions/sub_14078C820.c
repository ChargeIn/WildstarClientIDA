//----- (000000014078C820) ----------------------------------------------------
_DWORD* __fastcall sub_14078C820(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rbx
	_QWORD* v4; // rax
	_DWORD* result; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v1 = &unk_1409D1679;
	*(_DWORD*)(v1 + 8) = 2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v3 = *(_QWORD*)(a1 + 16);
	v4 = sub_14005C450(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), (int*)(v3 - 16));
	*(_QWORD*)(v3 - 16) = *v4;
	*(_DWORD*)(v3 - 8) = *((_DWORD*)v4 + 2);
	result = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (result == dword_140A12138 || result[2] != 5)
	{
		v6 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) = result;
		if (*(_QWORD*)(v6 + 120) >= *(_QWORD*)(v6 + 112))
			sub_14005E2C0(a1);
		v7 = *(_QWORD*)(a1 + 16);
		v8 = sub_14005C1B0(a1, 0, 1);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(a1 + 16) += 16i64;
		v9 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v9 = &unk_1409D1679;
		*(_DWORD*)(v9 + 8) = 2;
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v10 = *(_QWORD*)(v10 - 32);
		*(_DWORD*)(v10 + 8) = *(_DWORD*)(v10 - 24);
		*(_QWORD*)(a1 + 16) += 16i64;
		return (_DWORD*)sub_140058AB0(a1, -10000);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

