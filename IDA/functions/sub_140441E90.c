#include "../winhttp.h"

//----- (0000000140441E90) ----------------------------------------------------
__int64 __fastcall sub_140441E90(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rdx
	__int64 v5; // rsi
	__int64 v6; // rdi

	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 5);
	if (v5 > 0)
	{
		v6 = a1 + 48;
		do
		{
			sub_140441760(a3, v6 - 48);
			sub_1404413B0(a3 + 16, v6 - 32);
			sub_140441680(a3 + 48, v6);
			--v5;
			a3 += 80i64;
			v6 += 80i64;
		} while (v5 > 0);
	}
	return a3;
}

