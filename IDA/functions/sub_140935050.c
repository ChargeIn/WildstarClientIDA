#include "../winhttp.h"

//----- (0000000140935050) ----------------------------------------------------
__m128 __fastcall sub_140935050(double a1)
{
	unsigned __int64 v3; // rax
	__m128 result; // xmm0
	double v5; // xmm8_8
	int v6; // r9d
	double v7; // xmm0_8
	__int128 v8; // xmm7
	__int64 v9; // rax
	double v10; // xmm8_8
	double v11; // xmm5_8
	double v12; // xmm6_8
	int v13; // [rsp+90h] [rbp+8h] BYREF
	double v14; // [rsp+98h] [rbp+10h] BYREF
	double v15; // [rsp+A0h] [rbp+18h] BYREF
	__int64 v16; // [rsp+A8h] [rbp+20h]

	v16 = *(_QWORD*)&a1;
	v3 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
	if ((*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFui64) >= 0x3E30000000000000i64)
	{
		if (v3 < 0x7FF0000000000000i64)
		{
			v5 = a1;
			if (v3 != *(_QWORD*)&a1)
				v5 = -a1;
			if (v5 < 710.475860073944)
			{
				if (v5 < 20.0)
				{
					v9 = (int)v5;
					v10 = v5 - (double)(int)v5;
					v11 = ((((((v10 * v10 * 1.163921388172174e-11 + 0.000000002087443498314714) * (v10 * v10)
						+ 0.0000002755733507560166)
						* (v10
							* v10)
						+ 0.00002480158724606224)
						* (v10
							* v10)
						+ 0.001388888888898148)
						* (v10
							* v10)
						+ 0.04166666666666609)
						* (v10
							* v10)
						+ 0.5)
						* (v10
							* v10);
					v12 = ((((((v10 * v10 * 7.746188980094184e-13 + 1.605767931219399e-10) * (v10 * v10)
						+ 0.00000002505211769941335)
						* (v10
							* v10)
						+ 0.000002755731919136364)
						* (v10
							* v10)
						+ 0.0001984126984132424)
						* (v10
							* v10)
						+ 0.008333333333333299)
						* (v10
							* v10)
						+ 0.1666666666666667)
						* (v10
							* v10
							* v10);
					v8 = *(unsigned __int64*)&qword_140B7C8F0[v9];
					*(double*)&v8 = *(double*)&v8 * v12
						+ qword_140B7CB50[v9] * v11
						+ qword_140B7C8F0[v9] * v10
						+ qword_140B7CB50[v9]
						+ qword_140B7CA20[v9] * v11
						+ qword_140B7C7C0[v9] * v12
						+ qword_140B7C7C0[v9] * v10
						+ qword_140B7CA20[v9];
				}
				else
				{
					sub_1409353FC(v5, 1.0, 46.16624130844683, 0.02166084933560342, 5.689487495325456e-11, &v13, &v14, &v15);
					v6 = v13 - 1;
					v13 = v6;
					if ((unsigned int)(v6 + 1022) > 0x7FD)
					{
						v16 = (v6 - v6 / 2 + 1023i64) << 52;
						v7 = *(double*)&v16;
						v8 = *(unsigned __int64*)&v14;
						*(double*)&v8 = (v14 + v15) * COERCE_DOUBLE((v6 / 2 + 1023i64) << 52);
					}
					else
					{
						v16 = (v6 + 1023i64) << 52;
						v7 = *(double*)&v16;
						v8 = *(unsigned __int64*)&v14;
						*(double*)&v8 = v14 + v15;
					}
					*(double*)&v8 = *(double*)&v8 * v7;
				}
				return (__m128)v8;
			}
			else
			{
				result = 0i64;
				*(double*)result.m128_u64 = sub_1407EFC20(
					(__int64)"cosh",
					19,
					0x7FF0000000000000i64,
					3,
					17,
					0x22u,
					*(__int64*)&a1,
					0i64,
					1);
			}
		}
		else if (v3 <= 0x7FF0000000000000i64)
		{
			sub_1407F662C(0);
			v16 = 0x7FF0000000000000i64;
			return (__m128)0x7FF0000000000000ui64;
		}
		else
		{
			result = 0i64;
			*(double*)result.m128_u64 = sub_1407EFC20(
				(__int64)"cosh",
				19,
				*(_QWORD*)&a1 | 0x8000000000000i64,
				1,
				0,
				0x21u,
				*(__int64*)&a1,
				0i64,
				1);
		}
	}
	else
	{
		if (v3)
			sub_1407F662C(32);
		return (__m128)0x3FF0000000000000ui64;
	}
	return result;
}
// 140B7C7C0: using guessed type double qword_140B7C7C0[38];
// 140B7C8F0: using guessed type double qword_140B7C8F0[38];
// 140B7CA20: using guessed type double qword_140B7CA20[38];
// 140B7CB50: using guessed type double qword_140B7CB50[38];

