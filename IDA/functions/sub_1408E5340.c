//----- (00000001408E5340) ----------------------------------------------------
void __fastcall sub_1408E5340(__int64 a1, int a2, __int64 a3, double a4, double a5, char a6)
{
	double v9; // xmm9_8
	double v10; // xmm7_8
	int v11; // ebx
	double v12; // xmm8_8
	double v13; // xmm0_8
	double v14; // xmm0_8
	float v15; // xmm0_4

	v9 = 1.0 / (double)(a2 - 1);
	if (a6)
	{
		a4 = 1.0;
		v10 = 1.0;
	}
	else
	{
		v10 = sub_1408FFA00(10.0, a5 * 0.05);
	}
	v11 = 0;
	if (a2 > 0)
	{
		v12 = a4 - 1.0;
		do
		{
			v13 = sub_1408FFA00(1.0 - (double)v11 * v9, 0.5);
			v14 = sub_1408FFA00(1.0 - v13, v12);
			if (v14 > 1.0)
				v14 = 1.0;
			if (v14 < v10)
				v14 = v10;
			v15 = v14;
			++v11;
			a1 += 4i64;
			*(float*)(a1 - 4) = v15;
		} while (v11 < a2);
	}
}

