#include "../winhttp.h"

//----- (00000001408E5040) ----------------------------------------------------
void __fastcall sub_1408E5040(__int64 a1, int a2, double a3, double a4, char a5)
{
	double v8; // xmm8_8
	double v9; // xmm10_8
	int v10; // edi
	__int64 v11; // rbx
	__int64 v12; // rbx
	double v13; // xmm0_8
	float v14; // xmm1_4

	v8 = 1.0 / (double)a2;
	if (a5)
	{
		v9 = 1.0;
		a4 = 1.0;
	}
	else
	{
		v9 = sub_1408FFA00(10.0, a3 * 0.05);
	}
	v10 = 0;
	if (a2 >= 4)
	{
		do
		{
			sub_1409005C0();
			*(double*)(a1 + 4i64 * v10) = sub_1409005C0();
			v11 = v10 + 2;
			sub_1409005C0();
			v10 += 4;
			*(double*)(a1 + 4 * v11) = sub_1409005C0();
		} while (v10 < a2 - (a2 & 3));
	}
	if (v10 < a2)
	{
		v12 = a1 + 4i64 * v10;
		do
		{
			v13 = sub_1408FFA00(1.0 - (double)v10++ * v8, 0.5);
			v12 += 4i64;
			v14 = sub_1408FFA00((1.0 - v13) * (1.0 / v9) + 1.0, 1.0 / a4 - 1.0);
			*(float*)(v12 - 4) = v14;
		} while (v10 < a2);
	}
}
// 1408E515A: conditional instruction was optimized away because esi.4>=4
// 1408E5155: mask 0x80000003 is shortened because esi.4 <= 0x7FFFFFFF
// 1409005C0: using guessed type double sub_1409005C0(void);
// 1409A4790: using guessed type __int128 xmmword_1409A4790;
// 1409B1970: using guessed type __int128 xmmword_1409B1970;

