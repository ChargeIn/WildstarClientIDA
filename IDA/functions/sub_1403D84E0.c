#include "../winhttp.h"

//----- (00000001403D84E0) ----------------------------------------------------
_DWORD* __fastcall sub_1403D84E0(_DWORD* a1, _DWORD* a2, _DWORD* a3)
{
	for (; a1 != a2; a3 += 18)
	{
		if (a3)
		{
			*a3 = *a1;
			a3[1] = a1[1];
			a3[2] = a1[2];
			a3[3] = a1[3];
			a3[4] = a1[4];
			a3[5] = a1[5];
			a3[6] = a1[6];
			a3[7] = a1[7];
			a3[8] = a1[8];
			a3[9] = a1[9];
			a3[10] = a1[10];
			a3[11] = a1[11];
			a3[12] = a1[12];
			a3[13] = a1[13];
			a3[14] = a1[14];
			a3[15] = a1[15];
			a3[16] = a1[16];
			a3[17] = a1[17];
		}
		a1 += 18;
	}
	return a3;
}

