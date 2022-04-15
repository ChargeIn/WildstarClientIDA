//----- (00000001408B5FF0) ----------------------------------------------------
unsigned int* __fastcall sub_1408B5FF0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // r11
	unsigned int* v4; // r13
	__m128* v5; // r9
	__m128* v6; // r10
	unsigned int* v7; // r12
	unsigned int* v8; // rsi
	float v9; // xmm5_4
	__m128 v10; // xmm10
	float v11; // xmm9_4
	unsigned int* v12; // rbp
	unsigned __int64 v13; // rbx
	float v14; // xmm11_4
	__int64 v16; // rdx
	__m128 v17; // xmm14
	float v18; // xmm15_4
	int v19; // eax
	unsigned int* v20; // r8
	__m128 v21; // xmm0
	__m128 v22; // xmm1
	__m128 v23; // xmm0
	unsigned int* v24; // rdx
	__m128 v25; // xmm4
	unsigned int* v26; // r14
	unsigned int* v27; // r15
	unsigned __int64 v28; // rdi
	__m128 v29; // xmm6
	__m128 v30; // xmm7
	__m128 v31; // xmm8
	unsigned int* v32; // rax
	__m128 v33; // xmm0
	unsigned __int64 v34; // rax
	__m128 v35; // xmm1
	__m128 v36; // xmm2
	__m128 v37; // xmm0
	__m128 v38; // xmm3
	__m128 v39; // xmm5
	__m128 v40; // xmm1
	__m128 v41; // xmm2
	__m128 v42; // xmm0
	__m128 v43; // xmm7
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	bool v46; // cf
	unsigned int* v47; // rcx
	__m128 v48; // xmm3
	__m128 v49; // xmm4
	__m128 v50; // xmm8
	__m128 v51; // xmm0
	__m128 v52; // xmm5
	unsigned int* v53; // rax
	__m128 v54; // xmm1
	__m128 v55; // xmm2
	__m128 v56; // xmm6
	__m128 v57; // xmm1
	__m128 v58; // xmm3
	__m128 v59; // xmm4
	__m128 v60; // xmm0
	float* v61; // rcx
	float* v62; // rax
	__m128 v63; // xmm0
	float v64; // xmm6_4
	__int64 v65; // rax
	float v66; // xmm5_4
	__m128 v67; // xmm2
	__m128 v68; // xmm2
	__m128 v69; // xmm3
	__m128 v70; // xmm3
	__m128 v71; // xmm0
	__m128 v72; // xmm1
	__m128 v73; // xmm0
	__m128 v74; // xmm4
	__m128 v75; // xmm4
	__m128 v76; // xmm2
	__m128 v77; // xmm3
	__m128 v78; // xmm1
	__m128 v79; // xmm10
	__m128 v80; // xmm4
	__m128 v81; // xmm3
	float v82; // xmm1_4
	__m128 v83; // xmm2
	float v84; // xmm0_4
	__m128 v85; // xmm0
	__m128 v86; // xmm2
	__m128 v87; // xmm1
	unsigned int* result; // rax
	unsigned int* v89; // [rsp+0h] [rbp-238h]
	unsigned int* v90; // [rsp+8h] [rbp-230h]
	__m128* v91; // [rsp+10h] [rbp-228h]
	unsigned int* v92; // [rsp+18h] [rbp-220h]
	unsigned __int64 v93; // [rsp+20h] [rbp-218h]
	unsigned int* v94; // [rsp+28h] [rbp-210h]
	float* v95; // [rsp+30h] [rbp-208h]
	unsigned __int64 v96; // [rsp+38h] [rbp-200h]
	__m128 v97; // [rsp+40h] [rbp-1F8h]
	unsigned __int64 v98; // [rsp+50h] [rbp-1E8h]
	__m128* v99; // [rsp+58h] [rbp-1E0h]
	float* v100; // [rsp+60h] [rbp-1D8h]
	__m128 v101; // [rsp+70h] [rbp-1C8h]
	float* v102; // [rsp+80h] [rbp-1B8h]
	float v103; // [rsp+90h] [rbp-1A8h]
	__m128 v104; // [rsp+A0h] [rbp-198h]
	float v105; // [rsp+B0h] [rbp-188h]
	__m128 v106; // [rsp+C0h] [rbp-178h]
	__m128 v107; // [rsp+D0h] [rbp-168h]
	float v108; // [rsp+E0h] [rbp-158h]
	float v109; // [rsp+F0h] [rbp-148h]
	__m128 v110; // [rsp+100h] [rbp-138h]
	__m128 v111; // [rsp+110h] [rbp-128h]
	__m128 v112; // [rsp+120h] [rbp-118h]
	__m128 v113; // [rsp+130h] [rbp-108h]
	__m128 v114; // [rsp+140h] [rbp-F8h]
	__int64 v115; // [rsp+240h] [rbp+8h]
	int v117; // [rsp+258h] [rbp+20h]

	v115 = a1;
	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = *(unsigned int**)(a1 + 272);
	v5 = *(__m128**)(a1 + 312);
	v6 = *(__m128**)(a1 + 320);
	v7 = *(unsigned int**)(a1 + 152);
	v8 = *(unsigned int**)(a1 + 160);
	LODWORD(v108) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v9) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v10 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v12 = *(unsigned int**)(a1 + 168);
	v13 = *(_QWORD*)(a1 + 176);
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v16 = *(_QWORD*)(a1 + 16);
	v17 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v18) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v103 = v9;
	v95 = *(float**)a2;
	v19 = *(unsigned __int16*)(a2 + 16);
	v20 = *(unsigned int**)(a1 + 304);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v16 + 24);
	v21 = v2;
	v22 = (__m128) * (unsigned int*)(v16 + 16);
	v106 = _mm_shuffle_ps(v21, v21, 0);
	v101 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v100 = *(float**)(a1 + 40);
	v99 = *(__m128**)(a1 + 280);
	v91 = *(__m128**)(a1 + 288);
	v98 = *(_QWORD*)(a1 + 336);
	v22.m128_f32[0] = (float)(v22.m128_f32[0] - *(float*)(a1 + 572)) * (float)(1.0 / (float)v19);
	v93 = *(_QWORD*)(a1 + 344);
	LODWORD(v109) = _mm_shuffle_ps(v22, v22, 0).m128_u32[0];
	v23 = (__m128) * (unsigned int*)(v16 + 20);
	v96 = *(_QWORD*)(a1 + 352);
	v102 = *(float**)(a1 + 56);
	v24 = *(unsigned int**)(a1 + 144);
	v23.m128_f32[0] = (float)(v23.m128_f32[0] - *(float*)(a1 + 576)) * (float)(1.0 / (float)v19);
	LODWORD(v105) = _mm_shuffle_ps(v23, v23, 0).m128_u32[0];
	v25 = *(__m128*)(a1 + 368);
	v26 = *(unsigned int**)(a1 + 192);
	v27 = *(unsigned int**)(a1 + 200);
	v28 = *(_QWORD*)(a1 + 208);
	v29 = *(__m128*)(a1 + 432);
	v30 = *(__m128*)(a1 + 496);
	v31 = *(__m128*)(a1 + 512);
	v94 = *(unsigned int**)(a1 + 184);
	v92 = *(unsigned int**)(a1 + 216);
	v107 = *(__m128*)(a1 + 384);
	v112 = v25;
	v89 = *(unsigned int**)(a1 + 224);
	v104 = *(__m128*)(a1 + 400);
	v114 = v29;
	v90 = *(unsigned int**)(a1 + 232);
	v113 = *(__m128*)(a1 + 448);
	v117 = *(unsigned __int16*)(a2 + 18);
	v32 = v89;
	v111 = *(__m128*)(a1 + 464);
	v33 = *(__m128*)(a1 + 528);
	v97 = v33;
	if (*(_WORD*)(a2 + 18))
	{
		v34 = *(_QWORD*)(a1 + 336);
		do
		{
			v35 = (__m128) * v24;
			v36 = (__m128) * v7;
			v37 = (__m128) * v8;
			v24 += 4;
			if ((unsigned __int64)v24 >= v34)
				v24 = v4;
			v7 += 4;
			v38 = (__m128) * v12;
			if ((unsigned __int64)v7 >= v34)
				v7 = v4 + 1;
			v8 += 4;
			if ((unsigned __int64)v8 >= v34)
				v8 = v4 + 2;
			v12 += 4;
			if ((unsigned __int64)v12 >= v34)
				v12 = v4 + 3;
			v39 = (__m128) * v27;
			v13 += 16i64;
			v40 = _mm_movelh_ps(_mm_unpacklo_ps(v35, v36), _mm_unpacklo_ps(v37, v38));
			v41 = (__m128) * v94;
			v42 = _mm_mul_ps(v30, v29);
			v43 = _mm_mul_ps(v40, v25);
			v44 = (__m128) * (unsigned int*)(v13 - 16);
			if (v13 >= v93)
				v13 = (unsigned __int64)v99;
			v30 = _mm_add_ps(v43, v42);
			v45 = (__m128) * v26;
			v46 = (unsigned __int64)(v94 + 4) < v93;
			v94 += 4;
			v47 = v89;
			v48 = _mm_mul_ps(v30, (__m128)xmmword_1409AA0F0);
			v49 = _mm_mul_ps(v30, (__m128)xmmword_1409AA100);
			if (!v46)
			{
				v94 = &v99->m128_u32[1];
				v47 = v89;
			}
			v26 += 4;
			if ((unsigned __int64)v26 >= v93)
				v26 = &v99->m128_u32[2];
			v27 += 4;
			if ((unsigned __int64)v27 >= v93)
				v27 = &v99->m128_u32[3];
			v50 = _mm_mul_ps(v31, v113);
			v51 = _mm_unpacklo_ps(v45, v39);
			v28 += 16i64;
			v52 = (__m128) * v92;
			v53 = v90;
			v54 = _mm_unpacklo_ps(v44, v41);
			v55 = (__m128) * (unsigned int*)(v28 - 16);
			if (v28 >= v96)
				v28 = (unsigned __int64)v91;
			v56 = (__m128) * v90;
			v31 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(v54, v51), v107), v50);
			v57 = _mm_add_ps(v31, v30);
			v58 = _mm_add_ps(v48, _mm_mul_ps(v31, (__m128)xmmword_1409AA0F0));
			v59 = _mm_add_ps(v49, _mm_mul_ps(v31, (__m128)xmmword_1409AA100));
			v60 = (__m128) * v47;
			v92 += 4;
			if ((unsigned __int64)v92 >= v96)
			{
				v92 = &v91->m128_u32[1];
				v53 = v90;
			}
			v89 += 4;
			if ((unsigned __int64)v89 >= v96)
				v89 = &v91->m128_u32[2];
			v90 = v53 + 4;
			if ((unsigned __int64)(v53 + 4) >= v96)
				v90 = &v91->m128_u32[3];
			v10.m128_f32[0] = v10.m128_f32[0] + v109;
			v61 = v95;
			v62 = v95;
			v63 = _mm_unpacklo_ps(v60, v56);
			++v95;
			v64 = *v62;
			v110 = v10;
			v65 = *(unsigned __int16*)(a2 + 16);
			v97 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v55, v52), v63), v104), _mm_mul_ps(v97, v111));
			v66 = v61[v65];
			v67 = _mm_add_ps(_mm_mul_ps(v97, (__m128)xmmword_1409AA0F0), v58);
			v68 = _mm_add_ps(v67, _mm_movehl_ps(v67, v67));
			v69 = _mm_add_ps(_mm_mul_ps(v97, (__m128)xmmword_1409AA100), v59);
			v70 = _mm_add_ps(v69, _mm_movehl_ps(v69, v69));
			v71 = _mm_add_ps(v97, v57);
			v72 = _mm_add_ps(_mm_movehl_ps(v71, v71), v71);
			v73 = v101;
			v73.m128_f32[0] = v101.m128_f32[0] + v105;
			v101 = v73;
			v74 = _mm_add_ps(_mm_shuffle_ps(v72, v72, 85), v72);
			v75 = _mm_mul_ps(_mm_shuffle_ps(v74, v74, 0), v106);
			v72.m128_f32[0] = (float)(_mm_shuffle_ps(v68, v68, 85).m128_f32[0] + v68.m128_f32[0]) * v73.m128_f32[0];
			v76 = _mm_add_ps(v97, v75);
			*v61 = (float)(v64 * v10.m128_f32[0]) + v72.m128_f32[0];
			v72.m128_f32[0] = _mm_shuffle_ps(v70, v70, 85).m128_f32[0] + v70.m128_f32[0];
			v77 = _mm_add_ps(v75, v30);
			v61[v65] = (float)(v66 * v10.m128_f32[0]) + (float)(v72.m128_f32[0] * v73.m128_f32[0]);
			v78 = _mm_add_ps(v31, v75);
			v79 = _mm_shuffle_ps(v76, _mm_shuffle_ps(v76, v77, 15), 201);
			v80 = _mm_shuffle_ps(v78, _mm_shuffle_ps(v78, v76, 15), 201);
			v81 = _mm_shuffle_ps(v77, _mm_shuffle_ps(v77, v78, 15), 201);
			v9 = v64 + v66;
			v11 = (float)((float)(v108 * v11) + v9) - v103;
			v103 = v9;
			if (v100)
			{
				v82 = *v3;
				*v3++ = v11;
				if (v3 == v102)
					v3 = v100;
			}
			else
			{
				v82 = v11;
			}
			v34 = v98;
			v29 = v114;
			v20 += 4;
			v83 = v17;
			v84 = v18 * v14;
			v14 = v82;
			v83.m128_f32[0] = (float)(v17.m128_f32[0] * v82) + v84;
			v85 = _mm_shuffle_ps(v83, v83, 0);
			v86 = _mm_add_ps(v85, v79);
			v10 = v110;
			v87 = _mm_add_ps(v85, v80);
			v25 = v112;
			*((__m128*)v20 - 1) = _mm_add_ps(v85, v81);
			if ((unsigned __int64)v20 >= v98)
				v20 = v4;
			*v5++ = v87;
			if ((unsigned __int64)v5 >= v93)
				v5 = v99;
			*v6++ = v86;
			if ((unsigned __int64)v6 >= v96)
				v6 = v91;
			--v117;
		} while (v117);
		v33 = v97;
		a1 = v115;
		v32 = v89;
	}
	*(float*)(a1 + 76) = v14;
	*(float*)(a1 + 560) = v9;
	*(float*)(a1 + 564) = v11;
	*(_QWORD*)(a1 + 48) = v3;
	*(_QWORD*)(a1 + 144) = v24;
	*(__m128*)(a1 + 496) = v30;
	*(__m128*)(a1 + 512) = v31;
	*(__m128*)(a1 + 528) = v33;
	*(_QWORD*)(a1 + 224) = v32;
	result = v90;
	*(_QWORD*)(a1 + 184) = v94;
	*(_QWORD*)(a1 + 304) = v20;
	*(_QWORD*)(a1 + 312) = v5;
	*(_QWORD*)(a1 + 320) = v6;
	*(_QWORD*)(a1 + 152) = v7;
	*(_QWORD*)(a1 + 216) = v92;
	*(_QWORD*)(a1 + 160) = v8;
	*(_QWORD*)(a1 + 168) = v12;
	*(_QWORD*)(a1 + 176) = v13;
	*(_QWORD*)(a1 + 192) = v26;
	*(_QWORD*)(a1 + 200) = v27;
	*(_QWORD*)(a1 + 208) = v28;
	*(_QWORD*)(a1 + 232) = v90;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;

