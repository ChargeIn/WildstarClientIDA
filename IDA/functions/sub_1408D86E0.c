#include "../winhttp.h"

//----- (00000001408D86E0) ----------------------------------------------------
void __fastcall sub_1408D86E0(float* a1, __int64 a2, __int64 a3, int a4)
{
	float v4; // xmm6_4
	float v9; // xmm9_4
	float v10; // xmm7_4
	float v11; // xmm8_4
	float v12; // xmm13_4
	float v13; // xmm10_4
	float v14; // xmm14_4
	float v15; // xmm15_4
	float i; // xmm12_4
	float v17; // xmm0_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	int v20; // edx
	float v21; // xmm0_4
	float v22; // xmm2_4
	float v23; // xmm1_4
	float v24; // xmm1_4
	float v25; // [rsp+E0h] [rbp+8h]
	float v26; // [rsp+F8h] [rbp+20h]

	v4 = a1[2];
	v9 = a1[16];
	v10 = a1[17];
	v11 = a1[19];
	v12 = a1[4];
	v13 = a1[18];
	v26 = a1[7];
	v14 = a1[5];
	v15 = a1[6];
	v25 = a1[8];
	for (i = sub_1408FFA00(2.0, (float)-v4); a4; *(float*)(a3 - 4) = v24 * a1[22])
	{
		--a4;
		a2 += 4i64;
		v17 = a1[12] * *(float*)(a2 - 4);
		a1[13] = v17;
		v18 = (float)(v17 * 8388607.0) * i;
		if (v18 <= 0.0)
			v19 = v18 - 0.5;
		else
			v19 = v18 + 0.5;
		v20 = (int)v19;
		v21 = a1[15] - 1.0;
		v22 = (float)(v20 << (int)v4) * 0.0000001192093;
		if (v21 <= 0.0)
			v21 = a1[3];
		else
			v22 = a1[14];
		a1[15] = v21;
		a1[14] = v22;
		a3 += 4i64;
		v23 = (float)((float)(v9 * v14) + (float)(v12 * v22)) + (float)(v10 * v15);
		v10 = v9;
		v9 = v22;
		v24 = (float)(v23 - (float)(v13 * v26)) - (float)(v11 * v25);
		v11 = v13;
		v13 = v24;
	}
	a1[16] = v9;
	a1[17] = v10;
	a1[18] = v13;
	a1[19] = v11;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

