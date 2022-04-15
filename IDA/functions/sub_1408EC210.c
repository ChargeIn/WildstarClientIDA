#include "../winhttp.h"

//----- (00000001408EC210) ----------------------------------------------------
__int64 __fastcall sub_1408EC210(int a1, float* a2)
{
	int v3; // edx
	int v4; // eax
	int i; // edi
	int v6; // r9d
	float* v7; // rdx
	int v8; // r13d
	__int64 v9; // rbp
	__int64 v10; // r10
	__int64 v11; // r14
	float* v12; // rcx
	float* v13; // r8
	float v14; // xmm3_4
	float v15; // xmm4_4
	float v16; // xmm5_4
	float v17; // xmm1_4
	float v18; // xmm3_4
	float v19; // xmm4_4
	float v20; // xmm5_4
	float v21; // xmm1_4
	float* v22; // rcx
	float* v23; // rdx
	float* v24; // rax
	float v25; // xmm3_4
	float v26; // xmm5_4
	float v27; // xmm2_4
	float v28; // xmm4_4
	float v29; // xmm7_4
	float v30; // xmm6_4
	float v31; // xmm1_4
	char v32; // r15
	int v33; // r12d
	int v34; // esi
	char v35; // r13
	float* v36; // r10
	__int64 v37; // r11
	__int64 v38; // rdi
	__int64 v39; // r9
	int* v40; // rcx
	__m128* v41; // rdx
	__m128* v42; // r8
	__m128 v43; // xmm1
	__m128 v44; // xmm2
	__m128 v45; // xmm3
	__m128 v46; // xmm0
	__m128 v47; // xmm2
	__m128 v48; // xmm0
	__m128 v49; // xmm1
	__m128 v50; // xmm1
	__m128 v51; // xmm2
	__m128 v52; // xmm3
	__m128 v53; // xmm0
	__m128 v54; // xmm2
	__m128 v55; // xmm0
	__m128 v56; // xmm1
	__m128* v57; // rcx
	unsigned __int64 v58; // rax
	__m128 v59; // xmm6
	__m128 v60; // xmm1
	__m128 v61; // xmm2
	__m128 v62; // xmm3
	__m128 v63; // xmm1
	__m128 v64; // xmm3
	__m128 v65; // xmm1
	__m128 v66; // xmm2
	__m128 v67; // xmm1
	__m128 v68; // xmm3
	__m128 v69; // xmm1
	__m128 v70; // xmm2
	__m128 v71; // xmm1
	__m128 v72; // xmm3
	__m128 v73; // xmm2
	__m128 v74; // xmm1
	__m128 v75; // xmm5
	__m128 v76; // xmm5
	__m128 v77; // xmm0
	__m128 v78; // xmm6
	__m128 v79; // xmm0
	__m128 v80; // xmm1
	__m128 v81; // xmm2
	__m128 v82; // xmm1
	__m128 v83; // xmm6
	__m128 v84; // xmm3
	__m128 v85; // xmm1
	__m128 v86; // xmm3
	__m128 v87; // xmm5
	__m128 v88; // xmm4
	__m128 v89; // xmm2
	__m128 v90; // xmm5
	__m128 v91; // xmm2
	__m128 v92; // xmm0
	__m128 v93; // xmm2
	__m128 v94; // xmm1
	__m128 v95; // xmm5
	__m128 v96; // xmm2
	__m128 v97; // xmm0
	__m128 v98; // xmm1
	__m128 v99; // xmm2
	__m128 v100; // xmm3
	__m128 v101; // xmm2
	__m128 v102; // xmm1
	__m128 v103; // xmm2
	__m128 v104; // xmm1
	__m128 v105; // xmm2
	__m128 v106; // xmm3
	__m128 v107; // xmm1
	__m128 v108; // xmm3
	__m128 v109; // xmm2
	__m128 v110; // xmm1
	__m128 v111; // xmm2
	__m128 v112; // xmm4
	__m128 v113; // xmm0
	__m128 v114; // xmm6
	__m128 v115; // xmm2
	__m128 v116; // xmm2
	__m128 v117; // xmm3
	__m128 v118; // xmm0
	__m128 v119; // xmm2
	__m128 v120; // xmm1
	__m128 v121; // xmm2
	__m128 v122; // xmm6
	__m128 v123; // xmm0
	__m128 v124; // xmm1
	__m128 v125; // xmm2
	__m128 v126; // xmm3
	__m128 v127; // xmm2
	float* v128; // rcx
	float* v129; // rdx
	unsigned __int64 v130; // r9
	float* v131; // rax
	float* v132; // r8
	float* v133; // r10
	float v134; // xmm7_4
	float v135; // xmm2_4
	float v136; // xmm9_4
	float v137; // xmm8_4
	float v138; // xmm3_4
	float v139; // xmm1_4
	float v140; // xmm8_4
	float v141; // xmm9_4
	float v142; // xmm5_4
	float v143; // xmm7_4
	float v144; // xmm9_4
	float v145; // xmm8_4
	float v146; // xmm4_4
	float v147; // xmm3_4
	float v148; // xmm5_4
	float v149; // xmm2_4
	float v150; // xmm1_4
	float v151; // xmm8_4
	float v152; // xmm9_4
	float v153; // xmm5_4
	float v154; // xmm7_4
	int v155; // r13d
	__int64 result; // rax
	float v157; // xmm3_4
	float v158; // xmm4_4
	float v159; // xmm5_4
	float v160; // xmm2_4
	float v161; // xmm2_4
	float* v162; // r8
	float* v163; // rcx
	float v164; // xmm6_4
	float v165; // xmm7_4
	float v166; // xmm5_4
	float v167; // xmm4_4
	float v168; // xmm5_4
	float v169; // xmm2_4
	float v170; // xmm4_4
	float v171; // xmm3_4
	float v172; // xmm6_4
	float v173; // xmm7_4
	float v174; // xmm1_4
	float v175; // xmm0_4
	float v176; // xmm2_4
	float v177; // xmm3_4
	float v178; // xmm5_4
	float v179; // xmm2_4
	float v180; // xmm4_4
	__int64 v181; // [rsp+28h] [rbp-F0h]
	char v183; // [rsp+128h] [rbp+10h]
	int v184; // [rsp+130h] [rbp+18h]
	int v185; // [rsp+138h] [rbp+20h]

	v3 = 4;
	v4 = 16;
	for (i = a1; (v4 & a1) == 0; ++v3)
		v4 = __ROL4__(v4, 1);
	v6 = 13 - v3;
	v7 = (float*)dword_140C17210;
	v183 = v6;
	v8 = 2 << v6;
	v9 = 2 << v6;
	v185 = 2 << v6;
	v10 = a1 >> 1;
	v184 = a1 >> 1;
	v11 = 4 * v9;
	v181 = v10;
	v12 = &a2[v10 - 3];
	v13 = &a2[i >> 2];
	do
	{
		v14 = v7[1];
		v15 = *v7;
		v16 = *v12;
		v12 -= 4;
		v7 = (float*)((char*)v7 + v11);
		v17 = (float)(v14 * v12[6]) + (float)(v15 * v16);
		v12[6] = (float)(v15 * v12[6]) - (float)(v14 * v16);
		v12[4] = v17;
	} while (v12 >= v13);
	do
	{
		v18 = *v7;
		v19 = v7[1];
		v20 = *v12;
		v12 -= 4;
		v7 = (float*)((char*)v7 - v11);
		v21 = (float)(v18 * v12[6]) + (float)(v19 * v20);
		v12[6] = (float)(v19 * v12[6]) - (float)(v18 * v20);
		v12[4] = v21;
	} while (v12 >= a2);
	v22 = a2;
	v23 = (float*)dword_140C17210;
	v24 = &a2[v10 - 4];
	do
	{
		v25 = v23[1];
		v26 = *v23;
		v27 = v22[2];
		v23 = (float*)((char*)v23 + v11);
		v28 = *v22;
		v29 = *v24;
		v30 = v24[2];
		v24 -= 4;
		v22 += 4;
		v24[4] = (float)(v25 * v27) - (float)(v26 * v28);
		v24[6] = (float)(v26 * v27) + (float)(v25 * v28);
		v31 = (float)(*v23 * v30) - (float)(v23[1] * v29);
		*(v22 - 2) = (float)(v23[1] * v30) + (float)(*v23 * v29);
		*(v22 - 4) = v31;
	} while (v24 >= v13);
	v32 = 0;
	v33 = 7 - v6;
	v34 = 1;
	if (7 - v6 > 0)
	{
		v35 = v6;
		do
		{
			if (v34 > 0)
			{
				v36 = a2;
				v37 = v184 >> v32;
				v38 = (unsigned int)v34;
				v39 = 16i64 * ((4 << (v32 + v35)) / 4);
				do
				{
					v40 = dword_140C17210;
					v41 = (__m128*) & v36[v37 - 4];
					v42 = (__m128*) & v36[(v37 >> 1) - 4];
					do
					{
						v43 = *v41;
						v44 = *v42--;
						--v41;
						v45 = _mm_sub_ps(_mm_shuffle_ps(v43, v44, 220), _mm_shuffle_ps(v43, v44, 137));
						v46 = v44;
						v47 = _mm_shuffle_ps(v44, v43, 216);
						v48 = _mm_shuffle_ps(v46, v43, 141);
						v41[1] = _mm_add_ps(_mm_shuffle_ps(v47, v47, 114), _mm_shuffle_ps(v48, v48, 114));
						v49 = *(__m128*)v40;
						v40 = (int*)((char*)v40 + v39);
						v42[1] = _mm_add_ps(
							_mm_mul_ps(
								_mm_mul_ps(_mm_shuffle_ps(v49, v49, 85), _mm_shuffle_ps(v45, v45, 156)),
								(__m128)xmmword_1409B4630),
							_mm_mul_ps(_mm_shuffle_ps(v49, v49, 0), _mm_shuffle_ps(v45, v45, 201)));
					} while (v40 < dword_140C18210);
					do
					{
						v50 = *v41;
						v51 = *v42--;
						--v41;
						v52 = _mm_sub_ps(_mm_shuffle_ps(v50, v51, 200), _mm_shuffle_ps(v50, v51, 157));
						v53 = v51;
						v54 = _mm_shuffle_ps(v51, v50, 216);
						v55 = _mm_shuffle_ps(v53, v50, 141);
						v41[1] = _mm_add_ps(_mm_shuffle_ps(v54, v54, 114), _mm_shuffle_ps(v55, v55, 114));
						v56 = *(__m128*)v40;
						v40 = (int*)((char*)v40 - v39);
						v42[1] = _mm_add_ps(
							_mm_mul_ps(
								_mm_mul_ps(_mm_shuffle_ps(v56, v56, 85), _mm_shuffle_ps(v52, v52, 201)),
								(__m128)xmmword_1409B4640),
							_mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), _mm_shuffle_ps(v52, v52, 156)));
					} while (v40 > dword_140C17210);
					v36 += v37;
					--v38;
				} while (v38);
			}
			v34 = __ROL4__(v34, 1);
			--v33;
			++v32;
		} while (v33 > 0);
		v11 = 4 * v9;
		v8 = v185;
		LOBYTE(v6) = v183;
		i = a1;
		v10 = v181;
	}
	if (v10 > 0)
	{
		v57 = (__m128*)(a2 + 12);
		v58 = ((unsigned __int64)(v10 - 1) >> 5) + 1;
		do
		{
			v59 = v57[4];
			v60 = v57[1];
			v61 = _mm_shuffle_ps(v60, v57[-3], 141);
			v62 = _mm_shuffle_ps(v60, v57[-3], 216);
			v63 = _mm_shuffle_ps(v62, v62, 216);
			v64 = _mm_sub_ps(v62, v61);
			v57[1] = _mm_add_ps(_mm_shuffle_ps(v61, v61, 216), v63);
			v65 = v57[2];
			v66 = _mm_shuffle_ps(v65, v57[-2], 141);
			v67 = _mm_shuffle_ps(v65, v57[-2], 216);
			v57[-3] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v64, v64, 216), (__m128)xmmword_1409B4680),
				_mm_mul_ps(_mm_shuffle_ps(v64, v64, 141), (__m128)xmmword_1409B46B0));
			v68 = _mm_sub_ps(v67, v66);
			v57[2] = _mm_add_ps(_mm_shuffle_ps(v66, v66, 216), _mm_shuffle_ps(v67, v67, 216));
			v69 = v57[3];
			v70 = _mm_shuffle_ps(v69, v57[-1], 141);
			v71 = _mm_shuffle_ps(v69, v57[-1], 216);
			v57[-2] = _mm_mul_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v68, v68, 153), (__m128)xmmword_1409B4650),
					_mm_shuffle_ps(v68, v68, 204)),
				(__m128)xmmword_1409B4670);
			v72 = _mm_sub_ps(v71, v70);
			v73 = _mm_add_ps(_mm_shuffle_ps(v70, v70, 216), _mm_shuffle_ps(v71, v71, 216));
			v74 = *v57;
			v75 = _mm_shuffle_ps(v59, *v57, 200);
			v57[3] = v73;
			v57[-1] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v72, v72, 216), (__m128)xmmword_1409B46A0),
				_mm_mul_ps(_mm_shuffle_ps(v72, v72, 141), (__m128)xmmword_1409B4690));
			v76 = _mm_sub_ps(v75, _mm_shuffle_ps(v59, v74, 157));
			v77 = v59;
			v78 = _mm_shuffle_ps(v59, v74, 141);
			v79 = _mm_shuffle_ps(v77, v74, 216);
			v80 = v57[-1];
			v81 = _mm_shuffle_ps(v80, v57[-3], 141);
			v82 = _mm_shuffle_ps(v80, v57[-3], 216);
			v83 = _mm_add_ps(_mm_shuffle_ps(v78, v78, 216), _mm_shuffle_ps(v79, v79, 216));
			v84 = _mm_sub_ps(v82, v81);
			v57[-1] = _mm_add_ps(_mm_shuffle_ps(v81, v81, 216), _mm_shuffle_ps(v82, v82, 216));
			v57[-3] = _mm_mul_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v84, v84, 157), (__m128)xmmword_1409B4650),
					_mm_shuffle_ps(v84, v84, 200)),
				(__m128)xmmword_1409B4670);
			v85 = v57[-2];
			v86 = v57[-1];
			v87 = _mm_shuffle_ps(v76, v76, 156);
			v88 = _mm_shuffle_ps(v87, v85, 216);
			v89 = _mm_sub_ps(_mm_shuffle_ps(v85, v87, 140), _mm_shuffle_ps(v85, v87, 217));
			v90 = _mm_shuffle_ps(v87, v85, 141);
			v91 = _mm_shuffle_ps(v89, v89, 54);
			v92 = _mm_shuffle_ps(v57[-3], v91, 221);
			v93 = _mm_shuffle_ps(v57[-3], v91, 136);
			v94 = _mm_sub_ps(v93, v92);
			v95 = _mm_add_ps(_mm_shuffle_ps(v90, v90, 216), _mm_shuffle_ps(v88, v88, 216));
			v96 = _mm_add_ps(v93, v92);
			v57[-3] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v94, v94, 17), (__m128)xmmword_1409B4660),
				_mm_shuffle_ps(v94, v94, 238));
			v97 = _mm_shuffle_ps(v86, v95, 221);
			v98 = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v96, v96, 68), (__m128)xmmword_1409B4640),
				_mm_shuffle_ps(v96, v96, 238));
			v99 = _mm_shuffle_ps(v86, v95, 136);
			v100 = _mm_sub_ps(v99, v97);
			v57[-2] = v98;
			v101 = _mm_add_ps(v99, v97);
			v57[-1] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v100, v100, 17), (__m128)xmmword_1409B4660),
				_mm_shuffle_ps(v100, v100, 238));
			v102 = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v101, v101, 68), (__m128)xmmword_1409B4640),
				_mm_shuffle_ps(v101, v101, 238));
			v103 = v57[3];
			*v57 = v102;
			v104 = v103;
			v105 = _mm_shuffle_ps(v103, v57[1], 141);
			v106 = _mm_shuffle_ps(v104, v57[1], 216);
			v107 = _mm_shuffle_ps(v106, v106, 216);
			v108 = _mm_sub_ps(v106, v105);
			v109 = _mm_add_ps(_mm_shuffle_ps(v105, v105, 216), v107);
			v110 = v57[2];
			v57[3] = v109;
			v111 = _mm_shuffle_ps(v110, v83, 140);
			v112 = _mm_shuffle_ps(v83, v110, 216);
			v57[1] = _mm_mul_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v108, v108, 157), (__m128)xmmword_1409B4650),
					_mm_shuffle_ps(v108, v108, 200)),
				(__m128)xmmword_1409B4670);
			v113 = _mm_shuffle_ps(v110, v83, 217);
			v114 = _mm_shuffle_ps(v83, v110, 141);
			v115 = _mm_sub_ps(v111, v113);
			v116 = _mm_shuffle_ps(v115, v115, 54);
			v117 = v57[3];
			v118 = _mm_shuffle_ps(v57[1], v116, 221);
			v119 = _mm_shuffle_ps(v57[1], v116, 136);
			v57 += 8;
			v120 = _mm_sub_ps(v119, v118);
			v121 = _mm_add_ps(v119, v118);
			v122 = _mm_add_ps(_mm_shuffle_ps(v114, v114, 216), _mm_shuffle_ps(v112, v112, 216));
			v57[-7] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v120, v120, 17), (__m128)xmmword_1409B4660),
				_mm_shuffle_ps(v120, v120, 238));
			v123 = _mm_shuffle_ps(v117, v122, 221);
			v124 = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v121, v121, 68), (__m128)xmmword_1409B4640),
				_mm_shuffle_ps(v121, v121, 238));
			v125 = _mm_shuffle_ps(v117, v122, 136);
			v126 = _mm_sub_ps(v125, v123);
			v57[-6] = v124;
			v127 = _mm_add_ps(v125, v123);
			v57[-5] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v126, v126, 17), (__m128)xmmword_1409B4660),
				_mm_shuffle_ps(v126, v126, 238));
			v57[-4] = _mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v127, v127, 68), (__m128)xmmword_1409B4640),
				_mm_shuffle_ps(v127, v127, 238));
			--v58;
		} while (v58);
	}
	sub_1408ECCD0((unsigned __int64)a2, i, v6);
	v128 = a2;
	v129 = (float*)&unk_140C18220;
	v130 = (unsigned __int64)&a2[(__int64)i >> 1];
	v131 = (float*)v130;
	if (v8 < 4)
		v132 = (float*)&unk_140C18220;
	else
		v132 = (float*)&dword_140C17210[v9 >> 1];
	v133 = v132 + 1024;
	do
	{
		v134 = v132[1];
		v135 = *v132;
		v136 = *v128;
		v131 -= 2;
		v132 = (float*)((char*)v132 + v11);
		v137 = v128[1];
		v138 = *v128 + *v131;
		v128 += 2;
		v139 = v131[1] - v137;
		v140 = (float)(v137 + v131[1]) * 0.5;
		v141 = (float)(v136 - *v131) * 0.5;
		v142 = (float)((float)(v135 * v139) + (float)(v134 * v138)) * 0.5;
		v143 = (float)((float)(v134 * v139) - (float)(v135 * v138)) * 0.5;
		*(v128 - 2) = v142 + v140;
		*(v128 - 1) = v143 + v141;
		*v131 = v140 - v142;
		v131[1] = v143 - v141;
	} while (v132 < v133);
	do
	{
		v144 = *v128;
		v145 = v128[1];
		v146 = *(v131 - 1);
		v131 -= 2;
		v132 = (float*)((char*)v132 - v11);
		v128 += 2;
		v147 = v144 + *v131;
		v148 = v132[1];
		v149 = v148 * v147;
		v150 = v146 - v145;
		v151 = (float)(v145 + v146) * 0.5;
		v152 = (float)(v144 - *v131) * 0.5;
		v153 = (float)((float)(v148 * v150) + (float)(*v132 * v147)) * 0.5;
		v154 = (float)((float)(*v132 * v150) - v149) * 0.5;
		*(v128 - 2) = v153 + v151;
		*(v128 - 1) = v154 + v152;
		*v131 = v151 - v153;
		v131[1] = v154 - v152;
	} while (v128 < v131);
	v155 = v8 >> 2;
	if (v155 <= 1)
	{
		v162 = (float*)&unk_140C17218;
		v163 = a2 + 2;
		v164 = *(float*)dword_140C17210 * 0.5;
		v165 = *(float*)&dword_140C17214 * 0.5;
		do
		{
			v166 = *v129;
			v167 = v129[1];
			v129 += 2;
			v162 += 2;
			v168 = v166 * 0.5;
			v169 = -*(v163 - 1);
			v170 = v167 * 0.5;
			v171 = *(v163 - 2);
			v172 = v164 + v168;
			v173 = v165 + v170;
			v174 = v169;
			v163 += 4;
			result = (__int64)(v163 - 2);
			v175 = v171 * v172;
			v176 = (float)(v169 * v172) - (float)(v171 * v173);
			v177 = *(v163 - 4);
			*(v163 - 6) = (float)(v174 * v173) + v175;
			*(v163 - 5) = v176;
			v164 = *(v162 - 2) * 0.5;
			v178 = v168 + v164;
			v179 = -*(v163 - 3);
			v165 = *(v162 - 1) * 0.5;
			v180 = v170 + v165;
			*(v163 - 4) = (float)(v180 * v179) + (float)(v178 * v177);
			*(v163 - 3) = (float)(v178 * v179) - (float)(v180 * v177);
		} while ((unsigned __int64)(v163 - 2) < v130);
	}
	else
	{
		if (v155 >= 4)
			v129 = (float*)&dword_140C17210[(__int64)v155 >> 1];
		result = 4i64 * v155;
		do
		{
			v157 = v129[1];
			v158 = *v129;
			v159 = *a2;
			v129 = (float*)((char*)v129 + result);
			v160 = a2[1];
			a2 += 2;
			v161 = -v160;
			*(a2 - 2) = (float)(v157 * v161) + (float)(v158 * v159);
			*(a2 - 1) = (float)(v158 * v161) - (float)(v157 * v159);
		} while ((unsigned __int64)a2 < v130);
	}
	return result;
}
// 1409B4630: using guessed type __int128 xmmword_1409B4630;
// 1409B4640: using guessed type __int128 xmmword_1409B4640;
// 1409B4650: using guessed type __int128 xmmword_1409B4650;
// 1409B4660: using guessed type __int128 xmmword_1409B4660;
// 1409B4670: using guessed type __int128 xmmword_1409B4670;
// 1409B4680: using guessed type __int128 xmmword_1409B4680;
// 1409B4690: using guessed type __int128 xmmword_1409B4690;
// 1409B46A0: using guessed type __int128 xmmword_1409B46A0;
// 1409B46B0: using guessed type __int128 xmmword_1409B46B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C17210: using guessed type int dword_140C17210[];
// 140C17214: using guessed type int dword_140C17214;
// 140C18210: using guessed type int dword_140C18210[4];

