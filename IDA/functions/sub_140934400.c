//----- (0000000140934400) ----------------------------------------------------
__m128 __fastcall sub_140934400(double a1)
{
	double v3; // xmm1_8
	unsigned __int64 v4; // rax
	__m128 result; // xmm0
	__int128 v6; // xmm6
	__int128 v7; // xmm5
	double v8; // xmm6_8
	double v9; // xmm4_8

	v3 = a1;
	v4 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
	if (*(_QWORD*)&a1 != (*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64))
		v3 = -a1;
	if (v4 <= 0x4003800000000000i64)
	{
		v9 = v3;
		if (v4 <= 0x3FF3000000000000i64)
		{
			if (v4 <= 0x3FE6000000000000i64)
			{
				if (v4 <= 0x3FDC000000000000i64)
				{
					v7 = 0i64;
					v8 = 0.0;
				}
				else
				{
					v7 = 0x3FDDAC670561BB4Fui64;
					v8 = 2.269877745296168e-17;
					v9 = (v3 * 2.0 - 1.0) / (v3 + 2.0);
				}
			}
			else
			{
				v7 = 0x3FE921FB54442D18ui64;
				v9 = (v3 - 1.0) / (v3 + 1.0);
				v8 = 3.061616997868382e-17;
			}
		}
		else
		{
			v7 = 0x3FEF730BD281F69Bui64;
			v8 = 1.3903311031231e-17;
			v9 = (v3 - 1.5) / (v3 * 1.5 + 1.0);
		}
	}
	else
	{
		if (v4 > 0x7FF0000000000000i64)
		{
			result = 0i64;
			*(double*)result.m128_u64 = sub_1407EFC20(
				(__int64)"atan",
				15,
				*(_QWORD*)&a1 | 0x8000000000000i64,
				1,
				0,
				0x21u,
				*(__int64*)&a1,
				0i64,
				1);
			return result;
		}
		if (v3 > 4.859383997932765e18)
		{
			v6 = (unsigned __int64)qword_140C5F480;
			if (*(_QWORD*)&a1 != (*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64))
			{
				*(double*)&v6 = -*(double*)&qword_140C5F480;
				*((double*)&v6 + 1) = -0.0;
			}
			sub_1407F662C(32);
			return (__m128)v6;
		}
		v7 = 0x3FF921FB54442D18ui64;
		v8 = 6.123233995736765e-17;
		v9 = -1.0 / v3;
	}
	*(double*)&v7 = *(double*)&v7
		- (((((v9 * v9 * 0.0001423169033423178 + 0.0304455919504853) * (v9 * v9) + 0.2206387807166674)
			* (v9
				* v9)
			+ 0.4476772068054975)
			* (v9
				* v9)
			+ 0.2682979205325459)
			* (v9
				* v9
				* v9)
			/ ((((v9 * v9 * 0.03895258739447422 + 0.4246025942038471) * (v9 * v9) + 1.412542599319589) * (v9 * v9)
				+ 1.825967877375071)
				* (v9
					* v9)
				+ 0.8048937615976377)
			- v8
			- v9);
	if (*(_QWORD*)&a1 != (*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64))
	{
		*(double*)&v7 = -*(double*)&v7;
		*((double*)&v7 + 1) = -*((double*)&v7 + 1);
	}
	return (__m128)v7;
}
// 140C5F480: using guessed type __int64 qword_140C5F480;

