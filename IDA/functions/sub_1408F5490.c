//----- (00000001408F5490) ----------------------------------------------------
float __fastcall sub_1408F5490(__int64 a1, float a2, double a3, double a4, int a5, float a6)
{
	float* v6; // rbx
	double v7; // xmm8_8
	double v9; // xmm7_8
	float v10; // xmm11_4
	float v11; // xmm8_4
	double v12; // xmm0_8
	double v13; // xmm0_8
	float v14; // xmm2_4
	float v15; // xmm1_4
	double v16; // xmm0_8

	v6 = *(float**)(a1 + 8);
	HIDWORD(v7) = HIDWORD(a3);
	HIDWORD(v9) = HIDWORD(a4);
	v10 = sub_1408F5F80(a1, COERCE_DOUBLE((unsigned __int64)a5), a6);
	if (*(float*)&a3 > v6[3])
	{
		*(float*)&v7 = *(float*)&a3 / v6[3];
		v12 = sub_1408FE170(v7);
		v13 = sub_1408FBFC0(
			COERCE_DOUBLE(1092616192i64),
			(float)((float)(*(float*)&v12 * 1.442695) * (float)(v6[4] * -6.0)) * 0.050000001);
		v11 = *(float*)&v13;
	}
	else
	{
		v11 = 1.0;
	}
	v14 = 48.0;
	v15 = (float)((float)(v6[6] + 1.0) * 48.0) * 0.041524101;
	if ((dword_140C6345C & 1) != 0)
	{
		v14 = *(float*)&dword_140C63458;
	}
	else
	{
		dword_140C63458 = 1111490560;
		dword_140C6345C |= 1u;
	}
	*(float*)&v9 = *(float*)&a4 / v14;
	v16 = sub_1408FBFC0(v9, v15);
	return (float)((float)(*(float*)&v16 * v11) * a2) * v10;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63458: using guessed type int dword_140C63458;
// 140C6345C: using guessed type int dword_140C6345C;

