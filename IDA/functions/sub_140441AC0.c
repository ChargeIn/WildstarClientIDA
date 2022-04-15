#include "../winhttp.h"

//----- (0000000140441AC0) ----------------------------------------------------
__int64 __fastcall sub_140441AC0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rdi

	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 5);
	if (v6 > 0)
	{
		v7 = a2 + 48;
		do
		{
			v7 -= 80i64;
			a3 -= 80i64;
			sub_140441760(a3, v7 - 48);
			sub_1404413B0(a3 + 16, v7 - 32);
			sub_140441680(a3 + 48, v7);
			--v6;
		} while (v6 > 0);
	}
	return a3;
}

