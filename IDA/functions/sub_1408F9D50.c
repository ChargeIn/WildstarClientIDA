//----- (00000001408F9D50) ----------------------------------------------------
__m128 __fastcall sub_1408F9D50(__int64 a1, float a2, double a3, float a4, int a5, float a6)
{
	__int128 v6; // xmm0
	double v8; // xmm7_8
	__int128 v9; // xmm6
	double v10; // xmm0_8

	HIDWORD(v8) = HIDWORD(a3);
	*(float*)&v6 = sub_1408FAD00(a1, COERCE_DOUBLE((unsigned __int64)a5), a6);
	*(float*)&v8 = *(float*)&a3 * 0.0625;
	v9 = v6;
	v10 = sub_1408FBFC0(v8, (float)((float)(*(float*)(*(_QWORD*)(a1 + 24) + 20i64) + 1.0) * 48.0) * 0.041524101);
	*(float*)&v9 = *(float*)&v9 * (float)((float)(*(float*)&v10 * a2) * a4);
	return (__m128)v9;
}
// 1408F9D9D: variable 'v6' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;

