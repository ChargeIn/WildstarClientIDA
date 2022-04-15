#include "../winhttp.h"

//----- (00000001408AE4A0) ----------------------------------------------------
__int64 __fastcall sub_1408AE4A0(float* a1, float* a2, unsigned int a3, int a4)
{
	__int64 result; // rax
	float* v5; // r10
	unsigned __int64 v6; // r11
	float v7; // xmm8_4
	float v8; // xmm7_4
	float v9; // xmm6_4
	float v10; // xmm5_4
	float v11; // xmm9_4
	float v12; // xmm10_4
	float v13; // xmm11_4
	float v14; // xmm13_4
	float v15; // xmm12_4
	float v16; // xmm1_4
	float v17; // xmm2_4
	float v18; // xmm0_4
	float v19; // xmm3_4
	float v20; // xmm4_4
	float v21; // xmm3_4
	float v22; // xmm4_4
	float v23; // xmm3_4
	float v24; // xmm4_4
	float v25; // xmm9_4
	float v26; // xmm10_4
	float v27; // xmm11_4
	float v28; // xmm1_4
	float v29; // xmm2_4
	float v30; // xmm0_4
	float v31; // xmm2_4
	float v32; // xmm2_4

	result = a3;
	v5 = a2;
	v6 = (unsigned __int64)&a2[a3];
	v7 = a1[4 * a4 + 5];
	v8 = a1[4 * a4 + 6];
	v9 = a1[4 * a4 + 7];
	v10 = a1[4 * a4 + 8];
	if ((unsigned __int64)a2 < v6)
	{
		result = (4i64 * a3 + 3) / 4;
		if (result >= 4)
		{
			v11 = a1[2];
			v12 = *a1;
			v13 = a1[1];
			result = v6 - 12;
			v14 = a1[3];
			v15 = a1[4];
			do
			{
				v16 = *v5;
				v17 = v5[1];
				v18 = v13 * v7;
				v5 += 4;
				v19 = (float)(v12 * v16) + (float)(v8 * v11);
				v8 = *(v5 - 2);
				v20 = (float)(v12 * v17) + (float)(v7 * v11);
				v7 = *(v5 - 1);
				v21 = (float)((float)(v19 + v18) + (float)(v10 * v15)) + (float)(v14 * v9);
				*(v5 - 4) = v21;
				v22 = (float)((float)(v20 + (float)(v13 * v16)) + (float)(v9 * v15)) + (float)(v14 * v21);
				*(v5 - 3) = v22;
				v10 = (float)((float)((float)((float)(v12 * v8) + (float)(v16 * v11)) + (float)(v13 * v17)) + (float)(v21 * v15))
					+ (float)(v14 * v22);
				*(v5 - 2) = v10;
				v9 = (float)((float)((float)((float)(v12 * v7) + (float)(v17 * v11)) + (float)(v13 * v8)) + (float)(v22 * v15))
					+ (float)(v14 * v10);
				*(v5 - 1) = v9;
			} while ((__int64)v5 < result);
		}
		if ((unsigned __int64)v5 < v6)
		{
			v23 = a1[2];
			v24 = *a1;
			v25 = a1[1];
			v26 = a1[4];
			v27 = a1[3];
			do
			{
				v28 = *v5++;
				v29 = (float)(v24 * v28) + (float)(v8 * v23);
				v8 = v7;
				v30 = v25 * v7;
				v7 = v28;
				v31 = (float)(v29 + v30) + (float)(v10 * v26);
				v10 = v9;
				v32 = v31 + (float)(v27 * v9);
				*(v5 - 1) = v32;
				v9 = v32;
			} while ((unsigned __int64)v5 < v6);
		}
	}
	a1[4 * a4 + 5] = v7;
	a1[4 * a4 + 6] = v8;
	a1[4 * a4 + 7] = v9;
	a1[4 * a4 + 8] = v10;
	return result;
}

