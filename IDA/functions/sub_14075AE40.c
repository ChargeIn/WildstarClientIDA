#include "../winhttp.h"

//----- (000000014075AE40) ----------------------------------------------------
void __fastcall sub_14075AE40(int* a1, int* a2)
{
	__int64 v2; // rax
	__int128 v3; // xmm0

	if (a1)
	{
		if ((((unsigned __int8)a1 | (unsigned __int8)a2) & 0xF) != 0)
		{
			sub_1407DB590(a1, a2, 0x94ui64);
		}
		else
		{
			v2 = 1i64;
			do
			{
				v3 = *(_OWORD*)a2;
				a1 += 32;
				a2 += 32;
				*((_OWORD*)a1 - 8) = v3;
				*((_OWORD*)a1 - 7) = *((_OWORD*)a2 - 7);
				*((_OWORD*)a1 - 6) = *((_OWORD*)a2 - 6);
				*((_OWORD*)a1 - 5) = *((_OWORD*)a2 - 5);
				*((_OWORD*)a1 - 4) = *((_OWORD*)a2 - 4);
				*((_OWORD*)a1 - 3) = *((_OWORD*)a2 - 3);
				*((_OWORD*)a1 - 2) = *((_OWORD*)a2 - 2);
				*((_OWORD*)a1 - 1) = *((_OWORD*)a2 - 1);
				--v2;
			} while (v2);
			*(_OWORD*)a1 = *(_OWORD*)a2;
			a1[4] = a2[4];
		}
	}
}

