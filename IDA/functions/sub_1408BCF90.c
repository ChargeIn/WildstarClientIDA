//----- (00000001408BCF90) ----------------------------------------------------
unsigned int* __fastcall sub_1408BCF90(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm5
	__m128 v3; // xmm6
	__m128 v4; // xmm1
	float* v5; // rbp
	__m128* v6; // r11
	__int64 v8; // rdx
	__int64 v9; // rbx
	float v10; // xmm12_4
	float v11; // xmm11_4
	float v12; // xmm15_4
	float v13; // xmm13_4
	float v14; // xmm14_4
	float v15; // xmm2_4
	float v16; // xmm6_4
	unsigned __int32 v17; // xmm0_4
	float v18; // xmm5_4
	unsigned int* v19; // r9
	unsigned int* v20; // rdx
	__m128 v21; // xmm4
	__m128 v22; // xmm7
	__m128 v23; // xmm8
	unsigned int* v24; // rdi
	unsigned int* v25; // r14
	unsigned int* v26; // r15
	__m128 v27; // xmm10
	__m128 v28; // xmm9
	unsigned int* v29; // rsi
	unsigned int* v30; // r12
	unsigned int* v31; // r13
	unsigned int* v32; // r8
	unsigned int v33; // r10d
	unsigned int* v34; // rcx
	__m128* v35; // rax
	__m128* v36; // r11
	unsigned int* v37; // rax
	__m128 v38; // xmm1
	__m128 v39; // xmm0
	__m128 v40; // xmm3
	__m128 v41; // xmm2
	unsigned int v42; // edx
	__int64 v43; // rax
	__int64 v44; // rcx
	__m128 v45; // xmm1
	__m128 v46; // xmm0
	__m128 v47; // xmm3
	__m128 v48; // xmm2
	unsigned int v49; // edx
	__int64 v50; // rax
	__int64 v51; // rcx
	__m128 v52; // xmm1
	__m128* v53; // rax
	__m128 v54; // xmm2
	__m128 v55; // xmm4
	__m128 v56; // xmm3
	unsigned int v57; // edx
	__int64 v58; // rax
	__int64 v59; // rcx
	__m128 v60; // xmm4
	__m128 v61; // xmm1
	__m128 v62; // xmm2
	__m128 v63; // xmm0
	__m128 v64; // xmm3
	unsigned int* v65; // rdx
	unsigned int v66; // edx
	__int64 v67; // rax
	__int64 v68; // rcx
	unsigned int v69; // edx
	__m128 v70; // xmm4
	int v71; // r9d
	__int64 v72; // r8
	__int128 v73; // xmm0
	__int64 v74; // rcx
	__m128 v75; // xmm1
	__m128 v76; // xmm1
	unsigned int v77; // ecx
	__int64 v78; // rdx
	__m128 v79; // xmm0
	__m128 v80; // xmm3
	__m128 v81; // xmm3
	__int64 v82; // rax
	__int128 v83; // xmm1
	__m128 v84; // xmm3
	__m128 v85; // xmm1
	__m128 v86; // xmm2
	__m128 v87; // xmm4
	__m128 v88; // xmm5
	__m128 v89; // xmm6
	__m128 v90; // xmm1
	__m128 v91; // xmm3
	__m128 v92; // xmm0
	float v93; // xmm1_4
	__m128 v94; // xmm4
	float* v95; // rcx
	__int64 v96; // rdx
	float v97; // xmm1_4
	__m128 v98; // xmm2
	float v99; // xmm0_4
	__m128* v100; // rcx
	__m128 v101; // xmm2
	__m128 v102; // xmm0
	__m128* v103; // rdx
	__m128 v104; // xmm0
	__m128* v105; // r8
	__m128 v106; // xmm2
	__m128* v107; // r9
	bool v108; // zf
	unsigned int* result; // rax
	unsigned int* v110; // [rsp+0h] [rbp-348h]
	unsigned int* v111; // [rsp+8h] [rbp-340h]
	unsigned int* v112; // [rsp+10h] [rbp-338h]
	unsigned int* v113; // [rsp+18h] [rbp-330h]
	unsigned int* v114; // [rsp+20h] [rbp-328h]
	unsigned int* v115; // [rsp+28h] [rbp-320h]
	unsigned int* v116; // [rsp+30h] [rbp-318h]
	__m128* v117; // [rsp+38h] [rbp-310h]
	__m128* v118; // [rsp+40h] [rbp-308h]
	__m128* v119; // [rsp+48h] [rbp-300h]
	__m128* v120; // [rsp+50h] [rbp-2F8h]
	__m128* v121; // [rsp+58h] [rbp-2F0h]
	__m128* v122; // [rsp+60h] [rbp-2E8h]
	unsigned int* v123; // [rsp+68h] [rbp-2E0h]
	unsigned int* v124; // [rsp+70h] [rbp-2D8h]
	unsigned __int64 v125; // [rsp+78h] [rbp-2D0h]
	unsigned __int64 v126; // [rsp+80h] [rbp-2C8h]
	unsigned int* v127; // [rsp+88h] [rbp-2C0h]
	unsigned int* v128; // [rsp+90h] [rbp-2B8h]
	unsigned int* v129; // [rsp+98h] [rbp-2B0h]
	unsigned __int64 v130; // [rsp+A0h] [rbp-2A8h]
	unsigned __int64 v131; // [rsp+A8h] [rbp-2A0h]
	float* v132; // [rsp+B0h] [rbp-298h]
	float* v133; // [rsp+B8h] [rbp-290h]
	float v134; // [rsp+C0h] [rbp-288h]
	__m128 v135; // [rsp+D0h] [rbp-278h]
	__m128 v136; // [rsp+E0h] [rbp-268h]
	__m128 v137; // [rsp+F0h] [rbp-258h]
	__m128 v138; // [rsp+100h] [rbp-248h]
	float v139; // [rsp+110h] [rbp-238h]
	__m128 v140; // [rsp+120h] [rbp-228h]
	float v141; // [rsp+130h] [rbp-218h]
	__m128 v142; // [rsp+140h] [rbp-208h]
	float v143; // [rsp+150h] [rbp-1F8h]
	__m128 v144; // [rsp+160h] [rbp-1E8h]
	__m128 v145; // [rsp+170h] [rbp-1D8h]
	__m128 v146; // [rsp+180h] [rbp-1C8h]
	__m128 v147; // [rsp+190h] [rbp-1B8h]
	__m128 v148[6]; // [rsp+1A0h] [rbp-1A8h]
	__int128 v149; // [rsp+200h] [rbp-148h]
	char v150; // [rsp+210h] [rbp-138h] BYREF
	int v153; // [rsp+368h] [rbp+20h]

	v4 = (__m128)0xC0000000;
	v5 = *(float**)(a1 + 48);
	v6 = (__m128*)a1;
	v8 = *(_QWORD*)(a1 + 16);
	v9 = *a2;
	v137 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v139) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v10) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v4.m128_f32[0] = -2.0 / (float)*(int*)(v8 + 24);
	v136 = _mm_shuffle_ps(v4, v4, 0);
	v133 = *(float**)(a1 + 40);
	v127 = *(unsigned int**)(a1 + 272);
	v15 = 1.0 / (float)*((unsigned __int16*)a2 + 8);
	v131 = *(_QWORD*)(a1 + 336);
	v117 = *(__m128**)(a1 + 288);
	v3.m128_f32[0] = (float)(*(float*)(v8 + 20) - *(float*)(a1 + 576)) * v15;
	LODWORD(v16) = _mm_shuffle_ps(v3, v3, 0).m128_u32[0];
	v17 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v2.m128_f32[0] = (float)(*(float*)(v8 + 16) - *(float*)(a1 + 572)) * v15;
	v132 = *(float**)(a1 + 56);
	v125 = *(_QWORD*)(a1 + 352);
	v143 = v16;
	v134 = *(float*)&v17;
	LODWORD(v18) = _mm_shuffle_ps(v2, v2, 0).m128_u32[0];
	v129 = *(unsigned int**)(a1 + 280);
	v141 = v18;
	v128 = *(unsigned int**)(a1 + 296);
	v130 = *(_QWORD*)(a1 + 344);
	v126 = *(_QWORD*)(a1 + 360);
	v19 = *(unsigned int**)(a1 + 232);
	v20 = *(unsigned int**)(a1 + 264);
	v21 = *(__m128*)(a1 + 368);
	v22 = *(__m128*)(a1 + 496);
	v23 = *(__m128*)(a1 + 512);
	v24 = *(unsigned int**)(a1 + 144);
	v25 = *(unsigned int**)(a1 + 160);
	v26 = *(unsigned int**)(a1 + 168);
	v27 = *(__m128*)(a1 + 528);
	v28 = *(__m128*)(a1 + 544);
	v146 = *(__m128*)(a1 + 384);
	v145 = v21;
	v29 = *(unsigned int**)(a1 + 176);
	v30 = *(unsigned int**)(a1 + 192);
	v31 = *(unsigned int**)(a1 + 200);
	v144 = *(__m128*)(a1 + 400);
	v32 = *(unsigned int**)(a1 + 224);
	v121 = *(__m128**)(a1 + 304);
	v147 = *(__m128*)(a1 + 416);
	v138 = *(__m128*)(a1 + 432);
	v118 = *(__m128**)(a1 + 312);
	v116 = *(unsigned int**)(a1 + 216);
	v135 = *(__m128*)(a1 + 448);
	v120 = *(__m128**)(a1 + 320);
	v140 = *(__m128*)(a1 + 464);
	v142 = *(__m128*)(a1 + 480);
	v122 = *(__m128**)(a1 + 328);
	v124 = *(unsigned int**)(a1 + 240);
	v113 = *(unsigned int**)(a1 + 152);
	v153 = *((unsigned __int16*)a2 + 9);
	v33 = *(_DWORD*)(a1 + 596);
	v111 = *(unsigned int**)(a1 + 248);
	v34 = *(unsigned int**)(a1 + 256);
	v114 = (unsigned int*)v6[11].m128_u64[1];
	v35 = (__m128*)v6[13].m128_u64[0];
	v110 = (unsigned int*)v6[14].m128_u64[1];
	v115 = v34;
	v112 = (unsigned int*)v6[16].m128_u64[1];
	if (v153)
	{
		v36 = (__m128*)v6[13].m128_u64[0];
		v37 = v127;
		do
		{
			v38 = (__m128) * v24;
			v39 = (__m128) * v25;
			v40 = (__m128) * v26;
			v24 += 4;
			if ((unsigned __int64)v24 >= v131)
				v24 = v37;
			v41 = (__m128) * v113;
			v113 += 4;
			if ((unsigned __int64)v113 >= v131)
				v113 = v37 + 1;
			v25 += 4;
			if ((unsigned __int64)v25 >= v131)
				v25 = v37 + 2;
			v26 += 4;
			if ((unsigned __int64)v26 >= v131)
				v26 = v37 + 3;
			v42 = 0;
			v22 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v38, v41), _mm_unpacklo_ps(v39, v40)), v21),
				_mm_mul_ps(v22, v138));
			do
			{
				v43 = v42;
				v44 = v42++;
				v148[v44] = _mm_mul_ps(stru_1409AA150[4 * v43], v22);
			} while (v42 < v33);
			v45 = (__m128) * v29;
			v46 = (__m128) * v30;
			v47 = (__m128) * v31;
			v29 += 4;
			v48 = (__m128) * v114;
			if ((unsigned __int64)v29 >= v130)
				v29 = v129;
			v114 += 4;
			if ((unsigned __int64)v114 >= v130)
				v114 = v129 + 1;
			v30 += 4;
			if ((unsigned __int64)v30 >= v130)
				v30 = v129 + 2;
			v31 += 4;
			if ((unsigned __int64)v31 >= v130)
				v31 = v129 + 3;
			v49 = 0;
			v23 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v45, v48), _mm_unpacklo_ps(v46, v47)), v146),
				_mm_mul_ps(v23, v135));
			do
			{
				v50 = v49;
				v51 = v49++;
				v148[v51] = _mm_add_ps(_mm_mul_ps(stru_1409AA150[4 * v50 + 1], v23), v148[v51]);
			} while (v49 < v33);
			v52 = (__m128)v36->m128_u32[0];
			v53 = v117;
			v54 = (__m128) * v116;
			v55 = _mm_add_ps(v23, v22);
			++v36;
			v56 = (__m128) * v110;
			if ((unsigned __int64)v36 >= v125)
				v36 = v117;
			v116 += 4;
			if ((unsigned __int64)v116 >= v125)
				v116 = &v117->m128_u32[1];
			v123 = v32 + 4;
			if ((unsigned __int64)(v32 + 4) >= v125)
			{
				v123 = &v117->m128_u32[2];
				v53 = v117;
			}
			v110 += 4;
			if ((unsigned __int64)v110 >= v125)
				v110 = &v53->m128_u32[3];
			v57 = 0;
			v27 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v52, v54), _mm_unpacklo_ps((__m128) * v32, v56)), v144),
				_mm_mul_ps(v27, v140));
			do
			{
				v58 = v57;
				v59 = v57++;
				v148[v59] = _mm_add_ps(_mm_mul_ps(stru_1409AA150[4 * v58 + 2], v27), v148[v59]);
			} while (v57 < v33);
			v60 = _mm_add_ps(v55, v27);
			v61 = (__m128) * v124;
			v62 = (__m128) * v111;
			v63 = (__m128) * v115;
			v64 = (__m128) * v112;
			v65 = v124 + 4;
			if ((unsigned __int64)(v124 + 4) >= v126)
				v65 = v128;
			v124 = v65;
			v111 += 4;
			if ((unsigned __int64)v111 >= v126)
				v111 = v128 + 1;
			v115 += 4;
			if ((unsigned __int64)v115 >= v126)
				v115 = v128 + 2;
			v112 += 4;
			if ((unsigned __int64)v112 >= v126)
				v112 = v128 + 3;
			v66 = 0;
			v28 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v61, v62), _mm_unpacklo_ps(v63, v64)), v147),
				_mm_mul_ps(v28, v142));
			do
			{
				v67 = v66;
				v68 = v66++;
				v148[v68] = _mm_add_ps(_mm_mul_ps(stru_1409AA150[4 * v67 + 3], v28), v148[v68]);
			} while (v66 < v33);
			v69 = 0;
			v70 = _mm_add_ps(v60, v28);
			v71 = *((unsigned __int16*)a2 + 8);
			v72 = 0i64;
			do
			{
				v73 = *(unsigned int*)(v9 + 4 * v72);
				v74 = v69++;
				v74 *= 2i64;
				v72 = (unsigned int)(v71 + v72);
				v75 = *(__m128*)((char*)v148 + 8 * v74);
				*(__int128*)((char*)&v149 + 8 * v74) = v73;
				v76 = _mm_add_ps(v75, _mm_movehl_ps(v75, v75));
				*(__m128*)((char*)v148 + 8 * v74) = _mm_add_ps(_mm_shuffle_ps(v76, v76, 85), v76);
			} while (v69 < v33);
			v77 = 0;
			v10 = v10 + v18;
			v13 = v13 + v16;
			v78 = 0i64;
			v79 = _mm_add_ps(_mm_movehl_ps(v70, v70), v70);
			v80 = _mm_add_ps(_mm_shuffle_ps(v79, v79, 85), v79);
			v81 = _mm_shuffle_ps(v80, v80, 0);
			do
			{
				v82 = v77++;
				v82 *= 2i64;
				v83 = *(__int128*)((char*)&v149 + 8 * v82);
				*(float*)&v83 = (float)(*(float*)&v83 * v10)
					+ (float)(COERCE_FLOAT(*(_OWORD*)((char*)v148 + 8 * v82)) * v13);
				*(_DWORD*)(v9 + 4 * v78) = v83;
				v78 = (unsigned int)(v71 + v78);
				*(__m128*)((char*)v148 + 8 * v82) = (__m128)v83;
			} while (v77 < v33);
			v84 = _mm_mul_ps(v81, v136);
			v9 += 4i64;
			v85 = _mm_add_ps(v28, v84);
			v86 = _mm_add_ps(v27, v84);
			v87 = _mm_add_ps(v84, v22);
			v88 = _mm_shuffle_ps(v85, _mm_shuffle_ps(v85, v87, 15), 201);
			v89 = _mm_shuffle_ps(v86, _mm_shuffle_ps(v86, v85, 15), 201);
			v90 = _mm_add_ps(v23, v84);
			v91 = _mm_shuffle_ps(v90, _mm_shuffle_ps(v90, v86, 15), 201);
			v92 = _mm_shuffle_ps(v87, v90, 15);
			v93 = *(float*)&v149;
			v94 = _mm_shuffle_ps(v87, v92, 201);
			if (v33 > 1)
			{
				v95 = (float*)&v150;
				v96 = v33 - 1;
				do
				{
					v93 = v93 + *v95;
					v95 += 4;
					--v96;
				} while (v96);
			}
			v11 = (float)((float)(v12 * v11) + v93) - v14;
			v14 = v93;
			if (v133)
			{
				v97 = *v5;
				*v5++ = v11;
				if (v5 == v132)
					v5 = v133;
			}
			else
			{
				v97 = v11;
			}
			v98 = v137;
			v99 = v139 * v134;
			v134 = v97;
			v37 = v127;
			v100 = v121 + 1;
			v98.m128_f32[0] = (float)(v137.m128_f32[0] * v97) + v99;
			v101 = _mm_shuffle_ps(v98, v98, 0);
			v102 = _mm_add_ps(v101, v94);
			v21 = v145;
			*v121 = v102;
			*v118 = _mm_add_ps(v101, v91);
			if ((unsigned __int64)&v121[1] >= v131)
				v100 = (__m128*)v127;
			v103 = v118 + 1;
			v104 = _mm_add_ps(v101, v89);
			v121 = v100;
			if ((unsigned __int64)&v118[1] >= v130)
				v103 = (__m128*)v129;
			v105 = v120 + 1;
			v106 = _mm_add_ps(v101, v88);
			v18 = v141;
			v16 = v143;
			*v120 = v104;
			v118 = v103;
			if ((unsigned __int64)&v120[1] >= v125)
				v105 = v117;
			*v122 = v106;
			v107 = v122 + 1;
			v120 = v105;
			v32 = v123;
			if ((unsigned __int64)&v122[1] >= v126)
				v107 = (__m128*)v128;
			v108 = v153-- == 1;
			v122 = v107;
		} while (!v108);
		*(float*)&v17 = v97;
		v19 = v110;
		v34 = v115;
		v20 = v112;
		v119 = v36;
		v6 = (__m128*)a1;
		v35 = v119;
	}
	v6[4].m128_f32[3] = *(float*)&v17;
	v6[35].m128_f32[0] = v14;
	v6[35].m128_f32[1] = v11;
	v6[3].m128_u64[0] = (unsigned __int64)v5;
	v6[19].m128_u64[0] = (unsigned __int64)v121;
	v6[31] = v22;
	v6[32] = v23;
	v6[33] = v27;
	v6[19].m128_u64[1] = (unsigned __int64)v118;
	v6[13].m128_u64[0] = (unsigned __int64)v35;
	v6[34] = v28;
	v6[20].m128_u64[0] = (unsigned __int64)v120;
	v6[20].m128_u64[1] = (unsigned __int64)v122;
	v6[13].m128_u64[1] = (unsigned __int64)v116;
	v6[9].m128_u64[1] = (unsigned __int64)v113;
	v6[15].m128_u64[0] = (unsigned __int64)v124;
	result = v111;
	v6[11].m128_u64[1] = (unsigned __int64)v114;
	v6[9].m128_u64[0] = (unsigned __int64)v24;
	v6[10].m128_u64[0] = (unsigned __int64)v25;
	v6[10].m128_u64[1] = (unsigned __int64)v26;
	v6[11].m128_u64[0] = (unsigned __int64)v29;
	v6[12].m128_u64[0] = (unsigned __int64)v30;
	v6[12].m128_u64[1] = (unsigned __int64)v31;
	v6[14].m128_u64[0] = (unsigned __int64)v32;
	v6[14].m128_u64[1] = (unsigned __int64)v19;
	v6[15].m128_u64[1] = (unsigned __int64)v111;
	v6[16].m128_u64[0] = (unsigned __int64)v34;
	v6[16].m128_u64[1] = (unsigned __int64)v20;
	return result;
}
// 1408BD121: variable 'v3' is possibly undefined
// 1408BD151: variable 'v2' is possibly undefined
// 1409AA150: using guessed type __m128 stru_1409AA150[24];
// 1408BCF90: using guessed type __m128 var_1A8[6];

