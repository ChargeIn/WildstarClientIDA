#include "../winhttp.h"

//----- (00000001408A81D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408A81D0(__m128* a1, int a2, double a3, double a4, float a5, float a6)
{
	float v7; // xmm12_4
	double v8; // xmm11_8
	float v9; // xmm7_4
	float v10; // xmm5_4
	float v11; // xmm9_4
	float v12; // xmm15_4
	float v13; // xmm14_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm2_4
	float v17; // xmm0_4
	float v18; // xmm0_4
	float v19; // xmm6_4
	float v20; // xmm0_4
	__m128 v21; // xmm14
	float v22; // xmm1_4
	int v23; // eax
	__m128 v24; // xmm1
	float v25; // xmm7_4
	float v26; // xmm9_4
	float v27; // xmm10_4
	float v28; // xmm8_4
	float v29; // xmm0_4
	float v30; // xmm5_4
	float v31; // xmm14_4
	float v32; // xmm12_4
	float v33; // xmm8_4
	__m128 v34; // xmm9
	float v35; // xmm1_4
	int v36; // eax
	__m128 v37; // xmm1
	float v38; // xmm6_4
	float v39; // xmm8_4
	float v40; // xmm14_4
	float v41; // xmm12_4
	float v42; // xmm0_4
	float v43; // xmm8_4
	float v44; // xmm6_4
	float v45; // xmm0_4
	float v46; // xmm2_4
	float v47; // xmm0_4
	float v48; // xmm2_4
	float v50; // [rsp+E8h] [rbp+10h]

	v7 = 0.0;
	v8 = a4;
	v9 = 0.0;
	v10 = 0.0;
	v11 = 0.0;
	v12 = 0.0;
	v13 = 0.0;
	if ((float)((float)(*(float*)&a3 * 0.5) * 0.89999998) < *(float*)&a4)
		v8 = a3;
	switch (a2)
	{
	case 3:
		v14 = sub_1408FD8A4((float)(*(float*)&v8 * 3.1415927) / *(float*)&a3);
		v11 = 1.0;
		v15 = (float)(1.0 / v14) * (float)(1.0 / v14);
		v16 = (float)(1.0 / v14) * 1.4142135;
		v9 = 1.0 / (float)((float)(v15 + 1.0) + v16);
		v13 = (float)((float)(v15 + 1.0) - v16) * v9;
		v10 = v9;
		v7 = v9 * 2.0;
		v12 = (float)(1.0 - v15) * (float)(v9 * 2.0);
		break;
	case 4:
		v17 = sub_1408FD8A4((float)(*(float*)&v8 * 3.1415927) / *(float*)&a3);
		v11 = 1.0;
		v9 = 1.0 / (float)((float)((float)(v17 * v17) + 1.0) + (float)(v17 * 1.4142135));
		v13 = (float)((float)((float)(v17 * v17) + 1.0) - (float)(v17 * 1.4142135)) * v9;
		v10 = v9;
		v7 = v9 * -2.0;
		v12 = -(float)((float)((float)(v17 * v17) - 1.0) * (float)(v9 * -2.0));
		break;
	case 5:
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&a3;
		v9 = sub_1408FE3D0(v8) / (float)(a6 * 2.0);
		v11 = v9 + 1.0;
		v18 = sub_1408FC950(v8);
		v10 = -v9;
		v13 = 1.0 - v9;
		v12 = v18 * -2.0;
		break;
	case 6:
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&a3;
		v9 = 1.0;
		v19 = sub_1408FE3D0(v8) / (float)(a6 * 2.0);
		v20 = sub_1408FC950(v8);
		v10 = 1.0;
		v11 = v19 + 1.0;
		v13 = 1.0 - v19;
		v7 = v20 * -2.0;
		v12 = v20 * -2.0;
		break;
	default:
		if (a2)
		{
			if (a2 == 2)
			{
				if ((float)(a5 * 0.025) >= -37.0)
				{
					if ((dword_140C61BFC & 1) != 0)
					{
						v35 = *(float*)&dword_140C61BF8;
					}
					else
					{
						v35 = 27866352.0;
						dword_140C61BF8 = 1272224376;
						dword_140C61BFC |= 1u;
					}
					v36 = (int)(float)((float)((float)(a5 * 0.025) * v35) + 1065353200.0);
					v34 = (__m128)((v36 & 0x7FFFFFu) + 1065353216);
					v34.m128_f32[0] = (float)((float)((float)((float)(COERCE_FLOAT((v36 & 0x7FFFFF) + 1065353216) * 0.32518977)
						+ 0.020805772)
						* COERCE_FLOAT((v36 & 0x7FFFFF) + 1065353216))
						+ 0.65304345)
						* COERCE_FLOAT(v36 & 0xFF800000);
				}
				else
				{
					v34 = 0i64;
				}
				*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&a3;
				v37 = (__m128)0x3F800000u;
				v38 = sub_1408FC950(v8);
				v37.m128_f32[0] = (float)((float)((float)(1.0 / v34.m128_f32[0]) + v34.m128_f32[0]) * 0.0) + 2.0;
				v39 = (float)(_mm_sqrt_ps(v37).m128_f32[0] * (float)(sub_1408FE3D0(v8) * 0.5))
					* (float)(_mm_sqrt_ps(v34).m128_f32[0] * 2.0);
				v40 = (float)(v34.m128_f32[0] + 1.0) - (float)((float)(v34.m128_f32[0] - 1.0) * v38);
				v37.m128_f32[0] = (float)(v34.m128_f32[0] + 1.0) * v38;
				v10 = (float)((float)((float)((float)(v34.m128_f32[0] - 1.0) * v38) + (float)(v34.m128_f32[0] + 1.0)) - v39)
					* v34.m128_f32[0];
				v41 = v37.m128_f32[0] + (float)(v34.m128_f32[0] - 1.0);
				v42 = v34.m128_f32[0];
				v12 = (float)((float)(v34.m128_f32[0] - 1.0) - v37.m128_f32[0]) * 2.0;
				v9 = (float)((float)((float)((float)(v34.m128_f32[0] - 1.0) * v38) + (float)(v34.m128_f32[0] + 1.0)) + v39)
					* v34.m128_f32[0];
				v11 = v40 + v39;
				v13 = v40 - v39;
				v7 = v41 * (float)(v42 * -2.0);
			}
			else if (a2 == 1)
			{
				*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&a3;
				v43 = sub_1408FC950(v8);
				if ((float)(a5 * 0.025) >= -37.0)
				{
					if ((dword_140C61BFC & 1) != 0)
					{
						v45 = *(float*)&dword_140C61BF8;
					}
					else
					{
						v45 = 27866352.0;
						dword_140C61BF8 = 1272224376;
						dword_140C61BFC |= 1u;
					}
					v44 = (float)((float)((float)((float)(COERCE_FLOAT(
						((int)(float)((float)((float)(a5 * 0.025) * v45) + 1065353200.0) & 0x7FFFFF)
						+ 1065353216)
						* 0.32518977)
						+ 0.020805772)
						* COERCE_FLOAT(
							((int)(float)((float)((float)(a5 * 0.025) * v45) + 1065353200.0) & 0x7FFFFF)
							+ 1065353216))
						+ 0.65304345)
						* COERCE_FLOAT((int)(float)((float)((float)(a5 * 0.025) * v45) + 1065353200.0) & 0xFF800000);
				}
				else
				{
					v44 = 0.0;
				}
				v7 = v43 * -2.0;
				v12 = v43 * -2.0;
				v46 = sub_1408FE3D0(v8) / (float)(a6 * 2.0);
				v47 = v46 / v44;
				v48 = v46 * v44;
				v13 = 1.0 - v47;
				v11 = v47 + 1.0;
				v10 = 1.0 - v48;
				v9 = v48 + 1.0;
			}
		}
		else
		{
			if ((float)(a5 * 0.025) >= -37.0)
			{
				if ((dword_140C61BFC & 1) != 0)
				{
					v22 = *(float*)&dword_140C61BF8;
				}
				else
				{
					v22 = 27866352.0;
					dword_140C61BF8 = 1272224376;
					dword_140C61BFC |= 1u;
				}
				v23 = (int)(float)((float)((float)(a5 * 0.025) * v22) + 1065353200.0);
				v21 = (__m128)((v23 & 0x7FFFFFu) + 1065353216);
				v21.m128_f32[0] = (float)((float)((float)((float)(COERCE_FLOAT((v23 & 0x7FFFFF) + 1065353216) * 0.32518977)
					+ 0.020805772)
					* COERCE_FLOAT((v23 & 0x7FFFFF) + 1065353216))
					+ 0.65304345)
					* COERCE_FLOAT(v23 & 0xFF800000);
			}
			else
			{
				v21 = 0i64;
			}
			v50 = v21.m128_f32[0];
			*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&a3;
			v24 = (__m128)0x3F800000u;
			v25 = sub_1408FC950(v8);
			v26 = v21.m128_f32[0] + 1.0;
			v27 = v21.m128_f32[0] - 1.0;
			v24.m128_f32[0] = (float)((float)((float)(1.0 / v21.m128_f32[0]) + v21.m128_f32[0]) * 0.0) + 2.0;
			v28 = _mm_sqrt_ps(v24).m128_f32[0];
			v29 = sub_1408FE3D0(v8);
			v24.m128_f32[0] = _mm_sqrt_ps(v21).m128_f32[0];
			v30 = (float)(v21.m128_f32[0] + 1.0) - (float)((float)(v21.m128_f32[0] - 1.0) * v25);
			v31 = (float)((float)(v21.m128_f32[0] - 1.0) * v25) + (float)(v21.m128_f32[0] + 1.0);
			v32 = v27 - (float)(v26 * v25);
			v12 = (float)((float)(v26 * v25) + v27) * -2.0;
			v33 = (float)(v28 * (float)(v29 * 0.5)) * (float)(v24.m128_f32[0] * 2.0);
			v11 = v31 + v33;
			v9 = (float)(v30 + v33) * v50;
			v10 = (float)(v30 - v33) * v50;
			v13 = v31 - v33;
			v7 = v32 * (float)(v50 * 2.0);
		}
		break;
	}
	return sub_1408A8E90(
		a1,
		(float)(1.0 / v11) * v9,
		(float)(1.0 / v11) * v7,
		(float)(1.0 / v11) * v10,
		(float)(1.0 / v11) * v12,
		(float)(1.0 / v11) * v13);
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

