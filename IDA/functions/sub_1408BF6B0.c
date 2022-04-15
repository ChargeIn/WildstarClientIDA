//----- (00000001408BF6B0) ----------------------------------------------------
void __fastcall sub_1408BF6B0(__int64 a1, int a2, __int64 a3)
{
	__int64 v4; // rsi
	double v6; // xmm6_8
	double v7; // xmm13_8
	float v8; // xmm0_4
	float v9; // xmm9_4
	float v10; // xmm1_4
	float v11; // xmm2_4
	float v12; // xmm7_4
	float v13; // xmm14_4
	float v14; // xmm4_4
	float v15; // xmm3_4
	float v16; // xmm15_4
	float v17; // xmm0_4
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
	__int64 v39; // rcx
	float v40; // [rsp+D8h] [rbp+10h]
	float v41; // [rsp+D8h] [rbp+10h]

	HIDWORD(v6) = 0;
	v4 = a2;
	*(float*)&v6 = (float)*(int*)(a1 + 84);
	*(_QWORD*)&v7 = *(unsigned int*)(a3 + 8);
	if (*(float*)&v7 >= (float)((float)(*(float*)&v6 * 0.5) * 0.89999998))
		v7 = v6;
	switch (*(_DWORD*)a3)
	{
	case 0:
		v8 = sub_1408FD8A4((float)(*(float*)&v7 * 3.1415927) / *(float*)&v6);
		v9 = 1.0;
		v10 = (float)(1.0 / v8) * (float)(1.0 / v8);
		v11 = (float)(1.0 / v8) * 1.4142135;
		v12 = 1.0 / (float)((float)(v10 + 1.0) + v11);
		v13 = (float)((float)(v10 + 1.0) - v11) * v12;
		v14 = v12;
		v15 = v12 * 2.0;
		v16 = (float)(1.0 - v10) * (float)(v12 * 2.0);
		break;
	case 1:
		v17 = sub_1408FD8A4((float)(*(float*)&v7 * 3.1415927) / *(float*)&v6);
		v9 = 1.0;
		v12 = 1.0 / (float)((float)((float)(v17 * v17) + 1.0) + (float)(v17 * 1.4142135));
		v13 = (float)((float)((float)(v17 * v17) + 1.0) - (float)(v17 * 1.4142135)) * v12;
		v14 = v12;
		v15 = v12 * -2.0;
		v16 = -(float)((float)((float)(v17 * v17) - 1.0) * (float)(v12 * -2.0));
		break;
	case 2:
		*(float*)&v7 = (float)(*(float*)&v7 * 6.2831855) / *(float*)&v6;
		v12 = sub_1408FE3D0(v7) / (float)(*(float*)(a3 + 12) * 2.0);
		v9 = v12 + 1.0;
		v40 = -v12;
		v13 = 1.0 - v12;
		v15 = 0.0;
		v16 = sub_1408FC950(v7) * -2.0;
		goto LABEL_12;
	case 3:
		*(float*)&v7 = (float)(*(float*)&v7 * 6.2831855) / *(float*)&v6;
		v12 = 1.0;
		v18 = sub_1408FE3D0(v7) / (float)(*(float*)(a3 + 12) * 2.0);
		v19 = sub_1408FC950(v7);
		v14 = 1.0;
		v9 = v18 + 1.0;
		v13 = 1.0 - v18;
		v15 = v19 * -2.0;
		v16 = v19 * -2.0;
		break;
	case 4:
		v20 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a3 + 4) * 0.025);
		*(float*)&v7 = (float)(*(float*)&v7 * 6.2831855) / *(float*)&v6;
		v21 = *(float*)&v20;
		v22 = (__m128)0x3F800000u;
		v23 = sub_1408FC950(v7);
		v22.m128_f32[0] = (float)((float)((float)(1.0 / v21) + v21) * 0.0) + 2.0;
		*(float*)&v20 = sub_1408FE3D0(v7);
		v24 = (float)(v21 + 1.0) - (float)((float)(v21 - 1.0) * v23);
		v25 = (float)((float)(v21 - 1.0) * v23) + (float)(v21 + 1.0);
		v16 = (float)((float)((float)(v21 + 1.0) * v23) + (float)(v21 - 1.0)) * -2.0;
		v15 = (float)((float)(v21 - 1.0) - (float)((float)(v21 + 1.0) * v23)) * (float)(v21 * 2.0);
		v26 = (float)(_mm_sqrt_ps(v22).m128_f32[0] * (float)(*(float*)&v20 * 0.5)) * (float)(fsqrt(v21) * 2.0);
		v9 = v25 + v26;
		v12 = (float)(v24 + v26) * v21;
		v14 = (float)(v24 - v26) * v21;
		v13 = v25 - v26;
		break;
	case 5:
		v27 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a3 + 4) * 0.025);
		*(float*)&v7 = (float)(*(float*)&v7 * 6.2831855) / *(float*)&v6;
		v28 = *(float*)&v27;
		v29 = (__m128)0x3F800000u;
		v30 = sub_1408FC950(v7);
		v29.m128_f32[0] = (float)((float)((float)(1.0 / v28) + v28) * 0.0) + 2.0;
		v31 = (float)(_mm_sqrt_ps(v29).m128_f32[0] * (float)(sub_1408FE3D0(v7) * 0.5)) * (float)(fsqrt(v28) * 2.0);
		v32 = (float)(v28 + 1.0) - (float)((float)(v28 - 1.0) * v30);
		v33 = (float)(v28 + 1.0) * v30;
		v14 = (float)((float)((float)((float)(v28 - 1.0) * v30) + (float)(v28 + 1.0)) - v31) * v28;
		v34 = v33 + (float)(v28 - 1.0);
		*(float*)&v27 = v28;
		v16 = (float)((float)(v28 - 1.0) - v33) * 2.0;
		v12 = (float)((float)((float)((float)(v28 - 1.0) * v30) + (float)(v28 + 1.0)) + v31) * v28;
		v9 = v32 + v31;
		v13 = v32 - v31;
		v15 = v34 * (float)(*(float*)&v27 * -2.0);
		break;
	case 6:
		*(float*)&v7 = (float)(*(float*)&v7 * 6.2831855) / *(float*)&v6;
		v41 = sub_1408FC950(v7);
		v35 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(a3 + 4) * 0.025);
		v36 = *(float*)&v35;
		v15 = v41 * -2.0;
		v16 = v41 * -2.0;
		v37 = sub_1408FE3D0(v7) / (float)(*(float*)(a3 + 12) * 2.0);
		*(float*)&v35 = v37 / v36;
		v38 = v37 * v36;
		v13 = 1.0 - *(float*)&v35;
		v9 = *(float*)&v35 + 1.0;
		v14 = 1.0 - v38;
		v12 = v38 + 1.0;
		break;
	default:
		v12 = v40;
		v15 = v40;
		v9 = v40;
		v16 = v40;
		v13 = v40;
	LABEL_12:
		v14 = v40;
		break;
	}
	v39 = 5 * v4;
	*(float*)(a1 + 4 * v39 + 12) = (float)(1.0 / v9) * v15;
	*(float*)(a1 + 4 * v39 + 8) = (float)(1.0 / v9) * v12;
	*(float*)(a1 + 4 * v39 + 24) = -(float)((float)(1.0 / v9) * v13);
	*(float*)(a1 + 4 * v39 + 16) = (float)(1.0 / v9) * v14;
	*(float*)(a1 + 4 * v39 + 20) = -(float)((float)(1.0 / v9) * v16);
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

