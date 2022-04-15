#include "../winhttp.h"

//----- (00000001407B5FD0) ----------------------------------------------------
__int64 __fastcall sub_1407B5FD0(__int64 a1, char* a2, __int64 a3, _QWORD* a4)
{
	__int64 result; // rax
	__int64 v7; // [rsp+50h] [rbp+18h] BYREF

	if (a3)
	{
		result = sub_1401B38F0(a2, a3, *(char**)(a1 + 24), 0i64, &v7);
		if (a4)
			*a4 = a3 + v7;
	}
	else
	{
		if (a4)
			*a4 = ((__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 1) + 1;
		return 1i64;
	}
	return result;
}

