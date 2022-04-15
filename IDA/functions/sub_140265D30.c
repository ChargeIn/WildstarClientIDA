#include "../winhttp.h"

//----- (0000000140265D30) ----------------------------------------------------
__int64 __fastcall sub_140265D30(int* a1, float* a2, int a3)
{
	float* i; // r10
	__int64 result; // rax

	for (i = &a2[4 * a3]; a2 < i; ++a1)
	{
		if (a1)
		{
			*a1 = *(unsigned __int8*)a1 | ((int)(float)((float)(fmaxf(0.0, fminf(*a2, 1.0)) * 16777215.0) + 0.5) << 8);
			result = (unsigned int)(int)(float)((float)(fmaxf(0.0, fminf(a2[1], 1.0)) * 255.0) + 0.5);
			*(_BYTE*)a1 = result;
		}
		a2 += 4;
	}
	return result;
}

