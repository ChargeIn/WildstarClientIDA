#include "../winhttp.h"

//----- (0000000140829550) ----------------------------------------------------
__m128 __fastcall sub_140829550(__int64 a1, float* a2)
{
	__m128 v2; // xmm2
	float v3; // xmm0_4

	v2 = (__m128) * (unsigned int*)(a1 + 4);
	v3 = *(float*)(a1 + 8) - a2[2];
	v2.m128_f32[0] = (float)((float)((float)(v2.m128_f32[0] - a2[1]) * (float)(v2.m128_f32[0] - a2[1]))
		+ (float)((float)(*(float*)a1 - *a2) * (float)(*(float*)a1 - *a2)))
		+ (float)(v3 * v3);
	return _mm_sqrt_ps(v2);
}

