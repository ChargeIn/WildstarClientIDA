//----- (00000001406899B0) ----------------------------------------------------
__int64 __fastcall sub_1406899B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	int v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf
	__int64 result; // rax
	_DWORD* v10; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			(v5 = sub_140498A40(qword_140C65980, v4, 0)) != 0))
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5);
		v7 = (_DWORD*)a1[2];
		v8 = v6 == 0;
		v7[2] = 1;
		result = 1i64;
		*v7 = !v8;
		a1[2] += 16i64;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

