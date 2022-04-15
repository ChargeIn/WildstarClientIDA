#include "../winhttp.h"

//----- (00000001408D47A0) ----------------------------------------------------
void __fastcall sub_1408D47A0(__int64 a1, double a2, double a3, int a4)
{
	double v5; // xmm4_8
	double v6; // xmm3_8
	double v7; // xmm0_8
	double v8; // xmm2_8
	double v9; // xmm1_8
	unsigned int i; // ebx
	double v11; // [rsp+30h] [rbp+8h]

	v5 = a2 * 0.01;
	v6 = a3 * 0.01;
	switch (a4)
	{
	case 0:
		v7 = 100.0;
		v8 = 150.0;
		v9 = 17500.0;
		break;
	case 1:
		v7 = 100.0;
		v8 = 300.0;
		v9 = 20000.0;
		break;
	case 2:
		v7 = 300.0;
		v9 = 10000.0;
		v8 = 300.0;
		break;
	case 3:
		v7 = 150.0;
		v8 = 300.0;
		v9 = 12000.0;
		break;
	case 4:
		v7 = 100.0;
		v8 = 200.0;
		v9 = 14000.0;
		break;
	case 5:
		v7 = 150.0;
		v8 = 300.0;
		v9 = 16000.0;
		break;
	case 6:
		v7 = 200.0;
		v8 = 400.0;
		v9 = 18000.0;
		break;
	case 7:
		v7 = 100.0;
		v8 = 1000.0;
		v9 = 20000.0;
		break;
	case 8:
		v7 = 200.0;
		v8 = 2000.0;
		v9 = 20000.0;
		break;
	case 9:
		v7 = 150.0;
		v8 = 1500.0;
		v9 = 20000.0;
		break;
	default:
		v7 = v11;
		v8 = v11;
		v9 = v11;
		break;
	}
	sub_1408D93B0(*(_DWORD*)a1, ((v9 - v8) * v6 + v8 - v7) * v5 + v7, dbl_140C63310);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8ED0(a1, dbl_140C63310, *(_QWORD*)(a1 + 8) + 1176i64 * i, 4);
}
// 140C63310: using guessed type double dbl_140C63310[6];

