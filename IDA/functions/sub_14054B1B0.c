#include "../winhttp.h"

//----- (000000014054B1B0) ----------------------------------------------------
__int64 __fastcall sub_14054B1B0(__int64 a1, _QWORD* a2)
{
	bool v2; // zf
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // rsi
	__int64 v8; // rax
	_DWORD* v9; // rcx
	int v10; // ecx
	int v11; // r15d
	int v12; // eax
	int v13; // ecx
	int v14; // r8d
	_DWORD* v15; // rdx
	int v16; // eax
	__m128* v17; // rax
	__m128* v18; // r14
	__int64 v19; // r8
	_QWORD* v20; // rcx
	int v21; // r8d
	int v22; // r10d
	int v23; // edx
	int v24; // r11d
	_DWORD* v25; // r9
	int v26; // eax
	int v27; // ecx
	int v28; // edx
	_DWORD* v29; // rax
	int v30; // ebx
	int v31; // ebx
	int v32; // r8d
	__int64 v33; // r9
	__m128 v34; // xmm14
	float v35; // xmm15_4
	float v36; // xmm8_4
	float v37; // xmm10_4
	float v38; // xmm7_4
	float v39; // xmm6_4
	int v40; // edx
	__m128* v41; // rax
	__m128 v42; // xmm1
	unsigned int v43; // r13d
	int v44; // ecx
	int v45; // eax
	unsigned int v46; // edx
	__int64 v47; // rcx
	int v48; // esi
	__int64 v49; // rcx
	__int64 v50; // rcx
	int v51; // r10d
	__int64 v52; // rax
	float v53; // xmm0_4
	BOOL v54; // eax
	__int64 v55; // r9
	__int64 v56; // r11
	BOOL v57; // eax
	__int64 v58; // r9
	__int64 v59; // r11
	int v60; // r9d
	int v61; // eax
	__int64 v62; // rcx
	float v63; // xmm8_4
	__int64 v64; // rcx
	double v65; // xmm0_8
	float v66; // xmm2_4
	__int64 v67; // rax
	__m128i v68; // xmm0
	float v69; // xmm2_4
	int v70; // xmm0_4
	int v71; // ecx
	__int64 v72; // rax
	int v73; // r10d
	int v74; // edx
	__int64 v75; // rax
	int v76; // ecx
	float v77; // xmm1_4
	float v78; // ecx
	__int64 v79; // rcx
	int v80; // r8d
	int v81; // edx
	int v82; // eax
	float v83; // xmm9_4
	int v84; // r9d
	unsigned int v85; // ecx
	unsigned int v86; // edx
	int v87; // ecx
	int v88; // ecx
	__int128 v89; // xmm3
	float v90; // xmm1_4
	__int128 v91; // xmm0
	float v92; // xmm10_4
	__int64 v93; // rcx
	float v94; // xmm11_4
	double v95; // xmm0_8
	int v96; // ebx
	float v97; // xmm0_4
	int v98; // xmm9_4
	float v99; // xmm7_4
	float v100; // xmm2_4
	int v101; // ecx
	int v102; // edx
	__int64 v103; // rax
	int v104; // xmm0_4
	__int64 v105; // rax
	float v106; // xmm0_4
	float v107; // xmm1_4
	int v108; // xmm1_4
	int v109; // xmm0_4
	float v110; // xmm8_4
	float v111; // xmm10_4
	float v112; // xmm4_4
	float v113; // xmm7_4
	float v114; // xmm7_4
	float v115; // xmm0_4
	__m128 v116; // xmm9
	__m128 v117; // xmm8
	__int128 v118; // xmm6
	__m128* v119; // rbx
	__m128* v120; // r13
	__m128* v121; // r15
	__int64 v122; // r14
	__int64 v123; // rcx
	__int64 v124; // rax
	__int64 v125; // rsi
	int v126; // eax
	unsigned int v127; // ebx
	unsigned int* v128; // rcx
	__int128* v129; // rax
	__m128 v130; // xmm0
	__m128 v131; // xmm4
	__m128 v132; // xmm11
	double v133; // xmm6_8
	float v134; // xmm7_4
	float v135; // xmm0_4
	__m128 v136; // xmm10
	__int128 v137; // xmm1
	double v138; // xmm6_8
	float v139; // xmm7_4
	float v140; // xmm0_4
	__m128 v141; // xmm2
	__m128 v142; // xmm2
	__m128i v143; // xmm1
	__m128 v144; // xmm1
	__m128 v145; // xmm3
	__m128 v146; // xmm3
	__m128 v147; // xmm0
	double v148; // xmm6_8
	float v149; // xmm7_4
	__int128 v150; // xmm0
	double v151; // xmm6_8
	__m128 v152; // xmm10
	float v153; // xmm7_4
	__m128* v154; // rcx
	__m128 v155; // xmm3
	__m128i v156; // xmm1
	__m128 v157; // xmm2
	__m128 v158; // xmm0
	int v159; // eax
	float v160; // xmm0_4
	__int64 v161; // rax
	__int64 v162; // rax
	unsigned __int64 v163; // rcx
	__m128 v164; // xmm5
	__m128 v165; // xmm4
	__m128 v166; // xmm3
	float v167; // xmm0_4
	__m128 v168; // xmm2
	int v169; // xmm0_4
	__int64 v170; // rax
	__int64 v171; // rax
	__int64 v172; // rax
	__int64 v173; // rcx
	__int64 v174; // rax
	__m128 v175; // xmm0
	__int64 v176; // rcx
	int v177; // [rsp+20h] [rbp-E0h]
	float v178; // [rsp+30h] [rbp-D0h] BYREF
	int v179; // [rsp+38h] [rbp-C8h]
	__int64 v180; // [rsp+40h] [rbp-C0h]
	float v181; // [rsp+48h] [rbp-B8h]
	__int64 v182; // [rsp+50h] [rbp-B0h]
	__m128 v183; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v184[2]; // [rsp+70h] [rbp-90h] BYREF
	__m128 v185; // [rsp+90h] [rbp-70h]
	__int128 v186; // [rsp+A0h] [rbp-60h]
	__int64 v187; // [rsp+B0h] [rbp-50h]
	__m128 v188; // [rsp+C0h] [rbp-40h]
	__m128* v189; // [rsp+D0h] [rbp-30h]
	_QWORD* v190; // [rsp+D8h] [rbp-28h]
	__int128 v191; // [rsp+E0h] [rbp-20h] BYREF
	__int128 v192; // [rsp+F0h] [rbp-10h]
	__int128 v193; // [rsp+100h] [rbp+0h]
	__m128 v194; // [rsp+110h] [rbp+10h]
	__m128 v195; // [rsp+120h] [rbp+20h] BYREF
	int* v196; // [rsp+130h] [rbp+30h]
	__int128* v197; // [rsp+138h] [rbp+38h]
	__m128* v198[2]; // [rsp+140h] [rbp+40h] BYREF
	__m128 v199; // [rsp+150h] [rbp+50h]
	__m128* v200[2]; // [rsp+160h] [rbp+60h] BYREF
	int v201[4]; // [rsp+170h] [rbp+70h] BYREF
	__int128 v202; // [rsp+180h] [rbp+80h]
	float v203; // [rsp+190h] [rbp+90h]
	int v204; // [rsp+194h] [rbp+94h]
	float v205; // [rsp+198h] [rbp+98h]
	int v206; // [rsp+19Ch] [rbp+9Ch]
	__int128 v207; // [rsp+1A0h] [rbp+A0h]
	__m128 v208; // [rsp+1B0h] [rbp+B0h] BYREF
	__int128 v209; // [rsp+1C0h] [rbp+C0h]
	__int128 v210; // [rsp+1D0h] [rbp+D0h] BYREF
	__int128 v211; // [rsp+1E0h] [rbp+E0h]
	int v212; // [rsp+1F0h] [rbp+F0h]
	int v213[4]; // [rsp+200h] [rbp+100h] BYREF
	__int128 v214; // [rsp+210h] [rbp+110h]
	float v215; // [rsp+220h] [rbp+120h]
	int v216; // [rsp+224h] [rbp+124h]
	int v217; // [rsp+228h] [rbp+128h]
	int v218; // [rsp+22Ch] [rbp+12Ch]
	__int128 v219; // [rsp+230h] [rbp+130h]
	__m128* v220[10]; // [rsp+240h] [rbp+140h] BYREF

	v2 = *(_QWORD*)(a1 + 64) == 0i64;
	v190 = a2;
	if (v2)
		return 2147500037i64;
	v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 116));
	v6 = *(_DWORD*)(a1 + 32);
	v7 = v5;
	v180 = v5;
	v8 = sub_1403ACD90(qword_140C65B70, v6, v5);
	v9 = *(_DWORD**)(a1 + 48);
	*(_QWORD*)(a1 + 280) = v8;
	if (v9[1] >= 4u || v9[9] > v9[10])
		return 2147500037i64;
	v10 = *(_DWORD*)(a1 + 88);
	if (v10 && dword_140C636A8 - v10 > 0)
		return 1i64;
	v11 = sub_14054CF70(a1);
	if (!(unsigned int)sub_14054ABC0(a1, v11))
		return 1i64;
	v12 = *(_DWORD*)(a1 + 136);
	if (v12 == 1)
	{
		v11 = 2;
	}
	else if (v12 == 2)
	{
		v11 = 3;
	}
	if (!*(_DWORD*)(a1 + 36))
	{
		v13 = dword_140C636A8;
		v14 = *(_DWORD*)(a1 + 76);
		v15 = *(_DWORD**)(a1 + 48);
		if ((unsigned int)(dword_140C636A8 - v14) >= v15[11])
		{
			v16 = 0;
			*(_DWORD*)(a1 + 36) = 1;
			if (!*(_DWORD*)(a1 + 128) && (v15[17] & 0x100) == 0 && v15[10])
				v16 = v13 - v14 - v15[11];
			*(_DWORD*)(a1 + 76) = v13 - v16;
		}
	}
	v17 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 120));
	v18 = v17;
	v189 = v17;
	if (*(_DWORD*)(a1 + 132) || v17)
		goto LABEL_32;
	v19 = *(_QWORD*)(a1 + 256);
	if (v19)
	{
		v178 = **(float**)(a1 + 48);
		sub_1400EE810(v19 + 576, &v178);
	}
	if (*(_QWORD*)a1)
		**(_QWORD**)a1 = *(_QWORD*)(a1 + 8);
	v20 = *(_QWORD**)(a1 + 8);
	if (v20)
		*v20 = *(_QWORD*)a1;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	if (*(_DWORD*)(a1 + 36) == 2)
	{
	LABEL_32:
		v21 = dword_140C636A8;
	}
	else
	{
		v21 = dword_140C636A8;
		*(_DWORD*)(a1 + 36) = 2;
		*(_DWORD*)(a1 + 76) = v21;
	}
	v22 = *(_DWORD*)(a1 + 36);
	v23 = 0;
	if (v22 == 2)
	{
		v23 = 3;
		if ((unsigned int)(v21 - *(_DWORD*)(a1 + 76)) < *(_DWORD*)(*(_QWORD*)(a1 + 48) + 48i64))
			v23 = 2;
	}
	v24 = *(_DWORD*)(a1 + 128);
	if (v24)
		goto LABEL_279;
	v25 = *(_DWORD**)(a1 + 48);
	if ((v25[17] & 0x100) != 0)
		goto LABEL_279;
	v26 = v25[10];
	if (!v26)
		goto LABEL_279;
	v27 = v26 + *(_DWORD*)(a1 + 80) + *(_DWORD*)(a1 + 308) - v25[9];
	if (v21 - v27 >= 0)
		v23 = 3;
	if (v22 == 2 || v21 + v25[12] - v27 < 0)
	{
	LABEL_279:
		if (*(_DWORD*)(a1 + 40))
			v23 = 1;
	}
	else
	{
		v23 = 2;
	}
	v28 = v23 - 2;
	if (v28)
	{
		if (v28 == 1)
			return 1i64;
	}
	else if (v22 != 2)
	{
		*(_DWORD*)(a1 + 36) = 2;
		*(_DWORD*)(a1 + 76) = v21;
	}
	if (v24 || (v29 = *(_DWORD**)(a1 + 48), (v29[17] & 0x100) != 0) || (v30 = v29[10]) == 0)
		v31 = 0;
	else
		v31 = v30 - v29[9];
	if (*(_DWORD*)(a1 + 136) == 2)
		v179 = 0;
	else
		v179 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 4i64);
	if ((dword_140DC3348 & 1) == 0)
	{
		dword_140DC334C = 1061997773;
		dword_140DC3348 |= 1u;
	}
	v182 = 0i64;
	if (sub_14054A430(a1))
		v33 = qword_140C65B30[0];
	v34 = 0i64;
	v181 = 0.0;
	v35 = 0.0;
	v36 = 0.0;
	v37 = 0.0;
	v187 = v33;
	v38 = (float)v31;
	v39 = 1.0;
	v183 = 0i64;
	if (!*(_DWORD*)(a1 + 92))
	{
		if (!v18)
			goto LABEL_70;
		v34 = v18[286];
		goto LABEL_69;
	}
	v40 = *(_DWORD*)(a1 + 124);
	v34 = *(__m128*)(a1 + 96);
	v183 = v34;
	if (v40)
	{
		v41 = (__m128*)sub_1403D90D0(qword_140C65898, v40);
		v32 = dword_140C636A8;
		if (v41)
		{
			v42 = *(__m128*)(a1 + 96);
			v34 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v42, v42, 85), v41[284]),
						_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v41[283])),
					_mm_mul_ps(_mm_shuffle_ps(v42, v42, 170), v41[285])),
				v41[286]);
		LABEL_69:
			v183 = v34;
		}
	}
