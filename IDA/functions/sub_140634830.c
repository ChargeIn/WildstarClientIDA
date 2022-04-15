#include "../winhttp.h"

//----- (0000000140634830) ----------------------------------------------------
__int64 __fastcall sub_140634830(int* a1, int* a2)
{
	int v2; // eax
	int v3; // r8d
	unsigned __int8 v5; // al
	unsigned __int8 v6; // r8

	v2 = *a1;
	v3 = *a2;
	if (*a1 != *a2)
		return (unsigned int)(v2 - v3);
	v2 = a1[1];
	v3 = a2[1];
	if (v2 != v3)
		return (unsigned int)(v2 - v3);
	v5 = *((_BYTE*)a1 + 12);
	v6 = *((_BYTE*)a2 + 12);
	if (v5 == v6)
		return (unsigned int)(a1[2] - a2[2]);
	else
		return v5 - (unsigned int)v6;
}

