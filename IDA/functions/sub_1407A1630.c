#include "../winhttp.h"

//----- (00000001407A1630) ----------------------------------------------------
__int64 __fastcall sub_1407A1630(__int64 a1, int a2, int a3)
{
	__int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v6; // r9
	__int64 i; // rdx

	if (a2 >= 23)
		return 0i64;
	v4 = (__int64*)(16i64 * a2 + qword_140C65B70 + 88);
	if (!v4)
		return 0i64;
	v5 = v4[1];
	v6 = 0i64;
	if (!v5)
		return 0i64;
	for (i = *v4; **(_DWORD**)(*(_QWORD*)i + 112i64) != a3; i += 24i64)
	{
		if (++v6 >= v5)
			return 0i64;
	}
	return i;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

