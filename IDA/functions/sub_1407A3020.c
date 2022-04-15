//----- (00000001407A3020) ----------------------------------------------------
__int64 __fastcall sub_1407A3020(_QWORD* a1, double a2, float* a3, int a4, float a5)
{
	__int64 result; // rax
	double v8; // xmm6_8
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm0_4

	if (a2 <= 2.0)
	{
		result = 0i64;
		v11 = a2;
		*a3 = v11;
	}
	else if (a4 == 8)
	{
		result = sub_1407A4CE0(a1, &a5);
		if ((int)result >= 0)
		{
			v8 = *(double*)(sub_1407A45E0((__int64)a1, a5) + 48);
			sub_1409357C8(a2, v8);
			result = 0i64;
			v9 = a2 + v8;
			*a3 = v9;
		}
	}
	else
	{
		sub_1409357C8(a2, 2.0);
		result = 0i64;
		v10 = a2;
		*a3 = v10 + 2.0;
	}
	return result;
}

