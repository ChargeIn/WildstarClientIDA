//----- (0000000140252DD0) ----------------------------------------------------
void __fastcall sub_140252DD0(__m128* a1, __m128* a2)
{
	__int32 v3; // ecx
	__int32 v5; // ecx
	int v6; // ecx
	int v7; // ecx
	__m128 v8; // xmm0
	float v9; // xmm6_4
	float v10; // xmm0_4
	float v11; // xmm3_4
	float v12; // xmm1_4
	float v13; // xmm5_4
	float v14; // xmm4_4
	float v15; // xmm12_4
	float v16; // xmm0_4
	float v17; // xmm10_4
	float v18; // xmm9_4
	float v19; // xmm3_4
	float v20; // xmm10_4
	float v21; // xmm2_4
	float v22; // xmm5_4
	float v23; // xmm11_4
	float v24; // xmm6_4
	float v25; // xmm8_4
	float v26; // xmm2_4
	float v27; // xmm13_4
	float v28; // xmm3_4
	float v29; // xmm5_4
	float v30; // xmm6_4
	float v31; // xmm0_4
	float v32; // xmm1_4
	float v33; // xmm5_4
	float v34; // xmm2_4
	float v35; // xmm11_4
	float v36; // xmm2_4
	float v37; // xmm8_4
	float v38; // xmm3_4
	float v39; // xmm2_4
	double v40; // xmm7_8
	float v41; // xmm0_4
	double v42; // xmm8_8
	float v43; // xmm10_4
	float v44; // xmm9_4
	float v45; // xmm0_4
	float v46; // xmm5_4
	float v47; // xmm1_4
	float v48; // xmm9_4
	double v49; // xmm6_8
	float v50; // xmm7_4
	float v51; // xmm0_4
	float v52; // xmm5_4
	float v53; // xmm1_4
	float v54; // xmm5_4
	float v55; // xmm0_4
	float v56; // xmm5_4
	float v57; // xmm3_4
	float v58; // xmm1_4
	float v59; // xmm0_4
	float v60; // xmm3_4
	float v61; // xmm2_4
	float v62; // xmm3_4
	float v63; // xmm1_4
	float v64; // xmm0_4
	float v65; // xmm3_4
	float v66; // xmm2_4
	float v67; // xmm3_4
	float v68; // xmm0_4
	float v69; // xmm1_4
	float v70; // xmm5_4
	float v71; // xmm0_4
	float v72; // xmm3_4
	float v73; // xmm2_4
	float v74; // xmm0_4
	float v75; // xmm1_4
	float v76; // xmm3_4
	float v77; // xmm1_4
	float v78; // xmm2_4
	float v79; // xmm0_4
	float v80; // xmm1_4
	float v81; // xmm2_4
	float v82; // xmm0_4
	float v83; // xmm10_4
	float v84; // xmm9_4
	float v85; // xmm1_4
	float v86; // xmm2_4
	float v87; // xmm0_4
	float v88; // xmm8_4
	float v89; // xmm11_4
	float v90; // xmm1_4
	float v91; // xmm2_4
	float v92; // xmm3_4
	float v93; // xmm0_4
	float v94; // xmm3_4
	__m128 v95; // xmm2
	__m128 v96; // xmm1
	__m128 v97; // xmm10
	__m128 v98; // xmm9
	__m128 v99; // xmm8
	__m128 v100; // xmm4
	float v101; // xmm2_4
	__m128 v102; // xmm4
	float v103; // xmm0_4
	__m128 v104; // xmm4
	__m128 v105; // xmm3
	__m128 v106; // xmm1
	float v107; // xmm0_4
	__m128 v108; // xmm0
	__m128 v109; // xmm1
	__m128 v110; // [rsp+28h] [rbp-59h]
	__m128 v111; // [rsp+38h] [rbp-49h]

	v3 = a1[4].m128_i32[2];
	if (!v3)
	{
		v97 = a1[2];
		v98 = a1[1];
		v99 = 0i64;
		v100 = _mm_mul_ps(v97, v97);
		v101 = (float)(v100.m128_f32[0] + _mm_shuffle_ps(v100, v100, 85).m128_f32[0])
			+ _mm_shuffle_ps(v100, v100, 170).m128_f32[0];
		v102 = _mm_mul_ps(v98, v98);
		v103 = (float)(v102.m128_f32[0] + _mm_shuffle_ps(v102, v102, 85).m128_f32[0])
			+ _mm_shuffle_ps(v102, v102, 170).m128_f32[0];
		v104 = _mm_mul_ps(*a1, *a1);
		v99.m128_f32[0] = fmaxf(
			(float)(v104.m128_f32[0] + _mm_shuffle_ps(v104, v104, 85).m128_f32[0])
			+ _mm_shuffle_ps(v104, v104, 170).m128_f32[0],
			v103);
		v105 = v99;
		v105.m128_f32[0] = fmaxf(v99.m128_f32[0], v101);
		v106 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 0), *a1),
					_mm_mul_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), v98)),
				_mm_mul_ps((__m128)0i64, v97)),
			a1[3]);
		v107 = _mm_sqrt_ps(v105).m128_f32[0] * a1[9].m128_f32[3];
		a2[2] = v106;
		a2[3].m128_f32[0] = v107;
		v106.m128_f32[0] = v107;
		v108 = a2[2];
		v109 = _mm_shuffle_ps(v106, v106, 0);
		*a2 = _mm_sub_ps(v108, v109);
		a2[1] = _mm_add_ps(v109, v108);
		return;
	}
	v5 = v3 - 1;
	if (v5)
	{
		v6 = v5 - 1;
		if (v6)
		{
			v7 = v6 - 1;
			if (v7)
			{
				if (v7 != 1)
				{
					v8 = a1[3];
					*a2 = v8;
					a2[1] = v8;
					a2[2] = a1[3];
					a2[3].m128_i32[0] = 0;
					return;
				}
				v9 = sub_1408FD8A4(a1[4].m128_f32[0]);
				v10 = sub_1408FD8A4(a1[4].m128_f32[1]);
				v11 = a1[9].m128_f32[0];
				v12 = a1[8].m128_f32[1];
				v13 = a1[9].m128_f32[3];
				v14 = v10;
				v15 = -v11;
				v16 = a1[8].m128_f32[3];
				v17 = v11 * v9;
				v18 = v12 + (float)(v11 * v9);
				v19 = v11 * v14;
				v20 = v17 - v12;
				v21 = v13 * v9;
				v22 = v13 * v14;
				v23 = v16 + v19;
				v24 = v21 - v12;
				v25 = v19 - v16;
				v26 = v21 + v12;
				v27 = -a1[9].m128_f32[3];
				v28 = v22 - v16;
				v29 = v22 + v16;
			}
			else
			{
				v30 = sub_1408FD8A4(a1[4].m128_f32[0]);
				v31 = sub_1408FD8A4(a1[4].m128_f32[1]);
				v32 = a1[8].m128_f32[1];
				v33 = a1[9].m128_f32[3];
				v34 = a1[9].m128_f32[0];
				v35 = v34 * v31;
				v15 = -v34;
				v36 = v34 * v30;
				v37 = v35;
				v23 = v35 + v32;
				v18 = v32 + v36;
				v25 = v37 - v32;
				v27 = -v33;
				v20 = v36 - v32;
				v38 = v33 * v31;
				v39 = v33 * v30;
				v29 = (float)(v33 * v31) + v32;
				v28 = v38 - v32;
				v24 = v39 - v32;
				v26 = v39 + v32;
			}
		}
		else
		{
			*(_QWORD*)&v40 = a1[8].m128_u32[1];
			v41 = sub_1408FC950(v40);
			*(_QWORD*)&v42 = a1[8].m128_u32[3];
			v43 = v41;
			v44 = sub_1408FC950(v42);
			*(float*)&v40 = sub_1408FE3D0(v40) / v43;
			v45 = sub_1408FE3D0(v42);
			v46 = a1[9].m128_f32[3];
			v27 = a1[4].m128_f32[0] - v46;
			v47 = v45 / v44;
			v26 = v46 * *(float*)&v40;
			v29 = v46 * (float)(v45 / v44);
			v24 = -v26;
			v48 = fminf(v43, v44) * a1[9].m128_f32[0];
			v15 = a1[4].m128_f32[0] - v48;
			v23 = v48 * v47;
			v18 = v48 * *(float*)&v40;
			v28 = -v29;
			v25 = -v23;
			v20 = -v18;
		}
	}
	else
	{
		*(_QWORD*)&v49 = a1[8].m128_u32[1];
		v50 = sub_1408FE3D0(v49);
		v51 = sub_1408FC950(v49);
		v52 = a1[9].m128_f32[3];
		v53 = a1[9].m128_f32[0];
		v23 = v53 * v50;
		v18 = v53 * v50;
		v27 = a1[4].m128_f32[0] - v52;
		v25 = -(float)(v53 * v50);
		v29 = v52 * (float)(v50 / v51);
		v15 = a1[4].m128_f32[0] - (float)(v53 * v51);
		v26 = v29;
		v20 = v25;
		v28 = -v29;
		v24 = -v29;
	}
	if (v20 >= v24)
		v20 = v24;
	a2->m128_f32[0] = v20;
	if (v25 >= v28)
		v25 = v28;
	a2->m128_f32[1] = v25;
	a2->m128_f32[2] = v27;
	if (v18 <= v26)
		v18 = v26;
	a2[1].m128_f32[0] = v18;
	if (v23 <= v29)
		v23 = v29;
	a2[1].m128_f32[1] = v23;
	a2[1].m128_f32[2] = v15;
	v54 = a1->m128_f32[0];
	v110 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a1[3].m128_u32[0], (__m128)a1[3].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a1[3].m128_u32[1], (__m128)0i64));
	v111 = v110;
	if (a1->m128_f32[0] <= 0.0)
	{
		v55 = v54 * v18;
		v56 = v54 * v20;
	}
	else
	{
		v55 = v54 * v20;
		v56 = v54 * v18;
	}
	v57 = a1[1].m128_f32[0];
	v58 = v110.m128_f32[0] + v55;
	if (v57 <= 0.0)
	{
		v59 = v57 * v23;
		v60 = v57 * v25;
	}
	else
	{
		v59 = v57 * v25;
		v60 = v57 * v23;
	}
	v61 = (float)(v110.m128_f32[0] + v56) + v60;
	v62 = a1[2].m128_f32[0];
	v63 = v58 + v59;
	if (v62 <= 0.0)
	{
		v64 = v62 * v15;
		v65 = v62 * v27;
	}
	else
	{
		v64 = v62 * v27;
		v65 = v62 * v15;
	}
	v66 = v61 + v65;
	v67 = a1->m128_f32[1];
	v111.m128_f32[0] = v66;
	v110.m128_f32[0] = v63 + v64;
	if (v67 <= 0.0)
	{
		v68 = v18;
		v69 = v20;
	}
	else
	{
		v68 = v20;
		v69 = v18;
	}
	v70 = a1[1].m128_f32[1];
	v71 = v68 * v67;
	v72 = v111.m128_f32[1] + (float)(v69 * v67);
	v73 = v110.m128_f32[1] + v71;
	if (v70 <= 0.0)
	{
		v74 = v23;
		v75 = v25;
	}
	else
	{
		v74 = v25;
		v75 = v23;
	}
	v76 = v72 + (float)(v75 * v70);
	v77 = a1[2].m128_f32[1];
	v78 = v73 + (float)(v74 * v70);
	if (v77 <= 0.0)
	{
		v79 = v77 * v15;
		v80 = v77 * v27;
	}
	else
	{
		v79 = v77 * v27;
		v80 = v77 * v15;
	}
	v81 = v78 + v79;
	v82 = a1->m128_f32[2];
	v83 = v20 * v82;
	v84 = v18 * v82;
	v110.m128_f32[1] = v81;
	v111.m128_f32[1] = v76 + v80;
	if (v82 <= 0.0)
	{
		v85 = v110.m128_f32[2] + v84;
		v86 = v111.m128_f32[2] + v83;
	}
	else
	{
		v85 = v110.m128_f32[2] + v83;
		v86 = v111.m128_f32[2] + v84;
	}
	v87 = a1[1].m128_f32[2];
	v88 = v25 * v87;
	v89 = v23 * v87;
	if (v87 <= 0.0)
	{
		v90 = v85 + v89;
		v91 = v86 + v88;
	}
	else
	{
		v90 = v85 + v88;
		v91 = v86 + v89;
	}
	v92 = a1[2].m128_f32[2];
	if (v92 <= 0.0)
	{
		v93 = v92 * v15;
		v94 = v92 * v27;
	}
	else
	{
		v93 = v92 * v27;
		v94 = v92 * v15;
	}
	v110.m128_f32[2] = v90 + v93;
	v111.m128_f32[2] = v91 + v94;
	*a2 = v110;
	a2[1] = v111;
	v95 = _mm_sub_ps(v111, *a2);
	v96 = _mm_mul_ps(v95, v95);
	a2[2] = _mm_mul_ps(_mm_add_ps(*a2, v111), (__m128)xmmword_140B7AC50);
	a2[3].m128_f32[0] = fsqrt(
		(float)(v96.m128_f32[0] + _mm_shuffle_ps(v96, v96, 85).m128_f32[0])
		+ _mm_shuffle_ps(v96, v96, 170).m128_f32[0])
		* 0.5;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

