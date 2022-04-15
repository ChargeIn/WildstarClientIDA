#include "../winhttp.h"

//----- (00000001408A8BF0) ----------------------------------------------------
__int64 __fastcall sub_1408A8BF0(float* a1, float* a2, unsigned int a3)
{
	float v3; // xmm5_4
	float v4; // xmm6_4
	__int64 result; // rax
	float* v6; // r9
	unsigned __int64 v7; // r8
	float v8; // xmm8_4
	float v9; // xmm7_4
	float v10; // xmm9_4
	float v11; // xmm10_4
	float v12; // xmm11_4
	float v13; // xmm13_4
	float v14; // xmm12_4
	float v15; // xmm1_4
	float v16; // xmm2_4
	float v17; // xmm0_4
	float v18; // xmm3_4
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
	float v29; // xmm0_4
	float v30; // xmm2_4
	float v31; // xmm2_4
	float v32; // xmm2_4

	v3 = a1[43];
	v4 = a1[42];
	result = a3;
	v6 = a2;
	v7 = (unsigned __int64)&a2[a3];
	v8 = a1[40];
	v9 = a1[41];
	if ((unsigned __int64)a2 < v7)
	{
		result = (__int64)(v7 - (_QWORD)a2 + 3) / 4;
		if (result >= 4)
		{
			v10 = a1[34];
			v11 = a1[32];
			v12 = a1[33];
			result = v7 - 12;
			v13 = a1[35];
			v14 = a1[36];
			do
			{
				v15 = *v6;
				v16 = v6[1];
				v17 = v12 * v8;
				v18 = *v6;
				v6 += 4;
				v19 = (float)(v18 * v11) + (float)(v9 * v10);
				v9 = *(v6 - 2);
				v20 = (float)(v16 * v11) + (float)(v8 * v10);
				v8 = *(v6 - 1);
				v21 = (float)((float)(v19 + v17) + (float)(v3 * v14)) + (float)(v13 * v4);
				*(v6 - 4) = v21;
				v22 = (float)((float)(v20 + (float)(v12 * v15)) + (float)(v4 * v14)) + (float)(v13 * v21);
				*(v6 - 3) = v22;
				v3 = (float)((float)((float)((float)(v9 * v11) + (float)(v15 * v10)) + (float)(v12 * v16)) + (float)(v21 * v14))
					+ (float)(v13 * v22);
				*(v6 - 2) = v3;
				v4 = (float)((float)((float)((float)(v8 * v11) + (float)(v16 * v10)) + (float)(v12 * v9)) + (float)(v22 * v14))
					+ (float)(v13 * v3);
				*(v6 - 1) = v4;
			} while ((__int64)v6 < result);
		}
		if ((unsigned __int64)v6 < v7)
		{
			v23 = a1[34];
			v24 = a1[32];
			v25 = a1[33];
			v26 = a1[36];
			v27 = a1[35];
			do
			{
				v28 = *v6;
				v29 = v25 * v8;
				++v6;
				v30 = (float)(v28 * v24) + (float)(v9 * v23);
				v9 = v8;
				v8 = v28;
				v31 = (float)(v30 + v29) + (float)(v3 * v26);
				v3 = v4;
				v32 = v31 + (float)(v27 * v4);
				*(v6 - 1) = v32;
				v4 = v32;
			} while ((unsigned __int64)v6 < v7);
		}
	}
	a1[40] = v8;
	a1[41] = v9;
	a1[42] = v4;
	a1[43] = v3;
	return result;
}

