//----- (00000001408CB7F0) ----------------------------------------------------
void __fastcall sub_1408CB7F0(__int64 a1, float a2, float a3, int a4, int a5)
{
	double v6; // xmm9_8
	double v7; // xmm8_8
	double v8; // xmm8_8
	float v9; // xmm0_4
	float v10; // xmm0_4

	v6 = sub_1408FFA00(10.0, (double)a5 * -3.0 / (a2 * (double)a4));
	v7 = sub_1408FF6E0(v6) * 20.0;
	v8 = v7 * sub_1408FF420(10.0) * 0.0125 * (1.0 - a3 * a3);
	if (v8 > 0.999)
		v8 = 0.999;
	v9 = (1.0 - v8) * v6;
	*(float*)(a1 + 4) = v9;
	v10 = -v8;
	*(float*)(a1 + 8) = v10;
}

