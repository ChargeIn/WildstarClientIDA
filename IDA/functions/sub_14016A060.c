#include "../winhttp.h"

//----- (000000014016A060) ----------------------------------------------------
void __fastcall sub_14016A060(float* a1, float a2)
{
	float v2; // xmm2_4
	float v3; // xmm0_4
	float v4; // xmm1_4
	bool v5; // cc
	float v6; // xmm0_4

	v2 = a1[330];
	v3 = a1[328];
	v4 = a2 * a1[331];
	v5 = v2 <= v3;
	if (v2 < v3)
	{
		if (v2 < (float)(v3 - v4))
		{
			a1[328] = v3 - v4;
			return;
		}
		v5 = v2 <= v3;
	}
	if (v5 || (v6 = v3 + v4, v2 <= v6))
		a1[328] = v2;
	else
		a1[328] = v6;
}

