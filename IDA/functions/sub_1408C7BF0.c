#include "../winhttp.h"

//----- (00000001408C7BF0) ----------------------------------------------------
void __fastcall sub_1408C7BF0(float a1, float a2, unsigned int a3, float* a4, unsigned __int64 a5)
{
	unsigned __int64 v5; // r10
	unsigned int v6; // r8d
	int v7; // eax
	__int64 v8; // r11
	float v9; // xmm3_4
	float v10; // xmm4_4
	float v11; // xmm5_4
	int v12; // esi
	float v13; // xmm8_4
	unsigned __int64 v14; // rdi
	float v15; // xmm9_4
	float v16; // xmm2_4
	int v17; // ecx
	float v18; // xmm0_4
	int v19; // ecx
	int v20; // eax
	float v21; // xmm2_4
	float v22; // xmm1_4
	float v23; // xmm0_4
	int v24; // ecx
	float v25; // xmm2_4
	int v26; // edx
	float v27; // xmm2_4
	int v28; // ecx
	float v29; // xmm5_4
	unsigned __int64 v30; // rdx
	float v31; // xmm2_4

	v5 = a3;
	v6 = 0;
	v7 = 7032007;
	v8 = 0i64;
	v9 = (float)((float)((float)(a4[1] - *a4) * 0.0099999998) * a1) + *a4;
	v10 = (float)((float)((float)((float)(a4[4] - a4[3]) * 0.0099999998) * a2) + a4[3]) * v9;
	v11 = (float)(v9 - v10) + v9;
	if ((int)v5 >= 4)
	{
		v12 = 2;
		v13 = v11 - v10;
		v14 = a5 + 8;
		v8 = 4i64 * (((unsigned int)(v5 - 4) >> 2) + 1);
		v15 = 1.0 / (float)((int)v5 - 1);
		do
		{
			v16 = (float)(int)v6;
			v6 += 4;
			v14 += 16i64;
			v17 = 196314165 * v7 + 907633515;
			v18 = (float)v17;
			v19 = 196314165 * v17 + 907633515;
			v20 = 196314165 * v19 + 907633515;
			v21 = (float)((float)(v16 * v13) * v15) + v10;
			v22 = (float)((float)(a4[2] * 0.0099999998) * v21) * (float)(v18 * 2.3283064e-10);
			v23 = (float)v19;
			v24 = v12;
			*(float*)(v14 - 24) = v22 + v21;
			v25 = (float)(v12 - 1);
			v26 = v12 + 1;
			v12 += 4;
			*(float*)(v14 - 20) = (float)((float)((float)(a4[2] * 0.0099999998)
				* (float)((float)((float)(v25 * v13) * v15) + v10))
				* (float)(v23 * 2.3283064e-10))
				+ (float)((float)((float)(v25 * v13) * v15) + v10);
			v27 = (float)v24;
			v28 = v20;
			v7 = 196314165 * v20 + 907633515;
			*(float*)(v14 - 16) = (float)((float)((float)(a4[2] * 0.0099999998)
				* (float)((float)((float)(v27 * v13) * v15) + v10))
				* (float)((float)v28 * 2.3283064e-10))
				+ (float)((float)((float)(v27 * v13) * v15) + v10);
			*(float*)(v14 - 12) = (float)((float)((float)(a4[2] * 0.0099999998)
				* (float)((float)((float)((float)v26 * v13) * v15) + v10))
				* (float)((float)v7 * 2.3283064e-10))
				+ (float)((float)((float)((float)v26 * v13) * v15) + v10);
		} while (v6 < (int)v5 - 3);
	}
	if (v6 < (unsigned int)v5)
	{
		v29 = v11 - v10;
		v30 = a5 + 4 * v8;
		do
		{
			v31 = (float)(int)v6++;
			v30 += 4i64;
			v7 = 196314165 * v7 + 907633515;
			*(float*)(v30 - 4) = (float)((float)((float)(a4[2] * 0.0099999998)
				* (float)((float)((float)(v31 * v29) * (float)(1.0 / (float)((int)v5 - 1)))
					+ v10))
				* (float)((float)v7 * 2.3283064e-10))
				+ (float)((float)((float)(v31 * v29) * (float)(1.0 / (float)((int)v5 - 1))) + v10);
		} while (v6 < (unsigned int)v5);
	}
	sub_1408FF070(a5, v5, 4ui64, (int(__fastcall*)(unsigned __int64, char*))sub_1408C7BC0);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

