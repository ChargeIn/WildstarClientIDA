//----- (000000014093634C) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
double __fastcall sub_14093634C(double result)
{
	double v1; // rcx
	unsigned __int64 v2; // rax
	double v3; // xmm8_8
	_BOOL8 v4; // r10
	__int128 v5; // xmm7
	double v6; // xmm2_8
	double v7; // xmm1_8
	int v8; // [rsp+90h] [rbp+8h] BYREF
	double v9; // [rsp+98h] [rbp+10h]
	double v10; // [rsp+A0h] [rbp+18h] BYREF
	double v11; // [rsp+A8h] [rbp+20h] BYREF

	v9 = result;
	v1 = result;
	v2 = *(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFi64;
	v3 = result;
	if ((*(_QWORD*)&result & 0x7FFFFFFFFFFFFFFFui64) >= 0x3E30000000000000i64)
	{
		if (v2 <= 0x7FF0000000000000i64)
		{
			v4 = v2 != *(_QWORD*)&result;
			if (v2 != *(_QWORD*)&result)
				v3 = -result;
			v5 = 0x3FF0000000000000ui64;
			if (v3 <= 20.0)
			{
				if (v3 > 1.0)
				{
					sub_140936224(v3 * 2.0, 1.0, 46.16624130844683, 0.02166084933560342, 5.689487495325456e-11, &v8, &v10, &v11);
					*(_QWORD*)&v9 = (v8 - v8 / 2 + 1023i64) << 52;
					*(double*)&v5 = 1.0 - 2.0 / ((v10 + v11) * COERCE_DOUBLE((v8 / 2 + 1023i64) << 52) * v9 + 1.0);
				}
				else
				{
					v6 = v3 * v3;
					if (v3 >= 0.9)
					{
						v5 = 0xBF25B483C69835DDui64;
						v7 = ((v6 * 0.000173076050126226 + 0.01673587754618966) * v6 + 0.3172045589772944) * v6 + 0.6833816119772959;
						*(double*)&v5 = ((-0.00016559704390355 - v6 * 0.00000001154758789961434) * v6 - 0.01461730472887317) * v6
							- 0.2277938706590883;
					}
					else
					{
						v5 = 0xBF2A387BFAF479C9ui64;
						v7 = ((v6 * 0.0002091140262529164 + 0.02015621660269376) * v6 + 0.3816414142883289) * v6
							+ 0.8220912739685393;
						*(double*)&v5 = ((-0.0002000476210719095 - v6 * 0.00000001420779263788347) * v6 - 0.01760163490030447) * v6
							- 0.2740304246561798;
					}
					*(double*)&v5 = *(double*)&v5 * (v6 * v3) / v7 + v3;
				}
			}
			if (v4)
			{
				*(double*)&v5 = -*(double*)&v5;
				*((double*)&v5 + 1) = -*((double*)&v5 + 1);
			}
			*(_OWORD*)&result = v5;
		}
		else
		{
			*(_OWORD*)&result = 0i64;
			return sub_1407EFC20(
				(__int64)"tanh",
				33,
				*(_QWORD*)&v1 | 0x8000000000000i64,
				1,
				0,
				0x21u,
				*(__int64*)&v3,
				0i64,
				1);
		}
	}
	else if (v2)
	{
		sub_1407F662C(32);
	}
	return result;
}
// 14093634C: inconsistent variable size for 'xmm0_8.8(result)'

