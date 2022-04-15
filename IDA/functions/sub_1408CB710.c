#include "../winhttp.h"

//----- (00000001408CB710) ----------------------------------------------------
__m128 __fastcall sub_1408CB710(int a1, float a2, float a3, int a4)
{
	__m128d v4; // xmm8
	double v5; // xmm7_8
	double v6; // xmm0_8
	double v7; // xmm9_8
	double v8; // xmm9_8

	v4 = (__m128d)0x3FF0000000000000ui64;
	v5 = 1.0 - a3 * a3;
	v6 = sub_1408FFA00(10.0, (double)a1 * -3.0 / (a2 * (double)a4));
	v7 = sub_1408FF6E0(v6) * 20.0;
	v8 = v7 * sub_1408FF420(10.0) * 0.0125;
	if (v8 * v5 > 1.0)
		v5 = 1.0 / v8;
	v4.m128d_f64[0] = 1.0 - v5;
	return _mm_cvtpd_ps(_mm_sqrt_pd(v4));
}

