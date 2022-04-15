//----- (0000000140169150) ----------------------------------------------------
char __fastcall sub_140169150(__int64 a1)
{
	unsigned int v2; // eax
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // r10
	__int64 v6; // r9
	int v7; // r11d
	__m128* v8; // rcx
	_QWORD* v9; // rcx
	int v10; // edi
	__int64 v11; // r9
	__int64 v12; // r8
	int v13; // esi
	unsigned int v14; // r14d
	__int64 v15; // rcx
	float v16; // xmm0_4
	float v17; // xmm0_4
	float v18; // xmm1_4
	int v19; // r15d
	int v20; // r12d
	int v21; // ecx
	int v22; // r10d
	int v23; // r11d
	int v24; // ecx
	int v25; // ecx
	_QWORD* v26; // rcx
	double v27; // xmm3_8
	float v28; // xmm5_4
	unsigned __int64 v29; // rcx
	float v30; // xmm4_4
	__m128 v31; // xmm1
	__m128 v32; // xmm2
	__m128 v33; // xmm5
	__int64 v34; // rax
	__int64 v35; // rdx
	__m128 v36; // xmm3
	__m128 v37; // xmm0
	unsigned __int64 v38; // rax
	__int64 v39; // rcx
	int v40; // ecx
	int v41; // ecx
	__m128 v42; // xmm0
	__m128 v43; // xmm3
	__m128 v44; // xmm0
	__m128 v45; // xmm0
	__m128 v46; // xmm0
	__int64 v47; // rax
	__int64 v48; // rcx
	__m128 v49; // xmm0
	__int64 v50; // rdx
	_QWORD* v51; // rcx
	unsigned __int64 v52; // r8
	__m128* v53; // r8
	int v54; // xmm0_4
	unsigned __int64 v55; // r8
	unsigned __int64 v56; // rcx
	unsigned __int64 v57; // rax
	__int64 v58; // rcx
	int v59; // ecx
	int v60; // ecx
	__m128 v61; // xmm0
	__m128 v62; // xmm0
	__int64 v63; // r9
	int v64; // eax
	int v65; // ecx
	int v66; // r10d
	int v67; // r11d
	int v68; // edi
	int v69; // esi
	int v70; // ecx
	int v71; // eax
	double v72; // xmm1_8
	__int64 v73; // rax
	_QWORD* v74; // rcx
	double v75; // xmm3_8
	int v76; // edx
	unsigned __int64 v77; // rax
	__int64 v78; // rcx
	int v79; // r10d
	int v80; // ecx
	int v81; // ecx
	_QWORD* v82; // rcx
	unsigned __int64 v83; // r8
	__m128* v84; // r8
	int v85; // xmm0_4
	unsigned __int64 v86; // r8
	int v87; // r9d
	int v88; // r10d
	int v89; // r11d
	unsigned __int64 v90; // rax
	int v91; // ecx
	int v92; // ecx
	int v93; // ecx
	_QWORD* v94; // rcx
	int v95; // eax
	_DWORD* v96; // rax
	int v97; // ecx
	_DWORD* v98; // rax
	_QWORD* v99; // rcx
	int v100; // eax
	_DWORD* v101; // rax
	int v102; // ecx
	_DWORD* v103; // rax
	__int64 v104; // rax
	_QWORD* v105; // rcx
	__int64 v106; // r9
	int v107; // eax
	int v108; // ecx
	int v109; // r10d
	int v110; // r11d
	int v111; // edi
	int v112; // esi
	int v113; // ecx
	int v114; // eax
	double v115; // xmm1_8
	__int64 v116; // rax
	_QWORD* v117; // rcx
	double v118; // xmm3_8
	unsigned int v119; // edi
	int v120; // r15d
	int v121; // r12d
	unsigned int v122; // r8d
	int v123; // r9d
	__int64 v124; // rcx
	float v125; // xmm4_4
	float v126; // xmm4_4
	float v127; // xmm3_4
	int v128; // esi
	int v129; // r14d
	int v130; // eax
	int v131; // r10d
	int v132; // r11d
	int v133; // eax
	int v134; // eax
	_QWORD* v135; // rcx
	double v136; // xmm3_8
	__int64 v137; // rcx
	unsigned int v138; // ecx
	unsigned int v139; // edx
	unsigned int v140; // r8d
	float v141; // xmm4_4
	float v142; // xmm2_4
	__int64 v143; // rdx
	unsigned __int64 v144; // rax
	__int64 v145; // rax
	int v147; // [rsp+50h] [rbp-B0h] BYREF
	int v148; // [rsp+54h] [rbp-ACh]
	int v149; // [rsp+58h] [rbp-A8h] BYREF
	unsigned int v150; // [rsp+5Ch] [rbp-A4h]
	int v151; // [rsp+60h] [rbp-A0h]
	int v152; // [rsp+64h] [rbp-9Ch]
	__m128 v153; // [rsp+70h] [rbp-90h] BYREF
	__m128 v154; // [rsp+80h] [rbp-80h]
	int v155; // [rsp+90h] [rbp-70h] BYREF
	int v156; // [rsp+94h] [rbp-6Ch]
	__int128 v157[2]; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v158; // [rsp+C0h] [rbp-40h] BYREF
	int v159; // [rsp+D0h] [rbp-30h] BYREF
	int v160; // [rsp+D8h] [rbp-28h] BYREF
	__int128 v161; // [rsp+E0h] [rbp-20h] BYREF
	__m128 v162; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v163; // [rsp+100h] [rbp+0h]
	__m128 v164; // [rsp+110h] [rbp+10h]
	__m128 v165; // [rsp+120h] [rbp+20h]
	__int128 v166[4]; // [rsp+130h] [rbp+30h] BYREF

	if ((*(_DWORD*)(a1 + 664) & 0x1000i64) != 0)
	{
		LOBYTE(v2) = sub_140168C20(a1);
		return v2;
	}
	v3 = *(unsigned int*)(a1 + 712);
	v4 = qword_140C63678;
	v149 = *(_DWORD*)(a1 + 716);
	v150 = *(_DWORD*)(a1 + 720);
	v151 = *(_DWORD*)(a1 + 724);
	v152 = *(_DWORD*)(a1 + 728);
	if (v3 >= *(_QWORD*)(qword_140C63678 + 48))
		goto LABEL_8;
	v5 = *(_QWORD*)(qword_140C63678 + 40);
	v6 = 32i64 * (unsigned int)v3;
	v7 = *(_DWORD*)(v6 + v5 + 16);
	if ((unsigned int)(v7 - 1) <= 0xFFFFFFFD)
		*(_DWORD*)(v6 + v5 + 16) = v7 + 1;
	if (v3 >= *(_QWORD*)(v4 + 48))
		LABEL_8:
	v8 = *(__m128**)(v4 + 40);
	else
		v8 = (__m128*)(*(_QWORD*)(v4 + 40) + 32i64 * (unsigned int)v3);
	v158 = *v8;
	sub_1401429A0(v4, v3);
	v9 = *(_QWORD**)(a1 + 1024);
	if (v9)
		sub_140103CF0(
			v9,
			(unsigned int*)&v149,
			&v158,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036)));
	v10 = v151;
	v11 = v150;
	v12 = (unsigned int)v149;
	v13 = v152;
	v14 = 0;
	if (*(_QWORD*)(a1 + 1416))
	{
		v15 = 0i64;
		do
		{
			v16 = *(float*)(*(_QWORD*)(a1 + 1408) + 4 * v15);
			v147 = v12;
			v17 = v16 / *(float*)(a1 + 1316);
			v148 = v11;
			v18 = fmaxf(0.0, fminf(1.0, v17));
			v19 = (int)(float)((float)(v10 - v12) * v18);
			v20 = (int)(float)((float)(v13 - v11) * v18);
			v21 = sub_14016A0C0(a1);
			if (v21)
			{
				v24 = v21 - 1;
				if (v24)
				{
					v25 = v24 - 1;
					if (v25)
					{
						if (v25 == 1)
						{
							v148 = v13 - v20;
							v147 = v12 + v23 / 2;
						}
					}
					else
					{
						v148 = v11 + v20;
						v147 = v12 + v23 / 2;
					}
					goto LABEL_22;
				}
				v147 = v10 - v19;
			}
			else
			{
				v147 = v12 + v19;
			}
			v148 = v11 + v22 / 2;
		LABEL_22:
			v26 = *(_QWORD**)(a1 + 1216);
			if (v26)
			{
				*(_QWORD*)&v27 = (unsigned int)dword_140C63664;
				*(float*)&v27 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1224)) * *(float*)(a1 + 1228);
				sub_1401039E0(v26, &v147, &v158, v27);
				v13 = v152;
				v10 = v151;
				v11 = v150;
				v12 = (unsigned int)v149;
			}
			v15 = ++v14;
		} while ((unsigned __int64)v14 < *(_QWORD*)(a1 + 1416));
	}
	v28 = *(float*)(a1 + 1316);
	if (v28 > 0.0)
	{
		v29 = *(_QWORD*)(a1 + 664);
		v30 = fmaxf(0.0, fminf(1.0, *(float*)(a1 + 1312) / v28));
		if ((v29 & 0x800) != 0)
		{
			v31 = *(__m128*)(a1 + 1344);
			v32 = *(__m128*)(a1 + 1360);
			v33 = *(__m128*)(a1 + 1376);
			v34 = 0i64;
			v35 = 4i64;
			v166[0] = (__int128)v31;
			v166[1] = (__int128)v32;
			v166[2] = (__int128)v33;
			v36 = *(__m128*)(a1 + 1392);
			v166[3] = (__int128)v36;
			do
			{
				v37 = (__m128)v166[v34++];
				*(__int128*)((char*)&v161 + v34 * 16) = (__int128)v37;
				--v35;
			} while (v35);
			v38 = v29 >> 8;
			v39 = (v29 >> 9) & 1;
			if ((v38 & 1) != 0)
				LODWORD(v39) = v39 | 2;
			if ((_DWORD)v39)
			{
				v40 = v39 - 1;
				if (v40)
				{
					v41 = v40 - 1;
					if (v41)
					{
						if (v41 == 1)
						{
							v37.m128_f32[0] = v30;
							v42 = _mm_shuffle_ps(v37, v37, 0);
							v43 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v36, v33), v42), v33);
							v162 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v31, v32), v42), v32);
						LABEL_39:
							v165 = v43;
						}
					}
					else
					{
						v37.m128_f32[0] = v30;
						v44 = _mm_shuffle_ps(v37, v37, 0);
						v163 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v31), v44), v31);
						v164 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v33, v36), v44), v36);
					}
				}
				else
				{
					v37.m128_f32[0] = v30;
					v45 = _mm_shuffle_ps(v37, v37, 0);
					v162 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v31, v36), v45), v36);
					v163 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v33), v45), v33);
				}
				v47 = 0i64;
				v48 = 4i64;
				do
				{
					v49 = *(__m128*)((char*)&v162 + v47);
					v47 += 16i64;
					*(__m128*)((char*)&v165 + v47) = v49;
					--v48;
				} while (v48);
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(
					qword_140C65680,
					2i64,
					v12,
					v11);
				(*(void(__fastcall**)(__int64, __int128*, __int64))(*(_QWORD*)qword_140C65680 + 120i64))(
					qword_140C65680,
					v166,
					4i64);
				if (*(float*)(a1 + 1316) > *(float*)(a1 + 1312) && (v51 = *(_QWORD**)(a1 + 1120)) != 0i64)
				{
					v52 = *(unsigned int*)(a1 + 1444);
					if (v52 >= *(_QWORD*)(qword_140C63678 + 48))
						v53 = *(__m128**)(qword_140C63678 + 40);
					else
						v53 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v52);
					*(float*)&v54 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1128)) * *(float*)(a1 + 1132);
				}
				else
				{
					v55 = *(unsigned int*)(a1 + 1444);
					if (v55 >= *(_QWORD*)(qword_140C63678 + 48))
						v53 = *(__m128**)(qword_140C63678 + 40);
					else
						v53 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v55);
					v51 = *(_QWORD**)(a1 + 1072);
					if (!v51)
					{
					LABEL_54:
						v56 = *(_QWORD*)(a1 + 664);
						if ((v56 & 0x20) == 0)
						{
						LABEL_133:
							(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 72i64))(
								qword_140C65680,
								v50,
								v53);
							goto LABEL_134;
						}
						v57 = v56 >> 8;
						v58 = (v56 >> 9) & 1;
						if ((v57 & 1) != 0)
							LODWORD(v58) = v58 | 2;
						if ((_DWORD)v58)
						{
							v59 = v58 - 1;
							if (!v59)
							{
								v61 = _mm_add_ps(v162, v163);
								goto LABEL_66;
							}
							v60 = v59 - 1;
							if (v60)
							{
								if (v60 != 1)
								{
								LABEL_67:
									v63 = *(_QWORD*)(a1 + 1168);
									if (v63)
									{
										sub_140101470(*(_QWORD**)(a1 + 1168), &v147);
										v65 = v148;
										v64 = v147;
									}
									else
									{
										v64 = 0;
										v65 = 0;
									}
									v66 = (int)v153.m128_f32[0];
									v67 = (int)v153.m128_f32[1];
									v68 = (int)v153.m128_f32[0] + v64;
									v69 = (int)v153.m128_f32[1] + v65;
									if (v63)
									{
										if ((int)((__int64)(*(_QWORD*)(v63 + 96) - *(_QWORD*)(v63 + 88)) >> 3) > 0)
											v63 = **(_QWORD**)(v63 + 88);
										*(_QWORD*)&v72 = (unsigned int)dword_140C63664;
										*(float*)&v72 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1176)) * *(float*)(a1 + 1180);
										v73 = sub_140101180(v63, v72, 0i64);
										v70 = *(_DWORD*)(v73 + 72);
										v71 = *(_DWORD*)(v73 + 76);
									}
									else
									{
										v70 = 0;
										v71 = 0;
									}
									v157[1] = (__int128)_mm_cvtepi32_ps(
										_mm_unpacklo_epi32(
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v68 - v70), _mm_cvtsi32_si128(0)),
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v69 - v71), _mm_cvtsi32_si128(0))));
									v157[0] = (__int128)_mm_cvtepi32_ps(
										_mm_unpacklo_epi32(
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v66 - v70), _mm_cvtsi32_si128(0)),
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v67 - v71), _mm_cvtsi32_si128(0))));
									(*(void(__fastcall**)(__int64, __int128*, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(
										qword_140C65680,
										v157,
										v53);
									(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(
										qword_140C65680,
										1i64);
									v74 = *(_QWORD**)(a1 + 1168);
									if (v74)
									{
										*(_QWORD*)&v75 = (unsigned int)dword_140C63664;
										*(float*)&v75 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1176)) * *(float*)(a1 + 1180);
										sub_140103B20(v74, &v153, &v158, v75);
									}
									goto LABEL_133;
								}
								v61 = _mm_add_ps(v162, v165);
							LABEL_66:
								v153 = _mm_mul_ps(v61, (__m128)xmmword_140B7AC50);
								goto LABEL_67;
							}
							v62 = v163;
						}
						else
						{
							v62 = v165;
						}
						v61 = _mm_add_ps(v62, v164);
						goto LABEL_66;
					}
					*(float*)&v54 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1080)) * *(float*)(a1 + 1084);
				}
				sub_140103CF0(v51, (unsigned int*)&v149, v53, 0, v54);
				goto LABEL_54;
			}
			v37.m128_f32[0] = v30;
			v46 = _mm_shuffle_ps(v37, v37, 0);
			v43 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v36, v31), v46), v31);
			v164 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v33, v32), v46), v32);
			goto LABEL_39;
		}
		*(_QWORD*)&v157[0] = __PAIR64__(v11, v12);
		*((_QWORD*)&v157[0] + 1) = __PAIR64__(v13, v10);
		v76 = (int)(float)((float)(v10 - v12) * v30);
		v77 = v29 >> 8;
		v78 = (v29 >> 9) & 1;
		v79 = (int)(float)((float)(v13 - v11) * v30);
		if ((v77 & 1) != 0)
			LODWORD(v78) = v78 | 2;
		if ((_DWORD)v78)
		{
			v80 = v78 - 1;
			if (v80)
			{
				v81 = v80 - 1;
				if (v81)
				{
					if (v81 == 1)
						DWORD1(v157[0]) = v13 - v79;
				}
				else
				{
					HIDWORD(v157[0]) = v11 + v79;
				}
			}
			else
			{
				LODWORD(v157[0]) = v10 - v76;
			}
		}
		else
		{
			DWORD2(v157[0]) = v12 + v76;
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
		v154 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(DWORD2(v157[0])), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v157[0])), _mm_cvtsi32_si128(0))));
		v153 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v157[0]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(DWORD1(v157[0])), _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v153);
		if (*(float*)(a1 + 1316) > *(float*)(a1 + 1312) && (v82 = *(_QWORD**)(a1 + 1120)) != 0i64)
		{
			v83 = *(unsigned int*)(a1 + 1444);
			if (v83 >= *(_QWORD*)(qword_140C63678 + 48))
				v84 = *(__m128**)(qword_140C63678 + 40);
			else
				v84 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v83);
			*(float*)&v85 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1128)) * *(float*)(a1 + 1132);
		}
		else
		{
			v82 = *(_QWORD**)(a1 + 1072);
			if (!v82)
			{
			LABEL_99:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				if ((*(_BYTE*)(a1 + 664) & 0x20) == 0)
					goto LABEL_134;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				v87 = v157[0];
				v88 = DWORD1(v157[0]);
				v89 = HIDWORD(v157[0]);
				v90 = *(_QWORD*)(a1 + 664);
				v153 = (__m128)v157[0];
				v91 = (v90 >> 9) & 1;
				if ((v90 & 0x100) != 0)
					v91 |= 2u;
				if (v91)
				{
					v92 = v91 - 1;
					if (v92)
					{
						v93 = v92 - 1;
						if (v93)
						{
							if (v93 == 1)
							{
								v94 = *(_QWORD**)(a1 + 1168);
								v147 = (DWORD2(v157[0]) + LODWORD(v157[0])) >> 1;
								if (v94)
								{
									sub_140101470(v94, &v155);
									v95 = v156;
								}
								else
								{
									v95 = 0;
								}
								v148 = v88 - v95;
								v96 = sub_140109840((float*)(a1 + 1168), (_DWORD*)&v161 + 2);
								v97 = DWORD1(v157[0]) - v96[1];
								v153.m128_i32[3] = DWORD1(v157[0]);
								v153.m128_i32[1] = v97;
							}
						}
						else
						{
							v148 = HIDWORD(v157[0]);
							v153.m128_i32[1] = HIDWORD(v157[0]);
							v147 = (DWORD2(v157[0]) + LODWORD(v157[0])) >> 1;
							v98 = sub_140109840((float*)(a1 + 1168), &v160);
							v153.m128_i32[3] = HIDWORD(v157[0]) + v98[1];
						}
					}
					else
					{
						v99 = *(_QWORD**)(a1 + 1168);
						if (v99)
						{
							sub_140101470(v99, &v155);
							v100 = v155;
						}
						else
						{
							v100 = 0;
						}
						v147 = v87 - v100;
						v148 = (v89 + v88) >> 1;
						v101 = sub_140109840((float*)(a1 + 1168), &v161);
						v102 = LODWORD(v157[0]) - *v101;
						v153.m128_i32[2] = v157[0];
						v153.m128_i32[0] = v102;
					}
				}
				else
				{
					v147 = DWORD2(v157[0]);
					v153.m128_i32[0] = DWORD2(v157[0]);
					v148 = (HIDWORD(v157[0]) + DWORD1(v157[0])) >> 1;
					v103 = sub_140109840((float*)(a1 + 1168), &v159);
					v153.m128_i32[2] = DWORD2(v157[0]) + *v103;
				}
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
				v104 = *(_QWORD*)(a1 + 664);
				if ((v104 & 0x4000) != 0)
				{
					if ((v104 & 0x40) != 0)
					{
						v163 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v153.m128_u32[2]), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v153.m128_u32[3]), _mm_cvtsi32_si128(0))));
						v162 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v153.m128_u32[0]), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v153.m128_u32[1]), _mm_cvtsi32_si128(0))));
						(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v162);
					}
					v105 = *(_QWORD**)(a1 + 1168);
					if (v105)
						sub_140103CF0(
							v105,
							(unsigned int*)&v153,
							&v158,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1176)) * *(float*)(a1 + 1180)));
				}
				else
				{
					if ((v104 & 0x40) != 0)
					{
						v106 = *(_QWORD*)(a1 + 1168);
						if (v106)
						{
							sub_140101470(*(_QWORD**)(a1 + 1168), &v155);
							v108 = v156;
							v107 = v155;
						}
						else
						{
							v107 = 0;
							v108 = 0;
						}
						v109 = v147;
						v110 = v148;
						v111 = v107 + v147;
						v112 = v108 + v148;
						if (v106)
						{
							if ((int)((__int64)(*(_QWORD*)(v106 + 96) - *(_QWORD*)(v106 + 88)) >> 3) > 0)
								v106 = **(_QWORD**)(v106 + 88);
							*(_QWORD*)&v115 = (unsigned int)dword_140C63664;
							*(float*)&v115 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1176)) * *(float*)(a1 + 1180);
							v116 = sub_140101180(v106, v115, 0i64);
							v113 = *(_DWORD*)(v116 + 72);
							v114 = *(_DWORD*)(v116 + 76);
						}
						else
						{
							v113 = 0;
							v114 = 0;
						}
						v163 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v111 - v113), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v112 - v114), _mm_cvtsi32_si128(0))));
						v162 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v109 - v113), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v110 - v114), _mm_cvtsi32_si128(0))));
						(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v162);
					}
					v117 = *(_QWORD**)(a1 + 1168);
					if (v117)
					{
						*(_QWORD*)&v118 = (unsigned int)dword_140C63664;
						*(float*)&v118 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1176)) * *(float*)(a1 + 1180);
						sub_1401039E0(v117, &v147, &v158, v118);
					}
				}
				goto LABEL_133;
			}
			v86 = *(unsigned int*)(a1 + 1444);
			if (v86 >= *(_QWORD*)(qword_140C63678 + 48))
				v84 = *(__m128**)(qword_140C63678 + 40);
			else
				v84 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v86);
			*(float*)&v85 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1080)) * *(float*)(a1 + 1084);
		}
		sub_140103CF0(v82, (unsigned int*)&v149, v84, 0, v85);
		goto LABEL_99;
	}
