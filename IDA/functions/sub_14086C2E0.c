#include "../winhttp.h"

//----- (000000014086C2E0) ----------------------------------------------------
float __fastcall sub_14086C2E0(float* a1)
{
	float v1; // xmm0_4
	float v2; // xmm6_4

	v1 = 0.0;
	v2 = a1[2] - a1[1];
	if (v2 != 0.0)
		v1 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v2;
	return (float)(v1 + a1[1]) + *a1;
}

