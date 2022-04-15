//----- (00000001408CC470) ----------------------------------------------------
__int64 __fastcall sub_1408CC470(__int64 a1)
{
	double v2; // xmm0_8
	float v3; // xmm0_4
	float v4; // xmm9_4
	float v5; // xmm6_4
	double v6; // xmm0_8
	float v7; // xmm1_4
	float v8; // xmm7_4
	double v9; // xmm0_8
	double v10; // xmm0_8
	float v11; // xmm0_4
	float v12; // xmm10_4
	float v13; // xmm0_4
	__int64 result; // rax

	if (*(_BYTE*)(a1 + 924))
	{
		v2 = sub_1408FDC10(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 868)));
		v3 = *(float*)&v2 * 20.0;
		if (v3 >= -0.1)
			v3 = -0.1;
		v4 = *(float*)(a1 + 864);
		v5 = (float)(-60.0 / v3) * v4;
		v6 = sub_1408FDC10(COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 880)));
		v7 = *(float*)&v6 * 20.0;
		if ((float)(*(float*)&v6 * 20.0) >= -0.1)
			v7 = -0.1;
		v8 = *(float*)(a1 + 876);
		if (v5 <= (float)((float)(-60.0 / v7) * v8))
			v5 = (float)(-60.0 / v7) * v8;
	}
	else
	{
		v4 = *(float*)(a1 + 864);
		v8 = *(float*)(a1 + 876);
		if (v4 <= v8)
			v5 = *(float*)(a1 + 876);
		else
			v5 = *(float*)(a1 + 864);
	}
	if (*(_BYTE*)(a1 + 925))
	{
		*(_QWORD*)&v9 = *(unsigned int*)(a1 + 884);
		*(float*)&v9 = *(float*)&v9 * *(float*)(a1 + 872);
		v10 = sub_1408FDC10(v9);
		v11 = *(float*)&v10 * 20.0;
		if (v11 >= -0.1)
			v11 = -0.1;
		v12 = -60.0 / v11;
		if (*(_BYTE*)(a1 + 924))
			v13 = 2.0;
		else
			v13 = 1.0;
		v5 = v5 + (float)((float)(v8 + v4) * (float)(v13 * v12));
	}
	if (v5 >= 60.0)
		v5 = 60.0;
	result = (unsigned int)(int)(float)((float)*(int*)(a1 + 1004) * v5);
	*(_DWORD*)(a1 + 1000) = result;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

