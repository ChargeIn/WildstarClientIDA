//----- (0000000140542D90) ----------------------------------------------------
_BOOL8 __fastcall sub_140542D90(__int64 a1, __int64 a2)
{
	int v3; // eax
	__int64 v5; // rdx

	if (!a2 || (*(_DWORD*)(a2 + 68) & 0x140) != 0)
		return 0i64;
	v3 = *(_DWORD*)(a1 + 336);
	if (v3 == 2)
	{
		if ((*(_BYTE*)(a2 + 88) & 4) == 0)
			return 0i64;
	}
	else if (v3 != 3 || (*(_BYTE*)(a2 + 88) & 8) == 0)
	{
		return 0i64;
	}
	v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	return v5
		&& (!*(_DWORD*)(a2 + 80)
			|| (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C659A0 + 24i64))(qword_140C659A0, v5));
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

