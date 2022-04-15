//----- (000000014032DA00) ----------------------------------------------------
__int64 __fastcall sub_14032DA00(
	__int64 a1,
	unsigned int a2,
	__int64 a3,
	_OWORD* a4,
	__m128* a5,
	__m128* a6,
	__m128* a7,
	__m128* a8,
	__m128* a9)
{
	__m128* v9; // r12
	__m128* v10; // r13
	__int64 v11; // rsi
	__int64 v12; // r9
	__int64 v13; // rdx
	__int64 v14; // rdi
	unsigned __int16 v15; // ax
	float v16; // xmm1_4
	float v17; // xmm3_4
	float v18; // xmm0_4
	double v19; // xmm0_8
	double v20; // xmm0_8
	double v21; // xmm0_8
	float v22; // xmm7_4
	double v23; // xmm6_8
	double v24; // xmm0_8
	float v25; // xmm0_4
	double v26; // xmm0_8
	double v27; // xmm0_8
	float v28; // xmm0_4
	bool v29; // zf
	__m128 v30; // xmm4
	__m128 v31; // xmm3
	float v32; // xmm1_4
	__m128 v33; // xmm0
	double v34; // xmm0_8
	double v35; // xmm0_8
	__m128 v36; // xmm0
	__m128 v37; // xmm4
	__m128 v38; // xmm5
	__m128 v39; // xmm3
	float v40; // xmm1_4
	__m128 v41; // xmm0
	__m128 v42; // xmm1
	__int64 result; // rax
	__m128 v44; // xmm11
	double v45; // xmm0_8
	unsigned int v46; // ebx
	int v47; // r8d
	float v48; // xmm6_4
	unsigned int v49; // edx
	__int64 v50; // rcx
	float v51; // xmm8_4
	float v52; // xmm7_4
	__m128 v53; // xmm0
	__int64 v54; // rax
	__m128 v55; // xmm0
	__int64 v56; // rax
	__int64 v57; // r8
	__m128* v58; // rbx
	__m128* v59; // rax
	__m128 v60; // xmm10
	__m128* v61; // rax
	_QWORD* v62; // rbx
	__int64 v63; // r14
	int v64; // r8d
	unsigned int v65; // eax
	unsigned __int64 v66; // r8
	unsigned __int64 v67; // rdx
	unsigned int v68; // r9d
	unsigned __int64 v69; // rcx
	__int64 v70; // rax
	__int64 v71; // r15
	__int64 v72; // r14
	__int64 v73; // r12
	__int64 v74; // rbx
	double v75; // xmm0_8
	unsigned __int64 v76; // rdx
	unsigned __int64 v77; // rcx
	float v78; // xmm2_4
	unsigned __int64 v79; // rax
	__int64 v80; // rax
	int v81; // r8d
	unsigned int v82; // eax
	unsigned __int64 v83; // r8
	unsigned __int64 v84; // rcx
	__int64 v85; // r8
	__int64 v86; // r14
	__int64 v87; // r15
	__int64 v88; // rcx
	int v89; // r13d
	int v90; // r12d
	unsigned int* v91; // r8
	__m128 v92; // xmm9
	__m128 v93; // xmm6
	__m128 v94; // xmm7
	__m128 v95; // xmm8
	__int64 v96; // r10
	__int64 v97; // rcx
	__m128* v98; // rcx
	__int64 v99; // rbx
	__m128 v100; // xmm1
	unsigned int v101; // r9d
	__m128 v102; // xmm1
	unsigned __int8 v103; // dl
	__int64 v104; // rax
	__m128* v105; // rcx
	__m128 v106; // xmm1
	__m128 v107; // xmm1
	__m128 v108; // xmm3
	__m128 v109; // xmm2
	__m128 v110; // xmm1
	__m128 v111; // xmm3
	__m128 v112; // xmm3
	__int64 v113; // r13
	float v114; // xmm3_4
	__int64 v115; // r11
	unsigned __int16* v116; // r15
	float v117; // xmm1_4
	float v118; // xmm0_4
	float v119; // xmm4_4
	float v120; // xmm1_4
	unsigned int v121; // edx
	unsigned int v122; // edx
	int v123; // edx
	int v124; // ecx
	unsigned int v125; // edx
	unsigned int v126; // eax
	int i; // ecx
	char v128; // r9
	float v129; // xmm0_4
	unsigned int v130; // edx
	unsigned int v131; // edx
	unsigned __int64 v132; // r10
	unsigned __int64 v133; // r11
	float v134; // xmm1_4
	unsigned __int64 v135; // r9
	int v136; // r10d
	double v137; // xmm0_8
	unsigned __int64 v138; // r11
	unsigned __int64 v139; // r10
	float v140; // xmm1_4
	unsigned __int64 v141; // r9
	unsigned __int64 v142; // r11
	int v143; // r15d
	unsigned __int64 v144; // r10
	unsigned __int64 v145; // r9
	__int64 v146; // rdx
	__m128 v147; // xmm6
	__m128 v148; // xmm7
	__m128 v149; // xmm8
	__int64 v150; // r9
	__m128 v151; // xmm14
	__int64 v152; // rax
	__m128 v153; // xmm9
	int v154; // esi
	__int64 v155; // rdi
	__int64 v156; // r15
	char v157; // cl
	__int64 v158; // r14
	int v159; // r12d
	int v160; // r13d
	int v161; // ecx
	__int64 v162; // rdx
	int v163; // r8d
	__m128 v164; // xmm3
	__int64 v165; // rcx
	int v166; // r8d
	int v167; // r10d
	__int64 v168; // r11
	__int64 v169; // r11
	__int64 v170; // rcx
	__m128* v171; // rcx
	unsigned int v172; // r10d
	__m128 v173; // xmm1
	__int64 v174; // rdx
	__m128 v175; // xmm1
	unsigned __int8 v176; // r8
	__int64 v177; // rax
	__m128* v178; // rcx
	__m128 v179; // xmm1
	__m128 v180; // xmm1
	__int64 v181; // rax
	__m128 v182; // xmm3
	__m128 v183; // xmm2
	__m128 v184; // xmm1
	__m128 v185; // xmm3
	__m128 v186; // xmm3
	__m128 v187; // xmm4
	__m128 v188; // xmm2
	__m128 v189; // xmm1
	float v190; // xmm0_4
	double v191; // xmm0_8
	__int64* v192; // rcx
	__int64 v193; // rax
	float v194; // xmm13_4
	__int64* v195; // rax
	__int64 v196; // rcx
	__m128 v197; // xmm2
	__m128 v198; // xmm1
	__m128 v199; // xmm2
	__m128 v200; // xmm0
	__m128 v201; // xmm1
	__m128* v202; // rax
	__int64 v203; // r8
	unsigned int* v204; // rdx
	__m128 v205; // xmm2
	__m128* v206; // rcx
	__m128 v207; // xmm0
	__m128 v208; // xmm1
	__m128 v209; // xmm4
	__m128 v210; // xmm2
	__m128 v211; // xmm2
	__m128 v212; // xmm4
	__m128 v213; // xmm5
	__m128 v214; // xmm3
	float v215; // xmm1_4
	__m128 v216; // xmm7
	__m128 v217; // xmm3
	__m128 v218; // xmm2
	float v219; // xmm0_4
	__m128 v220; // xmm1
	float v221; // [rsp+38h] [rbp-D0h]
	int v222; // [rsp+3Ch] [rbp-CCh] BYREF
	__m128 v223; // [rsp+48h] [rbp-C0h] BYREF
	int v224[2]; // [rsp+58h] [rbp-B0h]
	_QWORD v225[3]; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v226; // [rsp+78h] [rbp-90h]
	__m128 v227; // [rsp+88h] [rbp-80h]
	__m128 v228; // [rsp+98h] [rbp-70h] BYREF
	__m128* v229; // [rsp+A8h] [rbp-60h]
	__m128* v230; // [rsp+B0h] [rbp-58h]
	__int64 v231; // [rsp+B8h] [rbp-50h]
	__m128* v232; // [rsp+C0h] [rbp-48h]
	__int64 v233; // [rsp+C8h] [rbp-40h]
	__m128* v234; // [rsp+D0h] [rbp-38h]
	_OWORD* v235; // [rsp+D8h] [rbp-30h]
	__m128 v236; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v237; // [rsp+F8h] [rbp-10h]
	__m128 v238; // [rsp+108h] [rbp+0h] BYREF
	__m128 v239; // [rsp+118h] [rbp+10h]
	__m128 v240; // [rsp+128h] [rbp+20h]
	__m128 v241; // [rsp+138h] [rbp+30h]
	__m128* v242[6]; // [rsp+158h] [rbp+50h] BYREF
	int v243; // [rsp+188h] [rbp+80h]
	int v244; // [rsp+18Ch] [rbp+84h]
	__int64 v245; // [rsp+1A8h] [rbp+A0h] BYREF
	float v246; // [rsp+1B0h] [rbp+A8h]
	__int128 v247[3]; // [rsp+1B8h] [rbp+B0h]

	v9 = a5;
	v10 = a6;
	*(_OWORD*)&v225[1] = 0i64;
	v229 = a7;
	v11 = (__int64)a4;
	v235 = a4;
	v12 = a2;
	v13 = *(_QWORD*)(a1 + 416);
	v232 = a8;
	v14 = a1;
	v15 = *(_WORD*)(v13 + 8);
	v245 = a1;
	v234 = a5;
	v230 = a6;
	if (v15 < 8u)
	{
		switch (v15)
		{
		case 0u:
			*(_OWORD*)v11 = 0i64;
			goto LABEL_17;
		case 1u:
			v16 = **(float**)(a1 + 432);
			if ((*(_BYTE*)(v13 + 10) & 1) != 0)
			{
				v17 = *(float*)(a1 + 980);
				*(_QWORD*)(v11 + 4) = 0i64;
				*(float*)v11 = (float)(v17 - (float)(v16 * 0.5)) + (float)((float)((float)(int)v12 * v16) / (float)(int)a3);
			}
			else
			{
				v18 = (*(float(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
					*(_QWORD*)(a1 + 56),
					v13,
					a3,
					v12);
				*(_QWORD*)(v11 + 4) = 0i64;
				*(float*)v11 = v18;
			}
			goto LABEL_17;
		case 3u:
			v19 = (*(double(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
				*(_QWORD*)(a1 + 56),
				v13,
				a3,
				v12);
			*(_QWORD*)v11 = LODWORD(v19);
			*(float*)(v11 + 8) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			*(_OWORD*)&v225[1] = *(_OWORD*)v11;
			goto LABEL_18;
		case 4u:
			v20 = (*(double(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
				*(_QWORD*)(a1 + 56),
				v13,
				a3,
				v12);
			*(_DWORD*)v11 = LODWORD(v20);
			v21 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			*(_DWORD*)(v11 + 4) = LODWORD(v21);
			*(float*)(v11 + 8) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			*(_OWORD*)&v225[1] = *(_OWORD*)v11;
			goto LABEL_18;
		case 5u:
			if ((*(_BYTE*)(v13 + 10) & 1) != 0)
			{
				v22 = *(float*)(a1 + 980);
				*(_QWORD*)&v23 = **(unsigned int**)(a1 + 456);
				*(float*)&v23 = (float)((float)((float)(*(float*)&v23 - **(float**)(a1 + 448)) * (float)(int)v12)
					/ (float)(int)a3)
					+ (float)(**(float**)(a1 + 448) + *(float*)(a1 + 984));
			}
			else
			{
				v24 = (*(double(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
					*(_QWORD*)(a1 + 56),
					*(_QWORD*)(a1 + 432),
					**(_QWORD**)(a1 + 56),
					v12);
				v22 = *(float*)&v24;
				v23 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			}
			v25 = sub_1408FC950(v23);
			*(_DWORD*)(v11 + 4) = 0;
			*(float*)v11 = v25 * v22;
			*(float*)(v11 + 8) = sub_1408FE3D0(v23) * v22;
			goto LABEL_17;
		case 6u:
			do
			{
				v26 = (*(double(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(v14 + 56) + 56i64))(
					*(_QWORD*)(v14 + 56),
					v13,
					a3,
					v12);
				*(_DWORD*)v11 = LODWORD(v26);
				v27 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
				*(_DWORD*)(v11 + 4) = LODWORD(v27);
				v28 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
				v29 = *(float*)v11 == 0.0;
				*(float*)(v11 + 8) = v28;
			} while (v29 && *(float*)(v11 + 4) == 0.0 && v28 == 0.0);
			v30 = 0i64;
			v31 = _mm_mul_ps(*(__m128*)v11, *(__m128*)v11);
			v31.m128_f32[0] = (float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
				+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
			v32 = 1.0 / fsqrt(v31.m128_f32[0]);
			v33 = 0i64;
			v30.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v31.m128_f32[0] * v32) * v32)) * 0.5) * v32, 0.0);
			*(__m128*)v11 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), *(__m128*)v11);
			*(double*)v33.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			*(__m128*)v11 = _mm_mul_ps(*(__m128*)v11, _mm_shuffle_ps(v33, v33, 0));
		LABEL_17:
			*(_OWORD*)&v225[1] = *(_OWORD*)v11;
		LABEL_18:
			if (**(_BYTE**)(v14 + 416) == 2)
			{
				v34 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
				*(_DWORD*)v11 = LODWORD(v34);
				v35 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
				*(_DWORD*)(v11 + 4) = LODWORD(v35);
				*(float*)(v11 + 8) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			}
			v36 = _mm_add_ps(
				*a9,
				_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(*(__m128*)v11, *(__m128*)v11, 0), *a6),
							_mm_mul_ps(_mm_shuffle_ps(*(__m128*)v11, *(__m128*)v11, 85), a6[1])),
						_mm_mul_ps(_mm_shuffle_ps(*(__m128*)v11, *(__m128*)v11, 170), a6[2])),
					a6[3]));
			*(__m128*)v11 = v36;
			if ((*(_BYTE*)(*(_QWORD*)(v14 + 416) + 3784i64) & 1) != 0)
			{
				v37 = 0i64;
				v38 = _mm_sub_ps(*(__m128*)(v14 + 960), v36);
				v39 = _mm_mul_ps(v38, v38);
				v39.m128_f32[0] = (float)(v39.m128_f32[0] + _mm_shuffle_ps(v39, v39, 85).m128_f32[0])
					+ _mm_shuffle_ps(v39, v39, 170).m128_f32[0];
				v40 = 1.0 / fsqrt(v39.m128_f32[0]);
				v37.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v39.m128_f32[0] * v40) * v40)) * 0.5) * v40,
					0.0);
				v41 = _mm_mul_ps(
					_mm_shuffle_ps((__m128) * (unsigned int*)(v14 + 784), (__m128) * (unsigned int*)(v14 + 784), 0),
					_mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), v38));
			}
			else
			{
				sub_14032CA60(v14, &v223, (__m128*)(v14 + 624));
				sub_14032CA60(v14, (__m128*) & v225[1], (__m128*) & v225[1]);
				v42 = _mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps((__m128) * (unsigned int*)(v14 + 832), (__m128) * (unsigned int*)(v14 + 832), 0),
						*(__m128*) & v225[1]),
					_mm_mul_ps(
						_mm_shuffle_ps((__m128) * (unsigned int*)(v14 + 784), (__m128) * (unsigned int*)(v14 + 784), 0),
						v223));
				*a5 = v42;
				*a5 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), *a6),
						_mm_mul_ps(_mm_shuffle_ps(v42, v42, 85), a6[1])),
					_mm_mul_ps(_mm_shuffle_ps(v42, v42, 170), a6[2]));
				sub_14032CA60(v14, &v223, (__m128*)(v14 + 656));
				v41 = _mm_add_ps(*a5, v223);
			}
			*a5 = v41;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
			break;
		default:
			return 0i64;
		}
		goto LABEL_155;
	}
	if (v15 != 12)
	{
		if (v15 == 8)
			goto LABEL_62;
		if (v15 == 9)
		{
		LABEL_55:
			v62 = *(_QWORD**)(a1 + 40);
		LABEL_56:
			v63 = *(_QWORD*)(v62[7] + 64i64);
			if ((*(_BYTE*)(v13 + 10) & 4) != 0)
			{
				v64 = *(_DWORD*)(a1 + 1004);
				if (!v64)
					return 0i64;
				v65 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					(unsigned int)(v64 - 1),
					v12);
				v66 = *(unsigned int*)(v63 + 128);
				v67 = 1i64;
				v68 = v65;
				while (v67 < v66)
				{
					v69 = v67 + ((v66 - v67) >> 1);
					if (v65 < *(_DWORD*)(*(_QWORD*)(v14 + 1008) + 4 * v69))
						v66 = v67 + ((v66 - v67) >> 1);
					else
						v67 = v69 + 1;
				}
				v80 = *(_QWORD*)(v14 + 1008);
			}
			else
			{
				v81 = *(_DWORD*)(v63 + 144);
				if (!v81)
					return 0i64;
				v82 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
					*(_QWORD*)(a1 + 56),
					0i64,
					(unsigned int)(v81 - 1),
					v12);
				v83 = *(unsigned int*)(v63 + 128);
				v67 = 1i64;
				v68 = v82;
				while (v67 < v83)
				{
					v84 = v67 + ((v83 - v67) >> 1);
					if (v82 < *(_DWORD*)(*(_QWORD*)(v63 + 160) + 4 * v84))
						v83 = v67 + ((v83 - v67) >> 1);
					else
						v67 = v84 + 1;
				}
				v80 = *(_QWORD*)(v63 + 160);
			}
			v85 = *(_QWORD*)(v63 + 136) + 112 * (v67 - 1);
			v86 = v68 + *(_DWORD*)(v85 + 4) - *(_DWORD*)(v80 + 4 * v67 - 4);
			v87 = *(_QWORD*)(v62[8] + 440i64) + 2i64 * *(unsigned __int16*)(v85 + 16);
			v88 = v62[7] + 216i64;
			v90 = *(_DWORD*)(v86 * *(_QWORD*)(v62[7] + 344i64) + *(_QWORD*)(v62[7] + 256i64));
			v241.m128_i32[0] = *(_DWORD*)(v86 * *(_QWORD*)(v62[7] + 336i64) + *(_QWORD*)(v62[7] + 248i64));
			v89 = v241.m128_i32[0];
			v241.m128_i32[1] = v90;
			sub_14030A8A0(v88, &v236, (unsigned int)v86);
			sub_1407B08C0((unsigned __int8*)(*(_QWORD*)(v62[7] + 232i64) + v86 * *(_QWORD*)(v62[7] + 320i64)), &v223);
			v227 = v223;
			if (v89 || v90)
			{
				v96 = v62[103];
				v97 = *(unsigned __int16*)(v87 + 2i64 * v241.m128_u8[0]);
				v222 = v89;
				v221 = *(float*)&v90;
				v98 = (__m128*)(v96 + (v97 << 6));
				v99 = 0i64;
				v100 = (__m128)COERCE_UNSIGNED_INT((float)v241.m128_u8[4]);
				v101 = 1;
				v100.m128_f32[0] = v100.m128_f32[0] * 0.0039215689;
				v102 = _mm_shuffle_ps(v100, v100, 0);
				v95 = _mm_mul_ps(*v98, v102);
				v94 = _mm_mul_ps(v98[1], v102);
				v93 = _mm_mul_ps(v98[2], v102);
				v92 = _mm_mul_ps(v98[3], v102);
				do
				{
					v103 = *((_BYTE*)&v221 + v99 + 1);
					if (!v103)
						break;
					v104 = *((unsigned __int8*)&v222 + v99 + 1);
					++v101;
					++v99;
					v105 = (__m128*)(v96 + ((unsigned __int64)*(unsigned __int16*)(v87 + 2 * v104) << 6));
					v106 = (__m128)COERCE_UNSIGNED_INT((float)v103);
					v106.m128_f32[0] = v106.m128_f32[0] * 0.0039215689;
					v107 = _mm_shuffle_ps(v106, v106, 0);
					v95 = _mm_add_ps(_mm_mul_ps(*v105, v107), v95);
					v94 = _mm_add_ps(_mm_mul_ps(v105[1], v107), v94);
					v93 = _mm_add_ps(_mm_mul_ps(v105[2], v107), v93);
					v92 = _mm_add_ps(_mm_mul_ps(v105[3], v107), v92);
				} while (v101 < 4);
			}
			else
			{
				v92 = v241;
				v93 = v240;
				v94 = v239;
				v95 = v238;
			}
			v44 = 0i64;
			v108 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * v91, (__m128)v91[2]),
				_mm_unpacklo_ps((__m128)v91[1], (__m128)0i64));
			v109 = (__m128)v227.m128_u32[1];
			v110 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v108, v108, 85), v94),
					_mm_mul_ps(_mm_shuffle_ps(v108, v108, 0), v95)),
				_mm_mul_ps(_mm_shuffle_ps(v108, v108, 170), v93));
			v111 = _mm_unpacklo_ps((__m128)v227.m128_u32[0], (__m128)v227.m128_u32[2]);
			*(__m128*)v11 = _mm_add_ps(v110, v92);
			v112 = _mm_unpacklo_ps(v111, _mm_unpacklo_ps(v109, (__m128)0i64));
			v60 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v112, v112, 85), v94),
					_mm_mul_ps(_mm_shuffle_ps(v112, v112, 0), v95)),
				_mm_mul_ps(_mm_shuffle_ps(v112, v112, 170), v93));
			goto LABEL_141;
		}
		if (v15 != 10)
		{
			if (v15 != 11)
				return 0i64;
			v62 = *(_QWORD**)(*(_QWORD*)(a1 + 40) + 1216i64);
			if (v62)
				goto LABEL_56;
			goto LABEL_55;
		}
		v70 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64);
		v226 = v70;
		if (!v70)
		{
		LABEL_62:
			v70 = *(_QWORD*)(a1 + 40);
			v226 = v70;
		}
		v71 = *(_QWORD*)(*(_QWORD*)(v70 + 56) + 64i64);
		if (!*(_DWORD*)(v71 + 168))
			return 0i64;
		v72 = *(_QWORD*)(v71 + 176);
		v73 = *(_QWORD*)(v71 + 192);
		v74 = 0i64;
		if ((*(_BYTE*)(v13 + 10) & 4) != 0)
		{
			if (!*(_QWORD*)(a1 + 1032))
				return 0i64;
			v44 = 0i64;
			v75 = (*(double(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
				*(_QWORD*)(a1 + 56),
				**(_QWORD**)(a1 + 56),
				*(unsigned int*)(v71 + 128),
				v12);
			v76 = *(unsigned int*)(v71 + 128);
			v77 = 1i64;
			v78 = *(float*)&v75;
			while (v77 < v76)
			{
				v79 = v77 + ((v76 - v77) >> 1);
				if (*(float*)&v75 < *(float*)(*(_QWORD*)(v14 + 1024) + 4 * v79))
					v76 = v77 + ((v76 - v77) >> 1);
				else
					v77 = v79 + 1;
			}
			v113 = *(_QWORD*)(v71 + 136) + 112 * (v77 - 1);
			v114 = *(float*)(*(_QWORD*)(v14 + 1024) + 4 * v77) - *(float*)(*(_QWORD*)(v14 + 1024) + 4 * v77 - 4);
			if (v114 < 0.0000099999997)
				return 0i64;
			v115 = *(unsigned int*)(v73 + 4 * v77);
			v224[0] = *(_DWORD*)(v73 + 4 * v77 - 4);
			v116 = (unsigned __int16*)(v72 + 2i64 * (unsigned int)(v224[0] + 1));
			v117 = sub_1401C9770((unsigned __int16*)(v72 + 2 * v115));
			v118 = sub_1401C9770(v116);
			v120 = (float)(v117 - v118) * (float)((float)(v78 - v119) / v114);
			v221 = v120;
			v121 = LODWORD(v120) & 0x7FFFFFFF;
			if ((LODWORD(v120) & 0x7FFFFFFFu) >= 0x33800000)
			{
				if (v121 > 0x387FEFFF)
				{
					if (v121 > 0x47FFEFFF)
						LOWORD(v122) = 17407;
					else
						v122 = (v121 - 939520000) >> 13;
				}
				else
				{
					v122 = (((LODWORD(v120) & 0x7FFFFF | 0x800000u) >> (113 - (v121 >> 23))) + 4096) >> 13;
				}
			}
			else
			{
				LOWORD(v122) = 0;
			}
			v123 = HIWORD(v120) & 0x8000 | (unsigned __int16)v122;
			v124 = v123 & 0xFFFF7FFF;
			v125 = (v123 & 0xFFFF8000) << 16;
			if ((v124 & 0x7C00) != 0)
			{
				v124 = (v124 + 114688) << 13;
			}
			else if ((v124 & 0x3FF) != 0)
			{
				v126 = (v124 & 0x3FF) << 13;
				for (i = 113; v126 <= 0x7FFFFF; --i)
					v126 *= 2;
				v124 = v126 & 0x7FFFFF | (i << 23);
			}
			v129 = sub_1401C9770(v116) + COERCE_FLOAT(v125 | v124);
			v221 = v129;
			v130 = LODWORD(v129) & 0x7FFFFFFF;
			if ((LODWORD(v129) & 0x7FFFFFFFu) >= 0x33800000)
			{
				if (v130 > 0x387FEFFF)
				{
					if (v130 > 0x47FFEFFF)
						LOWORD(v131) = 17407;
					else
						v131 = (v130 - 939520000) >> 13;
				}
				else
				{
					v131 = (((LODWORD(v129) & 0x7FFFFF | 0x800000u) >> (v128 - (v130 >> 23))) + 4096) >> 13;
				}
			}
			else
			{
				LOWORD(v131) = 0;
			}
			LOWORD(v222) = HIWORD(v129) & 0x8000 | v131;
			v134 = sub_1401C9770((unsigned __int16*)&v222);
			while (v132 < v133)
			{
				if (v134 < sub_1401C9770((unsigned __int16*)(v72 + 2 * (v132 + ((v133 - v132) >> 1)))))
					v133 = v135;
				else
					v132 = v135 + 1;
			}
			v136 = v132 - v224[0];
		}
		else
		{
			v44 = 0i64;
			v137 = (*(double(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
				*(_QWORD*)(a1 + 56),
				v13,
				a3,
				v12);
			v138 = *(unsigned int*)(v71 + 128);
			v139 = 1i64;
			v140 = *(float*)&v137;
			while (v139 < v138)
			{
				if (v140 < sub_1401C9770((unsigned __int16*)(v72
					+ 2i64 * *(unsigned int*)(v73 + 4 * (v139 + ((v138 - v139) >> 1))))))
					v138 = v141;
				else
					v139 = v141 + 1;
			}
			v142 = *(unsigned int*)(v73 + 4 * v139);
			v113 = *(_QWORD*)(v71 + 136) + 112 * (v139 - 1);
			v143 = *(_DWORD*)(v73 + 4 * (v139 - 1));
			v144 = (unsigned int)(v143 + 1);
			while (v144 < v142)
			{
				if (v140 < sub_1401C9770((unsigned __int16*)(v72 + 2 * (v144 + ((v142 - v144) >> 1)))))
					v142 = v145;
				else
					v144 = v145 + 1;
			}
			v136 = v144 - v143;
		}
		v146 = *(unsigned __int16*)(v113 + 16);
		v147 = v240;
		v148 = v239;
		v149 = v238;
		v60 = 0i64;
		v150 = *(_QWORD*)(v226 + 56);
		v221 = *(float*)(v113 + 4);
		v151 = 0i64;
		v151.m128_f32[0] = 3.0;
		v152 = *(_QWORD*)(v150 + 64);
		v153 = v241;
		v154 = LODWORD(v221);
		v155 = *(_QWORD*)(v152 + 120);
		v156 = *(_QWORD*)(*(_QWORD*)(v226 + 64) + 440i64) + 2 * v146;
		v157 = *(_BYTE*)(v152 + 109);
		v158 = (unsigned int)(*(_DWORD*)v113 + 3 * (v136 - 1));
		v159 = 0;
		v231 = 0i64;
		LOBYTE(v222) = v157;
		v160 = 0;
		v233 = 3i64;
		do
		{
			if (v157 == 1)
				v161 = *(unsigned __int16*)(v155 + 2 * v158);
			else
				v161 = *(_DWORD*)(v155 + 4 * v158);
			v162 = (unsigned int)(v154 + v161);
			v29 = *(_DWORD*)(v150 + 392) == 1;
			v163 = *(_DWORD*)(v162 * *(_QWORD*)(v150 + 344) + *(_QWORD*)(v150 + 256));
			v243 = *(_DWORD*)(v162 * *(_QWORD*)(v150 + 336) + *(_QWORD*)(v150 + 248));
			v244 = v163;
			if (v29)
				v164 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(v150 + 216) + v162 * *(_QWORD*)(v150 + 304)),
						(__m128) * (unsigned int*)(*(_QWORD*)(v150 + 216) + v162 * *(_QWORD*)(v150 + 304) + 8)),
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(v150 + 216) + v162 * *(_QWORD*)(v150 + 304) + 4),
						v44));
			else
				v164 = _mm_mul_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)(v150 + 216)
								+ v162 * *(_QWORD*)(v150 + 304))),
							(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)(v150 + 216)
								+ v162 * *(_QWORD*)(v150 + 304)
								+ 4))),
						_mm_unpacklo_ps(
							(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)(v150 + 216)
								+ v162 * *(_QWORD*)(v150 + 304)
								+ 2)),
							v44)),
					(__m128)xmmword_140B7AB30);
			v165 = *(_QWORD*)(v150 + 320);
			v227 = v164;
			sub_1407B08C0((unsigned __int8*)(*(_QWORD*)(v150 + 232) + v162 * v165), &v228);
			v223 = v228;
			if (v160 != v167 || v159 != v166)
			{
				v169 = *(_QWORD*)(v168 + 824);
				v160 = v167;
				v170 = *(unsigned __int16*)(v156 + 2i64 * (unsigned __int8)v243);
				v221 = *(float*)&v167;
				v159 = v166;
				v171 = (__m128*)(v169 + (v170 << 6));
				v224[0] = v166;
				v172 = 1;
				v173 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)v244);
				v174 = 0i64;
				v173.m128_f32[0] = v173.m128_f32[0] * 0.0039215689;
				v175 = _mm_shuffle_ps(v173, v173, 0);
				v149 = _mm_mul_ps(*v171, v175);
				v148 = _mm_mul_ps(v171[1], v175);
				v147 = _mm_mul_ps(v171[2], v175);
				v153 = _mm_mul_ps(v171[3], v175);
				do
				{
					v176 = *((_BYTE*)v224 + v174 + 1);
					if (!v176)
						break;
					v177 = *((unsigned __int8*)&v221 + v174 + 1);
					++v172;
					++v174;
					v178 = (__m128*)(v169 + ((unsigned __int64)*(unsigned __int16*)(v156 + 2 * v177) << 6));
					v179 = (__m128)COERCE_UNSIGNED_INT((float)v176);
					v179.m128_f32[0] = v179.m128_f32[0] * 0.0039215689;
					v180 = _mm_shuffle_ps(v179, v179, 0);
					v149 = _mm_add_ps(_mm_mul_ps(*v178, v180), v149);
					v148 = _mm_add_ps(_mm_mul_ps(v178[1], v180), v148);
					v147 = _mm_add_ps(_mm_mul_ps(v178[2], v180), v147);
					v153 = _mm_add_ps(_mm_mul_ps(v178[3], v180), v153);
				} while (v172 < 4);
			}
			v157 = v222;
			v181 = v231 + 16;
			v158 = (unsigned int)(v158 + 1);
			v29 = v233-- == 1;
			v231 = v181;
			v182 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v227.m128_u32[0], (__m128)v227.m128_u32[2]),
				_mm_unpacklo_ps((__m128)v227.m128_u32[1], v44));
			v183 = (__m128)v223.m128_u32[1];
			v184 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v182, v182, 0), v149),
					_mm_mul_ps(_mm_shuffle_ps(v182, v182, 85), v148)),
				_mm_mul_ps(_mm_shuffle_ps(v182, v182, 170), v147));
			v185 = _mm_unpacklo_ps((__m128)v223.m128_u32[0], (__m128)v223.m128_u32[2]);
			*(__m128*)((char*)&v245 + v181) = _mm_add_ps(v184, v153);
			v186 = _mm_unpacklo_ps(v185, _mm_unpacklo_ps(v183, v44));
			v187 = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v186, v186, 0), v149),
					_mm_mul_ps(_mm_shuffle_ps(v186, v186, 85), v148)),
				_mm_mul_ps(_mm_shuffle_ps(v186, v186, 170), v147));
			v188 = _mm_mul_ps(v187, v187);
			v188.m128_f32[0] = (float)(v188.m128_f32[0] + _mm_shuffle_ps(v188, v188, 85).m128_f32[0])
				+ _mm_shuffle_ps(v188, v188, 170).m128_f32[0];
			v189 = v151;
			v190 = 1.0 / fsqrt(v188.m128_f32[0]);
			v189.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v188.m128_f32[0] * v190) * v190)) * 0.5) * v190,
				0.0);
			*(__m128*)((char*)&v237 + v181) = _mm_mul_ps(_mm_shuffle_ps(v189, v189, 0), v187);
		} while (!v29);
		v14 = v245;
		v191 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v245 + 56) + 56i64))(*(_QWORD*)(v245 + 56));
		v192 = *(__int64**)(v14 + 56);
		v193 = *v192;
		v194 = 1.0 - *(float*)&v191;
		LODWORD(v245) = LODWORD(v191);
		*(float*)&v191 = (*(float(__fastcall**)(__int64*))(v193 + 56))(v192);
		v11 = (__int64)v235;
		v195 = &v245;
		v196 = 3i64;
		HIDWORD(v245) = LODWORD(v191);
		*v235 = 0i64;
		v246 = v194 - *(float*)&v191;
		do
		{
			v197 = (__m128) * (unsigned int*)v195;
			v198 = (__m128)v247[v74++];
			v195 = (__int64*)((char*)v195 + 4);
			v199 = _mm_shuffle_ps(v197, v197, 0);
			v200 = _mm_add_ps(*(__m128*)v11, _mm_mul_ps(v198, v199));
			v201 = _mm_mul_ps(*(__m128*)((char*)&v237 + v74 * 16), v199);
			*(__m128*)v11 = v200;
			v60 = _mm_add_ps(v201, v60);
			--v196;
		} while (v196);
	LABEL_141:
		v10 = v230;
		v9 = v234;
		goto LABEL_142;
	}
	if (*(_DWORD*)(a1 + 24) < 2u || !*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64))
		return 0i64;
	v44 = 0i64;
	v45 = (*(double(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(
		*(_QWORD*)(a1 + 56),
		v13,
		a3,
		v12);
	v46 = 0;
	v47 = *(_DWORD*)(v14 + 24) - 2;
	v48 = *(float*)&v45;
	if (v47 < 4)
	{
	LABEL_35:
		if (v46 < v47)
		{
			do
			{
				v50 = v46 + 1;
				if (*(float*)&v45 <= *(float*)(v14 + 4 * v50 + 988))
					break;
				++v46;
			} while ((unsigned int)v50 < v47);
		}
	}
	else
	{
		v49 = 2;
		while (*(float*)&v45 > *(float*)(v14 + 4i64 * (v49 - 1) + 988))
		{
			if (*(float*)&v45 <= *(float*)(v14 + 4i64 * v49 + 988))
			{
				++v46;
				break;
			}
			if (*(float*)&v45 <= *(float*)(v14 + 4i64 * (v49 + 1) + 988))
			{
				v46 += 2;
				break;
			}
			if (*(float*)&v45 <= *(float*)(v14 + 4i64 * (v49 + 2) + 988))
			{
				v46 += 3;
				break;
			}
			v46 += 4;
			v49 += 4;
			if (v46 >= *(_DWORD*)(v14 + 24) - 5)
				goto LABEL_35;
		}
	}
	v51 = *(float*)(v14 + 4i64 * v46 + 988);
	v52 = *(float*)(v14 + 4i64 * (v46 + 1) + 988);
	v53 = (__m128)LODWORD(v52);
	if ((float)(v52 - v51) == 0.0)
	{
		v54 = *(_QWORD*)(v14 + 32);
		if (v54)
			v55 = *(__m128*)(v54 + 16i64 * v46);
		else
			v55 = 0i64;
	}
	else
	{
		v56 = (*(__int64(__fastcall**)(_QWORD, __m128*, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(v14 + 40) + 1216i64)
			+ 856i64))(
				*(_QWORD*)(*(_QWORD*)(v14 + 40) + 1216i64),
				&v228,
				(unsigned int)dword_140AF1508[v46 + 1],
				0i64);
		v57 = (unsigned int)dword_140AF1508[v46];
		v58 = (__m128*)v56;
		v59 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(v14 + 40)
			+ 1216i64)
			+ 856i64))(
				*(_QWORD*)(*(_QWORD*)(v14 + 40) + 1216i64),
				&v223,
				v57,
				0i64);
		v53.m128_f32[0] = (float)(v48 - v51) / (float)(v52 - v51);
		v55 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), _mm_sub_ps(*v58, *v59)), *v59);
	}
	*(__m128*)v11 = v55;
	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(v14 + 40) + 1216i64) + 848i64))(
		*(_QWORD*)(*(_QWORD*)(v14 + 40) + 1216i64),
		31i64))
	{
		(*(void(__fastcall**)(_QWORD, __m128*, __int64))(**(_QWORD**)(*(_QWORD*)(v14 + 40) + 1216i64) + 856i64))(
			*(_QWORD*)(*(_QWORD*)(v14 + 40) + 1216i64),
			&v223,
			31i64);
		v60 = _mm_sub_ps(*(__m128*)v11, v223);
	}
	else
	{
		v61 = *(__m128**)(v14 + 32);
		v60 = *(__m128*)v11;
		if (v61)
			v60 = _mm_sub_ps(v60, *v61);
	}
