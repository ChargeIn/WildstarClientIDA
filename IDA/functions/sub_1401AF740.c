#include "../winhttp.h"

//----- (00000001401AF740) ----------------------------------------------------
__m128* __fastcall sub_1401AF740(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm4
	__m128 v5; // xmm5
	__m128 v6; // xmm3
	float v7; // xmm0_4
	__m128 v8; // xmm1
	__m128 v9; // xmm0
	float v10; // xmm1_4
	__m128 v11; // xmm15
	float v12; // xmm12_4
	__m128 v13; // xmm3
	float v14; // xmm10_4
	float v15; // xmm11_4
	float v16; // xmm14_4
	float v17; // xmm12_4
	float v18; // xmm13_4
	__m128* result; // rax
	__m128 v20; // xmm4
	__m128 v21; // xmm0
	__m128 v22; // xmm5
	__m128 v23; // xmm3
	__m128 v24; // xmm5
	float v25; // xmm2_4
	__m128 v26; // xmm4
	float v27; // xmm2_4
	__m128 v28; // [rsp+20h] [rbp-B8h]

	v2 = (__m128)0x40400000u;
	v5 = *(__m128*) * (_QWORD*)(a1 + 8);
	v6 = _mm_mul_ps(v5, v5);
	v6.m128_f32[0] = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
		+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	v7 = 1.0 / fsqrt(v6.m128_f32[0]);
	v2.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v6.m128_f32[0] * v7) * v7)) * 0.5) * v7, 0.0);
	v8 = _mm_mul_ps(v5, v5);
	v28 = _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), v5);
	v9 = (__m128) * (unsigned int*)(a1 + 16);
	v10 = fsqrt((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
	if (v10 <= v9.m128_f32[0])
	{
		v11 = (__m128)0x3FC90FDBu;
	}
	else
	{
		v9.m128_f32[0] = v9.m128_f32[0] / v10;
		*(double*)v9.m128_u64 = sub_1408FCF3C(*(double*)v9.m128_u64);
		v11 = v9;
	}
	v12 = v28.m128_f32[1];
	v13 = (__m128)0x410A9067u;
	v14 = (float)((float)(v28.m128_f32[0] * 8.6602545) * v28.m128_f32[1]) * 0.2;
	v15 = (float)((float)(v28.m128_f32[2] * v28.m128_f32[2]) - (float)((float)(v28.m128_f32[0] * v28.m128_f32[0]) * 0.5))
		- (float)((float)(v12 * v12) * 0.5);
	v16 = (float)((float)((float)(v28.m128_f32[0] * v28.m128_f32[0]) * 8.6602545) * 0.1)
		- (float)((float)((float)(v12 * v12) * 8.6602545) * 0.1);
	v17 = (float)((float)(v28.m128_f32[1] * 8.6602545) * v28.m128_f32[2]) * -0.2;
	v18 = (float)((float)(v28.m128_f32[0] * 8.6602545) * v28.m128_f32[2]) * -0.2;
	sub_1408FC950(*(double*)v11.m128_u64);
	sub_1408FE3D0(*(double*)v11.m128_u64);
	result = *(__m128**)a1;
	v20 = v11;
	v21 = *(__m128*) * (_QWORD*)a1;
	v13.m128_f32[0] = 1.7724539 - (float)(v11.m128_f32[0] * 1.7724539);
	v22.m128_f32[0] = (float)((float)(v20.m128_f32[0] * v20.m128_f32[0]) * 3.0699801) * 0.5;
	v23 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v21);
	v24 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v21);
	*(_DWORD*)a2 = v23.m128_i32[0];
	v20.m128_f32[0] = (float)((float)((float)(v11.m128_f32[0] * v11.m128_f32[0]) - 1.0)
		* (float)(v11.m128_f32[0] * -3.9633274))
		* 0.5;
	v25 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
	v26 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v21);
	*(_DWORD*)(a2 + 48) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
	*(_DWORD*)(a2 + 96) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
	v23.m128_f32[0] = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
	*(float*)(a2 + 4) = v24.m128_f32[0] * (float)-v28.m128_f32[1];
	*(float*)(a2 + 52) = v23.m128_f32[0] * (float)-v28.m128_f32[1];
	*(float*)(a2 + 100) = v25 * (float)-v28.m128_f32[1];
	*(float*)(a2 + 12) = v24.m128_f32[0] * (float)-v28.m128_f32[0];
	*(float*)(a2 + 8) = v24.m128_f32[0] * v28.m128_f32[2];
	*(float*)(a2 + 60) = v23.m128_f32[0] * (float)-v28.m128_f32[0];
	*(float*)(a2 + 56) = v23.m128_f32[0] * v28.m128_f32[2];
	*(float*)(a2 + 108) = v25 * (float)-v28.m128_f32[0];
	v23.m128_f32[0] = _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
	*(float*)(a2 + 104) = v25 * v28.m128_f32[2];
	v27 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
	*(float*)(a2 + 16) = v26.m128_f32[0] * v14;
	*(float*)(a2 + 64) = v23.m128_f32[0] * v14;
	*(float*)(a2 + 20) = v26.m128_f32[0] * v17;
	*(float*)(a2 + 112) = v27 * v14;
	*(float*)(a2 + 116) = v27 * v17;
	*(float*)(a2 + 68) = v23.m128_f32[0] * v17;
	*(float*)(a2 + 72) = v23.m128_f32[0] * v15;
	*(float*)(a2 + 24) = v26.m128_f32[0] * v15;
	*(float*)(a2 + 32) = v26.m128_f32[0] * v16;
	*(float*)(a2 + 120) = v27 * v15;
	*(float*)(a2 + 28) = v26.m128_f32[0] * v18;
	*(float*)(a2 + 76) = v23.m128_f32[0] * v18;
	*(float*)(a2 + 80) = v23.m128_f32[0] * v16;
	*(float*)(a2 + 124) = v27 * v18;
	*(float*)(a2 + 128) = v27 * v16;
	return result;
}
// 1401AF950: variable 'v22' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

