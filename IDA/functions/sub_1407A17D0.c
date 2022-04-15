//----- (00000001407A17D0) ----------------------------------------------------
__int64 __fastcall sub_1407A17D0(float a1, float a2, float a3, float a4, float a5)
{
	float v5; // xmm4_4
	__int64 result; // rax

	v5 = (float)(a1 - a3) - a2;
	if (v5 < 0.0)
		v5 = 0.0;
	if (a5 != 0.0)
	{
		if (a4 != 0.0 && a4 > a5)
		{
			result = 0i64;
			if ((float)(a4 - a5) > v5)
				return 104i64;
			return result;
		}
		a4 = 0.0;
	}
	result = 0i64;
	if (a4 > v5)
		return 104i64;
	return result;
}

