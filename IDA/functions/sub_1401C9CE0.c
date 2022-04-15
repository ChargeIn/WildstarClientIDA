//----- (00000001401C9CE0) ----------------------------------------------------
__int64 __fastcall sub_1401C9CE0(float* a1, __m128* a2, __m128* a3, __m128* a4)
{
	__m128 v4; // xmm12
	float v7; // xmm0_4
	float v8; // xmm0_4
	float v9; // xmm0_4
	float v10; // xmm0_4
	__m128 v12; // xmm10
	__m128 v13; // xmm11
	__m128 v14; // xmm15
	__m128 v15; // xmm7
	__m128 v16; // xmm2
	__m128 v17; // xmm4
	__m128 v18; // xmm4
	__m128 v19; // xmm1
	__m128 v20; // xmm3
	float v21; // xmm0_4
	__m128 v22; // xmm3
	__m128 v23; // xmm8
	__m128 v24; // xmm13
	__m128 v25; // xmm3
	__m128 v26; // xmm14
	float v27; // xmm14_4
	__m128 v28; // xmm3
	__m128 v29; // xmm0
	float v30; // xmm3_4
	float v31; // xmm1_4
	__m128 v32; // xmm14
	__m128 v33; // xmm3
	__m128 v34; // xmm3
	__m128 v35; // xmm0
	float v36; // xmm3_4
	float v37; // xmm1_4
	__m128 v38; // xmm3
	__m128 v39; // xmm3
	__m128 v40; // xmm0
	float v41; // xmm3_4
	float v42; // xmm1_4
	__m128 v43; // xmm9
	__m128 v44; // xmm4
	__m128 v45; // xmm2
	__m128 v46; // xmm3
	__m128 v47; // xmm4
	__m128 v48; // xmm1
	float v49; // xmm0_4
	__m128 v50; // xmm3
	__m128 v51; // xmm3
	__m128 v52; // xmm2
	float v53; // xmm2_4
	__m128 v54; // xmm3
	__m128 v55; // xmm0
	float v56; // xmm3_4
	float v57; // xmm1_4
	__m128 v58; // xmm3
	__m128 v59; // xmm3
	__m128 v60; // xmm0
	float v61; // xmm3_4
	float v62; // xmm1_4
	__m128 v63; // xmm3
	__m128 v64; // xmm3
	__m128 v65; // xmm0
	float v66; // xmm3_4
	float v67; // xmm1_4
	__m128 v68; // xmm3
	__m128 v69; // xmm2
	__m128 v70; // xmm4
	__m128 v71; // xmm4
	__m128 v72; // xmm1
	float v73; // xmm0_4
	__m128 v74; // xmm3
	__m128 v75; // xmm3
	__m128 v76; // xmm2
	float v77; // xmm2_4
	__m128 v78; // xmm3
	__m128 v79; // xmm0
	float v80; // xmm3_4
	__m128 v81; // xmm1
	__m128 v82; // xmm3
	__m128 v83; // xmm3
	__m128 v84; // xmm0
	float v85; // xmm3_4
	__m128 v86; // xmm1
	__m128 v87; // xmm3
	__m128 v88; // xmm3
	__m128 v89; // xmm0
	float v90; // xmm3_4
	__m128 v91; // xmm1
	__m128 v92; // xmm3
	__m128 v93; // xmm2
	__m128 v94; // xmm4
	__m128 v95; // xmm4
	__m128 v96; // xmm1
	float v97; // xmm0_4
	__m128 v98; // xmm3
	__m128 v99; // xmm3
	__m128 v100; // xmm4
	__m128 v101; // xmm2
	float v102; // xmm2_4
	__m128 v103; // xmm3
	__m128 v104; // xmm0
	float v105; // xmm3_4
	__m128 v106; // xmm1
	__m128 v107; // xmm3
	__m128 v108; // xmm3
	__m128 v109; // xmm0
	float v110; // xmm3_4
	__m128 v111; // xmm1
	__m128 v112; // xmm3
	__m128 v113; // xmm1
	__m128 v114; // xmm0
	float v115; // xmm3_4
	__m128 v116; // xmm1
	__m128 v117; // xmm3
	__m128 v118; // xmm2
	__m128 v119; // xmm4
	__m128 v120; // xmm4
	__m128 v121; // xmm1
	float v122; // xmm0_4
	__m128 v123; // xmm3
	__m128 v124; // xmm3
	__m128 v125; // xmm3
	__m128 v126; // xmm4
	float v127; // xmm4_4
	__m128 v128; // xmm2
	__m128 v129; // xmm0
	float v130; // xmm2_4
	__m128 v131; // xmm1
	__m128 v132; // xmm2
	__m128 v133; // xmm2
	__m128 v134; // xmm0
	float v135; // xmm2_4
	__m128 v136; // xmm1
	__m128 v137; // xmm2
	__m128 v138; // xmm2
	__m128 v139; // xmm0
	float v140; // xmm2_4
	__m128 v141; // xmm1
	__m128 v142; // xmm2
	__m128 v143; // xmm3
	__m128 v144; // xmm3
	__m128 v145; // xmm1
	__m128 v146; // xmm1
	float v147; // xmm0_4
	__m128 v148; // xmm1
	__m128 v149; // xmm3
	__m128 v150; // xmm1
	__m128 v151; // xmm2
	__m128 v152; // xmm0
	float v153; // xmm2_4
	__m128 v154; // xmm1
	__m128* v155; // r8
	__m128* v156; // r11
	float v157; // xmm5_4
	__m128 v158; // xmm1
	__m128* v159; // r10
	__m128* v160; // r11
	float v161; // xmm5_4
	__m128 v162; // xmm14
	__m128 v163; // xmm13
	__m128* v164; // r8
	__m128* v165; // r9
	__m128* v166; // r10
	__m128* v167; // r8
	__m128* v168; // r9
	__m128* v169; // r10
	__m128* v170; // r8
	__m128* v171; // r9
	__m128* v172; // r10
	__m128* v173; // r8
	__m128* v174; // r9
	__m128* v175; // r10
	__m128* v176; // r8
	__m128* v177; // r9
	__m128* v178; // r10
	float v179; // xmm8_4
	__m128* v180; // r8
	__m128* v181; // r9
	__m128* v182; // r10
	__m128* v183; // r8
	__m128* v184; // r9
	__m128* v185; // r10
	__m128* v186; // r8
	__m128* v187; // r9
	__m128* v188; // r10
	__m128* v189; // r8
	__m128* v190; // r9
	__m128* v191; // r10
	__m128* v192; // r8
	__m128* v193; // r9
	__m128* v194; // r10
	__m128* v195; // r8
	__m128* v196; // r9
	__m128* v197; // r10
	__m128* v198; // r8
	__m128* v199; // r10
	__m128* v200; // r11
	__m128* v201; // r8
	__m128* v202; // r9
	__m128* v203; // r11
	__m128* v204; // r8
	__m128* v205; // r9
	__m128* v206; // r11
	__m128* v207; // r8
	__m128* v208; // r9
	__m128* v209; // r11
	__m128* v210; // r8
	__m128* v211; // r9
	__m128* v212; // r11
	__m128 v213; // xmm9
	__m128* v214; // r8
	__m128* v215; // r9
	__m128* v216; // r11
	__m128 v217; // xmm12
	__m128* v218; // r8
	__m128* v219; // r9
	__m128* v220; // r11
	__m128* v221; // r8
	__m128* v222; // r9
	__m128* v223; // r11
	__m128* v224; // r8
	__m128* v225; // r9
	__m128* v226; // r11
	__m128* v227; // r8
	__m128* v228; // r9
	__m128* v229; // r11
	__m128* v230; // r8
	__m128* v231; // r9
	__m128* v232; // r11
	__m128* v233; // r8
	__m128* v234; // r9
	__m128* v235; // r11
	float v236; // [rsp+48h] [rbp-C0h] BYREF
	__int128 v237; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v238; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v239; // [rsp+78h] [rbp-90h] BYREF
	__m128 v240; // [rsp+88h] [rbp-80h] BYREF
	float v241[4]; // [rsp+98h] [rbp-70h] BYREF
	__m128 v242; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v243; // [rsp+B8h] [rbp-50h]
	__m128 v244; // [rsp+C8h] [rbp-40h]
	__m128 v245; // [rsp+D8h] [rbp-30h]
	__m128 v246; // [rsp+E8h] [rbp-20h]
	__m128 v247; // [rsp+F8h] [rbp-10h]
	__m128 v248; // [rsp+108h] [rbp+0h]
	__m128 v249; // [rsp+118h] [rbp+10h]
	__m128 v250; // [rsp+128h] [rbp+20h]
	float v251; // [rsp+1E8h] [rbp+E0h] BYREF
	float v252; // [rsp+1F8h] [rbp+F0h] BYREF

	v4 = (__m128) * (unsigned int*)a1;
	if (a3->m128_f32[0] >= v4.m128_f32[0] && a3->m128_f32[0] <= a1[4])
	{
		v7 = a3->m128_f32[1];
		if (v7 >= a1[1] && v7 <= a1[5])
		{
			v8 = a3->m128_f32[2];
			if (v8 >= a1[2] && v8 <= a1[6])
				return 1i64;
		}
	}
	if (a4->m128_f32[0] >= v4.m128_f32[0] && a4->m128_f32[0] <= a1[4])
	{
		v9 = a4->m128_f32[1];
		if (v9 >= a1[1] && v9 <= a1[5])
		{
			v10 = a4->m128_f32[2];
			if (v10 >= a1[2] && v10 <= a1[6])
				return 1i64;
		}
	}
	v252 = a1[1];
	v12 = (__m128) * ((unsigned int*)a1 + 6);
	v13 = (__m128) * ((unsigned int*)a1 + 5);
	v14 = (__m128) * ((unsigned int*)a1 + 2);
	v247 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, v12), _mm_unpacklo_ps((__m128)LODWORD(v252), (__m128)0i64));
	v15 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, v14), _mm_unpacklo_ps((__m128)LODWORD(v252), (__m128)0i64));
	v246 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, v14), _mm_unpacklo_ps(v13, (__m128)0i64));
	v16 = _mm_sub_ps(v246, v15);
	v17 = _mm_sub_ps(v247, v15);
	v243 = v15;
	v242 = (__m128)0x3F000000u;
	v18 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v17, v17, 210), _mm_shuffle_ps(v16, v16, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v17, v17, 201), _mm_shuffle_ps(v16, v16, 210)));
	v19 = _mm_mul_ps(v18, v18);
	v16.m128_f32[0] = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
		+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
	v20 = (__m128)0x40400000u;
	v245 = (__m128)0x40400000u;
	v21 = fsqrt(v16.m128_f32[0]);
	v20.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v16.m128_f32[0] * (float)(1.0 / v21)) * (float)(1.0 / v21)))
			* 0.5)
		* (float)(1.0 / v21),
		0.0);
	v22 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v18);
	v244.m128_u64[0] = v22.m128_u64[0];
	v244.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v22, 8));
	v23 = *a2;
	v24 = *a3;
	v25 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v22, _mm_shuffle_ps(v22, v22, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v22, v22, 85), (__m128)0i64)),
		v15);
	v249 = _mm_sub_ps(*a2, *a3);
	v244.m128_f32[3] = -(float)((float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
		+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0]);
	v26 = _mm_mul_ps(v249, v244);
	v27 = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0]) + _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
	if (fabs(v27) >= 0.0000099999997)
	{
		v28 = _mm_mul_ps(v244, v23);
		v29 = _mm_shuffle_ps(v244, v244, 255);
		v30 = (float)((float)((float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
			+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0])
			+ v29.m128_f32[0])
			/ v27;
		if (v30 >= 0.0 && v30 <= 1.0)
		{
			v29.m128_f32[0] = v30;
			v251 = v30;
			v240 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v23), _mm_shuffle_ps(v29, v29, 0)), v23);
			v31 = _mm_shuffle_ps(v240, v240, 85).m128_f32[0];
			if (v31 >= v252
				&& v31 <= v13.m128_f32[0]
				&& v240.m128_f32[2] >= v14.m128_f32[0]
				&& v240.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v32 = *a4;
	v250 = _mm_sub_ps(v23, *a4);
	v33 = _mm_mul_ps(v250, v244);
	v33.m128_f32[0] = (float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
		+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
	v240 = v33;
	if (fabs(v33.m128_f32[0]) >= 0.0000099999997)
	{
		v34 = _mm_mul_ps(v23, v244);
		v35 = _mm_shuffle_ps(v244, v244, 255);
		v36 = (float)((float)((float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
			+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0])
			+ v35.m128_f32[0])
			/ v240.m128_f32[0];
		if (v36 >= 0.0 && v36 <= 1.0)
		{
			v35.m128_f32[0] = v36;
			v251 = v36;
			v240 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v23), _mm_shuffle_ps(v35, v35, 0)), v23);
			v37 = _mm_shuffle_ps(v240, v240, 85).m128_f32[0];
			if (v37 >= v252
				&& v37 <= v13.m128_f32[0]
				&& v240.m128_f32[2] >= v14.m128_f32[0]
				&& v240.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v239 = _mm_sub_ps(v24, v32);
	v38 = _mm_mul_ps(v239, v244);
	v38.m128_f32[0] = (float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
		+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
	v240 = v38;
	if (fabs(v38.m128_f32[0]) >= 0.0000099999997)
	{
		v39 = _mm_mul_ps(v24, v244);
		v40 = _mm_shuffle_ps(v39, v39, 85);
		v41 = (float)((float)((float)(v39.m128_f32[0] + v40.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 170).m128_f32[0])
			+ v244.m128_f32[3])
			/ v240.m128_f32[0];
		if (v41 >= 0.0 && v41 <= 1.0)
		{
			v40.m128_f32[0] = v41;
			v251 = v41;
			v240 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v24), _mm_shuffle_ps(v40, v40, 0)), v24);
			v42 = _mm_shuffle_ps(v240, v240, 85).m128_f32[0];
			if (v42 >= v252
				&& v42 <= v13.m128_f32[0]
				&& v240.m128_f32[2] >= v14.m128_f32[0]
				&& v240.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v43 = (__m128) * ((unsigned int*)a1 + 4);
	v240 = _mm_unpacklo_ps(_mm_unpacklo_ps(v43, v12), _mm_unpacklo_ps((__m128)LODWORD(v252), (__m128)0i64));
	v244 = _mm_unpacklo_ps(_mm_unpacklo_ps(v43, v14), _mm_unpacklo_ps(v13, (__m128)0i64));
	v248 = _mm_unpacklo_ps(_mm_unpacklo_ps(v43, v14), _mm_unpacklo_ps((__m128)LODWORD(v252), (__m128)0i64));
	v44 = _mm_sub_ps(v240, v248);
	v45 = _mm_sub_ps(v244, v248);
	v46 = v245;
	v47 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v44, v44, 210), _mm_shuffle_ps(v45, v45, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v44, v44, 201), _mm_shuffle_ps(v45, v45, 210)));
	v48 = _mm_mul_ps(v47, v47);
	v45.m128_f32[0] = (float)(v48.m128_f32[0] + _mm_shuffle_ps(v48, v48, 85).m128_f32[0])
		+ _mm_shuffle_ps(v48, v48, 170).m128_f32[0];
	v49 = fsqrt(v45.m128_f32[0]);
	v46.m128_f32[0] = fmaxf(
		(float)((float)(v245.m128_f32[0]
			- (float)((float)(v45.m128_f32[0] * (float)(1.0 / v49)) * (float)(1.0 / v49)))
			* v242.m128_f32[0])
		* (float)(1.0 / v49),
		0.0);
	v50 = _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v47);
	*(_QWORD*)&v237 = v50.m128_u64[0];
	DWORD2(v237) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v50, 8));
	v51 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v50, _mm_shuffle_ps(v50, v50, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v50, v50, 85), (__m128)0i64)),
		v248);
	*((float*)&v237 + 3) = -(float)((float)(v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0])
		+ _mm_shuffle_ps(v51, v51, 170).m128_f32[0]);
	v52 = _mm_mul_ps(v249, (__m128)v237);
	v53 = (float)(v52.m128_f32[0] + _mm_shuffle_ps(v52, v52, 85).m128_f32[0]) + _mm_shuffle_ps(v52, v52, 170).m128_f32[0];
	if (fabs(v53) >= 0.0000099999997)
	{
		v54 = _mm_mul_ps(v23, (__m128)v237);
		v55 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 255);
		v56 = (float)((float)((float)(v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0])
			+ _mm_shuffle_ps(v54, v54, 170).m128_f32[0])
			+ v55.m128_f32[0])
			/ v53;
		if (v56 >= 0.0 && v56 <= 1.0)
		{
			v55.m128_f32[0] = v56;
			v251 = v56;
			v238 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v23), _mm_shuffle_ps(v55, v55, 0)), v23);
			v57 = _mm_shuffle_ps(v238, v238, 85).m128_f32[0];
			if (v57 >= v252
				&& v57 <= v13.m128_f32[0]
				&& v238.m128_f32[2] >= v14.m128_f32[0]
				&& v238.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v58 = _mm_mul_ps(v250, (__m128)v237);
	v58.m128_f32[0] = (float)(v58.m128_f32[0] + _mm_shuffle_ps(v58, v58, 85).m128_f32[0])
		+ _mm_shuffle_ps(v58, v58, 170).m128_f32[0];
	v238 = v58;
	if (fabs(v58.m128_f32[0]) >= 0.0000099999997)
	{
		v59 = _mm_mul_ps(v23, (__m128)v237);
		v60 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 255);
		v61 = (float)((float)((float)(v59.m128_f32[0] + _mm_shuffle_ps(v59, v59, 85).m128_f32[0])
			+ _mm_shuffle_ps(v59, v59, 170).m128_f32[0])
			+ v60.m128_f32[0])
			/ v238.m128_f32[0];
		if (v61 >= 0.0 && v61 <= 1.0)
		{
			v60.m128_f32[0] = v61;
			v251 = v61;
			v238 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v23), _mm_shuffle_ps(v60, v60, 0)), v23);
			v62 = _mm_shuffle_ps(v238, v238, 85).m128_f32[0];
			if (v62 >= v252
				&& v62 <= v13.m128_f32[0]
				&& v238.m128_f32[2] >= v14.m128_f32[0]
				&& v238.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v63 = _mm_mul_ps(v239, (__m128)v237);
	v63.m128_f32[0] = (float)(v63.m128_f32[0] + _mm_shuffle_ps(v63, v63, 85).m128_f32[0])
		+ _mm_shuffle_ps(v63, v63, 170).m128_f32[0];
	v238 = v63;
	if (fabs(v63.m128_f32[0]) >= 0.0000099999997)
	{
		v64 = _mm_mul_ps(v24, (__m128)v237);
		v65 = _mm_shuffle_ps(v64, v64, 85);
		v66 = (float)((float)((float)(v64.m128_f32[0] + v65.m128_f32[0]) + _mm_shuffle_ps(v64, v64, 170).m128_f32[0])
			+ *((float*)&v237 + 3))
			/ v238.m128_f32[0];
		if (v66 >= 0.0 && v66 <= 1.0)
		{
			v65.m128_f32[0] = v66;
			v251 = v66;
			v238 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v24), _mm_shuffle_ps(v65, v65, 0)), v24);
			v67 = _mm_shuffle_ps(v238, v238, 85).m128_f32[0];
			if (v67 >= v252
				&& v67 <= v13.m128_f32[0]
				&& v238.m128_f32[2] >= v14.m128_f32[0]
				&& v238.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v68 = v245;
	v69 = _mm_sub_ps(v248, v243);
	v70 = _mm_sub_ps(v247, v243);
	v71 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v70, v70, 210), _mm_shuffle_ps(v69, v69, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v70, v70, 201), _mm_shuffle_ps(v69, v69, 210)));
	v72 = _mm_mul_ps(v71, v71);
	v69.m128_f32[0] = (float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
		+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0];
	v73 = fsqrt(v69.m128_f32[0]);
	v68.m128_f32[0] = fmaxf(
		(float)((float)(v245.m128_f32[0]
			- (float)((float)(v69.m128_f32[0] * (float)(1.0 / v73)) * (float)(1.0 / v73)))
			* v242.m128_f32[0])
		* (float)(1.0 / v73),
		0.0);
	v74 = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v71);
	*(_QWORD*)&v237 = v74.m128_u64[0];
	DWORD2(v237) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v74, 8));
	v75 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v74, _mm_shuffle_ps(v74, v74, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v74, v74, 85), (__m128)0i64)),
		v243);
	*((float*)&v237 + 3) = -(float)((float)(v75.m128_f32[0] + _mm_shuffle_ps(v75, v75, 85).m128_f32[0])
		+ _mm_shuffle_ps(v75, v75, 170).m128_f32[0]);
	v76 = _mm_mul_ps(v249, (__m128)v237);
	v77 = (float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0]) + _mm_shuffle_ps(v76, v76, 170).m128_f32[0];
	if (fabs(v77) >= 0.0000099999997)
	{
		v78 = _mm_mul_ps((__m128)v237, v23);
		v79 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 255);
		v80 = (float)((float)((float)(v78.m128_f32[0] + _mm_shuffle_ps(v78, v78, 85).m128_f32[0])
			+ _mm_shuffle_ps(v78, v78, 170).m128_f32[0])
			+ v79.m128_f32[0])
			/ v77;
		if (v80 >= 0.0 && v80 <= 1.0)
		{
			v79.m128_f32[0] = v80;
			v251 = v80;
			v81 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v23), _mm_shuffle_ps(v79, v79, 0)), v23);
			v238 = v81;
			if (v81.m128_f32[0] >= v4.m128_f32[0]
				&& v81.m128_f32[0] <= v43.m128_f32[0]
				&& v238.m128_f32[2] >= v14.m128_f32[0]
				&& v238.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v82 = _mm_mul_ps(v250, (__m128)v237);
	v82.m128_f32[0] = (float)(v82.m128_f32[0] + _mm_shuffle_ps(v82, v82, 85).m128_f32[0])
		+ _mm_shuffle_ps(v82, v82, 170).m128_f32[0];
	v238 = v82;
	if (fabs(v82.m128_f32[0]) >= 0.0000099999997)
	{
		v83 = _mm_mul_ps((__m128)v237, v23);
		v84 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 255);
		v85 = (float)((float)((float)(v83.m128_f32[0] + _mm_shuffle_ps(v83, v83, 85).m128_f32[0])
			+ _mm_shuffle_ps(v83, v83, 170).m128_f32[0])
			+ v84.m128_f32[0])
			/ v238.m128_f32[0];
		if (v85 >= 0.0 && v85 <= 1.0)
		{
			v84.m128_f32[0] = v85;
			v251 = v85;
			v86 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v23), _mm_shuffle_ps(v84, v84, 0)), v23);
			v238 = v86;
			if (v86.m128_f32[0] >= v4.m128_f32[0]
				&& v86.m128_f32[0] <= v43.m128_f32[0]
				&& v238.m128_f32[2] >= v14.m128_f32[0]
				&& v238.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v87 = _mm_mul_ps(v239, (__m128)v237);
	v87.m128_f32[0] = (float)(v87.m128_f32[0] + _mm_shuffle_ps(v87, v87, 85).m128_f32[0])
		+ _mm_shuffle_ps(v87, v87, 170).m128_f32[0];
	v238 = v87;
	if (fabs(v87.m128_f32[0]) >= 0.0000099999997)
	{
		v88 = _mm_mul_ps((__m128)v237, v24);
		v89 = _mm_shuffle_ps(v88, v88, 85);
		v90 = (float)((float)((float)(v88.m128_f32[0] + v89.m128_f32[0]) + _mm_shuffle_ps(v88, v88, 170).m128_f32[0])
			+ *((float*)&v237 + 3))
			/ v238.m128_f32[0];
		if (v90 >= 0.0 && v90 <= 1.0)
		{
			v89.m128_f32[0] = v90;
			v251 = v90;
			v91 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v24), _mm_shuffle_ps(v89, v89, 0)), v24);
			v238 = v91;
			if (v91.m128_f32[0] >= v4.m128_f32[0]
				&& v91.m128_f32[0] <= v43.m128_f32[0]
				&& v238.m128_f32[2] >= v14.m128_f32[0]
				&& v238.m128_f32[2] <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v238 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, v12), _mm_unpacklo_ps(v13, (__m128)0i64));
	v92 = v245;
	v93 = _mm_sub_ps(v244, v246);
	v94 = _mm_sub_ps(v238, v246);
	v95 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v94, v94, 210), _mm_shuffle_ps(v93, v93, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v94, v94, 201), _mm_shuffle_ps(v93, v93, 210)));
	v96 = _mm_mul_ps(v95, v95);
	v93.m128_f32[0] = (float)(v96.m128_f32[0] + _mm_shuffle_ps(v96, v96, 85).m128_f32[0])
		+ _mm_shuffle_ps(v96, v96, 170).m128_f32[0];
	v97 = fsqrt(v93.m128_f32[0]);
	v92.m128_f32[0] = fmaxf(
		(float)((float)(v245.m128_f32[0]
			- (float)((float)(v93.m128_f32[0] * (float)(1.0 / v97)) * (float)(1.0 / v97)))
			* v242.m128_f32[0])
		* (float)(1.0 / v97),
		0.0);
	v98 = _mm_mul_ps(_mm_shuffle_ps(v92, v92, 0), v95);
	*(_QWORD*)&v237 = v98.m128_u64[0];
	DWORD2(v237) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v98, 8));
	v99 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v98, _mm_shuffle_ps(v98, v98, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v98, v98, 85), (__m128)0i64)),
		v246);
	*((float*)&v237 + 3) = -(float)((float)(v99.m128_f32[0] + _mm_shuffle_ps(v99, v99, 85).m128_f32[0])
		+ _mm_shuffle_ps(v99, v99, 170).m128_f32[0]);
	v100 = (__m128)v237;
	v101 = _mm_mul_ps(v249, (__m128)v237);
	v102 = (float)(v101.m128_f32[0] + _mm_shuffle_ps(v101, v101, 85).m128_f32[0])
		+ _mm_shuffle_ps(v101, v101, 170).m128_f32[0];
	if (fabs(v102) >= 0.0000099999997)
	{
		v103 = _mm_mul_ps(v23, (__m128)v237);
		v104 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 255);
		v105 = (float)((float)((float)(v103.m128_f32[0] + _mm_shuffle_ps(v103, v103, 85).m128_f32[0])
			+ _mm_shuffle_ps(v103, v103, 170).m128_f32[0])
			+ v104.m128_f32[0])
			/ v102;
		if (v105 >= 0.0 && v105 <= 1.0)
		{
			v104.m128_f32[0] = v105;
			v251 = v105;
			v106 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v23), _mm_shuffle_ps(v104, v104, 0)), v23);
			v237 = (__int128)v106;
			if (v106.m128_f32[0] >= v4.m128_f32[0]
				&& v106.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 2) >= v14.m128_f32[0]
				&& *((float*)&v237 + 2) <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v107 = _mm_mul_ps(v250, v100);
	v107.m128_f32[0] = (float)(v107.m128_f32[0] + _mm_shuffle_ps(v107, v107, 85).m128_f32[0])
		+ _mm_shuffle_ps(v107, v107, 170).m128_f32[0];
	v237 = (__int128)v107;
	if (fabs(v107.m128_f32[0]) >= 0.0000099999997)
	{
		v108 = _mm_mul_ps(v23, v100);
		v109 = _mm_shuffle_ps(v100, v100, 255);
		v110 = (float)((float)((float)(v108.m128_f32[0] + _mm_shuffle_ps(v108, v108, 85).m128_f32[0])
			+ _mm_shuffle_ps(v108, v108, 170).m128_f32[0])
			+ v109.m128_f32[0])
			/ *(float*)&v237;
		if (v110 >= 0.0 && v110 <= 1.0)
		{
			v109.m128_f32[0] = v110;
			v251 = v110;
			v111 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v23), _mm_shuffle_ps(v109, v109, 0)), v23);
			v237 = (__int128)v111;
			if (v111.m128_f32[0] >= v4.m128_f32[0]
				&& v111.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 2) >= v14.m128_f32[0]
				&& *((float*)&v237 + 2) <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v112 = _mm_mul_ps(v239, v100);
	v112.m128_f32[0] = (float)(v112.m128_f32[0] + _mm_shuffle_ps(v112, v112, 85).m128_f32[0])
		+ _mm_shuffle_ps(v112, v112, 170).m128_f32[0];
	v237 = (__int128)v112;
	if (fabs(v112.m128_f32[0]) >= 0.0000099999997)
	{
		v113 = _mm_mul_ps(v24, v100);
		v114 = _mm_shuffle_ps(v113, v113, 85);
		v115 = (float)((float)((float)(v113.m128_f32[0] + v114.m128_f32[0]) + _mm_shuffle_ps(v113, v113, 170).m128_f32[0])
			+ _mm_shuffle_ps(v100, v100, 255).m128_f32[0])
			/ *(float*)&v237;
		if (v115 >= 0.0 && v115 <= 1.0)
		{
			v114.m128_f32[0] = v115;
			v251 = v115;
			v116 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v24), _mm_shuffle_ps(v114, v114, 0)), v24);
			v237 = (__int128)v116;
			if (v116.m128_f32[0] >= v4.m128_f32[0]
				&& v116.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 2) >= v14.m128_f32[0]
				&& *((float*)&v237 + 2) <= v12.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v117 = v245;
	v118 = _mm_sub_ps(v238, v247);
	v119 = _mm_sub_ps(v240, v247);
	v120 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v119, v119, 210), _mm_shuffle_ps(v118, v118, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v119, v119, 201), _mm_shuffle_ps(v118, v118, 210)));
	v121 = _mm_mul_ps(v120, v120);
	v118.m128_f32[0] = (float)(v121.m128_f32[0] + _mm_shuffle_ps(v121, v121, 85).m128_f32[0])
		+ _mm_shuffle_ps(v121, v121, 170).m128_f32[0];
	v122 = 1.0 / fsqrt(v118.m128_f32[0]);
	v117.m128_f32[0] = fmaxf(
		(float)((float)(v245.m128_f32[0] - (float)((float)(v118.m128_f32[0] * v122) * v122))
			* v242.m128_f32[0])
		* v122,
		0.0);
	v123 = _mm_mul_ps(_mm_shuffle_ps(v117, v117, 0), v120);
	*(_QWORD*)&v237 = v123.m128_u64[0];
	DWORD2(v237) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v123, 8));
	v124 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v123, _mm_shuffle_ps(v123, v123, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v123, v123, 85), (__m128)0i64)),
		v247);
	*((float*)&v237 + 3) = -(float)((float)(v124.m128_f32[0] + _mm_shuffle_ps(v124, v124, 85).m128_f32[0])
		+ _mm_shuffle_ps(v124, v124, 170).m128_f32[0]);
	v125 = (__m128)v237;
	v126 = _mm_mul_ps(v249, (__m128)v237);
	v127 = (float)(v126.m128_f32[0] + _mm_shuffle_ps(v126, v126, 85).m128_f32[0])
		+ _mm_shuffle_ps(v126, v126, 170).m128_f32[0];
	if (fabs(v127) >= 0.0000099999997)
	{
		v128 = _mm_mul_ps(v23, (__m128)v237);
		v129 = _mm_shuffle_ps((__m128)v237, (__m128)v237, 255);
		v130 = (float)((float)((float)(v128.m128_f32[0] + _mm_shuffle_ps(v128, v128, 85).m128_f32[0])
			+ _mm_shuffle_ps(v128, v128, 170).m128_f32[0])
			+ v129.m128_f32[0])
			/ v127;
		if (v130 >= 0.0 && v130 <= 1.0)
		{
			v129.m128_f32[0] = v130;
			v251 = v130;
			v131 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v23), _mm_shuffle_ps(v129, v129, 0)), v23);
			v237 = (__int128)v131;
			if (v131.m128_f32[0] >= v4.m128_f32[0]
				&& v131.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 1) >= v252
				&& *((float*)&v237 + 1) <= v13.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v132 = _mm_mul_ps(v250, v125);
	v132.m128_f32[0] = (float)(v132.m128_f32[0] + _mm_shuffle_ps(v132, v132, 85).m128_f32[0])
		+ _mm_shuffle_ps(v132, v132, 170).m128_f32[0];
	v237 = (__int128)v132;
	if (fabs(v132.m128_f32[0]) >= 0.0000099999997)
	{
		v133 = _mm_mul_ps(v23, v125);
		v134 = _mm_shuffle_ps(v125, v125, 255);
		v135 = (float)((float)((float)(v133.m128_f32[0] + _mm_shuffle_ps(v133, v133, 85).m128_f32[0])
			+ _mm_shuffle_ps(v133, v133, 170).m128_f32[0])
			+ v134.m128_f32[0])
			/ *(float*)&v237;
		if (v135 >= 0.0 && v135 <= 1.0)
		{
			v134.m128_f32[0] = v135;
			v251 = v135;
			v136 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v23), _mm_shuffle_ps(v134, v134, 0)), v23);
			v237 = (__int128)v136;
			if (v136.m128_f32[0] >= v4.m128_f32[0]
				&& v136.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 1) >= v252
				&& *((float*)&v237 + 1) <= v13.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v137 = _mm_mul_ps(v239, v125);
	v137.m128_f32[0] = (float)(v137.m128_f32[0] + _mm_shuffle_ps(v137, v137, 85).m128_f32[0])
		+ _mm_shuffle_ps(v137, v137, 170).m128_f32[0];
	v237 = (__int128)v137;
	if (fabs(v137.m128_f32[0]) >= 0.0000099999997)
	{
		v138 = _mm_mul_ps(v125, v24);
		v139 = _mm_shuffle_ps(v138, v138, 85);
		v140 = (float)((float)((float)(v138.m128_f32[0] + v139.m128_f32[0]) + _mm_shuffle_ps(v138, v138, 170).m128_f32[0])
			+ _mm_shuffle_ps(v125, v125, 255).m128_f32[0])
			/ *(float*)&v237;
		if (v140 >= 0.0 && v140 <= 1.0)
		{
			v139.m128_f32[0] = v140;
			v251 = v140;
			v141 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v24), _mm_shuffle_ps(v139, v139, 0)), v24);
			v237 = (__int128)v141;
			if (v141.m128_f32[0] >= v4.m128_f32[0]
				&& v141.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 1) >= v252
				&& *((float*)&v237 + 1) <= v13.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	v142 = _mm_sub_ps(v246, v243);
	v143 = _mm_sub_ps(v248, v243);
	v144 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v143, v143, 210), _mm_shuffle_ps(v142, v142, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v143, v143, 201), _mm_shuffle_ps(v142, v142, 210)));
	v145 = _mm_mul_ps(v144, v144);
	v142.m128_f32[0] = (float)(v145.m128_f32[0] + _mm_shuffle_ps(v145, v145, 85).m128_f32[0])
		+ _mm_shuffle_ps(v145, v145, 170).m128_f32[0];
	v146 = v245;
	v147 = fsqrt(v142.m128_f32[0]);
	v146.m128_f32[0] = fmaxf(
		(float)((float)(v245.m128_f32[0]
			- (float)((float)(v142.m128_f32[0] * (float)(1.0 / v147)) * (float)(1.0 / v147)))
			* v242.m128_f32[0])
		* (float)(1.0 / v147),
		0.0);
	v148 = _mm_mul_ps(_mm_shuffle_ps(v146, v146, 0), v144);
	v242.m128_u64[0] = v148.m128_u64[0];
	v245 = v148;
	v242.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v148, 8));
	v149 = _mm_mul_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(v148, _mm_shuffle_ps(v148, v148, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps(v148, v148, 85), (__m128)0i64)),
		v243);
	v242.m128_f32[3] = -(float)((float)(v149.m128_f32[0] + _mm_shuffle_ps(v149, v149, 85).m128_f32[0])
		+ _mm_shuffle_ps(v149, v149, 170).m128_f32[0]);
	v150 = _mm_mul_ps(v249, v242);
	v150.m128_f32[0] = (float)(v150.m128_f32[0] + _mm_shuffle_ps(v150, v150, 85).m128_f32[0])
		+ _mm_shuffle_ps(v150, v150, 170).m128_f32[0];
	v237 = (__int128)v150;
	if (fabs(v150.m128_f32[0]) >= 0.0000099999997)
	{
		v151 = _mm_mul_ps(v242, v23);
		v152 = _mm_shuffle_ps(v151, v151, 85);
		v153 = (float)((float)((float)(v151.m128_f32[0] + v152.m128_f32[0]) + _mm_shuffle_ps(v151, v151, 170).m128_f32[0])
			+ v242.m128_f32[3])
			/ *(float*)&v237;
		if (v153 >= 0.0 && v153 <= 1.0)
		{
			v152.m128_f32[0] = v153;
			v251 = v153;
			v154 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v23), _mm_shuffle_ps(v152, v152, 0)), v23);
			v237 = (__int128)v154;
			if (v154.m128_f32[0] >= v4.m128_f32[0]
				&& v154.m128_f32[0] <= v43.m128_f32[0]
				&& *((float*)&v237 + 1) >= v252
				&& *((float*)&v237 + 1) <= v13.m128_f32[0])
			{
				return 1i64;
			}
		}
	}
	if ((unsigned int)sub_1401D7750(&v242, a2, a4, &v251))
	{
		v158 = _mm_add_ps(
			_mm_mul_ps(_mm_sub_ps(v32, v23), _mm_shuffle_ps((__m128)LODWORD(v251), (__m128)LODWORD(v251), 0)),
			v23);
		v237 = (__int128)v158;
		if (v158.m128_f32[0] >= v4.m128_f32[0]
			&& v158.m128_f32[0] <= v43.m128_f32[0]
			&& *((float*)&v237 + 1) >= v157
			&& *((float*)&v237 + 1) <= v13.m128_f32[0])
		{
			return 1i64;
		}
	}
	if ((unsigned int)sub_1401D7750(&v242, v156, v155, &v251))
	{
		v162 = _mm_add_ps(
			_mm_mul_ps(_mm_sub_ps(v32, v24), _mm_shuffle_ps((__m128)LODWORD(v251), (__m128)LODWORD(v251), 0)),
			v24);
		v237 = (__int128)v162;
		if (v162.m128_f32[0] >= v4.m128_f32[0]
			&& v162.m128_f32[0] <= v43.m128_f32[0]
			&& *((float*)&v237 + 1) >= v161
			&& *((float*)&v237 + 1) <= v13.m128_f32[0])
		{
			return 1i64;
		}
	}
	v163 = v243;
	v237 = xmmword_140B7A330;
	v239 = v243;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, a2, v160, v159, &v251, &v236, v241))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A330;
	v239 = v246;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v164, v165, v166, &v251, v241, &v236))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A330;
	v239 = v238;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v167, v168, v169, &v251, v241, &v236))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A330;
	v239 = v247;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v170, v171, v172, &v251, v241, &v236))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A4B0;
	v239 = v163;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v173, v174, v175, &v251, v241, &v236) && v251 >= 0.0)
	{
		v179 = a1[1];
		if (v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	else
	{
		v179 = v252;
	}
	v237 = xmmword_140B7A4B0;
	v239 = v248;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v176, v177, v178, &v251, &v236, &v252)
		&& v251 >= 0.0
		&& v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
	{
		return 1i64;
	}
	v237 = xmmword_140B7A4B0;
	v239 = v240;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v180, v181, v182, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A4B0;
	v239 = v247;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v183, v184, v185, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A700;
	v239 = v243;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v186, v187, v188, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A700;
	v239 = v248;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v189, v190, v191, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A700;
	v239 = v244;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v192, v193, v194, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A700;
	v239 = v246;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v195, v196, v197, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A330;
	v239 = v243;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v198, v199, v200, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A330;
	v239 = v246;
	if ((unsigned int)sub_1401D7860(&v239, (__m128*) & v237, v201, v202, v203, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v237 = xmmword_140B7A330;
	if ((unsigned int)sub_1401D7860(&v238, (__m128*) & v237, v204, v205, v206, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v238 = (__m128)xmmword_140B7A330;
	v237 = (__int128)v247;
	if ((unsigned int)sub_1401D7860((__m128*) & v237, &v238, v207, v208, v209, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v43.m128_f32[0] - v4.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v213 = v243;
	v238 = (__m128)xmmword_140B7A4B0;
	v237 = (__int128)v243;
	if ((unsigned int)sub_1401D7860((__m128*) & v237, &v238, v210, v211, v212, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	v217 = v248;
	v238 = (__m128)xmmword_140B7A4B0;
	v237 = (__int128)v248;
	if ((unsigned int)sub_1401D7860((__m128*) & v237, &v238, v214, v215, v216, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	v238 = (__m128)xmmword_140B7A4B0;
	if ((unsigned int)sub_1401D7860(&v240, &v238, v218, v219, v220, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	v240 = (__m128)xmmword_140B7A4B0;
	v238 = v247;
	if ((unsigned int)sub_1401D7860(&v238, &v240, v221, v222, v223, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v13.m128_f32[0] - v179) + 0.0000099999997))
			return 1i64;
	}
	v240 = (__m128)xmmword_140B7A700;
	v238 = v213;
	if ((unsigned int)sub_1401D7860(&v238, &v240, v224, v225, v226, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v240 = (__m128)xmmword_140B7A700;
	v238 = v217;
	if ((unsigned int)sub_1401D7860(&v238, &v240, v227, v228, v229, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v240 = (__m128)xmmword_140B7A700;
	v238 = v244;
	if ((unsigned int)sub_1401D7860(&v238, &v240, v230, v231, v232, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	v240 = (__m128)xmmword_140B7A700;
	v238 = v246;
	if ((unsigned int)sub_1401D7860(&v238, &v240, v233, v234, v235, &v251, &v236, &v252))
	{
		if (v251 >= 0.0 && v251 <= (float)((float)(v12.m128_f32[0] - v14.m128_f32[0]) + 0.0000099999997))
			return 1i64;
	}
	return 0i64;
}
// 1401CAF58: variable 'v157' is possibly undefined
// 1401CAF72: variable 'v156' is possibly undefined
// 1401CAF72: variable 'v155' is possibly undefined
// 1401CAFAE: variable 'v161' is possibly undefined
// 1401CB007: variable 'v160' is possibly undefined
// 1401CB007: variable 'v159' is possibly undefined
// 1401CB070: variable 'v164' is possibly undefined
// 1401CB070: variable 'v165' is possibly undefined
// 1401CB070: variable 'v166' is possibly undefined
// 1401CB0DA: variable 'v167' is possibly undefined
// 1401CB0DA: variable 'v168' is possibly undefined
// 1401CB0DA: variable 'v169' is possibly undefined
// 1401CB143: variable 'v170' is possibly undefined
// 1401CB143: variable 'v171' is possibly undefined
// 1401CB143: variable 'v172' is possibly undefined
// 1401CB1B1: variable 'v173' is possibly undefined
// 1401CB1B1: variable 'v174' is possibly undefined
// 1401CB1B1: variable 'v175' is possibly undefined
// 1401CB22E: variable 'v176' is possibly undefined
// 1401CB22E: variable 'v177' is possibly undefined
// 1401CB22E: variable 'v178' is possibly undefined
// 1401CB29A: variable 'v180' is possibly undefined
// 1401CB29A: variable 'v181' is possibly undefined
// 1401CB29A: variable 'v182' is possibly undefined
// 1401CB306: variable 'v183' is possibly undefined
// 1401CB306: variable 'v184' is possibly undefined
// 1401CB306: variable 'v185' is possibly undefined
// 1401CB37A: variable 'v186' is possibly undefined
// 1401CB37A: variable 'v187' is possibly undefined
// 1401CB37A: variable 'v188' is possibly undefined
// 1401CB3E6: variable 'v189' is possibly undefined
// 1401CB3E6: variable 'v190' is possibly undefined
// 1401CB3E6: variable 'v191' is possibly undefined
// 1401CB452: variable 'v192' is possibly undefined
// 1401CB452: variable 'v193' is possibly undefined
// 1401CB452: variable 'v194' is possibly undefined
// 1401CB4BE: variable 'v195' is possibly undefined
// 1401CB4BE: variable 'v196' is possibly undefined
// 1401CB4BE: variable 'v197' is possibly undefined
// 1401CB533: variable 'v198' is possibly undefined
// 1401CB533: variable 'v199' is possibly undefined
// 1401CB533: variable 'v200' is possibly undefined
// 1401CB5A5: variable 'v201' is possibly undefined
// 1401CB5A5: variable 'v202' is possibly undefined
// 1401CB5A5: variable 'v203' is possibly undefined
// 1401CB618: variable 'v204' is possibly undefined
// 1401CB618: variable 'v205' is possibly undefined
// 1401CB618: variable 'v206' is possibly undefined
// 1401CB68A: variable 'v207' is possibly undefined
// 1401CB68A: variable 'v208' is possibly undefined
// 1401CB68A: variable 'v209' is possibly undefined
// 1401CB6F6: variable 'v210' is possibly undefined
// 1401CB6F6: variable 'v211' is possibly undefined
// 1401CB6F6: variable 'v212' is possibly undefined
// 1401CB764: variable 'v214' is possibly undefined
// 1401CB764: variable 'v215' is possibly undefined
// 1401CB764: variable 'v216' is possibly undefined
// 1401CB7CE: variable 'v218' is possibly undefined
// 1401CB7CE: variable 'v219' is possibly undefined
// 1401CB7CE: variable 'v220' is possibly undefined
// 1401CB838: variable 'v221' is possibly undefined
// 1401CB838: variable 'v222' is possibly undefined
// 1401CB838: variable 'v223' is possibly undefined
// 1401CB89D: variable 'v224' is possibly undefined
// 1401CB89D: variable 'v225' is possibly undefined
// 1401CB89D: variable 'v226' is possibly undefined
// 1401CB904: variable 'v227' is possibly undefined
// 1401CB904: variable 'v228' is possibly undefined
// 1401CB904: variable 'v229' is possibly undefined
// 1401CB96E: variable 'v230' is possibly undefined
// 1401CB96E: variable 'v231' is possibly undefined
// 1401CB96E: variable 'v232' is possibly undefined
// 1401CB9D8: variable 'v233' is possibly undefined
// 1401CB9D8: variable 'v234' is possibly undefined
// 1401CB9D8: variable 'v235' is possibly undefined
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 1401C9CE0: using guessed type float var_140[4];

