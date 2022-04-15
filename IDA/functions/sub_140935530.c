#include "../winhttp.h"

//----- (0000000140935530) ----------------------------------------------------
double __fastcall sub_140935530(double result)
{
	signed __int64 v1; // rdx
	__m128d v2; // xmm3
	__m128i v3; // xmm4
	double v4; // xmm1_8
	int v5; // ecx
	__int64 v6; // rax
	__int64 v7; // rcx
	double v8; // xmm2_8
	int v9; // r9d
	double v10; // rcx
	double v11; // xmm0_8
	int v12; // r11d
	char v13; // cl

	v1 = *(_QWORD*)&result;
	if ((*(_QWORD*)&result & 0x7FF0000000000000i64) == 0x7FF0000000000000i64)
	{
		if (result != INFINITY)
		{
			if (result == -INFINITY)
				return 0.0;
			else
				*(_QWORD*)&result = sub_1409023C4(result, COERCE_DOUBLE(*(_QWORD*)&result | 0x8000000000000i64), 1).m128_u64[0];
		}
	}
	else
	{
		v2 = (__m128d)0x40571547652B82FEui64;
		if ((*(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFui64) < 0x3C00000000000000i64)
		{
			return 1.0;
		}
		else
		{
			v2.m128d_f64[0] = 92.33248261689366 * result;
			if (92.33248261689366 * result > 65536.0)
			{
				*(_QWORD*)&result = sub_1409023C4(result, INFINITY, 3).m128_u64[0];
			}
			else if (v2.m128d_f64[0] <= -68800.0)
			{
				*(_QWORD*)&result = sub_1409023C4(result, 0.0, 2).m128_u64[0];
			}
			else
			{
				v3 = _mm_cvtpd_epi32(v2);
				v4 = _mm_cvtepi32_pd(v3).m128d_f64[0];
				v5 = _mm_cvtsi128_si32(v3);
				v6 = v5 & 0x3F;
				v7 = (unsigned int)((v5 - (int)v6) >> 6);
				v9 = 0;
				if ((int)v7 <= -1022)
					v9 = v7;
				*(_QWORD*)&v10 = (v7 + 1023) << 52;
				v8 = result - 0.01083042469622342 * v4 + v4 * -2.572804622327669e-14;
				v11 = ((0.5 * v8 + 1.0) * v8
					+ (0.04166666666666666 * v8 + 0.1666666666666667) * (v8 * v8 * v8)
					+ (0.001388888888888889 * v8 + 0.008333333333333333) * (v8 * v8 * (v8 * v8 * v8)))
					* dbl_1409CC0A0[v6]
					+ dbl_1409CE010[v6]
					+ dbl_1409CDE10[v6];
				if (v10 == INFINITY)
				{
					*(_QWORD*)&result = *(_QWORD*)&v11 | 0x7FE0000000000000i64;
				}
				else if (v9)
				{
					v12 = 0;
					if (v11 >= 1.0)
						v12 = v9;
					if (v12 == -1022)
					{
						return v11 * v10;
					}
					else if (v1 > (__int64)0xC0874046DFEFD9D0ui64)
					{
						*(_QWORD*)&result = 1i64;
					}
					else
					{
						v13 = v9 + 50;
						if (v9 + 1074 < 0)
							v13 = 0;
						return v11 * COERCE_DOUBLE(1i64 << v13);
					}
				}
				else
				{
					return v11 * v10;
				}
			}
		}
	}
	return result;
}
// 1409CC0A0: using guessed type double dbl_1409CC0A0[65];
// 1409CDE10: using guessed type double dbl_1409CDE10[64];
// 1409CE010: using guessed type double dbl_1409CE010[72];

