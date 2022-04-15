//----- (00000001402FD530) ----------------------------------------------------
__int64 __fastcall sub_1402FD530(__m128* a1, __m128* a2, unsigned int a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v6; // rdi
	unsigned int v7; // r15d
	__m128* v8; // r14
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rdx
	float v11; // xmm4_4
	float v12; // xmm9_4
	float v13; // xmm10_4
	float v14; // xmm0_4
	float v15; // xmm4_4
	float v16; // xmm3_4
	float v17; // xmm7_4
	float v18; // xmm5_4
	float v19; // xmm1_4
	float v20; // xmm2_4
	float v21; // xmm0_4
	float v22; // xmm3_4
	float v23; // xmm8_4
	float v24; // xmm4_4
	float v25; // xmm2_4
	float v26; // xmm3_4
	float v27; // xmm1_4
	float v28; // xmm0_4
	float v29; // xmm8_4
	float v30; // xmm2_4
	float v31; // xmm8_4
	float v32; // xmm0_4
	float v33; // xmm8_4
	float v34; // xmm2_4
	float v35; // xmm8_4
	float v36; // xmm1_4
	float v37; // xmm0_4
	float v38; // xmm8_4
	float v39; // xmm2_4
	float v40; // xmm8_4
	float v41; // xmm1_4
	float v42; // xmm0_4
	float v43; // xmm8_4
	float v44; // xmm2_4
	float v45; // xmm0_4
	float v46; // xmm2_4
	float v47; // xmm1_4
	float v48; // xmm0_4
	float v49; // xmm2_4
	float v50; // xmm7_4
	float v51; // xmm5_4
	float v52; // xmm1_4
	float v53; // xmm0_4
	float v54; // xmm2_4
	float v55; // xmm4_4
	float v56; // xmm3_4
	float v57; // xmm1_4
	float v58; // xmm0_4
	__m128 v59; // xmm1
	__int64 v60; // r8
	float v61; // xmm5_4
	float v62; // xmm7_4
	float v63; // xmm0_4
	float v64; // xmm4_4
	float v65; // xmm8_4
	float v66; // xmm2_4
	float v67; // xmm4_4
	float v68; // xmm1_4
	float v69; // xmm0_4
	float v70; // xmm3_4
	float v71; // xmm9_4
	float v72; // xmm10_4
	float v73; // xmm2_4
	float v74; // xmm1_4
	float v75; // xmm0_4
	float v76; // xmm3_4
	float v77; // xmm0_4
	float v78; // xmm3_4
	float v79; // xmm2_4
	float v80; // xmm1_4
	float v81; // xmm0_4
	float v82; // xmm3_4
	float v83; // xmm2_4
	float v84; // xmm1_4
	float v85; // xmm0_4
	float v86; // xmm3_4
	float v87; // xmm0_4
	float v88; // xmm3_4
	float v89; // xmm2_4
	float v90; // xmm1_4
	float v91; // xmm0_4
	float v92; // xmm3_4
	float v93; // xmm2_4
	float v94; // xmm1_4
	float v95; // xmm0_4
	float v96; // xmm3_4
	__int64 v97; // r15
	__m128* v98; // r12
	__int64 v99; // rbx
	unsigned __int64 v100; // rdx
	_QWORD* v101; // r11
	__int64 v102; // r14
	__int64 v103; // rcx
	unsigned int v104; // r8d
	unsigned __int64 v105; // r10
	unsigned __int64 v106; // r9
	char v107; // r8
	float v108; // xmm6_4
	float v109; // xmm7_4
	float v110; // xmm8_4
	float v111; // xmm9_4
	float v112; // xmm11_4
	__int64 v113; // r13
	unsigned __int64 v114; // rax
	float v115; // xmm13_4
	float v116; // xmm0_4
	float v117; // xmm1_4
	float v118; // xmm15_4
	float v119; // xmm3_4
	float v120; // xmm2_4
	float v121; // xmm0_4
	float v122; // xmm1_4
	float v123; // xmm3_4
	float v124; // xmm2_4
	float v125; // xmm0_4
	float v126; // xmm1_4
	float v127; // xmm0_4
	float v128; // xmm1_4
	float v129; // xmm3_4
	float v130; // xmm2_4
	float v131; // xmm0_4
	float v132; // xmm1_4
	float v133; // xmm3_4
	float v134; // xmm2_4
	float v135; // xmm2_4
	float v136; // xmm1_4
	float v137; // xmm14_4
	float v138; // xmm6_4
	float v139; // xmm7_4
	float v140; // xmm0_4
	float v141; // xmm1_4
	float v142; // xmm12_4
	float v143; // xmm8_4
	float v144; // xmm9_4
	float v145; // xmm0_4
	float v146; // xmm1_4
	float v147; // xmm11_4
	float v148; // xmm5_4
	float v149; // xmm2_4
	float v150; // xmm0_4
	float v151; // xmm1_4
	__m128 v152; // xmm0
	__int64 v153; // rdx
	unsigned __int64 v154; // rdi
	int* v155; // rax
	__int64 v156; // r11
	unsigned int v157; // r15d
	unsigned int v158; // r12d
	unsigned __int8 v159; // al
	__int64 v160; // rbx
	unsigned __int64 v161; // rax
	__int64 v162; // rcx
	unsigned int v163; // r10d
	float v164; // xmm0_4
	float v165; // xmm1_4
	float v166; // xmm7_4
	float v167; // xmm6_4
	float v168; // xmm3_4
	float v169; // xmm2_4
	float v170; // xmm0_4
	float v171; // xmm1_4
	float v172; // xmm5_4
	float v173; // xmm4_4
	float v174; // xmm3_4
	float v175; // xmm2_4
	float v176; // xmm2_4
	float v177; // xmm0_4
	float v178; // xmm0_4
	float v179; // xmm1_4
	float v180; // xmm3_4
	float v181; // xmm2_4
	float v182; // xmm0_4
	float v183; // xmm1_4
	float v184; // xmm2_4
	float v185; // xmm3_4
	float v186; // xmm0_4
	float v187; // xmm1_4
	float v188; // xmm9_4
	float v189; // xmm8_4
	float v190; // xmm0_4
	float v191; // xmm1_4
	float v192; // xmm7_4
	float v193; // xmm6_4
	float v194; // xmm0_4
	float v195; // xmm1_4
	float v196; // xmm5_4
	float v197; // xmm4_4
	float v198; // xmm0_4
	float v199; // xmm1_4
	__m128 v200; // xmm0
	__m128 v201; // xmm1
	unsigned __int64 v202; // r14
	int* v203; // rdi
	unsigned __int64 v204; // r8
	__int64 v205; // rax
	int* v206; // rdi
	unsigned __int64 v207; // r12
	int* v208; // r13
	__int64 v209; // r15
	unsigned int v210; // r9d
	unsigned int* v211; // r14
	unsigned int v212; // ebx
	__int64 v213; // r8
	_QWORD* v214; // r10
	unsigned __int64 v215; // r11
	__int64 v216; // rdx
	int v217; // r15d
	__int64 v218; // rcx
	__m128* v219; // rcx
	__int64 v220; // r8
	__m128 v221; // xmm1
	__m128 v222; // xmm1
	__m128 v223; // xmm6
	__m128 v224; // xmm7
	__m128 v225; // xmm8
	__m128 v226; // xmm9
	unsigned __int8 v227; // dl
	__int64 v228; // rax
	__m128* v229; // rcx
	__m128 v230; // xmm1
	__m128 v231; // xmm1
	__m128 v232; // xmm5
	unsigned int v233; // r8d
	unsigned int v234; // edx
	__m128* v235; // rax
	unsigned int v236; // r8d
	unsigned int v237; // r9d
	unsigned __int8 v238; // dl
	__m128 v239; // xmm3
	__m128 v240; // xmm4
	__int64 v241; // r10
	__m128 v242; // xmm5
	__m128 v243; // xmm6
	__m128* v244; // rdx
	int* v245; // rax
	unsigned __int64 v246; // r9
	__m128* v247; // rcx
	unsigned __int64 v248; // r9
	__m128 v249; // xmm1
	__m128 v250; // xmm4
	__m128 v251; // xmm5
	__m128 v252; // xmm6
	__m128 v253; // xmm7
	unsigned __int64 v254; // rdx
	__int64 v255; // r10
	unsigned int* v256; // rax
	__m128 v257; // xmm3
	__int16* v258; // rcx
	__int64 v259; // rax
	bool v260; // cf
	__int64 v261; // r8
	__int64 v262; // rcx
	__int64 v263; // rax
	unsigned __int64 v264; // rbx
	unsigned __int64 v265; // r14
	unsigned __int16* v266; // rbx
	__int64 v267; // rdx
	__int64 v268; // r9
	__int64 v269; // r8
	unsigned __int64 v270; // rbx
	unsigned __int64 v271; // r14
	unsigned int* v272; // rbx
	__int64 v273; // rdx
	__int64 v274; // r9
	__int64 v275; // r8
	unsigned __int64 i; // rbx
	__m128 v277; // [rsp+40h] [rbp-C0h]
	__int128 v278; // [rsp+40h] [rbp-C0h]
	__m128 v279; // [rsp+40h] [rbp-C0h]
	__m128 v280; // [rsp+40h] [rbp-C0h]
	unsigned __int64 v281; // [rsp+40h] [rbp-C0h]
	__m128 v283; // [rsp+60h] [rbp-A0h]
	__m128 v284; // [rsp+60h] [rbp-A0h]
	__m128 v285; // [rsp+60h] [rbp-A0h]
	__m128 v286; // [rsp+60h] [rbp-A0h]
	__m128 v287; // [rsp+60h] [rbp-A0h]
	int* v288; // [rsp+60h] [rbp-A0h]
	__m128 v289; // [rsp+70h] [rbp-90h]
	__int64 v290; // [rsp+80h] [rbp-80h]
	int* v293; // [rsp+98h] [rbp-68h]
	__m128 v294; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v295; // [rsp+B0h] [rbp-50h]
	__m128 v296; // [rsp+C0h] [rbp-40h]
	__m128 v297; // [rsp+D0h] [rbp-30h]
	unsigned __int64 v298; // [rsp+E0h] [rbp-20h]
	__m128 v299; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v300; // [rsp+100h] [rbp+0h]
	int v301; // [rsp+110h] [rbp+10h]
	int v302[3]; // [rsp+114h] [rbp+14h]
	__m128 v303; // [rsp+120h] [rbp+20h] BYREF
	__int64 v304; // [rsp+130h] [rbp+30h]
	__m128 v305; // [rsp+140h] [rbp+40h] BYREF
	__m128 v306; // [rsp+150h] [rbp+50h]
	__m128 v307; // [rsp+160h] [rbp+60h]
	__m128 v308; // [rsp+170h] [rbp+70h]
	__m128* v309[10]; // [rsp+190h] [rbp+90h] BYREF

	LODWORD(result) = dword_140C421A0;
	v6 = a4;
	v7 = a3;
	if (*(_DWORD*)qword_140C63750 < dword_140C421A0)
		LODWORD(result) = *(_DWORD*)qword_140C63750;
	v8 = a2;
	result = (int)result;
	if (byte_140C421B0[(int)result] || (a1[2].m128_i8[8] & 4) == 0)
	{
		v9 = a1->m128_u64[0];
		v303.m128_i32[0] = -1;
		result = (*(__int64(__fastcall**)(__m128*, __m128*, _QWORD))(v9 + 16))(a1, &v303, 0i64);
		if ((v7 & 4) != 0)
		{
			v10 = a1[4].m128_u64[0];
			result = *(_QWORD*)(v10 + 1176);
			if (*(_DWORD*)(((unsigned __int64)a1[19].m128_u32[2] << 6) + result))
			{
				v11 = a1[5].m128_f32[0];
				v12 = *(float*)(v10 + 1200);
				v13 = *(float*)(v10 + 1216);
				v283 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)a1[8].m128_u32[0], (__m128)a1[8].m128_u32[2]),
					_mm_unpacklo_ps((__m128)a1[8].m128_u32[1], (__m128)0i64));
				v277 = v283;
				if (v11 <= 0.0)
				{
					v14 = v11 * v13;
					v15 = v11 * v12;
				}
				else
				{
					v14 = v11 * v12;
					v15 = v11 * v13;
				}
				v16 = a1[6].m128_f32[0];
				v17 = *(float*)(v10 + 1204);
				v18 = *(float*)(v10 + 1220);
				v19 = v283.m128_f32[0] + v14;
				v20 = v283.m128_f32[0] + v15;
				if (v16 <= 0.0)
				{
					v21 = v16 * v18;
					v22 = v16 * v17;
				}
				else
				{
					v21 = v16 * v17;
					v22 = v16 * v18;
				}
				v23 = a1[7].m128_f32[0];
				v24 = *(float*)(v10 + 1208);
				v25 = v20 + v22;
				v26 = *(float*)(v10 + 1224);
				v27 = v19 + v21;
				if (v23 <= 0.0)
				{
					v28 = v23 * v26;
					v29 = v23 * v24;
				}
				else
				{
					v28 = v23 * v24;
					v29 = v23 * v26;
				}
				v30 = v25 + v29;
				v31 = a1[5].m128_f32[1];
				v277.m128_f32[0] = v30;
				v283.m128_f32[0] = v27 + v28;
				if (v31 <= 0.0)
				{
					v32 = v31 * v13;
					v33 = v31 * v12;
				}
				else
				{
					v32 = v31 * v12;
					v33 = v31 * v13;
				}
				v34 = v277.m128_f32[1] + v33;
				v35 = a1[6].m128_f32[1];
				v36 = v283.m128_f32[1] + v32;
				if (v35 <= 0.0)
				{
					v37 = v35 * v18;
					v38 = v35 * v17;
				}
				else
				{
					v37 = v35 * v17;
					v38 = v35 * v18;
				}
				v39 = v34 + v38;
				v40 = a1[7].m128_f32[1];
				v41 = v36 + v37;
				if (v40 <= 0.0)
				{
					v42 = v40 * v26;
					v43 = v40 * v24;
				}
				else
				{
					v42 = v40 * v24;
					v43 = v40 * v26;
				}
				v277.m128_f32[1] = v39 + v43;
				v44 = a1[5].m128_f32[2];
				v283.m128_f32[1] = v41 + v42;
				if (v44 <= 0.0)
				{
					v45 = v44 * v13;
					v46 = v44 * v12;
				}
				else
				{
					v45 = v44 * v12;
					v46 = v44 * v13;
				}
				v47 = v283.m128_f32[2] + v45;
				v48 = v277.m128_f32[2] + v46;
				v49 = a1[6].m128_f32[2];
				v50 = v17 * v49;
				v51 = v18 * v49;
				if (v49 <= 0.0)
				{
					v52 = v47 + v51;
					v53 = v48 + v50;
				}
				else
				{
					v52 = v47 + v50;
					v53 = v48 + v51;
				}
				v54 = a1[7].m128_f32[2];
				v55 = v24 * v54;
				v56 = v26 * v54;
				if (v54 <= 0.0)
				{
					v57 = v52 + v56;
					v58 = v53 + v55;
				}
				else
				{
					v57 = v52 + v55;
					v58 = v53 + v56;
				}
				v277.m128_f32[2] = v58;
				v283.m128_f32[2] = v57;
				v59 = _mm_max_ps(v283, *v8);
				v300 = _mm_min_ps(v277, v8[1]);
				v299 = v59;
				if (v59.m128_f32[0] <= v300.m128_f32[0]
					&& v299.m128_f32[1] <= v300.m128_f32[1]
					&& v299.m128_f32[2] <= v300.m128_f32[2])
				{
					v309[0] = a1 + 5;
					result = sub_1401AFC20((__int64*)v309, (double*)v294.m128_u64);
					v61 = v8->m128_f32[0];
					v62 = v8[1].m128_f32[0];
					v284 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v297.m128_u32[0], (__m128)v297.m128_u32[2]),
						_mm_unpacklo_ps((__m128)v297.m128_u32[1], (__m128)0i64));
					v278 = (__int128)v284;
					if (v294.m128_f32[0] <= 0.0)
					{
						v63 = v294.m128_f32[0] * v62;
						v64 = v294.m128_f32[0] * v61;
					}
					else
					{
						v63 = v294.m128_f32[0] * v61;
						v64 = v294.m128_f32[0] * v62;
					}
					v65 = v8[1].m128_f32[1];
					v66 = v284.m128_f32[0] + v64;
					v67 = v8->m128_f32[1];
					v68 = v284.m128_f32[0] + v63;
					if (v295.m128_f32[0] <= 0.0)
					{
						v69 = v295.m128_f32[0] * v65;
						v70 = v295.m128_f32[0] * v67;
					}
					else
					{
						v69 = v295.m128_f32[0] * v67;
						v70 = v295.m128_f32[0] * v65;
					}
					v71 = v8->m128_f32[2];
					v72 = v8[1].m128_f32[2];
					v73 = v66 + v70;
					v74 = v68 + v69;
					if (v296.m128_f32[0] <= 0.0)
					{
						v75 = v296.m128_f32[0] * v72;
						v76 = v296.m128_f32[0] * v71;
					}
					else
					{
						v75 = v296.m128_f32[0] * v71;
						v76 = v296.m128_f32[0] * v72;
					}
					*(float*)&v278 = v73 + v76;
					v284.m128_f32[0] = v74 + v75;
					if (v294.m128_f32[1] <= 0.0)
					{
						v77 = v294.m128_f32[1] * v62;
						v78 = v294.m128_f32[1] * v61;
					}
					else
					{
						v77 = v294.m128_f32[1] * v61;
						v78 = v294.m128_f32[1] * v62;
					}
					v79 = *((float*)&v278 + 1) + v78;
					v80 = v284.m128_f32[1] + v77;
					if (v295.m128_f32[1] <= 0.0)
					{
						v81 = v295.m128_f32[1] * v65;
						v82 = v295.m128_f32[1] * v67;
					}
					else
					{
						v81 = v295.m128_f32[1] * v67;
						v82 = v295.m128_f32[1] * v65;
					}
					v83 = v79 + v82;
					v84 = v80 + v81;
					if (v296.m128_f32[1] <= 0.0)
					{
						v85 = v296.m128_f32[1] * v72;
						v86 = v296.m128_f32[1] * v71;
					}
					else
					{
						v85 = v296.m128_f32[1] * v71;
						v86 = v296.m128_f32[1] * v72;
					}
					*((float*)&v278 + 1) = v83 + v86;
					v284.m128_f32[1] = v84 + v85;
					if (v294.m128_f32[2] <= 0.0)
					{
						v87 = v294.m128_f32[2] * v62;
						v88 = v294.m128_f32[2] * v61;
					}
					else
					{
						v87 = v294.m128_f32[2] * v61;
						v88 = v294.m128_f32[2] * v62;
					}
					v89 = *((float*)&v278 + 2) + v88;
					v90 = v284.m128_f32[2] + v87;
					if (v295.m128_f32[2] <= 0.0)
					{
						v91 = v295.m128_f32[2] * v65;
						v92 = v295.m128_f32[2] * v67;
					}
					else
					{
						v91 = v295.m128_f32[2] * v67;
						v92 = v295.m128_f32[2] * v65;
					}
					v93 = v89 + v92;
					v94 = v90 + v91;
					if (v296.m128_f32[2] <= 0.0)
					{
						v95 = v296.m128_f32[2] * v72;
						v96 = v296.m128_f32[2] * v71;
					}
					else
					{
						v95 = v296.m128_f32[2] * v71;
						v96 = v296.m128_f32[2] * v72;
					}
					v284.m128_f32[2] = v94 + v95;
					*((float*)&v278 + 2) = v93 + v96;
					v305 = v284;
					v306 = (__m128)v278;
					if ((_DWORD)v60)
					{
						v97 = v60;
						v98 = v8;
						v99 = 0i64;
						do
						{
							v100 = a1[4].m128_u64[0];
							v101 = (_QWORD*)(*(_QWORD*)(v100 + 1176) + ((unsigned __int64)a1[19].m128_u32[2] << 6));
							v102 = v101[1];
							if ((unsigned int)*(unsigned __int16*)(v99 + v102 + 12) >= *(_DWORD*)(v100 + 512))
								goto LABEL_71;
							v103 = *(unsigned __int16*)(v99 + v102 + 12);
							result = *(_QWORD*)(v100 + 520);
							v104 = *(unsigned __int16*)(result + 4 * v103);
							v105 = (unsigned __int64)*(unsigned __int16*)(result + 4 * v103) >> 3;
							if (v105 < *(_QWORD*)(a1[76].m128_u64[1] + 1048))
							{
								result = ((unsigned __int8)(1 << (v104 & 7)) & *(_BYTE*)(v105 + *(_QWORD*)(a1[76].m128_u64[1] + 1040))) != 0;
								if (((unsigned __int8)(1 << (v104 & 7)) & *(_BYTE*)(v105 + *(_QWORD*)(a1[76].m128_u64[1] + 1040))) != 0)
								{
									v106 = (unsigned __int64)v104 >> 3;
									if (v106 < a1[65].m128_u64[1])
									{
										v107 = v104 & 7;
										result = ((unsigned __int8)(1 << v107) & *(_BYTE*)(v106 + a1[65].m128_u64[0])) != 0;
										if (((unsigned __int8)(1 << v107) & *(_BYTE*)(v106 + a1[65].m128_u64[0])) != 0)
											LABEL_71:
										result = sub_1401D7E20(v101, (__int64)&v305, a1 + 5, v98, a4, *(_DWORD*)(v99 + v102), 0);
									}
								}
							}
							v99 += 16i64;
							--v97;
						} while (v97);
					}
				}
			}
			return result;
		}
		if ((v7 & 3) == 0)
			return result;
		result = sub_140300DD0((__int64)a1, 0xAu);
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__m128*, __m128*))(a1->m128_u64[0] + 1200))(a1, &v299);
		v108 = v299.m128_f32[0];
		v109 = v300.m128_f32[0];
		if (v299.m128_f32[0] < v300.m128_f32[0])
		{
			v110 = v299.m128_f32[1];
			v111 = v300.m128_f32[1];
			if (v299.m128_f32[1] < v300.m128_f32[1])
			{
				v112 = v300.m128_f32[2];
				if (v299.m128_f32[2] < v300.m128_f32[2])
				{
					v113 = *(_QWORD*)(a1[3].m128_u64[1] + 64);
					v114 = a1[1].m128_u64[0];
					v290 = v113;
					v305.m128_u64[0] = (unsigned __int64)&a1[79];
					v305.m128_u64[1] = v114 + 304;
					result = (__int64)sub_1401AFB10((__m128**) & v305, &v294);
					v115 = v294.m128_f32[0];
					v285 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v297.m128_u32[0], (__m128)v297.m128_u32[2]),
						_mm_unpacklo_ps((__m128)v297.m128_u32[1], (__m128)0i64));
					v303 = v285;
					v279 = v285;
					if (v294.m128_f32[0] <= 0.0)
					{
						v116 = v109;
						v117 = v108;
					}
					else
					{
						v116 = v108;
						v117 = v109;
					}
					v118 = v295.m128_f32[0];
					v119 = v285.m128_f32[0] + (float)(v117 * v294.m128_f32[0]);
					v120 = v285.m128_f32[0] + (float)(v116 * v294.m128_f32[0]);
					if (v295.m128_f32[0] <= 0.0)
					{
						v121 = v111;
						v122 = v110;
					}
					else
					{
						v121 = v110;
						v122 = v111;
					}
					v123 = v119 + (float)(v122 * v295.m128_f32[0]);
					v124 = v120 + (float)(v121 * v295.m128_f32[0]);
					if (v296.m128_f32[0] <= 0.0)
					{
						v125 = v112;
						v126 = v299.m128_f32[2];
					}
					else
					{
						v125 = v299.m128_f32[2];
						v126 = v112;
					}
					v279.m128_f32[0] = v123 + (float)(v126 * v296.m128_f32[0]);
					v285.m128_f32[0] = v124 + (float)(v125 * v296.m128_f32[0]);
					if (v294.m128_f32[1] <= 0.0)
					{
						v127 = v109;
						v128 = v108;
					}
					else
					{
						v127 = v108;
						v128 = v109;
					}
					v129 = v279.m128_f32[1] + (float)(v128 * v294.m128_f32[1]);
					v130 = v285.m128_f32[1] + (float)(v127 * v294.m128_f32[1]);
					if (v295.m128_f32[1] <= 0.0)
					{
						v131 = v111;
						v132 = v110;
					}
					else
					{
						v131 = v110;
						v132 = v111;
					}
					v133 = v129 + (float)(v132 * v295.m128_f32[1]);
					v134 = v130 + (float)(v131 * v295.m128_f32[1]);
					if (v296.m128_f32[1] <= 0.0)
					{
						v136 = v299.m128_f32[2];
						v285.m128_f32[1] = v134 + (float)(v112 * v296.m128_f32[1]);
						v135 = v300.m128_f32[2];
					}
					else
					{
						v285.m128_f32[1] = v134 + (float)(v299.m128_f32[2] * v296.m128_f32[1]);
						v135 = v300.m128_f32[2];
						v136 = v300.m128_f32[2];
					}
					v137 = v294.m128_f32[2];
					v138 = v108 * v294.m128_f32[2];
					v139 = v109 * v294.m128_f32[2];
					v279.m128_f32[1] = v133 + (float)(v136 * v296.m128_f32[1]);
					if (v294.m128_f32[2] <= 0.0)
					{
						v140 = v285.m128_f32[2] + v139;
						v141 = v279.m128_f32[2] + v138;
					}
					else
					{
						v140 = v285.m128_f32[2] + v138;
						v141 = v279.m128_f32[2] + v139;
					}
					v142 = v295.m128_f32[2];
					v143 = v110 * v295.m128_f32[2];
					v144 = v111 * v295.m128_f32[2];
					if (v295.m128_f32[2] <= 0.0)
					{
						v145 = v140 + v144;
						v146 = v141 + v143;
					}
					else
					{
						v145 = v140 + v143;
						v146 = v141 + v144;
					}
					v147 = v296.m128_f32[2];
					v148 = v299.m128_f32[2] * v296.m128_f32[2];
					v149 = v135 * v296.m128_f32[2];
					if (v296.m128_f32[2] <= 0.0)
					{
						v150 = v145 + v149;
						v151 = v146 + v148;
					}
					else
					{
						v150 = v145 + v148;
						v151 = v146 + v149;
					}
					v285.m128_f32[2] = v150;
					v279.m128_f32[2] = v151;
					v152 = _mm_mul_ps(_mm_add_ps(v285, v279), (__m128)xmmword_140B7AC50);
					v299 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v285, v152), (__m128)xmmword_140B7B2C0), v152);
					v300 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v279, v152), (__m128)xmmword_140B7B2C0), v152);
					v286 = _mm_max_ps(v299, *v8);
					v289 = _mm_min_ps(v300, v8[1]);
					if (v286.m128_f32[0] < v289.m128_f32[0]
						&& v286.m128_f32[1] < v289.m128_f32[1]
						&& v286.m128_f32[2] < v289.m128_f32[2])
					{
						v153 = *(unsigned int*)(v113 + 128);
						v154 = 0i64;
						v298 = 0i64;
						v155 = sub_14018DBC0(0i64, v153, 8i64);
						v156 = 0i64;
						if (v155)
							v156 = (__int64)v155;
						v157 = 0;
						v158 = 0;
						v293 = (int*)v156;
						if (*(_DWORD*)(v113 + 128))
						{
							v159 = a3;
							do
							{
								v160 = *(_QWORD*)(v113 + 136) + 112i64 * v158;
								if ((v159 & *(_BYTE*)(v160 + 57)) != 0)
								{
									v161 = a1[4].m128_u64[0];
									v162 = *(unsigned __int16*)(v160 + 30);
									if (((unsigned int)v162 >= *(_DWORD*)(v161 + 512)
										|| sub_1407B07D0(
											(_QWORD*)(a1[76].m128_u64[1] + 1040),
											*(unsigned __int16*)(*(_QWORD*)(v161 + 520) + 4 * v162))
										&& sub_1407B07D0((__m128*)a1[65].m128_u64, v163))
										&& *(_WORD*)(96i64 * *(unsigned __int16*)(v160 + 24) + a1[31].m128_u64[0] + 52)
										&& ((*(_BYTE*)(v160 + 56) & 4) == 0 || (*(_BYTE*)(a1[1].m128_u64[0] + 232) & 2) == 0))
									{
										v287.m128_i32[3] = v303.m128_i32[3];
										v280.m128_i32[3] = v303.m128_i32[3];
										if (v115 <= 0.0)
										{
											v164 = *(float*)(v160 + 80);
											v165 = *(float*)(v160 + 64);
										}
										else
										{
											v164 = *(float*)(v160 + 64);
											v165 = *(float*)(v160 + 80);
										}
										v166 = *(float*)(v160 + 68);
										v167 = *(float*)(v160 + 84);
										v168 = v303.m128_f32[0] + (float)(v165 * v115);
										v169 = v303.m128_f32[0] + (float)(v164 * v115);
										if (v118 <= 0.0)
										{
											v170 = *(float*)(v160 + 84);
											v171 = *(float*)(v160 + 68);
										}
										else
										{
											v170 = *(float*)(v160 + 68);
											v171 = *(float*)(v160 + 84);
										}
										v172 = *(float*)(v160 + 72);
										v173 = *(float*)(v160 + 88);
										v174 = v168 + (float)(v171 * v118);
										v175 = v169 + (float)(v170 * v118);
										if (v296.m128_f32[0] <= 0.0)
										{
											v176 = v175 + (float)(v173 * v296.m128_f32[0]);
											v177 = *(float*)(v160 + 72);
										}
										else
										{
											v176 = v175 + (float)(v172 * v296.m128_f32[0]);
											v177 = *(float*)(v160 + 88);
										}
										v287.m128_f32[0] = v176;
										v280.m128_f32[0] = v174 + (float)(v177 * v296.m128_f32[0]);
										if (v294.m128_f32[1] <= 0.0)
										{
											v178 = *(float*)(v160 + 80);
											v179 = *(float*)(v160 + 64);
										}
										else
										{
											v178 = *(float*)(v160 + 64);
											v179 = *(float*)(v160 + 80);
										}
										v180 = v303.m128_f32[1] + (float)(v179 * v294.m128_f32[1]);
										v181 = v303.m128_f32[1] + (float)(v178 * v294.m128_f32[1]);
										if (v295.m128_f32[1] <= 0.0)
										{
											v182 = v167 * v295.m128_f32[1];
											v183 = *(float*)(v160 + 68);
										}
										else
										{
											v182 = v166 * v295.m128_f32[1];
											v183 = *(float*)(v160 + 84);
										}
										v184 = v181 + v182;
										v185 = v180 + (float)(v183 * v295.m128_f32[1]);
										if (v296.m128_f32[1] <= 0.0)
										{
											v186 = v173 * v296.m128_f32[1];
											v187 = *(float*)(v160 + 72);
										}
										else
										{
											v186 = v172 * v296.m128_f32[1];
											v187 = *(float*)(v160 + 88);
										}
										v188 = *(float*)(v160 + 64) * v137;
										v189 = *(float*)(v160 + 80) * v137;
										v280.m128_f32[1] = v185 + (float)(v187 * v296.m128_f32[1]);
										v287.m128_f32[1] = v184 + v186;
										if (v137 <= 0.0)
										{
											v190 = v303.m128_f32[2] + v189;
											v191 = v303.m128_f32[2] + v188;
										}
										else
										{
											v190 = v303.m128_f32[2] + v188;
											v191 = v303.m128_f32[2] + v189;
										}
										v192 = v166 * v142;
										v193 = v167 * v142;
										if (v142 <= 0.0)
										{
											v194 = v190 + v193;
											v195 = v191 + v192;
										}
										else
										{
											v194 = v190 + v192;
											v195 = v191 + v193;
										}
										v196 = v172 * v147;
										v197 = v173 * v147;
										if (v147 <= 0.0)
										{
											v198 = v194 + v197;
											v199 = v195 + v196;
										}
										else
										{
											v198 = v194 + v196;
											v199 = v195 + v197;
										}
										v280.m128_f32[2] = v199;
										v287.m128_f32[2] = v198;
										v200 = _mm_mul_ps(_mm_add_ps(v287, v280), (__m128)xmmword_140B7AC50);
										v201 = _mm_min_ps(
											_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v280, v200), (__m128)xmmword_140B7B2C0), v200),
											v8[1]);
										v305 = _mm_max_ps(
											_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v287, v200), (__m128)xmmword_140B7B2C0), v200),
											*v8);
										v306 = v201;
										if (v305.m128_f32[0] < v201.m128_f32[0]
											&& v305.m128_f32[1] < v306.m128_f32[1]
											&& v305.m128_f32[2] < v306.m128_f32[2])
										{
											v202 = v154 + 1;
											if (v157 < *(_DWORD*)(v160 + 12))
												v157 = *(_DWORD*)(v160 + 12);
											v203 = sub_14018DB00(v156, v154 + 1, 8i64);
											v204 = 8 * v298;
											*(_QWORD*)&v203[2 * v298] = v160;
											if (v293 == v203)
											{
												v156 = (__int64)v293;
											}
											else
											{
												sub_1407DB590(v203, v293, v204);
												if (v293)
													(*(void(__fastcall**)(int*))(*((_QWORD*)v293 - 2) + 8i64))(v293 - 4);
												v156 = (__int64)v203;
												v293 = v203;
											}
											v154 = v202;
											v298 = v202;
											v8 = a2;
										}
									}
									v159 = a3;
								}
								++v158;
							} while (v158 < *(_DWORD*)(v113 + 128));
						}
						v205 = 16i64 * v157;
						if (!is_mul_ok(v157, 0x10ui64))
							v205 = -1i64;
						v206 = sub_14018B280(v205, 8u);
						v207 = 0i64;
						v208 = sub_14018B280(v157, 8u);
						v288 = v208;
						v281 = 0i64;
						if (v298)
						{
							v209 = v290;
							do
							{
								v210 = 0;
								v211 = *(unsigned int**)&v293[2 * v207];
								v212 = v211[3];
								v213 = *(_QWORD*)(a1[4].m128_u64[0] + 440) + 2i64 * *((unsigned __int16*)v211 + 8);
								v304 = v213;
								if (v212)
								{
									v303.m128_u64[0] = (unsigned __int64)&v294;
									do
									{
										v214 = (_QWORD*)a1[3].m128_u64[1];
										v215 = a1[51].m128_u64[1];
										v216 = v210 + v211[1];
										v217 = *(_DWORD*)(v216 * v214[43] + v214[32]);
										v301 = *(_DWORD*)(v216 * v214[42] + v214[31]);
										v218 = *(unsigned __int16*)(v213 + 2i64 * (unsigned __int8)v301);
										v302[0] = v217;
										v219 = (__m128*)(v215 + (v218 << 6));
										v220 = 0i64;
										v221 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)v217);
										v221.m128_f32[0] = v221.m128_f32[0] * 0.0039215689;
										v222 = _mm_shuffle_ps(v221, v221, 0);
										v223 = _mm_mul_ps(*v219, v222);
										v294 = v223;
										v224 = _mm_mul_ps(v219[1], v222);
										v295 = v224;
										v225 = _mm_mul_ps(v219[2], v222);
										v296 = v225;
										v226 = _mm_mul_ps(v219[3], v222);
										v297 = v226;
										do
										{
											v227 = *((_BYTE*)v302 + v220 + 1);
											if (!v227)
												break;
											v228 = *((unsigned __int8*)&v301 + ++v220);
											v229 = (__m128*)(v215 + ((unsigned __int64)*(unsigned __int16*)(v304 + 2 * v228) << 6));
											v230 = (__m128)COERCE_UNSIGNED_INT((float)v227);
											v230.m128_f32[0] = v230.m128_f32[0] * 0.0039215689;
											v231 = _mm_shuffle_ps(v230, v230, 0);
											v223 = _mm_add_ps(_mm_mul_ps(*v229, v231), v223);
											v224 = _mm_add_ps(_mm_mul_ps(v229[1], v231), v224);
											v232 = _mm_mul_ps(v229[3], v231);
											v225 = _mm_add_ps(_mm_mul_ps(v229[2], v231), v225);
											v294 = v223;
											v295 = v224;
											v296 = v225;
											v226 = _mm_add_ps(v232, v226);
											v297 = v226;
										} while ((unsigned __int64)(v220 + 1) < 4);
										v233 = v210 + 1;
										if (v210 + 1 < v212)
										{
											v234 = v233 + v211[1];
											do
											{
												if (v301 != *(_DWORD*)(v234 * v214[42] + v214[31]))
													break;
												if (v217 != *(_DWORD*)(v234 * v214[43] + v214[32]))
													break;
												++v233;
												++v234;
											} while (v233 < v212);
										}
										v235 = (__m128*)a1[1].m128_u64[0];
										v309[0] = &v294;
										v303.m128_u64[1] = (unsigned __int64)&v235[19];
										v309[1] = v235 + 19;
										sub_1401AFB10(v309, &v305);
										if (*(_BYTE*)(v290 + 32) != 1 || (v238 = *(_BYTE*)(v290 + 28), (v238 & 0xF) != 0))
										{
											if (v237 != v236)
											{
												v250 = v306;
												v251 = v305;
												v252 = v307;
												v253 = v308;
												do
												{
													v254 = a1[3].m128_u64[1];
													v255 = v237 + v211[1];
													if (*(_DWORD*)(v254 + 392) == 1)
													{
														v256 = (unsigned int*)(*(_QWORD*)(v254 + 216) + v255 * *(_QWORD*)(v254 + 304));
														v257 = _mm_unpacklo_ps(
															_mm_unpacklo_ps((__m128) * v256, (__m128)v256[2]),
															_mm_unpacklo_ps((__m128)v256[1], (__m128)0i64));
													}
													else
													{
														v258 = (__int16*)(*(_QWORD*)(v254 + 216) + v255 * *(_QWORD*)(v254 + 304));
														v257 = _mm_mul_ps(
															_mm_unpacklo_ps(
																_mm_unpacklo_ps(
																	(__m128)COERCE_UNSIGNED_INT((float)*v258),
																	(__m128)COERCE_UNSIGNED_INT((float)v258[2])),
																_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v258[1]), (__m128)0i64)),
															(__m128)xmmword_140B7AB30);
													}
													v259 = 2i64 * v237++;
													*(__m128*)& v206[2 * v259] = _mm_add_ps(
														_mm_add_ps(
															_mm_add_ps(
																_mm_mul_ps(_mm_shuffle_ps(v257, v257, 85), v250),
																_mm_mul_ps(_mm_shuffle_ps(v257, v257, 0), v251)),
															_mm_mul_ps(_mm_shuffle_ps(v257, v257, 170), v252)),
														v253);
												} while (v237 != v236);
											}
										}
										else
										{
											v239 = v305;
											v240 = v306;
											v241 = v238;
											v242 = v307;
											v243 = v308;
											v244 = (__m128*)(*(_QWORD*)(v290 + 64)
												+ 16 * (*(unsigned __int8*)(v290 + 43) + (unsigned __int64)(v237 * v238)));
											v245 = &v206[4 * v237];
											v246 = (v236 - v237) * (unsigned __int64)(unsigned int)v241;
											v247 = (__m128*)((char*)v244 + v246);
											v248 = v246 >> 2;
											if (v248 > 0x400)
												v248 = 1024i64;
											while (v244 < v247)
											{
												_mm_prefetch((const char*)v244 + v248, 0);
												v249 = *v244;
												v244 = (__m128*)((char*)v244 + v241);
												v245 += 4;
												_mm_stream_ps(
													(float*)v245 - 4,
													_mm_add_ps(
														_mm_add_ps(
															_mm_add_ps(
																_mm_mul_ps(_mm_shuffle_ps(v249, v249, 85), v240),
																_mm_mul_ps(_mm_shuffle_ps(v249, v249, 0), v239)),
															_mm_mul_ps(_mm_shuffle_ps(v249, v249, 170), v242)),
														v243));
											}
											_mm_sfence();
										}
										v212 = v211[3];
										v210 = v236;
										v260 = v236 < v212;
										v213 = v304;
									} while (v260);
									v208 = v288;
									v209 = v290;
									v207 = v281;
								}
								v261 = 0i64;
								if (v211[3])
								{
									do
									{
										*((_BYTE*)v208 + v261) = _mm_movemask_ps(_mm_sub_ps(*(__m128*) & v206[4 * (unsigned int)v261], *a2)) & 7 | (8 * (_mm_movemask_ps(_mm_sub_ps(a2[1], *(__m128*) & v206[4 * (unsigned int)v261])) & 7));
										v261 = (unsigned int)(v261 + 1);
									} while ((unsigned int)v261 < v211[3]);
									v209 = v290;
								}
								v262 = *v211;
								v263 = *(_QWORD*)(v209 + 120);
								if (*(_BYTE*)(v209 + 109) == 1)
								{
									v264 = v263 + 2 * v262;
									v265 = v264 + 2i64 * v211[2];
									if (v264 < v265)
									{
										v266 = (unsigned __int16*)(v264 + 2);
										do
										{
											v267 = *(v266 - 1);
											v268 = v266[1];
											v269 = *v266;
											if (((unsigned __int8)(*((_BYTE*)v208 + v268) & *((_BYTE*)v208 + v267)) & *((_BYTE*)v208 + v269)) == 0)
												sub_1401D8AF0(a4, &v206[4 * v267], &v206[4 * v269], &v206[4 * v268]);
											v266 += 3;
										} while ((unsigned __int64)(v266 - 1) < v265);
									LABEL_204:
										v209 = v290;
									}
								}
								else
								{
									v270 = v263 + 4 * v262;
									v271 = v270 + 4i64 * v211[2];
									if (v270 < v271)
									{
										v272 = (unsigned int*)(v270 + 4);
										do
										{
											v273 = *(v272 - 1);
											v274 = v272[1];
											v275 = *v272;
											if (((unsigned __int8)(*((_BYTE*)v208 + v274) & *((_BYTE*)v208 + v273)) & *((_BYTE*)v208 + v275)) == 0)
												sub_1401D8AF0(a4, &v206[4 * v273], &v206[4 * v275], &v206[4 * v274]);
											v272 += 3;
										} while ((unsigned __int64)(v272 - 1) < v271);
										goto LABEL_204;
									}
								}
								v281 = ++v207;
							} while (v207 < v298);
						}
						sub_14018B900((__int64)v206, 0);
						sub_14018B900((__int64)v208, 0);
						result = (__int64)v293;
						if (v293)
							result = (*(__int64(__fastcall**)(int*))(*((_QWORD*)v293 - 2) + 8i64))(v293 - 4);
						v7 = a3;
						v6 = a4;
						v8 = a2;
					}
				}
			}
		}
		for (i = a1[77].m128_u64[0]; i; i = *(_QWORD*)(i + 1248))
		{
			if (!*(_DWORD*)(i + 1200) || *(_QWORD*)(i + 1208))
				result = (*(__int64(__fastcall**)(unsigned __int64, __m128*, _QWORD, __int64))(*(_QWORD*)i + 1320i64))(
					i,
					v8,
					v7,
					v6);
		}
	}
	return result;
}
// 1402FDAB7: variable 'v60' is possibly undefined
// 1402FDFB8: variable 'v163' is possibly undefined
// 1402FE262: variable 'v156' is possibly undefined
// 1402FE574: variable 'v237' is possibly undefined
// 1402FE563: variable 'v236' is possibly undefined
// 140B7AB30: using guessed type __int128 xmmword_140B7AB30;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B2C0: using guessed type __int128 xmmword_140B7B2C0;
// 140C421A0: using guessed type int dword_140C421A0;
// 140C421B0: using guessed type _BYTE byte_140C421B0[32];
// 140C63750: using guessed type __int64 qword_140C63750;

