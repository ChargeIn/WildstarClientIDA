//----- (0000000140310F70) ----------------------------------------------------
__int64 __fastcall sub_140310F70(
	__int64 a1,
	_QWORD* a2,
	_OWORD* a3,
	__int64 a4,
	int a5,
	int a6,
	void(__fastcall*** a7)(_QWORD),
	void(__fastcall*** a8)(_QWORD))
{
	__m128* v9; // r14
	unsigned int v10; // edi
	void(__fastcall * **v11)(_QWORD); // rbx
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rcx
	unsigned int* v15; // rax
	__int8* v16; // rbx
	__m128 v17; // xmm2
	__m128 v18; // xmm3
	__int64 v19; // rsi
	_QWORD* v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64* v25; // r13
	__int64 v26; // rcx
	__int64 v27; // r15
	_QWORD* i; // rdi
	__int64 v29; // rbx
	int* v30; // rax
	int* v31; // r14
	_QWORD* v32; // r12
	unsigned __int64 v33; // r10
	__int64 v34; // r8
	__int64 v35; // r9
	__int64 j; // rcx
	__int64 v37; // rdx
	__int64 v38; // rax
	__int64 v39; // rdi
	__int64 v40; // rdx
	__int64 v41; // rdi
	char v42; // bl
	bool v43; // zf
	__int64 v44; // rax
	__int64 v45; // rbp
	__int64 v46; // r14
	__int64 v47; // r15
	float v48; // xmm0_4
	int v49; // eax
	unsigned __int64 v50; // r11
	int v51; // eax
	__int16 v52; // r9
	unsigned int v53; // ebp
	__int64 v54; // r9
	unsigned __int64 v55; // rdx
	__int64* v56; // rcx
	_WORD* v57; // rax
	__int64 v58; // rax
	int v59; // eax
	__int64 v60; // r9
	__int64 v61; // rdx
	int v62; // eax
	int v63; // ecx
	__int64 v64; // rdi
	unsigned int v65; // ebp
	_QWORD* v66; // rax
	int* v67; // rax
	int* v68; // rdx
	int v69; // ecx
	__int64 v70; // rax
	unsigned __int64 v71; // rbx
	__int64* v72; // r14
	__int64 v73; // rax
	__int16 v74; // cx
	int* v75; // rax
	int* v76; // rdx
	int v77; // ecx
	__int64 v78; // rax
	__int64 v79; // rdi
	__int64 v80; // rdx
	__int64 v81; // rdx
	__int64* v82; // rbp
	__int64 v83; // rdx
	int* v84; // rax
	unsigned __int64 v85; // rbx
	int* v86; // r14
	__int64 v87; // r13
	int** v88; // r15
	__int64 v89; // rdi
	int* v90; // rax
	int v91; // ecx
	__int64 v92; // rdx
	__int64 v93; // rax
	int* v94; // rax
	int* v95; // rdx
	int v96; // ecx
	__int64 v97; // rax
	unsigned int v98; // eax
	int* v99; // rax
	int* v100; // rdx
	__int64 v101; // rax
	int* k; // rbx
	unsigned int(__fastcall * v103)(__int64, _QWORD, _QWORD); // rax
	__int64 v104; // rax
	int v105; // edx
	int v106; // eax
	__int64 v107; // rax
	_QWORD* v108; // r8
	__int64 v109; // rax
	__int64 v110; // r15
	unsigned int m; // ebp
	__int64 v112; // rdx
	__int64 v113; // r14
	__int64 v114; // rbx
	__int64 v115; // rax
	int* v116; // rdx
	int v117; // ecx
	int v118; // ecx
	int v119; // eax
	int v120; // eax
	unsigned __int64 v121; // rcx
	int** v122; // r9
	__int64 v123; // rax
	int* v124; // rax
	int v125; // ecx
	int* v126; // rcx
	__int64 v127; // rax
	__int64 v128; // rax
	__int64 v129; // rax
	__int64* v130; // r8
	__int64 v131; // rcx
	int v132; // eax
	__int64 v133; // rax
	unsigned int v134; // r14d
	__int64 v135; // rdi
	unsigned __int16* v136; // rbp
	__int64 v137; // rax
	__int64 v138; // r9
	unsigned __int64 v139; // r8
	unsigned __int64 v140; // r9
	__int64 v141; // rdx
	int v142; // eax
	_QWORD* v143; // rdx
	__int64 v144; // rax
	__int64 n; // rcx
	__int64 v146; // rax
	__int8* v148; // [rsp+20h] [rbp-D8h]
	int v149; // [rsp+28h] [rbp-D0h]
	__int64 v150; // [rsp+30h] [rbp-C8h]
	__int64 v151; // [rsp+38h] [rbp-C0h]
	__int64 v152; // [rsp+40h] [rbp-B8h]
	unsigned int v153; // [rsp+48h] [rbp-B0h]
	int v154; // [rsp+4Ch] [rbp-ACh]
	int v155; // [rsp+50h] [rbp-A8h]
	unsigned int v156; // [rsp+54h] [rbp-A4h]
	__int64 v157; // [rsp+58h] [rbp-A0h]
	__int64 v158; // [rsp+60h] [rbp-98h]
	__int64 v159; // [rsp+68h] [rbp-90h]
	_WORD** v160; // [rsp+70h] [rbp-88h]
	__int64 v161; // [rsp+78h] [rbp-80h]
	__int64* v162; // [rsp+80h] [rbp-78h]
	__int64 v163; // [rsp+88h] [rbp-70h]
	int v164[4]; // [rsp+90h] [rbp-68h] BYREF
	int v167; // [rsp+110h] [rbp+18h]
	__int16 v168; // [rsp+120h] [rbp+28h]
	__int16 v169; // [rsp+130h] [rbp+38h]
	unsigned int v170; // [rsp+138h] [rbp+40h]

	v9 = (__m128*)a1;
	*(_OWORD*)(a1 + 1424) = *a3;
	*(_OWORD*)(a1 + 1440) = a3[1];
	*(_OWORD*)(a1 + 1456) = a3[2];
	*(_OWORD*)(a1 + 1472) = a3[3];
	if ((a5 & 1) != 0)
	{
		v10 = a5 & 0xFFFFFFF9;
	}
	else if ((a5 & 2) != 0)
	{
		v10 = a5 & 0xFFFFFFFA;
	}
	else if ((a5 & 4) != 0)
	{
		v10 = a5 & 0xFFFFFFFC;
	}
	else
	{
		v10 = a5 | 1;
	}
	v168 = v10;
	sub_1402C8730(a1 + 560, a4);
	v9[87].m128_i32[0] = v10;
	v155 = v10 & 4;
	if ((v10 & 4) != 0)
		v11 = 0i64;
	else
		v11 = *(void(__fastcall****)(_QWORD))(a4 + 768);
	if ((void(__fastcall***)(_QWORD))v9[87].m128_u64[1] != v11)
	{
		if (v11)
			(**v11)(v11);
		v12 = v9[87].m128_u64[1];
		if (v12)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v12 + 8i64))(v12);
		v9[87].m128_u64[1] = (unsigned __int64)v11;
	}
	(*(void(__fastcall**)(__int64, unsigned __int64, __m128*))(*(_QWORD*)qword_140C65688 + 256i64))(
		qword_140C65688,
		v9[87].m128_u64[1],
		v9 + 86);
	if ((void(__fastcall***)(_QWORD))v9[88].m128_u64[0] != a7)
	{
		if (a7)
			(**a7)(a7);
		v13 = v9[88].m128_u64[0];
		if (v13)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v13 + 8i64))(v13);
		v9[88].m128_u64[0] = (unsigned __int64)a7;
	}
	if ((void(__fastcall***)(_QWORD))v9[88].m128_u64[1] != a8)
	{
		if (a8)
			(**a8)(a8);
		v14 = v9[88].m128_u64[1];
		if (v14)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v14 + 8i64))(v14);
		v9[88].m128_u64[1] = (unsigned __int64)a8;
	}
	v15 = (unsigned int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 560i64))(qword_140C65670);
	v16 = &v9[12].m128_i8[8];
	v148 = &v9[12].m128_i8[8];
	v17 = (__m128)0x3F800000u;
	v18 = (__m128)0x3F800000u;
	v9[84] = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v15), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15[1]), _mm_cvtsi32_si128(0))));
	v18.m128_f32[0] = 1.0 / v9[84].m128_f32[0];
	v17.m128_f32[0] = 1.0 / v9[84].m128_f32[1];
	v9[85] = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)0i64), _mm_unpacklo_ps(v17, (__m128)0i64));
	if (v9[12].m128_u64[1])
	{
		do
		{
			v19 = *(_QWORD*)v16;
			v20 = *(_QWORD**)(*(_QWORD*)v16 + 360i64);
			if (v20)
				*v20 = *(_QWORD*)(v19 + 368);
			v21 = *(_QWORD*)(v19 + 368);
			if (v21)
				*(_QWORD*)(v21 + 360) = *(_QWORD*)(v19 + 360);
			*(_QWORD*)(v19 + 360) = 0i64;
			*(_QWORD*)(v19 + 368) = 0i64;
			if ((v9[87].m128_i32[0] & 0x400) == 0 || (*(_BYTE*)(*(_QWORD*)(v19 + 64) + 8i64) & 1) != 0)
			{
				v22 = *(_QWORD*)v19;
				*(_QWORD*)(v19 + 1168) = 0i64;
				*(_QWORD*)(v19 + 1192) = 0i64;
				if ((*(unsigned int(__fastcall**)(__int64))(v22 + 312))(v19))
				{
					if (*(_WORD*)(v19 + 452))
					{
						v23 = *(_QWORD*)v19;
						v164[0] = 0;
						if ((*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(v23 + 24))(v19, v164, 0i64))
						{
							v24 = *(_QWORD*)(v19 + 1136);
							if (v24)
							{
								v25 = &v9[31].m128_i64[1];
								v153 = *(_DWORD*)(v24 + 48);
								v151 = *(_QWORD*)(*(_QWORD*)(v19 + 56) + 56i64);
								v162 = &v9[31].m128_i64[1];
								sub_1400523E0(&v9[31].m128_i64[1]);
								v27 = v19;
								do
								{
									for (i = *(_QWORD**)(v27 + 1480); i; i = (_QWORD*)i[3])
									{
										if (*(_WORD*)(*i + 6i64) && (*(_WORD*)(*i + 12i64) != 3 || v19 == v27))
										{
											v29 = v25[1];
											v30 = sub_14018DB00(*v25, v29 + 1, 8i64);
											v31 = v30;
											*(_QWORD*)&v30[2 * v29] = i;
											if ((int*)*v25 != v30)
											{
												sub_1407DB590(v30, (int*)*v25, 8 * v25[1]);
												v26 = *v25;
												if (*v25)
													(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
												*v25 = (__int64)v31;
											}
											v25[1] = v29 + 1;
										}
									}
									if ((*(_BYTE*)(v27 + 40) & 1) != 0)
										break;
									v27 = *(_QWORD*)(v27 + 1216);
								} while (v27);
								v9 = (__m128*)a1;
								sub_140312D80(v26, (__int64**)*v25, *(_QWORD*)(a1 + 512));
								v32 = a2;
								v33 = 0i64;
								v154 = 0;
								v34 = 0xFFFFFFFFi64;
								v35 = v19;
								do
								{
									for (j = *(_QWORD*)(v35 + 1496); j; j = *(_QWORD*)(j + 40))
									{
										if ((unsigned int)v34 > *(unsigned __int16*)(*(_QWORD*)j + 2i64))
										{
											v34 = *(unsigned __int16*)(*(_QWORD*)j + 2i64);
											v154 = *(unsigned __int8*)(j + 8);
										}
									}
									if ((*(_BYTE*)(v35 + 40) & 1) != 0)
										break;
									v35 = *(_QWORD*)(v35 + 1216);
								} while (v35);
								v37 = 0i64;
								v156 = 0;
								v157 = 0i64;
								if (v153)
								{
									while (1)
									{
										v38 = *(_QWORD*)(v19 + 1136);
										v39 = v37;
										v40 = *(_QWORD*)(v38 + 72);
										v41 = *(_QWORD*)(v38 + 64) + 112 * v39;
										v161 = v40;
										v152 = v41;
										if (!v155 || (v168 & 0x800) != 0)
										{
											v42 = *(_BYTE*)(v41 + 56);
											v43 = (v42 & 2) == 0;
										}
										else
										{
											v42 = *(_BYTE*)(v41 + 56);
											v43 = (v42 & 8) == 0;
										}
										if (!v43 || (v42 & 4) != 0 && (v9[14].m128_i8[8] & 2) != 0)
											goto LABEL_165;
										v44 = *(unsigned __int16*)(v41 + 22);
										if ((unsigned int)v44 >= *(_DWORD*)(v151 + 496))
											goto LABEL_165;
										v45 = 48 * v44;
										v46 = *(_QWORD*)(v19 + 1104) + 96 * v44;
										v158 = 48 * v44;
										v150 = *(_QWORD*)(v151 + 504);
										v47 = *(_QWORD*)(v19 + 496) + 96i64 * *(unsigned __int16*)(v41 + 24);
										v159 = v47;
										if (!*(_WORD*)(v47 + 52))
											goto LABEL_217;
										v48 = *(float*)(v47 + 32);
										if (v48 == 0.0 && *(float*)(v47 + 36) == 0.0)
											goto LABEL_217;
										v49 = *(_DWORD*)(*(_QWORD*)(v151 + 504) + v45 + 8);
										if (v49 != 2 && (*(_BYTE*)(v47 + 54) & 1) == 0)
											break;
										if (v48 == 0.0)
											goto LABEL_217;
										v124 = sub_1402FA120((__int64*)v19);
										v9 = (__m128*)a1;
										v34 = (__int64)(v32 + 2);
										v43 = *((_QWORD*)v124 + 4) == 0i64;
										*((_QWORD*)v124 + 3) = a1 + 1536;
										v124[3] = *(_DWORD*)(v19 + 304);
										v125 = *(_DWORD*)(v19 + 1392);
										*((_QWORD*)v124 + 6) = v19;
										*((_QWORD*)v124 + 7) = v47;
										*((_QWORD*)v124 + 8) = v41;
										v124[4] = v125;
										if (v43)
										{
											v126 = v124 + 10;
											*((_QWORD*)v124 + 4) = v34;
											*((_QWORD*)v124 + 5) = *(_QWORD*)v34;
											*(_QWORD*)v34 = v124;
											v127 = *((_QWORD*)v124 + 5);
											if (v127)
												*(_QWORD*)(v127 + 32) = v126;
										}
										++v32[10];
										if ((*(_DWORD*)(v150 + v45 + 12) & 0x200) != 0)
										{
											v128 = *(_QWORD*)(v19 + 1224);
											if (*(_DWORD*)(v128 + 1824) != 1)
											{
												*(_DWORD*)(v128 + 1824) = 1;
												v129 = *(_QWORD*)(v128 + 1232);
												if (v129)
												{
													do
														v129 = *(_QWORD*)(sub_1402F6470(v129, 1u) + 1248);
													while (v129);
													v25 = v162;
												}
											}
										}
									LABEL_164:
										v33 = 0i64;
									LABEL_165:
										v37 = v157 + 1;
										++v156;
										++v157;
										if (v156 >= v153)
											goto LABEL_166;
									}
									if (v49)
									{
										if (v49 == 1)
										{
											v9 = (__m128*)a1;
											v116 = sub_1402FA240((__int64*)v19);
											v33 = 0i64;
											*((_QWORD*)v116 + 3) = a1 + 1488;
											v116[3] = *(_DWORD*)(v19 + 304);
											v117 = *(_DWORD*)(v19 + 1392);
											*((_QWORD*)v116 + 6) = v19;
											v116[4] = v117;
											*((_QWORD*)v116 + 7) = v47;
											*((_QWORD*)v116 + 8) = v41;
											*((_QWORD*)v116 + 9) = 0i64;
											v116[20] = 0;
											v116[21] = *(_DWORD*)(v161 + 8 * v157);
											v34 = *(unsigned int*)(v161 + 8 * v157 + 4);
											v116[22] = v34;
											v118 = v34 & 1;
											v119 = (**(_BYTE**)(a1 + 16) & 1) == 0;
											if (v118 != v119)
											{
												v34 = (unsigned int)(v119 + v34 - v118);
												v116[22] = v34;
											}
											if ((*(_BYTE*)(v150 + v45 + 12) & 2) != 0)
												goto LABEL_203;
											v120 = *(_DWORD*)(v150 + v45 + 20);
											if (v120 < 0)
												goto LABEL_203;
											if (v120 <= 1)
											{
												if (*(float*)(v47 + 32) >= 0.99607843
													&& ((*(_BYTE*)(v41 + 56) & 1) == 0 || (*(_BYTE*)(a1 + 1392) & 4) != 0))
												{
													v121 = 0i64;
													goto LABEL_204;
												}
											}
											else if (v120 != 2)
											{
												if (v120 == 7)
												{
													v121 = ((unsigned __int64)(unsigned __int8)~*(_BYTE*)(a1 + 1392) >> 2) & 1;
													goto LABEL_204;
												}
											LABEL_203:
												v121 = 5i64;
											LABEL_204:
												v122 = (int**)&v32[v121];
												if (!*((_QWORD*)v116 + 4))
												{
													*((_QWORD*)v116 + 4) = v122;
													v34 = (__int64)(v116 + 10);
													*((_QWORD*)v116 + 5) = *v122;
													*v122 = v116;
													v123 = *((_QWORD*)v116 + 5);
													if (v123)
														*(_QWORD*)(v123 + 32) = v34;
												}
												++v32[v121 + 8];
												goto LABEL_165;
											}
											v121 = 1i64;
											goto LABEL_204;
										}
									LABEL_217:
										v9 = (__m128*)a1;
										goto LABEL_165;
									}
									v34 = v157;
									v50 = *(_QWORD*)(a1 + 512);
									v51 = dword_140B640C8[a6];
									v52 = -1;
									v53 = *(_DWORD*)(v40 + 8 * v157 + 4) + 1152 * v51;
									v149 = *(_DWORD*)(v40 + 8 * v157) + (v51 << 10);
									v169 = -1;
									v170 = v53;
									if (v50)
									{
										v54 = *v25;
										while (1)
										{
											v34 = *(_QWORD*)v54;
											if (*(_WORD*)(**(_QWORD**)v54 + 12i64) == 3
												&& *(_WORD*)(v41 + 28) == (unsigned __int16)((v34 - *(_QWORD*)(v19 + 1472)) / 136))
											{
												break;
											}
											++v33;
											v54 += 8i64;
											if (v33 >= v50)
											{
												v52 = -1;
												goto LABEL_81;
											}
										}
										v52 = *(_WORD*)(*(_QWORD*)v34 + 20i64);
										v169 = v52;
									}
								LABEL_81:
									v33 = 0i64;
									v160 = 0i64;
									v55 = 0i64;
									if (v50)
									{
										v56 = (__int64*)*v25;
										do
										{
											v34 = *v56;
											v57 = *(_WORD**)*v56;
											v47 = v159;
											if (v57[3] != 1)
												break;
											v32 = a2;
											if (v57[6] != 3 || v57[10] == v52)
											{
												v160 = (_WORD**)*v56;
												v53 += 32 * (unsigned __int16)v57[3];
												v170 = v53;
												break;
											}
											++v55;
											++v56;
										} while (v55 < v50);
									}
									v58 = *(unsigned __int16*)(v41 + 26);
									if ((unsigned int)v58 >= *(_DWORD*)(v151 + 1392))
										v59 = v154;
									else
										v59 = *(unsigned __int8*)(*(_QWORD*)(v19 + 1488) + 48 * v58 + 8);
									v167 = v59;
									if (v48 == 0.0)
									{
									LABEL_156:
										v9 = (__m128*)a1;
										if (*(float*)(v47 + 36) == 0.0)
											goto LABEL_165;
										if ((*(_BYTE*)(a1 + 1392) & 4) != 0)
											goto LABEL_165;
										v98 = *(_DWORD*)(v158 + v150 + 20);
										if (v98 > 2 && v98 != 7)
											goto LABEL_165;
										v99 = sub_1402FA240((__int64*)v19);
										v34 = (__int64)(v32 + 4);
										v100 = v99;
										*((_QWORD*)v99 + 3) = a1 + 1488;
										v43 = *((_QWORD*)v99 + 4) == 0i64;
										v99[3] = *(_DWORD*)(v19 + 304);
										v99[4] = *(_DWORD*)(v19 + 1392);
										*((_QWORD*)v99 + 6) = v19;
										*((_QWORD*)v99 + 7) = v47;
										*((_QWORD*)v99 + 8) = v41;
										*((_QWORD*)v99 + 9) = v160;
										v99[22] = v53 + 32256;
										v99[20] = v167;
										v99[21] = v149;
										if (v43)
										{
											*((_QWORD*)v99 + 4) = v34;
											*((_QWORD*)v99 + 5) = *(_QWORD*)v34;
											*(_QWORD*)v34 = v99;
											v101 = *((_QWORD*)v99 + 5);
											if (v101)
												*(_QWORD*)(v101 + 32) = v100 + 10;
										}
										++v32[12];
										goto LABEL_164;
									}
									v60 = a1;
									v34 = v158;
									v61 = *(unsigned int*)(a1 + 1392);
									if ((v61 & 0x20) == 0 && (*(_BYTE*)(v158 + v150 + 12) & 2) == 0)
									{
										v62 = *(_DWORD*)(v158 + v150 + 20);
										if (v62 >= 0)
										{
											if (v62 <= 1)
											{
												if (v48 < 0.99607843 || (v42 & 1) != 0 && (v61 & 4) == 0)
													goto LABEL_101;
											LABEL_105:
												v63 = 0;
												v64 = 0i64;
												goto LABEL_107;
											}
											if (v62 == 2)
											{
											LABEL_101:
												v63 = 1;
												v64 = 1i64;
												goto LABEL_107;
											}
											if (v62 == 7)
											{
												if ((v61 & 4) == 0)
													goto LABEL_101;
												goto LABEL_105;
											}
										}
									}
									v63 = 5;
									v64 = 5i64;
								LABEL_107:
									if ((v61 & 4) != 0)
									{
										if (*(_DWORD*)(v158 + v150 + 20) == 1)
											v53 = v170 + 4608;
										goto LABEL_122;
									}
									if (v63)
									{
										if (v63 != 1)
										{
										LABEL_122:
											if ((*(_DWORD*)(v158 + v150 + 12) & 0x10002) != 65538)
											{
												v67 = sub_1402FA240((__int64*)v19);
												v60 = a1;
												v34 = (__int64)&v32[v64];
												v68 = v67;
												v43 = *((_QWORD*)v67 + 4) == 0i64;
												*((_QWORD*)v67 + 3) = a1 + 1488;
												v67[3] = *(_DWORD*)(v19 + 304);
												v69 = *(_DWORD*)(v19 + 1392);
												*((_QWORD*)v67 + 6) = v19;
												*((_QWORD*)v67 + 7) = v47;
												v67[4] = v69;
												*((_QWORD*)v67 + 8) = v152;
												v67[22] = v53;
												*((_QWORD*)v67 + 9) = v160;
												v67[20] = v167;
												v67[21] = v149;
												if (v43)
												{
													*((_QWORD*)v67 + 4) = v34;
													*((_QWORD*)v67 + 5) = *(_QWORD*)v34;
													*(_QWORD*)v34 = v67;
													v70 = *((_QWORD*)v67 + 5);
													if (v70)
														*(_QWORD*)(v70 + 32) = v68 + 10;
												}
												++v32[v64 + 8];
											}
											v33 = 0i64;
											v71 = 0i64;
											if (*(_QWORD*)(v60 + 512))
											{
												do
												{
													v72 = *(__int64**)(*v25 + 8 * v71);
													v73 = *v72;
													v74 = *(_WORD*)(*v72 + 6);
													if (v74 == 2)
														break;
													v34 = 3i64;
													if ((*(_WORD*)(v73 + 12) != 3 || *(_WORD*)(v73 + 20) == v169) && v74 == 3)
													{
														v75 = sub_1402FA240((__int64*)v19);
														v60 = a1;
														v34 = (__int64)&v32[v64];
														v76 = v75;
														*((_QWORD*)v75 + 3) = a1 + 1488;
														v75[3] = *(_DWORD*)(v19 + 304);
														v77 = *(_DWORD*)(v19 + 1392);
														*((_QWORD*)v75 + 6) = v19;
														v75[4] = v77;
														*((_QWORD*)v75 + 7) = v47;
														*((_QWORD*)v75 + 8) = v152;
														v75[20] = v167;
														v75[21] = v149;
														*((_QWORD*)v75 + 9) = v72;
														v43 = *((_QWORD*)v75 + 4) == 0i64;
														v75[22] = v53 + 32 * (3 - ((v53 >> 5) & 3));
														if (v43)
														{
															*((_QWORD*)v75 + 4) = v34;
															*((_QWORD*)v75 + 5) = *(_QWORD*)v34;
															*(_QWORD*)v34 = v75;
															v78 = *((_QWORD*)v75 + 5);
															if (v78)
																*(_QWORD*)(v78 + 32) = v76 + 10;
														}
														++v32[v64 + 8];
													}
													++v71;
												} while (v71 < *(_QWORD*)(v60 + 512));
												v33 = 0i64;
											}
											v79 = a1;
											v80 = *(_QWORD*)(a1 + 512);
											if (v80)
											{
												do
												{
													v81 = v80 - 1;
													v82 = *(__int64**)(*v25 + 8 * v81);
													v163 = v81;
													v83 = *v82;
													if (*(_WORD*)(*v82 + 6) != 2)
														break;
													if (*(_WORD*)(v83 + 12) != 3 || *(_WORD*)(v83 + 20) == v169)
													{
														if ((*(_BYTE*)(v83 + 18) & 4) != 0)
														{
															v84 = sub_1403266D0(*(_QWORD*)(v19 + 1136), (__int64*)(v83 + 30));
															v33 = 0i64;
															v85 = 0i64;
															v86 = v84;
															if (*((_QWORD*)v84 + 1))
															{
																v87 = v79 + 1488;
																v88 = (int**)(v32 + 5);
																v89 = 0i64;
																do
																{
																	v90 = sub_1402FA240((__int64*)v19);
																	v33 = 0i64;
																	v34 = (__int64)v90;
																	*((_QWORD*)v90 + 3) = v87;
																	v90[3] = *(_DWORD*)(v19 + 304);
																	v91 = *(_DWORD*)(v19 + 1392);
																	*((_QWORD*)v90 + 6) = v19;
																	v90[4] = v91;
																	*((_QWORD*)v90 + 7) = v159;
																	v92 = *(_QWORD*)v86;
																	*((_QWORD*)v90 + 9) = v82;
																	v90[20] = 0;
																	*((_QWORD*)v90 + 8) = v89 + v92;
																	v90[21] = *(_DWORD*)(*((_QWORD*)v86 + 2) + 8 * v85);
																	v90[22] = *(_DWORD*)(*((_QWORD*)v86 + 2) + 8 * v85 + 4)
																		+ 32 * *(unsigned __int16*)(*v82 + 6);
																	if (!*((_QWORD*)v90 + 4))
																	{
																		*((_QWORD*)v90 + 4) = v88;
																		*((_QWORD*)v90 + 5) = *v88;
																		*v88 = v90;
																		v93 = *((_QWORD*)v90 + 5);
																		if (v93)
																			*(_QWORD*)(v93 + 32) = v34 + 40;
																	}
																	++v32[13];
																	++v85;
																	v89 += 112i64;
																} while (v85 < *((_QWORD*)v86 + 1));
																v25 = v162;
																v47 = v159;
																v79 = a1;
															}
														}
														else
														{
															v94 = sub_1402FA240((__int64*)v19);
															v95 = v94;
															v33 = 0i64;
															*((_QWORD*)v94 + 3) = v79 + 1488;
															v94[3] = *(_DWORD*)(v19 + 304);
															v96 = *(_DWORD*)(v19 + 1392);
															*((_QWORD*)v94 + 6) = v19;
															*((_QWORD*)v94 + 7) = v47;
															v94[4] = v96;
															*((_QWORD*)v94 + 8) = v152;
															*((_QWORD*)v94 + 9) = v82;
															v94[20] = 0;
															v94[21] = *(_DWORD*)(v161 + 8 * v157);
															v34 = (__int64)(v32 + 5);
															v94[22] = *(_DWORD*)(v161 + 8 * v157 + 4) + 32 * *(unsigned __int16*)(*v82 + 6);
															if (!*((_QWORD*)v94 + 4))
															{
																*((_QWORD*)v94 + 4) = v34;
																*((_QWORD*)v94 + 5) = *(_QWORD*)v34;
																*(_QWORD*)v34 = v94;
																v97 = *((_QWORD*)v94 + 5);
																if (v97)
																	*(_QWORD*)(v97 + 32) = v95 + 10;
															}
															++v32[13];
														}
													}
													v80 = v163;
												} while (v163);
											}
											v53 = v170;
											v41 = v152;
											goto LABEL_156;
										}
										v65 = v170;
										if (*(_DWORD*)(v158 + v150 + 20) == 7)
										{
											v53 = v170 + 27648;
											goto LABEL_122;
										}
									}
									else
									{
										if ((v61 & 1) != 0)
										{
											if (*(_DWORD*)(v158 + v150 + 20))
											{
												v53 = v170 + 18432;
											}
											else
											{
												v66 = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65688
													+ 224i64))(
														qword_140C65688,
														v61,
														v158);
												v60 = a1;
												if (*(_DWORD*)(*v66 + 4i64 * *(unsigned __int8*)(v46 + 88)) == 1)
													v53 = v170 + 13824;
												else
													v53 = v170 + 9216;
											}
											goto LABEL_122;
										}
										v65 = v170;
									}
									v53 = v65 + 23040;
									goto LABEL_122;
								}
							LABEL_166:
								if (v155)
								{
									v16 = &v9[12].m128_i8[8];
								}
								else
								{
									if (!(*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v19 + 1008i64))(
										v19,
										v37,
										v34))
									{
										for (k = *(int**)(v19 + 1696); k; k = (int*)*((_QWORD*)k + 15))
										{
											v103 = (unsigned int(__fastcall*)(__int64, _QWORD, _QWORD)) * ((_QWORD*)k + 2);
											if (!v103 || v103(v19, (unsigned int)k[1], *((_QWORD*)k + 4)))
											{
												if (*((_QWORD*)k + 3))
												{
													v104 = *((_QWORD*)k + 1);
													if (*(_WORD*)(v104 + 52))
													{
														v105 = *k;
														if (!*k)
															v105 = *(float*)(v104 + 32) < 0.99607843;
														v43 = *((_QWORD*)k + 9) == 0i64;
														*((_QWORD*)k + 8) = (char*)v9 + 1512;
														k[13] = *(_DWORD*)(v19 + 304);
														v106 = *(_DWORD*)(v19 + 1392);
														*((_QWORD*)k + 11) = v19;
														k[14] = v106;
														v107 = *((_QWORD*)k + 1);
														*((_QWORD*)k + 13) = k;
														*((_QWORD*)k + 12) = v107;
														v108 = &v32[v105];
														if (v43)
														{
															*((_QWORD*)k + 9) = v108;
															*((_QWORD*)k + 10) = *v108;
															*v108 = k + 10;
															v109 = *((_QWORD*)k + 10);
															if (v109)
																*(_QWORD*)(v109 + 32) = k + 20;
														}
														++v32[v105 + 8];
													}
												}
											}
										}
									}
									if (*(_DWORD*)(v19 + 1440) && *(_DWORD*)(v19 + 1444))
									{
										v110 = v151;
										if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 344i64))(v19))
										{
											for (m = 0; m < *(_DWORD*)(v151 + 792); ++m)
											{
												v112 = *(_QWORD*)(v19 + 496)
													+ 96i64
													* *(unsigned __int16*)(352i64
														* *(unsigned __int16*)(400i64 * m + *(_QWORD*)(v151 + 800) + 2)
														+ *(_QWORD*)(v151 + 392)
														+ 6);
												if (*(_WORD*)(v112 + 52))
												{
													if (!v9[30].m128_u64[1])
														goto LABEL_219;
													v113 = *(_QWORD*)(432i64 * m + *(_QWORD*)(v19 + 1464) + 424);
													if (!v113)
													{
														v9 = (__m128*)a1;
													LABEL_219:
														v130 = v32 + 3;
														v131 = 432i64 * m + *(_QWORD*)(v19 + 1464) + 352i64;
														v43 = *(_QWORD*)(v131 + 32) == 0i64;
														*(_QWORD*)(v131 + 24) = (char*)v9 + 1560;
														*(_DWORD*)(v131 + 12) = *(_DWORD*)(v19 + 304);
														v132 = *(_DWORD*)(v19 + 1392);
														*(_QWORD*)(v131 + 48) = v19;
														*(_QWORD*)(v131 + 56) = v112;
														*(_DWORD*)(v131 + 64) = m;
														*(_DWORD*)(v131 + 16) = v132;
														if (v43)
														{
															*(_QWORD*)(v131 + 32) = v130;
															*(_QWORD*)(v131 + 40) = *v130;
															*v130 = v131;
															v133 = *(_QWORD*)(v131 + 40);
															if (v133)
																*(_QWORD*)(v133 + 32) = v131 + 40;
														}
														++v32[11];
														goto LABEL_223;
													}
													v114 = *(_QWORD*)v19;
													v115 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v113 + 24i64))(v113);
													if ((*(int(__fastcall**)(__int64, _QWORD, __int64))(v114 + 1048))(v19, m, v115) >= 0)
														(*(void(__fastcall**)(__int64))(*(_QWORD*)v113 + 32i64))(v113);
												}
											LABEL_223:
												v9 = (__m128*)a1;
											}
										}
									}
									else
									{
										v110 = v151;
									}
									v134 = 0;
									if (*(_DWORD*)(*(_QWORD*)(v19 + 64) + 760i64))
									{
										do
										{
											v135 = *(_QWORD*)(*(_QWORD*)(v19 + 1424) + 8i64 * v134);
											if (!v135)
												goto LABEL_244;
											v136 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v135 + 32i64))(v135);
											v137 = v136[1];
											if ((unsigned int)v137 < *(_DWORD*)(v110 + 512))
											{
												v138 = *(_QWORD*)(v19 + 1224);
												v139 = *(unsigned __int16*)(*(_QWORD*)(v110 + 520) + 4 * v137);
												if (v139 >> 3 >= *(_QWORD*)(v138 + 1048))
													goto LABEL_244;
												if (((unsigned __int8)(1 << (v139 & 7)) & *(_BYTE*)((v139 >> 3) + *(_QWORD*)(v138 + 1040))) == 0)
													goto LABEL_244;
												v140 = (unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(v110 + 520) + 4 * v137) >> 3;
												if (v140 >= *(_QWORD*)(v19 + 1048)
													|| ((unsigned __int8)(1 << (v139 & 7)) & *(_BYTE*)(v140 + *(_QWORD*)(v19 + 1040))) == 0)
												{
													goto LABEL_244;
												}
											}
											v141 = *(_QWORD*)(v19 + 496)
												+ 96i64 * *(unsigned __int16*)(352i64 * *v136 + *(_QWORD*)(v110 + 392) + 6);
											if (!*(_WORD*)(v141 + 52))
												goto LABEL_244;
											*(_QWORD*)(v135 + 328) = a1 + 1584;
											*(_DWORD*)(v135 + 316) = *(_DWORD*)(v19 + 304);
											v142 = *(_DWORD*)(v19 + 1392);
											*(_QWORD*)(v135 + 352) = v19;
											*(_QWORD*)(v135 + 360) = v141;
											*(_QWORD*)(v135 + 368) = v135;
											*(_DWORD*)(v135 + 312) = 0;
											*(_DWORD*)(v135 + 320) = v142;
											if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v135 + 32i64))(v135) + 16) & 1) != 0)
												*(_DWORD*)(v135 + 312) |= 1u;
											if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v135 + 32i64))(v135) + 16) & 2) != 0)
												*(_DWORD*)(v135 + 312) |= 2u;
											v143 = v32 + 5;
											if (!*(_QWORD*)(v135 + 336))
											{
												*(_QWORD*)(v135 + 336) = v143;
												*(_QWORD*)(v135 + 344) = *v143;
												*v143 = v135 + 304;
												v144 = *(_QWORD*)(v135 + 344);
												if (v144)
													*(_QWORD*)(v144 + 32) = v135 + 344;
											}
											++v32[13];
											if (!*((_DWORD*)v136 + 1))
											{
												v16 = v148;
												if (**((_BYTE**)v136 + 18) == 1)
													(*(void(__fastcall**)(__int64, __int8*))(*(_QWORD*)v135 + 88i64))(v135, v148);
											}
											else
											{
											LABEL_244:
												v16 = v148;
											}
											++v134;
										} while (v134 < *(_DWORD*)(*(_QWORD*)(v19 + 64) + 760i64));
										v9 = (__m128*)a1;
									}
									else
									{
										v9 = (__m128*)a1;
										v16 = v148;
									}
								}
							}
						}
					}
				}
				for (n = *(_QWORD*)(v19 + 1232); n; n = *(_QWORD*)(n + 1248))
				{
					if (*(_WORD*)(n + 452) && (!*(_DWORD*)(n + 1200) || *(_QWORD*)(n + 1208)) && !*(_QWORD*)(n + 360))
					{
						*(_QWORD*)(n + 360) = v16;
						*(_QWORD*)(n + 368) = *(_QWORD*)v16;
						*(_QWORD*)v16 = n;
						v146 = *(_QWORD*)(n + 368);
						if (v146)
							*(_QWORD*)(v146 + 360) = n + 368;
					}
				}
			}
		} while (*(_QWORD*)v16);
	}
	return 0i64;
}
// 140311330: variable 'v26' is possibly undefined
// 140311BF1: variable 'v34' is possibly undefined
// 140B640C8: using guessed type int dword_140B640C8[4];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140310F70: using guessed type int var_68[4];

