#include "../winhttp.h"

//----- (000000014089D3F0) ----------------------------------------------------
void __fastcall sub_14089D3F0(float* a1, float a2, float a3)
{
	float v4; // xmm0_4
	float v5; // xmm5_4
	float v6; // xmm4_4
	float v7; // xmm3_4

	v4 = sub_1408FD8A4((float)(a2 * 3.1415927) / a3);
	v5 = (float)(1.0 / v4) * (float)(1.0 / v4);
	v6 = (float)(1.0 / v4) * 1.4142135;
	v7 = 1.0 / (float)((float)(v6 + 1.0) + v5);
	*a1 = v7;
	a1[2] = v7;
	a1[4] = (float)((float)(1.0 - v6) + v5) * v7;
	a1[3] = (float)((float)(1.0 - v5) * 2.0) * v7;
	a1[1] = v7 * 2.0;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

