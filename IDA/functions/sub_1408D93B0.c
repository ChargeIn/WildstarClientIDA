#include "../winhttp.h"

//----- (00000001408D93B0) ----------------------------------------------------
void __fastcall sub_1408D93B0(int a1, double a2, double* a3)
{
	double v4; // xmm1_8
	double v5; // xmm1_8
	double v6; // xmm5_8

	a3[1] = 0.0;
	a3[2] = 0.0;
	a3[5] = 0.0;
	*a3 = 1.0;
	a3[3] = 1.0;
	a3[4] = 1.0;
	v4 = a2 / (double)a1;
	if (v4 >= 0.0002083333333333333)
	{
		if (v4 > 0.4583333333333333)
			v4 = 0.4583333333333333;
	}
	else
	{
		v4 = 0.0002083333333333333;
	}
	v5 = v4 * 3.141592653589793;
	sub_1409005C8(v5);
	a3[3] = 1.0;
	v6 = 1.0 / (v5 + 1.0);
	*a3 = v6 * v5;
	a3[1] = v6 * v5;
	a3[2] = v6 * 0.0;
	a3[5] = v6 * 0.0;
	a3[4] = (v5 - 1.0) * v6;
}

