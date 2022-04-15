#include "../winhttp.h"

//----- (00000001408B8960) ----------------------------------------------------
unsigned int* __fastcall sub_1408B8960(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r15
	__int64 v5; // rdx
	__m128* v6; // r10
	unsigned __int32 v7; // xmm4_4
	float v8; // xmm8_4
	float v9; // xmm3_4
	__m128 v10; // xmm0
	__m128 v11; // xmm1
	float v12; // xmm2_4
	__m128 v13; // xmm0
	unsigned int* v14; // rax
	unsigned int* v15; // r13
	__m128 v16; // xmm5
	__m128 v17; // xmm6
	unsigned __int64 v18; // rbx
	unsigned __int64 v19; // rdi
	__m128* v20; // rsi
	__m128* v21; // rbp
	__m128 v22; // xmm13
	__m128 v23; // xmm14
	__m128 v24; // xmm15
	unsigned int* v25; // r11
	unsigned int* v26; // rdx
	unsigned int* v27; // rcx
	unsigned __int64 v28; // r14
	unsigned int* v29; // r8
	unsigned int* v30; // r9
	__m128* v31; // r12
	__m128 v32; // xmm0
	unsigned __int64 v33; // r13
	__m128 v34; // xmm7
	unsigned int* v35; // r10
	unsigned int* v36; // rax
	__m128 v37; // xmm9
	__m128 v38; // xmm10
	__m128 v39; // xmm11
	__m128 v40; // xmm12
	__m128 v41; // xmm1
	__m128 v42; // xmm0
	unsigned __int64 v43; // rax
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	__m128 v46; // xmm13
	__m128 v47; // xmm1
	__m128 v48; // xmm6
	__m128 v49; // xmm7
	__m128 v50; // xmm2
	__m128 v51; // xmm3
	__m128 v52; // xmm4
	__m128 v53; // xmm5
	__m128 v54; // xmm8
	__m128 v55; // xmm0
	__m128 v56; // xmm14
	__m128 v57; // xmm1
	__m128 v58; // xmm7
	__m128 v59; // xmm2
	__m128 v60; // xmm4
	__m128 v61; // xmm5
	__m128 v62; // xmm6
	__m128 v63; // xmm0
	__m128 v64; // xmm12
	__m128 v65; // xmm3
	__m128 v66; // xmm0
	__m128 v67; // xmm1
	__m128 v68; // xmm0
	__m128 v69; // xmm15
	__m128 v70; // xmm1
	__m128 v71; // xmm7
	__m128 v72; // xmm2
	__m128 v73; // xmm4
	__m128 v74; // xmm5
	__m128 v75; // xmm6
	__m128 v76; // xmm0
	__m128 v77; // xmm3
	__int64 v78; // rcx
	float v79; // xmm12_4
	float v80; // xmm10_4
	__int64 v81; // rdx
	__int64 v82; // r8
	float v83; // xmm11_4
	float v84; // xmm9_4
	__int64 v85; // r9
	__m128 v86; // xmm7
	float v87; // xmm8_4
	__m128 v88; // xmm3
	__m128 v89; // xmm2
	__m128 v90; // xmm7
	__m128 v91; // xmm3
	__m128 v92; // xmm4
	__m128 v93; // xmm5
	__m128 v94; // xmm2
	__m128 v95; // xmm4
	__m128 v96; // xmm7
	__m128 v97; // xmm5
	__m128 v98; // xmm0
	__m128 v99; // xmm1
	__m128 v100; // xmm0
	__m128 v101; // xmm0
	__m128 v102; // xmm6
	__m128 v103; // xmm6
	__m128 v104; // xmm5
	__m128 v105; // xmm2
	__m128 v106; // xmm1
	__m128 v107; // xmm7
	__m128 v108; // xmm1
	__m128 v109; // xmm6
	__m128 v110; // xmm5
	float v111; // xmm1_4
	__m128 v112; // xmm2
	__m128 v113; // xmm2
	__m128 v114; // xmm0
	__m128 v115; // xmm1
	__m128 v116; // xmm0
	__m128 v117; // xmm2
	__m128 v118; // xmm1
	unsigned int* result; // rax
	unsigned __int32* v120; // [rsp+0h] [rbp-348h]
	unsigned __int32* v121; // [rsp+8h] [rbp-340h]
	unsigned __int64 v122; // [rsp+10h] [rbp-338h]
	unsigned __int32* v123; // [rsp+18h] [rbp-330h]
	unsigned int* v124; // [rsp+20h] [rbp-328h]
	unsigned __int64 v125; // [rsp+28h] [rbp-320h]
	unsigned __int64 v126; // [rsp+30h] [rbp-318h]
	unsigned int* v127; // [rsp+38h] [rbp-310h]
	unsigned int* v128; // [rsp+40h] [rbp-308h]
	unsigned int* v129; // [rsp+48h] [rbp-300h]
	unsigned int* v130; // [rsp+50h] [rbp-2F8h]
	__m128 v131; // [rsp+60h] [rbp-2E8h]
	unsigned int* v132; // [rsp+60h] [rbp-2E8h]
	unsigned int* v133; // [rsp+70h] [rbp-2D8h]
	float* v134; // [rsp+78h] [rbp-2D0h]
	unsigned int* v135; // [rsp+80h] [rbp-2C8h]
	unsigned __int64 v136; // [rsp+88h] [rbp-2C0h]
	unsigned __int64 v137; // [rsp+90h] [rbp-2B8h]
	__m128* v138; // [rsp+98h] [rbp-2B0h]
	unsigned __int64 v139; // [rsp+A0h] [rbp-2A8h]
	unsigned __int64 v140; // [rsp+A8h] [rbp-2A0h]
	__m128* v141; // [rsp+B0h] [rbp-298h]
	__m128 v142; // [rsp+C0h] [rbp-288h]
	__m128 v143; // [rsp+D0h] [rbp-278h]
	__m128 v144; // [rsp+E0h] [rbp-268h]
	__m128 v145; // [rsp+F0h] [rbp-258h]
	__m128 v146; // [rsp+F0h] [rbp-258h]
	float* v147; // [rsp+100h] [rbp-248h]
	float* v148; // [rsp+108h] [rbp-240h]
	float v149; // [rsp+110h] [rbp-238h]
	float v150; // [rsp+120h] [rbp-228h]
	float v151; // [rsp+130h] [rbp-218h]
	__m128 v152; // [rsp+140h] [rbp-208h]
	float v153; // [rsp+150h] [rbp-1F8h]
	__m128 v154; // [rsp+160h] [rbp-1E8h]
	float v155; // [rsp+170h] [rbp-1D8h]
	__m128 v156; // [rsp+180h] [rbp-1C8h]
	__m128 v157; // [rsp+190h] [rbp-1B8h]
	__m128 v158; // [rsp+1A0h] [rbp-1A8h]
	float v159; // [rsp+1B0h] [rbp-198h]
	__m128 v160; // [rsp+1C0h] [rbp-188h]
	float v161; // [rsp+1D0h] [rbp-178h]
	__m128 v162; // [rsp+1E0h] [rbp-168h]
	__m128 v163; // [rsp+1F0h] [rbp-158h]
	__m128 v164; // [rsp+200h] [rbp-148h]
	__m128 v165; // [rsp+210h] [rbp-138h]
	__m128 v166; // [rsp+220h] [rbp-128h]
	__m128 v167; // [rsp+230h] [rbp-118h]
	__m128 v168; // [rsp+240h] [rbp-108h]
	__m128 v169; // [rsp+250h] [rbp-F8h]
	int v172; // [rsp+368h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = (__m128*)a1;
	v163 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v143 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v7 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v8) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v9) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v150 = *(float*)&v7;
	v151 = v8;
	LODWORD(v161) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v149 = v9;
	LODWORD(v159) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v134 = *(float**)a2;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v5 + 24);
	v10 = v2;
	v11 = (__m128) * (unsigned int*)(v5 + 16);
	v157 = _mm_shuffle_ps(v10, v10, 0);
	v144 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v147 = *(float**)(a1 + 40);
	v128 = *(unsigned int**)(a1 + 272);
	v12 = 1.0 / (float)*(unsigned __int16*)(a2 + 16);
	v122 = *(_QWORD*)(a1 + 336);
	v11.m128_f32[0] = (float)(v11.m128_f32[0] - *(float*)(a1 + 572)) * v12;
	LODWORD(v153) = _mm_shuffle_ps(v11, v11, 0).m128_u32[0];
	v13 = (__m128) * (unsigned int*)(v5 + 20);
	v148 = *(float**)(a1 + 56);
	v136 = *(_QWORD*)(a1 + 280);
	v138 = *(__m128**)(a1 + 288);
	v13.m128_f32[0] = (float)(v13.m128_f32[0] - *(float*)(a1 + 576)) * v12;
	LODWORD(v155) = _mm_shuffle_ps(v13, v13, 0).m128_u32[0];
	v141 = *(__m128**)(a1 + 296);
	v137 = *(_QWORD*)(a1 + 344);
	v140 = *(_QWORD*)(a1 + 352);
	v139 = *(_QWORD*)(a1 + 360);
	v14 = *(unsigned int**)(a1 + 160);
	v15 = *(unsigned int**)(a1 + 224);
	v16 = *(__m128*)(a1 + 368);
	v17 = *(__m128*)(a1 + 432);
	v18 = *(_QWORD*)(a1 + 304);
	v19 = *(_QWORD*)(a1 + 312);
	v20 = *(__m128**)(a1 + 320);
	v21 = *(__m128**)(a1 + 328);
	v22 = *(__m128*)(a1 + 496);
	v23 = *(__m128*)(a1 + 512);
	v24 = *(__m128*)(a1 + 528);
	v25 = *(unsigned int**)(a1 + 144);
	v26 = *(unsigned int**)(a1 + 152);
	v27 = *(unsigned int**)(a1 + 168);
	v166 = v6[24];
	v167 = v16;
	v28 = v6[11].m128_u64[0];
	v29 = (unsigned int*)v6[12].m128_u64[0];
	v30 = (unsigned int*)v6[12].m128_u64[1];
	v154 = v6[25];
	v169 = v17;
	v31 = (__m128*)v6[13].m128_u64[0];
	v158 = v6[26];
	v168 = v6[28];
	v126 = v6[11].m128_u64[1];
	v121 = v15;
	v162 = v6[29];
	v120 = (unsigned __int32*)v6[13].m128_u64[1];
	v164 = v6[30];
	v32 = v6[34];
	v142 = v32;
	v125 = v6[15].m128_u64[1];
	v123 = (unsigned __int32*)v6[14].m128_u64[1];
	v33 = v6[15].m128_u64[0];
	v127 = (unsigned int*)v6[16].m128_u64[0];
	v124 = (unsigned int*)v6[16].m128_u64[1];
	v172 = *(unsigned __int16*)(a2 + 18);
	if (*(_WORD*)(a2 + 18))
	{
		v34 = (__m128)xmmword_1409AA120;
		v35 = v14;
		v36 = v128;
		v37 = (__m128)xmmword_1409AA100;
		v38 = (__m128)xmmword_1409AA110;
		v39 = (__m128)xmmword_1409AA0F0;
		v156 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA100);
		v40 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA120);
		v160 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA0F0);
		v152 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA110);
		v165 = v40;
		do
		{
			v41 = (__m128) * v25;
			v42 = (__m128) * v35;
			v25 += 4;
			if ((unsigned __int64)v25 >= v122)
				v25 = v36;
			v133 = v26 + 4;
			if ((unsigned __int64)(v26 + 4) >= v122)
			{
				v133 = v36 + 1;
				v36 = v128;
			}
			v35 += 4;
			if ((unsigned __int64)v35 >= v122)
				v35 = v36 + 2;
			v135 = v27 + 4;
			if ((unsigned __int64)(v27 + 4) >= v122)
				v135 = v36 + 3;
			v43 = v136;
			v44 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v41, (__m128) * v26), _mm_unpacklo_ps(v42, (__m128) * v27)), v16);
			v28 += 16i64;
			v45 = _mm_mul_ps(v22, v17);
			v46 = v44;
			v47 = (__m128) * (unsigned int*)(v28 - 16);
			v22 = _mm_add_ps(v46, v45);
			if (v28 >= v137)
				v28 = v136;
			v126 += 16i64;
			v48 = _mm_mul_ps(v22, v34);
			v49 = (__m128) * (unsigned int*)(v126 - 16);
			v50 = _mm_mul_ps(v22, v39);
			v51 = _mm_mul_ps(v22, (__m128)xmmword_1409AA140);
			v52 = _mm_mul_ps(v22, v37);
			v53 = _mm_mul_ps(v22, v38);
			if (v126 >= v137)
				v126 = v136 + 4;
			v129 = v29 + 4;
			if ((unsigned __int64)(v29 + 4) >= v137)
			{
				v129 = (unsigned int*)(v136 + 8);
				v43 = v136;
			}
			v130 = v30 + 4;
			if ((unsigned __int64)(v30 + 4) >= v137)
				v130 = (unsigned int*)(v43 + 12);
			v54 = (__m128) * v120;
			v55 = _mm_mul_ps(v23, v168);
			++v31;
			v56 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v47, v49), _mm_unpacklo_ps((__m128) * v29, (__m128) * v30)), v166);
			v57 = (__m128)v31[-1].m128_u32[0];
			if ((unsigned __int64)v31 >= v140)
				v31 = v138;
			v23 = _mm_add_ps(v56, v55);
			v120 += 4;
			v58 = _mm_add_ps(v23, v22);
			v59 = _mm_add_ps(v50, _mm_mul_ps(v23, v39));
			v60 = _mm_add_ps(v52, _mm_mul_ps(v23, v37));
			v61 = _mm_add_ps(v53, _mm_mul_ps(v23, v38));
			v62 = _mm_add_ps(v48, _mm_mul_ps(v23, (__m128)xmmword_1409AA130));
			v63 = v40;
			v64 = (__m128) * v123;
			v65 = _mm_add_ps(v51, _mm_mul_ps(v63, v23));
			v66 = (__m128) * v121;
			if ((unsigned __int64)v120 >= v140)
				v120 = &v138->m128_u32[1];
			v121 += 4;
			if ((unsigned __int64)v121 >= v140)
				v121 = &v138->m128_u32[2];
			v123 += 4;
			if ((unsigned __int64)v123 >= v140)
				v123 = &v138->m128_u32[3];
			v67 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v57, v54), _mm_unpacklo_ps(v66, v64)), v154);
			v68 = _mm_mul_ps(v24, v162);
			v33 += 16i64;
			v69 = v67;
			v70 = (__m128) * (unsigned int*)(v33 - 16);
			if (v33 >= v139)
				v33 = (unsigned __int64)v141;
			v24 = _mm_add_ps(v69, v68);
			v125 += 16i64;
			v145 = _mm_add_ps(v58, v24);
			v71 = (__m128) * v124;
			v72 = _mm_add_ps(v59, _mm_mul_ps(v24, v39));
			v73 = _mm_add_ps(v60, _mm_mul_ps(v24, v37));
			v74 = _mm_add_ps(v61, _mm_mul_ps(v24, v38));
			v75 = _mm_add_ps(v62, _mm_mul_ps(v156, v24));
			v76 = (__m128) * v127;
			v131 = _mm_add_ps(v65, _mm_mul_ps(v152, v24));
			v77 = (__m128) * (unsigned int*)(v125 - 16);
			if (v125 >= v139)
				v125 = (unsigned __int64)v141->m128_u64 + 4;
			v127 += 4;
			if ((unsigned __int64)v127 >= v139)
				v127 = &v141->m128_u32[2];
			v124 += 4;
			if ((unsigned __int64)v124 >= v139)
				v124 = &v141->m128_u32[3];
			v78 = *(unsigned __int16*)(a2 + 16);
			v79 = *v134;
			v80 = v134[v78];
			v81 = 2 * (int)v78;
			v82 = 3 * (int)v78;
			v83 = v134[v81];
			v84 = v134[v82];
			v142 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v70, v77), _mm_unpacklo_ps(v76, v71)), v158),
				_mm_mul_ps(v142, v164));
			v85 = 4 * (int)v78;
			v86 = _mm_mul_ps(v142, (__m128)xmmword_1409AA100);
			v87 = v134[v85];
			v88 = _mm_add_ps(_mm_mul_ps(v142, (__m128)xmmword_1409AA0F0), v72);
			v89 = _mm_add_ps(v86, v73);
			v90 = _mm_add_ps(v86, v75);
			v91 = _mm_add_ps(v88, _mm_movehl_ps(v88, v88));
			v92 = _mm_add_ps(_mm_mul_ps(v142, (__m128)xmmword_1409AA110), v74);
			v93 = _mm_add_ps(_mm_mul_ps(v160, v142), v131);
			v94 = _mm_add_ps(v89, _mm_movehl_ps(v89, v89));
			v95 = _mm_add_ps(v92, _mm_movehl_ps(v92, v92));
			v96 = _mm_add_ps(v90, _mm_movehl_ps(v90, v90));
			v97 = _mm_add_ps(v93, _mm_movehl_ps(v93, v93));
			v98 = _mm_add_ps(v142, v145);
			v99 = _mm_add_ps(_mm_movehl_ps(v98, v98), v98);
			v100 = v144;
			v100.m128_f32[0] = v144.m128_f32[0] + v153;
			v144 = v100;
			v101 = v143;
			v102 = _mm_add_ps(_mm_shuffle_ps(v99, v99, 85), v99);
			v101.m128_f32[0] = v143.m128_f32[0] + v155;
			v143 = v101;
			*v134 = (float)(*v134 * v144.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v91, v91, 85).m128_f32[0] + v91.m128_f32[0]) * v101.m128_f32[0]);
			v99.m128_f32[0] = _mm_shuffle_ps(v94, v94, 85).m128_f32[0] + v94.m128_f32[0];
			v94.m128_i32[0] = v101.m128_i32[0];
			++v134;
			v103 = _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0), v157);
			v134[v78 - 1] = (float)(v80 * v144.m128_f32[0]) + (float)(v99.m128_f32[0] * v101.m128_f32[0]);
			v134[v81 - 1] = (float)(v83 * v144.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v95, v95, 85).m128_f32[0] + v95.m128_f32[0]) * v101.m128_f32[0]);
			v134[v82 - 1] = (float)(v84 * v144.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v96, v96, 85).m128_f32[0] + v96.m128_f32[0]) * v101.m128_f32[0]);
			v99.m128_f32[0] = _mm_shuffle_ps(v97, v97, 85).m128_f32[0] + v97.m128_f32[0];
			v101.m128_f32[0] = v87 * v144.m128_f32[0];
			v8 = (float)(v83 + v84) + (float)((float)(v79 + v80) + v87);
			v104 = _mm_add_ps(v103, v22);
			v101.m128_f32[0] = v101.m128_f32[0] + (float)(v99.m128_f32[0] * v94.m128_f32[0]);
			v105 = _mm_add_ps(v24, v103);
			v134[v85 - 1] = v101.m128_f32[0];
			v106 = _mm_add_ps(v142, v103);
			v107 = _mm_shuffle_ps(v106, _mm_shuffle_ps(v106, v104, 15), 201);
			v146 = _mm_shuffle_ps(v105, _mm_shuffle_ps(v105, v106, 15), 201);
			v108 = _mm_add_ps(v23, v103);
			v109 = _mm_shuffle_ps(v108, _mm_shuffle_ps(v108, v105, 15), 201);
			v110 = _mm_shuffle_ps(v104, _mm_shuffle_ps(v104, v108, 15), 201);
			v9 = (float)((float)(v159 * v149) + v8) - v151;
			v151 = v8;
			v149 = v9;
			if (v147)
			{
				v111 = *v3;
				*v3++ = v9;
				if (v3 == v148)
					v3 = v147;
			}
			else
			{
				v111 = v9;
			}
			v112 = v163;
			v36 = v128;
			v27 = v135;
			v26 = v133;
			v29 = v129;
			v37 = (__m128)xmmword_1409AA100;
			v38 = (__m128)xmmword_1409AA110;
			v39 = (__m128)xmmword_1409AA0F0;
			v30 = v130;
			v18 += 16i64;
			v112.m128_f32[0] = (float)(v163.m128_f32[0] * v111) + (float)(v161 * v150);
			v113 = _mm_shuffle_ps(v112, v112, 0);
			v40 = v165;
			v7 = LODWORD(v111);
			v114 = _mm_add_ps(v113, v110);
			v16 = v167;
			*(__m128*)(v18 - 16) = v114;
			v150 = v111;
			if (v18 >= v122)
				v18 = (unsigned __int64)v128;
			v19 += 16i64;
			v115 = v113;
			v116 = v113;
			v117 = _mm_add_ps(v113, v107);
			v34 = (__m128)xmmword_1409AA120;
			v118 = _mm_add_ps(v115, v109);
			v17 = v169;
			*(__m128*)(v19 - 16) = v118;
			*v20 = _mm_add_ps(v116, v146);
			*v21 = v117;
			if (v19 >= v137)
				v19 = v136;
			if ((unsigned __int64)++v20 >= v140)
				v20 = v138;
			if ((unsigned __int64)++v21 >= v139)
				v21 = v141;
			--v172;
		} while (v172);
		v32 = v142;
		v132 = v35;
		v6 = (__m128*)a1;
		v14 = v132;
	}
	v6[4].m128_i32[3] = v7;
	v6[35].m128_f32[0] = v8;
	v6[35].m128_f32[1] = v9;
	v6[3].m128_u64[0] = (unsigned __int64)v3;
	v6[10].m128_u64[0] = (unsigned __int64)v14;
	v6[31] = v22;
	v6[32] = v23;
	v6[33] = v24;
	v6[11].m128_u64[1] = v126;
	v6[9].m128_u64[0] = (unsigned __int64)v25;
	v6[34] = v32;
	v6[13].m128_u64[1] = (unsigned __int64)v120;
	v6[14].m128_u64[0] = (unsigned __int64)v121;
	v6[19].m128_u64[0] = v18;
	v6[14].m128_u64[1] = (unsigned __int64)v123;
	v6[19].m128_u64[1] = v19;
	v6[15].m128_u64[1] = v125;
	v6[20].m128_u64[0] = (unsigned __int64)v20;
	v6[16].m128_u64[0] = (unsigned __int64)v127;
	result = v124;
	v6[20].m128_u64[1] = (unsigned __int64)v21;
	v6[9].m128_u64[1] = (unsigned __int64)v26;
	v6[10].m128_u64[1] = (unsigned __int64)v27;
	v6[11].m128_u64[0] = v28;
	v6[16].m128_u64[1] = (unsigned __int64)v124;
	v6[12].m128_u64[0] = (unsigned __int64)v29;
	v6[12].m128_u64[1] = (unsigned __int64)v30;
	v6[13].m128_u64[0] = (unsigned __int64)v31;
	v6[15].m128_u64[0] = v33;
	return result;
}
// 1409AA0E0: using guessed type __int128 xmmword_1409AA0E0;
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA130: using guessed type __int128 xmmword_1409AA130;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

