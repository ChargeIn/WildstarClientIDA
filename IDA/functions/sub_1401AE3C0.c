//----- (00000001401AE3C0) ----------------------------------------------------
__int64 __fastcall sub_1401AE3C0(__int64 a1)
{
	struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 2512) = 625i64;
	*(_QWORD*)a1 = off_140B5EF00;
	*(_DWORD*)(a1 + 2520) = -1727483681;
	GetLocalTime(&SystemTime);
	*(_DWORD*)(a1 + 16) = SystemTime.wMilliseconds
		+ 1000 * (SystemTime.wSecond + 60 * (SystemTime.wMinute + 60 * SystemTime.wHour));
	*(_DWORD*)(a1 + 2512) = 1;
	do
	{
		*(_DWORD*)(a1 + 4i64 * *(int*)(a1 + 2512) + 16) = *(_DWORD*)(a1 + 2512)
			+ 1812433253
			* (*(_DWORD*)(a1 + 4i64 * *(int*)(a1 + 2512) + 12) ^ (*(_DWORD*)(a1 + 4i64 * *(int*)(a1 + 2512) + 12) >> 30));
		++* (_DWORD*)(a1 + 2512);
	} while (*(_DWORD*)(a1 + 2512) < 0x270u);
	return a1;
}
// 140B5EF00: using guessed type __int64 (__fastcall *off_140B5EF00[11])();

