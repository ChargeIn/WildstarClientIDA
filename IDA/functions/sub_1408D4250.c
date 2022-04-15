#include "../winhttp.h"

//----- (00000001408D4250) ----------------------------------------------------
void __fastcall sub_1408D4250(__int64 a1, double a2, int a3, char a4)
{
	__int64 v4; // rbx
	double v6; // xmm10_8
	double v7; // xmm2_8
	double v8; // xmm9_8
	int v9; // edi
	double v10; // xmm6_8
	double v11; // xmm0_8
	double v12; // xmm1_8
	double v13; // xmm0_8
	unsigned int i; // ebx

	v4 = a3;
	v6 = 0.0;
	v7 = 1.0;
	v8 = 0.0;
	if (!a4)
	{
		v8 = a2 * 0.01;
		v7 = sub_1408FFA00(10.0, -2.4);
		v6 = a2 * 0.01 * qword_140C13250[v4];
	}
	v9 = (int)(v8 * 20.0);
	v10 = *(double*)&qword_140C132A0[v9];
	v11 = sub_1408FFA00((1.0 - v7) / v7 + 1.0, 1.0 / (v8 * 9.0 + 1.0) - 1.0);
	v12 = (sub_1408FF6E0(((1.0 / v11 - 1.0) * v8 + 1.0) * ((qword_140C132A8[v9] - v10) * (v8 * 20.0 - (double)v9) + v10))
		* 20.0
		+ v6)
		* 0.05;
	v13 = sub_1408FFA00(10.0, v12);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, v13, 1176i64 * i + *(_QWORD*)(a1 + 8) + 80i64, 7);
}
// 140C13250: using guessed type double qword_140C13250[10];
// 140C132A0: using guessed type __int64 qword_140C132A0[];
// 140C132A8: using guessed type double qword_140C132A8[21];

