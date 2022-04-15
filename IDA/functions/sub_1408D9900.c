#include "../winhttp.h"

//----- (00000001408D9900) ----------------------------------------------------
double* __fastcall sub_1408D9900(int a1, double a2, double a3, double a4, double* a5)
{
	double v7; // xmm3_8

	v7 = sub_1408FFA00(a3, 0.25) * 100.0 * -0.016;
	return sub_1408D9BB0(a1, a2, 0.85, v7, -0.0, a4, 1, 0, 1.0, a5);
}

