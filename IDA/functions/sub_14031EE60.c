#include "../winhttp.h"

//----- (000000014031EE60) ----------------------------------------------------
__int64 __fastcall sub_14031EE60(__int64 a1, __m128* a2, unsigned __int64 a3, __m128* a4)
{
	__m128 v4; // xmm0
	__m128 v5; // xmm1
	__int64 v6; // rax
	unsigned int v7; // r13d
	__m128* v9; // r14
	__m128 v11; // xmm11
	__m128 v12; // xmm0
	__m128 v13; // xmm1
	__int32 v14; // xmm6_4
	__int64 v15; // rcx
	int v16; // ecx
	__int64 v17; // rdx
	unsigned int v18; // esi
	int v19; // ebx
	int v20; // ebx
	__int64 v21; // rcx
	int v22; // eax
	double v23; // xmm12_8
	float v24; // xmm9_4
	__int64 v25; // rax
	__m128 v26; // xmm2
	__int64 v27; // r8
	float v28; // xmm1_4
	float v29; // xmm0_4
	unsigned __int16 v30; // ax
	float v31; // xmm1_4
	float v32; // xmm1_4
	float v33; // xmm1_4
	int v34; // edx
	int v35; // r9d
	unsigned int v36; // ecx
	unsigned int v37; // r9d
	unsigned int v38; // eax
	__int64 v39; // rax
	__int64 v40; // rcx
	double v41; // xmm6_8
	float v42; // xmm7_4
	float v43; // xmm8_4
	float v44; // xmm0_4
	float v45; // xmm1_4
	unsigned int i; // r9d
	__int64 v47; // r10
	__int64 v48; // r11
	__int64 v49; // rax
	__m128 v50; // xmm4
	__m128 v51; // xmm3
	__m128 v52; // xmm5
	__m128 v53; // xmm1
	__int64 v54; // r8
	__m128 v55; // xmm1
	__int64 v56; // rsi
	float v57; // xmm6_4
	__int64 v58; // rax
	__int64 v59; // r12
	__m128 v60; // xmm7
	__int64 v61; // rax
	__m128 v62; // xmm0
	__int64 v63; // r9
	__m128* v64; // rax
	float v65; // xmm2_4
	__m128 v66; // xmm3
	__m128* v67; // rax
	__m128 v68; // xmm0
	__m128 v69; // xmm4
	__m128 v70; // xmm0
	__m128 v71; // xmm4
	__m128 v72; // xmm1
	__m128 v73; // xmm1
	__m128 v74; // xmm0
	__m128 v75; // xmm4
	__m128 v76; // xmm1
	__int64 v77; // rax
	unsigned __int32 v78; // ecx
	unsigned int v79; // edx
	int v80; // eax
	unsigned int v81; // r8d
	float v82; // xmm7_4
	float v83; // xmm0_4
	__int64 v84; // rsi
	int v85; // r12d
	unsigned __int64 v86; // rax
	unsigned __int64 v87; // rcx
	unsigned int v88; // r15d
	unsigned int v89; // r14d
	__m128* v90; // rbx
	__m128 v91; // xmm6
	int* v92; // rcx
	int v93; // ecx
	unsigned int v94; // eax
	__m128* v95; // rdx
	__m128 v96; // xmm0
	__int64 v97; // rax
	__m128 v98; // xmm0
	float v99; // xmm2_4
	__m128 v100; // xmm0
	__m128 v101; // xmm3
	__m128 v102; // xmm0
	__m128 v103; // xmm2
	__int64 v104; // rax
	int v105; // eax
	__m128 v106; // xmm1
	__int64 v107; // rax
	__int64 result; // rax
	unsigned int m; // r15d
	__int64 v110; // rbx
	__m128* v111; // rax
	__m128* v112; // rax
	__int64 v113; // rax
	__int64 v114; // r8
	__int64 v115; // rax
	__int64 v116; // r9
	unsigned __int64 v117; // rcx
	__int64 v118; // r8
	__int64 v119; // r9
	__m128 v120; // xmm15
	__m128 v121; // xmm14
	__m128 v122; // xmm7
	__m128 v123; // xmm8
	__m128 v124; // xmm4
	__m128 v125; // xmm1
	__m128 v126; // xmm5
	__m128 v127; // xmm6
	__m128 v128; // xmm3
	__m128 v129; // xmm2
	__m128 v130; // xmm0
	__m128 v131; // xmm9
	__m128 v132; // xmm3
	unsigned int v133; // r9d
	__m128 v134; // xmm3
	__m128 v135; // xmm9
	__m128 v136; // xmm15
	__m128 v137; // xmm12
	__m128 v138; // xmm13
	__int64 v139; // rdx
	__int64 v140; // r8
	__m128 v141; // xmm3
	__m128 v142; // xmm3
	__int64 v143; // rax
	__int16 v144; // cx
	__m128 v145; // xmm6
	__m128 v146; // xmm0
	float v147; // xmm6_4
	__m128 v148; // xmm5
	__m128 v149; // xmm5
	__m128 v150; // xmm3
	float v151; // xmm1_4
	__m128 v152; // xmm4
	__m128 v153; // xmm3
	float v154; // xmm1_4
	__m128 v155; // xmm4
	__m128 v156; // xmm3
	float v157; // xmm1_4
	__int128 v158; // xmm7
	__m128 v159; // xmm1
	__m128 v160; // xmm8
	__m128 v161; // xmm6
	__m128 v162; // xmm2
	__m128 v163; // xmm0
	__m128* v164; // rax
	__m128 v165; // xmm2
	__m128 v166; // xmm0
	__m128 v167; // xmm1
	__m128* v168; // rax
	__m128 v169; // xmm2
	__m128 v170; // xmm1
	__m128 v171; // xmm0
	__m128 v172; // xmm2
	__m128 v173; // xmm1
	unsigned int v174; // r15d
	__m128* v175; // rcx
	__m128 v176; // xmm2
	__m128 v177; // xmm2
	float v178; // xmm15_4
	__m128 v179; // xmm11
	__int64 v180; // rdx
	__int64 v181; // rbx
	float v182; // xmm7_4
	__int64 v183; // rax
	__m128 v184; // xmm2
	__m128 v185; // xmm0
	__m128 v186; // xmm5
	__m128 v187; // xmm4
	__m128 v188; // xmm3
	__m128 v189; // xmm1
	char v190; // cl
	unsigned int v191; // r8d
	__m128 v192; // xmm3
	__m128 j; // xmm2
	__int64 v194; // rdx
	__int64 v195; // rcx
	__m128 v196; // xmm0
	__m128 v197; // xmm6
	__m128 v198; // xmm1
	float v199; // xmm0_4
	__m128 v200; // xmm1
	__m128 v201; // xmm2
	__m128 v202; // xmm1
	int v203; // eax
	__m128* v204; // rdx
	__int64 v205; // r8
	__int64 v206; // rcx
	char v207; // al
	unsigned int k; // r9d
	__int64 v209; // rdx
	__int64 v210; // r8
	__m128 v211; // xmm4
	__m128 v212; // xmm5
	__m128 v213; // xmm6
	unsigned int v214; // r9d
	__m128 v215; // xmm7
	__int64 v216; // rdx
	__m128* v217; // r8
	__m128 v218; // xmm3
	__m128 v219; // xmm3
	__int64 n; // rbx
	__int64 v221; // r9
	__int64 v222; // r8
	int v223; // eax
	__m128** v224; // r15
	__int64 v225; // r9
	__int64 v226; // rax
	__int64 v227; // r14
	int v228; // ebx
	unsigned int v229; // eax
	unsigned int v230; // r8d
	__m128 v231; // xmm8
	__m128 v232; // xmm13
	__m128 v233; // xmm9
	__m128 v234; // xmm5
	__m128 v235; // xmm3
	__m128 v236; // xmm1
	float v237; // xmm2_4
	__m128 v238; // xmm4
	__m128 v239; // xmm5
	float v240; // xmm0_4
	__m128 v241; // xmm1
	float v242; // xmm2_4
	float v243; // xmm0_4
	__m128 v244; // xmm13
	__m128 v245; // xmm3
	__m128 v246; // xmm1
	__m128 v247; // xmm9
	float v248; // xmm2_4
	float v249; // xmm0_4
	__m128 v250; // xmm2
	__m128 v251; // xmm8
	__m128 v252; // xmm12
	float v253; // xmm12_4
	__m128 v254; // xmm14
	float v255; // xmm14_4
	__m128 v256; // xmm1
	float v257; // xmm6_4
	__m128 v258; // xmm1
	__m128 v259; // xmm1
	float v260; // xmm1_4
	int v261; // ecx
	int v262; // r8d
	int v263; // r14d
	int v264; // eax
	int v265; // ecx
	int v266; // edx
	int v267; // ecx
	unsigned int v268; // r8d
	__m128 v269; // xmm3
	__m128 v270; // xmm2
	__m128 v271; // xmm4
	__m128 v272; // xmm5
	__m128 v273; // xmm1
	__m128 v274; // xmm7
	float v275; // xmm7_4
	__m128 v276; // xmm1
	__m128 v277; // xmm8
	float v278; // xmm8_4
	float v279; // xmm6_4
	int v280; // eax
	__m128 v281; // xmm0
	__m128 v282; // xmm12
	unsigned int v283; // r12d
	int v284; // ebx
	float v285; // xmm9_4
	__m128 v286; // xmm2
	__m128 v287; // xmm1
	unsigned int ii; // r11d
	unsigned int v289; // r8d
	__m128 v290; // xmm2
	__m128 v291; // xmm3
	__m128 v292; // xmm4
	__m128* v293; // rax
	__m128 v294; // xmm1
	__m128* v295; // rax
	int v296; // r11d
	__int64 v297; // r10
	int v298; // eax
	__int64 v299; // rbx
	__int64 v300; // rax
	int* v301; // rcx
	int* v302; // rdx
	int v303; // eax
	__int64 v304; // rbx
	__int64 v305; // rax
	int v306; // edx
	unsigned int v307; // ecx
	int v308; // eax
	signed int v309; // ecx
	int v310; // eax
	int v311; // ecx
	__int64 v312; // rdx
	float v313; // [rsp+48h] [rbp-C0h]
	int v314; // [rsp+48h] [rbp-C0h]
	__m128 v315; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v316; // [rsp+68h] [rbp-A0h] BYREF
	int v317[4]; // [rsp+78h] [rbp-90h]
	__m128 v318; // [rsp+88h] [rbp-80h] BYREF
	__m128 v319; // [rsp+98h] [rbp-70h]
	__m128 v320[4]; // [rsp+A8h] [rbp-60h] BYREF
	__m128* v321; // [rsp+E8h] [rbp-20h] BYREF
	__m128* v322; // [rsp+F0h] [rbp-18h]
	__m128* v323; // [rsp+138h] [rbp+30h] BYREF
	__m128 v324; // [rsp+148h] [rbp+40h] BYREF
	__m128 v325; // [rsp+158h] [rbp+50h]
	__m128 v326; // [rsp+168h] [rbp+60h]
	__m128 v327; // [rsp+178h] [rbp+70h]
	char v328[32]; // [rsp+188h] [rbp+80h] BYREF
	int v329; // [rsp+1A8h] [rbp+A0h]
	__m128 v330; // [rsp+268h] [rbp+160h] BYREF
	__m128 v331; // [rsp+278h] [rbp+170h] BYREF
	__m128 v332; // [rsp+288h] [rbp+180h] BYREF
	__m128 v333; // [rsp+298h] [rbp+190h] BYREF
	__m128 v334; // [rsp+2A8h] [rbp+1A0h] BYREF
	__m128 v335; // [rsp+2B8h] [rbp+1B0h] BYREF
	__m128 v336; // [rsp+2C8h] [rbp+1C0h] BYREF
	__m128 v337; // [rsp+2D8h] [rbp+1D0h] BYREF
	__m128 v338; // [rsp+2E8h] [rbp+1E0h] BYREF
	__m128 v339; // [rsp+2F8h] [rbp+1F0h]
	__m128 v340; // [rsp+308h] [rbp+200h]
	__m128 v341; // [rsp+318h] [rbp+210h]

	v4 = *a2;
	v5 = a2[1];
	v6 = *(_QWORD*)(a1 + 8);
	v7 = 0;
	v9 = (__m128*)a3;
	v316.m128_u64[0] = a3;
	v11 = 0i64;
	v330 = v4;
	v12 = a2[2];
	v331 = v5;
	v13 = a2[3];
	v332 = v12;
	v333 = v13;
	if (*(_DWORD*)(v6 + 40) && *(_DWORD*)(v6 + 8) == 2)
	{
		v14 = 0;
		v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 488i64);
		if (v15)
		{
			v315 = _mm_add_ps(v13, (__m128)xmmword_140C77870);
			if ((*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64, _QWORD))(*(_QWORD*)v15 + 440i64))(
				v15,
				&v315,
				v328,
				1i64,
				0i64))
			{
				v14 = v329;
			}
		}
		v333.m128_i32[1] = v14;
	}
	sub_14031EC20(a1);
	sub_14032FE20((__m128*)a1, &v330, (__int64)v9, a4);
	v16 = *(_DWORD*)(a1 + 1336);
	v17 = *(_QWORD*)(a1 + 40);
	v18 = *(_DWORD*)(*(_QWORD*)(v17 + 16) + 208i64);
	*(_DWORD*)(a1 + 1340) = v16;
	v19 = *(_DWORD*)(*(_QWORD*)(v17 + 16) + 208i64);
	*(_DWORD*)(a1 + 1336) = v19;
	v20 = v19 - v16;
	v21 = *(_QWORD*)(a1 + 1256);
	v313 = *(float*)&v20;
	if ((*(_BYTE*)(v21 + 40) & 0x10) != 0)
	{
		v22 = 100;
		if ((unsigned int)v20 < 0x64)
			v22 = v20;
		v20 = v22;
		v313 = *(float*)&v22;
	}
	HIDWORD(v23) = 0;
	*(float*)&v23 = (float)v20;
	v24 = (float)v20 * 0.001;
	if (*(_BYTE*)(v21 + 4) == 4)
	{
		v25 = *(_QWORD*)(v17 + 1216);
		if (v25)
		{
			if (*(_QWORD*)(a1 + 16) != v25)
				sub_14031DEF0(a1);
		}
	}
	*(float*)(a1 + 1484) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 88i64))(*(_QWORD*)(a1 + 40))
		/ (float)(v24 * *(float*)(*(_QWORD*)(a1 + 1256) + 936i64));
	v26 = *(__m128*)(a1 + 416);
	*(__m128*)(a1 + 1552) = _mm_add_ps(
		_mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), a4[1]),
			_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), *a4)),
		_mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), a4[2]));
	v27 = *(_QWORD*)(a1 + 1256);
	if (*(_BYTE*)(v27 + 1072))
	{
		v28 = *(float*)(a1 + 1184);
		if (v28 == 0.0)
			v29 = 1000000.0;
		else
			v29 = 1.0 / v28;
		*(float*)(a1 + 1520) = v29;
	}
	v30 = *(_WORD*)(v27 + 38);
	if (v30)
		v31 = 1.0 / (float)v30;
	else
		v31 = 100000.0;
	*(float*)(a1 + 1524) = v31;
	*(float*)(a1 + 1396) = (float)(v24 * *(float*)(v27 + 956)) + *(float*)(a1 + 1396);
	v32 = (float)(v24 * *(float*)(v27 + 960)) + *(float*)(a1 + 1400);
	*(float*)(a1 + 1400) = v32;
	if (v32 <= 1.0)
	{
		if (v32 >= -1.0)
			goto LABEL_28;
		v33 = v32 + 1.0;
	}
	else
	{
		v33 = v32 - 1.0;
	}
	*(float*)(a1 + 1400) = v33;
