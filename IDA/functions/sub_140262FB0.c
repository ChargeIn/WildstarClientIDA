//----- (0000000140262FB0) ----------------------------------------------------
float __fastcall sub_140262FB0(float a1, float a2, float a3)
{
	double v3; // xmm8_8
	float v4; // xmm9_4

	if (a2 <= a1)
	{
		v3 = 0.0;
		v4 = 0.0;
	}
	else
	{
		HIDWORD(v3) = 0;
		*(float*)&v3 = -1.0 / (float)((float)(a1 + a2) * 0.5);
		v4 = 1.0
			/ (float)(sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)(*(float*)&v3 * a2) * 0.69314718)))
				- 1.0);
	}
	*(float*)&v3 = (float)(*(float*)&v3 * a3) * 0.69314718;
	return fmaxf(0.0, fminf((float)(sub_1408FC7F0(v3) * v4) - v4, 1.0));
}

