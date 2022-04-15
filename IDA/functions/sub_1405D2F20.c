#include "../winhttp.h"

//----- (00000001405D2F20) ----------------------------------------------------
__m128 __fastcall sub_1405D2F20(__int64 a1)
{
	__m128 v1; // xmm1
	float v2; // xmm2_4
	int v3; // ecx

	v1 = (__m128) * (unsigned int*)(a1 + 548);
	v1.m128_f32[0] = (float)((float)(v1.m128_f32[0] + *(float*)(a1 + 52)) + 3.1415927) * 0.15915494;
	v2 = v1.m128_f32[0];
	v3 = (int)v1.m128_f32[0];
	if ((int)v1.m128_f32[0] != 0x80000000 && (float)v3 != v1.m128_f32[0])
		v2 = (float)(v3 - (_mm_movemask_ps(_mm_unpacklo_ps(v1, v1)) & 1));
	v1.m128_f32[0] = (float)((float)(v1.m128_f32[0] - v2) * 6.2831855) - 3.1415927;
	return v1;
}

