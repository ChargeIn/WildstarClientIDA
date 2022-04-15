#include "../winhttp.h"

//----- (0000000140849810) ----------------------------------------------------
void __fastcall sub_140849810(char a1, __int64 a2, __int64* a3, int a4, float a5, __int64* a6)
{
	float v6; // xmm8_4
	int v8; // r10d
	unsigned int v9; // r8d
	float v10; // xmm8_4
	unsigned int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // rbx
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	void* v16; // rsp
	int* v17; // r15
	unsigned __int64 v18; // rcx
	__int64 v19; // rax
	void* v20; // rsp
	__int64 v21; // rax
	void* v22; // rsp
	__int64 v23; // rax
	signed __int64 v24; // rax
	void* v25; // rsp
	__int64 v26; // r8
	void* v27; // rsp
	int* v28; // r13
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rdx
	unsigned __int8 v32; // al
	unsigned __int8 v33; // al
	_DWORD* v34; // rax
	__int64 v35; // rdi
	int v36; // ebx
	int v37; // ebx
	bool v38; // zf
	__int64 v39; // r14
	unsigned int v40; // r12d
	__int64 v41; // rbx
	unsigned __int8 v42; // al
	unsigned __int8 v43; // cl
	double j; // xmm2_8
	__int64 v45; // rsi
	__int64 v46; // rcx
	__m128* v47; // r15
	__m128i v48; // xmm0
	__m128* v49; // r13
	int v50; // eax
	__int64 v51; // rcx
	double v52; // xmm0_8
	__m128 v53; // xmm0
	__m128* v54; // rax
	__m128 v55; // xmm0
	float v56; // xmm0_4
	__int64 v57; // rdi
	unsigned int v58; // edx
	unsigned int v59; // r10d
	int v60; // r13d
	__m128* v61; // r11
	__int64 v62; // r15
	unsigned __int8 v63; // r9
	char v64; // r8
	unsigned __int8 k; // dl
	float v66; // xmm1_4
	__m128* v67; // rax
	__m128 v68; // xmm1
	__int64 v69; // rcx
	__int64 v70; // rsi
	__int64 v71; // rcx
	__int64 v72; // rax
	__int64* v73; // r15
	__int64 v74; // r13
	unsigned __int8 v75; // cl
	unsigned __int8 v76; // al
	double v77; // xmm6_8
	__int64 v78; // rdi
	__m128* v79; // rsi
	_DWORD* v80; // r15
	double v81; // xmm0_8
	float v82; // xmm0_4
	unsigned int v83; // edx
	__int64 v84; // r11
	unsigned int v85; // r10d
	__int64 v86; // r13
	unsigned __int8 v87; // r9
	char v88; // r8
	unsigned __int8 i; // dl
	float v90; // xmm0_4
	__m128* v91; // rax
	__m128 v92; // xmm1
	__int64 v93; // rcx
	__int64 v94; // rcx
	int v95; // edi
	float v96; // xmm15_4
	__int64 v97; // r14
	unsigned __int8 v98; // al
	unsigned __int8 m; // cl
	__int64 v100; // rdi
	__int64 v101; // rbx
	char v102; // si
	__int64 v103; // rax
	__int64 v104; // rcx
	int* v105; // rdx
	__int64 v106; // rax
	__int128 v107; // xmm0
	float v108; // xmm1_4
	float v109; // xmm6_4
	float v110; // xmm0_4
	__int64 v111; // rdi
	float v112; // xmm0_4
	__int64 v113; // r13
	unsigned int v114; // r12d
	__int64 n; // rax
	unsigned int v116; // edx
	__int64 v117; // rcx
	float v118; // xmm10_4
	float v119; // xmm12_4
	float v120; // xmm13_4
	__int64 v121; // rbx
	__m128 v122; // xmm11
	__int64 v123; // r15
	__int64 v124; // r14
	unsigned __int8 v125; // al
	unsigned __int8 ii; // di
	float v127; // xmm6_4
	float v128; // xmm7_4
	float v129; // xmm8_4
	float v130; // xmm9_4
	__int64 v131; // r13
	__int64 v132; // r10
	__int64 v133; // r11
	int v134; // r9d
	unsigned int v135; // r8d
	__m128 v136; // xmm2
	int* v137; // rdx
	__m128 v138; // xmm2
	__int64 v139; // rcx
	__m128 v140; // xmm1
	unsigned __int8 v141; // al
	char jj; // cl
	__int64* v143; // r11
	__int64 v144; // rax
	__int64 v145; // rdi
	unsigned __int8 v146; // si
	int* v147; // rax
	__int64 v148; // rcx
	__m128 v149; // xmm0
	__m128 v150; // xmm1
	__m128 v151; // xmm1
	float v152; // xmm0_4
	float v153; // xmm0_4
	float v154; // xmm0_4
	float v155; // xmm0_4
	__int64* v156; // r8
	__m128 v157; // xmm6
	__int64 v158; // r15
	__int64 v159; // rbx
	int v160; // r14d
	unsigned __int8 v161; // al
	unsigned __int8 kk; // cl
	__int64 v163; // rdi
	unsigned __int8 v164; // si
	unsigned int v165; // edx
	__int64 v166; // r13
	__m128 v167; // xmm0
	__m128 v168; // xmm1
	__int64 v169; // rcx
	__m128 v170; // xmm1
	__m128 v171; // xmm0
	__m128 v172; // xmm1
	char v173; // r9
	float v174; // xmm0_4
	__int64 v175; // rdx
	float v176; // xmm0_4
	__int64 v177; // rdx
	float v178; // xmm0_4
	float v179; // xmm1_4
	float v180; // xmm0_4
	unsigned int v181; // r15d
	__int64 v182; // r12
	unsigned int v183; // esi
	__int64 v184; // rbx
	unsigned int mm; // eax
	__int64 v186; // r14
	float v187; // xmm6_4
	float v188; // xmm0_4
	__int64 v189; // rdi
	float v190; // xmm0_4
	int v191; // [rsp+30h] [rbp+0h] BYREF
	unsigned int v192; // [rsp+34h] [rbp+4h]
	unsigned int v193; // [rsp+38h] [rbp+8h]
	int* v194; // [rsp+40h] [rbp+10h]
	unsigned int v195; // [rsp+48h] [rbp+18h]
	int v196; // [rsp+4Ch] [rbp+1Ch]
	float* v197; // [rsp+50h] [rbp+20h]
	int v198; // [rsp+58h] [rbp+28h] BYREF
	float* v199; // [rsp+60h] [rbp+30h]
	float* v200; // [rsp+68h] [rbp+38h]
	_DWORD* v201; // [rsp+70h] [rbp+40h]
	int v202; // [rsp+78h] [rbp+48h]
	__int64 v203[2]; // [rsp+80h] [rbp+50h]
	__int64 v204[2]; // [rsp+90h] [rbp+60h]
	_DWORD* v205; // [rsp+A0h] [rbp+70h]
	__int64 v206[2]; // [rsp+A8h] [rbp+78h]
	__int64 v207[3]; // [rsp+B8h] [rbp+88h]
	int v208[48]; // [rsp+D0h] [rbp+A0h] BYREF
	int v212; // [rsp+298h] [rbp+268h] BYREF

	v212 = a4;
	v6 = *(float*)(a2 + 456);
	v8 = a4;
	v9 = 0;
	v193 = 0;
	v10 = v6 * 0.0099999998;
	if (a4)
	{
		do
		{
			++v9;
			v8 &= v8 - 1;
		} while (v8);
		v193 = v9;
	}
	v11 = v9;
	LOBYTE(v191) = (a4 & 8) != 0;
	if ((a4 & 8) != 0)
		v11 = v9 - 1;
	v12 = a3[1] - *a3;
	v192 = v11;
	v13 = v12 / 36;
	v14 = 192i64 * (unsigned int)(v12 / 36);
	v15 = v14 + 15;
	if (v14 + 15 <= v14)
		v15 = 0xFFFFFFFFFFFFFF0i64;
	v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0ui64);
	v17 = &v191;
	v194 = &v191;
	sub_1407E4830(&v191, 0i64, v14);
	v18 = 4i64 * (unsigned int)v13;
	v19 = v18 + 15;
	if (v18 + 15 <= v18)
		v19 = 0xFFFFFFFFFFFFFF0i64;
	v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0ui64);
	v199 = (float*)&v191;
	v21 = v18 + 15;
	if (v18 + 15 <= v18)
		v21 = 0xFFFFFFFFFFFFFF0i64;
	v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0ui64);
	v200 = (float*)&v191;
	v23 = v18 + 15;
	if (v18 + 15 <= v18)
		v23 = 0xFFFFFFFFFFFFFF0i64;
	v24 = v23 & 0xFFFFFFFFFFFFFFF0ui64;
	v25 = alloca(v24);
	v26 = a2;
	v27 = alloca(v24);
	v28 = &v191;
	v29 = *(_QWORD*)(a2 + 88) + 8i64;
	v197 = (float*)&v191;
	v204[0] = v29;
	if (!*(_QWORD*)(v29 + 72))
	{
		v30 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552), *(_DWORD*)(v29 + 4));
		v26 = a2;
		*(_QWORD*)(v29 + 72) = v30;
	}
	v31 = *(_QWORD*)(v29 + 72);
	v201 = 0i64;
	v206[0] = v31;
	v205 = 0i64;
	if (v31)
	{
		v32 = *(_BYTE*)(v31 + 132);
		if (v32 == 0xFF)
			v201 = 0i64;
		else
			v201 = (_DWORD*)(v31 + 16 * (v32 + 3i64));
		v33 = *(_BYTE*)(v31 + 131);
		if (v33 == 0xFF)
			v34 = 0i64;
		else
			v34 = (_DWORD*)(v31 + 16 * (v33 + 3i64));
		v205 = v34;
	}
	v35 = 0i64;
	v36 = *(unsigned __int8*)(v26 + 379) >> 2;
	v196 = 0;
	v37 = v36 & 3;
	v38 = (*(_BYTE*)(v26 + 382) & 0x40) == 0;
	v202 = v37;
	if (v38)
	{
		sub_1408605D0(v26);
		v26 = a2;
	}
	v39 = *(_QWORD*)(v26 + 496);
	if (v39)
	{
		sub_1408708C0(*(_QWORD*)(v26 + 496));
		sub_1408708B0(v39);
		v26 = a2;
	}
	v40 = 0;
	v38 = v37 == 1;
	v41 = *a3;
	if (!v38)
	{
		while (1)
		{
			v74 = (unsigned int)v35;
			v75 = 0;
			v197[v35] = 0.0;
			v76 = *(_BYTE*)(v41 + 17);
			v77 = 0.0;
			for (v203[0] = (unsigned int)v35; (v76 & 1) == 0; ++v75)
				v76 >>= 1;
			v78 = v75;
			v79 = (__m128*) & v17[8 * v40];
			if ((*(_BYTE*)(v204[0] + 68) & 1) == 0)
				break;
			v80 = v201;
			if (v201)
			{
				*(_QWORD*)&v81 = *(unsigned int*)(v41 + 8);
				*(float*)&v81 = sub_1408FC950(v81);
				*(float*)&v81 = sub_140835CA0(v80, *(float*)&v81 * *(float*)v41, 0, &v198);
				v77 = v81;
			}
			if (v205)
			{
				v82 = sub_140835CA0(v205, *(float*)v41, 0, &v198);
				v197[v74] = v82;
			}
			v83 = v192;
			if (v192)
			{
				sub_140864810(*(float*)(v41 + 4), v10, v77, (__int64)v79, v192);
			LABEL_80:
				v83 = v192;
			}
			v84 = qword_140C61FE0;
			if (v39)
			{
				if (((1 << v78) & dword_140C61FF0) != 0)
				{
					v85 = 0;
					if (v83)
					{
						v86 = (__int64)v194;
						do
						{
							v87 = *(_BYTE*)(v78 + v84 + 124) & *(_BYTE*)(v84 + 136);
							if (v87)
							{
								v88 = 1;
								for (i = 0; i < 4u; ++i)
								{
									if (((unsigned __int8)v88 & v87) != 0)
									{
										v90 = *(float*)(v41 + 20);
										if (v90 <= *(float*)(v39 + 4i64 * i + 32))
											v90 = *(float*)(v39 + 4i64 * i + 32);
										*(float*)(v39 + 4i64 * i + 32) = v90;
										v91 = (__m128*)(v39 + ((v85 + i * (*(_WORD*)(v39 + 54) & 7) + 1i64) << 6));
										v92 = v91[1];
										*v91 = _mm_max_ps(*v91, *v79);
										v91[1] = _mm_max_ps(v92, v79[1]);
									}
									v88 *= 2;
								}
								v83 = v192;
							}
							if (((1 << v78) & dword_140C10F80) == 0 || *(char*)(a2 + 382) < 0)
							{
								v93 = 32i64 * (v40 + v85);
								*(_OWORD*)(v93 + v86) = 0i64;
								*(_OWORD*)(v93 + v86 + 16) = 0i64;
							}
							++v85;
							v79 += 2;
						} while (v85 < v83);
						v74 = v203[0];
					}
				}
			}
			v70 = (__int64)v194;
			if ((_BYTE)v191)
			{
				v94 = 32i64 * (v40 + v193 - 1);
				*(_OWORD*)&v194[(unsigned __int64)v94 / 4] = 0i64;
				*(_OWORD*)(v94 + v70 + 16) = 0i64;
				*(_DWORD*)(v94 + v70 + 20) = 1065353216;
			}
			v95 = v196;
			v73 = a3;
			v199[v74] = 0.0;
			v35 = (unsigned int)(v95 + 1);
			v41 += 36i64;
			v40 += 6;
			v200[v74] = 0.0;
			v196 = v35;
			if (v41 == a3[1])
				goto LABEL_101;
			v17 = v194;
		}
		sub_1408642D0(0.5, 0.5, v10, 1, v212, (__m128*) & v17[8 * v40]);
		goto LABEL_80;
	}
	v195 = 0;
	while (1)
	{
		v28[v35] = 0;
		v42 = *(_BYTE*)(v41 + 17);
		v43 = 0;
		for (j = 0.0; (v42 & 1) == 0; ++v43)
			v42 >>= 1;
		v45 = v43;
		v46 = *(_QWORD*)(v26 + 176);
		v47 = (__m128*) & v194[8 * v40];
		v48 = _mm_cvtsi32_si128(*(unsigned __int8*)(v46 + v45 + 88));
		v49 = (__m128*) & byte_140C62000[128 * (unsigned __int64)(unsigned int)v45];
		v207[0] = (__int64)v47;
		v203[0] = (__int64)v49;
		v199[v35] = _mm_cvtepi32_ps(v48).m128_f32[0] * 0.0039215689;
		v50 = *(unsigned __int8*)(v46 + v45 + 80);
		v51 = v192;
		v200[v35] = (float)v50 * 0.0039215689;
		if ((_DWORD)v51)
		{
			if (v49[2].m128_i8[8])
			{
				if ((*(_BYTE*)(v204[0] + 68) & 1) != 0)
				{
					if (v201)
					{
						*(_QWORD*)&v52 = *(unsigned int*)(v41 + 8);
						*(float*)&v52 = sub_1408FC950(v52);
						*(float*)&v52 = sub_140835CA0(v201, *(float*)&v52 * *(float*)v41, 0, &v198);
						LODWORD(v51) = v192;
						j = v52;
					}
					sub_140864810(*(float*)(v41 + 4), v10, j, (__int64)v47, v51);
				}
				else
				{
					sub_1408642D0(0.5, 0.5, v10, 1, v212, v47);
				}
			}
			else
			{
				v53 = 0i64;
				v53.m128_f32[0] = (float)(int)v51;
				v53.m128_f32[0] = 1.0 / _mm_sqrt_ps(v53).m128_f32[0];
				v54 = v47;
				v55 = _mm_shuffle_ps(v53, v53, 0);
				do
				{
					*v54 = v55;
					v54[1] = v55;
					v54 += 2;
					--v51;
				} while (v51);
			}
		}
		if (v205)
		{
			v56 = sub_140835CA0(v205, *(float*)v41, 0, &v198);
			v197[v35] = v56;
		}
		v57 = qword_140C61FE0;
		if (v39)
		{
			if (((1 << v45) & dword_140C61FF0) != 0)
			{
				v58 = v192;
				v59 = 0;
				if (v192)
				{
					v60 = v195;
					v61 = v47;
					v62 = (__int64)v194;
					do
					{
						v63 = *(_BYTE*)(v57 + 136) & *(_BYTE*)(v45 + v57 + 124);
						if (v63)
						{
							v64 = 1;
							for (k = 0; k < 4u; ++k)
							{
								if (((unsigned __int8)v64 & v63) != 0)
								{
									v66 = *(float*)(v41 + 20);
									if (v66 <= *(float*)(v39 + 4i64 * k + 32))
										v66 = *(float*)(v39 + 4i64 * k + 32);
									*(float*)(v39 + 4i64 * k + 32) = v66;
									v67 = (__m128*)(v39 + ((v59 + k * (*(_WORD*)(v39 + 54) & 7) + 1i64) << 6));
									v68 = v67[1];
									*v67 = _mm_max_ps(*v67, *v61);
									v67[1] = _mm_max_ps(v68, v61[1]);
								}
								v64 *= 2;
							}
							v58 = v192;
						}
						if (((1 << v45) & dword_140C10F80) == 0 || *(char*)(a2 + 382) < 0)
						{
							v69 = 32i64 * (v59 + v60);
							*(_OWORD*)(v69 + v62) = 0i64;
							*(_OWORD*)(v69 + v62 + 16) = 0i64;
						}
						++v59;
						v61 += 2;
					} while (v59 < v58);
					v47 = (__m128*)v207[0];
					v49 = (__m128*)v203[0];
				}
			}
			v40 = v195;
		}
		v70 = (__int64)v194;
		if ((_BYTE)v191)
		{
			v71 = 32i64 * (v40 + v193 - 1);
			*(_OWORD*)&v194[(unsigned __int64)v71 / 4] = 0i64;
			*(_OWORD*)(v71 + v70 + 16) = 0i64;
			*(_DWORD*)(v71 + v70 + 20) = 1065353216;
		}
		v72 = v193;
		if (v193)
		{
			do
			{
				v47 += 2;
				v47[-2] = _mm_mul_ps(v49[3], v47[-2]);
				v47[-1] = _mm_mul_ps(v49[4], v47[-1]);
				--v72;
			} while (v72);
		}
		v73 = a3;
		v40 += 6;
		v35 = (unsigned int)(v196 + 1);
		v41 += 36i64;
		v195 = v40;
		++v196;
		if (v41 == a3[1])
			break;
		v26 = a2;
		v28 = (int*)v197;
	}