LABEL_142:
	v202 = v232;
	*(__m128*)v11 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)v11, *(__m128*)v11, 85), v232[1]),
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)v11, *(__m128*)v11, 0), *v232)),
			_mm_mul_ps(_mm_shuffle_ps(*(__m128*)v11, *(__m128*)v11, 170), v232[2])),
		v232[3]);
	v203 = *(_QWORD*)(v14 + 416);
	if ((*(_BYTE*)(v203 + 10) & 2) == 0)
	{
		v206 = v229;
		goto LABEL_151;
	}
	v204 = *(unsigned int**)(v14 + 432);
	v205 = (__m128) * *(unsigned int**)(v14 + 448);
	v206 = v229;
	v207 = (__m128) * *(unsigned int**)(v14 + 464);
	v237 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * *(unsigned int**)(v14 + 440), (__m128) * *(unsigned int**)(v14 + 472)),
		_mm_unpacklo_ps((__m128) * *(unsigned int**)(v14 + 456), v44));
	v208 = *(__m128*)v11;
	v209 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * v204, v207), _mm_unpacklo_ps(v205, v44));
	v210 = *(__m128*)v11;
	v236 = v209;
	v211 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v210, v208, 85), v229[1]),
				_mm_mul_ps(_mm_shuffle_ps(v208, v208, 0), *v229)),
			_mm_mul_ps(_mm_shuffle_ps(v208, v208, 170), v229[2])),
		v229[3]);
	v223 = v211;
	if (v211.m128_f32[0] < v209.m128_f32[0]
		|| v211.m128_f32[0] >= v237.m128_f32[0]
		|| v223.m128_f32[1] < v236.m128_f32[1]
		|| v223.m128_f32[1] >= v237.m128_f32[1]
		|| v223.m128_f32[2] < v236.m128_f32[2]
		|| v223.m128_f32[2] >= v237.m128_f32[2])
	{
		return 0i64;
	}
	v202 = v232;
