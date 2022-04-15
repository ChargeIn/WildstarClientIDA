//----- (00000001408FE750) ----------------------------------------------------
double __fastcall sub_1408FE750(double a1)
{
	__m128d v1; // xmm2
	unsigned __int64 v2; // r10
	double result; // xmm0_8
	double v4; // xmm2_8
	double v5; // xmm4_8
	double v6; // xmm4_8
	__m128i v7; // xmm0
	double v8; // xmm2_8
	double v9; // xmm4_8
	double v10; // xmm1_8
	char v11; // al
	signed __int64 v12; // rcx
	double v13; // xmm1_8
	double v14; // xmm4_8
	double v15; // xmm2_8
	double v16; // xmm2_8
	double v17[2]; // [rsp+A0h] [rbp-58h] BYREF
	double v18[2]; // [rsp+B0h] [rbp-48h] BYREF
	int v19[14]; // [rsp+C0h] [rbp-38h] BYREF

	v1 = 0i64;
	if ((*(_QWORD*)&a1 & 0x7FF0000000000000i64) == 0x7FF0000000000000i64)
		return sub_1409027F0(a1);
	v2 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
	if ((*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFui64) <= 0x3FE921FB54442D18i64)
	{
		if ((*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFui64) >= 0x3F20000000000000i64)
		{
			v4 = a1 * a1;
			v5 = v4 * v4;
			return 1.0
				- (v4 * -0.5
					+ 1.0)
				+ v4 * -0.5
				+ (-0.00138888888888874 * (a1 * a1) + 0.04166666666666666) * (v4 * v4)
				+ (-0.0000002755731727234489 * (a1 * a1) + 0.00002480158729876704) * (v5 * v5)
				+ v5 * (v5 * v5) * (-1.138263981623609e-11 * (a1 * a1) + 0.000000002087614638237214)
				+ v4 * -0.5
				+ 1.0;
		}
		else if ((*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFui64) >= 0x3E40000000000000i64)
		{
			return 1.0 - a1 * a1 * 0.5;
		}
		else
		{
			return 1.0;
		}
	}
	if (*(_QWORD*)&a1 != v2)
		a1 = 0.0 - a1;
	if (v2 >= 0x411E848000000000i64)
	{
		sub_140903F70(a1, v17, v18, v19);
		result = v17[0];
		v14 = v18[0];
		v11 = v19[0];
	}
	else
	{
		v6 = a1;
		v1.m128d_f64[0] = a1 * 0.6366197723675814 + 0.5;
		v7 = _mm_cvttpd_epi32(v1);
		v8 = _mm_cvtepi32_pd(v7).m128d_f64[0];
		v9 = v6 - 1.570796326734126 * v8;
		v10 = 6.077100506506192e-11 * v8;
		v11 = _mm_cvtsi128_si32(v7);
		result = v9 - 6.077100506506192e-11 * v8;
		v12 = (unsigned __int64)(2i64 * *(_QWORD*)&result) >> 53;
		if ((__int64)((v2 >> 52) - v12) > 15)
		{
			v13 = v9;
			v9 = v9 - 6.077100506303966e-11 * v8;
			v10 = 2.022266248795951e-21 * v8 - (v13 - v9 - 6.077100506303966e-11 * v8);
			result = v9 - v10;
		}
		v14 = v9 - result - v10;
		if (v12 < 1010)
		{
			if (v12 <= 990)
			{
				if ((v11 & 1) == 0)
					result = 1.0;
			}
			else
			{
				v15 = result * result;
				if ((v11 & 1) != 0)
					result = result - 0.1666666666666667 * result * v15;
				else
					result = 1.0 - v15 * 0.5;
			}
			goto LABEL_24;
		}
	}
	v16 = result * result;
	if ((v11 & 1) != 0)
		result = v14
		+ result
		* v16
		* (((1.591814430448591e-10 * v16 + -0.0000000250511320680217) * v16 + 0.00000275573161037288)
			* (v16
				* v16
				* v16)
			+ (-0.0001984126983676113 * v16 + 0.00833333333333095) * v16
			+ -0.1666666666666667)
		- v16 * 0.5 * v14
		+ result;
	else
		result = ((0.00002480158729876704 * v16 + -0.00138888888888874) * v16
			+ 0.04166666666666666
			+ ((-1.138263981623609e-11 * v16 + 0.000000002087614638237214) * v16 + -0.0000002755731727234489)
			* (v16
				* v16
				* v16))
		* (v16
			* v16)
		+ 0.5 * v16
		- 1.0
		+ 1.0
		- v16 * 0.5
		- v14 * result
		- (v16 * 0.5
			- 1.0);
LABEL_24:
	if (((v11 + 1) & 2) != 0)
		return 0.0 - result;
	return result;
}
// 1408FE750: using guessed type int var_38[14];
// 1408FE750: using guessed type double var_48[2];
// 1408FE750: using guessed type double var_58[2];