LABEL_28:
	if ((*(_DWORD*)(v27 + 40) & 0x200) != 0)
	{
		v34 = *(_DWORD*)(a1 + 1408);
		if (v18 > v34 + *(_DWORD*)(v27 + 1000))
		{
			v35 = *(_DWORD*)(a1 + 1404);
			do
			{
				*(_DWORD*)(a1 + 1404) = ++v35;
				v34 += *(_DWORD*)(v27 + 1000);
				*(_DWORD*)(a1 + 1408) = v34;
			} while (v18 > v34 + *(_DWORD*)(v27 + 1000));
		}
		v36 = *(_DWORD*)(v27 + 1020);
		v37 = *(_DWORD*)(a1 + 1404);
		if (v37 >= v36)
		{
			if ((*(_DWORD*)(v27 + 40) & 0x400) != 0)
			{
				if (v36)
					*(_DWORD*)(a1 + 1404) = v37 % v36;
				else
					*(_DWORD*)(a1 + 1404) = 0;
			}
			else
			{
				v38 = v36 - 1;
				if (v37 < v36 - 1)
					v38 = *(_DWORD*)(a1 + 1404);
				*(_DWORD*)(a1 + 1404) = v38;
			}
		}
	}
	if (*(_WORD*)(v27 + 1028) == 2)
	{
		v39 = *(_QWORD*)(a1 + 1424);
		v40 = *(_QWORD*)(a1 + 1416);
		HIDWORD(v41) = 0;
		*(float*)(a1 + 1472) = (float)(v24 * *(float*)(v27 + 1032)) + *(float*)(a1 + 1472);
		*(float*)(a1 + 1476) = (float)(v24 * *(float*)(v27 + 1036)) + *(float*)(a1 + 1476);
		*(float*)&v41 = (float)(v24 * *(float*)(v27 + 1040)) + *(float*)(a1 + 1480);
		*(_DWORD*)(a1 + 1480) = LODWORD(v41);
		v42 = (float)(*(float*)(v39 + 12) + *(float*)(v40 + 12)) * 0.5;
		v43 = sub_1408FE3D0(v41);
		v44 = sub_1408FC950(v41);
		*(float*)(a1 + 1444) = v43;
		*(float*)(a1 + 1440) = v44;
		v45 = (float)(v42 - (float)((float)(v44 * v42) + (float)(v43 * 0.5))) + *(float*)(a1 + 1472);
		*(float*)(a1 + 1460) = v44;
		*(float*)(a1 + 1448) = v45;
		*(float*)(a1 + 1456) = -v43;
		*(float*)(a1 + 1464) = (float)((float)((float)(v43 * v42) - (float)(v44 * 0.5)) + 0.5) + *(float*)(a1 + 1476);
	}
	for (i = 0; i < *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 64i64) + 776i64); ++i)
	{
		v47 = *(_QWORD*)(a1 + 40);
		v48 = *(_QWORD*)(*(_QWORD*)(v47 + 64) + 784i64);
		if (*(_WORD*)(v48 + 80i64 * i + 2))
		{
			if (*(_WORD*)(v48 + 80i64 * i + 2) == 1)
			{
				v49 = *(unsigned __int16*)(v48 + 80i64 * i);
				v315.m128_u64[1] = (unsigned __int64)v9;
				v322 = v9;
				v315.m128_u64[0] = *(_QWORD*)(v47 + 824) + (v49 << 6);
				v321 = (__m128*)v315.m128_u64[0];
				sub_1401AFB10(&v321, v320);
				v323 = v320;
				sub_1401AFC20((__int64*)&v323, (double*)v324.m128_u64);
				v50 = _mm_unpackhi_ps(v324, v325);
				v51 = _mm_unpackhi_ps(v326, v327);
				v52 = _mm_unpacklo_ps(v324, v325);
				v53 = _mm_unpacklo_ps(v326, v327);
				v320[0] = _mm_shuffle_ps(v52, v53, 68);
				*(&v338 + v54) = _mm_shuffle_ps(v52, v53, 238);
				v320[2] = _mm_shuffle_ps(v50, v51, 68);
				v320[3] = _mm_shuffle_ps(v50, v51, 238);
			}
		}
		else
		{
			v55 = *(__m128*)(((unsigned __int64)*(unsigned __int16*)(v48 + 80i64 * i) << 6) + *(_QWORD*)(v47 + 824) + 48);
			*(&v334 + i) = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v55, v55, 85), v9[1]),
						_mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), *v9)),
					_mm_mul_ps(_mm_shuffle_ps(v55, v55, 170), v9[2])),
				v9[3]);
		}
	}
	v56 = a1 + 768;
	v57 = 1.0
		- (float)((float)*(int*)(*(_QWORD*)(a1 + 1416) + 24i64)
			/ (float)*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64));
	sub_140318930(
		v57,
		a1 + 768,
		a1 + 448,
		(_OWORD*)(*(_QWORD*)(a1 + 1416) + 32i64),
		*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 72i64));
	v58 = *(_QWORD*)(a1 + 1256);
	if ((*(_BYTE*)(v58 + 40) & 0x20) != 0)
		sub_140318930(v57, a1 + 768, a1 + 608, (_OWORD*)(*(_QWORD*)(a1 + 1416) + 48i64), *(unsigned __int16*)(v58 + 72));
	v59 = a1 + 848;
	sub_140318840(
		v57,
		a1 + 928,
		a1 + 848,
		(float*)(*(_QWORD*)(a1 + 1416) + 4i64),
		*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 440i64));
	sub_140318840(
		v57,
		a1 + 1088,
		a1 + 1008,
		(float*)(*(_QWORD*)(a1 + 1416) + 8i64),
		*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 688i64));
	sub_14031E5E0(a1, *(__m128**)(a1 + 1416), v24);
	if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 104i64))
		sub_14031E6B0(a1, *(__m128**)(a1 + 1416), (__int64)&v334, (__int64)&v338, (float)v20 * 0.001);
	v60 = (__m128)0x3F800000u;
	v60.m128_f32[0] = 1.0
		- (float)((float)*(int*)(*(_QWORD*)(a1 + 1424) + 24i64)
			/ (float)*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64));
	sub_140318930(
		v60.m128_f32[0],
		a1 + 768,
		a1 + 448,
		(_OWORD*)(*(_QWORD*)(a1 + 1424) + 32i64),
		*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 72i64));
	v61 = *(_QWORD*)(a1 + 1256);
	if ((*(_BYTE*)(v61 + 40) & 0x20) != 0)
		sub_140318930(
			v60.m128_f32[0],
			a1 + 768,
			a1 + 608,
			(_OWORD*)(*(_QWORD*)(a1 + 1424) + 48i64),
			*(unsigned __int16*)(v61 + 72));
	sub_140318840(
		v60.m128_f32[0],
		a1 + 928,
		a1 + 848,
		(float*)(*(_QWORD*)(a1 + 1424) + 4i64),
		*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 440i64));
	v62 = v60;
	sub_140318840(
		v60.m128_f32[0],
		a1 + 1088,
		a1 + 1008,
		(float*)(*(_QWORD*)(a1 + 1424) + 8i64),
		*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 688i64));
	sub_14031E5E0(a1, *(__m128**)(a1 + 1424), v24);
	if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 104i64))
		sub_14031E6B0(a1, *(__m128**)(a1 + 1424), (__int64)&v334, (__int64)&v338, (float)v20 * 0.001);
	if (*(_DWORD*)(a1 + 1328))
	{
		v63 = *(_QWORD*)(a1 + 1256);
		if (*(_BYTE*)v63)
		{
			v113 = *(_QWORD*)(a1 + 40);
			v315.m128_u64[1] = (unsigned __int64)v9;
			v114 = *(_QWORD*)(v113 + 824);
			v115 = *(unsigned __int16*)(v63 + 1180);
			v322 = v9;
			v315.m128_u64[0] = v114 + (v115 << 6);
			v321 = (__m128*)v315.m128_u64[0];
			sub_1401AFB10(&v321, &v334);
			v117 = (unsigned __int64)*(unsigned __int16*)(v116 + 1182) << 6;
			v315.m128_u64[1] = (unsigned __int64)v9;
			v322 = v9;
			v315.m128_u64[0] = v118 + v117;
			v321 = (__m128*)(v118 + v117);
			sub_1401AFB10(&v321, &v338);
			v120 = v337;
			v121 = v341;
			v122 = v336;
			v123 = v340;
			v124 = _mm_sub_ps(v337, v341);
			v125 = _mm_mul_ps(v124, v124);
			*(float*)(a1 + 1392) = fsqrt(
				(float)(v125.m128_f32[0] + _mm_shuffle_ps(v125, v125, 85).m128_f32[0])
				+ _mm_shuffle_ps(v125, v125, 170).m128_f32[0]);
			if ((unsigned __int8)(*(_BYTE*)(v119 + 4) - 1) > 2u)
			{
				v135 = v316;
				v137 = v316;
			}
			else
			{
				v126 = v334;
				v127 = v335;
				v128 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v119 + 24), (__m128) * (unsigned int*)(v119 + 32)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v119 + 28), (__m128)0i64));
				v129 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v119 + 28), (__m128)0i64);
				v130 = (__m128) * (unsigned int*)(v119 + 32);
				v131 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v128, v128, 85), v335),
						_mm_mul_ps(_mm_shuffle_ps(v128, v128, 0), v334)),
					_mm_mul_ps(_mm_shuffle_ps(v128, v128, 170), v122));
				v132 = (__m128) * (unsigned int*)(v119 + 24);
				v133 = 0;
				v134 = _mm_unpacklo_ps(_mm_unpacklo_ps(v132, v130), v129);
				v135 = _mm_add_ps(v131, v120);
				v136 = v338;
				v137 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v134, v134, 85), v339),
							_mm_mul_ps(_mm_shuffle_ps(v134, v134, 0), v338)),
						_mm_mul_ps(_mm_shuffle_ps(v134, v134, 170), v123)),
					v121);
				if (*(_DWORD*)(a1 + 1372))
				{
					v138 = v337;
					do
					{
						v139 = 3i64 * v133;
						v140 = 2i64 * v133++;
						v141 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v139),
								(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v139 + 8)),
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v139 + 4),
								(__m128)0i64));
						*(__m128*)(*(_QWORD*)(a1 + 1488) + 8 * v140) = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v141, v141, 85), v127),
									_mm_mul_ps(_mm_shuffle_ps(v141, v141, 0), v126)),
								_mm_mul_ps(_mm_shuffle_ps(v141, v141, 170), v122)),
							v138);
						v142 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v139),
								(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v139 + 8)),
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v139 + 4),
								(__m128)0i64));
						*(__m128*)(*(_QWORD*)(a1 + 1504) + 8 * v140) = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v142, v142, 85), v339),
									_mm_mul_ps(_mm_shuffle_ps(v142, v142, 0), v136)),
								_mm_mul_ps(_mm_shuffle_ps(v142, v142, 170), v123)),
							v121);
					} while (v133 < *(_DWORD*)(a1 + 1372));
				}
				v120 = v337;
			}
			v143 = *(_QWORD*)(a1 + 1256);
			v144 = *(_WORD*)(v143 + 1184);
			v145 = _mm_mul_ps(v124, v124);
			v146 = _mm_shuffle_ps(v145, v145, 85);
			v147 = fsqrt((float)(v145.m128_f32[0] + v146.m128_f32[0]) + _mm_shuffle_ps(v145, v145, 170).m128_f32[0]);
			if (v144 == 1 && *(_WORD*)(v143 + 1186) == 1)
			{
				v148 = v316;
			}
			else
			{
				v149 = (__m128)0x40400000u;
				v150 = _mm_mul_ps(v124, v124);
				v150.m128_f32[0] = (float)(v150.m128_f32[0] + _mm_shuffle_ps(v150, v150, 85).m128_f32[0])
					+ _mm_shuffle_ps(v150, v150, 170).m128_f32[0];
				v151 = 1.0 / fsqrt(v150.m128_f32[0]);
				v146 = 0i64;
				v149.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v150.m128_f32[0] * v151) * v151)) * 0.5) * v151,
					0.0);
				v148 = _mm_mul_ps(_mm_shuffle_ps(v149, v149, 0), v124);
			}
			if (v144 == 1)
			{
				v152 = (__m128)0x40400000u;
				v153 = _mm_mul_ps(v122, v122);
				v153.m128_f32[0] = (float)(v153.m128_f32[0] + _mm_shuffle_ps(v153, v153, 85).m128_f32[0])
					+ _mm_shuffle_ps(v153, v153, 170).m128_f32[0];
				v154 = 1.0 / fsqrt(v153.m128_f32[0]);
				v146 = 0i64;
				v152.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v153.m128_f32[0] * v154) * v154)) * 0.5) * v154,
					0.0);
				v315 = _mm_mul_ps(_mm_shuffle_ps(v152, v152, 0), v122);
			}
			else
			{
				v315 = v148;
			}
			if (*(_WORD*)(v143 + 1186) == 1)
			{
				v155 = (__m128)0x40400000u;
				v156 = _mm_mul_ps(v123, v123);
				v156.m128_f32[0] = (float)(v156.m128_f32[0] + _mm_shuffle_ps(v156, v156, 85).m128_f32[0])
					+ _mm_shuffle_ps(v156, v156, 170).m128_f32[0];
				v157 = 1.0 / fsqrt(v156.m128_f32[0]);
				v146 = 0i64;
				v155.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v156.m128_f32[0] * v157) * v157)) * 0.5) * v157,
					0.0);
				v318 = _mm_mul_ps(_mm_shuffle_ps(v155, v155, 0), v123);
			}
			else
			{
				v318 = v148;
			}
			v158 = 0i64;
			v159 = _mm_shuffle_ps((__m128) * (unsigned int*)(v143 + 1176), (__m128) * (unsigned int*)(v143 + 1176), 0);
			v146.m128_f32[0] = v147;
			v160 = (__m128)0x3F800000u;
			v161 = v121;
			v162 = _mm_sub_ps((__m128)0i64, v315);
			v163 = _mm_shuffle_ps(v146, v146, 0);
			*(__m128*)(*(_QWORD*)(a1 + 1416) + 80i64) = v120;
			*(__m128*)(*(_QWORD*)(a1 + 1424) + 80i64) = v121;
			v164 = *(__m128**)(a1 + 1416);
			v319 = _mm_mul_ps(_mm_mul_ps(v162, v159), v163);
			v165 = _mm_mul_ps(_mm_mul_ps(_mm_sub_ps((__m128)0i64, v318), v159), v163);
			v163.m128_f32[0] = v164->m128_f32[2] * 0.5;
			v315 = v165;
			v159.m128_f32[0] = v163.m128_f32[0] + *(float*)(a1 + 1216);
			v166 = v164[5];
			v167 = _mm_shuffle_ps(v159, v159, 0);
			*(__m128*)(a1 + 208) = _mm_sub_ps(v166, v167);
			*(__m128*)(a1 + 224) = _mm_add_ps(v167, v166);
			v168 = *(__m128**)(a1 + 1424);
			v169 = v168[5];
			v167.m128_f32[0] = (float)(v168->m128_f32[2] * 0.5) + *(float*)(a1 + 1216);
			v170 = _mm_shuffle_ps(v167, v167, 0);
			v171 = _mm_add_ps(v170, v169);
			v172 = _mm_sub_ps(v169, v170);
			v173 = _mm_max_ps(*(__m128*)(a1 + 224), v171);
			*(__m128*)(a1 + 208) = _mm_min_ps(*(__m128*)(a1 + 208), v172);
			*(__m128*)(a1 + 224) = v173;
			v174 = *(_DWORD*)(a1 + 1320);
			v175 = (__m128*)(*(_QWORD*)(a1 + 1304) + v174 * *(_DWORD*)(a1 + 1316));
			v176 = _mm_sub_ps(v121, v175[5]);
			v177 = _mm_mul_ps(v176, v176);
			v313 = -1.0 / (float)(*(_DWORD*)(a1 + 1328) - 1);
			v178 = sub_1408FDE98(
				v175->m128_f32[3]
				- (float)(fsqrt(
					(float)(v177.m128_f32[0] + _mm_shuffle_ps(v177, v177, 85).m128_f32[0])
					+ _mm_shuffle_ps(v177, v177, 170).m128_f32[0])
					* *(float*)(*(_QWORD*)(a1 + 1256) + 948i64)),
				1.0);
			if (v174 < *(_DWORD*)(a1 + 1324))
			{
				v179 = v337;
				do
				{
					v180 = *(_QWORD*)(a1 + 1256);
					v181 = *(_QWORD*)(a1 + 1304) + *(_DWORD*)(a1 + 1316) * v174;
					v182 = (float)(*(unsigned __int16*)(v180 + 38) - *(_DWORD*)(v181 + 24))
						/ (float)*(unsigned __int16*)(v180 + 38);
					sub_140318930(v182, a1 + 768, a1 + 448, (_OWORD*)(v181 + 32), *(unsigned __int16*)(v180 + 72));
					v183 = *(_QWORD*)(a1 + 1256);
					if ((*(_BYTE*)(v183 + 40) & 0x20) != 0)
						sub_140318930(v182, a1 + 768, a1 + 608, (_OWORD*)(v181 + 48), *(unsigned __int16*)(v183 + 72));
					sub_140318840(
						v182,
						a1 + 928,
						v59,
						(float*)(v181 + 4),
						*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 440i64));
					sub_140318840(
						v182,
						a1 + 1088,
						a1 + 1008,
						(float*)(v181 + 8),
						*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 688i64));
					v184 = v160;
					v188 = v160;
					v184.m128_f32[0] = v160.m128_f32[0] * v160.m128_f32[0];
					v188.m128_f32[0] = v160.m128_f32[0] * (float)(v160.m128_f32[0] * v160.m128_f32[0]);
					v185 = v184;
					v186 = v188;
					v187 = v188;
					v188.m128_f32[0] = v188.m128_f32[0] * 2.0;
					v186.m128_f32[0] = v186.m128_f32[0] - (float)(v160.m128_f32[0] * v160.m128_f32[0]);
					v184.m128_f32[0] = (float)(v160.m128_f32[0] * v160.m128_f32[0]) * 3.0;
					v187.m128_f32[0] = (float)(v187.m128_f32[0] - (float)((float)(v160.m128_f32[0] * v160.m128_f32[0]) * 2.0))
						+ v160.m128_f32[0];
					v189 = v184;
					v189.m128_f32[0] = v184.m128_f32[0] - v188.m128_f32[0];
					v185.m128_f32[0] = (float)(v188.m128_f32[0] - v184.m128_f32[0]) + 1.0;
					*(__m128*)(v181 + 80) = _mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v186, v186, 0), v315),
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v187, v187, 0), v319),
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v189, v189, 0), v121),
								_mm_mul_ps(_mm_shuffle_ps(v185, v185, 0), v179))));
					v190 = *(_BYTE*)(*(_QWORD*)(a1 + 1256) + 4i64);
					if (v190)
					{
						if ((unsigned __int8)(v190 - 1) <= 2u)
						{
							v188.m128_f32[0] = v160.m128_f32[0];
							v191 = 0;
							v192 = _mm_shuffle_ps(v188, v188, 0);
							for (j = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v137, v135), v192), v135);
								v191 < *(_DWORD*)(a1 + 1372);
								*(__m128*)(v181 + 16 * (v194 + 7)) = _mm_add_ps(
									_mm_sub_ps(*(__m128*)(v181 + 80), j),
									_mm_add_ps(
										_mm_mul_ps(
											_mm_sub_ps(
												*(__m128*)(*(_QWORD*)(a1 + 1504) + 8 * v195),
												v196),
											v192),
										v196)))
							{
								v194 = v191;
								v195 = 2i64 * v191++;
								v196 = *(__m128*)(*(_QWORD*)(a1 + 1488) + 8 * v195);
							}
						}
					}
					else
					{
						*(__m128*)(v181 + 96) = _mm_sub_ps(*(__m128*)(v181 + 80), v161);
					}
					v197 = _mm_sub_ps(v161, *(__m128*)(v181 + 80));
					v160.m128_f32[0] = v160.m128_f32[0] + v313;
					++v174;
					v59 = a1 + 848;
					v198 = _mm_mul_ps(v197, v197);
					v199 = *(float*)(v181 + 8) * 0.5;
					v178 = (float)(fsqrt(
						(float)(v198.m128_f32[0] + _mm_shuffle_ps(v198, v198, 85).m128_f32[0])
						+ _mm_shuffle_ps(v198, v198, 170).m128_f32[0])
						* *(float*)(*(_QWORD*)(a1 + 1256) + 948i64))
						+ v178;
					*(float*)(v181 + 12) = v178;
					v161 = *(__m128*)(v181 + 80);
					v198.m128_f32[0] = v199 + *(float*)(a1 + 1216);
					v200 = _mm_shuffle_ps(v198, v198, 0);
					v201 = _mm_sub_ps(v161, v200);
					v202 = _mm_max_ps(*(__m128*)(a1 + 224), _mm_add_ps(v200, v161));
					*(__m128*)(a1 + 208) = _mm_min_ps(*(__m128*)(a1 + 208), v201);
					*(__m128*)(a1 + 224) = v202;
				} while (v174 < *(_DWORD*)(a1 + 1324));
				v11 = 0i64;
				v158 = 0i64;
			}
			v203 = *(_DWORD*)(a1 + 1324);
			v204 = (__m128*)(*(_QWORD*)(a1 + 1304) + (unsigned int)(*(_DWORD*)(a1 + 1320) * *(_DWORD*)(a1 + 1316)));
			if (!v203)
				v203 = *(_DWORD*)(a1 + 1312);
			v205 = *(_QWORD*)(a1 + 1304) + (unsigned int)(*(_DWORD*)(a1 + 1316) * (v203 - 1));
			*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 12i64) = *(_DWORD*)(v205 + 12);
			*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 12i64) = v204->m128_i32[3];
			v206 = *(_QWORD*)(a1 + 1256);
			v207 = *(_BYTE*)(v206 + 4);
			if (v207)
			{
				if ((unsigned __int8)(v207 - 1) <= 2u)
				{
					for (k = 0;
						k < *(_DWORD*)(a1 + 1372);
						*(_OWORD*)(*(_QWORD*)(a1 + 1424) + 8 * v209) = *(_OWORD*)(*(_QWORD*)(a1 + 1504) + 8 * v210))
					{
						v209 = k + 7i64;
						v210 = 2i64 * k++;
						v209 *= 2i64;
						*(_OWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v209) = *(_OWORD*)(*(_QWORD*)(a1 + 1488) + 8 * v210);
					}
				}
			}
			else
			{
				if ((*(_DWORD*)(v206 + 40) & 0x8000) != 0)
					*(_OWORD*)(v205 + 96) = v158;
				else
					v204[6] = _mm_sub_ps(
						*(__m128*)((unsigned int)(*(_DWORD*)(a1 + 1316) * (*(_DWORD*)(a1 + 1320) + 1))
							+ *(_QWORD*)(a1 + 1304)
							+ 80i64),
						v204[5]);
				*(_OWORD*)(*(_QWORD*)(a1 + 1416) + 96i64) = v158;
				*(_OWORD*)(*(_QWORD*)(a1 + 1424) + 96i64) = v158;
			}
		}
		else
		{
			v64 = *(__m128**)(a1 + 1416);
			v65 = v64->m128_f32[2];
			v62.m128_f32[0] = v65;
			v66 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v64[7], v64[5]), _mm_shuffle_ps(v62, v62, 0)), v64[5]);
			v67 = *(__m128**)(a1 + 1424);
			v68 = _mm_sub_ps(v67[7], v67[5]);
			v69 = _mm_mul_ps(_mm_shuffle_ps((__m128)v67->m128_u32[2], (__m128)v67->m128_u32[2], 0), v68);
			v68.m128_f32[0] = (float)(v65 * 0.5) + *(float*)(a1 + 1216);
			v70 = _mm_shuffle_ps(v68, v68, 0);
			v71 = _mm_add_ps(v69, v67[5]);
			v72 = _mm_add_ps(v70, v66);
			*(__m128*)(a1 + 208) = _mm_sub_ps(v66, v70);
			*(__m128*)(a1 + 224) = v72;
			v72.m128_f32[0] = (float)(*(float*)(*(_QWORD*)(a1 + 1424) + 8i64) * 0.5) + *(float*)(a1 + 1216);
			v73 = _mm_shuffle_ps(v72, v72, 0);
			v74 = _mm_add_ps(v73, v71);
			v75 = _mm_sub_ps(v71, v73);
			v76 = _mm_max_ps(*(__m128*)(a1 + 224), v74);
			*(__m128*)(a1 + 208) = _mm_min_ps(*(__m128*)(a1 + 208), v75);
			*(__m128*)(a1 + 224) = v76;
			v77 = *(_QWORD*)(a1 + 1256);
			if ((*(_BYTE*)(v77 + 40) & 0x40) != 0)
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 24i64) -= (int)(float)((float)((float)(*(float*)(v77 + 940)
					* *(float*)(a1 + 1484))
					+ 1.0)
					* *(float*)&v23);
				*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 24i64) -= (int)(float)((float)((float)(*(float*)(*(_QWORD*)(a1 + 1256)
					+ 944i64)
					* *(float*)(a1 + 1484))
					+ 1.0)
					* *(float*)&v23);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 24i64) -= v20;
				*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 24i64) -= v20;
			}
			sub_14031EA00(a1, *(__m128**)(a1 + 1416), v23, v57);
			sub_14031EA00(a1, *(__m128**)(a1 + 1424), v23, 1.0);
			v78 = *(_DWORD*)(a1 + 1320);
			v79 = *(_DWORD*)(a1 + 1324);
			v319.m128_i32[0] = v78;
			if (v78 < v79)
			{
				v81 = 1;
				v317[0] = v79;
			}
			else
			{
				v80 = *(_DWORD*)(a1 + 1312);
				v81 = 2;
				v319.m128_i32[1] = 0;
				v317[0] = v80;
				v317[1] = v79;
			}
			v82 = 0.0;
			v83 = *(float*)(*(_QWORD*)(a1 + 1304) + *(_DWORD*)(a1 + 1316) * v78 + 12i64);
			if (v83 <= 1.0)
			{
				if (v83 < -1.0)
					v82 = 1.0;
			}
			else
			{
				v82 = -1.0;
			}
			v84 = 0i64;
			v85 = 0;
			*(float*)(*(_QWORD*)(a1 + 1416) + 12i64) = v82 + *(float*)(*(_QWORD*)(a1 + 1416) + 12i64);
			*(float*)(*(_QWORD*)(a1 + 1424) + 12i64) = v82 + *(float*)(*(_QWORD*)(a1 + 1424) + 12i64);
			v86 = 0i64;
			v87 = v81;
			v318.m128_u64[0] = 0i64;
			v315.m128_u64[0] = v81;
			do
			{
				v88 = *(unsigned __int32*)((char*)v319.m128_u32 + v86);
				if (v88 < *(int*)((char*)v317 + v86))
				{
					v89 = v88 + 1;
					do
					{
						v90 = (__m128*)v84;
						v84 = *(_QWORD*)(a1 + 1304) + v88 * *(_DWORD*)(a1 + 1316);
						*(float*)(v84 + 12) = v82 + *(float*)(v84 + 12);
						v91 = (__m128)COERCE_UNSIGNED_INT((float)(*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64)
							- *(_DWORD*)(v84 + 24)));
						v91.m128_f32[0] = v91.m128_f32[0] / (float)*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64);
						sub_14031EA00(a1, (__m128*)v84, v23, v91.m128_f32[0]);
						if (v91.m128_f32[0] < 1.0)
						{
							sub_14031E5E0(a1, (__m128*)v84, v24);
							if (!*(_BYTE*)(*(_QWORD*)(a1 + 1256) + 4i64))
							{
								if (v90)
								{
									v96 = _mm_sub_ps(*(__m128*)(v84 + 80), v90[5]);
									*(__m128*)(v84 + 96) = v96;
									if (v85 == 1)
										v90[6] = v96;
								}
							}
							if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 104i64))
								sub_14031E6B0(a1, v95, (__int64)&v334, (__int64)&v338, v24);
							sub_140318930(
								v91.m128_f32[0],
								a1 + 768,
								a1 + 448,
								(_OWORD*)(v84 + 32),
								*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 72i64));
							v97 = *(_QWORD*)(a1 + 1256);
							if ((*(_BYTE*)(v97 + 40) & 0x20) != 0)
								sub_140318930(
									v91.m128_f32[0],
									a1 + 768,
									a1 + 608,
									(_OWORD*)(v84 + 48),
									*(unsigned __int16*)(v97 + 72));
							sub_140318840(
								v91.m128_f32[0],
								a1 + 928,
								a1 + 848,
								(float*)(v84 + 4),
								*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 440i64));
							v98 = v91;
							sub_140318840(
								v91.m128_f32[0],
								a1 + 1088,
								a1 + 1008,
								(float*)(v84 + 8),
								*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 688i64));
							v98.m128_f32[0] = *(float*)(v84 + 8);
							v99 = v98.m128_f32[0] * 0.5;
							v100 = _mm_shuffle_ps(v98, v98, 0);
							v101 = _mm_add_ps(
								_mm_mul_ps(_mm_sub_ps(*(__m128*)(v84 + 112), *(__m128*)(v84 + 80)), v100),
								*(__m128*)(v84 + 80));
							v100.m128_f32[0] = v99 + *(float*)(a1 + 1216);
							v102 = _mm_shuffle_ps(v100, v100, 0);
							v103 = _mm_max_ps(*(__m128*)(a1 + 224), _mm_add_ps(v102, v101));
							*(__m128*)(a1 + 208) = _mm_min_ps(*(__m128*)(a1 + 208), _mm_sub_ps(v101, v102));
							*(__m128*)(a1 + 224) = v103;
						}
						else
						{
							v92 = *(int**)(a1 + 1424);
							*v92 = *(_DWORD*)v84;
							v92 += 28;
							*((_OWORD*)v92 - 5) = *(_OWORD*)(v84 + 32);
							*((_OWORD*)v92 - 4) = *(_OWORD*)(v84 + 48);
							*(v92 - 27) = *(_DWORD*)(v84 + 4);
							*(v92 - 26) = *(_DWORD*)(v84 + 8);
							*(v92 - 22) = *(_DWORD*)(v84 + 24);
							*(v92 - 23) = *(_DWORD*)(v84 + 20);
							*(v92 - 25) = *(_DWORD*)(v84 + 12);
							*(v92 - 24) = *(_DWORD*)(v84 + 16);
							*((_OWORD*)v92 - 3) = *(_OWORD*)(v84 + 64);
							*((_OWORD*)v92 - 2) = *(_OWORD*)(v84 + 80);
							*((_OWORD*)v92 - 1) = *(_OWORD*)(v84 + 96);
							sub_1407DB590(v92, (int*)(v84 + 112), 16i64 * *(unsigned int*)(a1 + 1372));
							v93 = *(_DWORD*)(a1 + 1328);
							if (v93)
							{
								v94 = v89;
								if (v89 == *(_DWORD*)(a1 + 1312))
									v94 = 0;
								*(_DWORD*)(a1 + 1320) = v94;
								*(_DWORD*)(a1 + 1328) = v93 - 1;
							}
						}
						v104 = *(_QWORD*)(a1 + 1256);
						if ((*(_BYTE*)(v104 + 40) & 0x40) != 0)
							v105 = (int)(float)((float)((float)((float)((float)((float)(*(float*)(v104 + 944) - *(float*)(v104 + 940))
								* v91.m128_f32[0])
								+ *(float*)(v104 + 940))
								* *(float*)(a1 + 1484))
								+ 1.0)
								* *(float*)&v23);
						else
							v105 = LODWORD(v313);
						*(_DWORD*)(v84 + 24) -= v105;
						v86 = v318.m128_u64[0];
						++v88;
						++v85;
						++v89;
					} while (v88 < *(int*)((char*)v317 + v318.m128_u64[0]));
					v87 = v315.m128_u64[0];
				}
				v86 += 4i64;
				v315.m128_u64[0] = --v87;
				v318.m128_u64[0] = v86;
			} while (v87);
			v9 = (__m128*)v316.m128_u64[0];
			v56 = a1 + 768;
		}
	}
	v106 = _mm_max_ps(*(__m128*)(a1 + 256), *(__m128*)(a1 + 224));
	*(__m128*)(a1 + 240) = _mm_min_ps(*(__m128*)(a1 + 240), *(__m128*)(a1 + 208));
	*(__m128*)(a1 + 256) = v106;
	v107 = *(_QWORD*)(a1 + 1256);
	if (*(_BYTE*)(v107 + 4) == 4)
	{
		result = *(_QWORD*)(a1 + 40);
		if (!*(_QWORD*)(result + 1216))
			return result;
		for (m = 0;
			m < *(_DWORD*)(a1 + 1372);
			*(__m128*)(*(_QWORD*)(a1 + 1584) + 16 * v110) = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(*v111, *v111, 0), *v9),
						_mm_mul_ps(_mm_shuffle_ps(*v111, *v111, 85), v9[1])),
					_mm_mul_ps(_mm_shuffle_ps(*v111, *v111, 170), v9[2])),
				v9[3]))
		{
			v110 = m;
			v111 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 40)
				+ 1216i64)
				+ 856i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
					&v316,
					(unsigned int)dword_140AF1508[m++],
					0i64);
		}
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 1216i64) + 848i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
			31i64))
		{
			v112 = (__m128*)(*(__int64(__fastcall**)(_QWORD, __m128*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 40)
				+ 1216i64)
				+ 856i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
					&v316,
					31i64);
			v316 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(*v112, *v112, 85), v9[1]),
						_mm_mul_ps(_mm_shuffle_ps(*v112, *v112, 0), *v9)),
					_mm_mul_ps(_mm_shuffle_ps(*v112, *v112, 170), v9[2])),
				v9[3]);
		}
		else
		{
			v316 = *(__m128*) * (_QWORD*)(a1 + 1584);
		}
	}
	else
	{
		v211 = v333;
		v212 = v332;
		v213 = v331;
		v214 = 0;
		v215 = v330;
		if (*(_DWORD*)(v107 + 8))
		{
			do
			{
				v216 = 3i64 * v214;
				v217 = (__m128*)(*(_QWORD*)(a1 + 1584) + 16i64 * v214++);
				v218 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v216),
						(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v216 + 8)),
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64) + 4 * v216 + 4),
						v11));
				*v217 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v218, v218, 85), v213),
							_mm_mul_ps(_mm_shuffle_ps(v218, v218, 0), v215)),
						_mm_mul_ps(_mm_shuffle_ps(v218, v218, 170), v212)),
					v211);
			} while (v214 < *(_DWORD*)(*(_QWORD*)(a1 + 1256) + 8i64));
		}
		v219 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 1256) + 24i64),
				(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 1256) + 32i64)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(a1 + 1256) + 28i64), v11));
		v316 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v219, v219, 0), v215),
					_mm_mul_ps(_mm_shuffle_ps(v219, v219, 85), v213)),
				_mm_mul_ps(_mm_shuffle_ps(v219, v219, 170), v212)),
			v211);
	}
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
	if ((_DWORD)result)
	{
		if (!*(_BYTE*)(a1 + 401))
		{
			result = (__int64)sub_140318540(*(_QWORD*)(a1 + 8) + 80i64, a1 + 80, (_QWORD*)(a1 + 392));
			*(_BYTE*)(a1 + 401) = 1;
		}
		for (n = *(_QWORD*)(a1 + 392); n; n = *(_QWORD*)(n + 16))
			result = (**(__int64(__fastcall***)(__int64, _QWORD))n)(n, *(_QWORD*)(a1 + 48));
		v221 = *(_QWORD*)(a1 + 1256);
		if (*(_BYTE*)v221
			|| *(_BYTE*)(v221 + 4) == 4
			&& (v222 = *(_QWORD*)(a1 + 40),
				result = *(_QWORD*)(v222 + 496),
				*(float*)(96i64
					* *(unsigned __int16*)(352i64 * **(unsigned __int16**)(a1 + 8)
						+ *(_QWORD*)(*(_QWORD*)(v222 + 64) + 392i64)
						+ 6)
					+ result
					+ 48) <= 0.5)
			|| !*(_DWORD*)(a1 + 80))
		{
			*(_DWORD*)(a1 + 1348) = 0;
		}
		else
		{
			v223 = *(_DWORD*)(a1 + 1324);
			if (!v223)
				v223 = *(_DWORD*)(a1 + 1312);
			v224 = (__m128**)(a1 + 1584);
			sub_14031E170(
				a1,
				*(_QWORD*)(a1 + 1416),
				(__m128*)(*(_QWORD*)(a1 + 1304) + (unsigned int)((v223 - 1) * *(_DWORD*)(a1 + 1316))),
				a1 + 1584,
				&v316,
				*(unsigned __int16*)(v221 + 38),
				0);
			if (!*(_DWORD*)(a1 + 1348))
			{
				sub_14031E170(
					a1,
					*(_QWORD*)(a1 + 1424),
					0i64,
					v225,
					&v316,
					*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64),
					0);
				v226 = *(_QWORD*)(a1 + 1256);
				*(_DWORD*)(a1 + 1700) = 0;
				*(_DWORD*)(a1 + 1344) = *(_DWORD*)(a1 + 1336) - *(unsigned __int16*)(v226 + 2);
			}
			v227 = *(_QWORD*)(a1 + 1256);
			v228 = *(unsigned __int16*)(v227 + 2);
			if (*(_DWORD*)(a1 + 1336) - *(_DWORD*)(a1 + 1344) >= (v228 + 1) >> 1)
			{
				v229 = *(_DWORD*)(a1 + 1700);
				if (v229 < 3)
				{
					*(_DWORD*)(a1 + 1700) = v229 + 1;
				}
				else
				{
					v230 = *(_DWORD*)(a1 + 1696);
					v231 = (__m128)0x40400000u;
					v232 = (__m128)0x40400000u;
					v233 = (__m128)0x40400000u;
					v234 = *(__m128*)(*(_QWORD*)(a1 + 16 * ((v230 + 1) % 3 + 100i64)) + 16i64);
					v235 = _mm_sub_ps((*v224)[1], v234);
					v236 = _mm_mul_ps(v235, v235);
					v237 = (float)(v236.m128_f32[0] + _mm_shuffle_ps(v236, v236, 85).m128_f32[0])
						+ _mm_shuffle_ps(v236, v236, 170).m128_f32[0];
					v238 = *(__m128*)(*(_QWORD*)(a1 + 16 * (v230 % 3 + 100i64)) + 16i64);
					v239 = _mm_sub_ps(v234, v238);
					v240 = 1.0 / fsqrt(v237);
					v241 = _mm_mul_ps(v239, v239);
					v232.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v237 * v240) * v240)) * 0.5) * v240, 0.0);
					v242 = (float)(v241.m128_f32[0] + _mm_shuffle_ps(v241, v241, 85).m128_f32[0])
						+ _mm_shuffle_ps(v241, v241, 170).m128_f32[0];
					v243 = fsqrt(v242);
					v244 = _mm_mul_ps(_mm_shuffle_ps(v232, v232, 0), v235);
					v245 = _mm_sub_ps(*(__m128*)(*(_QWORD*)(a1 + 16 * ((v230 + 2) % 3 + 100i64)) + 16i64), v238);
					v246 = _mm_mul_ps(v245, v245);
					v233.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v242 * (float)(1.0 / v243)) * (float)(1.0 / v243)))
							* 0.5)
						* (float)(1.0 / v243),
						0.0);
					v247 = _mm_mul_ps(_mm_shuffle_ps(v233, v233, 0), v239);
					v248 = (float)(v246.m128_f32[0] + _mm_shuffle_ps(v246, v246, 85).m128_f32[0])
						+ _mm_shuffle_ps(v246, v246, 170).m128_f32[0];
					v249 = 1.0 / fsqrt(v248);
					v231.m128_f32[0] = 3.0 - (float)((float)(v248 * v249) * v249);
					v250 = _mm_mul_ps(v244, v244);
					v231.m128_f32[0] = fmaxf((float)(v231.m128_f32[0] * 0.5) * v249, 0.0);
					v251 = _mm_mul_ps(_mm_shuffle_ps(v231, v231, 0), v245);
					v252 = _mm_mul_ps(v247, v247);
					v253 = (float)(v252.m128_f32[0] + _mm_shuffle_ps(v252, v252, 85).m128_f32[0])
						+ _mm_shuffle_ps(v252, v252, 170).m128_f32[0];
					v254 = _mm_mul_ps(v251, v251);
					v255 = (float)(v254.m128_f32[0] + _mm_shuffle_ps(v254, v254, 85).m128_f32[0])
						+ _mm_shuffle_ps(v254, v254, 170).m128_f32[0];
					if ((float)((float)(v250.m128_f32[0] + _mm_shuffle_ps(v250, v250, 85).m128_f32[0])
						+ _mm_shuffle_ps(v250, v250, 170).m128_f32[0]) == v11.m128_f32[0]
						|| v253 == v11.m128_f32[0])
					{
						v257 = v11.m128_f32[0];
					}
					else
					{
						v256 = _mm_mul_ps(_mm_sub_ps((__m128)0i64, v247), v244);
						LODWORD(v257) = sub_1408FCCB0(
							(float)(v256.m128_f32[0] + _mm_shuffle_ps(v256, v256, 85).m128_f32[0])
							+ _mm_shuffle_ps(v256, v256, 170).m128_f32[0]).m128_u32[0];
					}
					if (v253 == v11.m128_f32[0] || v255 == v11.m128_f32[0])
					{
						v259 = v11;
					}
					else
					{
						v258 = _mm_mul_ps(v251, v247);
						v259 = sub_1408FCCB0(
							(float)(v258.m128_f32[0] + _mm_shuffle_ps(v258, v258, 85).m128_f32[0])
							+ _mm_shuffle_ps(v258, v258, 170).m128_f32[0]);
					}
					if ((*(_BYTE*)(v227 + 40) & 8) != 0)
					{
						v260 = v259.m128_f32[0] + v257;
						if (*(_BYTE*)(v227 + 4) == 4)
							v259.m128_f32[0] = v260 * 11.459156;
						else
							v259.m128_f32[0] = v260 * *(float*)&dword_140C79DE4;
						v261 = (int)v259.m128_f32[0];
						if ((int)v259.m128_f32[0] != 0x80000000 && (float)v261 != v259.m128_f32[0])
							v259.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v259, v259)) & 1) + v261);
						v262 = *(_DWORD*)(a1 + 1320);
						v263 = 10;
						if ((unsigned int)(int)v259.m128_f32[0] < 0xA)
							v263 = (int)v259.m128_f32[0];
						if ((*(_DWORD*)((unsigned int)(v262 * *(_DWORD*)(a1 + 1316)) + *(_QWORD*)(a1 + 1304) + 24i64) + v228 - 1)
							/ v228 >= 0)
							v264 = (*(_DWORD*)((unsigned int)(v262 * *(_DWORD*)(a1 + 1316)) + *(_QWORD*)(a1 + 1304) + 24i64)
								+ v228
								- 1)
							/ v228;
						else
							v264 = 0;
						v265 = *(_DWORD*)(a1 + 1312) - v264 - *(_DWORD*)(a1 + 1328) - 16;
						if (v263 > v265)
						{
							v263 = *(_DWORD*)(a1 + 1312) - v264 - *(_DWORD*)(a1 + 1328) - 16;
							if (v265 < 1)
								v263 = 1;
						}
						if ((unsigned int)v263 > 1)
						{
							v266 = *(_DWORD*)(a1 + 1328);
							if (v266)
							{
								v267 = *(_DWORD*)(a1 + 1324);
								*(_DWORD*)(a1 + 1324) = v267 - 1;
								if (!v267)
									*(_DWORD*)(a1 + 1324) = *(_DWORD*)(a1 + 1312) - 1;
								*(_DWORD*)(a1 + 1328) = v266 - 1;
							}
							v268 = *(_DWORD*)(a1 + 1696);
							v269 = v316;
							v333 = v316;
							v330 = *(__m128*)(a1 + 16 * ((v268 + 2) % 3 + 103i64));
							v270 = v330;
							v271 = *(__m128*)(a1 + 16 * ((v268 + 1) % 3 + 103i64));
							v331 = v271;
							v272 = *(__m128*)(a1 + 16 * (v268 % 3 + 103i64));
							v332 = v272;
							v273 = _mm_sub_ps(v330, v272);
							v274 = _mm_mul_ps(v273, v273);
							v275 = (float)(v274.m128_f32[0] + _mm_shuffle_ps(v274, v274, 85).m128_f32[0])
								+ _mm_shuffle_ps(v274, v274, 170).m128_f32[0];
							v276 = _mm_sub_ps(v271, v316);
							v277 = _mm_mul_ps(v276, v276);
							v278 = (float)(v277.m128_f32[0] + _mm_shuffle_ps(v277, v277, 85).m128_f32[0])
								+ _mm_shuffle_ps(v277, v277, 170).m128_f32[0];
							if (v275 >= v278)
							{
								if (v275 <= v278)
									v279 = v313;
								else
									v279 = fsqrt(v278 / v275);
							}
							else
							{
								v279 = fsqrt(v275 / v278);
							}
							v280 = *(_DWORD*)(a1 + 1324);
							if (!v280)
								v280 = *(_DWORD*)(a1 + 1312);
							v281 = 0i64;
							v282 = v330;
							v283 = 0;
							v284 = *(_DWORD*)((unsigned int)(*(_DWORD*)(a1 + 1316) * (v280 - 1)) + *(_QWORD*)(a1 + 1304) + 24i64);
							v314 = v284;
							v285 = 1.0 / (float)v263;
							while (1)
							{
								if (v275 >= v278)
								{
									if (v275 > v278)
									{
										v281.m128_f32[0] = v279;
										v330 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v270, v272), _mm_shuffle_ps(v281, v281, 0)), v272);
									}
								}
								else
								{
									v281.m128_f32[0] = v279;
									v333 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v269, v271), _mm_shuffle_ps(v281, v281, 0)), v271);
								}
								sub_1401ADF30(&v315, &v330, &v331, &v332, &v333, v285);
								v286 = _mm_sub_ps(v315, v282);
								v287 = _mm_mul_ps(v286, v286);
								v281 = _mm_shuffle_ps(v287, v287, 85);
								if ((float)((float)(v287.m128_f32[0] + v281.m128_f32[0]) + _mm_shuffle_ps(v287, v287, 170).m128_f32[0]) > 0.001)
								{
									v282 = v315;
									for (ii = 0; ii < *(_DWORD*)(a1 + 1372); *(__m128*)(*(_QWORD*)(a1 + 1568) + 8 * v297) = *v295)
									{
										v289 = *(_DWORD*)(a1 + 1696);
										v290 = *(__m128*)(*(_QWORD*)(a1 + 16 * ((v289 + 2) % 3 + 100i64)) + 16i64 * ii);
										v334 = v290;
										v291 = *(__m128*)(*(_QWORD*)(a1 + 16 * ((v289 + 1) % 3 + 100i64)) + 16i64 * ii);
										v335 = v291;
										v292 = *(__m128*)(*(_QWORD*)(a1 + 16 * (v289 % 3 + 100i64)) + 16i64 * ii);
										v293 = *v224;
										v336 = v292;
										v294 = v293[ii];
										v337 = v294;
										if (v275 >= v278)
										{
											if (v275 > v278)
											{
												v281.m128_f32[0] = v279;
												v334 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v290, v292), _mm_shuffle_ps(v281, v281, 0)), v292);
											}
										}
										else
										{
											v281.m128_f32[0] = v279;
											v337 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v294, v291), _mm_shuffle_ps(v281, v281, 0)), v291);
										}
										v295 = sub_1401ADF30(&v318, &v334, &v335, &v336, &v337, v285);
										ii = v296 + 1;
										v281 = *v295;
									}
									sub_14031E520(
										a1,
										a1 + 1568,
										&v315,
										v284 + (v283 + 1) * (*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64) - v284) / v263);
									v298 = *(_DWORD*)(a1 + 1324);
									if (!v298)
										v298 = *(_DWORD*)(a1 + 1312);
									v299 = *(_QWORD*)(a1 + 1304) + (unsigned int)(*(_DWORD*)(a1 + 1316) * (v298 - 1));
									sub_140318930(
										v11.m128_f32[0],
										v56,
										a1 + 448,
										(_OWORD*)(v299 + 32),
										*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 72i64));
									v300 = *(_QWORD*)(a1 + 1256);
									if ((*(_BYTE*)(v300 + 40) & 0x20) != 0)
										sub_140318930(
											v11.m128_f32[0],
											v56,
											a1 + 608,
											(_OWORD*)(v299 + 48),
											*(unsigned __int16*)(v300 + 72));
									sub_140318840(
										v11.m128_f32[0],
										a1 + 928,
										a1 + 848,
										(float*)(v299 + 4),
										*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 440i64));
									v281 = v11;
									sub_140318840(
										v11.m128_f32[0],
										a1 + 1088,
										a1 + 1008,
										(float*)(v299 + 8),
										*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 688i64));
									v284 = v314;
								}
								++v283;
								v285 = v285 + (float)(1.0 / (float)v263);
								if (v283 >= v263)
									break;
								v269 = v333;
								v272 = v332;
								v271 = v331;
								v270 = v330;
							}
						}
					}
				}
				if (*(_DWORD*)(a1 + 1328) == *(_DWORD*)(a1 + 1312))
				{
					v301 = (int*)(*(_QWORD*)(a1 + 1424) + 112i64);
					v302 = (int*)(*(_QWORD*)(a1 + 1304)
						+ (unsigned int)(*(_DWORD*)(a1 + 1316) * *(_DWORD*)(a1 + 1320))
						+ 112i64);
					*(v301 - 28) = *(_DWORD*)(*(_QWORD*)(a1 + 1304)
						+ (unsigned int)(*(_DWORD*)(a1 + 1316) * *(_DWORD*)(a1 + 1320)));
					*((_OWORD*)v301 - 5) = *((_OWORD*)v302 - 5);
					*((_OWORD*)v301 - 4) = *((_OWORD*)v302 - 4);
					*(v301 - 27) = *(v302 - 27);
					*(v301 - 26) = *(v302 - 26);
					*(v301 - 22) = *(v302 - 22);
					*(v301 - 23) = *(v302 - 23);
					*(v301 - 25) = *(v302 - 25);
					*(v301 - 24) = *(v302 - 24);
					*((_OWORD*)v301 - 3) = *((_OWORD*)v302 - 3);
					*((_OWORD*)v301 - 2) = *((_OWORD*)v302 - 2);
					*((_OWORD*)v301 - 1) = *((_OWORD*)v302 - 1);
					sub_1407DB590(v301, v302, 16i64 * *(unsigned int*)(a1 + 1372));
				}
				sub_14031E520(a1, a1 + 1584, &v316, *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64));
				v303 = *(_DWORD*)(a1 + 1324);
				if (!v303)
					v303 = *(_DWORD*)(a1 + 1312);
				v304 = *(_QWORD*)(a1 + 1304) + (unsigned int)(*(_DWORD*)(a1 + 1316) * (v303 - 1));
				sub_140318930(
					v11.m128_f32[0],
					v56,
					a1 + 448,
					(_OWORD*)(v304 + 32),
					*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 72i64));
				v305 = *(_QWORD*)(a1 + 1256);
				if ((*(_BYTE*)(v305 + 40) & 0x20) != 0)
					sub_140318930(v11.m128_f32[0], v56, a1 + 608, (_OWORD*)(v304 + 48), *(unsigned __int16*)(v305 + 72));
				sub_140318840(
					v11.m128_f32[0],
					a1 + 928,
					a1 + 848,
					(float*)(v304 + 4),
					*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 440i64));
				sub_140318840(
					v11.m128_f32[0],
					a1 + 1088,
					a1 + 1008,
					(float*)(v304 + 8),
					*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 688i64));
				v306 = *(_DWORD*)(a1 + 1336);
				v307 = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 2i64);
				v308 = v306 - v307;
				v309 = v307 >> 1;
				v310 = v308 - *(_DWORD*)(a1 + 1344);
				if (v309 < v310)
					v310 = v309;
				v311 = *(_DWORD*)(a1 + 1696);
				*(_DWORD*)(a1 + 1696) = v311 - 1;
				*(_DWORD*)(a1 + 1344) = v306 - v310;
				if (!v311)
					*(_DWORD*)(a1 + 1696) = 2;
				if (*(_DWORD*)(a1 + 1372))
				{
					do
					{
						v312 = v7++;
						*(__m128*)(*(_QWORD*)(a1 + 16 * (*(unsigned int*)(a1 + 1696) + 100i64)) + 16 * v312) = (*v224)[v312];
					} while (v7 < *(_DWORD*)(a1 + 1372));
				}
				*(__m128*)(a1 + 16 * (*(unsigned int*)(a1 + 1696) + 103i64)) = v316;
			}
			result = 1i64;
			*(_DWORD*)(a1 + 1348) = 1;
		}
	}
	return result;
}
// 14031F8D3: conditional instruction was optimized away because r8d.4 is in (1..2)
// 140320DB3: conditional instruction was optimized away because r14d.4>=2u
// 14031F3E4: variable 'v54' is possibly undefined
// 14031F44F: variable 'i' is possibly undefined
// 14031FA68: variable 'v95' is possibly undefined
// 14031FD8E: variable 'v116' is possibly undefined
// 14031FDB4: variable 'v118' is possibly undefined
// 14031FE1C: variable 'v119' is possibly undefined
// 1403208C0: variable 'v225' is possibly undefined
// 140320F7E: variable 'v296' is possibly undefined
// 140320F84: variable 'v297' is possibly undefined
// 140AF1508: using guessed type int dword_140AF1508[16];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C79DE4: using guessed type int dword_140C79DE4;
// 14031EE60: using guessed type char var_280[32];

