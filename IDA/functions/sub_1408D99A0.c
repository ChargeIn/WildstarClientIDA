#include "../winhttp.h"

//----- (00000001408D99A0) ----------------------------------------------------
double* __fastcall sub_1408D99A0(int a1, double a2, double a3, double a4, double* a5)
{
	double v7; // xmm3_8

	v7 = sub_1408FFA00(a3, 0.25);
	return sub_1408D9F60(a1, a2, 0.85, v7 * 100.0 * -0.016, -0.0, a4, 1, 0, a5);
}

