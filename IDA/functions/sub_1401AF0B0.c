#include "../winhttp.h"

//----- (00000001401AF0B0) ----------------------------------------------------
__m128* __fastcall sub_1401AF0B0(__int64 a1, float* a2)
{
	float* v2; // rax
	float v3; // xmm2_4
	float v4; // xmm5_4
	float v5; // xmm12_4
	__m128* result; // rax
	float v7; // xmm3_4
	float v8; // xmm9_4
	__m128 v9; // xmm7
	float v10; // xmm6_4
	float v11; // xmm4_4
	float v12; // xmm8_4
	float v13; // xmm11_4
	float v14; // xmm12_4
	float v15; // xmm2_4
	float v16; // xmm1_4

	v2 = *(float**)(a1 + 8);
	v3 = v2[1];
	v4 = v2[2];
	v5 = *v2;
	result = *(__m128**)a1;
	v7 = v3 * -0.48860252;
	v8 = (float)(v4 * v3) * -1.0925485;
	v9 = _mm_mul_ps(*(__m128*) * (_QWORD*)a1, (__m128)xmmword_140B7B300);
	v10 = v5 * -0.48860252;
	v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
	v12 = (float)(v5 * v3) * 1.0925485;
	v13 = (float)(v5 * v4) * -1.0925485;
	*a2 = v9.m128_f32[0] * 0.28209481;
	a2[12] = v11 * 0.28209481;
	v14 = (float)((float)(v5 * v5) - (float)(v3 * v3)) * 0.54627424;
	v15 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	a2[24] = v15 * 0.28209481;
	a2[1] = v7 * v9.m128_f32[0];
	a2[13] = v7 * v11;
	a2[25] = v7 * v15;
	a2[2] = (float)(v4 * 0.48860252) * v9.m128_f32[0];
	a2[14] = (float)(v4 * 0.48860252) * v11;
	a2[26] = (float)(v4 * 0.48860252) * v15;
	a2[3] = v10 * v9.m128_f32[0];
	a2[15] = v10 * v11;
	a2[27] = v10 * v15;
	a2[4] = v12 * v9.m128_f32[0];
	a2[16] = v12 * v11;
	a2[28] = v12 * v15;
	a2[5] = v8 * v9.m128_f32[0];
	a2[17] = v8 * v11;
	v16 = (float)((float)((float)(v4 * 3.0) * v4) - 1.0) * 0.31539157;
	a2[29] = v8 * v15;
	a2[6] = v16 * v9.m128_f32[0];
	a2[30] = v16 * v15;
	a2[18] = v16 * v11;
	a2[7] = v13 * v9.m128_f32[0];
	a2[19] = v13 * v11;
	a2[31] = v13 * v15;
	a2[32] = v14 * v15;
	a2[8] = v14 * v9.m128_f32[0];
	a2[20] = v14 * v11;
	return result;
}
// 140B7B300: using guessed type __int128 xmmword_140B7B300;

