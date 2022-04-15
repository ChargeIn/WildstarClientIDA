#include "../winhttp.h"

//----- (00000001408FCCB0) ----------------------------------------------------
__m128 __fastcall sub_1408FCCB0(float a1)
{
	unsigned int v1; // edx
	int v2; // ecx
	__m128 result; // xmm0
	__int128 v4; // xmm6
	float v5; // xmm5_4
	float v6; // xmm1_4
	float v7; // xmm3_4
	float v8; // xmm6_4
	__m128d v9; // xmm0
	float v10; // xmm4_4
	__int128 v11; // xmm3
	__m128d v12; // xmm2
	float v13; // [rsp+70h] [rbp+8h]
	float v14; // [rsp+78h] [rbp+10h]

	v13 = 0.0;
	v1 = LODWORD(a1) & 0x80000000;
	v2 = (unsigned __int8)(LODWORD(a1) >> 23) - 127;
	if ((LODWORD(a1) & 0x7FFFFFFFu) > 0x7F800000)
	{
		result.m128_f32[0] = sub_1407EFD48((__int64)"acosf", 13, LODWORD(a1) | 0x400000, 1, 0, 0x21u, SLODWORD(a1), 0.0, 1);
		return result;
	}
	if (v2 < -26)
	{
		v4 = 0x3FC90FDBu;
		goto LABEL_11;
	}
	if (v2 >= 0)
	{
		if (a1 == 1.0)
			return (__m128)0i64;
		if (a1 != -1.0)
		{
			result.m128_f32[0] = sub_1407EFD48((__int64)"acosf", 13, -4194304, 1, 8, 0x21u, SLODWORD(a1), 0.0, 1);
			return result;
		}
		v4 = 0x40490FDBu;
	LABEL_11:
		sub_1407F662C(32);
		return (__m128)v4;
	}
	v5 = a1;
	if (v1)
		v5 = -a1;
	if (v2 < -1)
	{
		v7 = 0.0;
		v6 = v5 * v5;
		v14 = v5 * v5;
	}
	else
	{
		v6 = (float)(1.0 - v5) * 0.5;
		v14 = v6;
		v13 = fsqrt(v6);
		v7 = v13;
		v5 = v13;
	}
	v8 = (float)((float)((float)((float)((float)((float)(-0.013381929 - (float)(v6 * 0.0039613745)) * v6) - 0.056529868)
		* v6)
		+ 0.1841616)
		* v6)
		/ (float)(1.1049696 - (float)(v6 * 0.8364113));
	if (v2 < -1)
	{
		v12 = (__m128d)0x3FF921FB54442D18ui64;
		v12.m128d_f64[0] = 1.570796326794897 - (a1 - (6.123233995736766e-17 - (float)(v8 * a1)));
		return _mm_cvtpd_ps(v12);
	}
	else if (v1)
	{
		v9 = (__m128d)0x400921FB54442D18ui64;
		v9.m128d_f64[0] = 3.141592653589793 - ((float)(v8 * v5) - 6.123233995736766e-17 + v7) * 2.0;
		return _mm_cvtpd_ps(v9);
	}
	else
	{
		LODWORD(v10) = LODWORD(v7) & 0xFFFF0000;
		v11 = LODWORD(v14);
		*(float*)&v11 = (float)((float)((float)((float)(v14 - (float)(v10 * v10)) / (float)(v10 + v13)) * 2.0)
			+ (float)((float)(v5 * 2.0) * v8))
			+ (float)(v10 * 2.0);
		return (__m128)v11;
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

