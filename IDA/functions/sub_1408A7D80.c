#include "../winhttp.h"

//----- (00000001408A7D80) ----------------------------------------------------
int* __fastcall sub_1408A7D80(_BYTE* a1, int* a2)
{
	int* v3; // rdx
	__int64 v5; // rax
	__int128 v6; // xmm0
	int* result; // rax

	v3 = (int*)(a1 + 8);
	if ((((unsigned __int8)a2 | (unsigned __int8)((_BYTE)a1 + 8)) & 0xF) != 0)
	{
		result = sub_1407DB590(a2, v3, 0x94ui64);
	}
	else
	{
		v5 = 1i64;
		do
		{
			v6 = *(_OWORD*)v3;
			a2 += 32;
			v3 += 32;
			*((_OWORD*)a2 - 8) = v6;
			*((_OWORD*)a2 - 7) = *((_OWORD*)v3 - 7);
			*((_OWORD*)a2 - 6) = *((_OWORD*)v3 - 6);
			*((_OWORD*)a2 - 5) = *((_OWORD*)v3 - 5);
			*((_OWORD*)a2 - 4) = *((_OWORD*)v3 - 4);
			*((_OWORD*)a2 - 3) = *((_OWORD*)v3 - 3);
			*((_OWORD*)a2 - 2) = *((_OWORD*)v3 - 2);
			*((_OWORD*)a2 - 1) = *((_OWORD*)v3 - 1);
			--v5;
		} while (v5);
		*(_OWORD*)a2 = *(_OWORD*)v3;
		result = (int*)(unsigned int)v3[4];
		a2[4] = (int)result;
	}
	a1[25] = 0;
	a1[45] = 0;
	a1[65] = 0;
	a1[85] = 0;
	a1[105] = 0;
	a1[125] = 0;
	a1[144] = 0;
	return result;
}

