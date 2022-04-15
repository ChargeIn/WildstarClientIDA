#include "../winhttp.h"

//----- (00000001408A9E60) ----------------------------------------------------
__int64 __fastcall sub_1408A9E60(float* a1, float* a2, unsigned int a3)
{
	float v3; // xmm5_4
	int v5; // edx
	float v6; // xmm2_4
	float v7; // xmm6_4
	float v8; // xmm11_4
	float v9; // xmm1_4
	float v10; // xmm8_4
	float v11; // xmm0_4
	float v12; // xmm4_4
	float v13; // xmm8_4
	float v14; // xmm0_4
	float v15; // xmm9_4
	float v16; // xmm1_4
	__int64 result; // rax
	float* v18; // r8
	float v19; // xmm12_4
	float v20; // xmm1_4
	float v21; // xmm5_4
	float v22; // xmm1_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm2_4
	int v26; // eax
	int v27; // ecx
	float v28; // xmm1_4
	float v29; // xmm1_4
	float v30; // xmm4_4
	float v31; // xmm2_4
	float v32; // xmm5_4
	float v33; // xmm2_4
	float v34; // xmm0_4
	float v35; // xmm1_4
	int v36; // eax
	int v37; // ecx
	float v38; // xmm2_4
	float v39; // xmm2_4
	float v40; // xmm4_4
	float v41; // xmm1_4
	float v42; // xmm5_4
	float v43; // xmm1_4
	float v44; // xmm0_4
	float v45; // xmm2_4
	int v46; // eax
	int v47; // ecx
	float v48; // xmm1_4
	float v49; // xmm1_4
	float v50; // xmm4_4
	float v51; // xmm1_4
	float v52; // xmm1_4
	float v53; // xmm1_4
	float v54; // xmm0_4
	float v55; // xmm2_4
	int v56; // eax
	int v57; // ecx
	float v58; // xmm1_4
	float v59; // xmm1_4
	float v60; // xmm1_4
	float v61; // xmm1_4
	float v62; // xmm1_4
	float v63; // xmm0_4
	float v64; // xmm2_4
	int v65; // eax
	int v66; // ecx
	float v67; // xmm1_4
	float v68; // xmm1_4

	v3 = a1[4];
	v5 = dword_140C61BFC;
	v6 = -(float)(a1[1] * 0.0099999998);
	v7 = 1.0 / (float)(int)a3;
	v8 = (float)(a1[3] - v3) * v7;
	if (v6 >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v9 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v9 = 27866352.0;
			v5 = dword_140C61BFC | 1;
			dword_140C61BFC |= 1u;
			dword_140C61BF8 = 1272224376;
		}
		v10 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v6) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v9 * v6) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v9 * v6) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v9 = *(float*)&dword_140C61BF8;
		v10 = 0.0;
	}
	v11 = -(float)(a1[2] * 0.0099999998);
	if (v11 >= -37.0)
	{
		if ((v5 & 1) == 0)
		{
			v9 = 27866352.0;
			dword_140C61BFC = v5 | 1;
			dword_140C61BF8 = 1272224376;
		}
		v12 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v11) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v9 * v11) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v9 * v11) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v12 = 0.0;
	}
	v13 = (float)(v10 - v12) * v7;
	v14 = (float)(a1[5] * 0.029999999) + 2.0;
	if (v14 >= -37.0)
		v15 = (float)((float)((float)((float)(COERCE_FLOAT(
			((int)(float)((float)(v14 * 8388608.0) + 1065353200.0) & 0x7FFFFF)
			+ 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v14 * 8388608.0) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
		* COERCE_FLOAT((int)(float)((float)(v14 * 8388608.0) + 1065353200.0) & 0xFF800000);
	else
		v15 = 0.0;
	if ((float)(v15 * -0.2) >= -37.0)
		v16 = (float)((float)((float)((float)(COERCE_FLOAT(
			((int)(float)((float)((float)(v15 * -0.2) * 12102203.0) + 1065353200.0) & 0x7FFFFF)
			+ 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(
				((int)(float)((float)((float)(v15 * -0.2) * 12102203.0) + 1065353200.0) & 0x7FFFFF)
				+ 1065353216))
			+ 0.65304345)
		* COERCE_FLOAT((int)(float)((float)((float)(v15 * -0.2) * 12102203.0) + 1065353200.0) & 0xFF800000);
	else
		v16 = 0.0;
	result = a3;
	v18 = &a2[a3];
	v19 = -0.2 / (float)(1.0 - v16);
	if (a2 < v18)
	{
		result = ((char*)v18 - (char*)a2 + 3) / 4;
		if (result >= 4)
		{
			do
			{
				v20 = v3;
				v21 = v3 + v8;
				v22 = v20 * *a2;
				if (v22 == -0.2)
				{
					v28 = (float)(1.0 / v15) + v19;
				}
				else
				{
					v23 = v22 - -0.2;
					v24 = -(float)(v23 * v15);
					if (v24 >= -37.0)
					{
						v26 = (int)(float)((float)(v24 * 12102203.0) + 1065353200.0);
						v27 = v26 & 0x7FFFFF;
						result = v26 & 0xFF800000;
						v25 = (float)((float)((float)((float)(COERCE_FLOAT(v27 + 1065353216) * 0.32518977) + 0.020805772)
							* COERCE_FLOAT(v27 + 1065353216))
							+ 0.65304345)
							* *(float*)&result;
					}
					else
					{
						v25 = 0.0;
					}
					v28 = (float)(v23 / (float)(1.0 - v25)) + v19;
				}
				if (v28 < 1.0)
				{
					if (v28 <= -1.0)
						v28 = -1.0;
				}
				else
				{
					v28 = 1.0;
				}
				v29 = v28 * v12;
				v30 = v12 + v13;
				v31 = v21 * a2[1];
				*a2 = v29;
				v32 = v21 + v8;
				if (v31 == -0.2)
				{
					v38 = (float)(1.0 / v15) + v19;
				}
				else
				{
					v33 = v31 - -0.2;
					v34 = -(float)(v33 * v15);
					if (v34 >= -37.0)
					{
						v36 = (int)(float)((float)(v34 * 12102203.0) + 1065353200.0);
						v37 = v36 & 0x7FFFFF;
						result = v36 & 0xFF800000;
						v35 = (float)((float)((float)((float)(COERCE_FLOAT(v37 + 1065353216) * 0.32518977) + 0.020805772)
							* COERCE_FLOAT(v37 + 1065353216))
							+ 0.65304345)
							* *(float*)&result;
					}
					else
					{
						v35 = 0.0;
					}
					v38 = (float)(v33 / (float)(1.0 - v35)) + v19;
				}
				if (v38 < 1.0)
				{
					if (v38 <= -1.0)
						v38 = -1.0;
				}
				else
				{
					v38 = 1.0;
				}
				v39 = v38 * v30;
				v40 = v30 + v13;
				v41 = v32 * a2[2];
				a2[1] = v39;
				v42 = v32 + v8;
				if (v41 == -0.2)
				{
					v48 = (float)(1.0 / v15) + v19;
				}
				else
				{
					v43 = v41 - -0.2;
					v44 = -(float)(v43 * v15);
					if (v44 >= -37.0)
					{
						v46 = (int)(float)((float)(v44 * 12102203.0) + 1065353200.0);
						v47 = v46 & 0x7FFFFF;
						result = v46 & 0xFF800000;
						v45 = (float)((float)((float)((float)(COERCE_FLOAT(v47 + 1065353216) * 0.32518977) + 0.020805772)
							* COERCE_FLOAT(v47 + 1065353216))
							+ 0.65304345)
							* *(float*)&result;
					}
					else
					{
						v45 = 0.0;
					}
					v48 = (float)(v43 / (float)(1.0 - v45)) + v19;
				}
				if (v48 < 1.0)
				{
					if (v48 <= -1.0)
						v48 = -1.0;
				}
				else
				{
					v48 = 1.0;
				}
				v49 = v48 * v40;
				v50 = v40 + v13;
				a2[2] = v49;
				v51 = v42;
				v3 = v42 + v8;
				v52 = v51 * a2[3];
				if (v52 == -0.2)
				{
					v58 = (float)(1.0 / v15) + v19;
				}
				else
				{
					v53 = v52 - -0.2;
					v54 = -(float)(v53 * v15);
					if (v54 >= -37.0)
					{
						v56 = (int)(float)((float)(v54 * 12102203.0) + 1065353200.0);
						v57 = v56 & 0x7FFFFF;
						result = v56 & 0xFF800000;
						v55 = (float)((float)((float)((float)(COERCE_FLOAT(v57 + 1065353216) * 0.32518977) + 0.020805772)
							* COERCE_FLOAT(v57 + 1065353216))
							+ 0.65304345)
							* *(float*)&result;
					}
					else
					{
						v55 = 0.0;
					}
					v58 = (float)(v53 / (float)(1.0 - v55)) + v19;
				}
				if (v58 < 1.0)
				{
					if (v58 <= -1.0)
						v58 = -1.0;
				}
				else
				{
					v58 = 1.0;
				}
				v59 = v58 * v50;
				a2 += 4;
				v12 = v50 + v13;
				*(a2 - 1) = v59;
			} while ((__int64)a2 < (__int64)(v18 - 3));
		}
		for (; a2 < v18; *(a2 - 1) = v68)
		{
			v60 = v3;
			v3 = v3 + v8;
			v61 = v60 * *a2;
			if (v61 == -0.2)
			{
				v67 = (float)(1.0 / v15) + v19;
			}
			else
			{
				v62 = v61 - -0.2;
				v63 = -(float)(v62 * v15);
				if (v63 >= -37.0)
				{
					v65 = (int)(float)((float)(v63 * 12102203.0) + 1065353200.0);
					v66 = v65 & 0x7FFFFF;
					result = v65 & 0xFF800000;
					v64 = (float)((float)((float)((float)(COERCE_FLOAT(v66 + 1065353216) * 0.32518977) + 0.020805772)
						* COERCE_FLOAT(v66 + 1065353216))
						+ 0.65304345)
						* *(float*)&result;
				}
				else
				{
					v64 = 0.0;
				}
				v67 = (float)(v62 / (float)(1.0 - v64)) + v19;
			}
			if (v67 < 1.0)
			{
				if (v67 <= -1.0)
					v67 = -1.0;
			}
			else
			{
				v67 = 1.0;
			}
			v68 = v67 * v12;
			++a2;
			v12 = v12 + v13;
		}
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

