#include "../winhttp.h"

//----- (0000000140829600) ----------------------------------------------------
__m128 __fastcall sub_140829600(float* a1)
{
	__m128 v1; // xmm2

	v1 = (__m128) * (unsigned int*)a1;
	v1.m128_f32[0] = (float)((float)(v1.m128_f32[0] * v1.m128_f32[0]) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2]);
	return _mm_sqrt_ps(v1);
}

