#include "../winhttp.h"

//----- (0000000140900DB0) ----------------------------------------------------
double __fastcall sub_140900DB0(double a1, int a2)
{
	double v3; // xmm6_8
	__int64 v4; // rdi
	int v5; // eax
	__int64 v6; // r8
	double result; // xmm0_8
	char v8; // cl
	double v9; // xmm0_8
	int v10; // edx
	int v11; // [rsp+60h] [rbp+18h] BYREF

	v3 = a1;
	v4 = sub_1407F65B0(8064, 65472);
	if ((HIWORD(a1) & 0x7FF0) != 32752)
	{
		if (a1 == 0.0)
			goto LABEL_21;
		sub_1407F8264(a1, &v11);
		if (a2 >= 0)
		{
			if (v11 > 0x7FFFFFFF - a2)
				goto LABEL_22;
		}
		else if (v11 < (int)(0x80000000 - a2))
		{
			goto LABEL_16;
		}
		v10 = v11 + a2;
		if (v11 + a2 <= 2560)
		{
			if (v10 > 1024)
			{
				v9 = sub_1407F8398(a1, (unsigned __int16)v10 - 1536);
			LABEL_23:
				v8 = 17;
				return sub_1407F5D08(v8, 25, v3, (double)a2, v9, v4);
			}
			if (v10 >= -2557)
			{
				if (v10 >= -1021)
				{
					v3 = sub_1407F8398(a1, v10);
					goto LABEL_21;
				}
				v9 = sub_1407F8398(a1, (unsigned __int16)v10 + 1536);
			LABEL_17:
				v8 = 18;
				return sub_1407F5D08(v8, 25, v3, (double)a2, v9, v4);
			}
		LABEL_16:
			v9 = a1 * 0.0;
			goto LABEL_17;
		}
	LABEL_22:
		v9 = sub_1409056A0(*(double*)&qword_140C10A90, a1);
		goto LABEL_23;
	}
	v5 = sub_1407F83D0(a1);
	if (v5 > 0)
	{
		if (v5 > 2)
		{
			if (v5 == 3)
			{
				*(_QWORD*)&result = sub_1407F60D0(25, a1, v6, v4).m128_u64[0];
				return result;
			}
			goto LABEL_6;
		}
	LABEL_21:
		sub_1407F65B0(v4, 65472);
		return v3;
	}
LABEL_6:
	v8 = 8;
	v9 = a1 + 1.0;
	return sub_1407F5D08(v8, 25, v3, (double)a2, v9, v4);
}
// 140900E1F: variable 'v6' is possibly undefined
// 140963AE0: using guessed type __int64 qword_140963AE0;
// 140C10A90: using guessed type __int64 qword_140C10A90;

