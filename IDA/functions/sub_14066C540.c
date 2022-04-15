//----- (000000014066C540) ----------------------------------------------------
__int64 __fastcall sub_14066C540(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 48i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_14048D310(qword_140C65990, v4),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5))
	{
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6) + 132))
		{
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
			sub_14066DB90(a1, (int*)(v7 + 132));
			return 1i64;
		}
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