LABEL_70:
	v43 = 10;
	v44 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64);
	if ((v44 & 0x1000000) != 0)
		goto LABEL_151;
	if (*(_DWORD*)(a1 + 288) != 3)
	{
		if (*(_DWORD*)(a1 + 296))
		{
			v38 = 0.0;
			goto LABEL_151;
		}
		if ((v44 & 0x800000) != 0)
		{
			v61 = sub_14054B020(a1, &v183);
			v32 = dword_140C636A8;
			v34 = v183;
			v60 = v61;
		}
		else
		{
			v60 = 0;
		}
		*(_DWORD*)(a1 + 308) = v60;
		v31 += v60;
		if ((float)v31 > 0.0)
			v39 = (float)(v32 - *(_DWORD*)(a1 + 80)) / (float)v31;
		v62 = *(_QWORD*)(a1 + 280);
		if (v62)
		{
			if (*(_DWORD*)(*(_QWORD*)(v62 + 112) + 24i64) == 2)
			{
				v63 = (float)(int)sub_1403C0210(qword_140C65898, *(_DWORD*)(a1 + 32));
				v65 = sub_1403C04C0(v64, *(_DWORD*)(a1 + 32));
				v66 = 0.0;
				v38 = (float)*(int*)(a1 + 308) + v63;
				if (v38 > 0.0)
					v66 = (float)(v63 - *(float*)&v65) / v38;
				v32 = dword_140C636A8;
				v39 = fminf(v39, v66);
				v31 = (int)v38;
			LABEL_132:
				if (!*(_DWORD*)(a1 + 300))
				{
					LODWORD(v180) = 1065353216;
					v178 = v39;
					v78 = v39;
					if (v39 < 0.0)
						LODWORD(v78) = 0x80000000 - LODWORD(v39);
					if ((int)abs32(LODWORD(v78) - 1065353216) <= 84 || v39 > 1.0)
						*(_DWORD*)(a1 + 300) = v32;
				}
				if (sub_14054A430(a1))
					v38 = 0.0;
				v81 = *(_DWORD*)(a1 + 300);
				if (v81)
				{
					v82 = 10;
					if (v81 - *(_DWORD*)(a1 + 80) > 10)
						v82 = v81 - *(_DWORD*)(a1 + 80);
					v83 = fminf(0.2, (float)(v80 - v81) / (float)v82);
					v39 = v83 + 1.0;
					if (sub_14054A430(a1))
						v35 = -v83;
					else
						v35 = v83;
					v36 = 1.0 - (float)(v83 * 5.0);
				}
				else if (sub_14054A430(v79))
				{
					v36 = 1.0;
					v35 = 1.0 - v39;
				}
				else
				{
					v35 = v39;
					v36 = 1.0;
				}
				goto LABEL_151;
			}
			v67 = *(_QWORD*)(v62 + 112);
			if (*(_DWORD*)(v67 + 24) == 10 && v38 <= 0.0)
			{
				v68 = _mm_cvtsi32_si128(*(_DWORD*)(v67 + 32));
				v178 = -1.0;
				v69 = 1.0;
				v70 = _mm_cvtepi32_ps(v68).m128_u32[0];
				LODWORD(v180) = v70;
				v71 = v70;
				if (v70 >= 0)
					v71 = 0x80000000 - v70;
				if ((int)abs32(v71 + 1082130432) > 84)
				{
					v38 = (float)v60 + *(float*)&v70;
					if (v38 > 0.0)
						v69 = (float)(v32 - *(_DWORD*)(a1 + 80)) / v38;
					v31 = (int)v38;
					v39 = fminf(v39, v69);
				}
				else
				{
					v38 = 0.0;
					v31 = -1;
					v39 = fminf(v39, 0.0);
				}
				goto LABEL_132;
			}
		}
		v72 = *(_QWORD*)(a1 + 256);
		if (v72 && v38 <= 0.0)
		{
			v73 = *(_DWORD*)(v72 + 80);
			v74 = v32 - *(_DWORD*)(v72 + 404);
			v75 = *(_QWORD*)(v62 + 80);
			if (v75)
				v73 = *(_DWORD*)(v75 + 4);
			v76 = v60 + v73;
			v77 = 1.0;
			if (v60 + v73)
				v77 = (float)v74 / (float)v76;
			v39 = v77;
			if (v77 == 0.0)
				v38 = 0.0;
			else
				v38 = (float)v76;
			v31 = v60 + v73;
		}
		goto LABEL_132;
	}
	v45 = sub_1403BFB00(qword_140C65898, *(_DWORD*)(a1 + 32));
	v48 = v45;
	if (v45 >= 0)
	{
		if (v45 > 2)
			v48 = 2;
	}
	else
	{
		v48 = 0;
	}
	LODWORD(v39) = sub_1403C0340(v47, v46);
	v38 = (float)(int)sub_1403C0210(qword_140C65898, *(_DWORD*)(a1 + 32));
	v31 = (int)v38;
	sub_140564FB0(v49, *(_DWORD*)(a1 + 32));
	if (sub_14054A430(a1))
		v52 = qword_140C65B30[v48];
	else
		v52 = qword_140C65B18[v48];
	v32 = dword_140C636A8;
	v187 = v52;
	if (v48 == v51)
	{
		if (!*(_DWORD*)(a1 + 300))
			*(_DWORD*)(a1 + 300) = dword_140C636A8;
		v53 = (float)(v32 - *(_DWORD*)(a1 + 300)) / v38;
		v39 = v53 + 1.0;
		if (v53 <= 0.2)
		{
			v35 = (float)(v32 - *(_DWORD*)(a1 + 300)) / v38;
			v36 = 1.0 - (float)(v53 * 5.0);
		}
	}
	if (v48 || v39 >= 0.2)
	{
		if (v39 <= 1.0)
		{
			v36 = 1.0;
			v35 = (float)(v39 * 0.80000001) + 0.2;
		}
	}
	else
	{
		v35 = v39;
		v36 = v39 * 5.0;
	}
	if (v48 < v51 - 1 && v39 >= *(float*)&dword_140DC334C && v39 <= 1.0)
	{
		v181 = v39 - *(float*)&dword_140DC334C;
		v37 = (float)(v39 - *(float*)&dword_140DC334C) * 5.0;
		if ((unsigned __int64)v48 < 2)
		{
			v54 = sub_14054A430(v50);
			v7 = v180;
			if (v54)
				v182 = *(_QWORD*)(v56 + 8 * v55 + 12999480);
			else
				v182 = *(_QWORD*)(v56 + 8 * v55 + 12999456);
			goto LABEL_151;
		}
	LABEL_150:
		v7 = v180;
		goto LABEL_151;
	}
	if (v48 <= 0 || v39 >= 0.2)
		goto LABEL_150;
	v181 = v39 + 1.0;
	v37 = 1.0 - (float)(v39 * 5.0);
	v57 = sub_14054A430(v50);
	v7 = v180;
	if (v57)
		v182 = *(_QWORD*)(v59 + 8 * v58 + 12999464);
	else
		v182 = *(_QWORD*)(v59 + 8 * v58 + 12999440);
