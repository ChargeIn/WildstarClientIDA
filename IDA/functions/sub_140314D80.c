//----- (0000000140314D80) ----------------------------------------------------
__int64 __fastcall sub_140314D80(__int64 a1, __m128* a2, __int64 a3, __m128* a4)
{
	__m128 v4; // xmm0
	__m128 v5; // xmm1
	__int64 v6; // rax
	unsigned __int64 v7; // r12
	__m128* v9; // rdi
	__m128 v11; // xmm0
	__m128 v12; // xmm1
	__int32 v13; // xmm6_4
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rcx
	int v18; // r13d
	int* v19; // rdi
	float v20; // xmm6_4
	unsigned int m; // ebx
	__int64 result; // rax
	__m128 v23; // xmm2
	__m128 v24; // xmm1
	__int64 v25; // rax
	__int64 v26; // rcx
	unsigned int v27; // eax
	float v28; // xmm2_4
	float v29; // xmm1_4
	float v30; // xmm1_4
	__int64 v31; // rax
	__int64 v32; // rcx
	__m128 v33; // xmm1
	__int64 i; // r9
	__int64 v35; // r10
	__int64 v36; // r11
	__int64 v37; // rax
	__int64 v38; // r8
	__m128 v39; // xmm4
	__m128 v40; // xmm3
	__m128 v41; // xmm5
	__m128 v42; // xmm1
	__m128 v43; // xmm1
	bool v44; // zf
	float v45; // xmm2_4
	float v46; // xmm3_4
	float v47; // xmm4_4
	__int64 v48; // rcx
	__int64 v49; // rax
	float v50; // xmm1_4
	unsigned int v51; // edx
	unsigned int v52; // eax
	__int64* v53; // rcx
	unsigned int* v54; // rax
	__int64 v55; // r9
	int v56; // eax
	__m128 v57; // xmm0
	int v58; // eax
	__int64 v59; // rcx
	__m128* v60; // rbx
	__m128 v61; // xmm1
	__m128 v62; // xmm0
	int v63; // ecx
	__m128 v64; // xmm1
	__m128 v65; // xmm0
	__int64 v66; // rsi
	__int64 v67; // rdi
	__int64 v68; // rbx
	float v69; // xmm0_4
	float v70; // xmm0_4
	float v71; // xmm0_4
	float v72; // xmm0_4
	float v73; // xmm0_4
	float v74; // xmm0_4
	__int64 v75; // rdx
	__int64 v76; // rcx
	__int64 v77; // rdx
	__int64 v78; // rbx
	int j; // edi
	__int64 k; // rbx
	float v81; // xmm0_4
	int v82; // eax
	int* v83; // r9
	_DWORD* v84; // r8
	__m128 v85; // xmm6
	int v86; // ecx
	int v87; // edx
	__int64 v88; // rax
	int v89; // r8d
	float v90; // xmm0_4
	int v91; // eax
	int v92; // edx
	int v93; // eax
	int v94; // ecx
	int v95; // ecx
	int v96; // eax
	unsigned int v97; // edx
	unsigned int v98; // r15d
	unsigned int v99; // eax
	__int64 v100; // rax
	__m128 v101; // xmm4
	__m128 v102; // xmm0
	unsigned int v103; // r13d
	__m128 v104; // xmm9
	__m128* v105; // r12
	__m128 v106; // xmm0
	__m128* v107; // rax
	int v108; // eax
	int v109; // ebx
	double v110; // xmm0_8
	__int64 v111; // rsi
	_QWORD* v112; // rdi
	__int64 v113; // rsi
	__int64 v114; // rcx
	__int64 v115; // rdx
	int v116; // ecx
	int v117; // eax
	int v118; // eax
	unsigned int v119; // ecx
	unsigned int* v120; // rax
	__m128 v121; // xmm0
	__m128 v122; // xmm2
	__m128 v123; // xmm3
	__m128 v124; // xmm3
	__m128 v125; // xmm1
	__m128 v126; // xmm1
	__m128 v127; // xmm2
	unsigned __int64 v128; // rbx
	int* v129; // rax
	int* v130; // rdx
	int* v131; // rdi
	__int64 v132; // rcx
	__m128 v133; // [rsp+58h] [rbp-B0h] BYREF
	__m128* v134; // [rsp+68h] [rbp-A0h] BYREF
	_QWORD v135[3]; // [rsp+70h] [rbp-98h] BYREF
	__m128 v136; // [rsp+88h] [rbp-80h] BYREF
	__m128 v137; // [rsp+98h] [rbp-70h]
	__m128 v138; // [rsp+A8h] [rbp-60h]
	__m128 v139; // [rsp+B8h] [rbp-50h]
	__int128 v140; // [rsp+C8h] [rbp-40h] BYREF
	__m128 v141; // [rsp+D8h] [rbp-30h] BYREF
	__m128 v142[4]; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v143[4]; // [rsp+128h] [rbp+20h] BYREF
	__m128* v144; // [rsp+168h] [rbp+60h] BYREF
	__m128 v145; // [rsp+178h] [rbp+70h] BYREF
	__m128 v146; // [rsp+188h] [rbp+80h]
	__m128 v147; // [rsp+198h] [rbp+90h]
	__m128 v148; // [rsp+1A8h] [rbp+A0h]
	__m128* v149[10]; // [rsp+1B8h] [rbp+B0h] BYREF
	char v150[32]; // [rsp+208h] [rbp+100h] BYREF
	int v151; // [rsp+228h] [rbp+120h]
	__int128 v152[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
	__int128 v153[4]; // [rsp+328h] [rbp+220h] BYREF

	v4 = *a2;
	v5 = a2[1];
	v6 = *(_QWORD*)(a1 + 8);
	v7 = 0i64;
	v9 = (__m128*)a3;
	v134 = (__m128*)a3;
	v136 = v4;
	v11 = a2[2];
	v137 = v5;
	v12 = a2[3];
	v138 = v11;
	v139 = v12;
	if (*(_DWORD*)(v6 + 40) && *(_DWORD*)(v6 + 8) == 2)
	{
		v13 = 0;
		v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 488i64);
		if (v14)
		{
			*(__m128*)& v135[1] = _mm_add_ps(v12, (__m128)xmmword_140C77870);
			if ((*(unsigned int(__fastcall**)(__int64, _QWORD*, char*, __int64, _QWORD))(*(_QWORD*)v14 + 440i64))(
				v14,
				&v135[1],
				v150,
				1i64,
				0i64))
			{
				v13 = v151;
			}
		}
		v139.m128_i32[1] = v13;
	}
	sub_140313C20(a1);
	sub_14032FE20((__m128*)a1, &v136, (__int64)v9, a4);
	v149[0] = &v136;
	sub_1401AFC20((__int64*)v149, (double*)v143[0].m128_u64);
	v17 = *(_QWORD*)(a1 + 40);
	v18 = 100;
	if (*(_DWORD*)(v17 + 1456) < 0x64u)
		v18 = *(_DWORD*)(v17 + 1456);
	if (*(_WORD*)(*(_QWORD*)(a1 + 416) + 8i64) != 12 || *(_QWORD*)(a1 + 16) == *(_QWORD*)(v17 + 1216))
	{
	LABEL_26:
		v33 = *(__m128*)(a1 + 720);
		*(__m128*)(a1 + 944) = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 85), a4[1]),
				_mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), *a4)),
			_mm_mul_ps(_mm_shuffle_ps(v33, v33, 170), a4[2]));
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 416) + 3784i64) & 2) != 0)
			*(__m128*)(a1 + 960) = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 880), *(__m128*)(a1 + 880), 85), v137),
						_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 880), *(__m128*)(a1 + 880), 0), v136)),
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 880), *(__m128*)(a1 + 880), 170), v138)),
				v139);
		else
			*(__m128*)(a1 + 960) = v139;
		for (i = 0i64;
			(unsigned int)i < *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 64i64) + 776i64);
			i = (unsigned int)(i + 1))
		{
			v35 = *(_QWORD*)(a1 + 40);
			v16 = (unsigned int)i;
			v36 = *(_QWORD*)(*(_QWORD*)(v35 + 64) + 784i64);
			v15 = 10i64 * (unsigned int)i;
			if (*(_WORD*)(v36 + 80i64 * (unsigned int)i + 2))
			{
				if (*(_WORD*)(v36 + 80i64 * (unsigned int)i + 2) == 1)
				{
					v37 = *(unsigned __int16*)(v36 + 80i64 * (unsigned int)i);
					v133.m128_u64[1] = (unsigned __int64)v9;
					v149[1] = v9;
					v133.m128_u64[0] = *(_QWORD*)(v35 + 824) + (v37 << 6);
					v149[0] = (__m128*)v133.m128_u64[0];
					sub_1401AFB10(v149, v142);
					v144 = v142;
					sub_1401AFC20((__int64*)&v144, (double*)v145.m128_u64);
					v16 = 2 * v38;
					v39 = _mm_unpackhi_ps(v145, v146);
					v40 = _mm_unpackhi_ps(v147, v148);
					v41 = _mm_unpacklo_ps(v145, v146);
					v42 = _mm_unpacklo_ps(v147, v148);
					v142[0] = _mm_shuffle_ps(v41, v42, 68);
					*(__int128*)((char*)v152 + 8 * v16) = (__int128)_mm_shuffle_ps(v41, v42, 238);
					v142[2] = _mm_shuffle_ps(v39, v40, 68);
					v142[3] = _mm_shuffle_ps(v39, v40, 238);
				}
			}
			else
			{
				v16 = 2i64 * (unsigned int)i;
				v43 = *(__m128*)(((unsigned __int64)*(unsigned __int16*)(v36 + 80i64 * (unsigned int)i) << 6)
					+ *(_QWORD*)(v35 + 824)
					+ 48);
				v153[(unsigned int)i] = (__int128)_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v43, v43, 85), v9[1]),
							_mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), *v9)),
						_mm_mul_ps(_mm_shuffle_ps(v43, v43, 170), v9[2])),
					v9[3]);
			}
		}
		v44 = **(_BYTE**)(a1 + 416) == 2;
		v133 = _mm_sub_ps((__m128)0i64, *(__m128*)(*(_QWORD*)(a1 + 40) + 176i64));
		if (!v44 || (v15 = *(_QWORD*)(a1 + 1128)) == 0)
		{
		LABEL_48:
			if (v18)
			{
				v66 = *(_QWORD*)(a1 + 1128);
				if (v66)
				{
					v67 = 28 * v66;
					do
					{
						v67 -= 28i64;
						--v66;
						v68 = v67 + *(_QWORD*)(a1 + 1120);
						if (*(__int16*)(v68 + 20) > 0)
							sub_1403174A0(a1, (unsigned int*)(v67 + *(_QWORD*)(a1 + 1120)), v18, (__int64)v153, (__int64)v152);
						if (**(_BYTE**)(a1 + 416) == 2)
						{
							v69 = *(float*)v68;
							if (*(float*)v68 < 0.0)
								v70 = sub_1408FDE98(v69 - 10.0, 20.0) + 10.0;
							else
								v70 = sub_1408FDE98(v69 + 10.0, 20.0) - 10.0;
							*(float*)v68 = v70;
							v71 = *(float*)(v68 + 4);
							if (v71 < 0.0)
								v72 = sub_1408FDE98(v71 - 10.0, 20.0) + 10.0;
							else
								v72 = sub_1408FDE98(v71 + 10.0, 20.0) - 10.0;
							*(float*)(v68 + 4) = v72;
							v73 = *(float*)(v68 + 8);
							if (v73 < 0.0)
								v74 = sub_1408FDE98(v73 - 10.0, 20.0) + 10.0;
							else
								v74 = sub_1408FDE98(v73 + 10.0, 20.0) - 10.0;
							*(float*)(v68 + 8) = v74;
						}
						if (*(__int16*)(v68 + 20) <= 0)
						{
							v75 = *(_QWORD*)(a1 + 1128);
							if (v66 != v75 - 1)
							{
								v76 = *(_QWORD*)(a1 + 1120);
								v77 = 28 * v75;
								*(_DWORD*)(v76 + v67) = *(_DWORD*)(v77 + v76 - 28);
								*(_DWORD*)(v76 + v67 + 4) = *(_DWORD*)(v77 + v76 - 24);
								*(_DWORD*)(v76 + v67 + 8) = *(_DWORD*)(v77 + v76 - 20);
								*(_DWORD*)(v76 + v67 + 12) = *(_DWORD*)(v77 + v76 - 16);
								*(_WORD*)(v76 + v67 + 16) = *(_WORD*)(v77 + v76 - 12);
								*(_WORD*)(v76 + v67 + 18) = *(_WORD*)(v77 + v76 - 10);
								*(_WORD*)(v76 + v67 + 20) = *(_WORD*)(v77 + v76 - 8);
								*(_WORD*)(v76 + v67 + 22) = *(_WORD*)(v77 + v76 - 6);
								*(_WORD*)(v76 + v67 + 24) = *(_WORD*)(v77 + v76 - 4);
								*(_WORD*)(v76 + v67 + 26) = *(_WORD*)(v77 + v76 - 2);
							}
							sub_140317CF0((__int64*)(a1 + 1120), *(_QWORD*)(a1 + 1128) - 1i64);
						}
					} while (v66);
				}
			}
			if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, v15, v16, i)
				&& (*(_WORD*)(*(_QWORD*)(a1 + 416) + 8i64) != 12
					|| *(float*)(96i64
						* *(unsigned __int16*)(352i64 * **(unsigned __int16**)(a1 + 8)
							+ *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 64i64) + 392i64)
							+ 6)
						+ *(_QWORD*)(*(_QWORD*)(a1 + 40) + 496i64)
						+ 48) > 0.5))
			{
				if (!*(_BYTE*)(a1 + 401))
				{
					sub_140318540(*(_QWORD*)(a1 + 8) + 80i64, a1 + 80, (_QWORD*)(a1 + 392));
					*(_BYTE*)(a1 + 401) = 1;
				}
				v78 = *(_QWORD*)(a1 + 392);
				for (j = *(_DWORD*)(a1 + 80); v78; v78 = *(_QWORD*)(v78 + 16))
					(**(void(__fastcall***)(__int64, _QWORD))v78)(v78, *(_QWORD*)(a1 + 48));
				if (*(_DWORD*)(a1 + 80))
				{
					sub_1403146B0(a1);
					for (k = *(_QWORD*)(a1 + 1064); k; k = *(_QWORD*)(k + 16))
						(**(void(__fastcall***)(__int64, _QWORD))k)(k, *(_QWORD*)(a1 + 48));
					if (!j)
					{
						v81 = *(float*)(a1 + 1056);
						if (v81 <= 1.0)
							v81 = 1.0;
						*(float*)(a1 + 1056) = v81;
					}
					if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
						*(_QWORD*)(a1 + 56),
						*(unsigned int*)(a1 + 512),
						*(unsigned int*)(a1 + 528)) >= 1)
						v82 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
							*(_QWORD*)(a1 + 56),
							*(unsigned int*)(a1 + 512),
							*(unsigned int*)(a1 + 528));
					else
						v82 = 1;
					v83 = (int*)qword_140C63750;
					v84 = *(_DWORD**)(a1 + 40);
					v85 = 0i64;
					v86 = v84[364];
					if ((unsigned int)v86 > 0x64)
						v86 = 100;
					v87 = dword_140C42500;
					if (*(_DWORD*)qword_140C63750 < dword_140C42500)
						v87 = *(_DWORD*)qword_140C63750;
					v85.m128_f32[0] = (float)v86 / (float)v82;
					if (byte_140C42510[v87])
					{
						if (*(float*)((*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v84 + 248i64))(*(_QWORD*)(a1 + 40)) + 8) <= 0.0000099999997)
						{
							v83 = (int*)qword_140C63750;
						}
						else
						{
							v88 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 248i64))(*(_QWORD*)(a1 + 40));
							v89 = dword_140C42540;
							v83 = (int*)qword_140C63750;
							v90 = *(float*)(a1 + 916) / *(float*)(v88 + 8);
							v91 = dword_140C42540;
							v92 = *(_DWORD*)qword_140C63750;
							if (*(_DWORD*)qword_140C63750 < dword_140C42540)
								v91 = *(_DWORD*)qword_140C63750;
							if (v90 >= dword_140C42550[v91])
							{
								v93 = dword_140C425A0;
								if (v92 < dword_140C425A0)
									v93 = *(_DWORD*)qword_140C63750;
								if (v90 < dword_140C425B0[v93])
								{
									if (v92 < dword_140C42540)
										v89 = *(_DWORD*)qword_140C63750;
									v85.m128_f32[0] = v85.m128_f32[0]
										* (float)((float)(v90 - dword_140C42550[v89]) * *(float*)&dword_140C79E08);
								}
							}
							else
							{
								v85 = 0i64;
							}
						}
					}
					if (!*(_BYTE*)(a1 + 1062))
					{
						v94 = dword_140C42600;
						if (*v83 < dword_140C42600)
							v94 = *v83;
						v85.m128_f32[0] = v85.m128_f32[0] * *((float*)&xmmword_140C42610 + v94);
					}
					v85.m128_f32[0] = v85.m128_f32[0] + *(float*)(a1 + 1056);
					v95 = (int)v85.m128_f32[0];
					*(_DWORD*)(a1 + 1056) = v85.m128_i32[0];
					if ((int)v85.m128_f32[0] != 0x80000000 && (float)v95 != v85.m128_f32[0])
						v85.m128_f32[0] = (float)(v95 - (_mm_movemask_ps(_mm_unpacklo_ps(v85, v85)) & 1));
					v96 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 56) + 64i64))(
						*(_QWORD*)(a1 + 56),
						*(unsigned int*)(a1 + 480),
						*(unsigned int*)(a1 + 496),
						v83);
					v97 = *(_DWORD*)(a1 + 608);
					v98 = (int)v85.m128_f32[0] * v96;
					if (v97 > 0x400)
						v97 = 1024;
					*(float*)(a1 + 1056) = *(float*)(a1 + 1056) - v85.m128_f32[0];
					if (*(_QWORD*)(a1 + 1128) + (unsigned __int64)v98 > v97)
					{
						v99 = *(_DWORD*)(a1 + 1128);
						if (v97 <= v99)
							v98 = 0;
						else
							v98 = v97 - v99;
					}
					v100 = *(_QWORD*)(a1 + 416);
					if ((*(_BYTE*)(v100 + 10) & 1) != 0)
					{
						if (*(_WORD*)(v100 + 8) == 1)
						{
							*(float*)(a1 + 980) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
						}
						else if (*(_WORD*)(v100 + 8) == 5)
						{
							*(float*)(a1 + 980) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
							*(float*)(a1 + 984) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
						}
					}
					v101 = v139;
					v102 = 0i64;
					v103 = 0;
					v102.m128_f32[0] = (float)(int)v98;
					v104 = _mm_div_ps(_mm_sub_ps(*(__m128*)(a1 + 928), v139), _mm_shuffle_ps(v102, v102, 0));
					if (!v98)
						goto LABEL_134;
					v105 = v134;
					do
					{
						if (*(_DWORD*)(a1 + 912))
						{
							v106 = 0i64;
							v106.m128_f32[0] = (float)(int)(v98 - v103 - 1);
							v107 = &v141;
							v141 = _mm_mul_ps(_mm_shuffle_ps(v106, v106, 0), v104);
						}
						else
						{
							v140 = 0i64;
							v107 = (__m128*) & v140;
						}
						if ((unsigned int)sub_14032DA00(a1, v103, v98, &v133, (__m128*) & v135[1], &v136, v143, v105, v107))
						{
							(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 64i64))(
								*(_QWORD*)(a1 + 56),
								*(unsigned int*)(a1 + 576),
								*(unsigned int*)(a1 + 592));
							v109 = v108;
							v110 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56));
							v111 = *(_QWORD*)(a1 + 1128);
							v112 = (_QWORD*)(a1 + 1120);
							sub_140317CF0((__int64*)(a1 + 1120), v111 + 1);
							v113 = 28 * v111;
							*(_WORD*)(v113 + *(_QWORD*)(a1 + 1120) + 26) = *(_WORD*)(a1 + 1060);
							v114 = *(_QWORD*)(a1 + 1120);
							*(_QWORD*)(v113 + v114) = v133.m128_u64[0];
							*(_DWORD*)(v113 + v114 + 8) = v133.m128_i32[2];
							sub_1401C9800(&v134, (__m128i*) & v135[1]);
							v115 = *(_QWORD*)(a1 + 1120);
							*(_DWORD*)(v113 + v115 + 12) = (_DWORD)v134;
							v116 = (int)(float)(fminf(*(float*)&v110, 127.0) * 255.0);
							*(_WORD*)(v113 + v115 + 16) = WORD2(v134);
							if (v109 > 0x7FFF)
								LOWORD(v109) = 0x7FFF;
							*(_WORD*)(v113 + *v112 + 22) = v109;
							*(_WORD*)(v113 + *v112 + 20) = v109;
							*(_WORD*)(v113 + *v112 + 24) = v116;
							v117 = *(_DWORD*)(a1 + 376);
							++* (_WORD*)(a1 + 1060);
							if (v117 != -1)
							{
								v118 = v117 - 1;
								*(_DWORD*)(a1 + 376) = v118;
								if (!v118)
									break;
							}
						}
						++v103;
					} while (v103 < v98);
					v7 = 0i64;
				}
			}
			v101 = v139;
		LABEL_134:
			*(_OWORD*)(a1 + 208) = xmmword_140C798C0;
			*(_OWORD*)(a1 + 224) = xmmword_140C798D0;
			result = *(_QWORD*)(a1 + 1128);
			if (result)
			{
				v119 = 0;
				result = 0i64;
				do
				{
					++v119;
					v120 = (unsigned int*)(*(_QWORD*)(a1 + 1120) + 28 * result);
					v121 = (__m128)v120[2];
					v122 = (__m128)v120[1];
					v123 = (__m128) * v120;
					result = v119;
					v124 = _mm_unpacklo_ps(_mm_unpacklo_ps(v123, v121), _mm_unpacklo_ps(v122, (__m128)0i64));
					v125 = _mm_max_ps(*(__m128*)(a1 + 224), v124);
					*(__m128*)(a1 + 208) = _mm_min_ps(*(__m128*)(a1 + 208), v124);
					*(__m128*)(a1 + 224) = v125;
				} while ((unsigned __int64)v119 < *(_QWORD*)(a1 + 1128));
				v126 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 916), (__m128) * (unsigned int*)(a1 + 916), 0);
				v127 = _mm_add_ps(*(__m128*)(a1 + 224), v126);
				*(__m128*)(a1 + 208) = _mm_sub_ps(*(__m128*)(a1 + 208), v126);
				*(__m128*)(a1 + 224) = v127;
			}
			*(_DWORD*)(a1 + 912) = 1;
			*(__m128*)(a1 + 928) = v101;
			if (*(_DWORD*)(a1 + 1072))
			{
				v128 = *(_QWORD*)(a1 + 1128);
				if (*(_QWORD*)(a1 + 1144) <= v128)
				{
					v129 = sub_14018DB00(*(_QWORD*)(a1 + 1136), *(_QWORD*)(a1 + 1128), 4i64);
					v130 = *(int**)(a1 + 1136);
					v131 = v129;
					if (v130 != v129)
					{
						sub_1407DB590(v129, v130, 4i64 * *(_QWORD*)(a1 + 1144));
						v132 = *(_QWORD*)(a1 + 1136);
						if (v132)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v132 - 16) + 8i64))(v132 - 16);
						*(_QWORD*)(a1 + 1136) = v131;
					}
				}
				*(_QWORD*)(a1 + 1144) = v128;
				if (*(_QWORD*)(a1 + 1128))
				{
					do
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 1136) + 4 * v7) = v7;
						++v7;
					} while (v7 < *(_QWORD*)(a1 + 1128));
				}
				return sub_1401C3280(
					(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_140313390,
					*(unsigned int**)(a1 + 1136),
					*(_QWORD*)(a1 + 1144),
					*(_QWORD*)(a1 + 1120));
			}
			return result;
		}
		v45 = v133.m128_f32[2];
		v46 = v133.m128_f32[1];
		v47 = v133.m128_f32[0];
		v48 = 28 * v15;
		do
		{
			v49 = *(_QWORD*)(a1 + 1120);
			v48 -= 28i64;
			v50 = v46 + *(float*)(v48 + v49 + 4);
			*(float*)(v48 + v49) = v47 + *(float*)(v48 + v49);
			*(float*)(v48 + v49 + 4) = v50;
			*(float*)(v48 + v49 + 8) = v45 + *(float*)(v48 + v49 + 8);
			--v15;
		} while (v15);
		v51 = *(_DWORD*)(a1 + 1412);
		v52 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 208i64);
		if (v52 < v51)
		{
			v63 = *(_DWORD*)(a1 + 1408);
			v64 = 0i64;
			v15 = v51 - v63;
			v64.m128_f32[0] = (float)(int)(v52 - v63);
			v65 = 0i64;
			v65.m128_f32[0] = (float)(int)v15;
			*(__m128*)(a1 + 1360) = _mm_add_ps(
				_mm_div_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v64, v64, 0),
						_mm_sub_ps(*(__m128*)(a1 + 1392), *(__m128*)(a1 + 1376))),
					_mm_shuffle_ps(v65, v65, 0)),
				*(__m128*)(a1 + 1376));
			goto LABEL_48;
		}
		v53 = *(__int64**)(a1 + 56);
		v54 = *(unsigned int**)(a1 + 416);
		*(_DWORD*)(a1 + 1408) = v51;
		v55 = *v53;
		if (*(_DWORD*)(a1 + 1416))
		{
			v56 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(v55 + 64))(v53, v54[937], v54[938]);
			v15 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64);
			*(_DWORD*)(a1 + 1412) = *(_DWORD*)(v15 + 208) + v56;
			v57 = *(__m128*)(a1 + 1392);
			*(__m128*)(a1 + 1376) = v57;
		}
		else
		{
			v58 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(v55 + 64))(v53, v54[939], v54[940]);
			v59 = *(_QWORD*)(a1 + 40);
			v60 = (__m128*)(a1 + 1392);
			*(_OWORD*)&v135[1] = 0i64;
			*(_DWORD*)(a1 + 1412) = *(_DWORD*)(*(_QWORD*)(v59 + 16) + 208i64) + v58;
			*(_OWORD*)(a1 + 1376) = *(_OWORD*)(a1 + 1392);
			if ((unsigned int)sub_14032DA00(a1, 0, 1i64, &v140, (__m128*)(a1 + 1392), &v136, v143, v9, (__m128*) & v135[1]))
			{
				v15 = *(unsigned int*)(a1 + 1408);
				v61 = 0i64;
				v61.m128_f32[0] = (float)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 208i64) - v15);
				v62 = 0i64;
				v62.m128_f32[0] = (float)(*(_DWORD*)(a1 + 1412) - v15);
				*(__m128*)(a1 + 1360) = _mm_add_ps(
					_mm_div_ps(
						_mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), _mm_sub_ps(*v60, *(__m128*)(a1 + 1376))),
						_mm_shuffle_ps(v62, v62, 0)),
					*(__m128*)(a1 + 1376));
			LABEL_46:
				*(_DWORD*)(a1 + 1416) = *(_DWORD*)(a1 + 1416) == 0;
				goto LABEL_48;
			}
			v57 = *(__m128*)(a1 + 1376);
			*v60 = v57;
		}
		*(__m128*)(a1 + 1360) = v57;
		goto LABEL_46;
	}
	v19 = dword_140AF1508;
	*(_DWORD*)(a1 + 988) = 0;
	v20 = 0.0;
	for (m = 0; m < 4; ++m)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 1216i64) + 848i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
			(unsigned int)*v19);
		if (!(_DWORD)result)
			break;
		if (!*(_QWORD*)(a1 + 32))
			*(_QWORD*)(a1 + 32) = sub_14018B280(64i64, 0);
		result = (*(__int64(__fastcall**)(_QWORD, __int128*, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 1216i64)
			+ 856i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
				&v140,
				(unsigned int)*v19,
				0i64);
		*(_OWORD*)(*(_QWORD*)(a1 + 32) + 16i64 * m) = *(_OWORD*)result;
		if (m)
		{
			v15 = *(_QWORD*)(a1 + 32);
			v23 = _mm_sub_ps(*(__m128*)(v15 + 16i64 * m), *(__m128*)(v15 + 16i64 * (m - 1)));
			v24 = _mm_mul_ps(v23, v23);
			v20 = v20
				+ fsqrt(
					(float)(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0])
					+ _mm_shuffle_ps(v24, v24, 170).m128_f32[0]);
		}
		*(float*)((char*)v19++ + a1 - (_QWORD)dword_140AF1508 + 988) = v20;
	}
	*(_DWORD*)(a1 + 24) = m;
	if (m)
	{
		v16 = 0i64;
		v25 = 0i64;
		if ((int)m >= 4)
		{
			v26 = a1 + 992;
			v27 = ((m - 4) >> 2) + 1;
			v15 = v27;
			v28 = 1.0 / v20;
			v16 = 4 * v27;
			v25 = 4i64 * v27;
			do
			{
				v26 += 16i64;
				v29 = v28 * *(float*)(v26 - 16);
				*(float*)(v26 - 20) = v28 * *(float*)(v26 - 20);
				*(float*)(v26 - 16) = v29;
				v30 = v28 * *(float*)(v26 - 8);
				*(float*)(v26 - 12) = v28 * *(float*)(v26 - 12);
				*(float*)(v26 - 8) = v30;
				--v15;
			} while (v15);
		}
		if ((unsigned int)v16 < m)
		{
			v31 = a1 + 4 * (v25 + 247);
			v32 = m - (unsigned int)v16;
			do
			{
				v31 += 4i64;
				*(float*)(v31 - 4) = (float)(1.0 / v20) * *(float*)(v31 - 4);
				--v32;
			} while (v32);
		}
		v9 = v134;
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64);
		goto LABEL_26;
	}
	return result;
}
// 1403151BA: variable 'v38' is possibly undefined
// 140315263: variable 'i' is possibly undefined
// 140315683: variable 'v15' is possibly undefined
// 140315683: variable 'v16' is possibly undefined
// 140315B57: variable 'v108' is possibly undefined
// 140AF1508: using guessed type int dword_140AF1508[16];
// 140C42500: using guessed type int dword_140C42500;
// 140C42510: using guessed type _BYTE byte_140C42510[32];
// 140C42540: using guessed type int dword_140C42540;
// 140C42550: using guessed type float dword_140C42550[12];
// 140C425A0: using guessed type int dword_140C425A0;
// 140C425B0: using guessed type float dword_140C425B0[12];
// 140C42600: using guessed type int dword_140C42600;
// 140C42610: using guessed type __int128 xmmword_140C42610;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;
// 140C79E08: using guessed type int dword_140C79E08;
// 140314D80: using guessed type char var_220[32];
// 140314D80: using guessed type __m128 var_300[4];
// 140314D80: using guessed type __int128 var_100[4];

