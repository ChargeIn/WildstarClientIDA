#include "../winhttp.h"

//----- (00000001406CB2B0) ----------------------------------------------------
__int64 __fastcall sub_1406CB2B0(__int64 a1, int a2, int* a3)
{
	int v5; // eax
	__int64 v6; // rcx

	if (a2)
		return sub_1400D2550(a1, a2, a3);
	v5 = sub_1400C3E20(a1 + 1024);
	if (v5 == 2)
	{
		sub_1403A6E00(v6);
	}
	else if (v5 != 5 && (unsigned int)(v5 - 7) > 1)
	{
		return (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
	}
	return 0i64;
}
// 1406CB2FA: variable 'v6' is possibly undefined

