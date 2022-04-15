#include "../winhttp.h"

//----- (0000000140262900) ----------------------------------------------------
__m128* __fastcall sub_140262900(__m128* a1, __m128* a2, __m128* a3)
{
	float v3; // xmm2_4
	float v4; // xmm4_4
	float v5; // xmm6_4
	float v6; // xmm7_4
	float v7; // xmm10_4
	float v8; // xmm13_4
	float v9; // xmm8_4
	float v10; // xmm11_4
	float v11; // xmm9_4
	float v12; // xmm12_4
	float v13; // xmm13_4
	float v14; // xmm4_4
	float v15; // xmm5_4
	float v16; // xmm0_4
	float v17; // xmm2_4
	float v18; // xmm4_4
	float v19; // xmm6_4
	float v20; // xmm5_4
	float v21; // xmm0_4
	float v22; // xmm7_4
	float v23; // xmm2_4
	float v24; // xmm4_4
	float v25; // xmm8_4
	__m128* result; // rax
	float v27; // xmm0_4
	float v28; // xmm5_4
	float v29; // xmm9_4
	float v30; // xmm2_4
	float v31; // xmm4_4
	float v32; // xmm10_4
	float v33; // xmm0_4
	float v34; // xmm5_4
	float v35; // xmm11_4
	float v36; // xmm2_4
	float v37; // xmm4_4
	float v38; // xmm12_4
	__m128 v39; // xmm3
	__m128 v40; // xmm0

	v3 = a3->m128_f32[2];
	v4 = a3->m128_f32[1];
	v5 = v4 * -0.48860252;
	v6 = v3 * 0.48860252;
	v7 = (float)(v3 * v4) * -1.0925485;
	v8 = a3->m128_f32[0];
	*a2 = (__m128)xmmword_140C777D0;
	v9 = v8 * -0.48860252;
	v10 = (float)((float)((float)(v3 * 3.0) * v3) - 1.0) * 0.31539157;
	v11 = (float)(v8 * v4) * 1.0925485;
	v12 = (float)(v8 * v3) * -1.0925485;
	v13 = (float)((float)(v8 * v8) - (float)(v4 * v4)) * 0.54627424;
	v14 = (float)(a1->m128_f32[0] * 0.28209481) + a2->m128_f32[0];
	a2->m128_f32[0] = v14;
	v15 = (float)(a1[3].m128_f32[0] * 0.28209481) + a2->m128_f32[1];
	a2->m128_f32[1] = v15;
	v16 = (float)(a1[6].m128_f32[0] * 0.28209481) + a2->m128_f32[2];
	a2->m128_f32[2] = v16;
	v17 = (float)(v5 * a1->m128_f32[1]) + v14;
	a2->m128_f32[0] = v17;
	v18 = (float)(v5 * a1[3].m128_f32[1]) + v15;
	a2->m128_f32[1] = v18;
	v19 = (float)(v5 * a1[6].m128_f32[1]) + v16;
	a2->m128_f32[2] = v19;
	v20 = (float)(v6 * a1->m128_f32[2]) + v17;
	a2->m128_f32[0] = v20;
	v21 = (float)(v6 * a1[3].m128_f32[2]) + v18;
	a2->m128_f32[1] = v21;
	v22 = (float)(v6 * a1[6].m128_f32[2]) + v19;
	a2->m128_f32[2] = v22;
	v23 = (float)(v9 * a1->m128_f32[3]) + v20;
	a2->m128_f32[0] = v23;
	v24 = (float)(v9 * a1[3].m128_f32[3]) + v21;
	a2->m128_f32[1] = v24;
	v25 = (float)(v9 * a1[6].m128_f32[3]) + v22;
	result = a2;
	a2->m128_f32[2] = v25;
	v27 = (float)(v11 * a1[1].m128_f32[0]) + v23;
	a2->m128_f32[0] = v27;
	v28 = (float)(v11 * a1[4].m128_f32[0]) + v24;
	a2->m128_f32[1] = v28;
	v29 = (float)(v11 * a1[7].m128_f32[0]) + v25;
	a2->m128_f32[2] = v29;
	v30 = (float)(v7 * a1[1].m128_f32[1]) + v27;
	a2->m128_f32[0] = v30;
	v31 = (float)(v7 * a1[4].m128_f32[1]) + v28;
	a2->m128_f32[1] = v31;
	v32 = (float)(v7 * a1[7].m128_f32[1]) + v29;
	a2->m128_f32[2] = v32;
	v33 = (float)(v10 * a1[1].m128_f32[2]) + v30;
	a2->m128_f32[0] = v33;
	v34 = (float)(v10 * a1[4].m128_f32[2]) + v31;
	a2->m128_f32[1] = v34;
	v35 = (float)(v10 * a1[7].m128_f32[2]) + v32;
	a2->m128_f32[2] = v35;
	v36 = (float)(v12 * a1[1].m128_f32[3]) + v33;
	a2->m128_f32[0] = v36;
	v37 = (float)(v12 * a1[4].m128_f32[3]) + v34;
	a2->m128_f32[1] = v37;
	v38 = (float)(v12 * a1[7].m128_f32[3]) + v35;
	a2->m128_f32[2] = v38;
	a2->m128_f32[0] = (float)(v13 * a1[2].m128_f32[0]) + v36;
	a2->m128_f32[1] = (float)(v13 * a1[5].m128_f32[0]) + v37;
	a2->m128_f32[2] = (float)(v13 * a1[8].m128_f32[0]) + v38;
	v39 = _mm_mul_ps(a1[11], *a3);
	v40 = 0i64;
	v40.m128_f32[0] = fmaxf(
		0.0,
		fminf(
			(float)(v39.m128_f32[0] + _mm_shuffle_ps(v39, v39, 85).m128_f32[0])
			+ _mm_shuffle_ps(v39, v39, 170).m128_f32[0],
			1.0));
	*a2 = _mm_add_ps(*a2, _mm_mul_ps(a1[9], _mm_shuffle_ps(v40, v40, 0)));
	a2->m128_i32[3] = 1065353216;
	return result;
}
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

