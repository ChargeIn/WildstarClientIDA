#include "../winhttp.h"

//----- (00000001406F6560) ----------------------------------------------------
__int64 __fastcall sub_1406F6560(_QWORD* a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(qword_140C65898 + 120);
	if (v1)
		return sub_140649930(a1, v1);
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

