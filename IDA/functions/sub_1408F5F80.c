//----- (00000001408F5F80) ----------------------------------------------------
float __fastcall sub_1408F5F80(__int64 a1, double a2, float a3)
{
	double v3; // xmm6_8
	float v5; // xmm8_4
	float v6; // xmm7_4
	double v7; // xmm0_8
	float v8; // xmm6_4

	HIDWORD(v3) = HIDWORD(a2);
	v5 = fsqrt(*(float*)&a2);
	*(float*)&v3 = *(float*)&a2 / a3;
	v7 = sub_1408FE170(v3);
	v6 = *(float*)&v7 * 1.442695;
	*(float*)&v3 = (float)((float)((float)((float)(*(float*)&a2 / a3) * 2.0) * 3.1415927) / (float)*(int*)(a1 + 192))
		* -0.5;
	v8 = sub_1408FC7F0(v3);
	if (v8 >= 0.99919999)
		v8 = 0.99919999;
	*(float*)&v7 = (float)((float)(v6 * -0.023) * v6) + (float)((float)(v6 * -0.1648) + 3.9542999);
	return (float)((float)(sub_1408FC7F0(v7) + 0.69999999) * v5) * (float)((float)(1.0 - (float)(v8 * v8)) * 0.5);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

