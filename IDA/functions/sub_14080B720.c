//----- (000000014080B720) ----------------------------------------------------
__int64 __fastcall sub_14080B720(HMODULE* a1)
{
	unsigned int v2; // [rsp+20h] [rbp-18h]

	sub_14080B1E0();
	while (byte_140C60949)
		Sleep(0x64u);
	++dword_140C60974;
	*a1 = GetModuleHandleA("nvpowerapi.dll");
	if (*a1)
		return 0i64;
	EnterCriticalSection(&CriticalSection);
	*a1 = GetModuleHandleA("nvpowerapi.dll");
	if (*a1)
	{
		LeaveCriticalSection(&CriticalSection);
		return 0i64;
	}
	*a1 = sub_1408243F0("nvpowerapi.dll", 0);
	if (*a1)
	{
		v2 = sub_14080B390(*a1, 1);
		if (v2)
		{
			--dword_140C60974;
			LeaveCriticalSection(&CriticalSection);
			return v2;
		}
		else
		{
			hLibModule = *a1;
			LeaveCriticalSection(&CriticalSection);
			return 4294967282i64;
		}
	}
	else
	{
		--dword_140C60974;
		LeaveCriticalSection(&CriticalSection);
		return 4294967294i64;
	}
}
// 140C60949: using guessed type char byte_140C60949;
// 140C60974: using guessed type int dword_140C60974;

