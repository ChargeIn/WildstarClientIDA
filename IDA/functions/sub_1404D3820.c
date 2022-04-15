#include "../winhttp.h"

//----- (00000001404D3820) ----------------------------------------------------
_BOOL8 __fastcall sub_1404D3820(__int64 a1)
{
	_BOOL8 result; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	result = 1;
	if (*(int*)(a1 + 8) < 10)
	{
		if (*(_QWORD*)(a1 + 16))
		{
			GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
			if (*(_QWORD*)(a1 + 16) + 36000000000i64 >= *(unsigned __int64*)&SystemTimeAsFileTime)
				return 0;
		}
	}
	return result;
}

