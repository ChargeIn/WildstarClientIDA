//----- (0000000140611680) ----------------------------------------------------
__int64 __fastcall sub_140611680(__int64* a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rcx
	unsigned int v7; // eax
	__int64 v8; // rbx

	v4 = *a1;
	if (!v4)
		return 0i64;
	v7 = *(_DWORD*)(v4 + 16);
	if (a2 == v7 || a2 > v7)
		return 0i64;
	if (a2 != v7 && a2 <= v7)
	{
		v8 = a2;
		if (*(_QWORD*)(v4 + 8i64 * a2 + 24))
		{
			if (sub_1405517A0(v4, a2) && a3 < 0x20)
				return (1 << a3) & (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1[v8 + 2] + 64i64))(a1[v8 + 2]);
		}
	}
	return 0i64;
}

