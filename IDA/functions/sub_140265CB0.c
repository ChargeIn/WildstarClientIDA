#include "../winhttp.h"

//----- (0000000140265CB0) ----------------------------------------------------
__int64 __fastcall sub_140265CB0(_DWORD* a1, float* a2, int a3)
{
	float* i; // r10
	__int64 result; // rax

	for (i = &a2[4 * a3]; a2 < i; ++a1)
	{
		if (a1)
		{
			result = *(unsigned __int8*)a1;
			*a1 = result | ((int)(float)((float)(fmaxf(0.0, fminf(*a2, 1.0)) * 16777215.0) + 0.5) << 8);
			*(_BYTE*)a1 = 0;
		}
		a2 += 4;
	}
	return result;
}