LABEL_151:
	if (v11 != 2 && (!v7 || !*(_DWORD*)(v7 + 3408)))
		v43 = 300;
	v84 = *(_DWORD*)(a1 + 300);
	if (v84)
		goto LABEL_160;
	*(float*)&v180 = v38;
	v85 = 0;
	v178 = 0.0;
	if (v38 < 0.0)
		v85 = 0x80000000;
	if ((int)abs32(v85 - LODWORD(v38)) <= 84)
		LABEL_160:
	v86 = -1;
	else
		v86 = (int)(float)((float)(1.0 - v39) * v38);
	v87 = *(_DWORD*)(a1 + 40);
	if (!v87 && v84 == v32)
		v86 = 0;
	if (!v87)
	{
		if ((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64) & 0x2000000) != 0 || v86 >= 0x64 && !*(_DWORD*)(a1 + 44))
			goto LABEL_179;
		*(_QWORD*)(a1 + 40) = 1i64;
	LABEL_178:
		*(_DWORD*)(a1 + 84) = v32;
		goto LABEL_179;
	}
	v88 = v87 - 1;
	if (!v88)
	{
		if ((unsigned int)(v32 - *(_DWORD*)(a1 + 84)) < 0x64)
			goto LABEL_179;
		*(_DWORD*)(a1 + 40) = 2;
		goto LABEL_178;
	}
	if (v88 == 1 && v32 - *(_DWORD*)(a1 + 84) >= v43)
	{
		*(_DWORD*)(a1 + 40) = 0;
		*(_DWORD*)(a1 + 84) = v32;
		if (v39 > 1.0 && *(_DWORD*)(a1 + 288) != 3 && *(_DWORD*)(a1 + 36) != 2)
		{
			*(_DWORD*)(a1 + 76) = v32;
			*(_DWORD*)(a1 + 36) = 2;
		}
	}
