//----- (00000001408D9F60) ----------------------------------------------------
double* __fastcall sub_1408D9F60(
	int a1,
	double a2,
	double a3,
	double a4,
	double a5,
	double a6,
	char a7,
	char a8,
	double* a9)
{
	double v10; // xmm8_8
	double v11; // xmm9_8
	double v12; // xmm11_8
	double v13; // xmm0_8
	double v14; // xmm7_8
	double v15; // xmm15_8
	double v16; // xmm12_8
	double v17; // xmm0_8
	__m128d v18; // xmm11
	double v19; // xmm0_8
	double v20; // xmm13_8
	double v21; // xmm2_8
	double v22; // xmm5_8
	double v23; // xmm11_8
	double v24; // xmm14_8
	double v25; // xmm3_8
	double v26; // xmm9_8
	double v27; // xmm5_8
	double v28; // xmm5_8
	double v29; // xmm9_8
	double v30; // xmm10_8
	double* result; // rax
	double v32; // xmm2_8
	double v33; // xmm12_8
	double v34; // xmm5_8
	double v35; // xmm8_8
	double v36; // xmm13_8
	double v37; // xmm9_8
	double v38; // xmm12_8
	double v39; // xmm7_8
	double v40; // xmm4_8
	double v41; // xmm10_8
	double v42; // xmm7_8
	double v43; // [rsp+D8h] [rbp+10h]
	double v44; // [rsp+F8h] [rbp+30h]

	v10 = a2 / (double)a1;
	if (v10 >= 0.0002083333333333333)
	{
		if (v10 > 0.4583333333333333)
			v10 = 0.4583333333333333;
	}
	else
	{
		v10 = 0.0002083333333333333;
	}
	v11 = a6;
	v12 = sub_1408FFA00(10.0, a6 * 0.05);
	v13 = 1.570796326794897 - v10 * 3.141592653589793;
	sub_1409005C8(v13);
	v14 = 1.0;
	v43 = v13;
	v15 = v13 * v13;
	if (a6 <= 0.0)
	{
		v16 = 1.0;
		v17 = sqrt(v12);
		v14 = 1.0 / v17 * (1.0 / v17);
	}
	else
	{
		v16 = v12;
	}
	v18 = (__m128d)(unsigned __int64)qword_140C13350;
	if (a8)
		v11 = *(double*)&qword_140C13358 * a6 * *(double*)&qword_140C13350;
	v19 = sub_1408FFA00(10.0, v11 * 0.05);
	v20 = a4 * 0.5;
	v21 = a5 * 0.5;
	v18.m128d_f64[0] = v18.m128d_f64[0] * v11;
	*(_QWORD*)&v22 = *(_OWORD*)&_mm_sqrt_pd(_mm_and_pd(v18, (__m128d)xmmword_140B7B510));
	v23 = 1.0;
	if (v11 <= 0.0)
	{
		v44 = 1.0;
		v25 = 1.0;
		v23 = 1.0 / sqrt(v19);
		v26 = v22 * v20;
		v27 = v22 * v21;
		v24 = v23 * v23;
	}
	else
	{
		v24 = 1.0;
		v25 = v19;
		v26 = v22 * v21;
		v27 = v22 * v20;
		v44 = sqrt(v19);
	}
	v28 = v27 + 1.414213562373095;
	v29 = v26 + 1.414213562373095;
	v30 = a3 * (1.0 - v10);
	if (v30 < 0.015)
		v30 = 0.015;
	result = a9;
	v32 = v30 * -2.0;
	v33 = v16 - v16 * v30 + v25 * v30;
	v34 = (v28 * v30 * v44 + 1.0 - v30) * v43;
	v35 = v34 + v30 + v33 * v15;
	v36 = v30 - v34 + v33 * v15;
	*a9 = v35;
	v37 = (v29 * v30 * v23 + 1.0 - v30) * v43;
	v38 = -(v33 * (v15 * 2.0) + v30 * -2.0);
	a9[2] = v36;
	v39 = v14 - v14 * v30 + v24 * v30;
	a9[1] = v38;
	v40 = v37 + v30 + v39 * v15;
	v41 = v30 - v37 + v39 * v15;
	v42 = -(v39 * (v15 * 2.0) + v32);
	a9[4] = v42;
	a9[3] = v40;
	a9[5] = v41;
	if (a7)
	{
		a9[3] = 1.0;
		*a9 = v35 * (1.0 / v40);
		a9[1] = v38 * (1.0 / v40);
		a9[2] = v36 * (1.0 / v40);
		a9[4] = v42 * (1.0 / v40);
		a9[5] = v41 * (1.0 / v40);
	}
	return result;
}
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140C13350: using guessed type __int64 qword_140C13350;
// 140C13358: using guessed type __int64 qword_140C13358;

