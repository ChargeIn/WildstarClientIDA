#include "../winhttp.h"

//----- (00000001408B7F20) ----------------------------------------------------
unsigned int* __fastcall sub_1408B7F20(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r14
	__m128* v4; // r10
	unsigned __int64 v5; // rbx
	unsigned __int64 v6; // rdi
	__m128* v7; // rsi
	unsigned int* v8; // r11
	unsigned int* v9; // r12
	float v11; // xmm8_4
	float v12; // xmm15_4
	__int64 v13; // rdx
	unsigned __int32 v14; // xmm3_4
	__m128 v15; // xmm0
	__m128 v16; // xmm1
	unsigned int* v17; // rax
	float v18; // xmm2_4
	__m128 v19; // xmm0
	__m128 v20; // xmm4
	__m128 v21; // xmm5
	unsigned int* v22; // r13
	unsigned __int64 v23; // rbp
	unsigned int* v24; // rdx
	unsigned __int64 v25; // r15
	__m128 v26; // xmm13
	__m128 v27; // xmm14
	unsigned int* v28; // r9
	unsigned int* v29; // rcx
	__m128 v30; // xmm0
	unsigned int* v31; // r8
	unsigned int* v32; // r10
	unsigned __int64 v33; // rax
	__m128 v34; // xmm7
	__m128 v35; // xmm9
	__m128 v36; // xmm10
	__m128 v37; // xmm11
	__m128 v38; // xmm12
	__m128 v39; // xmm1
	__m128 v40; // xmm2
	__m128 v41; // xmm0
	__m128 v42; // xmm3
	unsigned int* v43; // r10
	__m128 v44; // xmm1
	__m128 v45; // xmm2
	unsigned __int64 v46; // rax
	__m128 v47; // xmm1
	__m128 v48; // xmm0
	__m128 v49; // xmm13
	__m128 v50; // xmm1
	bool v51; // cf
	__m128 v52; // xmm6
	__m128 v53; // xmm3
	__m128 v54; // xmm4
	__m128 v55; // xmm7
	__m128 v56; // xmm5
	__m128 v57; // xmm14
	__m128* v58; // rax
	__m128 v59; // xmm1
	__m128 v60; // xmm2
	__m128 v61; // xmm8
	__m128 v62; // xmm1
	__m128 v63; // xmm1
	__m128 v64; // xmm3
	__m128 v65; // xmm0
	__m128 v66; // xmm9
	__m128 v67; // xmm4
	__m128 v68; // xmm5
	__m128 v69; // xmm6
	__m128 v70; // xmm7
	__int64 v71; // rcx
	float v72; // xmm12_4
	float v73; // xmm10_4
	__int64 v74; // rdx
	__int64 v75; // r8
	float v76; // xmm11_4
	__m128 v77; // xmm8
	float v78; // xmm9_4
	__int64 v79; // r9
	__m128 v80; // xmm2
	__m128 v81; // xmm2
	__m128 v82; // xmm2
	__m128 v83; // xmm3
	__m128 v84; // xmm3
	__m128 v85; // xmm4
	__m128 v86; // xmm4
	__m128 v87; // xmm5
	__m128 v88; // xmm5
	__m128 v89; // xmm6
	__m128 v90; // xmm6
	__m128 v91; // xmm0
	__m128 v92; // xmm1
	__m128 v93; // xmm0
	__m128 v94; // xmm0
	__m128 v95; // xmm7
	__m128 v96; // xmm7
	__m128 v97; // xmm4
	__m128 v98; // xmm2
	__m128 v99; // xmm1
	__m128 v100; // xmm5
	__m128 v101; // xmm6
	__m128 v102; // xmm4
	float v103; // xmm1_4
	__m128 v104; // xmm2
	__m128 v105; // xmm2
	__m128 v106; // xmm0
	__m128 v107; // xmm1
	__m128 v108; // xmm2
	unsigned int* result; // rax
	unsigned int* v110; // [rsp+0h] [rbp-2A8h]
	unsigned int* v111; // [rsp+8h] [rbp-2A0h]
	__m128 v112; // [rsp+10h] [rbp-298h]
	unsigned int* v113; // [rsp+20h] [rbp-288h]
	unsigned int* v114; // [rsp+28h] [rbp-280h]
	unsigned int* v115; // [rsp+30h] [rbp-278h]
	unsigned int* v116; // [rsp+38h] [rbp-270h]
	unsigned __int64 v117; // [rsp+40h] [rbp-268h]
	unsigned int* v118; // [rsp+48h] [rbp-260h]
	float* v119; // [rsp+50h] [rbp-258h]
	__m128* v120; // [rsp+58h] [rbp-250h]
	unsigned __int64 v121; // [rsp+60h] [rbp-248h]
	unsigned __int64 v122; // [rsp+68h] [rbp-240h]
	unsigned __int64 v123; // [rsp+70h] [rbp-238h]
	unsigned int* v124; // [rsp+78h] [rbp-230h]
	__m128 v125; // [rsp+80h] [rbp-228h]
	__m128 v126; // [rsp+90h] [rbp-218h]
	float* v127; // [rsp+A0h] [rbp-208h]
	float* v128; // [rsp+A8h] [rbp-200h]
	float v129; // [rsp+B0h] [rbp-1F8h]
	float v130; // [rsp+C0h] [rbp-1E8h]
	__m128 v131; // [rsp+D0h] [rbp-1D8h]
	float v132; // [rsp+E0h] [rbp-1C8h]
	__m128 v133; // [rsp+F0h] [rbp-1B8h]
	__m128 v134; // [rsp+100h] [rbp-1A8h]
	float v135; // [rsp+110h] [rbp-198h]
	__m128 v136; // [rsp+120h] [rbp-188h]
	__m128 v137; // [rsp+130h] [rbp-178h]
	float v138; // [rsp+140h] [rbp-168h]
	float v139; // [rsp+150h] [rbp-158h]
	__m128 v140; // [rsp+160h] [rbp-148h]
	__m128 v141; // [rsp+170h] [rbp-138h]
	__m128 v142; // [rsp+180h] [rbp-128h]
	__m128 v143; // [rsp+190h] [rbp-118h]
	__m128 v144; // [rsp+1A0h] [rbp-108h]
	__m128 v145; // [rsp+1B0h] [rbp-F8h]
	int v148; // [rsp+2C8h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v5 = *(_QWORD*)(a1 + 304);
	v6 = *(_QWORD*)(a1 + 312);
	v7 = *(__m128**)(a1 + 320);
	v137 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v126 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v8 = *(unsigned int**)(a1 + 144);
	v9 = *(unsigned int**)(a1 + 160);
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v129 = v11;
	v13 = *(_QWORD*)(a1 + 16);
	v14 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v139) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v130 = *(float*)&v14;
	LODWORD(v135) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v119 = *(float**)a2;
	v124 = *(unsigned int**)(a1 + 272);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v13 + 24);
	v15 = v2;
	v16 = (__m128) * (unsigned int*)(v13 + 16);
	v133 = _mm_shuffle_ps(v15, v15, 0);
	v125 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v128 = *(float**)(a1 + 40);
	v121 = *(_QWORD*)(a1 + 336);
	v17 = *(unsigned int**)(a1 + 152);
	v18 = 1.0 / (float)*(unsigned __int16*)(a2 + 16);
	v16.m128_f32[0] = (float)(v16.m128_f32[0] - *(float*)(a1 + 572)) * v18;
	LODWORD(v138) = _mm_shuffle_ps(v16, v16, 0).m128_u32[0];
	v19 = (__m128) * (unsigned int*)(v13 + 20);
	v120 = *(__m128**)(a1 + 288);
	v127 = *(float**)(a1 + 56);
	v19.m128_f32[0] = (float)(v19.m128_f32[0] - *(float*)(a1 + 576)) * v18;
	v117 = *(_QWORD*)(a1 + 280);
	v122 = *(_QWORD*)(a1 + 352);
	LODWORD(v132) = _mm_shuffle_ps(v19, v19, 0).m128_u32[0];
	v123 = *(_QWORD*)(a1 + 344);
	v20 = *(__m128*)(a1 + 368);
	v21 = *(__m128*)(a1 + 432);
	v22 = *(unsigned int**)(a1 + 168);
	v23 = *(_QWORD*)(a1 + 176);
	v24 = *(unsigned int**)(a1 + 200);
	v25 = *(_QWORD*)(a1 + 208);
	v26 = *(__m128*)(a1 + 496);
	v27 = *(__m128*)(a1 + 512);
	v136 = *(__m128*)(a1 + 384);
	v28 = *(unsigned int**)(a1 + 224);
	v113 = *(unsigned int**)(a1 + 216);
	v143 = v20;
	v145 = v21;
	v114 = *(unsigned int**)(a1 + 232);
	v111 = *(unsigned int**)(a1 + 184);
	v134 = *(__m128*)(a1 + 400);
	v142 = *(__m128*)(a1 + 448);
	v29 = *(unsigned int**)(a1 + 192);
	v140 = v4[29];
	v30 = v4[33];
	v148 = *(unsigned __int16*)(a2 + 18);
	v31 = v124;
	v112 = v30;
	if (*(_WORD*)(a2 + 18))
	{
		v32 = v17;
		v33 = v121;
		v34 = (__m128)xmmword_1409AA120;
		v35 = (__m128)xmmword_1409AA100;
		v36 = (__m128)xmmword_1409AA110;
		v37 = (__m128)xmmword_1409AA0F0;
		v131 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA100);
		v38 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA120);
		v144 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA110);
		v141 = v38;
		do
		{
			v39 = (__m128) * v8;
			v40 = (__m128) * v32;
			v41 = (__m128) * v9;
			v8 += 4;
			if ((unsigned __int64)v8 >= v33)
				v8 = v31;
			v110 = v32 + 4;
			v42 = (__m128) * v22;
			if ((unsigned __int64)(v32 + 4) >= v33)
				v110 = v31 + 1;
			v9 += 4;
			if ((unsigned __int64)v9 >= v33)
				v9 = v31 + 2;
			v22 += 4;
			if ((unsigned __int64)v22 >= v33)
				v22 = v31 + 3;
			v43 = v111;
			v23 += 16i64;
			v44 = _mm_unpacklo_ps(v39, v40);
			v45 = (__m128) * v111;
			v46 = v117;
			v47 = _mm_mul_ps(_mm_movelh_ps(v44, _mm_unpacklo_ps(v41, v42)), v20);
			v48 = _mm_mul_ps(v26, v21);
			v49 = v47;
			v50 = (__m128) * (unsigned int*)(v23 - 16);
			if (v23 >= v123)
				v23 = v117;
			v26 = _mm_add_ps(v49, v48);
			v111 += 4;
			v51 = (unsigned __int64)(v43 + 4) < v123;
			v32 = v110;
			v52 = _mm_mul_ps(v26, v34);
			v53 = _mm_mul_ps(v26, v37);
			v54 = _mm_mul_ps(v26, v35);
			v55 = _mm_mul_ps(v26, (__m128)xmmword_1409AA140);
			v56 = _mm_mul_ps(v26, v36);
			if (!v51)
			{
				v111 = (unsigned int*)(v117 + 4);
				v32 = v110;
			}
			v115 = v29 + 4;
			if ((unsigned __int64)(v29 + 4) >= v123)
			{
				v115 = (unsigned int*)(v117 + 8);
				v46 = v117;
			}
			v116 = v24 + 4;
			if ((unsigned __int64)(v24 + 4) >= v123)
				v116 = (unsigned int*)(v46 + 12);
			v57 = _mm_mul_ps(v27, v142);
			v58 = v120;
			v25 += 16i64;
			v59 = _mm_unpacklo_ps(v50, v45);
			v60 = (__m128) * (unsigned int*)(v25 - 16);
			v61 = (__m128) * v113;
			v62 = _mm_mul_ps(_mm_movelh_ps(v59, _mm_unpacklo_ps((__m128) * v29, (__m128) * v24)), v136);
			if (v25 >= v122)
				v25 = (unsigned __int64)v120;
			v113 += 4;
			v27 = _mm_add_ps(v62, v57);
			v63 = _mm_add_ps(v27, v26);
			v64 = _mm_add_ps(v53, _mm_mul_ps(v27, v37));
			v65 = _mm_mul_ps(v27, v35);
			v66 = (__m128) * v114;
			v67 = _mm_add_ps(v54, v65);
			v68 = _mm_add_ps(v56, _mm_mul_ps(v27, v36));
			v69 = _mm_add_ps(v52, _mm_mul_ps(v27, (__m128)xmmword_1409AA130));
			v70 = _mm_add_ps(v55, _mm_mul_ps(v38, v27));
			if ((unsigned __int64)v113 >= v122)
				v113 = &v120->m128_u32[1];
			v118 = v28 + 4;
			if ((unsigned __int64)(v28 + 4) >= v122)
			{
				v118 = &v120->m128_u32[2];
				v58 = v120;
			}
			v114 += 4;
			if ((unsigned __int64)v114 >= v122)
				v114 = &v58->m128_u32[3];
			v71 = *(unsigned __int16*)(a2 + 16);
			v72 = *v119;
			v73 = v119[v71];
			v74 = 2 * (int)v71;
			v75 = 3 * (int)v71;
			v76 = v119[v74];
			v77 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v60, v61), _mm_unpacklo_ps((__m128) * v28, v66)), v134),
				_mm_mul_ps(v112, v140));
			v78 = v119[v75];
			v112 = v77;
			v79 = 4 * (int)v71;
			v80 = v77;
			v77.m128_f32[0] = v119[v79];
			v81 = _mm_add_ps(_mm_mul_ps(v80, (__m128)xmmword_1409AA0F0), v64);
			v82 = _mm_add_ps(v81, _mm_movehl_ps(v81, v81));
			v83 = _mm_add_ps(_mm_mul_ps(v112, (__m128)xmmword_1409AA100), v67);
			v84 = _mm_add_ps(v83, _mm_movehl_ps(v83, v83));
			v85 = _mm_add_ps(_mm_mul_ps(v112, (__m128)xmmword_1409AA110), v68);
			v86 = _mm_add_ps(v85, _mm_movehl_ps(v85, v85));
			v87 = _mm_add_ps(_mm_mul_ps(v131, v112), v69);
			v88 = _mm_add_ps(v87, _mm_movehl_ps(v87, v87));
			v89 = _mm_add_ps(_mm_mul_ps(v144, v112), v70);
			v90 = _mm_add_ps(v89, _mm_movehl_ps(v89, v89));
			v91 = _mm_add_ps(v112, v63);
			v92 = _mm_add_ps(_mm_movehl_ps(v91, v91), v91);
			v93 = v125;
			v93.m128_f32[0] = v125.m128_f32[0] + v138;
			v125 = v93;
			v94 = v126;
			v95 = _mm_add_ps(_mm_shuffle_ps(v92, v92, 85), v92);
			v94.m128_f32[0] = v126.m128_f32[0] + v132;
			v126 = v94;
			*v119 = (float)(*v119 * v125.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v82, v82, 85).m128_f32[0] + v82.m128_f32[0]) * v94.m128_f32[0]);
			v92.m128_f32[0] = _mm_shuffle_ps(v84, v84, 85).m128_f32[0] + v84.m128_f32[0];
			v84.m128_i32[0] = v94.m128_i32[0];
			++v119;
			v96 = _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0), v133);
			v119[v71 - 1] = (float)(v73 * v125.m128_f32[0]) + (float)(v92.m128_f32[0] * v94.m128_f32[0]);
			v94.m128_f32[0] = (float)(v76 * v125.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v86, v86, 85).m128_f32[0] + v86.m128_f32[0]) * v94.m128_f32[0]);
			v97 = _mm_add_ps(v96, v26);
			v119[v74 - 1] = v94.m128_f32[0];
			v119[v75 - 1] = (float)(v78 * v125.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v88, v88, 85).m128_f32[0] + v88.m128_f32[0]) * v84.m128_f32[0]);
			v94.m128_f32[0] = v77.m128_f32[0] * v125.m128_f32[0];
			v11 = (float)(v76 + v78) + (float)((float)(v72 + v73) + v77.m128_f32[0]);
			v98 = _mm_add_ps(v112, v96);
			v119[v79 - 1] = v94.m128_f32[0]
				+ (float)((float)(_mm_shuffle_ps(v90, v90, 85).m128_f32[0] + v90.m128_f32[0]) * v84.m128_f32[0]);
			v99 = _mm_add_ps(v27, v96);
			v100 = _mm_shuffle_ps(v98, _mm_shuffle_ps(v98, v97, 15), 201);
			v101 = _mm_shuffle_ps(v99, _mm_shuffle_ps(v99, v98, 15), 201);
			v102 = _mm_shuffle_ps(v97, _mm_shuffle_ps(v97, v99, 15), 201);
			v12 = (float)((float)(v135 * v12) + v11) - v129;
			v129 = v11;
			if (v128)
			{
				v103 = *v3;
				*v3++ = v12;
				if (v3 == v127)
					v3 = v128;
			}
			else
			{
				v103 = v12;
			}
			v104 = v137;
			v33 = v121;
			v31 = v124;
			v29 = v115;
			v24 = v116;
			v35 = (__m128)xmmword_1409AA100;
			v36 = (__m128)xmmword_1409AA110;
			v37 = (__m128)xmmword_1409AA0F0;
			v28 = v118;
			v5 += 16i64;
			v104.m128_f32[0] = (float)(v137.m128_f32[0] * v103) + (float)(v139 * v130);
			v105 = _mm_shuffle_ps(v104, v104, 0);
			v38 = v141;
			v34 = (__m128)xmmword_1409AA120;
			v106 = _mm_add_ps(v105, v102);
			v20 = v143;
			*(__m128*)(v5 - 16) = v106;
			v14 = LODWORD(v103);
			if (v5 >= v121)
				v5 = (unsigned __int64)v124;
			v6 += 16i64;
			v130 = v103;
			v107 = v105;
			v108 = _mm_add_ps(v105, v100);
			v21 = v145;
			*(__m128*)(v6 - 16) = _mm_add_ps(v107, v101);
			*v7 = v108;
			if (v6 >= v123)
				v6 = v117;
			if ((unsigned __int64)++v7 >= v122)
				v7 = v120;
			--v148;
		} while (v148);
		v30 = v112;
		v4 = (__m128*)a1;
		v17 = v110;
	}
	v4[4].m128_i32[3] = v14;
	v4[35].m128_f32[0] = v11;
	v4[35].m128_f32[1] = v12;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[9].m128_u64[1] = (unsigned __int64)v17;
	v4[31] = v26;
	v4[11].m128_u64[1] = (unsigned __int64)v111;
	v4[19].m128_u64[0] = v5;
	v4[32] = v27;
	v4[33] = v30;
	v4[13].m128_u64[1] = (unsigned __int64)v113;
	result = v114;
	v4[19].m128_u64[1] = v6;
	v4[20].m128_u64[0] = (unsigned __int64)v7;
	v4[9].m128_u64[0] = (unsigned __int64)v8;
	v4[10].m128_u64[0] = (unsigned __int64)v9;
	v4[14].m128_u64[1] = (unsigned __int64)v114;
	v4[10].m128_u64[1] = (unsigned __int64)v22;
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

