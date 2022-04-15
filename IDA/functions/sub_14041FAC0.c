#include "../winhttp.h"

//----- (000000014041FAC0) ----------------------------------------------------
__int64 __fastcall sub_14041FAC0(__int64 a1, float a2, unsigned int a3, unsigned int a4)
{
	unsigned int v4; // eax
	float v5; // xmm2_4
	__int64 result; // rax
	unsigned int v7; // ecx

	if (a4 < a3)
	{
		do
		{
			v4 = a3;
			a3 = a4;
			a4 = v4;
			a2 = 1.0 - a2;
		} while (v4 < a3);
	}
	v5 = (float)((float)((float)(int)(a4 - a3) * a2) + (float)(int)a3) + 0.0000099999997;
	if (v5 <= 0.0)
		return 0i64;
	v7 = -1;
	if ((int)v5 != -1)
		v7 = (int)v5;
	result = 0i64;
	if (v7)
		return v7;
	return result;
}