LABEL_151:
	if ((*(_BYTE*)(v203 + 3784) & 1) != 0)
	{
		v212 = 0i64;
		v213 = _mm_sub_ps(*(__m128*)(v14 + 960), *(__m128*)v11);
		v214 = _mm_mul_ps(v213, v213);
		v214.m128_f32[0] = (float)(v214.m128_f32[0] + _mm_shuffle_ps(v214, v214, 85).m128_f32[0])
			+ _mm_shuffle_ps(v214, v214, 170).m128_f32[0];
		v215 = 1.0 / fsqrt(v214.m128_f32[0]);
		v212.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v214.m128_f32[0] * v215) * v215)) * 0.5) * v215, 0.0);
		v41 = _mm_mul_ps(
			_mm_shuffle_ps((__m128) * (unsigned int*)(v14 + 784), (__m128) * (unsigned int*)(v14 + 784), 0),
			_mm_mul_ps(_mm_shuffle_ps(v212, v212, 0), v213));
	}
	else
	{
		v223.m128_u64[0] = (unsigned __int64)v202;
		v223.m128_u64[1] = (unsigned __int64)v206;
		v242[0] = v202;
		v242[1] = v206;
		sub_1401AFB10(v242, &v238);
		v216 = 0i64;
		v217 = _mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v60, v60, 85), v239), _mm_mul_ps(_mm_shuffle_ps(v60, v60, 0), v238)),
			_mm_mul_ps(_mm_shuffle_ps(v60, v60, 170), v240));
		v218 = _mm_mul_ps(v217, v217);
		v218.m128_f32[0] = (float)(v218.m128_f32[0] + _mm_shuffle_ps(v218, v218, 85).m128_f32[0])
			+ _mm_shuffle_ps(v218, v218, 170).m128_f32[0];
		v219 = 1.0 / fsqrt(v218.m128_f32[0]);
		v216.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v218.m128_f32[0] * v219) * v219)) * 0.5) * v219, 0.0);
		*(__m128*)& v225[1] = _mm_mul_ps(_mm_shuffle_ps(v216, v216, 0), v217);
		sub_14032CA60(v14, &v228, (__m128*)(v14 + 624));
		sub_14032CA60(v14, (__m128*) & v225[1], (__m128*) & v225[1]);
		v220 = _mm_add_ps(
			_mm_mul_ps(
				_mm_shuffle_ps((__m128) * (unsigned int*)(v14 + 832), (__m128) * (unsigned int*)(v14 + 832), 0),
				*(__m128*) & v225[1]),
			_mm_mul_ps(
				_mm_shuffle_ps((__m128) * (unsigned int*)(v14 + 784), (__m128) * (unsigned int*)(v14 + 784), 0),
				v228));
		*v9 = v220;
		*v9 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v220, v220, 85), v10[1]),
				_mm_mul_ps(_mm_shuffle_ps(v220, v220, 0), *v10)),
			_mm_mul_ps(_mm_shuffle_ps(v220, v220, 170), v10[2]));
		sub_14032CA60(v14, &v228, (__m128*)(v14 + 656));
		v41 = _mm_add_ps(v228, *v9);
	}
	*v9 = v41;
	*(double*)v41.m128_u64 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v14 + 56) + 56i64))(*(_QWORD*)(v14 + 56));
