#include "../winhttp.h"

//----- (00000001408B9BB0) ----------------------------------------------------
unsigned int* __fastcall sub_1408B9BB0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r14
	__m128* v4; // r11
	__m128* v5; // r9
	unsigned __int64 v6; // r10
	unsigned int* v7; // rdi
	__m128* v8; // rsi
	unsigned int* v9; // rbx
	unsigned int* v10; // r13
	float v11; // xmm7_4
	float v12; // xmm3_4
	unsigned int* v13; // r15
	unsigned int* v14; // r12
	__m128* v15; // rbp
	__int64 v17; // rdx
	unsigned int v18; // eax
	unsigned __int64 v19; // r8
	__m128 v20; // xmm0
	__m128 v21; // xmm1
	__m128i v22; // xmm0
	unsigned __int64 v23; // rax
	float v24; // xmm2_4
	__m128 v25; // xmm0
	unsigned int* v26; // rdx
	float v27; // xmm2_4
	__m128 v28; // xmm5
	__m128 v29; // xmm9
	unsigned int* v30; // rcx
	unsigned int* result; // rax
	__m128 v32; // xmm8
	__m128 v33; // xmm10
	__m128 v34; // xmm0
	__m128 v35; // xmm15
	__m128 v36; // xmm4
	unsigned int* v37; // r11
	__m128 v38; // xmm6
	__m128 v39; // xmm1
	__m128 v40; // xmm2
	__m128 v41; // xmm0
	__m128 v42; // xmm3
	__m128 v43; // xmm0
	__m128 v44; // xmm1
	__m128 v45; // xmm2
	__m128 v46; // xmm15
	__m128 v47; // xmm8
	__m128 v48; // xmm3
	__m128 v49; // xmm7
	__m128 v50; // xmm6
	__m128 v51; // xmm0
	__m128 v52; // xmm5
	__m128 v53; // xmm1
	__int64 v54; // rcx
	float v55; // xmm14_4
	float v56; // xmm12_4
	__int64 v57; // rdx
	__int64 v58; // r8
	__m128 v59; // xmm6
	float v60; // xmm13_4
	__int64 v61; // r9
	float v62; // xmm10_4
	float v63; // xmm11_4
	__int64 v64; // r10
	__m128 v65; // xmm8
	float v66; // xmm9_4
	__m128 v67; // xmm2
	__m128 v68; // xmm2
	__m128 v69; // xmm3
	__m128 v70; // xmm3
	__m128 v71; // xmm4
	__m128 v72; // xmm4
	__m128 v73; // xmm5
	__m128 v74; // xmm5
	__m128 v75; // xmm6
	__m128 v76; // xmm6
	__m128 v77; // xmm8
	__m128 v78; // xmm0
	__m128 v79; // xmm1
	__m128 v80; // xmm0
	__m128 v81; // xmm0
	__m128 v82; // xmm7
	__m128 v83; // xmm7
	__m128 v84; // xmm4
	__m128 v85; // xmm1
	__m128 v86; // xmm5
	__m128 v87; // xmm4
	__m128 v88; // xmm1
	__m128 v89; // xmm0
	__m128 v90; // xmm1
	__m128 v91; // xmm0
	unsigned __int64 v92; // [rsp+0h] [rbp-278h]
	float* v93; // [rsp+8h] [rbp-270h]
	unsigned int* v94; // [rsp+10h] [rbp-268h]
	__m128 v95; // [rsp+20h] [rbp-258h]
	unsigned int* v96; // [rsp+20h] [rbp-258h]
	__m128* v97; // [rsp+30h] [rbp-248h]
	__m128 v98; // [rsp+40h] [rbp-238h]
	float* v99; // [rsp+50h] [rbp-228h]
	unsigned __int64 v100; // [rsp+58h] [rbp-220h]
	float* v101; // [rsp+60h] [rbp-218h]
	unsigned int* v102; // [rsp+68h] [rbp-210h]
	__m128 v103; // [rsp+70h] [rbp-208h]
	unsigned __int64 v104; // [rsp+80h] [rbp-1F8h]
	__m128 v105; // [rsp+90h] [rbp-1E8h]
	float v106; // [rsp+A0h] [rbp-1D8h]
	float v107; // [rsp+B0h] [rbp-1C8h]
	float v108; // [rsp+C0h] [rbp-1B8h]
	__m128 v109; // [rsp+D0h] [rbp-1A8h]
	__m128 v110; // [rsp+E0h] [rbp-198h]
	__m128 v111; // [rsp+F0h] [rbp-188h]
	float v112; // [rsp+100h] [rbp-178h]
	float v113; // [rsp+110h] [rbp-168h]
	__m128 v114; // [rsp+120h] [rbp-158h]
	float v115; // [rsp+130h] [rbp-148h]
	__m128 v116; // [rsp+140h] [rbp-138h]
	__m128 v117; // [rsp+150h] [rbp-128h]
	__m128 v118; // [rsp+160h] [rbp-118h]
	float v119; // [rsp+170h] [rbp-108h]
	__m128 v120; // [rsp+180h] [rbp-F8h]
	int v123; // [rsp+298h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v5 = *(__m128**)(a1 + 280);
	v6 = *(_QWORD*)(a1 + 344);
	v7 = *(unsigned int**)(a1 + 304);
	v110 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v8 = *(__m128**)(a1 + 312);
	v9 = *(unsigned int**)(a1 + 144);
	v10 = *(unsigned int**)(a1 + 152);
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v105 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v107 = v11;
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v13 = *(unsigned int**)(a1 + 160);
	v14 = *(unsigned int**)(a1 + 168);
	v15 = *(__m128**)(a1 + 176);
	LODWORD(v112) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v106 = v12;
	LODWORD(v115) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v17 = *(_QWORD*)(a1 + 16);
	v97 = v5;
	v100 = v6;
	v93 = *(float**)a2;
	v18 = *(unsigned __int16*)(a2 + 16);
	v19 = *(_QWORD*)(a1 + 336);
	v104 = v19;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v17 + 24);
	v20 = v2;
	v21 = (__m128) * (unsigned int*)(v17 + 16);
	v109 = _mm_shuffle_ps(v20, v20, 0);
	v103 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v22 = _mm_cvtsi32_si128(v18);
	v99 = *(float**)(a1 + 40);
	v23 = *(_QWORD*)(a1 + 184);
	v24 = 1.0 / _mm_cvtepi32_ps(v22).m128_f32[0];
	v21.m128_f32[0] = (float)(v21.m128_f32[0] - *(float*)(a1 + 572)) * v24;
	LODWORD(v119) = _mm_shuffle_ps(v21, v21, 0).m128_u32[0];
	v25 = (__m128) * (unsigned int*)(v17 + 20);
	v26 = *(unsigned int**)(a1 + 272);
	v102 = v26;
	v25.m128_f32[0] = (float)(v25.m128_f32[0] - *(float*)(a1 + 576)) * v24;
	LODWORD(v27) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v101 = *(float**)(a1 + 56);
	LODWORD(v113) = _mm_shuffle_ps(v25, v25, 0).m128_u32[0];
	v108 = v27;
	v28 = *(__m128*)(a1 + 368);
	v29 = *(__m128*)(a1 + 384);
	v30 = *(unsigned int**)(a1 + 200);
	v92 = v23;
	result = (unsigned int*)v4[12].m128_u64[0];
	v32 = v4[27];
	v33 = v4[28];
	v34 = v4[32];
	v123 = *(unsigned __int16*)(a2 + 18);
	v35 = v4[31];
	v114 = v28;
	v118 = v29;
	v116 = v32;
	v120 = v33;
	v98 = v34;
	if (*(_WORD*)(a2 + 18))
	{
		v36 = (__m128)xmmword_1409AA100;
		v37 = (unsigned int*)v4[12].m128_u64[0];
		v38 = (__m128)xmmword_1409AA120;
		v117 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA100);
		v111 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA120);
		do
		{
			v39 = (__m128) * v9;
			v40 = (__m128) * v10;
			v41 = (__m128) * v13;
			v9 += 4;
			if ((unsigned __int64)v9 >= v19)
				v9 = v26;
			v10 += 4;
			v42 = (__m128) * v14;
			if ((unsigned __int64)v10 >= v19)
				v10 = v26 + 1;
			v13 += 4;
			if ((unsigned __int64)v13 >= v19)
				v13 = v26 + 2;
			v14 += 4;
			if ((unsigned __int64)v14 >= v19)
				v14 = v26 + 3;
			v43 = _mm_unpacklo_ps(v41, v42);
			v44 = _mm_unpacklo_ps(v39, v40);
			v45 = (__m128)v15->m128_u32[0];
			if ((unsigned __int64)++v15 >= v6)
				v15 = v5;
			v46 = _mm_mul_ps(v35, v32);
			v92 += 16i64;
			v47 = (__m128) * v30;
			v35 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(v44, v43), v28), v46);
			v48 = _mm_mul_ps(v35, (__m128)xmmword_1409AA0F0);
			v49 = _mm_mul_ps(v35, v38);
			v50 = (__m128) * (unsigned int*)(v92 - 16);
			v95 = _mm_mul_ps(v35, (__m128)xmmword_1409AA140);
			v51 = (__m128) * v37;
			v52 = _mm_mul_ps(v35, (__m128)xmmword_1409AA110);
			v53 = _mm_mul_ps(v35, v36);
			if (v92 >= v6)
				v92 = (unsigned __int64)v5->m128_u64 + 4;
			v37 += 4;
			if ((unsigned __int64)v37 >= v6)
				v37 = &v5->m128_u32[2];
			v94 = v30 + 4;
			if ((unsigned __int64)(v30 + 4) >= v6)
				v94 = &v5->m128_u32[3];
			v54 = *(unsigned __int16*)(a2 + 16);
			v55 = *v93;
			v56 = v93[v54];
			v57 = 2 * (int)v54;
			v58 = 5 * (int)v54;
			v59 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v45, v50), _mm_unpacklo_ps(v51, v47)), v29),
				_mm_mul_ps(v98, v33));
			v60 = v93[v57];
			v61 = 3 * (int)v54;
			v62 = v93[v58];
			v98 = v59;
			v63 = v93[v61];
			v64 = 4 * (int)v54;
			v65 = _mm_add_ps(_mm_mul_ps(v111, v59), v95);
			v66 = v93[v64];
			v67 = _mm_add_ps(_mm_mul_ps(v59, (__m128)xmmword_1409AA0F0), v48);
			v68 = _mm_add_ps(v67, _mm_movehl_ps(v67, v67));
			v69 = _mm_add_ps(_mm_mul_ps(v59, v36), v53);
			v70 = _mm_add_ps(v69, _mm_movehl_ps(v69, v69));
			v71 = _mm_add_ps(_mm_mul_ps(v59, (__m128)xmmword_1409AA110), v52);
			v72 = _mm_add_ps(v71, _mm_movehl_ps(v71, v71));
			v73 = _mm_add_ps(_mm_mul_ps(v117, v59), v53);
			v74 = _mm_add_ps(v73, _mm_movehl_ps(v73, v73));
			v75 = _mm_add_ps(_mm_mul_ps(v59, (__m128)xmmword_1409AA130), v49);
			v76 = _mm_add_ps(v75, _mm_movehl_ps(v75, v75));
			v77 = _mm_add_ps(v65, _mm_movehl_ps(v65, v65));
			v78 = _mm_add_ps(v98, v35);
			v79 = _mm_add_ps(_mm_movehl_ps(v78, v78), v78);
			v80 = v103;
			v80.m128_f32[0] = v103.m128_f32[0] + v119;
			v103 = v80;
			v81 = v105;
			v82 = _mm_add_ps(_mm_shuffle_ps(v79, v79, 85), v79);
			v81.m128_f32[0] = v105.m128_f32[0] + v113;
			v105 = v81;
			v83 = _mm_mul_ps(_mm_shuffle_ps(v82, v82, 0), v109);
			*v93++ = (float)(v55 * v103.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v68, v68, 85).m128_f32[0] + v68.m128_f32[0]) * v81.m128_f32[0]);
			v93[v54 - 1] = (float)(v56 * v103.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v70, v70, 85).m128_f32[0] + v70.m128_f32[0]) * v81.m128_f32[0]);
			v79.m128_f32[0] = _mm_shuffle_ps(v72, v72, 85).m128_f32[0] + v72.m128_f32[0];
			v84 = _mm_add_ps(v83, v35);
			v93[v57 - 1] = (float)(v60 * v103.m128_f32[0]) + (float)(v79.m128_f32[0] * v81.m128_f32[0]);
			v93[v58 - 1] = (float)(v62 * v103.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v74, v74, 85).m128_f32[0] + v74.m128_f32[0]) * v81.m128_f32[0]);
			v93[v61 - 1] = (float)(v63 * v103.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v76, v76, 85).m128_f32[0] + v76.m128_f32[0]) * v81.m128_f32[0]);
			v93[v64 - 1] = (float)(v66 * v103.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v77, v77, 85).m128_f32[0] + v77.m128_f32[0]) * v81.m128_f32[0]);
			v85 = _mm_add_ps(v98, v83);
			v11 = (float)((float)(v60 + v62) + v66) + (float)((float)(v55 + v56) + v63);
			v86 = _mm_shuffle_ps(v85, _mm_shuffle_ps(v85, v84, 15), 201);
			v87 = _mm_shuffle_ps(v84, _mm_shuffle_ps(v84, v85, 15), 201);
			v12 = (float)((float)(v115 * v106) + v11) - v107;
			v107 = v11;
			v106 = v12;
			if (v99)
			{
				v27 = *v3;
				*v3++ = v12;
				if (v3 == v101)
					v3 = v99;
			}
			else
			{
				v27 = v12;
			}
			v88 = v110;
			v19 = v104;
			v26 = v102;
			v6 = v100;
			v5 = v97;
			v38 = (__m128)xmmword_1409AA120;
			v32 = v116;
			v29 = v118;
			v30 = v94;
			v7 += 4;
			v88.m128_f32[0] = (float)(v110.m128_f32[0] * v27) + (float)(v112 * v108);
			v33 = v120;
			v89 = _mm_shuffle_ps(v88, v88, 0);
			v108 = v27;
			v90 = _mm_add_ps(v89, v86);
			v91 = _mm_add_ps(v89, v87);
			v36 = (__m128)xmmword_1409AA100;
			v28 = v114;
			*((__m128*)v7 - 1) = v91;
			if ((unsigned __int64)v7 >= v104)
				v7 = v102;
			*v8++ = v90;
			if ((unsigned __int64)v8 >= v100)
				v8 = v97;
			--v123;
		} while (v123);
		v34 = v98;
		v96 = v37;
		v4 = (__m128*)a1;
		result = v96;
	}
	v4[4].m128_f32[3] = v27;
	v4[35].m128_f32[0] = v11;
	v4[35].m128_f32[1] = v12;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[31] = v35;
	v4[11].m128_u64[1] = v92;
	v4[32] = v34;
	v4[19].m128_u64[0] = (unsigned __int64)v7;
	v4[19].m128_u64[1] = (unsigned __int64)v8;
	v4[9].m128_u64[0] = (unsigned __int64)v9;
	v4[9].m128_u64[1] = (unsigned __int64)v10;
	v4[10].m128_u64[0] = (unsigned __int64)v13;
	v4[10].m128_u64[1] = (unsigned __int64)v14;
	v4[11].m128_u64[0] = (unsigned __int64)v15;
	v4[12].m128_u64[0] = (unsigned __int64)result;
	v4[12].m128_u64[1] = (unsigned __int64)v30;
	return result;
}
// 1409AA0E0: using guessed type __int128 xmmword_1409AA0E0;
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA130: using guessed type __int128 xmmword_1409AA130;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

