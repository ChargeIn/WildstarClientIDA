#include "../winhttp.h"

//----- (0000000140007220) ----------------------------------------------------
_BOOL8 __fastcall sub_140007220(__int64 a1, int a2)
{
	__int64 v2; // rbx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+18h] BYREF

	v2 = a2;
	if (a2 >= 4)
		return 0i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	return *(unsigned __int64*)&SystemTimeAsFileTime < *(_QWORD*)(a1 + 8 * v2 + 488);
}

