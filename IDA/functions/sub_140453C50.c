//----- (0000000140453C50) ----------------------------------------------------
__int64 __fastcall sub_140453C50(float a1, float a2, int a3, float a4, int a5, float a6, float a7, float a8, int a9)
{
	float v9; // xmm7_4
	__int64 result; // rax
	float v11; // xmm0_4
	float v12; // xmm4_4
	float v13; // xmm6_4
	double v14; // xmm0_8

	v9 = (float)(a2 / (float)a3) * a1;
	result = 0i64;
	v11 = 0.0;
	v12 = (float)((float)(a4 - (float)a5) - (float)(a6 * 100.0)) / v9;
	if (a7 >= v12)
	{
		v13 = a7 - v12;
		HIDWORD(v14) = 0;
		*(float*)&v14 = (float)(v13 / (float)(v13 + a8)) * (float)(*(float*)&dword_140C45858 * 0.5);
		*(float*)&v14 = sub_1408FC950(v14);
		result = 1i64;
		v11 = (float)(*(float*)&v14 * (float)(v13 * v9)) + a4;
	}
	if (v11 > (float)a9)
		return 2i64;
	return result;
}
// 140C45858: using guessed type int dword_140C45858;

