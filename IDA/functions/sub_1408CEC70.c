//----- (00000001408CEC70) ----------------------------------------------------
__int64 __fastcall sub_1408CEC70(_DWORD* a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax
	double v5; // xmm0_8

	if (!a3)
		return 31i64;
	if (a2)
	{
		switch (a2)
		{
		case 1:
			a1[3] = *a3;
			return 1i64;
		case 2:
			v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)a3 * 0.050000001);
			result = 1i64;
			a1[5] = LODWORD(v5);
			return result;
		case 3:
			a1[4] = *a3;
			return 1i64;
		}
	}
	else
	{
		a1[2] = *a3;
	}
	return 1i64;
}