LABEL_155:
	result = 1i64;
	*v9 = _mm_mul_ps(*v9, _mm_shuffle_ps(v41, v41, 0));
	return result;
}
// 14032DD4E: variable 'v13' is possibly undefined
// 14032DD4E: variable 'a3' is possibly undefined
// 14032DD4E: variable 'v12' is possibly undefined
// 14032E5CA: variable 'v91' is possibly undefined
// 14032E6BF: variable 'v119' is possibly undefined
// 14032E7E8: variable 'v128' is possibly undefined
// 14032E82D: variable 'v132' is possibly undefined
// 14032E82D: variable 'v133' is possibly undefined
// 14032E84A: variable 'v135' is possibly undefined
// 14032E899: variable 'v139' is possibly undefined
// 14032E893: variable 'v138' is possibly undefined
// 14032E8AE: variable 'v141' is possibly undefined
// 14032E8E9: variable 'v144' is possibly undefined
// 14032E8E3: variable 'v142' is possibly undefined
// 14032E8FA: variable 'v145' is possibly undefined
// 14032E9E4: variable 'v150' is possibly undefined
// 14032EA98: variable 'v167' is possibly undefined
// 14032EA9D: variable 'v166' is possibly undefined
// 14032EAAA: variable 'v168' is possibly undefined
// 140AF1508: using guessed type int dword_140AF1508[16];
// 140B7AB30: using guessed type __int128 xmmword_140B7AB30;
// 14032DA00: using guessed type __m128 var_190;

