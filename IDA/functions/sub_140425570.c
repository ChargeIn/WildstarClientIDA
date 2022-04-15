//----- (0000000140425570) ----------------------------------------------------
void __fastcall sub_140425570(__int64 a1)
{
	_QWORD* v2; // rcx
	bool v3; // al
	__int64 v4; // rcx
	unsigned int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int16* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx

	v2 = *(_QWORD**)(a1 + 2912);
	if (!v2
		|| (v3 = sub_1400C3420(v2), v4 = *(_QWORD*)(a1 + 2912), !v3) && (*(_DWORD*)(v4 + 656) & 0x1000000) != 0
		|| !v4)
	{
		if (*(_QWORD*)(a1 + 3712))
		{
			v5 = *(_DWORD*)(qword_140C65898 + 25796);
			v6 = sub_1403D90D0(qword_140C65898, v5);
			if (v6 && *(_DWORD*)(v6 + 128) == 7 && (unsigned int)sub_14045B6B0(v6))
				v5 = sub_14045B6B0(v7);
			v8 = (__int16*)&unk_1409E8EF4;
			v9 = sub_140226AC0(*(_DWORD*)(qword_140C65898 + 25808));
			if (v9)
				v8 = sub_14034BDD0(v10, *(_DWORD*)(v9 + 4));
			(*(void(__fastcall**)(_QWORD, void*, __int64, _QWORD, __int16*))(**(_QWORD**)(a1 + 3712) + 120i64))(
				*(_QWORD*)(a1 + 3712),
				&unk_1409E8EDC,
				7i64,
				v5,
				v8);
			sub_1400E6730(a1, *(_QWORD**)(a1 + 3712));
		}
	}
}
// 1404255F2: variable 'v7' is possibly undefined
// 14042561A: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

