#include "../winhttp.h"

//----- (00000001408D4410) ----------------------------------------------------
void __fastcall sub_1408D4410(__int64 a1, double a2, int a3)
{
	double v4; // xmm7_8
	double v5; // xmm8_8
	double v6; // xmm6_8
	double v7; // xmm6_8
	double v8; // xmm6_8
	double v9; // xmm6_8
	double v10; // xmm6_8
	unsigned int v11; // esi
	double i; // xmm7_8
	__int64 v13; // rbx
	double v14; // [rsp+60h] [rbp+8h]

	v4 = a2 * 0.01;
	if (a2 * 0.01 > 0.0)
		v4 = sqrt(v4);
	switch (a3)
	{
	case 0:
		v5 = sub_1408DA340(*(_DWORD*)a1, v4 * 7.800000000000001 + 4.35);
		v6 = sub_1408DA310(*(_DWORD*)a1, 0.85 - v4 * 0.5);
		break;
	case 1:
		v5 = sub_1408DA340(*(_DWORD*)a1, v4 * 17.1 + 1.15);
		v6 = sub_1408DA310(*(_DWORD*)a1, 0.25 - v4 * 0.15);
		break;
	case 2:
		v5 = sub_1408DA340(*(_DWORD*)a1, 2.35 - v4 * 0.9500000000000002);
		v6 = sub_1408DA310(*(_DWORD*)a1, 0.35 - v4 * 0.09999999999999998);
		break;
	case 3:
		v5 = sub_1408DA340(*(_DWORD*)a1, 0.95 - v4 * 0.2);
		v6 = sub_1408DA310(*(_DWORD*)a1, 0.25 - v4 * 0.15);
		break;
	case 4:
		v5 = sub_1408DA340(*(_DWORD*)a1, 8.25 - v4 * 7.9);
		v6 = sub_1408DA310(*(_DWORD*)a1, v4 * 0.0 + 0.25);
		break;
	case 5:
		v5 = sub_1408DA340(*(_DWORD*)a1, 2.15 - v4 * 1.9);
		v6 = sub_1408DA310(*(_DWORD*)a1, 0.5 - v4 * 0.3);
		break;
	case 6:
		v7 = 0.7 - v4 * 0.5499999999999999;
		v5 = sub_1408DA340(*(_DWORD*)a1, v7);
		v6 = sub_1408DA310(*(_DWORD*)a1, v7);
		break;
	case 7:
		v8 = 0.35 - v4 * 0.25;
		v5 = sub_1408DA340(*(_DWORD*)a1, v8);
		v6 = sub_1408DA310(*(_DWORD*)a1, v8);
		break;
	case 8:
		v9 = 0.25 - v4 * 0.2;
		v5 = sub_1408DA340(*(_DWORD*)a1, v9);
		v6 = sub_1408DA310(*(_DWORD*)a1, v9);
		break;
	case 9:
		v10 = 0.1 - v4 * 0.09000000000000001;
		v5 = sub_1408DA340(*(_DWORD*)a1, v10);
		v6 = sub_1408DA310(*(_DWORD*)a1, v10);
		break;
	default:
		v5 = v14;
		v6 = v14;
		break;
	}
	v11 = 0;
	for (i = sub_1408DA310(*(_DWORD*)a1, 0.01) - v6; v11 < *(_DWORD*)(a1 + 4); ++v11)
	{
		v13 = 1176i64 * v11;
		sub_1408D8CA0(a1, v6, v13 + *(_QWORD*)(a1 + 8), 8);
		sub_1408D8CA0(a1, i, v13 + *(_QWORD*)(a1 + 8), 9);
		sub_1408D8CA0(a1, v5, v13 + *(_QWORD*)(a1 + 8), 7);
	}
}

