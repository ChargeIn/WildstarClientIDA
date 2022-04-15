#include "../winhttp.h"

//----- (00000001408AFF30) ----------------------------------------------------
void __fastcall sub_1408AFF30(__int64* a1, char a2, char a3)
{
	double v4; // xmm8_8
	double v5; // xmm7_8
	int v6; // eax
	__int64 v7; // rbx
	unsigned int v8; // ecx
	double v9; // xmm9_8
	__int64 v10; // rdi
	double v11; // xmm6_8
	double v12; // xmm0_8
	double v13; // xmm6_8
	__int64 v14; // rdi
	double v15; // xmm6_8
	double v16; // xmm0_8
	double v17; // xmm6_8
	float v18; // xmm0_4

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
				v11 = 0.42 - sub_1408FE750(v5) * 0.5;
				v12 = sub_1408FE750(v5 * 2.0);
				v7 += 4i64;
				v5 = v5 + v9;
				v13 = v11 + v12 * 0.08;
				v4 = v4 + v13;
				*(float*)(v7 - 4) = sqrt(v13);
				--v10;
			} while (v10);
		}
	}
	else if (v8)
	{
		v14 = v8;
		do
		{
			v15 = 0.42 - sub_1408FE750(v5) * 0.5;
			v16 = sub_1408FE750(v5 * 2.0);
			v7 += 4i64;
			v5 = v5 + v9;
			v17 = v15 + v16 * 0.08;
			*(float*)&v16 = v17;
			*(_DWORD*)(v7 - 4) = LODWORD(v16);
			v4 = v4 + v17 * v17;
			--v14;
		} while (v14);
	}
	v18 = v4;
	*((float*)a1 + 3) = v18 * 2.0;
}

