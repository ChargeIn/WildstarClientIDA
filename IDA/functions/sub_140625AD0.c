//----- (0000000140625AD0) ----------------------------------------------------
_BOOL8 __fastcall sub_140625AD0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // edx
	__int64 v8; // r9
	__int64 v9; // rax
	_BOOL8 result; // rax

	v1 = qword_140C65898;
	v3 = *(_QWORD*)(qword_140C65898 + 29096);
	if (!v3 || !*(_DWORD*)(v3 + 696))
		return 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 29080);
	result = 1;
	if (!*(_DWORD*)(v4 + 44)
		|| ((*(_DWORD*)(a1 + 904) & 0xC0000000) == 0x40000000
			|| sub_140482550(*(_QWORD*)(qword_140C65898 + 29080), *(_DWORD*)(a1 + 904)))
		&& ((*(_DWORD*)(a1 + 900) & 0xC0000000) == 0x40000000 || sub_140482550(v4, *(_DWORD*)(a1 + 900))))
	{
		v5 = sub_1403D90D0(v1, *(_DWORD*)(a1 + 900));
		v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		v7 = 0;
		v8 = v6;
		if (!v5 || !*(_QWORD*)(qword_140C65898 + 29096) || *(_QWORD*)(v5 + 14072) != *(_QWORD*)(qword_140C65898 + 29096))
		{
			if (!v6)
				return 0;
			v9 = *(_QWORD*)(qword_140C65898 + 29096);
			if (!v9)
				return 0;
			LOBYTE(v7) = *(_QWORD*)(v8 + 14072) == v9;
			if (!v7)
				return 0;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