LABEL_179:
	v89 = 0i64;
	v183 = (__m128)0x3F800000u;
	v188 = 0i64;
	*(float*)&v89 = fmaxf(0.0, fminf(v36, 1.0));
	v90 = fminf(v37, 1.0);
	v91 = 0i64;
	v211 = v89;
	v92 = 0.0;
	*(float*)&v91 = fmaxf(0.0, v90);
	v209 = v91;
	sub_14054DBC0(a1);
	v94 = 0.0 * sub_14054CEB0(v93);
	if (sub_14054A430(a1) && !*(_DWORD*)(a1 + 296))
	{
		v95 = sub_1408FDC10(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fmaxf(0.0000099999997, v35 / fminf(0.5, 2000.0 / (float)v31)))));
		v94 = v94 * fmaxf(0.1, fminf(*(float*)&v95 + 1.0, v183.m128_f32[0]));
	}
	v96 = dword_140DC3348;
	if ((dword_140DC3348 & 2) != 0)
	{
		v97 = *(float*)&dword_140DC3350;
	}
	else
	{
		v97 = 64.0;
		v96 = dword_140DC3348 | 2;
		dword_140DC3350 = 1115684864;
		dword_140DC3348 |= 2u;
	}
	if ((v96 & 4) != 0)
	{
		v98 = dword_140DC3354;
	}
	else
	{
		v96 |= 4u;
		dword_140DC3348 = v96;
		*(float*)&v98 = 0.5 / v97;
		*(float*)&dword_140DC3354 = 0.5 / v97;
	}
	if ((v96 & 8) != 0)
	{
		v99 = *(float*)&dword_140DC3358;
	}
	else
	{
		v96 |= 8u;
		dword_140DC3348 = v96;
		v99 = 0.5 - *(float*)&v98;
		*(float*)&dword_140DC3358 = 0.5 - *(float*)&v98;
	}
	if ((v96 & 0x10) != 0)
	{
		v100 = *(float*)&dword_140DC335C;
	}
	else
	{
		v96 |= 0x10u;
		dword_140DC3348 = v96;
		v100 = v99 * 0.5;
		*(float*)&dword_140DC335C = v99 * 0.5;
	}
	v101 = dword_140C636A8;
	v102 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64);
	if ((v102 & 0x1000000) == 0 && (v102 & 0x2000000) == 0)
	{
		if (*(_DWORD*)(a1 + 40) == 1)
		{
			v92 = fmaxf(v188.m128_f32[0], fminf((float)(dword_140C636A8 - *(_DWORD*)(a1 + 84)) * 0.0099999998, 1.0)) * v100;
		}
		else if (*(_DWORD*)(a1 + 40) == 2)
		{
			LODWORD(v92) = sub_14054DCA0(
				(unsigned int)dword_140C636A8,
				dword_140C636A8 - *(_DWORD*)(a1 + 84),
				v100,
				0.0,
				v177,
				v43).m128_u32[0];
		}
	}
	if (*(_DWORD*)(a1 + 304) && !*(_DWORD*)(a1 + 296))
	{
		if ((v96 & 0x20) == 0)
		{
			dword_140DC3348 = v96 | 0x20;
			v103 = sub_140200220(0x418u);
			if (v103)
				v104 = *(_DWORD*)(v103 + 28);
			else
				v104 = 1036831949;
			v96 = dword_140DC3348;
			v98 = dword_140DC3354;
			v99 = *(float*)&dword_140DC3358;
			v101 = dword_140C636A8;
			dword_140DC3360 = v104;
		}
		if ((v96 & 0x40) != 0)
		{
			v106 = *(float*)&dword_140DC3364;
		}
		else
		{
			dword_140DC3348 = v96 | 0x40;
			v105 = sub_140200220(0x418u);
			if (v105)
				v106 = *(float*)(v105 + 24);
			else
				v106 = 1.0;
			v96 = dword_140DC3348;
			v98 = dword_140DC3354;
			v99 = *(float*)&dword_140DC3358;
			v101 = dword_140C636A8;
			dword_140DC3364 = LODWORD(v106);
		}
		if ((v96 & 0x80u) != 0)
		{
			v107 = *(float*)&dword_140DC3368;
		}
		else
		{
			v96 |= 0x80u;
			dword_140DC3348 = v96;
			v107 = 1.0 / v106;
			*(float*)&dword_140DC3368 = 1.0 / v106;
		}
		if ((v96 & 0x100) != 0)
		{
			v108 = dword_140DC336C;
		}
		else
		{
			*(float*)&v108 = v107 * 1000.0;
			v96 |= 0x100u;
			dword_140DC3348 = v96;
			dword_140DC336C = v108;
		}
		v92 = v92
			+ (float)(sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
				(float)((float)(v101 - *(_DWORD*)(a1 + 76))
					/ *(float*)&v108)
				* 6.2831855)))
				* *(float*)&dword_140DC3360);
	}
	if ((v96 & 0x200) == 0)
	{
		v96 |= 0x200u;
		dword_140DC3370 = v98;
		dword_140DC3348 = v96;
	}
	if ((v96 & 0x400) != 0)
	{
		v178 = *(float*)&dword_140DC3374;
	}
	else
	{
		v96 |= 0x400u;
		dword_140DC3348 = v96;
		v178 = 1.0 - *(float*)&v98;
		*(float*)&dword_140DC3374 = 1.0 - *(float*)&v98;
	}
	v183.m128_u64[0] = v179 + 4i64 * v11;
	*(float*)&v180 = (float)*((int*)&xmmword_140C7D6F0 + 2 * v183.m128_u64[0]) * 0.5;
	if ((v96 & 0x800) != 0)
	{
		v109 = dword_140DC3378;
	}
	else
	{
		dword_140DC3348 = v96 | 0x800;
		*(float*)&v109 = v99 - *(float*)&v98;
		*(float*)&dword_140DC3378 = v99 - *(float*)&v98;
	}
	v2 = *(_QWORD*)(a1 + 256) == 0i64;
	v110 = *(float*)&v98;
	v179 = v109;
	v111 = (float)(v92 * *(float*)&v109) + *(float*)&v98;
	v112 = fminf((float)(v94 * *(float*)&v109) + *(float*)&v98, v99);
	v113 = *(float*)&v98;
	v116 = (__m128)(unsigned int)dword_140DC3370;
	v114 = fmaxf(v113, v112);
	v115 = *(float*)&v180 + fmaxf(v110, fminf(v111, v114));
	v117 = (__m128)(unsigned int)dword_140DC3370;
	v116.m128_f32[0] = fmaxf(*(float*)&dword_140DC3370, fminf(*(float*)&v180 + v114, v178));
	v188 = v116;
	v117.m128_f32[0] = fmaxf(*(float*)&dword_140DC3370, fminf(v115, v178));
	v199 = v117;
	if (!v2 || *(_QWORD*)(a1 + 264) || (v2 = *(_QWORD*)(a1 + 272) == 0i64, v179 = 0, !v2))
		v179 = 1;
	v118 = 0i64;
	v119 = (__m128*)(a1 + 144);
	v120 = (__m128*)(a1 + 160);
	v121 = (__m128*)(a1 + 176);
	v122 = 0i64;
	*(_OWORD*)(a1 + 144) = 0i64;
	*(_OWORD*)(a1 + 160) = 0i64;
	*(_OWORD*)(a1 + 176) = 0i64;
	if (*(_QWORD*)(a1 + 64))
	{
		while (1)
		{
			v123 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v122);
			v124 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v123 + 40i64))(v123);
			v125 = v124;
			if (!*(_QWORD*)(qword_140C65898 + 120))
				break;
			v126 = sub_14054D170(a1, v122, &v178, (__int64)&v195, v124);
			v127 = v126;
			if (v126 < 0 || v126 == 1)
				goto LABEL_276;
			v128 = *(unsigned int**)(a1 + 48);
			if (v128 && (v128[17] & 0x4000) != 0)
			{
				v210 = v118;
				v129 = &v210;
			}
			else
			{
				v130 = (__m128)v128[15];
				v131 = (__m128)v128[13];
				v129 = (__int128*)&v208;
				v131.m128_f32[0] = v131.m128_f32[0] * -1.0;
				v130.m128_f32[0] = v130.m128_f32[0] * -1.0;
				v208 = _mm_unpacklo_ps(_mm_unpacklo_ps(v131, v130), _mm_unpacklo_ps((__m128)v128[14], (__m128)0i64));
			}
			v132 = (__m128) * v129;
			if (*(_DWORD*)(a1 + 92))
			{
				*(_QWORD*)&v133 = *(unsigned int*)(a1 + 112);
				v134 = sub_1408FE3D0(v133);
				v135 = sub_1408FC950(v133);
				v184[0].m128_i32[3] = 0;
				v185.m128_u64[0] = LODWORD(v134);
				v184[0].m128_u64[0] = LODWORD(v135);
				v185.m128_u64[1] = LODWORD(v135);
				v136 = v185;
				v184[0].m128_f32[2] = -v134;
				v137 = xmmword_140C78440;
				v116 = v184[0];
				*(__m128*)(v125 + 16) = v184[0];
				*(_OWORD*)(v125 + 32) = xmmword_140B7A4B0;
				*(__m128*)(v125 + 48) = v136;
				*(_OWORD*)(v125 + 64) = v137;
				if ((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64) & 0x4000) != 0)
				{
					v141 = v195;
				}
				else
				{
					*(_QWORD*)&v138 = LODWORD(v178);
					v139 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)LODWORD(v178)));
					v140 = sub_1408FC950(v138);
					v203 = v139;
					v201[1] = 0;
					v201[3] = 0;
					*(float*)v201 = v140;
					v205 = v140;
					*(float*)&v201[2] = -v139;
					v204 = 0;
					v206 = 0;
					v200[0] = (__m128*)(v125 + 16);
					v202 = xmmword_140B7A4B0;
					v207 = xmmword_140C78440;
					v200[1] = (__m128*)v201;
					sub_1401AFB10(v200, (__m128*)(v125 + 16));
					v184[0].m128_u64[0] = LODWORD(v140);
					v185.m128_u64[0] = LODWORD(v139);
					v185.m128_u64[1] = LODWORD(v140);
					v184[0].m128_i32[3] = 0;
					v184[0].m128_f32[2] = -v139;
					v186 = xmmword_140C78440;
					v141 = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v195, v195, 85), (__m128)xmmword_140B7A4B0),
							_mm_mul_ps(_mm_shuffle_ps(v195, v195, 0), v184[0])),
						_mm_mul_ps(_mm_shuffle_ps(v195, v195, 170), v185));
				}
				v142 = _mm_add_ps(v141, v132);
				v119 = (__m128*)(a1 + 144);
				v118 = 0i64;
				v143 = (__m128i)_mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v142, v142, 0), v116),
							_mm_mul_ps(_mm_shuffle_ps(v142, v142, 85), (__m128)xmmword_140B7A4B0)),
						_mm_mul_ps(_mm_shuffle_ps(v142, v142, 170), v136)),
					v34);
				*(_DWORD*)(v125 + 64) = _mm_cvtsi128_si32(v143);
				*(_DWORD*)(v125 + 68) = _mm_cvtsi128_si32(_mm_srli_si128(v143, 4));
				*(_DWORD*)(v125 + 72) = _mm_cvtsi128_si32(_mm_srli_si128(v143, 8));
				v144 = _mm_mul_ps(_mm_shuffle_ps(v132, v132, 0), v116);
				v116.m128_i32[0] = v188.m128_i32[0];
				v117.m128_i32[0] = v199.m128_i32[0];
				*(__m128*)(a1 + 144) = _mm_add_ps(
					*(__m128*)(a1 + 144),
					_mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								v144,
								_mm_mul_ps(_mm_shuffle_ps(v132, v132, 85), (__m128)xmmword_140B7A4B0)),
							_mm_mul_ps(_mm_shuffle_ps(v132, v132, 170), v136)),
						v34));
				*(__m128*)v125 = v34;
			}
			else if (v189)
			{
				v145 = (__m128)v189[286].m128_u32[0];
				v191 = xmmword_140C78410;
				v192 = xmmword_140C78420;
				v146 = _mm_unpacklo_ps(v145, (__m128)v189[286].m128_u32[2]);
				v193 = xmmword_140C78430;
				v147 = _mm_unpacklo_ps((__m128)v189[286].m128_u32[1], (__m128)0x3F800000u);
				v194 = _mm_unpacklo_ps(v146, v147);
				v147.m128_f32[0] = sub_1405B42D0((__int64)v189);
				v148 = *(double*)v147.m128_u64;
				v212 = v147.m128_i32[0];
				v149 = sub_1408FE3D0(*(double*)v147.m128_u64);
				v147.m128_f32[0] = sub_1408FC950(v148);
				v196 = v213;
				v215 = v149;
				v213[0] = v147.m128_i32[0];
				v217 = v147.m128_i32[0];
				v219 = xmmword_140C78440;
				*(float*)&v213[2] = -v149;
				v220[0] = (__m128*)v213;
				v197 = &v191;
				v213[1] = 0;
				v214 = xmmword_140B7A4B0;
				v220[1] = (__m128*) & v191;
				v213[3] = 0;
				v216 = 0;
				v218 = 0;
				sub_1401AFB10(v220, v184);
				v150 = v186;
				v117 = v184[0];
				v116 = v184[1];
				*(_QWORD*)&v151 = LODWORD(v178);
				v152 = v185;
				*(__m128*)(v125 + 16) = v184[0];
				*(__m128*)(v125 + 32) = v116;
				*(__m128*)(v125 + 48) = v152;
				*(_OWORD*)(v125 + 64) = v150;
				sub_1408FE3D0(v151);
				v153 = *(float*)&v151;
				*(float*)&v150 = sub_1408FC950(v151);
				*(_QWORD*)&v193 = LODWORD(v151);
				HIDWORD(v191) = 0;
				v198[0] = (__m128*)(v125 + 16);
				*(_QWORD*)&v191 = (unsigned int)v150;
				*((_QWORD*)&v193 + 1) = (unsigned int)v150;
				*((float*)&v191 + 2) = -*(float*)&v151;
				v192 = xmmword_140B7A4B0;
				v198[1] = (__m128*) & v191;
				v194 = (__m128)xmmword_140C78440;
				sub_1401AFB10(v198, (__m128*)(v125 + 16));
				v154 = v189;
				v184[0].m128_u64[0] = (unsigned int)v150;
				v185.m128_u64[1] = (unsigned int)v150;
				v185.m128_u64[0] = LODWORD(v151);
				v118 = 0i64;
				v184[0].m128_f32[2] = -v153;
				v184[0].m128_i32[3] = 0;
				v186 = xmmword_140C78440;
				v119 = (__m128*)(a1 + 144);
				v155 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v195, v195, 85), (__m128)xmmword_140B7A4B0),
							_mm_mul_ps(_mm_shuffle_ps(v195, v195, 0), v184[0])),
						_mm_mul_ps(_mm_shuffle_ps(v195, v195, 170), v185)),
					v132);
				v156 = (__m128i)_mm_add_ps(
					v189[286],
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v155, v155, 0), v117),
							_mm_mul_ps(_mm_shuffle_ps(v155, v155, 85), v116)),
						_mm_mul_ps(_mm_shuffle_ps(v155, v155, 170), v152)));
				v157 = _mm_mul_ps(_mm_shuffle_ps(v132, v132, 0), v117);
				*(_DWORD*)(v125 + 64) = _mm_cvtsi128_si32(v156);
				v117.m128_i32[0] = v199.m128_i32[0];
				*(_DWORD*)(v125 + 68) = _mm_cvtsi128_si32(_mm_srli_si128(v156, 4));
				*(_DWORD*)(v125 + 72) = _mm_cvtsi128_si32(_mm_srli_si128(v156, 8));
				v158 = _mm_mul_ps(_mm_shuffle_ps(v132, v132, 85), v116);
				v116.m128_i32[0] = v188.m128_i32[0];
				*(__m128*)(a1 + 144) = _mm_add_ps(
					*(__m128*)(a1 + 144),
					_mm_add_ps(
						v154[286],
						_mm_add_ps(
							_mm_add_ps(v157, v158),
							_mm_mul_ps(_mm_shuffle_ps(v132, v132, 170), v152))));
				*(__m128*)v125 = v34;
			}
			else
			{
				v119 = (__m128*)(a1 + 144);
			}
			v159 = dword_140C455F0;
			if (*(_DWORD*)qword_140C63750 < dword_140C455F0)
				v159 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&dword_140C45600 + v159) || (*(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64) & 0x1000000) != 0)
			{
				*(_QWORD*)(v125 + 620) = 0i64;
				*(_QWORD*)(v125 + 628) = 0i64;
				*(_QWORD*)(v125 + 704) = 0i64;
				*(_QWORD*)(v125 + 712) = 0i64;
			}
			else
			{
				v160 = v181;
				v161 = v187;
				*(float*)(v125 + 620) = v35;
				*(_QWORD*)(v125 + 704) = v161;
				v162 = v182;
				*(float*)(v125 + 624) = v160;
				*(_QWORD*)(v125 + 712) = v162;
				*(_DWORD*)(v125 + 628) = v211;
				*(_DWORD*)(v125 + 632) = v209;
			}
			v163 = v183.m128_u64[0];
			*(_QWORD*)(v125 + 636) = 0i64;
			*(_OWORD*)(v125 + 656) = v118;
			*(_DWORD*)(v125 + 4i64 * *((int*)&xmmword_140C7D6F0 + 2 * v163 + 1) + 656) = v117.m128_i32[0];
			*(_OWORD*)(v125 + 672) = v118;
			*(_DWORD*)(v125 + 4i64 * *((int*)&xmmword_140C7D6F0 + 2 * v163 + 1) + 672) = v116.m128_i32[0];
			*(_QWORD*)(v125 + 688) = qword_140C65B48[2 * *(int*)(a1 + 304)];
			*(_QWORD*)(v125 + 696) = qword_140C65B50[2 * *(int*)(a1 + 304)];
			*(_QWORD*)(v125 + 612) = 1065353216i64;
			v164 = (__m128) * (unsigned int*)(v125 + 536);
			v165 = (__m128) * (unsigned int*)(v125 + 528);
			v164.m128_f32[0] = fminf(v164.m128_f32[0], *(float*)(v125 + 568));
			v165.m128_f32[0] = fminf(v165.m128_f32[0], *(float*)(v125 + 560));
			*v120 = _mm_unpacklo_ps(_mm_unpacklo_ps(v165, v164), (__m128)0i64);
			v166 = (__m128)v120->m128_u32[0];
			v166.m128_f32[0] = fminf(v166.m128_f32[0], *(float*)(a1 + 168));
			*v120 = _mm_shuffle_ps(v166, v166, 0);
			*v121 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v125 + 560), (__m128) * (unsigned int*)(v125 + 568)),
				(__m128)0i64);
			if (*(_DWORD*)(*(_QWORD*)(a1 + 48) + 8i64) == 7)
			{
				v167 = sub_14054DA10(a1, 2u, 1.0);
				v121->m128_i32[0] = dword_140C463A8;
				*(float*)(a1 + 184) = v167;
			}
			else
			{
				v168 = (__m128)v121->m128_u32[0];
				v168.m128_f32[0] = fmaxf(v168.m128_f32[0], *(float*)(a1 + 184));
				*v121 = _mm_shuffle_ps(v168, v168, 0);
			}
			if (*(_DWORD*)(a1 + 304))
				v169 = 1048576000;
			else
				v169 = 0;
			*(_DWORD*)(v125 + 644) = v169;
			if (!v122)
			{
				*(_OWORD*)(a1 + 192) = *(_OWORD*)(v125 + 16);
				*(_OWORD*)(a1 + 208) = *(_OWORD*)(v125 + 32);
				*(_OWORD*)(a1 + 224) = *(_OWORD*)(v125 + 48);
				*(_OWORD*)(a1 + 240) = *(_OWORD*)(v125 + 64);
				v170 = *(_QWORD*)(a1 + 256);
				if (v170)
				{
					*(_DWORD*)(v170 + 760) = 1;
				}
				else
				{
					v171 = *(_QWORD*)(a1 + 264);
					if (v171)
					{
						*(_DWORD*)(v171 + 424) = 1;
					}
					else
					{
						v172 = *(_QWORD*)(a1 + 272);
						if (v172)
							*(_DWORD*)(v172 + 25424) = 1;
					}
				}
			}
			v173 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v122);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v173 + 48i64))(v173);
			if ((unsigned __int64)++v122 >= *(_QWORD*)(a1 + 64))
				goto LABEL_268;
		}
		v127 = 1;
	LABEL_276:
		v176 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v122);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v176 + 48i64))(v176);
		return v127;
	}
	else
	{
	LABEL_268:
		v174 = *(_QWORD*)(a1 + 64);
		v175 = 0i64;
		v175.m128_f32[0] = (float)(int)v174;
		if (v174 < 0)
			v175.m128_f32[0] = v175.m128_f32[0] + 1.8446744e19;
		v2 = v179 == 0;
		*v119 = _mm_div_ps(*v119, _mm_shuffle_ps(v175, v175, 0));
		if (v2)
			sub_14054CA10(a1, v119, (_OWORD*)(a1 + 160), (_OWORD*)(a1 + 176), (_OWORD*)(a1 + 192), *(_DWORD*)(a1 + 72));
		if (v190)
			*v190 = *(_QWORD*)(a1 + 256);
		return 0i64;
	}
}
// 14054B8C3: conditional instruction was optimized away because rcx.8!=0
// 14054B537: variable 'v33' is possibly undefined
// 14054B61B: variable 'v47' is possibly undefined
// 14054B61B: variable 'v46' is possibly undefined
// 14054B644: variable 'v49' is possibly undefined
// 14054B693: variable 'v51' is possibly undefined
// 14054B74A: variable 'v50' is possibly undefined
// 14054B758: variable 'v56' is possibly undefined
// 14054B758: variable 'v55' is possibly undefined
// 14054B7BB: variable 'v59' is possibly undefined
// 14054B7BB: variable 'v58' is possibly undefined
// 14054B83A: variable 'v32' is possibly undefined
// 14054B87D: variable 'v64' is possibly undefined
// 14054BA4B: variable 'v80' is possibly undefined
// 14054BAAE: variable 'v79' is possibly undefined
// 14054BC18: variable 'v93' is possibly undefined
// 14054BD7A: variable 'v177' is possibly undefined
// 14054BEC4: variable 'v101' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C455F0: using guessed type int dword_140C455F0;
// 140C45600: using guessed type int dword_140C45600;
// 140C463A8: using guessed type int dword_140C463A8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B18: using guessed type __int64 qword_140C65B18[3];
// 140C65B30: using guessed type __int64 qword_140C65B30[3];
// 140C65B48: using guessed type __int64 qword_140C65B48[];
// 140C65B50: using guessed type __int64 qword_140C65B50[3];
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C7D6F0: using guessed type __int128 xmmword_140C7D6F0;
// 140DC3348: using guessed type int dword_140DC3348;
// 140DC334C: using guessed type int dword_140DC334C;
// 140DC3350: using guessed type int dword_140DC3350;
// 140DC3354: using guessed type int dword_140DC3354;
// 140DC3358: using guessed type int dword_140DC3358;
// 140DC335C: using guessed type int dword_140DC335C;
// 140DC3360: using guessed type int dword_140DC3360;
// 140DC3364: using guessed type int dword_140DC3364;
// 140DC3368: using guessed type int dword_140DC3368;
// 140DC336C: using guessed type int dword_140DC336C;
// 140DC3370: using guessed type int dword_140DC3370;
// 140DC3374: using guessed type int dword_140DC3374;
// 140DC3378: using guessed type int dword_140DC3378;

