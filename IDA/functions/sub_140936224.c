//----- (0000000140936224) ----------------------------------------------------
double* __fastcall sub_140936224(
	double a1,
	double a2,
	double a3,
	double a4,
	double a5,
	int* a6,
	double* a7,
	double* a8)
{
	double v9; // xmm4_8
	double v11; // xmm4_8
	int v12; // r8d
	__m128i v13; // xmm0
	int v14; // ecx
	double v15; // xmm4_8
	double v16; // xmm3_8
	double v17; // xmm6_8
	double* result; // rax
	double v19; // xmm1_8

	v9 = a1 * a3;
	if (a1 * a3 <= 0.0)
		v11 = v9 - 0.5;
	else
		v11 = v9 + 0.5;
	v12 = (int)v11;
	v13 = _mm_cvtsi32_si128((int)v11);
	v14 = (int)v11 & 0x1F;
	v15 = qword_140B7D8B0[v14];
	v16 = qword_140B7D7B0[v14];
	*a6 = (v12 - v14) / 32;
	v17 = (a1 - _mm_cvtepi32_pd(v13).m128d_f64[0] * a4) * a2;
	*a7 = v16;
	result = a8;
	v19 = (double)-v12 * a5 * a2;
	*a8 = ((((((v19 + v17) * 0.001388894908637772 + 0.008333367984342196) * (v19 + v17) + 0.04166666666622608)
		* (v19 + v17)
		+ 0.1666666666652609)
		* (v19 + v17)
		+ 0.5)
		* ((v19 + v17)
			* (v19 + v17))
		+ v19
		+ v17)
		* (v15 + v16)
		+ v15;
	return result;
}
// 140B7D7B0: using guessed type double qword_140B7D7B0[32];
// 140B7D8B0: using guessed type double qword_140B7D8B0[32];

