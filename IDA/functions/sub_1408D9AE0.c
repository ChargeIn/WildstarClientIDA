#include "../winhttp.h"

//----- (00000001408D9AE0) ----------------------------------------------------
double* __fastcall sub_1408D9AE0(int a1, double a2, double* a3, double* a4, double* a5)
{
	double v6; // xmm1_8
	double v7; // xmm1_8
	double* result; // rax

	v6 = a2 / (double)a1;
	if (v6 >= 0.0002083333333333333)
	{
		if (v6 > 0.4583333333333333)
			v6 = 0.4583333333333333;
	}
	else
	{
		v6 = 0.0002083333333333333;
	}
	*a3 = v6;
	v7 = v6 * 3.141592653589793;
	sub_1409005C8(v7);
	result = a5;
	*a4 = v7;
	*a5 = v7 * v7;
	return result;
}

