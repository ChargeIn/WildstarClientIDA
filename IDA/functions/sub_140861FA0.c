#include "../winhttp.h"

//----- (0000000140861FA0) ----------------------------------------------------
void __fastcall sub_140861FA0(__int64 a1, int a2)
{
	int v2; // eax
	int i; // r9d

	if (a2)
	{
		v2 = *(_DWORD*)(a1 + 8);
		for (i = 0; v2; v2 &= v2 - 1)
			++i;
		sub_1407E4830(*(int**)a1, 0i64, 4i64 * (unsigned int)(a2 * i));
	}
}

