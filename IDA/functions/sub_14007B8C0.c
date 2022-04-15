#include "../winhttp.h"

//----- (000000014007B8C0) ----------------------------------------------------
__int64 __fastcall sub_14007B8C0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 3ui64);
		if ((int)result >= 0)
			return sub_14007B430(a1, v6, a3 + 2);
	}
	return result;
}
// 14007B914: variable 'v6' is possibly undefined

