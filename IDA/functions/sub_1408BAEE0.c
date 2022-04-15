#include "../winhttp.h"

//----- (00000001408BAEE0) ----------------------------------------------------
unsigned int* __fastcall sub_1408BAEE0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r12
	__m128* v4; // r11
	__int64 v6; // rdx
	unsigned __int64 v7; // rdi
	unsigned __int32 v8; // xmm4_4
	float v9; // xmm3_4
	unsigned __int32 v10; // xmm9_4
	__m128 v11; // xmm0
	__m128 v12; // xmm1
	float v13; // xmm2_4
	__m128 v14; // xmm0
	unsigned int* v15; // rax
	__m128 v16; // xmm6
	unsigned __int64 v17; // rsi
	__m128* v18; // rbp
	__m128* v19; // r14
	__m128 v20; // xmm7
	__m128 v21; // xmm15
	__m128 v22; // xmm1
	unsigned int* v23; // rbx
	unsigned int* v24; // r8
	unsigned int* v25; // rcx
	__m128 v26; // xmm2
	unsigned int* v27; // rdx
	unsigned __int64 v28; // r15
	unsigned int* v29; // r9
	unsigned int* v30; // r10
	unsigned __int64 v31; // r13
	__m128 v32; // xmm0
	__int64 v33; // rax
	__m128 v34; // xmm8
	unsigned __int64 v35; // r11
	unsigned int* v36; // rax
	__m128 v37; // xmm10
	__m128 v38; // xmm11
	__m128 v39; // xmm12
	__m128 v40; // xmm14
	__m128 v41; // xmm3
	unsigned __int64 v42; // rax
	__m128 v43; // xmm9
	__m128 v44; // xmm0
	__m128 v45; // xmm15
	__m128 v46; // xmm3
	__m128 v47; // xmm7
	__m128 v48; // xmm4
	__m128 v49; // xmm6
	__m128 v50; // xmm8
	__m128 v51; // xmm5
	__m128 v52; // xmm13
	__m128 v53; // xmm9
	__m128 v54; // xmm4
	__m128 v55; // xmm3
	__m128 v56; // xmm5
	__m128 v57; // xmm0
	__m128 v58; // xmm14
	__m128 v59; // xmm6
	__m128 v60; // xmm7
	__m128 v61; // xmm0
	__m128 v62; // xmm1
	__m128 v63; // xmm8
	__m128 v64; // xmm0
	__m128 v65; // xmm1
	__m128 v66; // xmm4
	__m128 v67; // xmm6
	__m128 v68; // xmm3
	__m128 v69; // xmm5
	__m128 v70; // xmm7
	__m128 v71; // xmm0
	__m128 v72; // xmm2
	__m128 v73; // xmm8
	__m128 v74; // xmm0
	__m128 v75; // xmm8
	__int64 v76; // rcx
	float v77; // xmm12_4
	__int64 v78; // rdx
	__int64 v79; // r8
	float v80; // xmm13_4
	__int64 v81; // r9
	float v82; // xmm10_4
	float v83; // xmm11_4
	__int64 v84; // r10
	__m128 v85; // xmm2
	__m128 v86; // xmm8
	__m128 v87; // xmm2
	float v88; // xmm9_4
	__m128 v89; // xmm3
	__m128 v90; // xmm3
	__m128 v91; // xmm2
	__m128 v92; // xmm4
	__m128 v93; // xmm4
	__m128 v94; // xmm5
	__m128 v95; // xmm5
	__m128 v96; // xmm6
	__m128 v97; // xmm8
	__m128 v98; // xmm6
	__m128 v99; // xmm0
	__m128 v100; // xmm1
	__m128 v101; // xmm0
	__m128 v102; // xmm0
	__m128 v103; // xmm7
	__m128 v104; // xmm7
	float v105; // xmm14_4
	float v106; // xmm13_4
	__m128 v107; // xmm5
	__m128 v108; // xmm2
	__m128 v109; // xmm1
	__m128 v110; // xmm6
	__m128 v111; // xmm8
	__m128 v112; // xmm1
	__m128 v113; // xmm7
	__m128 v114; // xmm5
	float v115; // xmm1_4
	__m128 v116; // xmm2
	__m128 v117; // xmm2
	__m128 v118; // xmm1
	__m128 v119; // xmm0
	__m128 v120; // xmm2
	__m128 v121; // xmm1
	__m128 v122; // xmm0
	unsigned int* result; // rax
	unsigned int* v124; // [rsp+0h] [rbp-388h]
	unsigned __int64 v125; // [rsp+8h] [rbp-380h]
	unsigned int* v126; // [rsp+10h] [rbp-378h]
	unsigned int* v127; // [rsp+18h] [rbp-370h]
	unsigned int* v128; // [rsp+20h] [rbp-368h]
	unsigned int* v129; // [rsp+28h] [rbp-360h]
	unsigned int* v130; // [rsp+30h] [rbp-358h]
	unsigned int* v131; // [rsp+38h] [rbp-350h]
	unsigned int* v132; // [rsp+40h] [rbp-348h]
	unsigned __int64 v133; // [rsp+48h] [rbp-340h]
	unsigned int* v134; // [rsp+50h] [rbp-338h]
	float* v135; // [rsp+58h] [rbp-330h]
	unsigned int* v136; // [rsp+60h] [rbp-328h]
	unsigned int* v137; // [rsp+68h] [rbp-320h]
	unsigned int* v138; // [rsp+70h] [rbp-318h]
	unsigned int* v139; // [rsp+78h] [rbp-310h]
	__m128 v140; // [rsp+80h] [rbp-308h]
	unsigned __int64 v141; // [rsp+80h] [rbp-308h]
	__m128 v142; // [rsp+90h] [rbp-2F8h]
	unsigned __int64 v143; // [rsp+A0h] [rbp-2E8h]
	unsigned __int64 v144; // [rsp+A8h] [rbp-2E0h]
	__m128* v145; // [rsp+B0h] [rbp-2D8h]
	__m128* v146; // [rsp+B8h] [rbp-2D0h]
	unsigned __int64 v147; // [rsp+C0h] [rbp-2C8h]
	__m128 v148; // [rsp+D0h] [rbp-2B8h]
	__m128 v149; // [rsp+E0h] [rbp-2A8h]
	float* v150; // [rsp+F0h] [rbp-298h]
	__m128 v151; // [rsp+100h] [rbp-288h]
	__m128 v152; // [rsp+110h] [rbp-278h]
	float* v153; // [rsp+120h] [rbp-268h]
	float v154; // [rsp+130h] [rbp-258h]
	float v155; // [rsp+140h] [rbp-248h]
	float v156; // [rsp+150h] [rbp-238h]
	__m128 v157; // [rsp+160h] [rbp-228h]
	__m128 v158; // [rsp+170h] [rbp-218h]
	__m128 v159; // [rsp+180h] [rbp-208h]
	__m128 v160; // [rsp+190h] [rbp-1F8h]
	__m128 v161; // [rsp+1A0h] [rbp-1E8h]
	float v162; // [rsp+1B0h] [rbp-1D8h]
	__m128 v163; // [rsp+1C0h] [rbp-1C8h]
	float v164; // [rsp+1D0h] [rbp-1B8h]
	__m128 v165; // [rsp+1E0h] [rbp-1A8h]
	__m128 v166; // [rsp+1F0h] [rbp-198h]
	__m128 v167; // [rsp+200h] [rbp-188h]
	float v168; // [rsp+210h] [rbp-178h]
	__m128 v169; // [rsp+220h] [rbp-168h]
	__m128 v170; // [rsp+230h] [rbp-158h]
	__m128 v171; // [rsp+240h] [rbp-148h]
	float v172; // [rsp+250h] [rbp-138h]
	__m128 v173; // [rsp+260h] [rbp-128h]
	__m128 v174; // [rsp+270h] [rbp-118h]
	__m128 v175; // [rsp+280h] [rbp-108h]
	__m128 v176; // [rsp+290h] [rbp-F8h]
	int v179; // [rsp+3A8h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v6 = *(_QWORD*)(a1 + 16);
	v170 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v7 = *(_QWORD*)(a1 + 304);
	v8 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v9) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	LODWORD(v172) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v152 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v155 = *(float*)&v8;
	v10 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v154 = v9;
	LODWORD(v168) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v156 = *(float*)&v10;
	v135 = *(float**)a2;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v6 + 24);
	v11 = v2;
	v12 = (__m128) * (unsigned int*)(v6 + 16);
	v166 = _mm_shuffle_ps(v11, v11, 0);
	v148 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v153 = *(float**)(a1 + 40);
	v129 = *(unsigned int**)(a1 + 272);
	v13 = 1.0 / (float)*(unsigned __int16*)(a2 + 16);
	v125 = *(_QWORD*)(a1 + 336);
	v12.m128_f32[0] = (float)(v12.m128_f32[0] - *(float*)(a1 + 572)) * v13;
	LODWORD(v162) = _mm_shuffle_ps(v12, v12, 0).m128_u32[0];
	v14 = (__m128) * (unsigned int*)(v6 + 20);
	v146 = *(__m128**)(a1 + 288);
	v150 = *(float**)(a1 + 56);
	v14.m128_f32[0] = (float)(v14.m128_f32[0] - *(float*)(a1 + 576)) * v13;
	v133 = *(_QWORD*)(a1 + 280);
	v147 = *(_QWORD*)(a1 + 352);
	LODWORD(v164) = _mm_shuffle_ps(v14, v14, 0).m128_u32[0];
	v145 = *(__m128**)(a1 + 296);
	v143 = *(_QWORD*)(a1 + 344);
	v144 = *(_QWORD*)(a1 + 360);
	v15 = *(unsigned int**)(a1 + 184);
	v16 = *(__m128*)(a1 + 368);
	v17 = *(_QWORD*)(a1 + 312);
	v18 = *(__m128**)(a1 + 320);
	v19 = *(__m128**)(a1 + 328);
	v20 = *(__m128*)(a1 + 432);
	v21 = *(__m128*)(a1 + 496);
	v22 = *(__m128*)(a1 + 512);
	v23 = *(unsigned int**)(a1 + 144);
	v24 = *(unsigned int**)(a1 + 152);
	v25 = *(unsigned int**)(a1 + 160);
	v26 = v4[33];
	v163 = v4[24];
	v27 = (unsigned int*)v4[10].m128_u64[1];
	v28 = v4[11].m128_u64[0];
	v29 = (unsigned int*)v4[12].m128_u64[0];
	v169 = v4[25];
	v174 = v16;
	v30 = (unsigned int*)v4[12].m128_u64[1];
	v31 = v4[13].m128_u64[0];
	v127 = v15;
	v165 = v4[26];
	v176 = v20;
	v131 = (unsigned int*)v4[13].m128_u64[1];
	v175 = v4[28];
	v124 = (unsigned int*)v4[14].m128_u64[0];
	v158 = v4[29];
	v126 = (unsigned int*)v4[14].m128_u64[1];
	v171 = v4[30];
	v32 = v4[34];
	v142 = v32;
	v128 = (unsigned int*)v4[15].m128_u64[1];
	v130 = (unsigned int*)v4[16].m128_u64[0];
	v132 = (unsigned int*)v4[16].m128_u64[1];
	v179 = *(unsigned __int16*)(a2 + 18);
	v33 = v4[15].m128_i64[0];
	if (*(_WORD*)(a2 + 18))
	{
		v34 = (__m128)xmmword_1409AA120;
		v35 = v4[15].m128_u64[0];
		v36 = v129;
		v37 = (__m128)xmmword_1409AA110;
		v38 = (__m128)xmmword_1409AA100;
		v39 = (__m128)xmmword_1409AA0F0;
		v161 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA120);
		v40 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA100);
		v167 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA0F0);
		v173 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA110);
		v157 = v40;
		do
		{
			v41 = (__m128) * v23;
			v23 += 4;
			if ((unsigned __int64)v23 >= v125)
				v23 = v36;
			v136 = v24 + 4;
			if ((unsigned __int64)(v24 + 4) >= v125)
			{
				v136 = v36 + 1;
				v36 = v129;
			}
			v139 = v25 + 4;
			if ((unsigned __int64)(v25 + 4) >= v125)
				v139 = v36 + 2;
			v138 = v27 + 4;
			if ((unsigned __int64)(v27 + 4) >= v125)
				v138 = v129 + 3;
			v42 = v133;
			v43 = (__m128) * v127;
			v28 += 16i64;
			v44 = _mm_mul_ps(v21, v20);
			v45 = _mm_mul_ps(
				_mm_movelh_ps(_mm_unpacklo_ps(v41, (__m128) * v24), _mm_unpacklo_ps((__m128) * v25, (__m128) * v27)),
				v16);
			v46 = (__m128) * (unsigned int*)(v28 - 16);
			v21 = _mm_add_ps(v45, v44);
			if (v28 >= v143)
				v28 = v133;
			v127 += 4;
			v47 = _mm_mul_ps(v21, v34);
			v48 = _mm_mul_ps(v21, v39);
			v49 = _mm_mul_ps(v21, v38);
			v50 = _mm_mul_ps(v21, (__m128)xmmword_1409AA140);
			v51 = _mm_mul_ps(v21, v37);
			if ((unsigned __int64)v127 >= v143)
				v127 = (unsigned int*)(v133 + 4);
			v137 = v29 + 4;
			if ((unsigned __int64)(v29 + 4) >= v143)
			{
				v137 = (unsigned int*)(v133 + 8);
				v42 = v133;
			}
			v134 = v30 + 4;
			if ((unsigned __int64)(v30 + 4) >= v143)
				v134 = (unsigned int*)(v42 + 12);
			v52 = (__m128) * v131;
			v31 += 16i64;
			v151 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v46, v43), _mm_unpacklo_ps((__m128) * v29, (__m128) * v30)), v163),
				_mm_mul_ps(v22, v175));
			v53 = _mm_add_ps(v151, v21);
			v54 = _mm_add_ps(v48, _mm_mul_ps(v151, v39));
			v55 = _mm_add_ps(v49, _mm_mul_ps(v151, v38));
			v56 = _mm_add_ps(v51, _mm_mul_ps(v151, v37));
			v57 = v40;
			v58 = (__m128) * v126;
			v59 = _mm_add_ps(v49, _mm_mul_ps(v57, v151));
			v60 = _mm_add_ps(v47, _mm_mul_ps(v151, (__m128)xmmword_1409AA130));
			v61 = _mm_mul_ps(v161, v151);
			v62 = (__m128) * (unsigned int*)(v31 - 16);
			if (v31 >= v147)
				v31 = (unsigned __int64)v146;
			v131 += 4;
			v63 = _mm_add_ps(v50, v61);
			v64 = (__m128) * v124;
			if ((unsigned __int64)v131 >= v147)
				v131 = &v146->m128_u32[1];
			v124 += 4;
			if ((unsigned __int64)v124 >= v147)
				v124 = &v146->m128_u32[2];
			v126 += 4;
			if ((unsigned __int64)v126 >= v147)
				v126 = &v146->m128_u32[3];
			v35 += 16i64;
			v149 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v62, v52), _mm_unpacklo_ps(v64, v58)), v169),
				_mm_mul_ps(v26, v158));
			v65 = _mm_mul_ps(v149, v38);
			v160 = _mm_add_ps(v53, v149);
			v66 = _mm_add_ps(v54, _mm_mul_ps(v149, v39));
			v67 = _mm_add_ps(v59, v65);
			v140 = _mm_add_ps(v55, v65);
			v68 = (__m128) * v128;
			v69 = _mm_add_ps(v56, _mm_mul_ps(v149, v37));
			v70 = _mm_add_ps(v60, _mm_mul_ps(v157, v149));
			v71 = _mm_mul_ps(v173, v149);
			v72 = (__m128) * (unsigned int*)(v35 - 16);
			if (v35 >= v144)
				v35 = (unsigned __int64)v145;
			v128 += 4;
			v73 = _mm_add_ps(v63, v71);
			v74 = (__m128) * v130;
			v159 = v73;
			v75 = (__m128) * v132;
			if ((unsigned __int64)v128 >= v144)
				v128 = &v145->m128_u32[1];
			v130 += 4;
			if ((unsigned __int64)v130 >= v144)
				v130 = &v145->m128_u32[2];
			v132 += 4;
			if ((unsigned __int64)v132 >= v144)
				v132 = &v145->m128_u32[3];
			v76 = *(unsigned __int16*)(a2 + 16);
			v77 = v135[v76];
			v78 = 2 * (int)v76;
			v79 = 5 * (int)v76;
			v80 = v135[v78];
			v81 = 3 * (int)v76;
			v82 = v135[v79];
			v83 = v135[v81];
			v142 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v72, v68), _mm_unpacklo_ps(v74, v75)), v165),
				_mm_mul_ps(v142, v171));
			v84 = 4 * (int)v76;
			v85 = _mm_mul_ps(v142, (__m128)xmmword_1409AA100);
			v86 = _mm_add_ps(v85, v70);
			v87 = _mm_add_ps(v85, v140);
			v88 = v135[v84];
			v89 = _mm_add_ps(_mm_mul_ps(v142, (__m128)xmmword_1409AA0F0), v66);
			v90 = _mm_add_ps(v89, _mm_movehl_ps(v89, v89));
			v91 = _mm_add_ps(v87, _mm_movehl_ps(v87, v87));
			v92 = _mm_add_ps(_mm_mul_ps(v142, (__m128)xmmword_1409AA110), v69);
			v93 = _mm_add_ps(v92, _mm_movehl_ps(v92, v92));
			v94 = _mm_add_ps(_mm_mul_ps(v157, v142), v67);
			v95 = _mm_add_ps(v94, _mm_movehl_ps(v94, v94));
			v96 = _mm_add_ps(_mm_mul_ps(v167, v142), v159);
			v97 = _mm_add_ps(v86, _mm_movehl_ps(v86, v86));
			v98 = _mm_add_ps(v96, _mm_movehl_ps(v96, v96));
			v99 = _mm_add_ps(v142, v160);
			v100 = _mm_add_ps(_mm_movehl_ps(v99, v99), v99);
			v101 = v148;
			v101.m128_f32[0] = v148.m128_f32[0] + v162;
			v148 = v101;
			v102 = v152;
			v103 = _mm_add_ps(_mm_shuffle_ps(v100, v100, 85), v100);
			v102.m128_f32[0] = v152.m128_f32[0] + v164;
			v152 = v102;
			v100.m128_f32[0] = (float)(_mm_shuffle_ps(v90, v90, 85).m128_f32[0] + v90.m128_f32[0]) * v102.m128_f32[0];
			v102.m128_f32[0] = *v135;
			v104 = _mm_mul_ps(_mm_shuffle_ps(v103, v103, 0), v166);
			v105 = (float)(*v135++ + v77) + v83;
			*(v135 - 1) = (float)(v102.m128_f32[0] * v148.m128_f32[0]) + v100.m128_f32[0];
			v135[v76 - 1] = (float)(v77 * v148.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v91, v91, 85).m128_f32[0] + v91.m128_f32[0]) * v152.m128_f32[0]);
			v135[v78 - 1] = (float)(v80 * v148.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v93, v93, 85).m128_f32[0] + v93.m128_f32[0]) * v152.m128_f32[0]);
			v106 = (float)((float)(v80 + v82) + v88) + v105;
			v102.m128_f32[0] = (float)(v82 * v148.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v95, v95, 85).m128_f32[0] + v95.m128_f32[0]) * v152.m128_f32[0]);
			v107 = _mm_add_ps(v104, v21);
			v135[v79 - 1] = v102.m128_f32[0];
			v135[v81 - 1] = (float)(v83 * v148.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v97, v97, 85).m128_f32[0] + v97.m128_f32[0]) * v152.m128_f32[0]);
			v108 = _mm_add_ps(v149, v104);
			v135[v84 - 1] = (float)(v88 * v148.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v98, v98, 85).m128_f32[0] + v98.m128_f32[0]) * v152.m128_f32[0]);
			v109 = _mm_add_ps(v142, v104);
			v110 = _mm_shuffle_ps(v109, _mm_shuffle_ps(v109, v107, 15), 201);
			v111 = _mm_shuffle_ps(v108, _mm_shuffle_ps(v108, v109, 15), 201);
			v112 = _mm_add_ps(v151, v104);
			v113 = _mm_shuffle_ps(v112, _mm_shuffle_ps(v112, v108, 15), 201);
			v114 = _mm_shuffle_ps(v107, _mm_shuffle_ps(v107, v112, 15), 201);
			v9 = (float)((float)(v168 * v154) + v106) - v156;
			v10 = LODWORD(v106);
			v156 = v106;
			v154 = v9;
			if (v153)
			{
				v115 = *v3;
				*v3++ = v9;
				if (v3 == v150)
					v3 = v153;
			}
			else
			{
				v115 = v9;
			}
			v116 = v170;
			v36 = v129;
			v25 = v139;
			v27 = v138;
			v24 = v136;
			v37 = (__m128)xmmword_1409AA110;
			v38 = (__m128)xmmword_1409AA100;
			v39 = (__m128)xmmword_1409AA0F0;
			v29 = v137;
			v30 = v134;
			v7 += 16i64;
			v116.m128_f32[0] = (float)(v170.m128_f32[0] * v115) + (float)(v172 * v155);
			v117 = _mm_shuffle_ps(v116, v116, 0);
			v40 = v157;
			v8 = LODWORD(v115);
			*(__m128*)(v7 - 16) = _mm_add_ps(v117, v114);
			if (v7 >= v125)
				v7 = (unsigned __int64)v129;
			v17 += 16i64;
			v155 = v115;
			v118 = v117;
			v119 = v117;
			v120 = _mm_add_ps(v117, v110);
			v121 = _mm_add_ps(v118, v113);
			v122 = _mm_add_ps(v119, v111);
			v34 = (__m128)xmmword_1409AA120;
			v16 = v174;
			v20 = v176;
			*(__m128*)(v17 - 16) = v121;
			v22 = v151;
			*v18 = v122;
			if (v17 >= v143)
				v17 = v133;
			if ((unsigned __int64)++v18 >= v147)
				v18 = v146;
			*v19 = v120;
			v26 = v149;
			if ((unsigned __int64)++v19 >= v144)
				v19 = v145;
			--v179;
		} while (v179);
		v32 = v142;
		v141 = v35;
		v4 = (__m128*)a1;
		v33 = v141;
	}
	v4[4].m128_i32[3] = v8;
	v4[35].m128_i32[0] = v10;
	v4[35].m128_f32[1] = v9;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[10].m128_u64[0] = (unsigned __int64)v25;
	v4[31] = v21;
	v4[32] = v22;
	v4[33] = v26;
	v4[15].m128_u64[0] = v33;
	v4[11].m128_u64[1] = (unsigned __int64)v127;
	v4[34] = v32;
	v4[15].m128_u64[1] = (unsigned __int64)v128;
	v4[13].m128_u64[1] = (unsigned __int64)v131;
	v4[16].m128_u64[0] = (unsigned __int64)v130;
	result = v132;
	v4[14].m128_u64[0] = (unsigned __int64)v124;
	v4[14].m128_u64[1] = (unsigned __int64)v126;
	v4[19].m128_u64[0] = v7;
	v4[19].m128_u64[1] = v17;
	v4[20].m128_u64[0] = (unsigned __int64)v18;
	v4[20].m128_u64[1] = (unsigned __int64)v19;
	v4[9].m128_u64[0] = (unsigned __int64)v23;
	v4[9].m128_u64[1] = (unsigned __int64)v24;
	v4[10].m128_u64[1] = (unsigned __int64)v27;
	v4[11].m128_u64[0] = v28;
	v4[12].m128_u64[0] = (unsigned __int64)v29;
	v4[12].m128_u64[1] = (unsigned __int64)v30;
	v4[13].m128_u64[0] = v31;
	v4[16].m128_u64[1] = (unsigned __int64)v132;
	return result;
}
// 1409AA0E0: using guessed type __int128 xmmword_1409AA0E0;
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA130: using guessed type __int128 xmmword_1409AA130;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

