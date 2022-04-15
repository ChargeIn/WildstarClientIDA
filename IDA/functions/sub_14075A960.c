#include "../winhttp.h"

//----- (000000014075A960) ----------------------------------------------------
_DWORD* __fastcall sub_14075A960(__int64 a1, __int64 a2, _DWORD* a3)
{
	unsigned __int64 v4; // rdx
	__int64 v5; // rdx
	__int64 v6; // r10
	int v7; // eax

	v4 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64) >> 3;
	v5 = (v4 >> 63) + v4;
	if (v5 > 0)
	{
		v6 = a2 - (_QWORD)a3;
		do
		{
			v7 = *(_DWORD*)((char*)a3 + v6 - 20);
			a3 -= 5;
			--v5;
			*a3 = v7;
			a3[1] = *(_DWORD*)((char*)a3 + v6 + 4);
			a3[2] = *(_DWORD*)((char*)a3 + v6 + 8);
			a3[3] = *(_DWORD*)((char*)a3 + v6 + 12);
			a3[4] = *(_DWORD*)((char*)a3 + v6 + 16);
		} while (v5 > 0);
	}
	return a3;
}