LABEL_101:
	if (v206[0] && (*(_BYTE*)(v206[0] + 133) & 1) != 0)
		v96 = *(float*)(v204[0] + 12);
	else
		v96 = 0.0;
	v97 = *v73;
	if ((unsigned int)((v73[1] - *v73) / 36) == 1)
	{
		v98 = *(_BYTE*)(v97 + 17);
		for (m = 0; (v98 & 1) == 0; ++m)
			v98 >>= 1;
		v100 = (__int64)a6;
		v101 = *a6;
		v102 = byte_140C62000[128 * (unsigned __int64)m + 116];
		if (*a6)
		{
			while (*(_BYTE*)(v101 + 448) != v102)
			{
				v101 = *(_QWORD*)(v101 + 440);
				if (!v101)
					goto LABEL_111;
			}
		}
		else
		{
		LABEL_111:
			v103 = sub_140881960(dword_140C10F20, 464i64, 0x10u);
			v101 = v103;
			if (v103)
			{
				*(_BYTE*)(v103 + 448) = v102;
				*(_QWORD*)(v103 + 432) = 0i64;
				sub_1407E4830((int*)v103, 0i64, 0x180ui64);
				*(_QWORD*)(v101 + 384) = 0i64;
				*(_QWORD*)(v101 + 392) = 0i64;
				*(_QWORD*)(v101 + 400) = 0i64;
				*(_QWORD*)(v101 + 408) = 0i64;
				*(_QWORD*)(v101 + 416) = 0i64;
				*(_QWORD*)(v101 + 424) = 0i64;
				if (*(_QWORD*)v100)
				{
					*(_QWORD*)(v101 + 440) = *(_QWORD*)v100;
					*(_QWORD*)v100 = v101;
				}
				else
				{
					*(_QWORD*)v100 = v101;
					*(_QWORD*)(v101 + 440) = 0i64;
				}
				++* (_DWORD*)(v100 + 8);
			}
		}
		if (v101)
		{
			v104 = v193;
			if (v193)
			{
				v105 = v194;
				v106 = v101;
				do
				{
					v107 = *(_OWORD*)v105;
					v106 += 64i64;
					v105 += 8;
					*(_OWORD*)(v106 - 64) = v107;
					*(_OWORD*)(v106 - 48) = *((_OWORD*)v105 - 1);
					--v104;
				} while (v104);
			}
			v108 = a5;
			*(float*)(v101 + 384) = a5 * *(float*)(v97 + 20);
			if (a1)
			{
				*(float*)(v101 + 416) = v108 * *(float*)(v97 + 24);
				*(float*)(v101 + 400) = v108 * *(float*)(v97 + 28);
			}
			else
			{
				*(_DWORD*)(v101 + 416) = 0;
				*(_DWORD*)(v101 + 400) = 0;
			}
			v109 = *(float*)(a2 + 212);
			if (v109 <= *v197)
				v109 = *v197;
			if (v96 > 0.0)
			{
				v110 = sub_1408295C0(0.0, 0.0, 1.0, v96, *(float*)(v97 + 32));
				if (v109 <= v110)
					v109 = v110;
			}
			if (v202 == 1)
			{
				v111 = qword_140C61B90;
				if (*(_BYTE*)(qword_140C61B90 + 3))
				{
					v112 = sub_140835CA0((_DWORD*)(qword_140C61B90 + 56), *v199 * 100.0, 0, &v212);
					if (v109 <= v112)
						v109 = v112;
				}
				if (*(_BYTE*)(v111 + 1))
					*(float*)(v101 + 436) = sub_140835CA0((_DWORD*)(v111 + 24), *v200 * 100.0, 0, &v212);
			}
			*(float*)(v101 + 432) = v109;
		}
	}
	else
	{
		v113 = (__int64)a6;
		v114 = v193;
		for (n = *a6; n; n = *(_QWORD*)(n + 440))
		{
			v116 = 0;
			do
			{
				v117 = v116++;
				v117 <<= 6;
				*(_OWORD*)(v117 + n) = 0i64;
				*(_OWORD*)(v117 + n + 16) = 0i64;
			} while (v116 < v114);
			*(_DWORD*)(n + 384) = 0;
			*(_DWORD*)(n + 400) = 0;
			*(_DWORD*)(n + 416) = 0;
		}
		v118 = 0.0;
		v203[0] = 0x3F8000003F800000i64;
		v203[1] = 0x3F8000003F800000i64;
		v204[0] = 0x3F8000003F800000i64;
		v119 = 0.0;
		v120 = 0.0;
		v204[1] = 0x3F8000003F800000i64;
		v207[0] = 0x3F8000003F800000i64;
		v207[1] = 0x3F8000003F800000i64;
		v206[0] = 0x42C8000042C80000i64;
		v206[1] = 0x42C8000042C80000i64;
		if (sub_14085F220(a2))
		{
			v121 = *v73;
			v122 = (__m128)LODWORD(a5);
			v123 = (__int64)v197;
			v124 = 0i64;
			while (1)
			{
				v125 = *(_BYTE*)(v121 + 17);
				for (ii = 0; (v125 & 1) == 0; ++ii)
					v125 >>= 1;
				v127 = 100.0;
				v128 = 1.0;
				v129 = 1.0;
				v130 = 1.0;
				sub_1407E4830(v208, 0i64, 0xC0ui64);
				v131 = (__int64)v200;
				v132 = a3[1];
				v133 = (__int64)v199;
				v134 = 6 * v124;
				do
				{
					v135 = 0;
					if (v114)
					{
						v136 = v122;
						v137 = v208;
						v136.m128_f32[0] = v122.m128_f32[0] * *(float*)(v121 + 20);
						v138 = _mm_shuffle_ps(v136, v136, 0);
						do
						{
							v139 = v134 + v135++;
							v137 += 8;
							v139 *= 32i64;
							v140 = _mm_add_ps(_mm_mul_ps(*(__m128*)(v139 + v70 + 16), v138), *((__m128*)v137 - 1));
							*((__m128*)v137 - 2) = _mm_add_ps(_mm_mul_ps(*(__m128*)(v139 + v70), v138), *((__m128*)v137 - 2));
							*((__m128*)v137 - 1) = v140;
						} while (v135 < v114);
					}
					if (*(float*)(v121 + 20) > v118)
						v118 = *(float*)(v121 + 20);
					if (a1)
					{
						if (*(float*)(v121 + 28) > v119)
							v119 = *(float*)(v121 + 28);
						if (*(float*)(v121 + 24) > v120)
							v120 = *(float*)(v121 + 24);
					}
					if (v127 >= *(float*)(v123 + 4 * v124))
						v127 = *(float*)(v123 + 4 * v124);
					if (v128 >= *(float*)(v133 + 4 * v124))
						v128 = *(float*)(v133 + 4 * v124);
					if (v129 >= *(float*)(v131 + 4 * v124))
						v129 = *(float*)(v131 + 4 * v124);
					if (v130 >= *(float*)(v121 + 32))
						v130 = *(float*)(v121 + 32);
					v121 += 36i64;
					v124 = (unsigned int)(v124 + 1);
					v134 += 6;
					if (v121 == v132)
						break;
					v141 = *(_BYTE*)(v121 + 17);
					for (jj = 0; (v141 & 1) == 0; ++jj)
						v141 >>= 1;
				} while (jj == ii);
				v113 = (__int64)a6;
				v143 = a3;
				v144 = ii;
				v145 = *a6;
				v146 = byte_140C62000[128 * v144 + 116];
				if (*a6)
				{
					while (*(_BYTE*)(v145 + 448) != v146)
					{
						v145 = *(_QWORD*)(v145 + 440);
						if (!v145)
							goto LABEL_169;
					}
				}
				else
				{
				LABEL_169:
					v145 = sub_140881960(dword_140C10F20, 464i64, 0x10u);
					if (v145)
					{
						*(_BYTE*)(v145 + 448) = v146;
						*(_QWORD*)(v145 + 432) = 0i64;
						sub_1407E4830((int*)v145, 0i64, 0x180ui64);
						*(_QWORD*)(v145 + 384) = 0i64;
						*(_QWORD*)(v145 + 392) = 0i64;
						*(_QWORD*)(v145 + 400) = 0i64;
						*(_QWORD*)(v145 + 408) = 0i64;
						*(_QWORD*)(v145 + 416) = 0i64;
						*(_QWORD*)(v145 + 424) = 0i64;
						if (*(_QWORD*)v113)
						{
							*(_QWORD*)(v145 + 440) = *(_QWORD*)v113;
							*(_QWORD*)v113 = v145;
						}
						else
						{
							*(_QWORD*)v113 = v145;
							*(_QWORD*)(v145 + 440) = 0i64;
						}
						++* (_DWORD*)(v113 + 8);
					}
					v143 = a3;
				}
				if (!v145)
					break;
				if (v114)
				{
					v147 = v208;
					v148 = v114;
					do
					{
						v149 = *(__m128*)v145;
						v150 = *(__m128*)(v145 + 16);
						v145 += 64i64;
						v147 += 8;
						v151 = _mm_max_ps(v150, *((__m128*)v147 - 1));
						*(__m128*)(v145 - 64) = _mm_max_ps(v149, *((__m128*)v147 - 2));
						*(__m128*)(v145 - 48) = v151;
						--v148;
					} while (v148);
				}
				v152 = *((float*)v206 + v146);
				if (v152 >= v127)
					v152 = v127;
				*((float*)v206 + v146) = v152;
				v153 = *((float*)v207 + v146);
				if (v153 >= v128)
					v153 = v128;
				*((float*)v207 + v146) = v153;
				v154 = *((float*)v204 + v146);
				if (v154 >= v129)
					v154 = v129;
				*((float*)v204 + v146) = v154;
				v155 = *((float*)v203 + v146);
				if (v155 >= v130)
					v155 = v130;
				*((float*)v203 + v146) = v155;
				if (v121 == v143[1])
				{
					v173 = a1;
					goto LABEL_224;
				}
				v70 = (__int64)v194;
			}
		}
		else
		{
			v156 = a3;
			v157 = (__m128)LODWORD(a5);
			v158 = 0i64;
			v159 = *a3;
			v160 = 0;
			while (1)
			{
				v161 = *(_BYTE*)(v159 + 17);
				for (kk = 0; (v161 & 1) == 0; ++kk)
					v161 >>= 1;
				v163 = *(_QWORD*)v113;
				v164 = byte_140C62000[128 * (unsigned __int64)kk + 116];
				if (*(_QWORD*)v113)
				{
					while (*(_BYTE*)(v163 + 448) != v164)
					{
						v163 = *(_QWORD*)(v163 + 440);
						if (!v163)
							goto LABEL_195;
					}
				}
				else
				{
				LABEL_195:
					v163 = sub_140881960(dword_140C10F20, 464i64, 0x10u);
					if (v163)
					{
						*(_BYTE*)(v163 + 448) = v164;
						*(_QWORD*)(v163 + 432) = 0i64;
						sub_1407E4830((int*)v163, 0i64, 0x180ui64);
						*(_QWORD*)(v163 + 384) = 0i64;
						*(_QWORD*)(v163 + 392) = 0i64;
						*(_QWORD*)(v163 + 400) = 0i64;
						*(_QWORD*)(v163 + 408) = 0i64;
						*(_QWORD*)(v163 + 416) = 0i64;
						*(_QWORD*)(v163 + 424) = 0i64;
						if (*(_QWORD*)v113)
						{
							*(_QWORD*)(v163 + 440) = *(_QWORD*)v113;
							*(_QWORD*)v113 = v163;
						}
						else
						{
							*(_QWORD*)v113 = v163;
							*(_QWORD*)(v163 + 440) = 0i64;
						}
						++* (_DWORD*)(v113 + 8);
					}
					v156 = a3;
				}
				if (!v163)
					break;
				v165 = 0;
				if (v114)
				{
					v166 = (__int64)v194;
					do
					{
						v167 = *(__m128*)v163;
						v168 = v157;
						v169 = 32i64 * (v160 + v165++);
						v163 += 64i64;
						v168.m128_f32[0] = v157.m128_f32[0] * *(float*)(v159 + 20);
						v170 = _mm_shuffle_ps(v168, v168, 0);
						v171 = _mm_max_ps(v167, _mm_mul_ps(*(__m128*)(v169 + v166), v170));
						v172 = _mm_max_ps(*(__m128*)(v163 - 48), _mm_mul_ps(*(__m128*)(v169 + v166 + 16), v170));
						*(__m128*)(v163 - 64) = v171;
						*(__m128*)(v163 - 48) = v172;
					} while (v165 < v114);
					v113 = (__int64)a6;
				}
				if (*(float*)(v159 + 20) > v118)
					v118 = *(float*)(v159 + 20);
				v173 = a1;
				if (a1)
				{
					if (*(float*)(v159 + 28) > v119)
						v119 = *(float*)(v159 + 28);
					if (*(float*)(v159 + 24) > v120)
						v120 = *(float*)(v159 + 24);
				}
				v174 = *((float*)v206 + v164);
				if (v174 >= v197[v158])
					v174 = v197[v158];
				v175 = (__int64)v199;
				*((float*)v206 + v164) = v174;
				v176 = *((float*)v207 + v164);
				if (v176 >= *(float*)(v175 + 4 * v158))
					v176 = *(float*)(v175 + 4 * v158);
				v177 = (__int64)v200;
				*((float*)v207 + v164) = v176;
				v178 = *((float*)v204 + v164);
				if (v178 >= *(float*)(v177 + 4 * v158))
					v178 = *(float*)(v177 + 4 * v158);
				v179 = *(float*)(v159 + 32);
				*((float*)v204 + v164) = v178;
				v180 = *((float*)v203 + v164);
				if (v180 >= v179)
					v180 = v179;
				v159 += 36i64;
				v158 = (unsigned int)(v158 + 1);
				v160 += 6;
				*((float*)v203 + v164) = v180;
				if (v159 == v156[1])
				{
				LABEL_224:
					v181 = *(_DWORD*)(v113 + 8);
					v182 = v202;
					v183 = 0;
					do
					{
						v184 = *(_QWORD*)v113;
						for (mm = v183; mm; --mm)
							v184 = *(_QWORD*)(v184 + 440);
						*(_DWORD*)(v184 + 384) = 1065353216;
						if (v173 && v118 > 0.0)
						{
							*(float*)(v184 + 400) = (float)(1.0 / v118) * v119;
							*(float*)(v184 + 416) = (float)(1.0 / v118) * v120;
						}
						else
						{
							*(_DWORD*)(v184 + 416) = 0;
							*(_DWORD*)(v184 + 400) = 0;
						}
						v186 = *(unsigned __int8*)(v184 + 448);
						v187 = *(float*)(a2 + 212);
						if (v187 <= *((float*)v206 + v186))
							v187 = *((float*)v206 + v186);
						if (v96 > 0.0)
						{
							v188 = sub_1408295C0(0.0, 0.0, 1.0, v96, *((float*)v203 + v186));
							if (v187 <= v188)
								v187 = v188;
						}
						if (v182 == 1)
						{
							v189 = qword_140C61B90;
							if (*(_BYTE*)(qword_140C61B90 + 3))
							{
								v190 = sub_140835CA0((_DWORD*)(qword_140C61B90 + 56), *((float*)v207 + v186) * 100.0, 0, &v212);
								if (v187 <= v190)
									v187 = v190;
							}
							if (*(_BYTE*)(v189 + 1))
								*(float*)(v184 + 436) = sub_140835CA0((_DWORD*)(v189 + 24), *((float*)v204 + v186) * 100.0, 0, &v212);
						}
						v173 = a1;
						++v183;
						*(float*)(v184 + 432) = v187;
					} while (v183 < v181);
					return;
				}
			}
		}
	}
}
// 140849BEF: conditional instruction was optimized away because ecx.4!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F80: using guessed type int dword_140C10F80;
// 140C61B90: using guessed type __int64 qword_140C61B90;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;
// 140C61FF0: using guessed type int dword_140C61FF0;
// 140C62000: using guessed type _BYTE byte_140C62000[80];
// 140849810: using guessed type int var_1A0[48];

