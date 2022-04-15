//----- (00000001408BA400) ----------------------------------------------------
unsigned int* __fastcall sub_1408BA400(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r15
	__m128* v4; // r11
	unsigned __int64 v5; // rdi
	unsigned __int64 v6; // rsi
	__m128* v7; // rbp
	unsigned int* v8; // rbx
	unsigned int* v9; // r13
	unsigned __int32 v10; // xmm4_4
	float v11; // xmm9_4
	float v12; // xmm3_4
	__int64 v14; // rdx
	__m128 v15; // xmm0
	__m128 v16; // xmm1
	float v17; // xmm2_4
	__m128 v18; // xmm0
	unsigned int* v19; // rcx
	__m128 v20; // xmm5
	__m128 v21; // xmm6
	unsigned int* v22; // rax
	unsigned __int64 v23; // r14
	unsigned int* v24; // r8
	unsigned __int64 v25; // r12
	__m128 v26; // xmm15
	__m128 v27; // xmm1
	unsigned int* v28; // r10
	unsigned int* v29; // rdx
	__m128 v30; // xmm0
	unsigned int* v31; // r9
	unsigned int* v32; // r11
	unsigned __int64 v33; // rax
	__m128 v34; // xmm8
	__m128 v35; // xmm10
	__m128 v36; // xmm11
	__m128 v37; // xmm12
	__m128 v38; // xmm14
	__m128 v39; // xmm13
	__m128 v40; // xmm2
	__m128 v41; // xmm0
	__m128 v42; // xmm4
	unsigned __int64 v43; // rax
	__m128 v44; // xmm2
	__m128 v45; // xmm0
	__m128 v46; // xmm15
	__m128 v47; // xmm2
	__m128 v48; // xmm7
	__m128 v49; // xmm8
	__m128 v50; // xmm4
	__m128 v51; // xmm3
	__m128 v52; // xmm5
	__m128 v53; // xmm6
	__m128* v54; // rax
	__m128 v55; // xmm2
	__m128 v56; // xmm8
	__m128 v57; // xmm1
	__m128 v58; // xmm4
	__m128 v59; // xmm0
	__m128 v60; // xmm2
	__m128 v61; // xmm6
	__m128 v62; // xmm5
	__m128 v63; // xmm7
	__m128 v64; // xmm0
	__m128 v65; // xmm1
	__m128 v66; // xmm3
	__int64 v67; // rcx
	float v68; // xmm14_4
	float v69; // xmm12_4
	__int64 v70; // rdx
	__int64 v71; // r8
	float v72; // xmm13_4
	__int64 v73; // r9
	float v74; // xmm10_4
	float v75; // xmm11_4
	__int64 v76; // r10
	__m128 v77; // xmm2
	__m128 v78; // xmm8
	__m128 v79; // xmm2
	float v80; // xmm9_4
	__m128 v81; // xmm3
	__m128 v82; // xmm5
	__m128 v83; // xmm3
	__m128 v84; // xmm2
	__m128 v85; // xmm4
	__m128 v86; // xmm4
	__m128 v87; // xmm6
	__m128 v88; // xmm8
	__m128 v89; // xmm5
	__m128 v90; // xmm6
	__m128 v91; // xmm0
	__m128 v92; // xmm1
	__m128 v93; // xmm0
	__m128 v94; // xmm0
	__m128 v95; // xmm7
	__m128 v96; // xmm7
	__m128 v97; // xmm5
	__m128 v98; // xmm2
	__m128 v99; // xmm1
	__m128 v100; // xmm6
	__m128 v101; // xmm7
	__m128 v102; // xmm5
	float v103; // xmm1_4
	__m128 v104; // xmm2
	__m128 v105; // xmm2
	__m128 v106; // xmm0
	__m128 v107; // xmm1
	__m128 v108; // xmm2
	unsigned int* result; // rax
	unsigned __int64 v110; // [rsp+0h] [rbp-308h]
	unsigned int* v111; // [rsp+8h] [rbp-300h]
	unsigned __int64 v112; // [rsp+10h] [rbp-2F8h]
	__m128* v113; // [rsp+18h] [rbp-2F0h]
	unsigned int* v114; // [rsp+20h] [rbp-2E8h]
	unsigned int* v115; // [rsp+28h] [rbp-2E0h]
	unsigned __int64 v116; // [rsp+30h] [rbp-2D8h]
	unsigned int* v117; // [rsp+38h] [rbp-2D0h]
	float* v118; // [rsp+40h] [rbp-2C8h]
	unsigned __int64 v119; // [rsp+48h] [rbp-2C0h]
	__m128 v120; // [rsp+50h] [rbp-2B8h]
	unsigned int* v121; // [rsp+60h] [rbp-2A8h]
	__m128 v122; // [rsp+70h] [rbp-298h]
	unsigned int* v123; // [rsp+70h] [rbp-298h]
	unsigned __int64 v124; // [rsp+80h] [rbp-288h]
	unsigned __int64 v125; // [rsp+88h] [rbp-280h]
	unsigned int* v126; // [rsp+90h] [rbp-278h]
	__m128 v127; // [rsp+A0h] [rbp-268h]
	__m128 v128; // [rsp+B0h] [rbp-258h]
	float* v129; // [rsp+C0h] [rbp-248h]
	__m128 v130; // [rsp+D0h] [rbp-238h]
	float* v131; // [rsp+E0h] [rbp-228h]
	float v132; // [rsp+F0h] [rbp-218h]
	float v133; // [rsp+100h] [rbp-208h]
	float v134; // [rsp+110h] [rbp-1F8h]
	__m128 v135; // [rsp+120h] [rbp-1E8h]
	__m128 v136; // [rsp+130h] [rbp-1D8h]
	float v137; // [rsp+140h] [rbp-1C8h]
	__m128 v138; // [rsp+150h] [rbp-1B8h]
	__m128 v139; // [rsp+160h] [rbp-1A8h]
	float v140; // [rsp+170h] [rbp-198h]
	__m128 v141; // [rsp+180h] [rbp-188h]
	__m128 v142; // [rsp+190h] [rbp-178h]
	float v143; // [rsp+1A0h] [rbp-168h]
	float v144; // [rsp+1B0h] [rbp-158h]
	__m128 v145; // [rsp+1C0h] [rbp-148h]
	__m128 v146; // [rsp+1D0h] [rbp-138h]
	__m128 v147; // [rsp+1E0h] [rbp-128h]
	__m128 v148; // [rsp+1F0h] [rbp-118h]
	__m128 v149; // [rsp+200h] [rbp-108h]
	__m128 v150; // [rsp+210h] [rbp-F8h]
	int v153; // [rsp+328h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v5 = *(_QWORD*)(a1 + 304);
	v6 = *(_QWORD*)(a1 + 312);
	v142 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v127 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v7 = *(__m128**)(a1 + 320);
	v8 = *(unsigned int**)(a1 + 144);
	v9 = *(unsigned int**)(a1 + 160);
	v10 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v133 = *(float*)&v10;
	v134 = v11;
	v132 = v12;
	v14 = *(_QWORD*)(a1 + 16);
	v126 = *(unsigned int**)(a1 + 272);
	LODWORD(v144) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v140) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v118 = *(float**)a2;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v14 + 24);
	v15 = v2;
	v16 = (__m128) * (unsigned int*)(v14 + 16);
	v138 = _mm_shuffle_ps(v15, v15, 0);
	v130 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v129 = *(float**)(a1 + 40);
	v116 = *(_QWORD*)(a1 + 336);
	v17 = 1.0 / (float)*(unsigned __int16*)(a2 + 16);
	v16.m128_f32[0] = (float)(v16.m128_f32[0] - *(float*)(a1 + 572)) * v17;
	LODWORD(v143) = _mm_shuffle_ps(v16, v16, 0).m128_u32[0];
	v18 = (__m128) * (unsigned int*)(v14 + 20);
	v113 = *(__m128**)(a1 + 288);
	v131 = *(float**)(a1 + 56);
	v18.m128_f32[0] = (float)(v18.m128_f32[0] - *(float*)(a1 + 576)) * v17;
	v119 = *(_QWORD*)(a1 + 280);
	v124 = *(_QWORD*)(a1 + 352);
	LODWORD(v137) = _mm_shuffle_ps(v18, v18, 0).m128_u32[0];
	v125 = *(_QWORD*)(a1 + 344);
	v19 = *(unsigned int**)(a1 + 152);
	v20 = v4[23];
	v21 = v4[27];
	v22 = (unsigned int*)v4[10].m128_u64[1];
	v23 = v4[11].m128_u64[0];
	v24 = (unsigned int*)v4[12].m128_u64[1];
	v25 = v4[13].m128_u64[0];
	v26 = v4[31];
	v27 = v4[32];
	v145 = v4[24];
	v28 = (unsigned int*)v4[14].m128_u64[0];
	v112 = v4[13].m128_u64[1];
	v148 = v20;
	v150 = v21;
	v111 = (unsigned int*)v4[14].m128_u64[1];
	v110 = v4[11].m128_u64[1];
	v139 = v4[25];
	v147 = v4[28];
	v29 = (unsigned int*)v4[12].m128_u64[0];
	v136 = v4[29];
	v30 = v4[33];
	v153 = *(unsigned __int16*)(a2 + 18);
	v31 = v126;
	v120 = v30;
	if (*(_WORD*)(a2 + 18))
	{
		v32 = (unsigned int*)v4[10].m128_u64[1];
		v33 = v116;
		v34 = (__m128)xmmword_1409AA120;
		v35 = (__m128)xmmword_1409AA100;
		v36 = (__m128)xmmword_1409AA110;
		v37 = (__m128)xmmword_1409AA0F0;
		v38 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA120);
		v39 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA100);
		v141 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA110);
		v146 = v38;
		v135 = v39;
		do
		{
			v40 = (__m128) * v8;
			v41 = (__m128) * v9;
			v8 += 4;
			if ((unsigned __int64)v8 >= v33)
				v8 = v31;
			v121 = v19 + 4;
			v42 = (__m128) * v32;
			if ((unsigned __int64)(v19 + 4) >= v33)
			{
				v121 = v31 + 1;
				v33 = v116;
			}
			v9 += 4;
			if ((unsigned __int64)v9 >= v33)
				v9 = v31 + 2;
			v32 += 4;
			if ((unsigned __int64)v32 >= v33)
				v32 = v31 + 3;
			v43 = v119;
			v44 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v40, (__m128) * v19), _mm_unpacklo_ps(v41, v42)), v20);
			v23 += 16i64;
			v45 = _mm_mul_ps(v26, v21);
			v46 = v44;
			v47 = (__m128) * (unsigned int*)(v23 - 16);
			v26 = _mm_add_ps(v46, v45);
			if (v23 >= v125)
				v23 = v119;
			v110 += 16i64;
			v48 = _mm_mul_ps(v26, v34);
			v49 = (__m128) * (unsigned int*)(v110 - 16);
			v50 = _mm_mul_ps(v26, v37);
			v51 = _mm_mul_ps(v26, (__m128)xmmword_1409AA140);
			v52 = _mm_mul_ps(v26, v35);
			v53 = _mm_mul_ps(v26, v36);
			if (v110 >= v125)
				v110 = v119 + 4;
			v114 = v29 + 4;
			if ((unsigned __int64)(v29 + 4) >= v125)
			{
				v114 = (unsigned int*)(v119 + 8);
				v43 = v119;
			}
			v115 = v24 + 4;
			if ((unsigned __int64)(v24 + 4) >= v125)
				v115 = (unsigned int*)(v43 + 12);
			v54 = v113;
			v25 += 16i64;
			v55 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v47, v49), _mm_unpacklo_ps((__m128) * v29, (__m128) * v24)), v145);
			v56 = (__m128) * v111;
			v57 = _mm_add_ps(v55, _mm_mul_ps(v27, v147));
			v128 = v57;
			v58 = _mm_add_ps(v50, _mm_mul_ps(v57, v37));
			v59 = _mm_mul_ps(v57, v36);
			v122 = _mm_add_ps(v52, _mm_mul_ps(v57, v35));
			v60 = (__m128) * (unsigned int*)(v25 - 16);
			if (v25 >= v124)
				v25 = (unsigned __int64)v113;
			v61 = _mm_add_ps(v53, v59);
			v112 += 16i64;
			v62 = _mm_add_ps(v52, _mm_mul_ps(v39, v57));
			v63 = _mm_add_ps(v48, _mm_mul_ps(v57, (__m128)xmmword_1409AA130));
			v64 = _mm_mul_ps(v38, v57);
			v65 = _mm_add_ps(v57, v26);
			v149 = _mm_add_ps(v51, v64);
			v66 = (__m128) * (unsigned int*)(v112 - 16);
			if (v112 >= v124)
				v112 = (unsigned __int64)v113->m128_u64 + 4;
			v117 = v28 + 4;
			if ((unsigned __int64)(v28 + 4) >= v124)
			{
				v117 = &v113->m128_u32[2];
				v54 = v113;
			}
			v111 += 4;
			if ((unsigned __int64)v111 >= v124)
				v111 = &v54->m128_u32[3];
			v67 = *(unsigned __int16*)(a2 + 16);
			v68 = *v118;
			v69 = v118[v67];
			v70 = 2 * (int)v67;
			v71 = 5 * (int)v67;
			v72 = v118[v70];
			v73 = 3 * (int)v67;
			v74 = v118[v71];
			v75 = v118[v73];
			v120 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v60, v66), _mm_unpacklo_ps((__m128) * v28, v56)), v139),
				_mm_mul_ps(v120, v136));
			v76 = 4 * (int)v67;
			v77 = _mm_mul_ps(v120, (__m128)xmmword_1409AA100);
			v78 = _mm_add_ps(v77, v62);
			v79 = _mm_add_ps(v77, v122);
			v80 = v118[v76];
			v81 = _mm_add_ps(_mm_mul_ps(v120, (__m128)xmmword_1409AA0F0), v58);
			v82 = _mm_add_ps(_mm_mul_ps(v135, v120), v63);
			v83 = _mm_add_ps(v81, _mm_movehl_ps(v81, v81));
			v84 = _mm_add_ps(v79, _mm_movehl_ps(v79, v79));
			v85 = _mm_add_ps(_mm_mul_ps(v120, (__m128)xmmword_1409AA110), v61);
			v86 = _mm_add_ps(v85, _mm_movehl_ps(v85, v85));
			v87 = _mm_add_ps(_mm_mul_ps(v141, v120), v149);
			v88 = _mm_add_ps(v78, _mm_movehl_ps(v78, v78));
			v89 = _mm_add_ps(v82, _mm_movehl_ps(v82, v82));
			v90 = _mm_add_ps(v87, _mm_movehl_ps(v87, v87));
			v91 = _mm_add_ps(v120, v65);
			v92 = _mm_add_ps(_mm_movehl_ps(v91, v91), v91);
			v93 = v130;
			v93.m128_f32[0] = v130.m128_f32[0] + v143;
			v130 = v93;
			v94 = v127;
			v95 = _mm_add_ps(_mm_shuffle_ps(v92, v92, 85), v92);
			v94.m128_f32[0] = v127.m128_f32[0] + v137;
			v127 = v94;
			++v118;
			v96 = _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0), v138);
			*(v118 - 1) = (float)(v68 * v130.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v83, v83, 85).m128_f32[0] + v83.m128_f32[0]) * v94.m128_f32[0]);
			v118[v67 - 1] = (float)(v69 * v130.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v84, v84, 85).m128_f32[0] + v84.m128_f32[0]) * v94.m128_f32[0]);
			v118[v70 - 1] = (float)(v72 * v130.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v86, v86, 85).m128_f32[0] + v86.m128_f32[0]) * v94.m128_f32[0]);
			v118[v71 - 1] = (float)(v74 * v130.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v88, v88, 85).m128_f32[0] + v88.m128_f32[0]) * v94.m128_f32[0]);
			v92.m128_f32[0] = _mm_shuffle_ps(v89, v89, 85).m128_f32[0] + v89.m128_f32[0];
			v97 = _mm_add_ps(v96, v26);
			v118[v73 - 1] = (float)(v75 * v130.m128_f32[0]) + (float)(v92.m128_f32[0] * v94.m128_f32[0]);
			v94.m128_f32[0] = v80 * v130.m128_f32[0];
			v11 = (float)((float)(v72 + v74) + v80) + (float)((float)(v68 + v69) + v75);
			v98 = _mm_add_ps(v120, v96);
			v118[v76 - 1] = v94.m128_f32[0]
				+ (float)((float)(_mm_shuffle_ps(v90, v90, 85).m128_f32[0] + v90.m128_f32[0]) * v127.m128_f32[0]);
			v99 = _mm_add_ps(v128, v96);
			v100 = _mm_shuffle_ps(v98, _mm_shuffle_ps(v98, v97, 15), 201);
			v101 = _mm_shuffle_ps(v99, _mm_shuffle_ps(v99, v98, 15), 201);
			v102 = _mm_shuffle_ps(v97, _mm_shuffle_ps(v97, v99, 15), 201);
			v12 = (float)((float)(v140 * v132) + v11) - v134;
			v134 = v11;
			v132 = v12;
			if (v129)
			{
				v103 = *v3;
				*v3++ = v12;
				if (v3 == v131)
					v3 = v129;
			}
			else
			{
				v103 = v12;
			}
			v104 = v142;
			v33 = v116;
			v31 = v126;
			v19 = v121;
			v29 = v114;
			v35 = (__m128)xmmword_1409AA100;
			v36 = (__m128)xmmword_1409AA110;
			v37 = (__m128)xmmword_1409AA0F0;
			v24 = v115;
			v28 = v117;
			v5 += 16i64;
			v104.m128_f32[0] = (float)(v142.m128_f32[0] * v103) + (float)(v144 * v133);
			v105 = _mm_shuffle_ps(v104, v104, 0);
			v39 = v135;
			v38 = v146;
			v34 = (__m128)xmmword_1409AA120;
			v10 = LODWORD(v103);
			v133 = v103;
			v106 = _mm_add_ps(v105, v102);
			v20 = v148;
			*(__m128*)(v5 - 16) = v106;
			v107 = v105;
			if (v5 >= v116)
				v5 = (unsigned __int64)v126;
			v6 += 16i64;
			v108 = _mm_add_ps(v105, v100);
			v21 = v150;
			*(__m128*)(v6 - 16) = _mm_add_ps(v107, v101);
			v27 = v128;
			if (v6 >= v125)
				v6 = v119;
			*v7++ = v108;
			if ((unsigned __int64)v7 >= v124)
				v7 = v113;
			--v153;
		} while (v153);
		v30 = v120;
		v123 = v32;
		v4 = (__m128*)a1;
		v22 = v123;
	}
	v4[4].m128_i32[3] = v10;
	v4[35].m128_f32[0] = v11;
	v4[35].m128_f32[1] = v12;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[10].m128_u64[1] = (unsigned __int64)v22;
	v4[31] = v26;
	v4[32] = v27;
	v4[33] = v30;
	v4[11].m128_u64[1] = v110;
	v4[19].m128_u64[0] = v5;
	v4[13].m128_u64[1] = v112;
	result = v111;
	v4[19].m128_u64[1] = v6;
	v4[20].m128_u64[0] = (unsigned __int64)v7;
	v4[9].m128_u64[0] = (unsigned __int64)v8;
	v4[9].m128_u64[1] = (unsigned __int64)v19;
	v4[14].m128_u64[1] = (unsigned __int64)v111;
	v4[10].m128_u64[0] = (unsigned __int64)v9;
	v4[11].m128_u64[0] = v23;
	v4[12].m128_u64[0] = (unsigned __int64)v29;
	v4[12].m128_u64[1] = (unsigned __int64)v24;
	v4[13].m128_u64[0] = v25;
	v4[14].m128_u64[0] = (unsigned __int64)v28;
	return result;
}
// 1409AA0E0: using guessed type __int128 xmmword_1409AA0E0;
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA130: using guessed type __int128 xmmword_1409AA130;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

