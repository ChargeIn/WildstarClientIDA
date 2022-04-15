#include "../winhttp.h"

//----- (00000001407239C0) ----------------------------------------------------
__int64 __fastcall sub_1407239C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v5; // rdx
	__int64 v6; // rdi
	__int64 v7; // rsi

	v3 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 4);
	if (v6 > 0)
	{
		v7 = a2 - a3;
		do
		{
			v3 -= 40i64;
			sub_1404956E0(v3, v7 + v3);
			--v6;
			*(_DWORD*)(v3 + 32) = *(_DWORD*)(v7 + v3 + 32);
		} while (v6 > 0);
	}
	return v3;
}

