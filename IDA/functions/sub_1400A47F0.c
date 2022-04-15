#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A47F0) ----------------------------------------------------
__int64 __fastcall sub_1400A47F0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, a3, (__int64)a3);
	if ((int)result >= 0)
		return sub_14006C120(a1, a3 + 1, v6);
	return result;
}
// 1400A4828: variable 'v6' is possibly undefined

