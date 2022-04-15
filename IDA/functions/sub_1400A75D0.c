#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A75D0) ----------------------------------------------------
__int64 __fastcall sub_1400A75D0(_WORD* a1, struct _FILETIME* a2)
{
	int v3; // ebx
	__int16 v5[2]; // [rsp+50h] [rbp-38h] BYREF
	float v6; // [rsp+54h] [rbp-34h] BYREF
	struct _FILETIME FileTime; // [rsp+58h] [rbp-30h] BYREF
	SYSTEMTIME SystemTime; // [rsp+60h] [rbp-28h] BYREF

	*(_QWORD*)&SystemTime.wYear = 0i64;
	*(_QWORD*)&SystemTime.wHour = 0i64;
	v5[0] = 0;
	v6 = 0.0;
	v3 = sub_1407DF428(
		a1,
		(__int64)L"%hu-%hu-%huT%hu:%hu:%f%c",
		&SystemTime,
		&SystemTime.wMonth,
		&SystemTime.wDay,
		&SystemTime.wHour,
		&SystemTime.wMinute,
		&v6,
		v5,
		1);
	SystemTime.wSecond = (int)v6;
	SystemTime.wMilliseconds = (int)(float)((float)(v6 - (float)SystemTime.wSecond) * 1000.0);
	SystemTimeToFileTime(&SystemTime, &FileTime);
	*a2 = FileTime;
	if (v3 == 7 && v5[0] == 90)
		return 0i64;
	else
		return 2147500037i64;
}
// 140A12AC8: using guessed type wchar_t aHuHuHutHuHuFC[25];
// 1400A75D0: using guessed type __int16 var_38[2];

