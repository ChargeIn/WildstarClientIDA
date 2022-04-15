#include "../winhttp.h"

//----- (00000001408EC120) ----------------------------------------------------
__int64 __fastcall sub_1408EC120(int* a1, int a2)
{
	unsigned __int8* v2; // r11
	int v3; // r9d
	int v4; // r10d
	int v5; // r8d

	v2 = (unsigned __int8*)*((_QWORD*)a1 + 1);
	v3 = *a1;
	v4 = *a1 + a2;
	v5 = *v2 >> *a1;
	if (v4 > 8)
	{
		v5 |= v2[1] << (8 - v3);
		if (v4 > 16)
		{
			v5 |= v2[2] << (16 - v3);
			if (v4 > 24)
			{
				v5 |= v2[3] << (24 - v3);
				if (v4 > 32)
				{
					if (v3)
						v5 |= v2[4] << (32 - v3);
				}
			}
		}
	}
	return dword_140C17170[a2] & (unsigned int)v5;
}
// 140C17170: using guessed type _DWORD dword_140C17170[36];

