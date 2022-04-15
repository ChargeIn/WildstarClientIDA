#include "../winhttp.h"

//----- (000000014007E9E0) ----------------------------------------------------
__int64 __fastcall sub_14007E9E0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xFui64);
	if ((int)result >= 0)
		return sub_1400AB810(a1, v6, a3 + 1);
	return result;
}
// 14007EA1E: variable 'v6' is possibly undefined

