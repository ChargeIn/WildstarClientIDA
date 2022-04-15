#include "../winhttp.h"

//----- (00000001408B4C70) ----------------------------------------------------
unsigned int* __fastcall sub_1408B4C70(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm1
	__m128* v3; // r10
	unsigned __int64 v4; // r11
	__int64 v6; // rdx
	float v7; // xmm4_4
	__m128 v8; // xmm9
	__m128 v9; // xmm10
	float v10; // xmm11_4
	unsigned __int64 v11; // r9
	__m128 v12; // xmm14
	float v13; // xmm15_4
	float v14; // xmm13_4
	__m128 v15; // xmm0
	__m128 v16; // xmm1
	float v17; // xmm2_4
	__m128 v18; // xmm0
	float* v19; // rdx
	__m128 v20; // xmm8
	__m128 v21; // xmm5
	__m128 v22; // xmm6
	__m128 v23; // xmm7
	unsigned int* v24; // rax
	unsigned int* v25; // rsi
	unsigned int* v26; // rbp
	unsigned __int32* v27; // r12
	unsigned __int32* v28; // r13
	unsigned __int64 v29; // r14
	__m128 v30; // xmm0
	__m128* v31; // rdi
	unsigned __int64 v32; // r15
	unsigned __int64 v33; // rbx
	unsigned int* v34; // r8
	__m128 v35; // xmm1
	__m128 v36; // xmm0
	__m128 v37; // xmm2
	__m128 v38; // xmm3
	__m128 v39; // xmm4
	__m128 v40; // xmm1
	__m128 v41; // xmm2
	unsigned int* v42; // rcx
	__m128 v43; // xmm1
	__m128 v44; // xmm0
	__m128 v45; // xmm5
	__m128 v46; // xmm1
	__m128 v47; // xmm0
	__m128 v48; // xmm3
	__m128 v49; // xmm1
	__m128 v50; // xmm2
	unsigned int* v51; // r8
	__m128 v52; // xmm1
	__m128 v53; // xmm0
	__m128 v54; // xmm4
	__m128 v55; // xmm6
	__m128 v56; // xmm1
	__m128 v57; // xmm8
	__m128 v58; // xmm3
	__m128 v59; // xmm0
	bool v60; // cf
	unsigned int* v61; // rcx
	__m128 v62; // xmm1
	__m128 v63; // xmm2
	__m128 v64; // xmm1
	__m128 v65; // xmm0
	__m128 v66; // xmm7
	__m128 v67; // xmm1
	__m128 v68; // xmm8
	__m128 v69; // xmm3
	__m128 v70; // xmm0
	__m128 v71; // xmm4
	__m128 v72; // xmm1
	__m128 v73; // xmm2
	__m128 v74; // xmm2
	__m128 v75; // xmm0
	__m128 v76; // xmm1
	__m128 v77; // xmm3
	__m128 v78; // xmm3
	__m128 v79; // xmm2
	__m128 v80; // xmm8
	__m128 v81; // xmm1
	__m128 v82; // xmm9
	__m128 v83; // xmm10
	__m128 v84; // xmm1
	__m128 v85; // xmm3
	__m128 v86; // xmm8
	float v87; // xmm1_4
	__m128 v88; // xmm2
	float v89; // xmm0_4
	__m128 v90; // xmm2
	__m128 v91; // xmm0
	__m128 v92; // xmm0
	__m128 v93; // xmm2
	unsigned int* result; // rax
	unsigned int* v95; // [rsp+0h] [rbp-278h]
	unsigned int* v96; // [rsp+8h] [rbp-270h]
	unsigned int* v97; // [rsp+10h] [rbp-268h]
	__m128* v98; // [rsp+18h] [rbp-260h]
	unsigned int* v99; // [rsp+20h] [rbp-258h]
	unsigned int* v100; // [rsp+28h] [rbp-250h]
	unsigned int* v101; // [rsp+30h] [rbp-248h]
	unsigned __int64 v102; // [rsp+38h] [rbp-240h]
	unsigned __int32* v103; // [rsp+40h] [rbp-238h]
	unsigned int* v104; // [rsp+48h] [rbp-230h]
	unsigned int* v105; // [rsp+50h] [rbp-228h]
	unsigned __int64 v106; // [rsp+58h] [rbp-220h]
	unsigned int* v107; // [rsp+60h] [rbp-218h]
	unsigned __int64 v108; // [rsp+68h] [rbp-210h]
	unsigned __int64 v109; // [rsp+70h] [rbp-208h]
	__int64 v110; // [rsp+78h] [rbp-200h]
	__m128 v111; // [rsp+80h] [rbp-1F8h]
	__m128 v112; // [rsp+90h] [rbp-1E8h]
	float* v113; // [rsp+A0h] [rbp-1D8h]
	float* v114; // [rsp+A8h] [rbp-1D0h]
	float v115; // [rsp+B0h] [rbp-1C8h]
	__m128 v116; // [rsp+C0h] [rbp-1B8h]
	__m128 v117; // [rsp+D0h] [rbp-1A8h]
	float v118; // [rsp+E0h] [rbp-198h]
	__m128 v119; // [rsp+F0h] [rbp-188h]
	float v120; // [rsp+100h] [rbp-178h]
	__m128 v121; // [rsp+110h] [rbp-168h]
	__m128 v122; // [rsp+120h] [rbp-158h]
	__m128 v123; // [rsp+130h] [rbp-148h]
	float v124; // [rsp+140h] [rbp-138h]
	__m128 v125; // [rsp+150h] [rbp-128h]
	__m128 v126; // [rsp+160h] [rbp-118h]
	__m128 v127; // [rsp+170h] [rbp-108h]
	__m128 v128; // [rsp+180h] [rbp-F8h]
	__int64 v129; // [rsp+280h] [rbp+8h]
	int v130; // [rsp+290h] [rbp+18h]
	unsigned int* v131; // [rsp+298h] [rbp+20h]

	v129 = a1;
	v2 = (__m128)0xC0000000;
	v3 = *(__m128**)(a1 + 312);
	v4 = *(_QWORD*)(a1 + 320);
	v6 = *(_QWORD*)(a1 + 16);
	v113 = *(float**)(a1 + 56);
	LODWORD(v7) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v8 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v9 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	LODWORD(v10) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v11 = *(_QWORD*)(a1 + 304);
	v12 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v124) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v115 = v7;
	v110 = *a2;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v6 + 24);
	v15 = v2;
	v16 = (__m128) * (unsigned int*)(v6 + 16);
	v122 = _mm_shuffle_ps(v15, v15, 0);
	v114 = *(float**)(a1 + 40);
	v95 = *(unsigned int**)(a1 + 272);
	v17 = 1.0 / (float)*((unsigned __int16*)a2 + 8);
	v98 = *(__m128**)(a1 + 280);
	v101 = *(unsigned int**)(a1 + 288);
	v16.m128_f32[0] = (float)(v16.m128_f32[0] - *(float*)(a1 + 572)) * v17;
	v100 = *(unsigned int**)(a1 + 296);
	LODWORD(v118) = _mm_shuffle_ps(v16, v16, 0).m128_u32[0];
	v18 = (__m128) * (unsigned int*)(v6 + 20);
	v19 = *(float**)(a1 + 48);
	v102 = *(_QWORD*)(a1 + 336);
	v18.m128_f32[0] = (float)(v18.m128_f32[0] - *(float*)(a1 + 576)) * v17;
	v106 = *(_QWORD*)(a1 + 344);
	LODWORD(v120) = _mm_shuffle_ps(v18, v18, 0).m128_u32[0];
	v108 = *(_QWORD*)(a1 + 352);
	v109 = *(_QWORD*)(a1 + 360);
	v20 = *(__m128*)(a1 + 368);
	v21 = *(__m128*)(a1 + 496);
	v22 = *(__m128*)(a1 + 512);
	v23 = *(__m128*)(a1 + 528);
	v24 = *(unsigned int**)(a1 + 144);
	v25 = *(unsigned int**)(a1 + 160);
	v26 = *(unsigned int**)(a1 + 168);
	v123 = *(__m128*)(a1 + 384);
	v128 = v20;
	v27 = *(unsigned __int32**)(a1 + 192);
	v28 = *(unsigned __int32**)(a1 + 200);
	v29 = *(_QWORD*)(a1 + 208);
	v127 = *(__m128*)(a1 + 400);
	v131 = *(unsigned int**)(a1 + 224);
	v125 = *(__m128*)(a1 + 416);
	v121 = *(__m128*)(a1 + 432);
	v103 = *(unsigned __int32**)(a1 + 184);
	v119 = *(__m128*)(a1 + 448);
	v105 = *(unsigned int**)(a1 + 216);
	v107 = *(unsigned int**)(a1 + 152);
	v116 = *(__m128*)(a1 + 464);
	v117 = *(__m128*)(a1 + 480);
	v30 = *(__m128*)(a1 + 544);
	v31 = *(__m128**)(a1 + 176);
	v96 = *(unsigned int**)(a1 + 248);
	v111 = v30;
	v97 = *(unsigned int**)(a1 + 256);
	v104 = *(unsigned int**)(a1 + 232);
	v32 = *(_QWORD*)(a1 + 240);
	v99 = *(unsigned int**)(a1 + 264);
	v33 = *(_QWORD*)(a1 + 328);
	v130 = *((unsigned __int16*)a2 + 9);
	if (*((_WORD*)a2 + 9))
	{
		v34 = *(unsigned int**)(a1 + 272);
		do
		{
			v35 = (__m128) * v24;
			v36 = (__m128) * v25;
			v24 += 4;
			if ((unsigned __int64)v24 >= v102)
				v24 = v34;
			v37 = (__m128) * v107;
			v38 = (__m128) * v26;
			v107 += 4;
			if ((unsigned __int64)v107 >= v102)
				v107 = v34 + 1;
			v25 += 4;
			if ((unsigned __int64)v25 >= v102)
				v25 = v34 + 2;
			v26 += 4;
			if ((unsigned __int64)v26 >= v102)
				v26 = v34 + 3;
			v39 = (__m128) * v28;
			++v31;
			v40 = _mm_unpacklo_ps(v35, v37);
			v41 = (__m128) * v103;
			v42 = v131;
			v43 = _mm_movelh_ps(v40, _mm_unpacklo_ps(v36, v38));
			v44 = _mm_mul_ps(v21, v121);
			v45 = _mm_mul_ps(v43, v20);
			v46 = (__m128)v31[-1].m128_u32[0];
			if ((unsigned __int64)v31 >= v106)
				v31 = v98;
			v21 = _mm_add_ps(v45, v44);
			v47 = (__m128) * v27;
			v103 += 4;
			v48 = _mm_mul_ps(v21, (__m128)xmmword_1409AA0F0);
			if ((unsigned __int64)v103 >= v106)
			{
				v103 = &v98->m128_u32[1];
				v42 = v131;
			}
			v27 += 4;
			if ((unsigned __int64)v27 >= v106)
				v27 = &v98->m128_u32[2];
			v28 += 4;
			if ((unsigned __int64)v28 >= v106)
				v28 = &v98->m128_u32[3];
			v29 += 16i64;
			v49 = _mm_unpacklo_ps(v46, v41);
			v50 = (__m128) * v105;
			v51 = v104;
			v52 = _mm_mul_ps(_mm_movelh_ps(v49, _mm_unpacklo_ps(v47, v39)), v123);
			v53 = _mm_mul_ps(v22, v119);
			v54 = (__m128) * v104;
			v55 = v52;
			v56 = (__m128) * (unsigned int*)(v29 - 16);
			if (v29 >= v108)
				v29 = (unsigned __int64)v101;
			v22 = _mm_add_ps(v55, v53);
			v57 = _mm_add_ps(v22, v21);
			v58 = _mm_add_ps(v48, _mm_mul_ps(v22, (__m128)xmmword_1409AA0F0));
			v59 = (__m128) * v42;
			v60 = (unsigned __int64)(v105 + 4) < v108;
			v105 += 4;
			v61 = v131;
			if (!v60)
			{
				v105 = v101 + 1;
				v61 = v131;
			}
			v131 = v61 + 4;
			if ((unsigned __int64)(v61 + 4) >= v108)
				v131 = v101 + 2;
			v104 += 4;
			if ((unsigned __int64)(v51 + 4) >= v108)
				v104 = v101 + 3;
			v32 += 16i64;
			v62 = _mm_unpacklo_ps(v56, v50);
			v63 = (__m128) * v96;
			v64 = _mm_mul_ps(_mm_movelh_ps(v62, _mm_unpacklo_ps(v59, v54)), v127);
			v65 = _mm_mul_ps(v23, v116);
			v66 = v64;
			v67 = (__m128) * (unsigned int*)(v32 - 16);
			if (v32 >= v109)
				v32 = (unsigned __int64)v100;
			v23 = _mm_add_ps(v66, v65);
			v96 += 4;
			v68 = _mm_add_ps(v57, v23);
			v69 = _mm_add_ps(v58, _mm_mul_ps(v23, (__m128)xmmword_1409AA0F0));
			v70 = (__m128) * v97;
			v71 = (__m128) * v99;
			if ((unsigned __int64)v96 >= v109)
				v96 = v100 + 1;
			v60 = (unsigned __int64)(v97 + 4) < v109;
			v97 += 4;
			v34 = v95;
			if (!v60)
				v97 = v100 + 2;
			v99 += 4;
			if ((unsigned __int64)v99 >= v109)
				v99 = v100 + 3;
			v8.m128_f32[0] = v8.m128_f32[0] + v118;
			v9.m128_f32[0] = v9.m128_f32[0] + v120;
			v110 += 4i64;
			v72 = _mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v67, v63), _mm_unpacklo_ps(v70, v71)), v125);
			v112 = v8;
			v126 = v9;
			v7 = *(float*)(v110 - 4);
			v111 = _mm_add_ps(v72, _mm_mul_ps(v111, v117));
			v73 = _mm_add_ps(_mm_mul_ps(v111, (__m128)xmmword_1409AA0F0), v69);
			v74 = _mm_add_ps(v73, _mm_movehl_ps(v73, v73));
			v75 = _mm_add_ps(v111, v68);
			v76 = _mm_add_ps(_mm_movehl_ps(v75, v75), v75);
			v77 = _mm_add_ps(_mm_shuffle_ps(v76, v76, 85), v76);
			v76.m128_f32[0] = _mm_shuffle_ps(v74, v74, 85).m128_f32[0] + v74.m128_f32[0];
			v78 = _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v122);
			v79 = _mm_add_ps(v23, v78);
			v80 = _mm_add_ps(v78, v21);
			*(float*)(v110 - 4) = (float)(v7 * v8.m128_f32[0]) + (float)(v76.m128_f32[0] * v9.m128_f32[0]);
			v81 = _mm_add_ps(v111, v78);
			v82 = _mm_shuffle_ps(v81, _mm_shuffle_ps(v81, v80, 15), 201);
			v83 = _mm_shuffle_ps(v79, _mm_shuffle_ps(v79, v81, 15), 201);
			v84 = _mm_add_ps(v22, v78);
			v85 = _mm_shuffle_ps(v84, _mm_shuffle_ps(v84, v79, 15), 201);
			v86 = _mm_shuffle_ps(v80, _mm_shuffle_ps(v80, v84, 15), 201);
			v10 = (float)((float)(v124 * v10) + v7) - v115;
			v115 = v7;
			if (v114)
			{
				v87 = *v19;
				*v19++ = v10;
				if (v19 == v113)
					v19 = v114;
			}
			else
			{
				v87 = v10;
			}
			v11 += 16i64;
			v88 = v12;
			v89 = v13 * v14;
			v14 = v87;
			v88.m128_f32[0] = (float)(v12.m128_f32[0] * v87) + v89;
			v90 = _mm_shuffle_ps(v88, v88, 0);
			v91 = _mm_add_ps(v90, v86);
			v20 = v128;
			*(__m128*)(v11 - 16) = v91;
			*v3 = _mm_add_ps(v90, v85);
			if (v11 >= v102)
				v11 = (unsigned __int64)v95;
			++v3;
			v92 = _mm_add_ps(v90, v83);
			if ((unsigned __int64)v3 >= v106)
				v3 = v98;
			v4 += 16i64;
			v93 = _mm_add_ps(v90, v82);
			v8 = v112;
			v9 = v126;
			*(__m128*)(v4 - 16) = v92;
			if (v4 >= v108)
				v4 = (unsigned __int64)v101;
			v33 += 16i64;
			*(__m128*)(v33 - 16) = v93;
			if (v33 >= v109)
				v33 = (unsigned __int64)v100;
			--v130;
		} while (v130);
		v30 = v111;
		a1 = v129;
	}
	*(float*)(a1 + 76) = v14;
	*(float*)(a1 + 560) = v7;
	*(float*)(a1 + 564) = v10;
	*(_QWORD*)(a1 + 48) = v19;
	*(_QWORD*)(a1 + 144) = v24;
	*(__m128*)(a1 + 512) = v22;
	*(__m128*)(a1 + 528) = v23;
	*(__m128*)(a1 + 496) = v21;
	*(_QWORD*)(a1 + 152) = v107;
	*(_QWORD*)(a1 + 320) = v4;
	*(__m128*)(a1 + 544) = v30;
	*(_QWORD*)(a1 + 184) = v103;
	*(_QWORD*)(a1 + 216) = v105;
	*(_QWORD*)(a1 + 304) = v11;
	*(_QWORD*)(a1 + 224) = v131;
	*(_QWORD*)(a1 + 312) = v3;
	*(_QWORD*)(a1 + 232) = v104;
	*(_QWORD*)(a1 + 328) = v33;
	*(_QWORD*)(a1 + 248) = v96;
	*(_QWORD*)(a1 + 160) = v25;
	*(_QWORD*)(a1 + 256) = v97;
	result = v99;
	*(_QWORD*)(a1 + 168) = v26;
	*(_QWORD*)(a1 + 176) = v31;
	*(_QWORD*)(a1 + 192) = v27;
	*(_QWORD*)(a1 + 200) = v28;
	*(_QWORD*)(a1 + 264) = v99;
	*(_QWORD*)(a1 + 208) = v29;
	*(_QWORD*)(a1 + 240) = v32;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;

