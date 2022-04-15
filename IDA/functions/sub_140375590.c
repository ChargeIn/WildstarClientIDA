#include "../winhttp.h"

//----- (0000000140375590) ----------------------------------------------------
void __fastcall sub_140375590(__m128* a1)
{
	double v1; // xmm6_8
	float v3; // xmm8_4
	float v4; // xmm7_4
	float v5; // xmm0_4
	float v6; // xmm1_4
	__m128 v7; // xmm1
	__m128 v8; // xmm2
	__m128 v9; // [rsp+20h] [rbp-48h]

	HIDWORD(v1) = 0;
	v3 = (float)((float)(*(_DWORD*)(a1[1].m128_u64[0] + 880) % a1[3].m128_i32[0]) * a1[2].m128_f32[3]) * -0.001;
	*(float*)&v1 = (float)((float)((float)(*(_DWORD*)(a1[1].m128_u64[0] + 880) % a1[3].m128_i32[2]) * 0.001)
		+ a1[3].m128_f32[3])
		* a1[3].m128_f32[1];
	v4 = sub_1408FE3D0(v1);
	v5 = sub_1408FC950(v1);
	v6 = -(float)(v4 * a1[7].m128_f32[0]);
	a1[4].m128_f32[3] = (float)((float)(a1[4].m128_f32[1] - a1[4].m128_f32[0]) * (float)((float)(v5 + 1.0) * 0.5))
		+ a1[4].m128_f32[0];
	a1[8].m128_f32[2] = v6;
	a1[9].m128_f32[2] = v3 - (float)(v4 * a1[7].m128_f32[1]);
	v9.m128_f32[0] = (float)(v5 * a1[7].m128_f32[0]) * a1[3].m128_f32[1];
	v9.m128_f32[1] = (float)((float)(v5 * a1[7].m128_f32[1]) * a1[3].m128_f32[1]) + a1[2].m128_f32[3];
	v7 = _mm_mul_ps(a1[10], v9);
	a1[6].m128_f32[0] = v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
	v8 = _mm_mul_ps(a1[11], v9);
	a1[6].m128_f32[1] = v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
}
// 1403756A2: variable 'v9' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

