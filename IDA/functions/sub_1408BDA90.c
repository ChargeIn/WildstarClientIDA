#include "../winhttp.h"

//----- (00000001408BDA90) ----------------------------------------------------
void __fastcall sub_1408BDA90(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // ebx
	double v4; // xmm9_8
	double v5; // xmm7_8
	double v6; // xmm0_8
	double v7; // xmm0_8
	double v8; // xmm11_8
	double v9; // xmm0_8
	__int64 v10; // rsi
	__int64 v11; // rcx
	char v12; // bl
	double v13; // xmm0_8
	double v14; // xmm0_8
	unsigned __int64 v15; // rcx
	double v16; // xmm2_8
	__int64 v17; // rax
	float v18; // xmm1_4

	v1 = *(_QWORD*)(a1 + 16);
	v3 = *(_DWORD*)(v1 + 24);
	v4 = 1.0 / (double)*(int*)(a1 + 588);
	v5 = 1.0 - 1.0 / (1.0 / *(float*)(v1 + 12) * (1.0 / *(float*)(v1 + 12)));
	v6 = sub_1408FFA00(0.001, (double)*(int*)(a1 + 4i64 * (unsigned int)(v3 - 1) + 80) * v4 / *(float*)(v1 + 8));
	v7 = sub_1408FF6E0(v6);
	v8 = *(double*)&qword_140C62AF8;
	v9 = v7 * *(double*)&qword_140C62AF8;
	if (v9 * v5 > 1.0)
		v5 = 1.0 / v9;
	v10 = 0i64;
	if (v3)
	{
		v11 = *(_QWORD*)(a1 + 16);
		do
		{
			v12 = v10;
			v13 = sub_1408FFA00(0.001, (double)*(int*)(a1 + 4 * v10 + 80) * v4 / *(float*)(v11 + 8));
			v14 = sub_1408FF6E0(v13);
			v15 = (unsigned int)v10;
			v10 = (unsigned int)(v10 + 1);
			v16 = v14 * v8 * v5;
			v17 = (v12 & 3) + 4 * (v15 >> 2);
			*(float*)&v14 = (1.0 - v16) * 0.001;
			*(_DWORD*)(a1 + 4 * v17 + 368) = LODWORD(v14);
			v18 = v16;
			*(float*)(a1 + 4 * v17 + 432) = v18;
			v11 = *(_QWORD*)(a1 + 16);
		} while ((unsigned int)v10 < *(_DWORD*)(v11 + 24));
	}
}
// 140C62AF8: using guessed type __int64 qword_140C62AF8;

