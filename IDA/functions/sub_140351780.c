#include "../winhttp.h"

//----- (0000000140351780) ----------------------------------------------------
__int64 __fastcall sub_140351780(float* a1, float* a2, float* a3, float* a4)
{
	float v4; // xmm1_4
	float v5; // xmm2_4
	float v6; // xmm3_4
	int v7; // r10d
	float v9; // xmm0_4
	bool v10; // cf
	bool v11; // zf
	BOOL v12; // ecx
	__int64 result; // rax
	float v14; // xmm2_4
	float v15; // xmm3_4
	float v16; // xmm1_4
	int v17; // ecx
	float v18; // xmm2_4
	float v19; // xmm3_4
	float v20; // xmm1_4
	int v21; // ecx
	float v22; // xmm2_4
	float v23; // xmm3_4
	float v24; // xmm1_4
	int v25; // ecx
	float v26; // xmm2_4
	float v27; // xmm3_4
	float v28; // xmm1_4
	int v29; // ecx
	float v30; // xmm2_4
	float v31; // xmm3_4
	float v32; // xmm1_4

	v4 = *a1;
	v5 = *a3;
	v6 = *a2;
	v7 = 0;
	v9 = (float)(*a3 * *a4) + *a2;
	v10 = *a1 < v9;
	v11 = *a1 == v9;
	v12 = *a1 > (float)((float)(*a3 * a4[1]) + *a2);
	if (v10 || v11)
	{
		if (v12)
			a4[1] = (float)(v4 - v6) / v5;
	}
	else
	{
		if (v12)
			return 0i64;
		*a4 = (float)(v4 - v6) / v5;
	}
	v14 = *a3;
	v15 = *a2;
	v16 = a1[4];
	v17 = 0;
	LOBYTE(v17) = (float)((float)(*a3 * a4[1]) + *a2) > v16;
	if ((float)((float)(*a3 * *a4) + *a2) <= v16)
	{
		if (v17)
			a4[1] = (float)(v16 - v15) / v14;
	}
	else
	{
		if (v17)
			return 0i64;
		*a4 = (float)(v16 - v15) / v14;
	}
	v18 = a3[1];
	v19 = a2[1];
	v20 = a1[1];
	v21 = 0;
	LOBYTE(v21) = v20 > (float)((float)(v18 * a4[1]) + v19);
	if (v20 <= (float)((float)(v18 * *a4) + v19))
	{
		if (v21)
			a4[1] = (float)(v20 - v19) / v18;
	}
	else
	{
		if (v21)
			return 0i64;
		*a4 = (float)(v20 - v19) / v18;
	}
	v22 = a3[1];
	v23 = a2[1];
	v24 = a1[5];
	v25 = 0;
	LOBYTE(v25) = (float)((float)(v22 * a4[1]) + v23) > v24;
	if ((float)((float)(v22 * *a4) + v23) <= v24)
	{
		if (v25)
			a4[1] = (float)(v24 - v23) / v22;
	}
	else
	{
		if (v25)
			return 0i64;
		*a4 = (float)(v24 - v23) / v22;
	}
	v26 = a3[2];
	v27 = a2[2];
	v28 = a1[2];
	v29 = 0;
	LOBYTE(v29) = v28 > (float)((float)(v26 * a4[1]) + v27);
	if (v28 <= (float)((float)(v26 * *a4) + v27))
	{
		if (v29)
			a4[1] = (float)(v28 - v27) / v26;
	}
	else
	{
		if (v29)
			return 0i64;
		*a4 = (float)(v28 - v27) / v26;
	}
	v30 = a3[2];
	v31 = a2[2];
	v32 = a1[6];
	LOBYTE(v7) = (float)((float)(v30 * a4[1]) + v31) > v32;
	if ((float)((float)(v30 * *a4) + v31) <= v32)
	{
		if (v7)
			a4[1] = (float)(v32 - v31) / v30;
		return 1i64;
	}
	else
	{
		if (v7)
			return 0i64;
		result = 1i64;
		*a4 = (float)(v32 - v31) / v30;
	}
	return result;
}

