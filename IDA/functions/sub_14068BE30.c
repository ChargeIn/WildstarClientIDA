//----- (000000014068BE30) ----------------------------------------------------
__int64 __fastcall sub_14068BE30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // r8d
	int v9; // ecx
	int v10; // edx
	_DWORD* v11; // rcx

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
		v8 = 0;
		v9 = *(_DWORD*)(qword_140C65898 + 25636);
		if (v9)
		{
			if (v9 == 1)
				v10 = (*(_DWORD*)(*(_QWORD*)(v7 + 8) + 40i64) >> 13) & 1;
			else
				v10 = 0;
		}
		else
		{
			v10 = (*(_DWORD*)(*(_QWORD*)(v7 + 8) + 40i64) >> 12) & 1;
		}
		v11 = (_DWORD*)a1[2];
		LOBYTE(v8) = v10 != 0;
		v11[2] = 1;
		*v11 = v8;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

