#include "../winhttp.h"

//----- (00000001408294F0) ----------------------------------------------------
float* __fastcall sub_1408294F0(float* a1, float* a2, float* a3)
{
	float v3; // xmm5_4
	float v4; // xmm3_4
	float* result; // rax
	float v6; // xmm0_4
	float v7; // xmm4_4
	float v8; // xmm4_4

	v3 = a3[2];
	v4 = *a3;
	result = a1;
	v6 = *a2;
	v7 = *a2 * a3[1];
	*a1 = (float)(v3 * a2[1]) - (float)(a3[1] * a2[2]);
	v8 = v7 - (float)(v4 * a2[1]);
	a1[1] = (float)(v4 * a2[2]) - (float)(v6 * v3);
	a1[2] = v8;
	return result;
}

