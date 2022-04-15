//----- (00000001401E8230) ----------------------------------------------------
signed int __fastcall sub_1401E8230(__int64 a1, FILETIME a2)
{
	signed int result; // eax
	bool v4; // sf
	FILETIME FileTime; // [rsp+20h] [rbp-28h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

	if (!a1)
		return -2147024809;
	FileTime = a2;
	if (FileTimeToSystemTime(&FileTime, &SystemTime))
		goto LABEL_7;
	result = GetLastError();
	v4 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v4 = result < 0;
	}
	if (!v4)
	{
	LABEL_7:
		*(_WORD*)a1 = SystemTime.wYear;
		*(_WORD*)(a1 + 2) = SystemTime.wMonth;
		*(_WORD*)(a1 + 4) = SystemTime.wDay;
		*(_WORD*)(a1 + 6) = SystemTime.wHour;
		*(_WORD*)(a1 + 8) = SystemTime.wMinute;
		*(_WORD*)(a1 + 10) = SystemTime.wSecond;
		*(_DWORD*)(a1 + 12) = 1000000 * SystemTime.wMilliseconds;
		return 0;
	}
	return result;
}

