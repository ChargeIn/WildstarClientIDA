#include "../winhttp.h"

//----- (00000001408FCC50) ----------------------------------------------------
signed __int64 __fastcall sub_1408FCC50(signed __int64* a1)
{
	signed __int64 v2; // rdx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v2 = (*(_QWORD*)&SystemTimeAsFileTime - 116444736000000000i64) / 0x989680ui64;
	if (v2 > 0x793406FFFi64)
		v2 = -1i64;
	if (a1)
		*a1 = v2;
	return v2;
}

