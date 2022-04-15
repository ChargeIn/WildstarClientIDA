#include "../winhttp.h"

//----- (00000001408C80E0) ----------------------------------------------------
void __fastcall sub_1408C80E0(int a1, float* a2, unsigned __int64 a3)
{
	float v3; // xmm4_4
	unsigned int v4; // r9d
	unsigned __int64 v6; // r10
	__int64 v7; // rdi
	int v8; // eax
	unsigned __int64 v9; // rbx
	unsigned int v10; // ecx
	__int64 v11; // r8
	int v12; // ecx
	float v13; // xmm0_4
	int v14; // ecx
	float v15; // xmm3_4
	float v16; // xmm0_4
	int v17; // ecx
	float v18; // xmm2_4
	float v19; // xmm3_4
	unsigned __int64 v20; // r8
	__int64 v21; // r9
	float v22; // xmm2_4

	v3 = a2[6];
	v4 = 0;
	v6 = (unsigned int)a1;
	v7 = 0i64;
	v8 = 3072007;
	if (a1 >= 4)
	{
		v9 = a3 + 8;
		v10 = ((unsigned int)(a1 - 4) >> 2) + 1;
		v11 = v10;
		v4 = 4 * v10;
		v7 = 4i64 * v10;
		do
		{
			v9 += 16i64;
			v12 = 196314165 * v8 + 907633515;
			v13 = (float)v12;
			v14 = 196314165 * v12 + 907633515;
			v15 = v3 * (float)(a2[5] * 0.0099999998);
			*(float*)(v9 - 24) = (float)((float)((float)(a2[7] * 0.0099999998) * v3) * (float)(v13 * 2.3283064e-10)) + v3;
			v16 = (float)v14;
			v17 = 196314165 * v14 + 907633515;
			v18 = v15 * (float)(a2[5] * 0.0099999998);
			v8 = 196314165 * v17 + 907633515;
			*(float*)(v9 - 20) = (float)((float)((float)(a2[7] * 0.0099999998) * v15) * (float)(v16 * 2.3283064e-10)) + v15;
			v19 = v18 * (float)(a2[5] * 0.0099999998);
			*(float*)(v9 - 16) = (float)((float)((float)(a2[7] * 0.0099999998) * v18) * (float)((float)v17 * 2.3283064e-10))
				+ v18;
			v3 = v19 * (float)(a2[5] * 0.0099999998);
			*(float*)(v9 - 12) = (float)((float)((float)(a2[7] * 0.0099999998) * v19) * (float)((float)v8 * 2.3283064e-10))
				+ v19;
			--v11;
		} while (v11);
	}
	if (v4 < (unsigned int)v6)
	{
		v20 = a3 + 4 * v7;
		v21 = (unsigned int)v6 - v4;
		do
		{
			v22 = v3;
			v20 += 4i64;
			v8 = 196314165 * v8 + 907633515;
			v3 = v3 * (float)(a2[5] * 0.0099999998);
			*(float*)(v20 - 4) = (float)((float)((float)(a2[7] * 0.0099999998) * v22) * (float)((float)v8 * 2.3283064e-10))
				+ v22;
			--v21;
		} while (v21);
	}
	sub_1408FF070(a3, v6, 4ui64, (int(__fastcall*)(unsigned __int64, char*))sub_1408C7BC0);
}

