#include "../winhttp.h"

//----- (00000001408D58A0) ----------------------------------------------------
void __fastcall sub_1408D58A0(float* a1, __int64 a2, __int64 a3, int a4)
{
	float v4; // xmm5_4
	float v5; // xmm3_4
	float v6; // xmm4_4
	float v7; // xmm7_4
	float v8; // xmm8_4
	float v9; // xmm6_4
	float v10; // xmm11_4
	float v11; // xmm9_4
	float v12; // xmm10_4
	__int64 v13; // rdx
	float v14; // xmm1_4
	float v15; // xmm2_4
	float v16; // xmm2_4

	v4 = a1[6];
	v5 = a1[7];
	v6 = a1[9];
	v7 = *a1;
	v8 = a1[1];
	v9 = a1[8];
	v10 = a1[4];
	v11 = a1[2];
	v12 = a1[3];
	if (a4)
	{
		v13 = a2 - a3;
		do
		{
			v14 = *(float*)(v13 + a3);
			a3 += 4i64;
			v15 = (float)((float)(v4 * v8) + (float)(v7 * v14)) + (float)(v5 * v11);
			v5 = v4;
			v4 = v14;
			v16 = (float)(v15 - (float)(v9 * v12)) - (float)(v6 * v10);
			v6 = v9;
			*(float*)(a3 - 4) = v16;
			v9 = v16;
			--a4;
		} while (a4);
	}
	a1[6] = v4;
	a1[7] = v5;
	a1[8] = v9;
	a1[9] = v6;
}

