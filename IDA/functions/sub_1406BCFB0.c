#include "../winhttp.h"

//----- (00000001406BCFB0) ----------------------------------------------------
void __fastcall sub_1406BCFB0(__int64 a1)
{
	int v1; // edx
	float v3; // xmm6_4
	float v4; // xmm7_4
	float v5; // xmm9_4
	float v6; // xmm8_4
	double v7; // xmm0_8
	float v8; // xmm0_4

	v1 = *(_DWORD*)(a1 + 2444);
	if ((unsigned int)v1 < *(_DWORD*)(a1 + 2440))
		v1 = *(_DWORD*)(a1 + 2440);
	if ((float)((float)v1 * *(float*)(a1 + 1872)) > (float)(*(float*)&dword_140C4AD08 * 2.0))
	{
		v3 = -1.0;
		v4 = 100000.0;
		v5 = (float)(*(float*)&dword_140C4AD08 * 2.0) / (float)v1;
		v6 = *(float*)(a1 + 1876);
		*(float*)(a1 + 1872) = v5;
		do
		{
			v7 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v3);
			v8 = (float)(*(float*)&v7 - v5) * (float)(*(float*)&v7 - v5);
			if (v8 < v4)
			{
				v6 = v3;
				v4 = v8;
			}
			v3 = v3 + 0.25;
		} while (v3 <= 1.0);
		*(float*)(a1 + 1876) = v6;
	}
}
// 140C4AD08: using guessed type int dword_140C4AD08;

