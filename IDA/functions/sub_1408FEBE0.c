#include "../winhttp.h"

//----- (00000001408FEBE0) ----------------------------------------------------
double __fastcall sub_1408FEBE0(double result)
{
	__m128d v1; // xmm2
	unsigned __int64 v2; // r10
	char v3; // r11
	double v4; // xmm4_8
	__m128i v5; // xmm0
	double v6; // xmm2_8
	double v7; // xmm4_8
	double v8; // xmm1_8
	unsigned int v9; // eax
	signed __int64 v10; // rcx
	double v11; // xmm1_8
	double v12; // xmm4_8
	double v13; // xmm2_8
	double v14; // xmm2_8
	char v15; // [rsp+0h] [rbp-F8h]
	double v16[2]; // [rsp+A0h] [rbp-58h] BYREF
	double v17[2]; // [rsp+B0h] [rbp-48h] BYREF
	unsigned int v18[14]; // [rsp+C0h] [rbp-38h] BYREF

	v1 = 0i64;
	if ((*(_QWORD*)&result & 0x7FF0000000000000i64) == 0x7FF0000000000000i64)
		return sub_140902818(result);
	v2 = *(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFi64;
	if ((*(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFui64) <= 0x3FE921FB54442D18i64)
	{
		if ((*(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFui64) >= 0x3F20000000000000i64)
			return result
			+ result
			* (result
				* result)
			* (((1.591814430448591e-10 * (result * result) + -0.0000000250511320680217) * (result * result)
				+ 0.00000275573161037288)
				* (result
					* result
					* (result
						* result)
					* (result
						* result))
				+ (-0.0001984126983676113 * (result * result) + 0.00833333333333095) * (result * result)
				+ -0.1666666666666667);
		if ((*(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFui64) >= 0x3E40000000000000i64)
			return result - result * result * result * 0.1666666666666667;
		return result;
	}
	v3 = 0;
	if (*(_QWORD*)&result != v2)
	{
		v3 = 1;
		result = 0.0 - result;
	}
	if (v2 >= 0x411E848000000000i64)
	{
		v15 = v3;
		sub_140903F70(result, v16, v17, (int*)v18);
		v3 = v15;
		result = v16[0];
		v12 = v17[0];
		v9 = v18[0];
	}
	else
	{
		v4 = result;
		v1.m128d_f64[0] = result * 0.6366197723675814 + 0.5;
		v5 = _mm_cvttpd_epi32(v1);
		v6 = _mm_cvtepi32_pd(v5).m128d_f64[0];
		v7 = v4 - 1.570796326734126 * v6;
		v8 = 6.077100506506192e-11 * v6;
		v9 = _mm_cvtsi128_si32(v5);
		result = v7 - 6.077100506506192e-11 * v6;
		v10 = (unsigned __int64)(2i64 * *(_QWORD*)&result) >> 53;
		if ((__int64)((v2 >> 52) - v10) > 15)
		{
			v11 = v7;
			v7 = v7 - 6.077100506303966e-11 * v6;
			v8 = 2.022266248795951e-21 * v6 - (v11 - v7 - 6.077100506303966e-11 * v6);
			result = v7 - v8;
		}
		v12 = v7 - result - v8;
		if (v10 < 1010)
		{
			if (v10 <= 990)
			{
				if ((v9 & 1) != 0)
					result = 1.0;
			}
			else
			{
				v13 = result * result;
				if ((v9 & 1) != 0)
					result = 1.0 - v13 * 0.5;
				else
					result = result - 0.1666666666666667 * result * v13;
			}
			goto LABEL_23;
		}
	}
	v14 = result * result;
	if ((v9 & 1) != 0)
		result = ((0.00002480158729876704 * v14 + -0.00138888888888874) * v14
			+ 0.04166666666666666
			+ ((-1.138263981623609e-11 * v14 + 0.000000002087614638237214) * v14 + -0.0000002755731727234489)
			* (v14
				* v14
				* v14))
		* (v14
			* v14)
		+ 0.5 * v14
		- 1.0
		+ 1.0
		- v14 * 0.5
		- v12 * result
		- (v14 * 0.5
			- 1.0);
	else
		result = v12
		+ result
		* v14
		* (((1.591814430448591e-10 * v14 + -0.0000000250511320680217) * v14 + 0.00000275573161037288)
			* (v14
				* v14
				* v14)
			+ (-0.0001984126983676113 * v14 + 0.00833333333333095) * v14
			+ -0.1666666666666667)
		- v14 * 0.5 * v12
		+ result;
LABEL_23:
	if ((((unsigned __int8)(~v3 & ~(unsigned __int8)(v9 >> 1)) | (unsigned __int8)(v3 & (v9 >> 1))) & 1) == 0)
		return 0.0 - result;
	return result;
}
// 1408FEBE0: using guessed type unsigned int var_38[14];
// 1408FEBE0: using guessed type double var_48[2];
// 1408FEBE0: using guessed type double var_58[2];

