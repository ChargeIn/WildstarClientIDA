//----- (00000001408B7770) ----------------------------------------------------
unsigned int* __fastcall sub_1408B7770(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // rbp
	__m128* v4; // r10
	__int64 v6; // rdx
	unsigned __int64 v7; // r9
	unsigned int* v8; // rbx
	__m128* v9; // rdi
	float v10; // xmm5_4
	float v11; // xmm14_4
	unsigned int* v12; // r11
	unsigned int* v13; // r12
	unsigned int* v14; // r14
	unsigned int* v15; // r15
	__m128* v16; // rsi
	__m128 v17; // xmm0
	__m128 v18; // xmm1
	unsigned int* v19; // rax
	float v20; // xmm2_4
	__m128 v21; // xmm0
	unsigned __int64 v22; // rdx
	__m128 v23; // xmm2
	unsigned int* v24; // rcx
	float v25; // xmm2_4
	__m128 v26; // xmm4
	__m128 v27; // xmm8
	unsigned int* v28; // r13
	unsigned int* result; // rax
	__m128 v30; // xmm6
	__m128 v31; // xmm9
	__m128 v32; // xmm15
	__m128* v33; // r8
	__m128 v34; // xmm13
	__m128 v35; // xmm7
	unsigned int* v36; // r10
	__m128 v37; // xmm1
	__m128 v38; // xmm2
	__m128 v39; // xmm0
	__m128 v40; // xmm3
	__m128 v41; // xmm1
	__m128 v42; // xmm2
	__m128 v43; // xmm13
	__m128 v44; // xmm0
	__m128 v45; // xmm3
	__m128 v46; // xmm0
	__m128 v47; // xmm1
	__m128 v48; // xmm4
	__m128 v49; // xmm6
	__m128 v50; // xmm7
	__m128 v51; // xmm5
	__m128 v52; // xmm15
	__int64 v53; // rcx
	float v54; // xmm12_4
	float v55; // xmm10_4
	__m128 v56; // xmm7
	__int64 v57; // rdx
	__int64 v58; // r8
	float v59; // xmm11_4
	float v60; // xmm9_4
	__int64 v61; // r9
	__m128 v62; // xmm2
	__m128 v63; // xmm3
	float v64; // xmm8_4
	__m128 v65; // xmm2
	__m128 v66; // xmm3
	__m128 v67; // xmm4
	__m128 v68; // xmm4
	__m128 v69; // xmm5
	__m128 v70; // xmm5
	__m128 v71; // xmm7
	__m128 v72; // xmm15
	__m128 v73; // xmm7
	__m128 v74; // xmm0
	__m128 v75; // xmm1
	__m128 v76; // xmm0
	__m128 v77; // xmm6
	__m128 v78; // xmm6
	__m128 v79; // xmm3
	__m128 v80; // xmm1
	__m128 v81; // xmm4
	__m128 v82; // xmm3
	__m128 v83; // xmm1
	__m128 v84; // xmm0
	__m128 v85; // xmm1
	unsigned int* v86; // [rsp+0h] [rbp-238h]
	unsigned int* v87; // [rsp+8h] [rbp-230h]
	float* v88; // [rsp+10h] [rbp-228h]
	__m128* v89; // [rsp+18h] [rbp-220h]
	__m128 v90; // [rsp+20h] [rbp-218h]
	float* v91; // [rsp+30h] [rbp-208h]
	unsigned __int64 v92; // [rsp+38h] [rbp-200h]
	unsigned __int64 v93; // [rsp+40h] [rbp-1F8h]
	float* v94; // [rsp+48h] [rbp-1F0h]
	unsigned int* v95; // [rsp+50h] [rbp-1E8h]
	__m128 v96; // [rsp+60h] [rbp-1D8h]
	float v97; // [rsp+70h] [rbp-1C8h]
	__m128 v98; // [rsp+80h] [rbp-1B8h]
	float v99; // [rsp+90h] [rbp-1A8h]
	float v100; // [rsp+A0h] [rbp-198h]
	__m128 v101; // [rsp+B0h] [rbp-188h]
	float v102; // [rsp+C0h] [rbp-178h]
	float v103; // [rsp+D0h] [rbp-168h]
	__m128 v104; // [rsp+E0h] [rbp-158h]
	__m128 v105; // [rsp+F0h] [rbp-148h]
	__m128 v106; // [rsp+100h] [rbp-138h]
	__m128 v107; // [rsp+110h] [rbp-128h]
	__m128 v108; // [rsp+120h] [rbp-118h]
	float v109; // [rsp+130h] [rbp-108h]
	__m128 v110; // [rsp+140h] [rbp-F8h]
	int v113; // [rsp+258h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v6 = *(_QWORD*)(a1 + 16);
	v101 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v7 = *(_QWORD*)(a1 + 344);
	v8 = *(unsigned int**)(a1 + 304);
	v9 = *(__m128**)(a1 + 312);
	LODWORD(v10) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v102) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v12 = *(unsigned int**)(a1 + 144);
	v13 = *(unsigned int**)(a1 + 152);
	v14 = *(unsigned int**)(a1 + 160);
	LODWORD(v100) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v96 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v97 = v10;
	v15 = *(unsigned int**)(a1 + 168);
	v16 = *(__m128**)(a1 + 176);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v6 + 24);
	v88 = *(float**)a2;
	v89 = *(__m128**)(a1 + 280);
	v92 = v7;
	v17 = v2;
	v18 = (__m128) * (unsigned int*)(v6 + 16);
	v107 = _mm_shuffle_ps(v17, v17, 0);
	v98 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	v91 = *(float**)(a1 + 40);
	v19 = *(unsigned int**)(a1 + 184);
	v20 = 1.0 / (float)*(unsigned __int16*)(a2 + 16);
	v18.m128_f32[0] = (float)(v18.m128_f32[0] - *(float*)(a1 + 572)) * v20;
	LODWORD(v109) = _mm_shuffle_ps(v18, v18, 0).m128_u32[0];
	v21 = (__m128) * (unsigned int*)(v6 + 20);
	v22 = *(_QWORD*)(a1 + 336);
	v93 = v22;
	v21.m128_f32[0] = (float)(v21.m128_f32[0] - *(float*)(a1 + 576)) * v20;
	v23 = (__m128) * (unsigned int*)(a1 + 76);
	v94 = *(float**)(a1 + 56);
	v24 = *(unsigned int**)(a1 + 272);
	v95 = v24;
	LODWORD(v25) = _mm_shuffle_ps(v23, v23, 0).m128_u32[0];
	LODWORD(v103) = _mm_shuffle_ps(v21, v21, 0).m128_u32[0];
	v99 = v25;
	v26 = v4[23];
	v27 = v4[24];
	v28 = (unsigned int*)v4[12].m128_u64[0];
	v87 = v19;
	result = (unsigned int*)v4[12].m128_u64[1];
	v30 = v4[27];
	v31 = v4[28];
	v32 = v4[32];
	v113 = *(unsigned __int16*)(a2 + 18);
	v33 = v89;
	v34 = v4[31];
	v104 = v26;
	v108 = v27;
	v106 = v30;
	v110 = v31;
	v90 = v32;
	if (*(_WORD*)(a2 + 18))
	{
		v35 = (__m128)xmmword_1409AA120;
		v36 = (unsigned int*)v4[12].m128_u64[1];
		v105 = _mm_mul_ps((__m128)xmmword_1409AA0E0, (__m128)xmmword_1409AA120);
		do
		{
			v37 = (__m128) * v12;
			v38 = (__m128) * v13;
			v39 = (__m128) * v14;
			v12 += 4;
			if ((unsigned __int64)v12 >= v22)
				v12 = v24;
			v13 += 4;
			v40 = (__m128) * v15;
			if ((unsigned __int64)v13 >= v22)
				v13 = v24 + 1;
			v14 += 4;
			if ((unsigned __int64)v14 >= v22)
				v14 = v24 + 2;
			v15 += 4;
			if ((unsigned __int64)v15 >= v22)
				v15 = v24 + 3;
			v41 = _mm_unpacklo_ps(v37, v38);
			v42 = (__m128)v16->m128_u32[0];
			v43 = _mm_mul_ps(v34, v30);
			v44 = _mm_unpacklo_ps(v39, v40);
			if ((unsigned __int64)++v16 >= v7)
				v16 = v33;
			v87 += 4;
			v45 = (__m128) * (v87 - 4);
			v34 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(v41, v44), v26), v43);
			v46 = (__m128) * v28;
			v47 = _mm_mul_ps(v34, (__m128)xmmword_1409AA0F0);
			v48 = _mm_mul_ps(v34, (__m128)xmmword_1409AA100);
			v49 = _mm_mul_ps(v34, v35);
			v50 = (__m128) * v36;
			v51 = _mm_mul_ps(v34, (__m128)xmmword_1409AA110);
			v52 = _mm_mul_ps(v34, (__m128)xmmword_1409AA140);
			if ((unsigned __int64)v87 >= v7)
				v87 = &v33->m128_u32[1];
			v28 += 4;
			if ((unsigned __int64)v28 >= v7)
				v28 = &v33->m128_u32[2];
			v36 += 4;
			if ((unsigned __int64)v36 >= v7)
				v36 = &v33->m128_u32[3];
			v53 = *(unsigned __int16*)(a2 + 16);
			v54 = *v88;
			v55 = v88[v53];
			v56 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v42, v45), _mm_unpacklo_ps(v46, v50)), v27),
				_mm_mul_ps(v90, v31));
			v57 = 2 * (int)v53;
			v58 = 3 * (int)v53;
			v59 = v88[v57];
			v60 = v88[v58];
			v61 = 4 * (int)v53;
			v90 = v56;
			v62 = _mm_add_ps(_mm_mul_ps(v56, (__m128)xmmword_1409AA0F0), v47);
			v63 = _mm_add_ps(_mm_mul_ps(v56, (__m128)xmmword_1409AA100), v48);
			v64 = v88[v61];
			v65 = _mm_add_ps(v62, _mm_movehl_ps(v62, v62));
			v66 = _mm_add_ps(v63, _mm_movehl_ps(v63, v63));
			v67 = _mm_add_ps(_mm_mul_ps(v56, (__m128)xmmword_1409AA110), v51);
			v68 = _mm_add_ps(v67, _mm_movehl_ps(v67, v67));
			v69 = _mm_add_ps(_mm_mul_ps(v56, (__m128)xmmword_1409AA130), v49);
			v70 = _mm_add_ps(v69, _mm_movehl_ps(v69, v69));
			v71 = _mm_add_ps(_mm_mul_ps(v105, v56), v52);
			v72 = v98;
			v72.m128_f32[0] = v98.m128_f32[0] + v109;
			v73 = _mm_add_ps(v71, _mm_movehl_ps(v71, v71));
			v98 = v72;
			v74 = _mm_add_ps(v90, v34);
			v75 = _mm_add_ps(_mm_movehl_ps(v74, v74), v74);
			v76 = v96;
			v76.m128_f32[0] = v96.m128_f32[0] + v103;
			v96 = v76;
			v77 = _mm_add_ps(_mm_shuffle_ps(v75, v75, 85), v75);
			v75.m128_f32[0] = _mm_shuffle_ps(v65, v65, 85).m128_f32[0] + v65.m128_f32[0];
			v65.m128_i32[0] = v76.m128_i32[0];
			*v88 = (float)(*v88 * v72.m128_f32[0]) + (float)(v75.m128_f32[0] * v76.m128_f32[0]);
			v78 = _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v107);
			++v88;
			v88[v53 - 1] = (float)(v55 * v72.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v66, v66, 85).m128_f32[0] + v66.m128_f32[0]) * v76.m128_f32[0]);
			v79 = _mm_add_ps(v78, v34);
			v88[v57 - 1] = (float)(v59 * v72.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v68, v68, 85).m128_f32[0] + v68.m128_f32[0]) * v76.m128_f32[0]);
			v75.m128_f32[0] = _mm_shuffle_ps(v70, v70, 85).m128_f32[0] + v70.m128_f32[0];
			v10 = (float)(v59 + v60) + (float)((float)(v54 + v55) + v64);
			v88[v58 - 1] = (float)(v60 * v72.m128_f32[0]) + (float)(v75.m128_f32[0] * v76.m128_f32[0]);
			v76.m128_f32[0] = v64 * v72.m128_f32[0];
			v32 = v90;
			v88[v61 - 1] = v76.m128_f32[0]
				+ (float)((float)(_mm_shuffle_ps(v73, v73, 85).m128_f32[0] + v73.m128_f32[0]) * v65.m128_f32[0]);
			v80 = _mm_add_ps(v90, v78);
			v81 = _mm_shuffle_ps(v80, _mm_shuffle_ps(v80, v79, 15), 201);
			v82 = _mm_shuffle_ps(v79, _mm_shuffle_ps(v79, v80, 15), 201);
			v11 = (float)((float)(v100 * v11) + v10) - v97;
			v97 = v10;
			if (v91)
			{
				v25 = *v3;
				*v3++ = v11;
				if (v3 == v94)
					v3 = v91;
			}
			else
			{
				v25 = v11;
			}
			v83 = v101;
			v22 = v93;
			v24 = v95;
			v7 = v92;
			v33 = v89;
			v35 = (__m128)xmmword_1409AA120;
			v30 = v106;
			v27 = v108;
			v8 += 4;
			v83.m128_f32[0] = (float)(v101.m128_f32[0] * v25) + (float)(v102 * v99);
			v31 = v110;
			v84 = _mm_shuffle_ps(v83, v83, 0);
			v99 = v25;
			v85 = _mm_add_ps(v84, v81);
			v26 = v104;
			*((__m128*)v8 - 1) = _mm_add_ps(v84, v82);
			*v9 = v85;
			if ((unsigned __int64)v8 >= v93)
				v8 = v95;
			if ((unsigned __int64)++v9 >= v92)
				v9 = v89;
			--v113;
		} while (v113);
		v86 = v36;
		v4 = (__m128*)a1;
		result = v86;
	}
	v4[4].m128_f32[3] = v25;
	v4[35].m128_f32[0] = v10;
	v4[35].m128_f32[1] = v11;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[9].m128_u64[0] = (unsigned __int64)v12;
	v4[31] = v34;
	v4[32] = v32;
	v4[19].m128_u64[0] = (unsigned __int64)v8;
	v4[19].m128_u64[1] = (unsigned __int64)v9;
	v4[9].m128_u64[1] = (unsigned __int64)v13;
	v4[10].m128_u64[0] = (unsigned __int64)v14;
	v4[10].m128_u64[1] = (unsigned __int64)v15;
	v4[11].m128_u64[0] = (unsigned __int64)v16;
	v4[11].m128_u64[1] = (unsigned __int64)v87;
	v4[12].m128_u64[0] = (unsigned __int64)v28;
	v4[12].m128_u64[1] = (unsigned __int64)result;
	return result;
}
// 1409AA0E0: using guessed type __int128 xmmword_1409AA0E0;
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA130: using guessed type __int128 xmmword_1409AA130;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

