#include "../winhttp.h"

//----- (00000001406F78B0) ----------------------------------------------------
__int64 __fastcall sub_1406F78B0(__int64 a1)
{
	struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-28h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	*(_QWORD*)&SystemTimeAsFileTime += qword_140C658B8;
	if (!FileTimeToSystemTime(&SystemTimeAsFileTime, &SystemTime))
		GetLastError();
	return sub_1406F7570(a1, &SystemTime);
}
// 140C658B8: using guessed type __int64 qword_140C658B8;

