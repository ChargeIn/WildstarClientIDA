#include "../winhttp.h"

//----- (00000001408AFDD0) ----------------------------------------------------
void __fastcall sub_1408AFDD0(__int64* a1, char a2, char a3)
{
	double v4; // xmm7_8
	double v5; // xmm6_8
	int v6; // eax
	__int64 v7; // rbx
	unsigned int v8; // ecx
	double v9; // xmm8_8
	__int64 v10; // rdi
	double v11; // xmm0_8
	double v12; // xmm2_8
	__int64 v13; // rdi
	double v14; // xmm0_8
	double v15; // xmm1_8
	float v16; // xmm0_4

	v4 = 0.0;
	if (a3)
		v5 = 3.141592653589793;
	else
		v5 = 0.0;
	v6 = *((_DWORD*)a1 + 2);
	v7 = *a1;
	v8 = (unsigned int)v6 >> 1;
	v9 = 6.283185307179586 / ((double)v6 - 1.0);
	if (a2)
	{
		if (v8)
		{
			v10 = v8;
			do
			{
				v11 = sub_1408FE750(v5);
				v7 += 4i64;
				v5 = v5 + v9;
				v12 = (1.0 - v11) * 0.5;
				v4 = v4 + v12;
				*(float*)(v7 - 4) = sqrt(v12);
				--v10;
			} while (v10);
		}
	}
	else if (v8)
	{
		v13 = v8;
		do
		{
			v14 = sub_1408FE750(v5);
			v7 += 4i64;
			v5 = v5 + v9;
			v15 = (1.0 - v14) * 0.5;
			*(float*)&v14 = v15;
			*(_DWORD*)(v7 - 4) = LODWORD(v14);
			v4 = v4 + v15 * v15;
			--v13;
		} while (v13);
	}
	v16 = v4;
	*((float*)a1 + 3) = v16 * 2.0;
}

