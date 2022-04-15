//----- (00000001408E4E30) ----------------------------------------------------
double* __fastcall sub_1408E4E30(__int64 a1, int a2, double a3, double a4, double a5, double* a6)
{
	double v9; // xmm15_8
	double v10; // xmm0_8
	double* result; // rax
	__int16 v12; // bx
	double v13; // xmm7_8
	double v14; // xmm2_8
	double v15; // xmm2_8
	double v16; // xmm0_8
	__int64 v17; // rax
	double v18; // [rsp+20h] [rbp-B8h]

	v9 = 1.0 / (double)a2;
	v10 = sub_1408E4DB0(a5, a3);
	result = a6;
	v12 = 0;
	v18 = v10;
	*a6 = v10;
	if (a2 > 0)
	{
		LODWORD(result) = 0;
		do
		{
			v13 = (double)(int)result * v9;
			if (a5 > 0.0)
			{
				sub_1408FFA00(v13, 0.4);
				v13 = sub_1408FFA00(v13, a5 * 0.1 + 1.0) * (1.0 - v13) + v13 * v13;
				if (a5 > 10.0)
					v13 = v13 * (1.0 - (1.0 - a3) * 0.1 * (a5 - 10.0) * v13);
			}
			v14 = 1.0 - sub_1408FFA00(1.0 - v13, 0.5);
			if (a5 <= 0.0)
				v15 = v14 / a3;
			else
				v15 = v14 / v18;
			v16 = sub_1408FFA00(v15 + 1.0, 1.0 / a4 - 1.0);
			v17 = v12++;
			*(float*)&v16 = v16;
			*(_DWORD*)(a1 + 4 * v17) = LODWORD(v16);
			result = (double*)(unsigned int)v12;
		} while ((int)result < a2);
	}
	return result;
}

