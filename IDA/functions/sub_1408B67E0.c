//----- (00000001408B67E0) ----------------------------------------------------
unsigned int* __fastcall sub_1408B67E0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // rdi
	__int64 v5; // rdx
	float v6; // xmm5_4
	__m128 v7; // xmm11
	float v8; // xmm15_4
	float v9; // xmm12_4
	int v10; // eax
	unsigned __int64 v11; // r8
	__m128 v12; // xmm0
	__m128 v13; // xmm1
	__m128 v14; // xmm0
	__m128 v15; // xmm4
	__m128 v16; // xmm10
	__m128 v17; // xmm6
	__m128* v18; // r9
	unsigned __int64 v19; // r10
	unsigned __int64 v20; // r11
	unsigned int* v21; // rdx
	unsigned int* v22; // r14
	unsigned int* v23; // r15
	__m128 v24; // xmm7
	__m128 v25; // xmm8
	__m128 v26; // xmm9
	unsigned __int64 v27; // rbx
	unsigned int* v28; // r12
	unsigned int* v29; // r13
	unsigned __int64 v30; // rsi
	__m128 v31; // xmm0
	unsigned __int64 v32; // rbp
	unsigned int* v33; // rax
	unsigned int* v34; // rcx
	unsigned int* v35; // rax
	__m128 v36; // xmm1
	__m128 v37; // xmm0
	__m128 v38; // xmm3
	__m128 v39; // xmm5
	__m128 v40; // xmm1
	__m128 v41; // xmm2
	__m128 v42; // xmm0
	__m128 v43; // xmm7
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	__m128 v46; // xmm3
	__m128 v47; // xmm4
	unsigned int* v48; // rcx
	__m128 v49; // xmm0
	__m128 v50; // xmm1
	__m128 v51; // xmm2
	__m128 v52; // xmm5
	__m128 v53; // xmm1
	__m128 v54; // xmm0
	__m128 v55; // xmm8
	__m128 v56; // xmm1
	__m128 v57; // xmm10
	__m128 v58; // xmm3
	__m128 v59; // xmm4
	__m128 v60; // xmm0
	bool v61; // cf
	unsigned int* v62; // rax
	unsigned int* v63; // rcx
	__m128 v64; // xmm0
	__m128 v65; // xmm1
	__m128 v66; // xmm2
	__m128 v67; // xmm5
	__m128 v68; // xmm1
	__m128 v69; // xmm0
	__m128 v70; // xmm9
	__m128 v71; // xmm1
	__m128 v72; // xmm10
	__m128 v73; // xmm3
	__m128 v74; // xmm4
	__m128 v75; // xmm0
	unsigned int* v76; // rax
	float* v77; // rcx
	float* v78; // rax
	float v79; // xmm6_4
	__int64 v80; // rax
	__m128 v81; // xmm1
	float v82; // xmm5_4
	__m128 v83; // xmm2
	__m128 v84; // xmm2
	__m128 v85; // xmm3
	__m128 v86; // xmm3
	__m128 v87; // xmm0
	__m128 v88; // xmm10
	__m128 v89; // xmm1
	__m128 v90; // xmm4
	__m128 v91; // xmm4
	__m128 v92; // xmm2
	__m128 v93; // xmm3
	__m128 v94; // xmm1
	__m128 v95; // xmm10
	__m128 v96; // xmm11
	__m128 v97; // xmm1
	__m128 v98; // xmm4
	__m128 v99; // xmm3
	float v100; // xmm1_4
	__m128 v101; // xmm2
	float v102; // xmm0_4
	__m128 v103; // xmm2
	__m128 v104; // xmm1
	__m128 v105; // xmm0
	__m128 v106; // xmm2
	unsigned int* result; // rax
	unsigned int* v108; // [rsp+0h] [rbp-2A8h]
	unsigned int* v109; // [rsp+8h] [rbp-2A0h]
	unsigned int* v110; // [rsp+10h] [rbp-298h]
	unsigned int* v111; // [rsp+18h] [rbp-290h]
	unsigned int* v112; // [rsp+20h] [rbp-288h]
	unsigned int* v113; // [rsp+28h] [rbp-280h]
	unsigned int* v114; // [rsp+30h] [rbp-278h]
	unsigned __int64 v115; // [rsp+38h] [rbp-270h]
	unsigned __int64 v116; // [rsp+40h] [rbp-268h]
	unsigned int* v117; // [rsp+48h] [rbp-260h]
	unsigned int* v118; // [rsp+50h] [rbp-258h]
	unsigned int* v119; // [rsp+58h] [rbp-250h]
	float* v120; // [rsp+60h] [rbp-248h]
	unsigned __int64 v121; // [rsp+68h] [rbp-240h]
	unsigned __int64 v122; // [rsp+70h] [rbp-238h]
	unsigned int* v123; // [rsp+78h] [rbp-230h]
	__m128* v124; // [rsp+80h] [rbp-228h]
	__m128 v125; // [rsp+90h] [rbp-218h]
	float* v126; // [rsp+A0h] [rbp-208h]
	float* v127; // [rsp+A8h] [rbp-200h]
	__m128 v128; // [rsp+B0h] [rbp-1F8h]
	float v129; // [rsp+C0h] [rbp-1E8h]
	float v130; // [rsp+D0h] [rbp-1D8h]
	__m128 v131; // [rsp+E0h] [rbp-1C8h]
	float v132; // [rsp+F0h] [rbp-1B8h]
	__m128 v133; // [rsp+100h] [rbp-1A8h]
	__m128 v134; // [rsp+110h] [rbp-198h]
	__m128 v135; // [rsp+120h] [rbp-188h]
	float v136; // [rsp+130h] [rbp-178h]
	float v137; // [rsp+140h] [rbp-168h]
	__m128 v138; // [rsp+150h] [rbp-158h]
	__m128 v139; // [rsp+160h] [rbp-148h]
	__m128 v140; // [rsp+170h] [rbp-138h]
	__m128 v141; // [rsp+180h] [rbp-128h]
	__m128 v142; // [rsp+190h] [rbp-118h]
	__m128 v143; // [rsp+1A0h] [rbp-108h]
	__m128 v144; // [rsp+1B0h] [rbp-F8h]
	__int64 v145; // [rsp+2B0h] [rbp+8h]
	int v147; // [rsp+2C8h] [rbp+20h]

	v145 = a1;
	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v5 = *(_QWORD*)(a1 + 16);
	v134 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v6) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v136) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v7 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	LODWORD(v132) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v8) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v9) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v129 = v6;
	v120 = *(float**)a2;
	v10 = *(unsigned __int16*)(a2 + 16);
	v11 = *(_QWORD*)(a1 + 304);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v5 + 24);
	v12 = v2;
	v13 = (__m128) * (unsigned int*)(v5 + 16);
	v131 = _mm_shuffle_ps(v12, v12, 0);
	v128 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v126 = *(float**)(a1 + 40);
	v123 = *(unsigned int**)(a1 + 272);
	v124 = *(__m128**)(a1 + 280);
	v114 = *(unsigned int**)(a1 + 288);
	v13.m128_f32[0] = (float)(v13.m128_f32[0] - *(float*)(a1 + 572)) * (float)(1.0 / (float)v10);
	v117 = *(unsigned int**)(a1 + 296);
	LODWORD(v130) = _mm_shuffle_ps(v13, v13, 0).m128_u32[0];
	v14 = (__m128) * (unsigned int*)(v5 + 20);
	v116 = *(_QWORD*)(a1 + 336);
	v127 = *(float**)(a1 + 56);
	v14.m128_f32[0] = (float)(v14.m128_f32[0] - *(float*)(a1 + 576)) * (float)(1.0 / (float)v10);
	v115 = *(_QWORD*)(a1 + 344);
	LODWORD(v137) = _mm_shuffle_ps(v14, v14, 0).m128_u32[0];
	v121 = *(_QWORD*)(a1 + 352);
	v122 = *(_QWORD*)(a1 + 360);
	v15 = *(__m128*)(a1 + 368);
	v16 = *(__m128*)(a1 + 384);
	v17 = *(__m128*)(a1 + 432);
	v18 = *(__m128**)(a1 + 312);
	v19 = *(_QWORD*)(a1 + 320);
	v20 = *(_QWORD*)(a1 + 328);
	v21 = *(unsigned int**)(a1 + 144);
	v22 = *(unsigned int**)(a1 + 160);
	v23 = *(unsigned int**)(a1 + 168);
	v24 = *(__m128*)(a1 + 496);
	v25 = *(__m128*)(a1 + 512);
	v26 = *(__m128*)(a1 + 528);
	v27 = *(_QWORD*)(a1 + 176);
	v28 = *(unsigned int**)(a1 + 192);
	v29 = *(unsigned int**)(a1 + 200);
	v141 = *(__m128*)(a1 + 400);
	v140 = v15;
	v139 = *(__m128*)(a1 + 416);
	v144 = v16;
	v30 = *(_QWORD*)(a1 + 208);
	v143 = *(__m128*)(a1 + 448);
	v142 = v17;
	v119 = *(unsigned int**)(a1 + 184);
	v109 = *(unsigned int**)(a1 + 224);
	v133 = *(__m128*)(a1 + 464);
	v111 = *(unsigned int**)(a1 + 216);
	v135 = *(__m128*)(a1 + 480);
	v31 = *(__m128*)(a1 + 544);
	v112 = *(unsigned int**)(a1 + 248);
	v118 = *(unsigned int**)(a1 + 232);
	v125 = v31;
	v32 = *(_QWORD*)(a1 + 240);
	v110 = *(unsigned int**)(a1 + 256);
	v113 = *(unsigned int**)(a1 + 264);
	v147 = *(unsigned __int16*)(a2 + 18);
	v33 = *(unsigned int**)(a1 + 152);
	if (*(_WORD*)(a2 + 18))
	{
		v34 = *(unsigned int**)(a1 + 152);
		v35 = v123;
		do
		{
			v36 = (__m128) * v21;
			v37 = (__m128) * v22;
			v21 += 4;
			if ((unsigned __int64)v21 >= v116)
				v21 = v35;
			v108 = v34 + 4;
			v38 = (__m128) * v23;
			if ((unsigned __int64)(v34 + 4) >= v116)
				v108 = v35 + 1;
			v22 += 4;
			if ((unsigned __int64)v22 >= v116)
				v22 = v35 + 2;
			v23 += 4;
			if ((unsigned __int64)v23 >= v116)
				v23 = v35 + 3;
			v39 = (__m128) * v29;
			v27 += 16i64;
			v40 = _mm_movelh_ps(_mm_unpacklo_ps(v36, (__m128) * v34), _mm_unpacklo_ps(v37, v38));
			v41 = (__m128) * v119;
			v42 = _mm_mul_ps(v24, v17);
			v43 = _mm_mul_ps(v40, v15);
			v44 = (__m128) * (unsigned int*)(v27 - 16);
			if (v27 >= v115)
				v27 = (unsigned __int64)v124;
			v24 = _mm_add_ps(v43, v42);
			v45 = (__m128) * v28;
			v119 += 4;
			v46 = _mm_mul_ps(v24, (__m128)xmmword_1409AA0F0);
			v47 = _mm_mul_ps(v24, (__m128)xmmword_1409AA100);
			if ((unsigned __int64)v119 >= v115)
				v119 = &v124->m128_u32[1];
			v28 += 4;
			if ((unsigned __int64)v28 >= v115)
				v28 = &v124->m128_u32[2];
			v29 += 4;
			if ((unsigned __int64)v29 >= v115)
				v29 = &v124->m128_u32[3];
			v48 = v118;
			v30 += 16i64;
			v49 = _mm_unpacklo_ps(v45, v39);
			v50 = _mm_unpacklo_ps(v44, v41);
			v51 = (__m128) * v111;
			v52 = (__m128) * v118;
			v53 = _mm_mul_ps(_mm_movelh_ps(v50, v49), v16);
			v54 = _mm_mul_ps(v25, v143);
			v55 = v53;
			v56 = (__m128) * (unsigned int*)(v30 - 16);
			if (v30 >= v121)
				v30 = (unsigned __int64)v114;
			v25 = _mm_add_ps(v55, v54);
			v57 = _mm_add_ps(v25, v24);
			v58 = _mm_add_ps(v46, _mm_mul_ps(v25, (__m128)xmmword_1409AA0F0));
			v59 = _mm_add_ps(v47, _mm_mul_ps(v25, (__m128)xmmword_1409AA100));
			v60 = (__m128) * v109;
			v61 = (unsigned __int64)(v111 + 4) < v121;
			v111 += 4;
			v62 = v109;
			if (!v61)
			{
				v111 = v114 + 1;
				v62 = v109;
			}
			v109 = v62 + 4;
			if ((unsigned __int64)(v62 + 4) >= v121)
				v109 = v114 + 2;
			v118 += 4;
			if ((unsigned __int64)(v48 + 4) >= v121)
				v118 = v114 + 3;
			v63 = v113;
			v32 += 16i64;
			v64 = _mm_unpacklo_ps(v60, v52);
			v65 = _mm_unpacklo_ps(v56, v51);
			v66 = (__m128) * v112;
			v67 = (__m128) * v113;
			v68 = _mm_mul_ps(_mm_movelh_ps(v65, v64), v141);
			v69 = _mm_mul_ps(v26, v133);
			v70 = v68;
			v71 = (__m128) * (unsigned int*)(v32 - 16);
			if (v32 >= v122)
				v32 = (unsigned __int64)v117;
			v26 = _mm_add_ps(v70, v69);
			v72 = _mm_add_ps(v57, v26);
			v73 = _mm_add_ps(v58, _mm_mul_ps(v26, (__m128)xmmword_1409AA0F0));
			v74 = _mm_add_ps(v59, _mm_mul_ps(v26, (__m128)xmmword_1409AA100));
			v75 = (__m128) * v110;
			v61 = (unsigned __int64)(v112 + 4) < v122;
			v112 += 4;
			v76 = v110;
			if (!v61)
			{
				v112 = v117 + 1;
				v76 = v110;
			}
			v110 = v76 + 4;
			if ((unsigned __int64)(v76 + 4) >= v122)
				v110 = v117 + 2;
			v113 += 4;
			if ((unsigned __int64)(v63 + 4) >= v122)
				v113 = v117 + 3;
			v7.m128_f32[0] = v7.m128_f32[0] + v130;
			v77 = v120;
			v78 = v120++;
			v79 = *v78;
			v138 = v7;
			v80 = *(unsigned __int16*)(a2 + 16);
			v81 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v71, v66), _mm_unpacklo_ps(v75, v67)), v139),
				_mm_mul_ps(v125, v135));
			v82 = v77[v80];
			v125 = v81;
			v83 = _mm_add_ps(_mm_mul_ps(v81, (__m128)xmmword_1409AA0F0), v73);
			v84 = _mm_add_ps(v83, _mm_movehl_ps(v83, v83));
			v85 = _mm_add_ps(_mm_mul_ps(v81, (__m128)xmmword_1409AA100), v74);
			v86 = _mm_add_ps(v85, _mm_movehl_ps(v85, v85));
			v87 = _mm_add_ps(v81, v72);
			v88 = v128;
			v88.m128_f32[0] = v128.m128_f32[0] + v137;
			v89 = _mm_add_ps(_mm_movehl_ps(v87, v87), v87);
			v128 = v88;
			v90 = _mm_add_ps(_mm_shuffle_ps(v89, v89, 85), v89);
			v89.m128_f32[0] = _mm_shuffle_ps(v84, v84, 85).m128_f32[0] + v84.m128_f32[0];
			v91 = _mm_mul_ps(_mm_shuffle_ps(v90, v90, 0), v131);
			v92 = _mm_add_ps(v26, v91);
			*v77 = (float)(v79 * v7.m128_f32[0]) + (float)(v89.m128_f32[0] * v88.m128_f32[0]);
			v89.m128_f32[0] = _mm_shuffle_ps(v86, v86, 85).m128_f32[0] + v86.m128_f32[0];
			v93 = _mm_add_ps(v91, v24);
			v77[v80] = (float)(v82 * v7.m128_f32[0]) + (float)(v89.m128_f32[0] * v88.m128_f32[0]);
			v94 = _mm_add_ps(v125, v91);
			v95 = _mm_shuffle_ps(v94, _mm_shuffle_ps(v94, v93, 15), 201);
			v96 = _mm_shuffle_ps(v92, _mm_shuffle_ps(v92, v94, 15), 201);
			v97 = _mm_add_ps(v25, v91);
			v98 = _mm_shuffle_ps(v97, _mm_shuffle_ps(v97, v92, 15), 201);
			v99 = _mm_shuffle_ps(v93, _mm_shuffle_ps(v93, v97, 15), 201);
			v6 = v79 + v82;
			v9 = (float)((float)(v132 * v9) + v6) - v129;
			v129 = v6;
			if (v126)
			{
				v100 = *v3;
				*v3++ = v9;
				if (v3 == v127)
					v3 = v126;
			}
			else
			{
				v100 = v9;
			}
			v101 = v134;
			v35 = v123;
			v34 = v108;
			v11 += 16i64;
			v102 = v136 * v8;
			v17 = v142;
			v8 = v100;
			v101.m128_f32[0] = (float)(v134.m128_f32[0] * v100) + v102;
			v103 = _mm_shuffle_ps(v101, v101, 0);
			v104 = _mm_add_ps(v103, v98);
			v15 = v140;
			*(__m128*)(v11 - 16) = _mm_add_ps(v103, v99);
			*v18 = v104;
			if (v11 >= v116)
				v11 = (unsigned __int64)v123;
			++v18;
			v105 = _mm_add_ps(v103, v96);
			if ((unsigned __int64)v18 >= v115)
				v18 = v124;
			v19 += 16i64;
			v106 = _mm_add_ps(v103, v95);
			v7 = v138;
			v16 = v144;
			*(__m128*)(v19 - 16) = v105;
			if (v19 >= v121)
				v19 = (unsigned __int64)v114;
			v20 += 16i64;
			*(__m128*)(v20 - 16) = v106;
			if (v20 >= v122)
				v20 = (unsigned __int64)v117;
			--v147;
		} while (v147);
		v31 = v125;
		a1 = v145;
		v33 = v108;
	}
	*(float*)(a1 + 76) = v8;
	*(float*)(a1 + 560) = v6;
	*(float*)(a1 + 564) = v9;
	*(_QWORD*)(a1 + 48) = v3;
	*(_QWORD*)(a1 + 152) = v33;
	*(__m128*)(a1 + 496) = v24;
	*(__m128*)(a1 + 512) = v25;
	*(__m128*)(a1 + 528) = v26;
	*(_QWORD*)(a1 + 184) = v119;
	*(_QWORD*)(a1 + 328) = v20;
	*(__m128*)(a1 + 544) = v31;
	*(_QWORD*)(a1 + 216) = v111;
	*(_QWORD*)(a1 + 224) = v109;
	*(_QWORD*)(a1 + 304) = v11;
	*(_QWORD*)(a1 + 232) = v118;
	*(_QWORD*)(a1 + 312) = v18;
	*(_QWORD*)(a1 + 248) = v112;
	*(_QWORD*)(a1 + 320) = v19;
	*(_QWORD*)(a1 + 256) = v110;
	result = v113;
	*(_QWORD*)(a1 + 144) = v21;
	*(_QWORD*)(a1 + 160) = v22;
	*(_QWORD*)(a1 + 168) = v23;
	*(_QWORD*)(a1 + 176) = v27;
	*(_QWORD*)(a1 + 264) = v113;
	*(_QWORD*)(a1 + 192) = v28;
	*(_QWORD*)(a1 + 200) = v29;
	*(_QWORD*)(a1 + 208) = v30;
	*(_QWORD*)(a1 + 240) = v32;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;

