#include "../winhttp.h"

//----- (00000001406075F0) ----------------------------------------------------
__int64 __fastcall sub_1406075F0(__int64* a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	__int64 v4; // rdx
	__int64 i; // r8

	v2 = a1[1];
	v4 = 0i64;
	if (!v2)
		return 0i64;
	for (i = *a1; *(_DWORD*)i != *(_DWORD*)a2 || *(_QWORD*)(i + 8) != *(_QWORD*)(a2 + 8); i += 16i64)
	{
		if (++v4 >= v2)
			return 0i64;
	}
	sub_140607640((__int64)a1, v4);
	return 1i64;
}

