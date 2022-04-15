//----- (00000001402C4F90) ----------------------------------------------------
char __fastcall sub_1402C4F90(__int64 a1, unsigned __int64 a2, int a3, __m128* a4, __int64 a5)
{
	__m128* v5; // rsi
	unsigned __int64 v6; // r15
	_BYTE* v7; // r14
	char result; // al
	unsigned __int64 v9; // r12
	__int64 v10; // rcx
	_BYTE* v11; // r14
	__m128 v12; // xmm0
	__int64 v13; // rcx
	_BYTE* v14; // r14
	__m128 v15; // xmm4
	__m128 v16; // xmm4
	__m128 v17; // xmm2
	__int64 v18; // rcx
	_BYTE* v19; // r14
	__m128 v20; // xmm0
	__m128 v21; // xmm3
	__int64 v22; // rcx
	__m128 v23; // xmm1
	unsigned __int32 v24; // xmm0_4
	__int64 v25; // rcx
	__m128 v26; // xmm3
	__m128 v27; // xmm3
	__m128 v28; // xmm2
	__m128 v29; // xmm4
	__int64 v30; // rdx
	__int64 v31; // rcx
	__m128 v32; // xmm0
	__m128 v33; // xmm2
	__m128 v34; // xmm3
	_WORD* v35; // rdi
	__int64 v36; // rbx
	__m128 v37; // xmm6
	__int64 v38; // rcx
	__m128 v39; // xmm0
	__m128i v40; // xmm0
	__int64 v41; // rbx
	__int64 v42; // rcx
	__m128 v43; // xmm0
	__m128i v44; // xmm1
	__int64 v45; // rcx
	__m128 v46; // xmm0
	__m128i v47; // xmm0
	__int64 v48; // rcx
	__m128 v49; // xmm0
	__m128i v50; // xmm1
	unsigned __int64 i; // rbx
	__m128 v52; // xmm0
	unsigned __int64 j; // rbx
	__m128 v54; // xmm4
	__m128 v55; // xmm4
	__m128 v56; // xmm1
	__m128 v57; // xmm3
	unsigned __int64 k; // rbx
	__m128 v59; // xmm0
	__m128 v60; // xmm2
	__m128 v61; // xmm2
	_WORD* v62; // rdx
	__int64 v63; // r8
	__m128 v64; // xmm0
	float* v65; // rcx
	float* v66; // rax
	__int64 v67; // rcx
	__m128 v68; // xmm0
	__m128i v69; // xmm0
	__m128i v70; // xmm1
	__m128i v71; // xmm0
	__m128* v72; // rax
	__m128 v73; // xmm2
	__int64 v74; // rcx
	__m128 v75; // xmm0
	__m128i v76; // xmm0
	__m128i v77; // xmm1
	__m128i v78; // xmm0
	__int64 v79; // rbx
	__int64 v80; // rcx
	__m128 v81; // xmm0
	__m128i v82; // xmm0
	__m128i v83; // xmm1
	__m128i v84; // xmm0
	__int64 v85; // rcx
	__m128 v86; // xmm0
	__m128i v87; // xmm0
	__m128i v88; // xmm1
	__m128i v89; // xmm0
	__int64 v90; // rcx
	__m128 v91; // xmm0
	__m128i v92; // xmm0
	__m128i v93; // xmm1
	__int64 v94; // rcx
	__m128 v95; // xmm0
	__m128i v96; // xmm0
	__m128i v97; // xmm1
	unsigned __int64 v98; // rbx
	__int16 v99; // ax
	float v100; // xmm6_4
	unsigned __int64 m; // rbx
	__m128 v102; // xmm0
	__m128i v103; // xmm0
	unsigned __int64 n; // rbx
	__m128 v105; // xmm0
	__m128i v106; // xmm0
	__int64 v107; // rcx
	__m128 v108; // xmm0
	__m128i v109; // xmm0
	__int64 v110; // rcx
	__m128 v111; // xmm0
	__m128i v112; // xmm1
	__int64 v113; // rcx
	__m128 v114; // xmm0
	__int64 v115; // rcx
	__m128 v116; // xmm4
	__m128 v117; // xmm2
	__int64 v118; // rcx
	__m128 v119; // xmm0
	__m128 v120; // xmm2
	__m128 v121; // xmm0
	unsigned __int64 ii; // rbx
	__m128 v123; // xmm3
	__m128 v124; // xmm3
	__m128 v125; // xmm1
	__m128 v126; // xmm2
	unsigned __int64 jj; // rbx
	__m128 v128; // xmm3
	__m128 v129; // xmm1
	__m128 v130; // xmm2
	unsigned __int64 kk; // rbx
	__m128 v132; // xmm3
	__m128 v133; // xmm1
	__m128 v134; // xmm2
	unsigned __int64 mm; // rbx
	__m128 v136; // xmm3
	__m128 v137; // xmm1
	__m128 v138; // xmm2
	__int64 v139; // rbx
	__m128 v140; // xmm0
	__int64 v141; // rdx
	__m128 v142; // xmm0
	int* v143; // rcx
	float* v144; // rax
	__int64 v145; // rdx
	__m128 v146; // xmm0
	int* v147; // rcx
	float* v148; // rax
	__int64 v149; // rdx
	__m128 v150; // xmm0
	int* v151; // rcx
	float* v152; // rax
	__int64 v153; // rdx
	__m128 v154; // xmm0
	int* v155; // rcx
	float* v156; // rax
	__int64 v157; // rdx
	__m128 v158; // xmm0
	int* v159; // rcx
	float* v160; // rax
	__int64 v161; // rdx
	__m128 v162; // xmm0
	int* v163; // rcx
	float* v164; // rax
	__int64 v165; // rdx
	__m128 v166; // xmm0
	int* v167; // rcx
	float* v168; // rax
	__int64 v169; // rdx
	__m128 v170; // xmm0
	int* v171; // rcx
	float* v172; // rax
	__int64 v173; // rdx
	float v174; // xmm0_4
	int* v175; // rcx
	float* v176; // rax
	char v177; // r9
	__int64 v178; // r8
	__m128 v179; // xmm0
	__int64 v180; // r13
	__m128 v181; // xmm1
	float v182; // xmm7_4
	float v183; // xmm8_4
	float v184; // xmm0_4
	unsigned int v185; // ebx
	double v186; // xmm6_8
	double v187; // xmm0_8
	int v188; // edi
	double v189; // xmm0_8
	int v190; // edi
	int v191; // ebx
	__int64 v192; // rcx
	__m128 v193; // xmm2
	__m128* v194; // rax
	__m128 v195; // xmm0
	__m128* v196; // rax
	__m128i v197; // xmm0
	__m128i v198; // xmm1
	__m128i v199; // xmm0
	__m128 v200; // xmm3
	__int64 v201; // rcx
	__m128* v202; // rax
	__m128 v203; // xmm2
	__m128* v204; // rax
	__m128 v205; // xmm0
	__m128* v206; // rax
	__m128i v207; // xmm0
	__m128i v208; // xmm1
	__m128i v209; // xmm0
	__m128 v210; // xmm2
	__m128* v211; // rax
	__m128i v212; // xmm0
	__m128 v213; // xmm3
	__m128* v214; // rax
	__m128i v215; // xmm1
	__int64 v216; // rcx
	__m128* v217; // rax
	__m128i v218; // xmm0
	__m128i v219; // xmm1
	__m128i v220; // xmm0
	__int64 v221; // rcx
	__m128* v222; // rax
	__m128i v223; // xmm0
	__m128i v224; // xmm1
	__m128i v225; // xmm0
	__m128 v226; // xmm3
	__m128* v227; // rax
	__m128i v228; // xmm1
	int v229; // [rsp+20h] [rbp-41h] BYREF
	int v230[3]; // [rsp+24h] [rbp-3Dh] BYREF
	__m128 v231; // [rsp+30h] [rbp-31h] BYREF
	__m128 v232; // [rsp+40h] [rbp-21h] BYREF
	int v233; // [rsp+D8h] [rbp+77h] BYREF

	v5 = a4;
	v6 = a2;
	v7 = (_BYTE*)a1;
	if (!a4)
		return 0;
	v9 = (unsigned __int64)&a4[a5];
	switch (a3)
	{
	case 2:
		if (a2 < 0x10)
			goto LABEL_344;
		v10 = -a1;
		v11 = (_BYTE*)(v7 - (_BYTE*)a4);
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v12 = *v5++;
			*(__m128*)((char*)v5 + (_QWORD)v11 - 16) = v12;
		} while (&v11[v10 + (_QWORD)v5] < (_BYTE*)a2);
		result = 1;
		break;
	case 3:
		if (a2 < 0x10)
			goto LABEL_344;
		v13 = -a1;
		v14 = (_BYTE*)(v7 - (_BYTE*)a4);
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v15 = *v5++;
			v16 = _mm_max_ps(v15, (__m128)xmmword_140B609C0);
			v17 = _mm_cmple_ps((__m128)xmmword_140B609A0, v16);
			*(__m128*)((char*)v5 + (_QWORD)v14 - 16) = _mm_or_ps(
				_mm_xor_ps(
					(__m128)_mm_cvttps_epi32(
						_mm_sub_ps(
							v16,
							_mm_and_ps(v17, (__m128)xmmword_140B609A0))),
					_mm_and_ps((__m128)xmmword_140B609E0, v17)),
				_mm_cmplt_ps((__m128)xmmword_140B60880, v16));
		} while (&v14[v13 + (_QWORD)v5] < (_BYTE*)a2);
		result = 1;
		break;
	case 4:
		if (a2 < 0x10)
			goto LABEL_344;
		v18 = -a1;
		v19 = (_BYTE*)(v7 - (_BYTE*)a4);
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v20 = (__m128)_mm_cvttps_epi32(*v5++);
			v21 = _mm_cmplt_ps((__m128)xmmword_140B608E0, v5[-1]);
			*(__m128*)((char*)v5 + (_QWORD)v19 - 16) = _mm_or_ps(
				_mm_andnot_ps(v21, v20),
				_mm_and_ps((__m128)xmmword_140B609D0, v21));
		} while (&v19[v18 + (_QWORD)v5] < (_BYTE*)a2);
		result = 1;
		break;
	case 6:
		if (a2 < 0xC)
			goto LABEL_344;
		v22 = a1 + 8;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v23 = *v5;
			v22 += 12i64;
			++v5;
			*(_DWORD*)(v22 - 20) = v23.m128_i32[0];
			v24 = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
			v23.m128_i32[0] = v5[-1].m128_i32[2];
			*(_DWORD*)(v22 - 16) = v24;
			*(_DWORD*)(v22 - 12) = v23.m128_i32[0];
		} while (-8 - (__int64)v7 + v22 < a2);
		result = 1;
		break;
	case 7:
		if (a2 < 0xC)
			goto LABEL_344;
		v25 = a1 + 8;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v26 = *v5;
			v25 += 12i64;
			++v5;
			v27 = _mm_max_ps(v26, (__m128)xmmword_140B609C0);
			v28 = _mm_cmple_ps((__m128)xmmword_140B609A0, v27);
			v29 = _mm_or_ps(
				_mm_xor_ps(
					(__m128)_mm_cvttps_epi32(_mm_sub_ps(v27, _mm_and_ps(v28, (__m128)xmmword_140B609A0))),
					_mm_and_ps((__m128)xmmword_140B609E0, v28)),
				_mm_cmplt_ps((__m128)xmmword_140B60880, v27));
			*(_DWORD*)(v25 - 20) = v29.m128_i32[0];
			*(_DWORD*)(v25 - 16) = _mm_shuffle_ps(v29, v29, 85).m128_u32[0];
			*(_DWORD*)(v25 - 12) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
		} while (v25 + -8 - (__int64)v7 < a2);
		result = 1;
		break;
	case 8:
		if (a2 < 0xC)
			goto LABEL_344;
		v30 = -8 - a1;
		v31 = a1 + 8;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v32 = (__m128)_mm_cvttps_epi32(*v5);
			v31 += 12i64;
			++v5;
			v33 = _mm_cmplt_ps((__m128)xmmword_140B608E0, v5[-1]);
			v34 = _mm_or_ps(_mm_andnot_ps(v33, v32), _mm_and_ps((__m128)xmmword_140B609D0, v33));
			*(_DWORD*)(v31 - 20) = v34.m128_i32[0];
			*(_DWORD*)(v31 - 16) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
			*(_DWORD*)(v31 - 12) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
		} while (v31 + v30 < v6);
		result = 1;
		break;
	case 10:
		if (a2 < 8)
			goto LABEL_344;
		v35 = (_WORD*)(a1 + 4);
		v36 = -4 - a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v37 = *v5;
			*(v35 - 2) = sub_1402C2550(COERCE_FLOAT(*v5));
			*(v35 - 1) = sub_1402C2550(_mm_shuffle_ps(v37, v37, 85).m128_f32[0]);
			*v35 = sub_1402C2550(_mm_shuffle_ps(v37, v37, 170).m128_f32[0]);
			v35 += 4;
			*(v35 - 3) = sub_1402C2550(v5->m128_f32[3]);
			++v5;
		} while ((unsigned __int64)v35 + v36 < v6);
		result = 1;
		break;
	case 11:
		if (a2 < 8)
			goto LABEL_344;
		v38 = a1 + 4;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v39 = *v5;
			v38 += 8i64;
			++v5;
			v40 = _mm_cvtps_epi32(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps(v39, (__m128)xmmword_140B609C0), (__m128)xmmword_140B608B0),
					(__m128)xmmword_140B626B0));
			*(_WORD*)(v38 - 12) = _mm_extract_epi16(v40, 0);
			*(_WORD*)(v38 - 10) = _mm_extract_epi16(v40, 2);
			*(_WORD*)(v38 - 8) = _mm_extract_epi16(v40, 4);
			*(_WORD*)(v38 - 6) = _mm_extract_epi16(v40, 6);
		} while (v38 + -4 - (__int64)v7 < a2);
		result = 1;
		break;
	case 12:
		if (a2 < 8)
			goto LABEL_344;
		v41 = -4 - a1;
		v42 = a1 + 4;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v43 = *v5;
			v42 += 8i64;
			++v5;
			v44 = _mm_cvtps_epi32(_mm_min_ps(_mm_max_ps(v43, (__m128)xmmword_140B609C0), (__m128)xmmword_140B626B0));
			*(_WORD*)(v42 - 12) = _mm_extract_epi16(v44, 0);
			*(_WORD*)(v42 - 10) = _mm_extract_epi16(v44, 2);
			*(_WORD*)(v42 - 8) = _mm_extract_epi16(v44, 4);
			*(_WORD*)(v42 - 6) = _mm_extract_epi16(v44, 6);
		} while (v42 + v41 < a2);
		result = 1;
		break;
	case 13:
		if (a2 < 8)
			goto LABEL_344;
		v45 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v46 = *v5;
			v7 += 8;
			++v5;
			v47 = _mm_cvtps_epi32(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps(v46, (__m128)xmmword_140B608F0), (__m128)xmmword_140B608B0),
					(__m128)xmmword_140B62690));
			*((_QWORD*)v7 - 1) = _mm_packs_epi32(v47, v47).m128i_u64[0];
		} while ((unsigned __int64)&v7[v45] < a2);
		result = 1;
		break;
	case 14:
		if (a2 < 8)
			goto LABEL_344;
		v48 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v49 = *v5;
			v7 += 8;
			++v5;
			v50 = _mm_cvtps_epi32(_mm_min_ps(_mm_max_ps(v49, (__m128)xmmword_140B62660), (__m128)xmmword_140B62690));
			*((_QWORD*)v7 - 1) = _mm_packs_epi32(v50, v50).m128i_u64[0];
		} while ((unsigned __int64)&v7[v48] < a2);
		result = 1;
		break;
	case 16:
		if (a2 < 8)
			goto LABEL_344;
		for (i = 0i64; i < a2; *(_DWORD*)(i + a1 - 4) = v5[-1].m128_i32[1])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v52 = *v5;
			i += 8i64;
			++v5;
			*(_DWORD*)(i + a1 - 8) = v52.m128_i32[0];
		}
		result = 1;
		break;
	case 17:
		if (a2 < 8)
			goto LABEL_344;
		for (j = 0i64; j < a2; *(_DWORD*)(j + a1 - 4) = _mm_shuffle_ps(v57, v57, 85).m128_u32[0])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v54 = *v5;
			j += 8i64;
			++v5;
			v55 = _mm_max_ps(v54, (__m128)xmmword_140B609C0);
			v56 = _mm_cmple_ps((__m128)xmmword_140B609A0, v55);
			v57 = _mm_or_ps(
				_mm_xor_ps(
					(__m128)_mm_cvttps_epi32(_mm_sub_ps(v55, _mm_and_ps(v56, (__m128)xmmword_140B609A0))),
					_mm_and_ps(v56, (__m128)xmmword_140B609E0)),
				_mm_cmplt_ps((__m128)xmmword_140B60880, v55));
			*(_DWORD*)(j + a1 - 8) = v57.m128_i32[0];
		}
		result = 1;
		break;
	case 18:
		if (a2 < 8)
			goto LABEL_344;
		for (k = 0i64; k < a2; *(_DWORD*)(k + a1 - 4) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v59 = (__m128)_mm_cvttps_epi32(*v5);
			k += 8i64;
			++v5;
			v60 = _mm_cmplt_ps((__m128)xmmword_140B608E0, v5[-1]);
			v61 = _mm_or_ps(_mm_andnot_ps(v60, v59), _mm_and_ps(v60, (__m128)xmmword_140B609D0));
			*(_DWORD*)(k + a1 - 8) = v61.m128_i32[0];
		}
		result = 1;
		break;
	case 20:
		if (a2 < 8)
			goto LABEL_344;
		v62 = (_WORD*)(a1 + 6);
		v63 = -6 - a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v64 = *v5++;
			v233 = 0;
			v65 = &v231.m128_f32[1];
			v229 = 1132396544;
			*(_DWORD*)(v62 - 3) = v64.m128_i32[0];
			v231 = v64;
			*v62 = 0;
			*((_BYTE*)v62 - 1) = 0;
			if (_mm_shuffle_ps(v64, v64, 85).m128_f32[0] <= 0.0)
				v65 = (float*)&v233;
			v66 = (float*)&v229;
			if (*v65 < 255.0)
				v66 = v65;
			v62 += 4;
			*((_BYTE*)v62 - 10) = (int)*v66;
		} while ((unsigned __int64)v62 + v63 < v6);
		result = 1;
		break;
	case 24:
		if (a2 < 4)
			goto LABEL_344;
		v67 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v68 = *v5;
			v7 += 4;
			++v5;
			v69 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps(v68, (__m128)xmmword_140B609C0), (__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62760)),
				(__m128i)xmmword_140B62590);
			v70 = _mm_or_si128(_mm_shuffle_epi32(v69, 238), v69);
			v71 = _mm_shuffle_epi32(v70, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v71, v71), v70).m128i_u32[0];
		} while ((unsigned __int64)&v7[v67] < a2);
		result = 1;
		break;
	case 25:
		if (a2 < 4)
			goto LABEL_344;
		v74 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v75 = *v5;
			v7 += 4;
			++v5;
			v76 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps(v75, (__m128)xmmword_140B609C0), (__m128)xmmword_140B7B330),
						(__m128)xmmword_140B625C0)),
				(__m128i)xmmword_140B62590);
			v77 = _mm_or_si128(_mm_shuffle_epi32(v76, 238), v76);
			v78 = _mm_shuffle_epi32(v77, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v78, v78), v77).m128i_u32[0];
		} while ((unsigned __int64)&v7[v74] < a2);
		result = 1;
		break;
	case 26:
		if (a2 < 4)
			goto LABEL_344;
		v79 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			sub_1402C2780(v7, (const __m128i*)v5);
			v7 += 4;
			++v5;
		} while ((unsigned __int64)&v7[v79] < v6);
		result = 1;
		break;
	case 28:
	case 29:
		if (a2 < 4)
			goto LABEL_344;
		v80 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v81 = *v5;
			v7 += 4;
			++v5;
			v82 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps(v81, (__m128)xmmword_140B609C0), (__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62710)),
				(__m128i)xmmword_140B626F0);
			v83 = _mm_or_si128(_mm_shuffle_epi32(v82, 238), v82);
			v84 = _mm_shuffle_epi32(v83, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v84, v84), v83).m128i_u32[0];
		} while ((unsigned __int64)&v7[v80] < a2);
		result = 1;
		break;
	case 30:
		if (a2 < 4)
			goto LABEL_344;
		v85 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v86 = *v5;
			v7 += 4;
			++v5;
			v87 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps(v86, (__m128)xmmword_140B609C0), (__m128)xmmword_140B7B470),
						(__m128)xmmword_140B62600)),
				(__m128i)xmmword_140B626F0);
			v88 = _mm_or_si128(_mm_shuffle_epi32(v87, 238), v87);
			v89 = _mm_shuffle_epi32(v88, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v89, v89), v88).m128i_u32[0];
		} while ((unsigned __int64)&v7[v85] < a2);
		result = 1;
		break;
	case 31:
		if (a2 < 4)
			goto LABEL_344;
		v90 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v91 = *v5;
			v7 += 4;
			++v5;
			v92 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps(v91, (__m128)xmmword_140B608F0), (__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62770)),
				(__m128i)xmmword_140B62610);
			v93 = _mm_or_si128(_mm_shuffle_epi32(v92, 238), v92);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_shuffle_epi32(v93, 85), v93).m128i_u32[0];
		} while ((unsigned __int64)&v7[v90] < a2);
		result = 1;
		break;
	case 32:
		if (a2 < 4)
			goto LABEL_344;
		v94 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v95 = *v5;
			v7 += 4;
			++v5;
			v96 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps(v95, (__m128)xmmword_140B62750), (__m128)xmmword_140B626A0),
						(__m128)xmmword_140B62700)),
				(__m128i)xmmword_140B62610);
			v97 = _mm_or_si128(_mm_shuffle_epi32(v96, 238), v96);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_shuffle_epi32(v97, 85), v97).m128i_u32[0];
		} while ((unsigned __int64)&v7[v94] < a2);
		result = 1;
		break;
	case 34:
		if (a2 < 4)
			goto LABEL_344;
		v98 = 0i64;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v99 = sub_1402C2550(COERCE_FLOAT(*v5));
			v100 = v5->m128_f32[1];
			*(_WORD*)&v7[v98] = v99;
			v98 += 4i64;
			*(_WORD*)&v7[v98 - 2] = sub_1402C2550(v100);
			++v5;
		} while (v98 < v6);
		result = 1;
		break;
	case 35:
		if (a2 < 4)
			goto LABEL_344;
		for (m = 0i64; m < a2; *(_WORD*)(m + a1 - 2) = _mm_extract_epi16(v103, 2))
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v102 = *v5;
			m += 4i64;
			++v5;
			v103 = _mm_cvtps_epi32(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps(v102, (__m128)xmmword_140B609C0), (__m128)xmmword_140B608B0),
					(__m128)xmmword_140B626B0));
			*(_WORD*)(m + a1 - 4) = _mm_extract_epi16(v103, 0);
		}
		result = 1;
		break;
	case 36:
		if (a2 < 4)
			goto LABEL_344;
		for (n = 0i64; n < a2; *(_WORD*)(n + a1 - 2) = _mm_extract_epi16(v106, 2))
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v105 = *v5;
			n += 4i64;
			++v5;
			v106 = _mm_cvtps_epi32(_mm_min_ps(_mm_max_ps(v105, (__m128)xmmword_140B609C0), (__m128)xmmword_140B626B0));
			*(_WORD*)(n + a1 - 4) = _mm_extract_epi16(v106, 0);
		}
		result = 1;
		break;
	case 37:
		if (a2 < 4)
			goto LABEL_344;
		v107 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v108 = *v5;
			v7 += 4;
			++v5;
			v109 = _mm_cvtps_epi32(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps(v108, (__m128)xmmword_140B608F0), (__m128)xmmword_140B608B0),
					(__m128)xmmword_140B62690));
			*((_DWORD*)v7 - 1) = _mm_packs_epi32(v109, v109).m128i_u32[0];
		} while ((unsigned __int64)&v7[v107] < a2);
		result = 1;
		break;
	case 38:
		if (a2 < 4)
			goto LABEL_344;
		v110 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v111 = *v5;
			v7 += 4;
			++v5;
			v112 = _mm_cvtps_epi32(_mm_min_ps(_mm_max_ps(v111, (__m128)xmmword_140B62660), (__m128)xmmword_140B62690));
			*((_DWORD*)v7 - 1) = _mm_packs_epi32(v112, v112).m128i_u32[0];
		} while ((unsigned __int64)&v7[v110] < a2);
		result = 1;
		break;
	case 40:
	case 41:
		if (a2 < 4)
			goto LABEL_344;
		v113 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v114 = *v5;
			v7 += 4;
			++v5;
			*((_DWORD*)v7 - 1) = v114.m128_i32[0];
		} while ((unsigned __int64)&v7[v113] < a2);
		result = 1;
		break;
	case 42:
		if (a2 < 4)
			goto LABEL_344;
		v115 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v7 += 4;
			++v5;
			v116 = _mm_max_ps(_mm_mul_ps((__m128)xmmword_140B7B240, v5[-1]), (__m128)xmmword_140B609C0);
			v117 = _mm_cmple_ps((__m128)xmmword_140B609A0, v116);
			*((_DWORD*)v7 - 1) = _mm_cvttps_epi32(_mm_sub_ps(v116, _mm_and_ps(v117, (__m128)xmmword_140B609A0))).m128i_u32[0] ^ v117.m128_i32[0] & 0x80000000 | _mm_cmplt_ps((__m128)xmmword_140B60880, v116).m128_u32[0];
		} while ((unsigned __int64)&v7[v115] < a2);
		result = 1;
		break;
	case 43:
		if (a2 < 4)
			goto LABEL_344;
		v118 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v7 += 4;
			++v5;
			v119 = _mm_mul_ps((__m128)xmmword_140B7B240, v5[-1]);
			v120 = _mm_cmplt_ps((__m128)xmmword_140B608E0, v119);
			*((_DWORD*)v7 - 1) = _mm_andnot_ps(v120, (__m128)_mm_cvttps_epi32(v119)).m128_u32[0] | COERCE_UNSIGNED_INT(fabs(v120.m128_f32[0]));
		} while ((unsigned __int64)&v7[v118] < a2);
		result = 1;
		break;
	case 45:
		if (a2 < 4)
			goto LABEL_344;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v7 += 4;
			++v5;
			v121 = _mm_min_ps(_mm_max_ps((__m128)0i64, v5[-1]), (__m128)xmmword_140B625B0);
			*((_DWORD*)v7 - 1) = ((int)_mm_shuffle_ps(v121, v121, 85).m128_f32[0] << 24) | (int)(float)(v121.m128_f32[0] * 16777215.0) & 0xFFFFFF;
		} while ((unsigned __int64)&v7[-a1] < a2);
		result = 1;
		break;
	case 49:
		if (a2 < 2)
			goto LABEL_344;
		for (ii = 0i64; ii < a2; *(_BYTE*)(a1 + ii - 1) = (int)_mm_shuffle_ps(v126, v126, 85).m128_f32[0])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v123 = *v5;
			ii += 2i64;
			++v5;
			v124 = _mm_add_ps(
				_mm_mul_ps(
					_mm_min_ps(_mm_max_ps(v123, (__m128)xmmword_140B609C0), (__m128)xmmword_140B608B0),
					(__m128)xmmword_140B7B470),
				(__m128)xmmword_140B60A70);
			v125 = (__m128)_mm_cmpgt_epi32(
				(__m128i)xmmword_140B60A10,
				_mm_and_si128((__m128i)xmmword_140B609D0, (__m128i)v124));
			v126 = _mm_or_ps(
				_mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(v124)), v125),
				(__m128)_mm_andnot_si128((__m128i)v125, (__m128i)v124));
			*(_BYTE*)(ii + a1 - 2) = (int)v126.m128_f32[0];
		}
		result = 1;
		break;
	case 50:
		if (a2 < 2)
			goto LABEL_344;
		for (jj = 0i64; jj < a2; *(_BYTE*)(jj + a1 - 1) = (int)_mm_shuffle_ps(v130, v130, 85).m128_f32[0])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			jj += 2i64;
			++v5;
			v128 = _mm_min_ps(_mm_max_ps((__m128)0i64, v5[-1]), (__m128)xmmword_140B7B470);
			v129 = (__m128)_mm_cmpgt_epi32(
				(__m128i)xmmword_140B60A10,
				_mm_and_si128((__m128i)xmmword_140B609D0, (__m128i)v128));
			v130 = _mm_or_ps(
				_mm_and_ps(_mm_cvtepi32_ps(_mm_cvtps_epi32(v128)), v129),
				(__m128)_mm_andnot_si128((__m128i)v129, (__m128i)v128));
			*(_BYTE*)(jj + a1 - 2) = (int)v130.m128_f32[0];
		}
		result = 1;
		break;
	case 51:
		if (a2 < 2)
			goto LABEL_344;
		for (kk = 0i64; kk < a2; *(_BYTE*)(kk + a1 - 1) = (int)_mm_shuffle_ps(v134, v134, 85).m128_f32[0])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			kk += 2i64;
			++v5;
			v132 = _mm_mul_ps(
				_mm_min_ps(_mm_max_ps((__m128)xmmword_140B608F0, v5[-1]), (__m128)xmmword_140B608B0),
				(__m128)xmmword_140B626A0);
			v133 = (__m128)_mm_cmpgt_epi32(
				(__m128i)xmmword_140B60A10,
				_mm_and_si128((__m128i)xmmword_140B609D0, (__m128i)v132));
			v134 = _mm_or_ps(
				_mm_and_ps(_mm_cvtepi32_ps(_mm_cvtps_epi32(v132)), v133),
				(__m128)_mm_andnot_si128((__m128i)v133, (__m128i)v132));
			*(_BYTE*)(kk + a1 - 2) = (int)v134.m128_f32[0];
		}
		result = 1;
		break;
	case 52:
		if (a2 < 2)
			goto LABEL_344;
		for (mm = 0i64; mm < a2; *(_BYTE*)(mm + a1 - 1) = (int)_mm_shuffle_ps(v138, v138, 85).m128_f32[0])
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			mm += 2i64;
			++v5;
			v136 = _mm_min_ps(_mm_max_ps((__m128)xmmword_140B62750, v5[-1]), (__m128)xmmword_140B626A0);
			v137 = (__m128)_mm_cmpgt_epi32(
				(__m128i)xmmword_140B60A10,
				_mm_and_si128((__m128i)xmmword_140B609D0, (__m128i)v136));
			v138 = _mm_or_ps(
				_mm_and_ps(_mm_cvtepi32_ps(_mm_cvtps_epi32(v136)), v137),
				(__m128)_mm_andnot_si128((__m128i)v137, (__m128i)v136));
			*(_BYTE*)(mm + a1 - 2) = (int)v138.m128_f32[0];
		}
		result = 1;
		break;
	case 54:
		if (a2 < 2)
			goto LABEL_344;
		v139 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v140 = *v5++;
			v7 += 2;
			*((_WORD*)v7 - 1) = sub_1402C2550(v140.m128_f32[0]);
		} while ((unsigned __int64)&v7[v139] < v6);
		result = 1;
		break;
	case 55:
	case 56:
		if (a2 < 2)
			goto LABEL_344;
		v141 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v142 = *v5++;
			v233 = 1065353216;
			v143 = &v233;
			v230[0] = 0;
			v229 = v142.m128_i32[0];
			if (v142.m128_f32[0] <= 1.0)
				v143 = &v229;
			v144 = (float*)v230;
			if (*(float*)v143 >= 0.0)
				v144 = (float*)v143;
			v7 += 2;
			*((_WORD*)v7 - 1) = (int)(float)((float)(*v144 * 65535.0) + 0.5);
		} while ((unsigned __int64)&v7[v141] < v6);
		result = 1;
		break;
	case 57:
		if (a2 < 2)
			goto LABEL_344;
		v145 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v146 = *v5++;
			v233 = 1199570688;
			v147 = &v233;
			v229 = 0;
			v230[0] = v146.m128_i32[0];
			if (v146.m128_f32[0] <= 65535.0)
				v147 = v230;
			v148 = (float*)&v229;
			if (*(float*)v147 >= 0.0)
				v148 = (float*)v147;
			v7 += 2;
			*((_WORD*)v7 - 1) = (int)*v148;
		} while ((unsigned __int64)&v7[v145] < v6);
		result = 1;
		break;
	case 58:
		if (a2 < 2)
			goto LABEL_344;
		v149 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v150 = *v5++;
			v233 = 1065353216;
			v151 = &v233;
			v229 = -1082130432;
			v230[0] = v150.m128_i32[0];
			if (v150.m128_f32[0] <= 1.0)
				v151 = v230;
			v152 = (float*)&v229;
			if (*(float*)v151 >= -1.0)
				v152 = (float*)v151;
			v7 += 2;
			*((_WORD*)v7 - 1) = (int)(float)(*v152 * 32767.0);
		} while ((unsigned __int64)&v7[v149] < v6);
		result = 1;
		break;
	case 59:
		if (a2 < 2)
			goto LABEL_344;
		v153 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v154 = *v5++;
			v233 = 1191181824;
			v155 = &v233;
			v229 = -956301824;
			v230[0] = v154.m128_i32[0];
			if (v154.m128_f32[0] <= 32767.0)
				v155 = v230;
			v156 = (float*)&v229;
			if (*(float*)v155 >= -32767.0)
				v156 = (float*)v155;
			v7 += 2;
			*((_WORD*)v7 - 1) = (int)*v156;
		} while ((unsigned __int64)&v7[v153] < v6);
		result = 1;
		break;
	case 61:
		if (!a2)
			goto LABEL_344;
		v157 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v158 = *v5++;
			v233 = 1065353216;
			v159 = &v233;
			v229 = 0;
			v230[0] = v158.m128_i32[0];
			if (v158.m128_f32[0] <= 1.0)
				v159 = v230;
			v160 = (float*)&v229;
			if (*(float*)v159 >= 0.0)
				v160 = (float*)v159;
			*v7++ = (int)(float)(*v160 * 255.0);
		} while ((unsigned __int64)&v7[v157] < v6);
		result = 1;
		break;
	case 62:
		if (!a2)
			goto LABEL_344;
		v161 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v162 = *v5++;
			v233 = 1132396544;
			v163 = &v233;
			v229 = 0;
			v230[0] = v162.m128_i32[0];
			if (v162.m128_f32[0] <= 255.0)
				v163 = v230;
			v164 = (float*)&v229;
			if (*(float*)v163 >= 0.0)
				v164 = (float*)v163;
			*v7++ = (int)*v164;
		} while ((unsigned __int64)&v7[v161] < v6);
		result = 1;
		break;
	case 63:
		if (!a2)
			goto LABEL_344;
		v165 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v166 = *v5++;
			v233 = 1065353216;
			v167 = &v233;
			v229 = -1082130432;
			v230[0] = v166.m128_i32[0];
			if (v166.m128_f32[0] <= 1.0)
				v167 = v230;
			v168 = (float*)&v229;
			if (*(float*)v167 >= -1.0)
				v168 = (float*)v167;
			*v7++ = (int)(float)(*v168 * 127.0);
		} while ((unsigned __int64)&v7[v165] < v6);
		result = 1;
		break;
	case 64:
		if (!a2)
			goto LABEL_344;
		v169 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v170 = *v5++;
			v233 = 1123942400;
			v171 = &v233;
			v229 = -1023541248;
			v230[0] = v170.m128_i32[0];
			if (v170.m128_f32[0] <= 127.0)
				v171 = v230;
			v172 = (float*)&v229;
			if (*(float*)v171 >= -127.0)
				v172 = (float*)v171;
			*v7++ = (int)*v172;
		} while ((unsigned __int64)&v7[v169] < v6);
		result = 1;
		break;
	case 65:
		if (!a2)
			goto LABEL_344;
		v173 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v174 = v5->m128_f32[3];
			++v5;
			*(float*)v230 = v174;
			v233 = 1065353216;
			v175 = &v233;
			v229 = 0;
			if (v174 <= 1.0)
				v175 = v230;
			v176 = (float*)&v229;
			if (*(float*)v175 >= 0.0)
				v176 = (float*)v175;
			*v7++ = (int)(float)(*v176 * 255.0);
		} while ((unsigned __int64)&v7[v173] < v6);
		result = 1;
		break;
	case 66:
		if (!a2)
			goto LABEL_344;
		do
		{
			v177 = 0;
			v178 = 8i64;
			do
			{
				if ((unsigned __int64)v5 >= v9)
					break;
				v179 = *v5++;
				if (v179.m128_f32[0] > 0.25)
					v177 |= 1 << (v178 - 1);
				--v178;
			} while (v178);
			*v7++ = v177;
			--v6;
		} while (v6);
		result = 1;
		break;
	case 67:
		if (a2 >= 4)
		{
			v180 = -a1;
			do
			{
				if ((unsigned __int64)v5 >= v9)
					break;
				v181 = *v5;
				v182 = 65408.0;
				++v5;
				v231.m128_i32[0] = v181.m128_i32[0];
				v231.m128_i32[2] = v5[-1].m128_i32[2];
				v231.m128_i32[1] = _mm_shuffle_ps(v181, v181, 85).m128_u32[0];
				if (v181.m128_f32[0] < 0.0)
				{
					v181.m128_i32[0] = 0;
				}
				else if (v181.m128_f32[0] > 65408.0)
				{
					v181.m128_i32[0] = 1199538176;
				}
				v183 = v231.m128_f32[1];
				if (v231.m128_f32[1] < 0.0)
				{
					v183 = 0.0;
				}
				else if (v231.m128_f32[1] > 65408.0)
				{
					v183 = 65408.0;
				}
				if (v231.m128_f32[2] < 0.0)
				{
					v182 = 0.0;
				}
				else if (v231.m128_f32[2] <= 65408.0)
				{
					v182 = v231.m128_f32[2];
				}
				if (v181.m128_f32[0] <= v183)
					v184 = v183;
				else
					v184 = v181.m128_f32[0];
				if (v184 <= v182)
					v184 = v182;
				if (v184 <= 0.000015258789)
					v184 = 0.000015258789;
				v233 = LODWORD(v184);
				v185 = LODWORD(v184) & 0xFF800000;
				v230[0] = -2097152000 - (LODWORD(v184) & 0xFF800000);
				*(_QWORD*)&v186 = (unsigned int)v230[0];
				*(_QWORD*)&v187 = (unsigned int)v230[0];
				*(float*)&v187 = *(float*)v230 * v181.m128_f32[0];
				v188 = (int)sub_1402C2970(v187).m128_f32[0];
				*(_QWORD*)&v189 = -2097152000 - v185;
				*(float*)&v189 = *(float*)v230 * v183;
				v190 = (*(_DWORD*)v7 & 0x7FFFE00 | ((int)(v185 - 931135488) >> 23 << 27)) ^ v188 & 0x1FF;
				*(float*)&v186 = *(float*)v230 * v182;
				v191 = v190 ^ (v190 ^ ((int)sub_1402C2970(v189).m128_f32[0] << 9)) & 0x3FE00;
				v7 += 4;
				*((_DWORD*)v7 - 1) = v191 ^ (v191 ^ ((int)sub_1402C2970(v186).m128_f32[0] << 18)) & 0x7FC0000;
			} while ((unsigned __int64)&v7[v180] < v6);
		}
		result = 1;
		break;
	case 68:
		if (a2 < 4)
			goto LABEL_344;
		v192 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v193 = *v5++;
			if ((unsigned __int64)v5 >= v9)
			{
				v196 = &v232;
				v232 = 0i64;
			}
			else
			{
				v194 = v5++;
				v195 = *v194;
				v196 = &v231;
				v231 = _mm_shuffle_ps(v195, v195, 85);
			}
			v7 += 4;
			v197 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(
							_mm_max_ps(
								_mm_or_ps(
									_mm_andnot_ps((__m128)xmmword_140B608C0, *v196),
									_mm_and_ps((__m128)xmmword_140B608C0, v193)),
								(__m128)xmmword_140B609C0),
							(__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62710)),
				(__m128i)xmmword_140B626F0);
			v198 = _mm_or_si128(_mm_shuffle_epi32(v197, 238), v197);
			v199 = _mm_shuffle_epi32(v198, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v199, v199), v198).m128i_u32[0];
		} while ((unsigned __int64)&v7[v192] < a2);
		result = 1;
		break;
	case 69:
		if (a2 < 4)
			goto LABEL_344;
		v200 = (__m128)xmmword_140C58AC0;
		v201 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v202 = v5++;
			v203 = _mm_shuffle_ps(*v202, *v202, 177);
			if ((unsigned __int64)v5 >= v9)
			{
				v206 = &v231;
				v231 = 0i64;
			}
			else
			{
				v204 = v5++;
				v205 = *v204;
				v206 = &v232;
				v232 = _mm_shuffle_ps(v205, v205, 85);
			}
			v7 += 4;
			v207 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(
							_mm_max_ps(
								_mm_or_ps(_mm_and_ps(v200, v203), _mm_andnot_ps(v200, *v206)),
								(__m128)xmmword_140B609C0),
							(__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62710)),
				(__m128i)xmmword_140B626F0);
			v208 = _mm_or_si128(_mm_shuffle_epi32(v207, 238), v207);
			v209 = _mm_shuffle_epi32(v208, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v209, v209), v208).m128i_u32[0];
		} while ((unsigned __int64)&v7[v201] < a2);
		result = 1;
		break;
	case 85:
		if (a2 < 2)
			goto LABEL_344;
		v210 = (__m128)xmmword_140C58AE0;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v211 = v5;
			v7 += 2;
			++v5;
			v212 = _mm_cvtps_epi32(
				_mm_min_ps(
					_mm_max_ps(_mm_mul_ps(_mm_shuffle_ps(*v211, *v211, 198), v210), (__m128)xmmword_140B609C0),
					(__m128)xmmword_140B7A840));
			*((_WORD*)v7 - 1) = _mm_extract_epi16(v212, 0) & 0x1F | (32
				* (((unsigned __int16)_mm_extract_epi16(v212, 4) << 6) | _mm_extract_epi16(v212, 2) & 0x3F));
		} while ((unsigned __int64)&v7[-a1] < a2);
		result = 1;
		break;
	case 86:
		if (a2 < 2)
			goto LABEL_344;
		v213 = (__m128)xmmword_140C58B10;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v214 = v5++;
			v215 = _mm_cvtps_epi32(
				_mm_min_ps(
					_mm_max_ps(_mm_mul_ps(_mm_shuffle_ps(*v214, *v214, 198), v213), (__m128)xmmword_140B609C0),
					(__m128)xmmword_140B7B280));
			v7 += 2;
			*((_WORD*)v7 - 1) = _mm_extract_epi16(v215, 0) & 0x1F | ((unsigned __int16)_mm_extract_epi16(v215, 6) != 0
				? 0x8000
				: 0) | (32
					* (_mm_extract_epi16(v215, 2) & 0x1F | (32 * (_mm_extract_epi16(v215, 4) & 0x1F))));
		} while ((unsigned __int64)&v7[-a1] < a2);
		result = 1;
		break;
	case 87:
	case 91:
		if (a2 < 4)
			goto LABEL_344;
		v216 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v217 = v5;
			v7 += 4;
			++v5;
			v218 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(
							_mm_max_ps(_mm_shuffle_ps(*v217, *v217, 198), (__m128)xmmword_140B609C0),
							(__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62710)),
				(__m128i)xmmword_140B626F0);
			v219 = _mm_or_si128(_mm_shuffle_epi32(v218, 238), v218);
			v220 = _mm_shuffle_epi32(v219, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v220, v220), v219).m128i_u32[0];
		} while ((unsigned __int64)&v7[v216] < a2);
		result = 1;
		break;
	case 88:
	case 93:
		if (a2 < 4)
			goto LABEL_344;
		v221 = -a1;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v222 = v5;
			v7 += 4;
			++v5;
			v223 = _mm_and_si128(
				_mm_cvttps_epi32(
					_mm_mul_ps(
						_mm_min_ps(
							_mm_max_ps(
								_mm_or_ps(
									_mm_andnot_ps((__m128)xmmword_140B626D0, _mm_shuffle_ps(*v222, *v222, 198)),
									_mm_and_ps(
										_mm_shuffle_ps((__m128)xmmword_140B60900, (__m128)xmmword_140B60900, 198),
										(__m128)xmmword_140B626D0)),
								(__m128)xmmword_140B609C0),
							(__m128)xmmword_140B608B0),
						(__m128)xmmword_140B62710)),
				(__m128i)xmmword_140B626F0);
			v224 = _mm_or_si128(_mm_shuffle_epi32(v223, 238), v223);
			v225 = _mm_shuffle_epi32(v224, 85);
			*((_DWORD*)v7 - 1) = _mm_or_si128(_mm_add_epi32(v225, v225), v224).m128i_u32[0];
		} while ((unsigned __int64)&v7[v221] < a2);
		result = 1;
		break;
	case 89:
		if (a2 < 4)
			goto LABEL_344;
		do
		{
			if ((unsigned __int64)v5 >= v9)
				goto LABEL_344;
			v72 = v5;
			v7 += 4;
			++v5;
			v73 = _mm_min_ps(
				_mm_max_ps(
					(__m128)xmmword_140B609C0,
					_mm_add_ps(_mm_mul_ps((__m128)xmmword_140B62630, *v72), (__m128)xmmword_140B62780)),
				(__m128)xmmword_140B7B330);
			*((_DWORD*)v7 - 1) = (int)v73.m128_f32[0] & 0x3FF | (((int)_mm_shuffle_ps(v73, v73, 85).m128_f32[0] & 0x3FF | ((((int)_mm_shuffle_ps(v73, v73, 255).m128_f32[0] << 10) | (int)_mm_shuffle_ps(v73, v73, 170).m128_f32[0] & 0x3FF) << 10)) << 10);
		} while ((unsigned __int64)&v7[-a1] < a2);
		result = 1;
		break;
	case 115:
		if (a2 >= 2)
		{
			v226 = (__m128)xmmword_140C58AD0;
			do
			{
				if ((unsigned __int64)v5 >= v9)
					break;
				v227 = v5;
				v7 += 2;
				++v5;
				v228 = _mm_cvtps_epi32(
					_mm_min_ps(
						_mm_max_ps(_mm_mul_ps(_mm_shuffle_ps(*v227, *v227, 198), v226), (__m128)xmmword_140B609C0),
						(__m128)xmmword_140B7B3E0));
				*((_WORD*)v7 - 1) = _mm_extract_epi16(v228, 0) & 0xF | (16
					* (_mm_extract_epi16(v228, 2) & 0xF | (16 * ((16 * _mm_extract_epi16(v228, 6)) | _mm_extract_epi16(v228, 4) & 0xF))));
			} while ((unsigned __int64)&v7[-a1] < a2);
		}
	LABEL_344:
		result = 1;
		break;
	default:
		result = 0;
		break;
	}
	return result;
}
// 1402C545F: conditional instruction was optimized away because r15.8>=8u
// 1402C54C8: conditional instruction was optimized away because r15.8>=8u
// 1402C56E7: conditional instruction was optimized away because r15.8>=4u
// 1402C576E: conditional instruction was optimized away because r15.8>=4u
// 1402C5825: conditional instruction was optimized away because r15.8>=4u
// 1402C58AE: conditional instruction was optimized away because r15.8>=4u
// 1402C58F9: conditional instruction was optimized away because r15.8>=4u
// 1402C597F: conditional instruction was optimized away because r15.8>=4u
// 1402C5A05: conditional instruction was optimized away because r15.8>=4u
// 1402C5A8A: conditional instruction was optimized away because r15.8>=4u
// 1402C5C1D: conditional instruction was optimized away because r15.8>=4u
// 1402C5C88: conditional instruction was optimized away because r15.8>=4u
// 1402C5CE7: conditional instruction was optimized away because r15.8>=4u
// 1402C5D2A: conditional instruction was optimized away because r15.8>=4u
// 1402C5DC0: conditional instruction was optimized away because r15.8>=4u
// 1402C5E39: conditional instruction was optimized away because r15.8>=4u
// 1402C60FB: conditional instruction was optimized away because r15.8>=2u
// 1402C6142: conditional instruction was optimized away because r15.8>=2u
// 1402C61E4: conditional instruction was optimized away because r15.8>=2u
// 1402C6268: conditional instruction was optimized away because r15.8>=2u
// 1402C6300: conditional instruction was optimized away because r15.8>=2u
// 1402C6387: conditional instruction was optimized away because r15.8!=0
// 1402C6414: conditional instruction was optimized away because r15.8!=0
// 1402C6496: conditional instruction was optimized away because r15.8!=0
// 1402C652D: conditional instruction was optimized away because r15.8!=0
// 1402C65B5: conditional instruction was optimized away because r15.8!=0
// 1402C6644: conditional instruction was optimized away because r15.8!=0
// 1402C66A9: conditional instruction was optimized away because r15.8>=4u
// 1402C6822: conditional instruction was optimized away because r15.8>=4u
// 1402C68EA: conditional instruction was optimized away because r15.8>=4u
// 1402C69C0: conditional instruction was optimized away because r15.8>=2u
// 1402C6A50: conditional instruction was optimized away because r15.8>=2u
// 1402C6AF7: conditional instruction was optimized away because r15.8>=4u
// 1402C6B85: conditional instruction was optimized away because r15.8>=4u
// 1402C6C39: conditional instruction was optimized away because r15.8>=2u
// 140B60880: using guessed type __int128 xmmword_140B60880;
// 140B608B0: using guessed type __int128 xmmword_140B608B0;
// 140B608C0: using guessed type __int128 xmmword_140B608C0;
// 140B608E0: using guessed type __int128 xmmword_140B608E0;
// 140B608F0: using guessed type __int128 xmmword_140B608F0;
// 140B60900: using guessed type __int128 xmmword_140B60900;
// 140B609A0: using guessed type __int128 xmmword_140B609A0;
// 140B609C0: using guessed type __int128 xmmword_140B609C0;
// 140B609D0: using guessed type __int128 xmmword_140B609D0;
// 140B609E0: using guessed type __int128 xmmword_140B609E0;
// 140B60A10: using guessed type __int128 xmmword_140B60A10;
// 140B60A70: using guessed type __int128 xmmword_140B60A70;
// 140B62590: using guessed type __int128 xmmword_140B62590;
// 140B625B0: using guessed type __int128 xmmword_140B625B0;
// 140B625C0: using guessed type __int128 xmmword_140B625C0;
// 140B62600: using guessed type __int128 xmmword_140B62600;
// 140B62610: using guessed type __int128 xmmword_140B62610;
// 140B62630: using guessed type __int128 xmmword_140B62630;
// 140B62660: using guessed type __int128 xmmword_140B62660;
// 140B62690: using guessed type __int128 xmmword_140B62690;
// 140B626A0: using guessed type __int128 xmmword_140B626A0;
// 140B626B0: using guessed type __int128 xmmword_140B626B0;
// 140B626D0: using guessed type __int128 xmmword_140B626D0;
// 140B626F0: using guessed type __int128 xmmword_140B626F0;
// 140B62700: using guessed type __int128 xmmword_140B62700;
// 140B62710: using guessed type __int128 xmmword_140B62710;
// 140B62750: using guessed type __int128 xmmword_140B62750;
// 140B62760: using guessed type __int128 xmmword_140B62760;
// 140B62770: using guessed type __int128 xmmword_140B62770;
// 140B62780: using guessed type __int128 xmmword_140B62780;
// 140B7A840: using guessed type __int128 xmmword_140B7A840;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B280: using guessed type __int128 xmmword_140B7B280;
// 140B7B330: using guessed type __int128 xmmword_140B7B330;
// 140B7B3E0: using guessed type __int128 xmmword_140B7B3E0;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C58AC0: using guessed type __int128 xmmword_140C58AC0;
// 140C58AD0: using guessed type __int128 xmmword_140C58AD0;
// 140C58AE0: using guessed type __int128 xmmword_140C58AE0;
// 140C58B10: using guessed type __int128 xmmword_140C58B10;

