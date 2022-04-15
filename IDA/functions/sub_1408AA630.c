#include "../winhttp.h"

//----- (00000001408AA630) ----------------------------------------------------
__int64 __fastcall sub_1408AA630(float* a1, float* a2, unsigned int a3)
{
	float v3; // xmm2_4
	int v5; // edx
	float v6; // xmm4_4
	float v7; // xmm1_4
	float v8; // xmm8_4
	float v9; // xmm7_4
	float v10; // xmm3_4
	float v11; // xmm6_4
	float v12; // xmm0_4
	__int64 result; // rax
	float* v14; // rcx
	float v15; // xmm6_4
	float v16; // xmm0_4
	float v17; // xmm2_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm4_4
	float v22; // xmm2_4
	float v23; // xmm4_4
	float v24; // xmm1_4
	float v25; // xmm0_4
	float v26; // xmm2_4
	float v27; // xmm0_4
	float v28; // xmm1_4
	float v29; // xmm0_4
	float v30; // xmm0_4
	float v31; // xmm0_4
	float v32; // xmm0_4
	float v33; // xmm0_4
	float v34; // xmm0_4

	v3 = a1[4];
	v5 = dword_140C61BFC;
	v6 = -(float)(a1[1] * 0.0099999998);
	v7 = 0.0;
	v8 = 1.0 / (float)(int)a3;
	v9 = (float)(a1[3] - v3) * v8;
	if (v6 >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v10 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v10 = 27866352.0;
			v5 = dword_140C61BFC | 1;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		v11 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v10 * v6) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v10 * v6) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v10 * v6) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v10 = *(float*)&dword_140C61BF8;
		v11 = 0.0;
	}
	v12 = -(float)(a1[2] * 0.0099999998);
	if (v12 >= -37.0)
	{
		if ((v5 & 1) == 0)
		{
			v10 = 27866352.0;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC = v5 | 1;
		}
		v7 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v10 * v12) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v10 * v12) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v10 * v12) + 1065353200.0) & 0xFF800000);
	}
	result = a3;
	v14 = &a2[a3];
	v15 = (float)(v11 - v7) * v8;
	if (a2 < v14)
	{
		result = (4i64 * a3 + 3) / 4;
		if (result >= 4)
		{
			result = (__int64)(v14 - 3);
			do
			{
				v16 = v3;
				v17 = v3 + v9;
				v18 = v16 * *a2;
				if (v18 < 1.0)
				{
					if (v18 <= -1.0)
						v18 = -1.0;
				}
				else
				{
					v18 = 1.0;
				}
				v19 = v18 * v7;
				v20 = v7 + v15;
				v21 = v17 * a2[1];
				*a2 = v19;
				v22 = v17 + v9;
				if (v21 < 1.0)
				{
					if (v21 <= -1.0)
						v21 = -1.0;
				}
				else
				{
					v21 = 1.0;
				}
				v23 = v21 * v20;
				v24 = v20 + v15;
				v25 = v22 * a2[2];
				a2[1] = v23;
				v26 = v22 + v9;
				if (v25 < 1.0)
				{
					if (v25 <= -1.0)
						v25 = -1.0;
				}
				else
				{
					v25 = 1.0;
				}
				v27 = v25 * v24;
				v28 = v24 + v15;
				a2[2] = v27;
				v29 = v26;
				v3 = v26 + v9;
				v30 = v29 * a2[3];
				if (v30 < 1.0)
				{
					if (v30 <= -1.0)
						v30 = -1.0;
				}
				else
				{
					v30 = 1.0;
				}
				v31 = v30 * v28;
				a2 += 4;
				v7 = v28 + v15;
				*(a2 - 1) = v31;
			} while ((__int64)a2 < result);
		}
		for (; a2 < v14; *(a2 - 1) = v34)
		{
			v32 = v3;
			v3 = v3 + v9;
			v33 = v32 * *a2;
			if (v33 < 1.0)
			{
				if (v33 <= -1.0)
					v33 = -1.0;
			}
			else
			{
				v33 = 1.0;
			}
			v34 = v33 * v7;
			++a2;
			v7 = v7 + v15;
		}
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

