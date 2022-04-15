#include "../winhttp.h"

//----- (0000000140482150) ----------------------------------------------------
_DWORD* __fastcall sub_140482150(__int64 a1, __int64 a2, _DWORD* a3)
{
	_DWORD* v3; // rsi
	__int64 v4; // rdx
	__int64 v5; // rbp
	__int64 v6; // rdi
	int** v7; // rbx

	v3 = a3;
	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 4);
	if (v5 > 0)
	{
		v6 = (__int64)(a3 + 2);
		v7 = (int**)(a1 + 16);
		do
		{
			*v3 = *((_DWORD*)v7 - 4);
			if (v7 - 1 != (int**)v6)
				sub_14001C480(v6, *v7, v7[1]);
			--v5;
			v3 += 10;
			v7 += 5;
			v6 += 40i64;
		} while (v5 > 0);
	}
	return v3;
}

