#include "../winhttp.h"

//----- (00000001405A9C70) ----------------------------------------------------
float __fastcall sub_1405A9C70(__int64 a1)
{
	WORD v1; // ax
	float v3; // [rsp+20h] [rbp-38h] BYREF
	struct _FILETIME FileTime; // [rsp+28h] [rbp-30h] BYREF
	SYSTEMTIME SystemTime; // [rsp+30h] [rbp-28h] BYREF

	SystemTime.wYear = *(_WORD*)(a1 + 16);
	v1 = *(_WORD*)(a1 + 18);
	v3 = 0.0;
	SystemTime.wMonth = v1;
	SystemTime.wDay = *(_WORD*)(a1 + 20);
	SystemTime.wDayOfWeek = 0;
	SystemTime.wHour = *(_WORD*)(a1 + 22);
	SystemTime.wMinute = *(_WORD*)(a1 + 24);
	SystemTime.wSecond = *(_WORD*)(a1 + 26);
	SystemTime.wMilliseconds = *(_DWORD*)(a1 + 28) / 0xF4240u;
	SystemTimeToFileTime(&SystemTime, &FileTime);
	sub_1401E83A0(&v3, *(_QWORD*)&FileTime);
	return v3;
}

