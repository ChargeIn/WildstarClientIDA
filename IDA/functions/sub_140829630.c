#include "../winhttp.h"

//----- (0000000140829630) ----------------------------------------------------
void __fastcall sub_140829630(float* a1)
{
	float v1; // xmm3_4
	__m128 v2; // xmm4
	float v3; // xmm5_4
	__m128 v4; // xmm2
	float v5; // xmm1_4

	v1 = a1[1];
	v2 = (__m128) * (unsigned int*)a1;
	v3 = a1[2];
	v4 = v2;
	v4.m128_f32[0] = (float)((float)(v2.m128_f32[0] * v2.m128_f32[0]) + (float)(v1 * v1)) + (float)(v3 * v3);
	v5 = _mm_sqrt_ps(v4).m128_f32[0];
	if (v5 != 0.0)
	{
		a1[2] = (float)(1.0 / v5) * v3;
		*a1 = (float)(1.0 / v5) * v2.m128_f32[0];
		a1[1] = (float)(1.0 / v5) * v1;
	}
}