LABEL_134:
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(
		qword_140C65680,
		1i64,
		v12,
		v11);
	v119 = 0;
	if (*(_QWORD*)(a1 + 1416))
	{
		v120 = v152;
		v121 = v151;
		v122 = v150;
		v123 = v149;
		v124 = 0i64;
		do
		{
			v125 = *(float*)(*(_QWORD*)(a1 + 1408) + 4 * v124);
			if (v125 > *(float*)(a1 + 1312))
				break;
			v126 = v125 / *(float*)(a1 + 1316);
			v147 = v123;
			v148 = v122;
			v127 = fmaxf(0.0, fminf(1.0, v126));
			v128 = (int)(float)((float)(v121 - v123) * v127);
			v129 = (int)(float)((float)(int)(v120 - v122) * v127);
			v130 = sub_14016A0C0(a1);
			if (v130)
			{
				v133 = v130 - 1;
				if (v133)
				{
					v134 = v133 - 1;
					if (v134)
					{
						if (v134 == 1)
						{
							v148 = v120 - v129;
							v147 = v123 + v132 / 2;
						}
					}
					else
					{
						v148 = v122 + v129;
						v147 = v123 + v132 / 2;
					}
					goto LABEL_146;
				}
				v147 = v121 - v128;
			}
			else
			{
				v147 = v123 + v128;
			}
			v148 = v122 + v131 / 2;
		LABEL_146:
			v135 = *(_QWORD**)(a1 + 1264);
			if (v135)
			{
				*(_QWORD*)&v136 = (unsigned int)dword_140C63664;
				*(float*)&v136 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1272)) * *(float*)(a1 + 1276);
				sub_1401039E0(v135, &v147, &v158, v136);
				v120 = v152;
				v121 = v151;
				v122 = v150;
				v123 = v149;
			}
			v124 = ++v119;
		} while ((unsigned __int64)v119 < *(_QWORD*)(a1 + 1416));
	}
	v137 = *(_QWORD*)(a1 + 664);
	LOBYTE(v2) = (unsigned __int8)v137 >> 4;
	if ((v137 & 0x10) == 0 || *(char*)(a1 + 28) < 0)
	{
		if ((v137 & 0x400) != 0)
		{
			v2 = *(_DWORD*)(a1 + 1428);
			v138 = *(_DWORD*)(a1 + 1432);
			v139 = *(_DWORD*)(a1 + 1436);
			v140 = *(_DWORD*)(a1 + 1440);
		}
		else
		{
			v2 = *(_DWORD*)(a1 + 716);
			v138 = *(_DWORD*)(a1 + 720);
			v139 = *(_DWORD*)(a1 + 724);
			v140 = *(_DWORD*)(a1 + 728);
		}
		v154 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v139), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v140), _mm_cvtsi32_si128(0))));
		v153 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v138), _mm_cvtsi32_si128(0))));
		v141 = _mm_shuffle_ps(v154, v154, 85).m128_f32[0];
		v142 = _mm_shuffle_ps(v153, v153, 85).m128_f32[0];
		v154.m128_f32[1] = v141;
		v153.m128_f32[1] = v142;
		if ((float)(v141 - v142) < 16.0)
		{
			v153.m128_f32[1] = v142 + -8.0;
			v154.m128_f32[1] = v141 + 8.0;
		}
		v143 = *(_QWORD*)(a1 + 688);
		if (v143)
		{
			v144 = *(unsigned int*)(a1 + 708);
			if (v144 >= *(_QWORD*)(qword_140C63678 + 48))
				v145 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v145 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v144;
			LOBYTE(v2) = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, _DWORD, __int64, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
				qword_140C65680,
				v143,
				0i64,
				-1i64,
				&v153,
				*(_DWORD*)(a1 + 704),
				v145,
				1,
				0i64);
		}
	}
	return v2;
}
// 140169301: variable 'v12' is possibly undefined
// 14016930E: variable 'v11' is possibly undefined
// 140169363: variable 'v23' is possibly undefined
// 1401693A0: variable 'v22' is possibly undefined
// 1401696FC: variable 'v63' is possibly undefined
// 14016974F: variable 'v66' is possibly undefined
// 140169759: variable 'v67' is possibly undefined
// 1401697AA: variable 'v53' is possibly undefined
// 140169A66: variable 'v88' is possibly undefined
// 140169AE9: variable 'v87' is possibly undefined
// 140169AD8: variable 'v89' is possibly undefined
// 140169C4E: variable 'v106' is possibly undefined
// 140169CA1: variable 'v109' is possibly undefined
// 140169CAB: variable 'v110' is possibly undefined
// 140169D3B: variable 'v50' is possibly undefined
// 140169DBA: variable 'v123' is possibly undefined
// 140169DC2: variable 'v122' is possibly undefined
// 140169E15: variable 'v132' is possibly undefined
// 140169E52: variable 'v131' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

