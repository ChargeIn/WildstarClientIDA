#include "../winhttp.h"

//----- (00000001408ADE90) ----------------------------------------------------
void __fastcall sub_1408ADE90(float* a1, int a2, int a3, double a4, float a5, float a6)
{
	double v7; // xmm6_8
	double v8; // xmm13_8
	float v9; // xmm0_4
	float v10; // xmm14_4
	float v11; // xmm7_4
	float v12; // xmm3_4
	float v13; // xmm15_4
	float v14; // xmm9_4
	float v15; // xmm0_4
	float v16; // xmm4_4
	float v17; // xmm14_4
	float v18; // xmm6_4
	float v19; // xmm0_4
	double v20; // xmm0_8
	float v21; // xmm11_4
	__m128 v22; // xmm2
	float v23; // xmm7_4
	float v24; // xmm4_4
	float v25; // xmm14_4
	float v26; // xmm8_4
	double v27; // xmm0_8
	float v28; // xmm9_4
	__m128 v29; // xmm2
	float v30; // xmm6_4
	float v31; // xmm8_4
	float v32; // xmm14_4
	float v33; // xmm1_4
	float v34; // xmm3_4
	double v35; // xmm0_8
	float v36; // xmm6_4
	float v37; // xmm2_4
	float v38; // xmm2_4
	float v39; // xmm0_4
	float v40; // xmm1_4
	float v41; // xmm2_4
	float v42; // [rsp+D8h] [rbp+10h]

	HIDWORD(v7) = 0;
	*(float*)&v7 = (float)a3;
	v8 = a4;
	if (*(float*)&a4 >= (float)((float)((float)a3 * 0.5) * 0.89999998))
		v8 = v7;
	switch (a2)
	{
	case 0:
		v20 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), a5 * 0.025);
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&v7;
		v21 = *(float*)&v20;
		v22 = (__m128)0x3F800000u;
		v23 = sub_1408FC950(v8);
		v22.m128_f32[0] = (float)((float)((float)(1.0 / v21) + v21) * 0.0) + 2.0;
		*(float*)&v20 = sub_1408FE3D0(v8);
		v24 = (float)(v21 + 1.0) - (float)((float)(v21 - 1.0) * v23);
		v25 = (float)((float)(v21 - 1.0) * v23) + (float)(v21 + 1.0);
		v13 = (float)((float)((float)(v21 + 1.0) * v23) + (float)(v21 - 1.0)) * -2.0;
		v12 = (float)((float)(v21 - 1.0) - (float)((float)(v21 + 1.0) * v23)) * (float)(v21 * 2.0);
		v26 = (float)(_mm_sqrt_ps(v22).m128_f32[0] * (float)(*(float*)&v20 * 0.5)) * (float)(fsqrt(v21) * 2.0);
		v14 = v25 + v26;
		v11 = (float)(v24 + v26) * v21;
		v16 = (float)(v24 - v26) * v21;
		v17 = v25 - v26;
		break;
	case 1:
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&v7;
		v42 = sub_1408FC950(v8);
		v35 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), a5 * 0.025);
		v36 = *(float*)&v35;
		v12 = v42 * -2.0;
		v37 = sub_1408FE3D0(v8) / (float)(a6 * 2.0);
		*(float*)&v35 = v37 / v36;
		v38 = v37 * v36;
		v13 = v42 * -2.0;
		v16 = 1.0 - v38;
		v11 = v38 + 1.0;
		v17 = 1.0 - *(float*)&v35;
		v14 = *(float*)&v35 + 1.0;
		break;
	case 2:
		v27 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), a5 * 0.025);
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&v7;
		v28 = *(float*)&v27;
		v29 = (__m128)0x3F800000u;
		v30 = sub_1408FC950(v8);
		v29.m128_f32[0] = (float)((float)((float)(1.0 / v28) + v28) * 0.0) + 2.0;
		v31 = (float)(_mm_sqrt_ps(v29).m128_f32[0] * (float)(sub_1408FE3D0(v8) * 0.5)) * (float)(fsqrt(v28) * 2.0);
		v32 = (float)(v28 + 1.0) - (float)((float)(v28 - 1.0) * v30);
		v33 = (float)(v28 + 1.0) * v30;
		v16 = (float)((float)((float)((float)(v28 - 1.0) * v30) + (float)(v28 + 1.0)) - v31) * v28;
		v34 = v33 + (float)(v28 - 1.0);
		*(float*)&v27 = v28;
		v13 = (float)((float)(v28 - 1.0) - v33) * 2.0;
		v11 = (float)((float)((float)((float)(v28 - 1.0) * v30) + (float)(v28 + 1.0)) + v31) * v28;
		v14 = v32 + v31;
		v17 = v32 - v31;
		v12 = v34 * (float)(*(float*)&v27 * -2.0);
		break;
	case 4:
		v9 = sub_1408FD8A4((float)(*(float*)&v8 * 3.1415927) / *(float*)&v7);
		v10 = (float)((float)(v9 * v9) + 1.0) - (float)(v9 * 1.4142135);
		v11 = 1.0 / (float)((float)((float)(v9 * v9) + 1.0) + (float)(v9 * 1.4142135));
		v12 = v11 * -2.0;
		v13 = -(float)((float)((float)(v9 * v9) - 1.0) * (float)(v11 * -2.0));
		goto LABEL_11;
	case 5:
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&v7;
		v11 = sub_1408FE3D0(v8) / (float)(a6 * 2.0);
		v14 = v11 + 1.0;
		v15 = sub_1408FC950(v8);
		v16 = -v11;
		v12 = 0.0;
		v17 = 1.0 - v11;
		v13 = v15 * -2.0;
		break;
	case 6:
		*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) / *(float*)&v7;
		v11 = 1.0;
		v18 = sub_1408FE3D0(v8) / (float)(a6 * 2.0);
		v19 = sub_1408FC950(v8);
		v16 = 1.0;
		v14 = v18 + 1.0;
		v17 = 1.0 - v18;
		v12 = v19 * -2.0;
		v13 = v19 * -2.0;
		break;
	default:
		v39 = sub_1408FD8A4((float)(*(float*)&v8 * 3.1415927) / *(float*)&v7);
		v40 = (float)(1.0 / v39) * (float)(1.0 / v39);
		v41 = (float)(1.0 / v39) * 1.4142135;
		v10 = (float)(v40 + 1.0) - v41;
		v11 = 1.0 / (float)((float)(v40 + 1.0) + v41);
		v12 = v11 * 2.0;
		v13 = (float)(1.0 - v40) * (float)(v11 * 2.0);
	LABEL_11:
		v17 = v10 * v11;
		v14 = 1.0;
		v16 = v11;
		break;
	}
	a1[1] = (float)(1.0 / v14) * v12;
	*a1 = (float)(1.0 / v14) * v11;
	a1[4] = -(float)((float)(1.0 / v14) * v17);
	a1[2] = (float)(1.0 / v14) * v16;
	a1[3] = -(float)((float)(1.0 / v14) * v13);
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

