//----- (0000000140252A70) ----------------------------------------------------
void __fastcall sub_140252A70(__m128* a1, __m128* a2)
{
	__m128 v2; // xmm2
	__m128 v3; // xmm3
	__m128 v4; // xmm2
	__m128 v5; // xmm2
	float v6; // xmm5_4
	float v7; // xmm6_4
	float v8; // xmm3_4
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm9_4
	float v12; // xmm7_4
	float v13; // xmm8_4
	float v14; // xmm2_4
	float v15; // xmm3_4
	float v16; // xmm0_4
	float v17; // xmm1_4
	float v18; // xmm1_4
	float v19; // xmm0_4
	float v20; // xmm9_4
	float v21; // xmm10_4
	float v22; // xmm3_4
	float v23; // xmm1_4
	float v24; // xmm2_4
	float v25; // xmm2_4
	float v26; // xmm0_4
	float v27; // xmm3_4
	float v28; // xmm0_4
	float v29; // xmm3_4
	float v30; // xmm2_4
	float v31; // xmm3_4
	float v32; // xmm1_4
	float v33; // xmm0_4
	float v34; // xmm3_4
	float v35; // xmm2_4
	float v36; // xmm3_4
	float v37; // xmm1_4
	float v38; // xmm0_4
	float v39; // xmm3_4
	float v40; // xmm2_4
	float v41; // xmm3_4
	float v42; // xmm0_4
	float v43; // xmm3_4
	float v44; // xmm2_4
	float v45; // xmm3_4
	float v46; // xmm1_4
	float v47; // xmm0_4
	float v48; // xmm3_4
	float v49; // xmm2_4
	float v50; // xmm3_4
	float v51; // xmm1_4
	float v52; // xmm0_4
	float v53; // xmm3_4
	__m128 v54; // xmm5
	__m128 v55; // xmm1
	__m128 v56; // xmm3
	__m128 v57; // xmm2
	__m128 v58; // xmm1
	__m128 v59; // xmm4
	__m128 v60; // [rsp+0h] [rbp-80h]
	__m128 v61; // [rsp+10h] [rbp-70h]

	*a2 = *a1;
	a2[1] = a1[1];
	v2 = a1[1];
	v3 = _mm_add_ps(v2, *a1);
	v4 = _mm_sub_ps(v2, *a1);
	v5 = _mm_mul_ps(v4, v4);
	a2[2] = _mm_mul_ps(v3, (__m128)xmmword_140B7AC50);
	a2[3].m128_f32[0] = fsqrt(
		(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
		+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
		* 0.5;
	v6 = a2->m128_f32[0];
	v7 = a2[1].m128_f32[0];
	v60 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a1[5].m128_u32[0], (__m128)a1[5].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a1[5].m128_u32[1], (__m128)0i64));
	v61 = v60;
	v8 = a1[2].m128_f32[0];
	if (v8 <= 0.0)
	{
		v9 = a2[1].m128_f32[0];
		v10 = a2->m128_f32[0];
	}
	else
	{
		v9 = a2->m128_f32[0];
		v10 = a2[1].m128_f32[0];
	}
	v11 = a1[3].m128_f32[0];
	v12 = a2->m128_f32[1];
	v13 = a2[1].m128_f32[1];
	v14 = v60.m128_f32[0] + (float)(v9 * v8);
	v15 = v60.m128_f32[0] + (float)(v10 * v8);
	if (v11 <= 0.0)
	{
		v16 = a2[1].m128_f32[1];
		v17 = a2->m128_f32[1];
	}
	else
	{
		v16 = a2->m128_f32[1];
		v17 = a2[1].m128_f32[1];
	}
	v18 = v17 * v11;
	v19 = v16 * v11;
	v20 = a2->m128_f32[2];
	v21 = a2[1].m128_f32[2];
	v22 = v15 + v18;
	v23 = a1[4].m128_f32[0];
	v24 = v14 + v19;
	if (v23 <= 0.0)
	{
		v25 = v24 + (float)(v21 * v23);
		v26 = a2->m128_f32[2];
	}
	else
	{
		v25 = v24 + (float)(v20 * v23);
		v26 = a2[1].m128_f32[2];
	}
	v60.m128_f32[0] = v25;
	v61.m128_f32[0] = v22 + (float)(v26 * v23);
	v27 = a1[2].m128_f32[1];
	if (v27 <= 0.0)
	{
		v28 = v27 * v7;
		v29 = v27 * v6;
	}
	else
	{
		v28 = v27 * v6;
		v29 = v27 * v7;
	}
	v30 = v61.m128_f32[1] + v29;
	v31 = a1[3].m128_f32[1];
	v32 = v60.m128_f32[1] + v28;
	if (v31 <= 0.0)
	{
		v33 = v31 * v13;
		v34 = v31 * v12;
	}
	else
	{
		v33 = v31 * v12;
		v34 = v31 * v13;
	}
	v35 = v30 + v34;
	v36 = a1[4].m128_f32[1];
	v37 = v32 + v33;
	if (v36 <= 0.0)
	{
		v38 = v36 * v21;
		v39 = v36 * v20;
	}
	else
	{
		v38 = v36 * v20;
		v39 = v36 * v21;
	}
	v40 = v35 + v39;
	v41 = a1[2].m128_f32[2];
	v61.m128_f32[1] = v40;
	v60.m128_f32[1] = v37 + v38;
	if (v41 <= 0.0)
	{
		v42 = v41 * v7;
		v43 = v41 * v6;
	}
	else
	{
		v42 = v41 * v6;
		v43 = v41 * v7;
	}
	v44 = v61.m128_f32[2] + v43;
	v45 = a1[3].m128_f32[2];
	v46 = v60.m128_f32[2] + v42;
	if (v45 <= 0.0)
	{
		v47 = v45 * v13;
		v48 = v45 * v12;
	}
	else
	{
		v47 = v45 * v12;
		v48 = v45 * v13;
	}
	v49 = v44 + v48;
	v50 = a1[4].m128_f32[2];
	v51 = v46 + v47;
	if (v50 <= 0.0)
	{
		v52 = v50 * v21;
		v53 = v50 * v20;
	}
	else
	{
		v52 = v50 * v20;
		v53 = v50 * v21;
	}
	v54 = 0i64;
	v60.m128_f32[2] = v51 + v52;
	v61.m128_f32[2] = v49 + v53;
	*a2 = v60;
	a2[1] = v61;
	v55 = a2[2];
	a2[2] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), a1[2]),
				_mm_mul_ps(_mm_shuffle_ps(v55, v55, 85), a1[3])),
			_mm_mul_ps(_mm_shuffle_ps(v55, v55, 170), a1[4])),
		a1[5]);
	v56 = _mm_mul_ps(a1[4], a1[4]);
	v57 = _mm_mul_ps(a1[3], a1[3]);
	v58 = _mm_mul_ps(a1[2], a1[2]);
	v54.m128_f32[0] = fmaxf(
		(float)(v58.m128_f32[0] + _mm_shuffle_ps(v58, v58, 85).m128_f32[0])
		+ _mm_shuffle_ps(v58, v58, 170).m128_f32[0],
		(float)(v57.m128_f32[0] + _mm_shuffle_ps(v57, v57, 85).m128_f32[0])
		+ _mm_shuffle_ps(v57, v57, 170).m128_f32[0]);
	v59 = v54;
	v59.m128_f32[0] = fmaxf(
		v54.m128_f32[0],
		(float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
		+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0]);
	a2[3].m128_f32[0] = _mm_sqrt_ps(v59).m128_f32[0] * a2[3].m128_f32[0];
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

