#include "../winhttp.h"

//----- (0000000140281BC0) ----------------------------------------------------
__int64 __fastcall sub_140281BC0(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // r10
	int v5; // edx
	int v6; // r9d

	v4 = a2;
	v5 = *(_DWORD*)(a1 + 4i64 * a2 + 6468);
	if (a4)
	{
		v6 = a4 - 1;
		if (v6)
		{
			if (v6 == 1 && (v5 & 0x80u) == 0)
				return 0i64;
		}
		else if ((v5 & 0x40) == 0)
		{
			return 0i64;
		}
	}
	else if ((v5 & 0x20) == 0)
	{
		return 0i64;
	}
	if (((a3 - 3) & 0xFFFFFFFD) != 0)
		return 1i64;
	if (!dword_140AE6450[v4])
		return 0i64;
	if (!dword_140AE64C0[v4])
		return (v5 & 0x4000) != 0;
	return (v5 & 0x10000) != 0;
}
// 140AE6450: using guessed type int dword_140AE6450[28];
// 140AE64C0: using guessed type int dword_140AE64C0[56];

