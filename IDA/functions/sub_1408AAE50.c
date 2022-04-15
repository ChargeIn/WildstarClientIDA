#include "../winhttp.h"

//----- (00000001408AAE50) ----------------------------------------------------
__int64 __fastcall sub_1408AAE50(float* a1, float* a2, unsigned int a3, float a4)
{
	float v4; // xmm5_4
	float v5; // xmm4_4
	__int64 result; // rax
	float* v8; // r9
	unsigned __int64 v9; // r8
	float v10; // xmm7_4
	float v11; // xmm0_4
	float v12; // xmm1_4
	float v13; // xmm2_4
	float v14; // xmm3_4
	float v15; // xmm0_4
	float v16; // xmm2_4
	float v17; // xmm3_4
	float v18; // xmm2_4
	float v19; // xmm1_4
	float v20; // xmm1_4

	v4 = *a1;
	v5 = a1[1];
	result = a3;
	v8 = a2;
	v9 = (unsigned __int64)&a2[a3];
	v10 = a1[2];
	if ((unsigned __int64)a2 < v9)
	{
		result = (__int64)(v9 - (_QWORD)a2 + 3) / 4;
		if (result >= 4)
		{
			result = v9 - 12;
			do
			{
				v11 = a4 * *v8;
				v12 = a4 * v8[1];
				v8 += 4;
				v13 = v11 - v4;
				v14 = v12 - v11;
				v15 = a4 * *(v8 - 2);
				v16 = v13 + (float)(v5 * v10);
				v4 = a4 * *(v8 - 1);
				*(v8 - 4) = v16;
				v17 = v14 + (float)(v16 * v10);
				*(v8 - 3) = v17;
				v18 = (float)(v15 - v12) + (float)(v17 * v10);
				*(v8 - 2) = v18;
				v5 = (float)(v4 - v15) + (float)(v18 * v10);
				*(v8 - 1) = v5;
			} while ((__int64)v8 < result);
		}
		for (; (unsigned __int64)v8 < v9; v5 = v20)
		{
			v19 = (float)(a4 * *v8++) - v4;
			v4 = a4 * *(v8 - 1);
			v20 = v19 + (float)(v5 * v10);
			*(v8 - 1) = v20;
		}
	}
	*a1 = v4;
	a1[1] = v5;
	return result;
}

