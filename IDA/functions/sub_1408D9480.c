#include "../winhttp.h"

//----- (00000001408D9480) ----------------------------------------------------
void __fastcall sub_1408D9480(int a1, double a2, double a3, double* a4)
{
	double v5; // xmm1_8
	double v6; // xmm1_8
	double v7; // xmm6_8
	double v8; // xmm3_8

	a4[1] = 0.0;
	a4[2] = 0.0;
	a4[5] = 0.0;
	*a4 = 1.0;
	a4[3] = 1.0;
	a4[4] = 1.0;
	v5 = a2 / (double)a1;
	if (v5 >= 0.0002083333333333333)
	{
		if (v5 > 0.4583333333333333)
			v5 = 0.4583333333333333;
	}
	else
	{
		v5 = 0.0002083333333333333;
	}
	v6 = v5 * 3.141592653589793;
	sub_1409005C8(v6);
	a4[3] = 1.0;
	v7 = v6 * v6 * 2.0;
	v8 = 1.0 / (v6 * a3 + 1.0 + v6 * v6);
	a4[4] = (v7 - 2.0) * v8;
	a4[1] = v7 * v8;
	a4[5] = (1.0 - v6 * a3 + v6 * v6) * v8;
	*a4 = v8 * (v6 * v6);
	a4[2] = v8 * (v6 * v6);
}

