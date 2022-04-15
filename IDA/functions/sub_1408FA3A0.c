//----- (00000001408FA3A0) ----------------------------------------------------
double __fastcall sub_1408FA3A0(__int64 a1, double a2)
{
	__int64 v2; // rbx
	double result; // xmm0_8
	float v4; // xmm2_4
	double v5; // xmm0_8

	v2 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)&result = 1065353216i64;
	if (*(_BYTE*)(v2 + 84))
	{
		v4 = *(float*)(v2 + 12) * 0.0099999998;
		if (*(float*)&a2 > v4)
		{
			*(float*)&a2 = *(float*)&a2 / v4;
			v5 = sub_1408FE170(a2);
			return sub_1408FBFC0(
				COERCE_DOUBLE(1092616192i64),
				(float)((float)(*(float*)&v5 * 1.442695) * (float)(*(float*)(v2 + 16) * -6.0)) * 0.050000001);
		}
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

