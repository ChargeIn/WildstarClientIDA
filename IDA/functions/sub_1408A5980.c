#include "../winhttp.h"

//----- (00000001408A5980) ----------------------------------------------------
float* __fastcall sub_1408A5980(int a1, double a2, int a3, float* a4, float* a5)
{
	int v6; // ecx
	float v7; // xmm0_4
	float* result; // rax
	float v9; // xmm0_4
	float v10; // xmm0_4
	__m128 v11; // xmm3
	__m128 v12; // xmm1
	float v13; // xmm0_4

	if (a1)
	{
		v6 = a1 - 1;
		if (v6)
		{
			if (v6 == 1)
			{
				*(float*)&a2 = (float)(*(float*)&a2 / (float)a3) * 6.2831855;
				v7 = sub_1408FC950(a2);
				result = a5;
				v9 = (float)(v7 + 2.0) - fsqrt((float)((float)(v7 + 2.0) * (float)(v7 + 2.0)) - 1.0);
				*a5 = v9;
				*a4 = 1.0 - v9;
			}
		}
		else
		{
			*(float*)&a2 = (float)(*(float*)&a2 / (float)a3) * 6.2831855;
			v10 = sub_1408FC950(a2);
			v11 = (__m128)0x40000000u;
			result = a5;
			v11.m128_f32[0] = 2.0 - v10;
			v12 = v11;
			v12.m128_f32[0] = (float)(v11.m128_f32[0] * v11.m128_f32[0]) - 1.0;
			v13 = _mm_sqrt_ps(v12).m128_f32[0] - (float)(2.0 - v10);
			*a5 = v13;
			*a4 = v13 + 1.0;
		}
	}
	else
	{
		result = a5;
		*a5 = 0.0;
		*a4 = 1.0;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

