#include "../winhttp.h"

//----- (000000014044FA30) ----------------------------------------------------
__int64 __fastcall sub_14044FA30(__int64 a1, int a2)
{
	unsigned __int64 v4; // r9
	__int64 v5; // r8
	__int64 i; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	if (!a1)
		return 0i64;
	if (!*(_QWORD*)(a1 + 40))
		return 0i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v4 = *(_QWORD*)(a1 + 40);
	v5 = 0i64;
	if (!v4)
		return 0i64;
	for (i = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(i + 16) > *(unsigned __int64*)&SystemTimeAsFileTime
		|| *(unsigned __int64*)&SystemTimeAsFileTime > *(_QWORD*)(i + 24)
		|| *(_DWORD*)i != a2
		|| !*(_DWORD*)(i + 8);
		i += 32i64)
	{
		if (++v5 >= v4)
			return 0i64;
	}
	return *(_QWORD*)(a1 + 32) + 32 * v5;
}

