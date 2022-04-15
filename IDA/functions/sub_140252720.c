//----- (0000000140252720) ----------------------------------------------------
void __fastcall sub_140252720(__m128* a1, __int64 a2)
{
	float v4; // xmm5_4
	float v5; // xmm4_4
	float v6; // xmm3_4
	float v7; // xmm2_4
	float v8; // xmm3_4
	float v9; // xmm9_4
	float v10; // xmm0_4
	float v11; // xmm1_4
	float v12; // xmm1_4
	float v13; // xmm0_4
	float v14; // xmm9_4
	float v15; // xmm10_4
	float v16; // xmm3_4
	float v17; // xmm1_4
	float v18; // xmm2_4
	float v19; // xmm2_4
	float v20; // xmm0_4
	float v21; // xmm3_4
	float v22; // xmm0_4
	float v23; // xmm1_4
	float v24; // xmm11_4
	float v25; // xmm0_4
	float v26; // xmm3_4
	float v27; // xmm2_4
	float v28; // xmm0_4
	float v29; // xmm1_4
	float v30; // xmm3_4
	float v31; // xmm1_4
	float v32; // xmm2_4
	float v33; // xmm0_4
	float v34; // xmm1_4
	float v35; // xmm2_4
	float v36; // xmm0_4
	float v37; // xmm5_4
	float v38; // xmm4_4
	float v39; // xmm1_4
	float v40; // xmm2_4
	float v41; // xmm0_4
	float v42; // xmm7_4
	float v43; // xmm6_4
	float v44; // xmm1_4
	float v45; // xmm2_4
	float v46; // xmm3_4
	float v47; // xmm0_4
	float v48; // xmm3_4
	__m128 v49; // xmm5
	__m128 v50; // xmm1
	__m128 v51; // xmm6
	__m128 v52; // xmm3
	__m128 v53; // xmm2
	__m128 v54; // xmm4
	__m128 v55; // [rsp+28h] [rbp-29h]
	__m128 v56; // [rsp+38h] [rbp-19h]

	sub_1402523A0(a1, a2);
	v4 = *(float*)a2;
	v5 = *(float*)(a2 + 16);
	v55 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a1[4].m128_u32[0], (__m128)a1[4].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a1[4].m128_u32[1], (__m128)0i64));
	v56 = v55;
	v6 = a1[1].m128_f32[0];
	if (v6 <= 0.0)
	{
		v7 = v55.m128_f32[0] + (float)(v5 * v6);
		v8 = v55.m128_f32[0] + (float)(v4 * v6);
	}
	else
	{
		v7 = v55.m128_f32[0] + (float)(v4 * v6);
		v8 = v55.m128_f32[0] + (float)(v5 * v6);
	}
	v9 = a1[2].m128_f32[0];
	if (v9 <= 0.0)
	{
		v10 = *(float*)(a2 + 20);
		v11 = *(float*)(a2 + 4);
	}
	else
	{
		v10 = *(float*)(a2 + 4);
		v11 = *(float*)(a2 + 20);
	}
	v12 = v11 * v9;
	v13 = v10 * v9;
	v14 = *(float*)(a2 + 8);
	v15 = *(float*)(a2 + 24);
	v16 = v8 + v12;
	v17 = a1[3].m128_f32[0];
	v18 = v7 + v13;
	if (v17 <= 0.0)
	{
		v19 = v18 + (float)(v15 * v17);
		v20 = *(float*)(a2 + 8);
	}
	else
	{
		v19 = v18 + (float)(v14 * v17);
		v20 = *(float*)(a2 + 24);
	}
	v55.m128_f32[0] = v19;
	v56.m128_f32[0] = v16 + (float)(v20 * v17);
	v21 = a1[1].m128_f32[1];
	if (v21 <= 0.0)
	{
		v22 = *(float*)(a2 + 16);
		v23 = *(float*)a2;
	}
	else
	{
		v22 = *(float*)a2;
		v23 = *(float*)(a2 + 16);
	}
	v24 = a1[2].m128_f32[1];
	v25 = v22 * v21;
	v26 = v56.m128_f32[1] + (float)(v23 * v21);
	v27 = v55.m128_f32[1] + v25;
	if (v24 <= 0.0)
	{
		v28 = *(float*)(a2 + 20);
		v29 = *(float*)(a2 + 4);
	}
	else
	{
		v28 = *(float*)(a2 + 4);
		v29 = *(float*)(a2 + 20);
	}
	v30 = v26 + (float)(v29 * v24);
	v31 = a1[3].m128_f32[1];
	v32 = v27 + (float)(v28 * v24);
	if (v31 <= 0.0)
	{
		v33 = v31 * v15;
		v34 = v31 * v14;
	}
	else
	{
		v33 = v31 * v14;
		v34 = v31 * v15;
	}
	v35 = v32 + v33;
	v36 = a1[1].m128_f32[2];
	v37 = v4 * v36;
	v38 = v5 * v36;
	v55.m128_f32[1] = v35;
	v56.m128_f32[1] = v30 + v34;
	if (v36 <= 0.0)
	{
		v39 = v55.m128_f32[2] + v38;
		v40 = v56.m128_f32[2] + v37;
	}
	else
	{
		v39 = v55.m128_f32[2] + v37;
		v40 = v56.m128_f32[2] + v38;
	}
	v41 = a1[2].m128_f32[2];
	v42 = *(float*)(a2 + 4) * v41;
	v43 = *(float*)(a2 + 20) * v41;
	if (v41 <= 0.0)
	{
		v44 = v39 + v43;
		v45 = v40 + v42;
	}
	else
	{
		v44 = v39 + v42;
		v45 = v40 + v43;
	}
	v46 = a1[3].m128_f32[2];
	if (v46 <= 0.0)
	{
		v47 = v46 * v15;
		v48 = v46 * v14;
	}
	else
	{
		v47 = v46 * v14;
		v48 = v46 * v15;
	}
	v49 = 0i64;
	v55.m128_f32[2] = v44 + v47;
	v56.m128_f32[2] = v45 + v48;
	*(__m128*)a2 = v55;
	*(__m128*)(a2 + 16) = v56;
	v50 = *(__m128*)(a2 + 32);
	*(__m128*)(a2 + 32) = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v50, v50, 0), a1[1]),
				_mm_mul_ps(_mm_shuffle_ps(v50, v50, 85), a1[2])),
			_mm_mul_ps(_mm_shuffle_ps(v50, v50, 170), a1[3])),
		a1[4]);
	v51 = _mm_mul_ps(a1[1], a1[1]);
	v52 = _mm_mul_ps(a1[3], a1[3]);
	v53 = _mm_mul_ps(a1[2], a1[2]);
	v49.m128_f32[0] = fmaxf(
		(float)(v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0])
		+ _mm_shuffle_ps(v51, v51, 170).m128_f32[0],
		(float)(v53.m128_f32[0] + _mm_shuffle_ps(v53, v53, 85).m128_f32[0])
		+ _mm_shuffle_ps(v53, v53, 170).m128_f32[0]);
	v54 = v49;
	v54.m128_f32[0] = fmaxf(
		v49.m128_f32[0],
		(float)(v52.m128_f32[0] + _mm_shuffle_ps(v52, v52, 85).m128_f32[0])
		+ _mm_shuffle_ps(v52, v52, 170).m128_f32[0]);
	*(float*)(a2 + 48) = _mm_sqrt_ps(v54).m128_f32[0] * *(float*)(a2 + 48);
}
// 140252720: using guessed type __m128 var_70;

