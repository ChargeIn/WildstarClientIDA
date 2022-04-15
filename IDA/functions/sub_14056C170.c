#include "../winhttp.h"

//----- (000000014056C170) ----------------------------------------------------
__int64 __fastcall sub_14056C170(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 120i64))(a1, 1347241296i64);
	if (result)
		return *(_DWORD*)(result + 24) != 0;
	return result;
}

