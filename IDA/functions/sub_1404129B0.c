#include "../winhttp.h"

//----- (00000001404129B0) ----------------------------------------------------
__int64 __fastcall sub_1404129B0(_DWORD* a1, int* a2, int a3)
{
	unsigned int v5; // edi
	int* v6; // rcx
	__int64 v7; // rax
	__int128 v8; // xmm0

	v5 = 0;
	if (a2 && *a2 && !a2[1] && a2[2])
	{
		v6 = a1 + 198;
		LOBYTE(v5) = *v6 != *a2;
		if ((((unsigned __int8)v6 | (unsigned __int8)a2) & 0xF) != 0)
		{
			sub_1407DB590(v6, a2, 0x100ui64);
			a1[301] = 6;
		}
		else
		{
			v7 = 2i64;
			do
			{
				v8 = *(_OWORD*)a2;
				v6 += 32;
				a2 += 32;
				*((_OWORD*)v6 - 8) = v8;
				*((_OWORD*)v6 - 7) = *((_OWORD*)a2 - 7);
				*((_OWORD*)v6 - 6) = *((_OWORD*)a2 - 6);
				*((_OWORD*)v6 - 5) = *((_OWORD*)a2 - 5);
				*((_OWORD*)v6 - 4) = *((_OWORD*)a2 - 4);
				*((_OWORD*)v6 - 3) = *((_OWORD*)a2 - 3);
				*((_OWORD*)v6 - 2) = *((_OWORD*)a2 - 2);
				*((_OWORD*)v6 - 1) = *((_OWORD*)a2 - 1);
				--v7;
			} while (v7);
			a1[301] = 6;
		}
	}
	else if (a1[301])
	{
		v5 = 1;
		a1[198] = 0;
		a1[301] = 0;
	}
	if (a3)
	{
		a1[300] = 0;
		a1[302] = 0;
		sub_140412AD0((__int64)a1);
	}
	return v5;
}

