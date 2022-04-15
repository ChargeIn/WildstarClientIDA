#include "../winhttp.h"

//----- (00000001408A1640) ----------------------------------------------------
void __fastcall sub_1408A1640(unsigned int* a1, __int64 a2, unsigned int a3)
{
	unsigned int v5; // eax
	unsigned int v6; // ecx
	unsigned int v7; // ecx

	if (*(_DWORD*)(a2 + 12) == 17)
	{
		v5 = *a1;
		if (*a1)
		{
			if (v5 == -1)
			{
				*a1 = a3;
				a1[1] = a3;
			}
			else
			{
				v6 = a1[1];
				if (a3 > v6)
				{
					a1[1] = a3;
					*a1 = a3 + v5 - v6;
				}
			}
			v7 = *(unsigned __int16*)(a2 + 16) - *(unsigned __int16*)(a2 + 18);
			if (*a1 < v7)
				v7 = *a1;
			*a1 -= v7;
			sub_1408A1D50(a2);
			if (*a1)
				*(_DWORD*)(a2 + 12) = 45;
		}
	}
	else
	{
		*a1 = -1;
	}
}

