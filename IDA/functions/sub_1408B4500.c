#include "../winhttp.h"

//----- (00000001408B4500) ----------------------------------------------------
unsigned int* __fastcall sub_1408B4500(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm1
	float* v3; // r11
	unsigned int* v4; // r13
	unsigned __int64 v5; // r9
	unsigned int* v6; // rdi
	float v8; // xmm4_4
	float v9; // xmm7_4
	__int64 v10; // rdx
	__m128 v11; // xmm12
	float v12; // xmm10_4
	float v13; // xmm13_4
	float v14; // xmm14_4
	float v15; // xmm15_4
	__m128 v16; // xmm0
	__m128 v17; // xmm1
	float v18; // xmm2_4
	__m128 v19; // xmm0
	unsigned int* v20; // rax
	unsigned __int64 v21; // rdx
	__m128 v22; // xmm8
	unsigned int* v23; // rsi
	unsigned __int64 v24; // rbx
	__m128 v25; // xmm5
	__m128 v26; // xmm6
	__m128 v27; // xmm9
	unsigned int* v28; // rbp
	unsigned int* v29; // r14
	unsigned __int64 v30; // r15
	unsigned int* v31; // r12
	unsigned __int64 v32; // r10
	unsigned int* v33; // r8
	__m128 v34; // xmm1
	__m128 v35; // xmm0
	__m128 v36; // xmm3
	__m128 v37; // xmm4
	__m128 v38; // xmm2
	__m128 v39; // xmm1
	__m128 v40; // xmm0
	__m128 v41; // xmm5
	__m128 v42; // xmm1
	__m128 v43; // xmm0
	bool v44; // cf
	unsigned int* v45; // rcx
	__m128 v46; // xmm3
	__m128 v47; // xmm6
	__m128 v48; // xmm8
	__m128 v49; // xmm0
	__m128 v50; // xmm1
	__m128 v51; // xmm2
	__m128 v52; // xmm4
	unsigned int* v53; // rcx
	__m128 v54; // xmm1
	__m128 v55; // xmm3
	__m128 v56; // xmm0
	__m128 v57; // xmm2
	__m128 v58; // xmm2
	__m128 v59; // xmm2
	__m128 v60; // xmm0
	__m128 v61; // xmm1
	__m128 v62; // xmm3
	__m128 v63; // xmm3
	__m128 v64; // xmm2
	__m128 v65; // xmm8
	__m128 v66; // xmm1
	__m128 v67; // xmm9
	__m128 v68; // xmm3
	__m128 v69; // xmm8
	float v70; // xmm1_4
	__m128 v71; // xmm2
	float v72; // xmm0_4
	__m128 v73; // xmm1
	__m128 v74; // xmm2
	__m128 v75; // xmm0
	__m128 v76; // xmm1
	unsigned int* result; // rax
	unsigned int* v78; // [rsp+0h] [rbp-208h]
	unsigned int* v79; // [rsp+8h] [rbp-200h]
	unsigned int* v80; // [rsp+10h] [rbp-1F8h]
	unsigned __int64 v81; // [rsp+18h] [rbp-1F0h]
	unsigned int* v82; // [rsp+20h] [rbp-1E8h]
	unsigned int* v83; // [rsp+28h] [rbp-1E0h]
	unsigned __int64 v84; // [rsp+30h] [rbp-1D8h]
	unsigned __int64 v85; // [rsp+38h] [rbp-1D0h]
	__int64 v86; // [rsp+40h] [rbp-1C8h]
	__m128 v87; // [rsp+50h] [rbp-1B8h]
	float* v88; // [rsp+60h] [rbp-1A8h]
	float* v89; // [rsp+68h] [rbp-1A0h]
	float v90; // [rsp+70h] [rbp-198h]
	__m128 v91; // [rsp+80h] [rbp-188h]
	float v92; // [rsp+90h] [rbp-178h]
	__m128 v93; // [rsp+A0h] [rbp-168h]
	float v94; // [rsp+B0h] [rbp-158h]
	__m128 v95; // [rsp+C0h] [rbp-148h]
	__m128 v96; // [rsp+D0h] [rbp-138h]
	__m128 v97; // [rsp+E0h] [rbp-128h]
	float v98; // [rsp+F0h] [rbp-118h]
	__m128 v99; // [rsp+100h] [rbp-108h]
	__m128 v100; // [rsp+110h] [rbp-F8h]
	__int64 v101; // [rsp+210h] [rbp+8h]
	int v102; // [rsp+220h] [rbp+18h]
	unsigned int* v103; // [rsp+228h] [rbp+20h]

	v101 = a1;
	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = *(unsigned int**)(a1 + 272);
	v5 = *(_QWORD*)(a1 + 312);
	v6 = *(unsigned int**)(a1 + 160);
	LODWORD(v8) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v9) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v10 = *(_QWORD*)(a1 + 16);
	v11 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v15) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	v103 = *(unsigned int**)(a1 + 152);
	LODWORD(v98) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v90 = v8;
	v86 = *a2;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v10 + 24);
	v16 = v2;
	v17 = (__m128) * (unsigned int*)(v10 + 16);
	v96 = _mm_shuffle_ps(v16, v16, 0);
	v88 = *(float**)(a1 + 40);
	v83 = *(unsigned int**)(a1 + 280);
	v18 = 1.0 / (float)*((unsigned __int16*)a2 + 8);
	v82 = *(unsigned int**)(a1 + 288);
	v81 = *(_QWORD*)(a1 + 336);
	v17.m128_f32[0] = (float)(v17.m128_f32[0] - *(float*)(a1 + 572)) * v18;
	v84 = *(_QWORD*)(a1 + 344);
	LODWORD(v92) = _mm_shuffle_ps(v17, v17, 0).m128_u32[0];
	v19 = (__m128) * (unsigned int*)(v10 + 20);
	v85 = *(_QWORD*)(a1 + 352);
	v20 = *(unsigned int**)(a1 + 144);
	v89 = *(float**)(a1 + 56);
	v21 = *(_QWORD*)(a1 + 304);
	v19.m128_f32[0] = (float)(v19.m128_f32[0] - *(float*)(a1 + 576)) * v18;
	LODWORD(v94) = _mm_shuffle_ps(v19, v19, 0).m128_u32[0];
	v22 = *(__m128*)(a1 + 368);
	v23 = *(unsigned int**)(a1 + 168);
	v24 = *(_QWORD*)(a1 + 176);
	v25 = *(__m128*)(a1 + 496);
	v26 = *(__m128*)(a1 + 512);
	v27 = *(__m128*)(a1 + 528);
	v28 = *(unsigned int**)(a1 + 192);
	v29 = *(unsigned int**)(a1 + 200);
	v30 = *(_QWORD*)(a1 + 208);
	v93 = *(__m128*)(a1 + 384);
	v100 = v22;
	v31 = *(unsigned int**)(a1 + 224);
	v79 = *(unsigned int**)(a1 + 184);
	v91 = *(__m128*)(a1 + 400);
	v80 = *(unsigned int**)(a1 + 216);
	v102 = *((unsigned __int16*)a2 + 9);
	v95 = *(__m128*)(a1 + 432);
	v97 = *(__m128*)(a1 + 448);
	v78 = *(unsigned int**)(a1 + 232);
	v32 = *(_QWORD*)(a1 + 320);
	v99 = *(__m128*)(a1 + 464);
	if (*((_WORD*)a2 + 9))
	{
		v33 = *(unsigned int**)(a1 + 152);
		do
		{
			v34 = (__m128) * v20;
			v35 = (__m128) * v6;
			v20 += 4;
			if ((unsigned __int64)v20 >= v81)
				v20 = v4;
			v103 = v33 + 4;
			v36 = (__m128) * v23;
			if ((unsigned __int64)(v33 + 4) >= v81)
				v103 = v4 + 1;
			v6 += 4;
			if ((unsigned __int64)v6 >= v81)
				v6 = v4 + 2;
			v23 += 4;
			if ((unsigned __int64)v23 >= v81)
				v23 = v4 + 3;
			v37 = (__m128) * v29;
			v24 += 16i64;
			v38 = (__m128) * v79;
			v39 = _mm_movelh_ps(_mm_unpacklo_ps(v34, (__m128) * v33), _mm_unpacklo_ps(v35, v36));
			v40 = _mm_mul_ps(v25, v95);
			v41 = _mm_mul_ps(v39, v22);
			v42 = (__m128) * (unsigned int*)(v24 - 16);
			if (v24 >= v84)
				v24 = (unsigned __int64)v83;
			v25 = _mm_add_ps(v41, v40);
			v43 = (__m128) * v28;
			v44 = (unsigned __int64)(v79 + 4) < v84;
			v79 += 4;
			v45 = v78;
			v46 = _mm_mul_ps(v25, (__m128)xmmword_1409AA0F0);
			if (!v44)
			{
				v79 = v83 + 1;
				v45 = v78;
			}
			v28 += 4;
			if ((unsigned __int64)v28 >= v84)
				v28 = v83 + 2;
			v29 += 4;
			if ((unsigned __int64)v29 >= v84)
				v29 = v83 + 3;
			v47 = _mm_mul_ps(v26, v97);
			v48 = (__m128) * v45;
			v30 += 16i64;
			v49 = _mm_unpacklo_ps(v43, v37);
			v50 = _mm_unpacklo_ps(v42, v38);
			v51 = (__m128) * (unsigned int*)(v30 - 16);
			if (v30 >= v85)
				v30 = (unsigned __int64)v82;
			v52 = (__m128) * v80;
			v44 = (unsigned __int64)(v80 + 4) < v85;
			v80 += 4;
			v53 = v78;
			v26 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(v50, v49), v93), v47);
			v54 = _mm_add_ps(v26, v25);
			v55 = _mm_add_ps(v46, _mm_mul_ps(v26, (__m128)xmmword_1409AA0F0));
			v56 = (__m128) * v31;
			if (!v44)
			{
				v80 = v82 + 1;
				v53 = v78;
			}
			v31 += 4;
			if ((unsigned __int64)v31 >= v85)
				v31 = v82 + 2;
			v78 = v53 + 4;
			if ((unsigned __int64)(v53 + 4) >= v85)
				v78 = v82 + 3;
			v14 = v14 + v92;
			v15 = v15 + v94;
			v86 += 4i64;
			v57 = _mm_unpacklo_ps(v51, v52);
			v8 = *(float*)(v86 - 4);
			v87 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(v57, _mm_unpacklo_ps(v56, v48)), v91), _mm_mul_ps(v27, v99));
			v58 = _mm_add_ps(_mm_mul_ps(v87, (__m128)xmmword_1409AA0F0), v55);
			v59 = _mm_add_ps(v58, _mm_movehl_ps(v58, v58));
			v60 = _mm_add_ps(v87, v54);
			v61 = _mm_add_ps(_mm_movehl_ps(v60, v60), v60);
			v62 = _mm_add_ps(_mm_shuffle_ps(v61, v61, 85), v61);
			v61.m128_f32[0] = _mm_shuffle_ps(v59, v59, 85).m128_f32[0] + v59.m128_f32[0];
			v63 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v96);
			v64 = _mm_add_ps(v87, v63);
			v65 = _mm_add_ps(v63, v25);
			*(float*)(v86 - 4) = (float)(v8 * v14) + (float)(v61.m128_f32[0] * v15);
			v66 = _mm_add_ps(v26, v63);
			v67 = _mm_shuffle_ps(v64, _mm_shuffle_ps(v64, v65, 15), 201);
			v68 = _mm_shuffle_ps(v66, _mm_shuffle_ps(v66, v64, 15), 201);
			v69 = _mm_shuffle_ps(v65, _mm_shuffle_ps(v65, v66, 15), 201);
			v9 = (float)((float)(v98 * v9) + v8) - v90;
			v90 = v8;
			if (v88)
			{
				v70 = *v3;
				*v3++ = v9;
				if (v3 == v89)
					v3 = v88;
			}
			else
			{
				v70 = v9;
			}
			v33 = v103;
			v21 += 16i64;
			v71 = v11;
			v72 = v13 * v12;
			v12 = v70;
			v71.m128_f32[0] = (float)(v11.m128_f32[0] * v70) + v72;
			v73 = _mm_shuffle_ps(v71, v71, 0);
			v74 = _mm_add_ps(v73, v67);
			v27 = v87;
			v75 = _mm_add_ps(v73, v69);
			v22 = v100;
			v76 = _mm_add_ps(v73, v68);
			*(__m128*)(v21 - 16) = v75;
			if (v21 >= v81)
				v21 = (unsigned __int64)v4;
			v5 += 16i64;
			*(__m128*)(v5 - 16) = v76;
			if (v5 >= v84)
				v5 = (unsigned __int64)v83;
			v32 += 16i64;
			*(__m128*)(v32 - 16) = v74;
			if (v32 >= v85)
				v32 = (unsigned __int64)v82;
			--v102;
		} while (v102);
		a1 = v101;
	}
	*(float*)(a1 + 76) = v12;
	*(float*)(a1 + 560) = v8;
	*(float*)(a1 + 564) = v9;
	*(_QWORD*)(a1 + 48) = v3;
	*(_QWORD*)(a1 + 144) = v20;
	*(__m128*)(a1 + 512) = v26;
	*(__m128*)(a1 + 528) = v27;
	*(__m128*)(a1 + 496) = v25;
	*(_QWORD*)(a1 + 304) = v21;
	*(_QWORD*)(a1 + 312) = v5;
	*(_QWORD*)(a1 + 152) = v103;
	*(_QWORD*)(a1 + 320) = v32;
	*(_QWORD*)(a1 + 184) = v79;
	*(_QWORD*)(a1 + 160) = v6;
	*(_QWORD*)(a1 + 216) = v80;
	result = v78;
	*(_QWORD*)(a1 + 168) = v23;
	*(_QWORD*)(a1 + 176) = v24;
	*(_QWORD*)(a1 + 192) = v28;
	*(_QWORD*)(a1 + 200) = v29;
	*(_QWORD*)(a1 + 232) = v78;
	*(_QWORD*)(a1 + 208) = v30;
	*(_QWORD*)(a1 + 224) = v31;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;

