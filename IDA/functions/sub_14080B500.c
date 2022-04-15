//----- (000000014080B500) ----------------------------------------------------
__int64 __fastcall sub_14080B500(HMODULE* a1)
{
	int v2; // [rsp+20h] [rbp-18h]
	unsigned int v3; // [rsp+24h] [rbp-14h]
	unsigned int v4; // [rsp+24h] [rbp-14h]

	sub_14080B1E0();
	v2 = 0;
	while (byte_140C60948)
	{
		Sleep(0x64u);
		if ((unsigned int)++v2 >= 0xA)
			return 0xFFFFFFFFi64;
	}
	++dword_140C60970;
	*a1 = GetModuleHandleA("nvapi64.dll");
	if (!*a1)
	{
		EnterCriticalSection(&CriticalSection);
		*a1 = GetModuleHandleA("nvapi64.dll");
		if (!*a1)
		{
			*a1 = sub_1408243F0("nvapi64.dll", 0);
			if (*a1)
			{
				v3 = sub_14080B390(*a1, 0);
				if (v3)
				{
					--dword_140C60970;
					FreeLibrary(*a1);
					LeaveCriticalSection(&CriticalSection);
					return v3;
				}
				else
				{
					qword_140C60918 = *a1;
					sub_14080B210((__int64)*a1, 0);
					LeaveCriticalSection(&CriticalSection);
					return 4294967282i64;
				}
			}
			else
			{
				--dword_140C60970;
				LeaveCriticalSection(&CriticalSection);
				return 4294967294i64;
			}
		}
		LeaveCriticalSection(&CriticalSection);
	}
	if (!sub_14080B290((__int64)*a1, 0))
		return 0i64;
	v4 = sub_14080B390(*a1, 0);
	if (v4)
	{
		--dword_140C60970;
		FreeLibrary(*a1);
		return v4;
	}
	else
	{
		qword_140C60918 = *a1;
		sub_14080B210((__int64)*a1, 0);
		return 4294967282i64;
	}
}
// 140C60948: using guessed type char byte_140C60948;
// 140C60970: using guessed type int dword_140C60970;

