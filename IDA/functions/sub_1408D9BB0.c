//----- (00000001408D9BB0) ----------------------------------------------------
double* __fastcall sub_1408D9BB0(
	int a1,
	double a2,
	double a3,
	double a4,
	double a5,
	double a6,
	char a7,
	char a8,
	double a9,
	double* a10)
{
	double v11; // xmm6_8
	double v12; // xmm7_8
	double v13; // xmm6_8
	double v14; // xmm11_8
	double v15; // xmm0_8
	double v16; // xmm12_8
	double v17; // xmm8_8
	double v18; // xmm10_8
	double v19; // xmm9_8
	double v20; // xmm0_8
	__m128d v21; // xmm11
	double v22; // xmm0_8
	double v23; // xmm15_8
	double v24; // xmm2_8
	bool v25; // cc
	double v26; // xmm7_8
	double v27; // xmm4_8
	double v28; // xmm11_8
	double v29; // xmm5_8
	double v30; // xmm4_8
	double v31; // xmm1_8
	double* result; // rax
	double v33; // xmm2_8
	double v34; // xmm15_8
	double v35; // xmm4_8
	double v36; // xmm0_8
	double v37; // xmm5_8
	double v38; // xmm12_8
	double v39; // xmm8_8
	double v40; // xmm15_8
	double v41; // xmm10_8
	double v42; // xmm3_8
	double v43; // xmm14_8
	double v44; // xmm9_8
	double v45; // [rsp+F0h] [rbp+28h]
	double v46; // [rsp+F8h] [rbp+30h]

	v11 = a2 / (double)a1;
	if (v11 >= 0.0002083333333333333)
	{
		if (v11 > 0.4583333333333333)
			v11 = 0.4583333333333333;
	}
	else
	{
		v11 = 0.0002083333333333333;
	}
	v12 = a6;
	v13 = v11 * 3.141592653589793;
	v14 = sub_1408FFA00(10.0, a6 * 0.05);
	v15 = v13;
	if (a6 <= 0.0)
	{
		sub_1409005C8(v13);
		v13 = v13 * a9;
	}
	else
	{
		v15 = v13 * a9;
		sub_1409005C8(v13 * a9);
	}
	v16 = v15;
	v17 = v15 * v15;
	sub_1409005C8(v13);
	v18 = 1.0;
	v19 = v13 * v13;
	if (a6 <= 0.0)
	{
		v46 = 1.0;
		v20 = sqrt(v14);
		v18 = 1.0 / v20 * (1.0 / v20);
	}
	else
	{
		v46 = v14;
	}
	v21 = (__m128d)(unsigned __int64)qword_140C13350;
	if (a8)
		v12 = *(double*)&qword_140C13358 * v12 * *(double*)&qword_140C13350;
	v22 = sub_1408FFA00(10.0, v12 * 0.05);
	v23 = a4 * 0.5;
	v24 = a5 * 0.5;
	v21.m128d_f64[0] = v21.m128d_f64[0] * v12;
	v25 = v12 <= 0.0;
	v26 = 1.0;
	*(_QWORD*)&v27 = *(_OWORD*)&_mm_sqrt_pd(_mm_and_pd(v21, (__m128d)xmmword_140B7B510));
	if (v25)
	{
		v45 = 1.0;
		v31 = 1.0;
		v26 = 1.0 / sqrt(v22);
		v29 = v27 * v23;
		v30 = v27 * v24;
		v28 = v26 * v26;
	}
	else
	{
		v28 = 1.0;
		v29 = v27 * v24;
		v30 = v27 * v23;
		v45 = sqrt(v22);
		v31 = v22;
	}
	result = a10;
	v33 = a3 * -2.0;
	v34 = v46 - v46 * a3 + v31 * a3;
	v35 = ((v30 + 1.414213562373095) * a3 * v45 + 1.0 - a3) * v16;
	v36 = v34 * v17;
	v37 = ((v29 + 1.414213562373095) * a3 * v26 + 1.0 - a3) * v13;
	v38 = v35 + a3 + v34 * v17;
	*a10 = v38;
	v39 = v17 * 2.0 * v34 + a3 * -2.0;
	a10[1] = v39;
	v40 = a3 - v35 + v36;
	a10[2] = v40;
	v41 = v18 - v18 * a3 + v28 * a3;
	v42 = v37 + a3 + v41 * v19;
	v43 = a3 - v37 + v41 * v19;
	a10[3] = v42;
	a10[5] = v43;
	v44 = v19 * 2.0 * v41 + v33;
	a10[4] = v44;
	if (a7)
	{
		a10[3] = 1.0;
		*a10 = v38 * (1.0 / v42);
		a10[1] = v39 * (1.0 / v42);
		a10[2] = v40 * (1.0 / v42);
		a10[4] = v44 * (1.0 / v42);
		a10[5] = v43 * (1.0 / v42);
	}
	return result;
}
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140C13350: using guessed type __int64 qword_140C13350;
// 140C13358: using guessed type __int64 qword_140C13358;

