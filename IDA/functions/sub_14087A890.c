#include "../winhttp.h"

//----- (000000014087A890) ----------------------------------------------------
__int64 __fastcall sub_14087A890(__int64 a1, __m128* a2, float a3)
{
	__m128 v4; // xmm2
	float v5; // xmm1_4
	float v6; // xmm3_4
	float v7; // xmm4_4
	__m128 v8; // xmm2
	float v9; // xmm1_4
	__m128 v10; // xmm1
	float v11; // xmm0_4
	float v12; // xmm0_4
	__int64 result; // rax

	*(_DWORD*)(a1 + 16) = a2[2].m128_i32[3];
	*(float*)(a1 + 20) = (float)(a2->m128_f32[3] - a2[2].m128_f32[3]) * a3;
	*(_DWORD*)(a1 + 24) = a2[3].m128_i32[0];
	*(float*)(a1 + 28) = (float)(a2[1].m128_f32[0] - a2[3].m128_f32[0]) * a3;
	if (dword_140C61C54)
	{
		*(_DWORD*)a1 = a2[2].m128_i32[0];
		*(float*)(a1 + 4) = (float)(a2->m128_f32[0] - a2[2].m128_f32[0]) * a3;
		*(_DWORD*)(a1 + 8) = a2[2].m128_i32[1];
		v12 = a2->m128_f32[1] - a2[2].m128_f32[1];
	}
	else
	{
		v4 = a2[2];
		v5 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
		v6 = fsqrt((float)((float)(v5 * v5) * 0.5) + (float)(v4.m128_f32[0] * v4.m128_f32[0]));
		*(float*)a1 = v6;
		v7 = fsqrt(
			(float)((float)(a2[2].m128_f32[2] * a2[2].m128_f32[2]) * 0.5)
			+ (float)(a2[2].m128_f32[1] * a2[2].m128_f32[1]));
		*(float*)(a1 + 8) = v7;
		v8 = *a2;
		v9 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
		v8.m128_f32[0] = fsqrt((float)((float)(v9 * v9) * 0.5) + (float)(v8.m128_f32[0] * v8.m128_f32[0])) - v6;
		*(_DWORD*)(a1 + 4) = v8.m128_i32[0];
		v10 = *a2;
		*(float*)(a1 + 4) = v8.m128_f32[0] * a3;
		v11 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
		v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
		v12 = fsqrt((float)((float)(v11 * v11) * 0.5) + (float)(v10.m128_f32[0] * v10.m128_f32[0])) - v7;
	}
	result = a1;
	*(float*)(a1 + 12) = v12 * a3;
	return result;
}
// 140C61C54: using guessed type int dword_140C61C54;

