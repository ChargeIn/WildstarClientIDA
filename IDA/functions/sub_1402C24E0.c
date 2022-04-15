#include "../winhttp.h"

//----- (00000001402C24E0) ----------------------------------------------------
float __fastcall sub_1402C24E0(unsigned __int16 a1)
{
	int v1; // edx
	int v2; // eax
	float result; // xmm0_4

	v1 = a1 & 0x3FF;
	if ((a1 & 0x7C00) != 0)
	{
		v2 = (a1 >> 10) & 0x1F;
	}
	else if ((a1 & 0x3FF) != 0)
	{
		v2 = 1;
		do
		{
			LOWORD(v1) = 2 * v1;
			--v2;
		} while ((v1 & 0x400) == 0);
		v1 &= 0x3FFu;
	}
	else
	{
		v2 = -112;
	}
	LODWORD(result) = (v1 << 13) | ((v2 + 112) << 23) | (a1 << 16) & 0x80000000;
	return result;
}

