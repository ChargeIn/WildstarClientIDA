//----- (0000000140958B40) ----------------------------------------------------
__int64 __fastcall sub_140958B40(__int64 a1, int a2)
{
	void (*v4)(void); // rax
	void(__fastcall * v5)(__int64); // rax
	unsigned int(__fastcall * v6)(__int64); // rdx
	void(__fastcall * v7)(__int64); // rdx

	if ((a2 & 1) != 0)
	{
		if (!*(_DWORD*)(a1 + 176))
			*(_DWORD*)(a1 + 176) = 1;
		if (a2 < 0)
		{
			v4 = *(void (**)(void))(a1 + 64);
			if (v4)
				v4();
			v5 = *(void(__fastcall**)(__int64))(a1 + 80);
			if (v5)
				v5(a1);
		}
	}
	else if ((a2 & 2) != 0)
	{
		if (*(_DWORD*)(a1 + 176) == 1)
			*(_DWORD*)(a1 + 176) = 0;
		if (a2 < 0)
			sub_1409587B0(a1);
	}
	if ((a2 & 0x40000000) == 0)
		return *(unsigned int*)(a1 + 176);
	v6 = *(unsigned int(__fastcall**)(__int64))(a1 + 72);
	if (!v6 || !v6(a1))
		return 0i64;
	v7 = *(void(__fastcall**)(__int64))(a1 + 80);
	if (v7)
		v7(a1);
	return 1i64;
}

