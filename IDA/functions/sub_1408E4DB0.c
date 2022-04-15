#include "../winhttp.h"

//----- (00000001408E4DB0) ----------------------------------------------------
double __fastcall sub_1408E4DB0(double a1, double a2)
{
	double result; // xmm0_8

	result = a2 - (1.0 - sub_1408FFA00(a2, 0.005)) * 0.0025;
	if (a1 < 0.0)
		return result * (1.0 - (1.0 - a2 * a2) * (a1 * -0.1));
	return result;
}

