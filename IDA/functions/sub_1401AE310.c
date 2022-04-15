//----- (00000001401AE310) ----------------------------------------------------
__int64 __fastcall sub_1401AE310(__int64 a1)
{
	__int64 result; // rax
	struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B5EF60;
	GetLocalTime(&SystemTime);
	result = a1;
	*(_DWORD*)(a1 + 16) = SystemTime.wMilliseconds
		+ 1000 * (SystemTime.wSecond + 60 * (SystemTime.wMinute + 60 * SystemTime.wHour));
	return result;
}
// 140B5EF60: using guessed type __int64 (__fastcall *off_140B5EF60[11])();

