#include "../winhttp.h"

//----- (000000014031E5E0) ----------------------------------------------------
__int64 __fastcall sub_14031E5E0(__int64 a1, __m128* a2, float a3)
{
	__m128 v3; // xmm0
	unsigned int v4; // r8d
	__m128 i; // xmm1
	__int64 v6; // rax
	__int64 result; // rax
	__m128 v8; // xmm3
	float v9; // xmm3_4

	v3.m128_f32[0] = a3;
	v4 = 0;
	for (i = _mm_mul_ps(a2[4], _mm_shuffle_ps(v3, v3, 0));
		v4 < *(_DWORD*)(a1 + 1372);
		*(__m128*)((char*)a2 + 8 * result) = _mm_add_ps(*(__m128*)((char*)a2 + 8 * result), i))
	{
		v6 = v4++;
		result = 2 * (v6 + 7);
	}
	a2[5] = _mm_add_ps(a2[5], i);
	v8 = _mm_mul_ps(i, i);
	v9 = (float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
	if (v9 > 0.0)
	{
		result = *(_QWORD*)(a1 + 1256);
		a2->m128_f32[3] = a2->m128_f32[3] - (float)(fsqrt(v9) * *(float*)(result + 948));
	}
	a2[4].m128_f32[0] = (float)(a3 * *(float*)(a1 + 1552)) + a2[4].m128_f32[0];
	a2[4].m128_f32[1] = (float)(a3 * *(float*)(a1 + 1556)) + a2[4].m128_f32[1];
	a2[4].m128_f32[2] = (float)(a3 * *(float*)(a1 + 1560)) + a2[4].m128_f32[2];
	return result;
}
// 14031E5EB: variable 'v3' is possibly undefined

