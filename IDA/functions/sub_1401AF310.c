#include "../winhttp.h"

//----- (00000001401AF310) ----------------------------------------------------
__m128* __fastcall sub_1401AF310(__int64 a1, __int64 a2)
{
	double v2; // xmm9_8
	float* v5; // rax
	__m128* result; // rax
	float v7; // xmm3_4
	float v8; // xmm8_4
	float v9; // xmm13_4
	float v10; // xmm14_4
	float v11; // xmm15_4
	__m128 v12; // xmm0
	__m128 v13; // xmm8
	double v14; // xmm7_8
	__m128 v15; // xmm1
	float v16; // xmm12_4
	__m128 v17; // xmm1
	__m128 v18; // xmm0
	__m128 v19; // xmm1
	__m128 v20; // xmm4
	__m128 v21; // xmm5
	__m128 v22; // xmm4
	__m128 v23; // xmm5
	float v24; // xmm3_4
	float v25; // xmm2_4
	float v26; // xmm2_4
	float v27; // xmm3_4
	float v28; // [rsp+20h] [rbp-168h]
	float v29; // [rsp+24h] [rbp-164h]
	__int64 v30[20]; // [rsp+40h] [rbp-148h] BYREF
	float v31; // [rsp+190h] [rbp+8h]
	float v32; // [rsp+1A0h] [rbp+18h]
	float v33; // [rsp+1A8h] [rbp+20h]

	*(_QWORD*)&v2 = *(unsigned int*)(a1 + 16);
	v5 = *(float**)(a1 + 8);
	if (*(float*)&v2 >= 0.000099999997)
	{
		v7 = v5[1];
		v8 = *v5;
		v9 = -v7;
		v10 = v5[2];
		v11 = -*v5;
		v29 = (float)((float)(*v5 * 8.6602545) * v10) * -0.2;
		v31 = (float)((float)(*v5 * 8.6602545) * v7) * 0.2;
		v32 = (float)((float)(v7 * 8.6602545) * v10) * -0.2;
		v12 = (__m128) * (unsigned int*)(a1 + 16);
		v33 = (float)((float)(v10 * v10) - (float)((float)(v8 * v8) * 0.5)) - (float)((float)(v7 * v7) * 0.5);
		v28 = (float)((float)((float)(v8 * v8) * 8.6602545) * 0.1) - (float)((float)((float)(v7 * v7) * 8.6602545) * 0.1);
		v12.m128_f32[0] = sub_1408FC950(v2);
		v13 = v12;
		v12.m128_f32[0] = sub_1408FE3D0(v2);
		*(_QWORD*)&v14 = *(unsigned int*)(a1 + 16);
		v15 = v13;
		*(float*)&v14 = fminf(*(float*)&v14, 1.5707964);
		v16 = (float)((float)(v12.m128_f32[0] * v12.m128_f32[0]) * 3.0699801) * 0.5;
		v12.m128_f32[0] = sub_1408FE3D0(v14);
		result = *(__m128**)a1;
		v15.m128_f32[0] = v12.m128_f32[0] * v12.m128_f32[0];
		v17 = _mm_shuffle_ps(v15, v15, 0);
		v18 = _mm_div_ps(*(__m128*) * (_QWORD*)a1, v17);
		v17.m128_f32[0] = 1.7724539 - (float)(v13.m128_f32[0] * 1.7724539);
		v19 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v18);
		v20.m128_f32[0] = v16;
		v21.m128_f32[0] = (float)((float)((float)(v13.m128_f32[0] * v13.m128_f32[0]) - 1.0)
			* (float)(v13.m128_f32[0] * -3.9633274))
			* 0.5;
		*(_DWORD*)a2 = v19.m128_i32[0];
		v22 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v18);
		v23 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v18);
		v24 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
		*(_DWORD*)(a2 + 48) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
		*(_DWORD*)(a2 + 96) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
		v25 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
		*(float*)(a2 + 4) = v22.m128_f32[0] * v9;
		*(float*)(a2 + 8) = v22.m128_f32[0] * v10;
		*(float*)(a2 + 52) = v24 * v9;
		*(float*)(a2 + 104) = v25 * v10;
		*(float*)(a2 + 12) = v22.m128_f32[0] * v11;
		*(float*)(a2 + 100) = v25 * v9;
		*(float*)(a2 + 108) = v25 * v11;
		*(float*)(a2 + 56) = v24 * v10;
		*(float*)(a2 + 60) = v24 * v11;
		v26 = _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
		*(float*)(a2 + 16) = v23.m128_f32[0] * v31;
		v27 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
		*(float*)(a2 + 64) = v27 * v31;
		*(float*)(a2 + 112) = v26 * v31;
		*(float*)(a2 + 20) = v23.m128_f32[0] * v32;
		*(float*)(a2 + 68) = v27 * v32;
		*(float*)(a2 + 116) = v26 * v32;
		*(float*)(a2 + 24) = v23.m128_f32[0] * v33;
		*(float*)(a2 + 72) = v27 * v33;
		*(float*)(a2 + 120) = v26 * v33;
		*(float*)(a2 + 28) = v23.m128_f32[0] * v29;
		*(float*)(a2 + 76) = v27 * v29;
		*(float*)(a2 + 32) = v23.m128_f32[0] * v28;
		*(float*)(a2 + 80) = v27 * v28;
		*(float*)(a2 + 128) = v26 * v28;
		*(float*)(a2 + 124) = v26 * v29;
	}
	else
	{
		v30[0] = *(_QWORD*)a1;
		v30[1] = (__int64)v5;
		return sub_1401AF0B0((__int64)v30, (float*)a2);
	}
	return result;
}
// 1401AF556: variable 'v20' is possibly undefined
// 1401AF55A: variable 'v21' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

