#include "../winhttp.h"

//----- (00000001408DA340) ----------------------------------------------------
double __fastcall sub_1408DA340(int a1, double a2)
{
	double v2; // xmm2_8
	double result; // xmm0_8

	v2 = a2 * 0.001 * (double)a1;
	if (v2 == 0.0)
		return 1.0;
	result = 1.0 / v2;
	if (1.0 / v2 > 1.0)
		return 1.0;
	return result;
}

