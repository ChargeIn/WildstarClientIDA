#include "../winhttp.h"

//----- (000000014075A6B0) ----------------------------------------------------
void __fastcall sub_14075A6B0(int* a1, int* a2)
{
	__int64 v2; // r8
	__int64 v4; // r9
	__int64 v6; // rdx
	__int64 v7; // rbx
	__int64 i; // rax

	if (a1 != a2)
	{
		v2 = (char*)a2 - (char*)a1;
		v4 = 0i64;
		v6 = (unsigned __int128)(((char*)a2 - (char*)a1) * (__int128)0x6666666666666667i64) >> 64;
		v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
		for (i = v7; i != 1; ++v4)
			i >>= 1;
		sub_14075A9D0(a1, (unsigned __int64)a2, v2, 2 * v4);
		if (v7 <= 16)
		{
			sub_14075AB90(a1, a2);
		}
		else
		{
			sub_14075AB90(a1, a1 + 80);
			sub_14075AD80(a1 + 80, a2);
		}
	}
}

