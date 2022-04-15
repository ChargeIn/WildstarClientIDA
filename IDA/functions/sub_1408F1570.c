//----- (00000001408F1570) ----------------------------------------------------
float* __fastcall sub_1408F1570(float a1, double a2, float a3, double a4, float a5, float* a6, float* a7, float* a8)
{
	double v8; // xmm10_8
	double v10; // xmm0_8
	float v11; // xmm8_4
	double v12; // xmm0_8
	float v13; // xmm7_4
	double v14; // xmm0_8
	float* result; // rax

	HIDWORD(v8) = HIDWORD(a2);
	*(float*)&a4 = (float)(*(float*)&a4 * -3.1415927) * (float)(1.0 / a5);
	*(float*)&v8 = (float)(*(float*)&a2 * 6.2831855) * (float)(1.0 / a5);
	HIDWORD(v10) = HIDWORD(a4);
	*(float*)&v10 = sub_1408FC7F0(a4);
	v11 = sub_1408F1690(v10, *(float*)&v8).m128_f32[0];
	v12 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), a1 * -0.050000001);
	v13 = *(float*)&v12 * 0.5;
	v14 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), a3 * 0.050000001);
	*a6 = v13 * *(float*)&v14;
	*a7 = sub_1408FC950(v8) * (float)(v11 * 2.0);
	result = a8;
	*a8 = -(float)(v11 * v11);
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

