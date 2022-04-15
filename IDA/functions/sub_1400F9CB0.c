//----- (00000001400F9CB0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400F9CB0(__int64 a1, __int64 a2)
{
	__int64 v4; // r10
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	BOOL v11; // eax

	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2))
		return 0i64;
	v4 = *(_QWORD*)(a1 + 16);
	if (v4 != *(_QWORD*)(a2 + 16))
		return 0i64;
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	v11 = sub_140058420(*(_QWORD*)(a1 + 16), -1);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	return v11;
}
// 1400F9D00: variable 'v6' is possibly undefined
// 1400F9D2C: variable 'v9' is possibly undefined

