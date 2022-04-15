//----- (00000001405B5070) ----------------------------------------------------
void __fastcall sub_1405B5070(__int64 a1, unsigned int a2)
{
	float v4; // xmm12_4
	int v5; // r14d
	int v6; // r12d
	double v7; // xmm6_8
	double v8; // xmm0_8
	float v9; // xmm8_4
	double v10; // xmm0_8
	bool v11; // zf
	float v12; // xmm11_4
	float v13; // xmm9_4
	float v14; // xmm1_4
	float v15; // xmm1_4
	float v16; // xmm10_4
	int v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // esi
	__m128 v21; // xmm7
	__m128* v22; // rax
	__m128 v23; // xmm2
	__m128* v24; // rdi
	__m128 v25; // xmm6
	__m128 v26; // xmm1
	__int64 v27; // rcx
	__int64 v28; // r10
	__m128 v29; // xmm0
	int v30; // eax
	__int64 v31; // rcx
	int v32; // edx
	__m128 v33; // xmm6
	__m128 v34; // xmm2
	float v35; // xmm2_4
	__int64 v36; // rax
	__int64 v37; // rax
	float v38; // xmm3_4
	float v39; // xmm2_4
	int v40; // xmm4_4
	float v41; // xmm1_4
	float v42; // xmm2_4
	__m128* v43; // rax
	int v44; // r13d
	_DWORD* v45; // rsi
	float v46; // xmm6_4
	int v47; // edi
	int v48; // eax
	__m128 v49; // xmm5
	__m128 v50; // xmm9
	__m128 v51; // xmm0
	__m128 v52; // xmm8
	float v53; // xmm1_4
	int v54; // ecx
	float v55; // xmm13_4
	int v56; // ecx
	float v57; // xmm8_4
	float v58; // xmm7_4
	float* v59; // rax
	__int64 v60; // rax
	__m128 v61; // xmm2
	__m128* v62; // rax
	__m128 v63; // xmm2
	__m128 v64; // xmm3
	float v65; // xmm3_4
	__m128 v66; // xmm1
	__m128 v67; // xmm0
	_DWORD* v68; // rax
	__m128 v69; // xmm3
	__m128 v70; // xmm9
	__m128 v71; // xmm0
	__m128 v72; // xmm8
	float v73; // xmm2_4
	int v74; // ecx
	float v75; // xmm13_4
	int v76; // ecx
	float v77; // xmm8_4
	float v78; // xmm7_4
	float* v79; // rax
	unsigned __int32 v80; // xmm0_4
	float v81; // xmm13_4
	__m128 v82; // xmm13
	float v83; // xmm1_4
	int v84; // ecx
	__m128 v85; // xmm10
	double v86; // xmm6_8
	float v87; // xmm7_4
	float v88; // xmm0_4
	__m128 v89; // xmm5
	__m128 v90; // xmm0
	__m128 v91; // xmm3
	__m128 v92; // xmm4
	__int64 v93; // rcx
	__int64 v94; // rcx
	double v95; // xmm7_8
	double v96; // xmm6_8
	double v97; // xmm8_8
	float v98; // xmm0_4
	float v99; // xmm10_4
	float v100; // xmm3_4
	float v101; // xmm6_4
	float v102; // xmm4_4
	float v103; // xmm9_4
	float v104; // xmm5_4
	float v105; // xmm7_4
	float v106; // xmm0_4
	float v107; // xmm6_4
	float v108; // xmm11_4
	float v109; // xmm1_4
	__m128 v110; // xmm2
	__m128 v111; // xmm3
	__m128 v112; // xmm2
	__m128 v113; // xmm1
	__m128 v114; // xmm4
	__m128 v115; // xmm1
	unsigned int v116; // edx
	unsigned int v117; // r15d
	int v118; // ecx
	float v119; // xmm7_4
	float v120; // xmm0_4
	__int64 v121; // rax
	float v122; // xmm8_4
	float v123; // xmm0_4
	float v124; // xmm8_4
	float v125; // xmm8_4
	__m128 v126; // xmm1
	__m128 v127; // xmm4
	__m128 v128; // xmm2
	__m128 v129; // xmm2
	__m128 v130; // xmm0
	__m128 v131; // xmm1
	__m128 v132; // xmm2
	__m128 v133; // xmm0
	__m128 v134; // xmm0
	__m128 v135; // xmm6
	__m128* v136; // r15
	_OWORD* v137; // rdx
	__m128 v138; // xmm6
	__m128 v139; // xmm0
	__m128 v140; // xmm7
	__int64 v141; // rax
	__m128 v142; // xmm1
	__m128 v143; // xmm1
	__m128 v144; // xmm1
	__m128 v145; // xmm3
	__m128 v146; // xmm2
	float v147; // xmm0_4
	__int64 v148; // rax
	__m128* v149; // rsi
	__m128i v150; // xmm1
	__m128i v151; // xmm1
	__m128i v152; // xmm1
	__m128 v153; // xmm0
	__m128i v154; // xmm1
	__m128 v155; // xmm2
	__m128 v156; // xmm7
	float v157; // xmm6_4
	int v158; // esi
	__m128* v159; // rax
	__m128 v160; // xmm3
	__m128 v161; // xmm2
	__m128 v162; // xmm0
	float v163; // xmm2_4
	__m128 v164; // xmm3
	__m128 v165; // xmm2
	__m128 v166; // xmm8
	int v167; // eax
	double v168; // xmm9_8
	__int64 v169; // rax
	unsigned int v170; // xmm0_4
	float v171; // xmm0_4
	__m128 v172; // xmm1
	__m128 v173; // xmm12
	__m128 v174; // xmm1
	float v175; // xmm2_4
	__m128 v176; // xmm1
	float v177; // xmm0_4
	__m128 v178; // xmm2
	bool v179; // cf
	__m128 v180; // xmm1
	__m128 v181; // xmm1
	BOOL v182; // r12d
	float v183; // xmm1_4
	__m128 v184; // xmm2
	__m128 v185; // xmm2
	float* v186; // rax
	float v187; // xmm0_4
	float v188; // xmm1_4
	int v189; // ecx
	int v190; // eax
	__m128 v191; // xmm10
	float v192; // xmm10_4
	float v193; // xmm11_4
	double v194; // xmm6_8
	float v195; // xmm11_4
	float v196; // xmm10_4
	float v197; // xmm7_4
	float v198; // xmm0_4
	float v199; // xmm9_4
	float v200; // xmm5_4
	float v201; // xmm1_4
	float v202; // xmm0_4
	float v203; // xmm10_4
	float v204; // xmm2_4
	float v205; // xmm9_4
	float v206; // xmm7_4
	float v207; // xmm3_4
	float v208; // xmm11_4
	float v209; // xmm4_4
	float v210; // xmm8_4
	__m128 v211; // xmm7
	__m128 v212; // xmm8
	__m128 v213; // xmm6
	double v214; // xmm0_8
	__m128 v215; // xmm8
	__m128 v216; // xmm1
	float v217; // xmm2_4
	float v218; // xmm0_4
	__m128 v219; // xmm12
	__m128i v220; // xmm2
	__m128i v221; // xmm7
	__m128 v222; // xmm3
	__m128 v223; // xmm1
	__m128 v224; // xmm4
	__m128 v225; // xmm1
	float v226; // xmm2_4
	float v227; // xmm0_4
	__m128 v228; // xmm12
	__m128i v229; // xmm3
	__m128i v230; // xmm3
	int* v231; // rax
	float v232; // xmm1_4
	float v233; // xmm0_4
	__m128 v234; // xmm2
	__m128 v235; // xmm2
	__m128 v236; // xmm0
	float v237; // xmm1_4
	__m128 v238; // xmm0
	__m128 v239; // xmm8
	float v240; // xmm1_4
	int v241; // ecx
	int v242; // eax
	double v243; // xmm6_8
	float v244; // xmm7_4
	float v245; // xmm0_4
	float v246; // xmm3_4
	float v247; // xmm2_4
	float v248; // xmm4_4
	float v249; // xmm5_4
	float v250; // xmm1_4
	int v251; // ecx
	float v252; // xmm2_4
	float v253; // xmm1_4
	int v254; // ecx
	float v255; // xmm3_4
	float v256; // xmm2_4
	__m128 v257; // xmm1
	float v258; // xmm2_4
	int v259; // ecx
	__int64 v260; // xmm6_8
	float v261; // xmm11_4
	double v262; // xmm6_8
	float v263; // xmm0_4
	float* v264; // rax
	__m128 v265; // xmm0
	unsigned int* v266; // r11
	__int128 v267; // xmm14
	__int128 v268; // xmm13
	__int128 v269; // xmm12
	double v270; // xmm6_8
	double v271; // xmm8_8
	double v272; // xmm7_8
	float v273; // xmm10_4
	float v274; // xmm9_4
	float v275; // xmm4_4
	float v276; // xmm3_4
	float v277; // xmm2_4
	float v278; // xmm11_4
	float v279; // xmm5_4
	float v280; // xmm10_4
	__m128 v281; // xmm3
	__m128 v282; // xmm2
	__m128 v283; // xmm0
	int v284; // eax
	__m128 v285; // xmm5
	__m128 v286; // xmm1
	float v287; // xmm2_4
	__m128 v288; // xmm1
	float v289; // xmm0_4
	__m128i v290; // xmm1
	__m128 v291; // xmm3
	__m128 v292; // xmm2
	__m128 v293; // xmm0
	__m128 v294; // xmm3
	__m128 v295; // xmm1
	__m128i v296; // xmm5
	__m128i v297; // xmm2
	__m128 v298; // xmm1
	__m128 v299; // xmm7
	__m128 v300; // xmm7
	int v301; // eax
	double v302; // xmm6_8
	float v303; // xmm7_4
	float v304; // xmm0_4
	float v305; // xmm3_4
	float v306; // xmm2_4
	float v307; // xmm4_4
	float v308; // xmm5_4
	float v309; // xmm4_4
	__m128 v310; // xmm4
	__m128 v311; // xmm5
	__m128 v312; // xmm2
	float v313; // xmm3_4
	float v314; // xmm1_4
	__m128i v315; // xmm4
	float* v316; // rax
	float v317; // xmm1_4
	float v318; // xmm0_4
	float v319; // xmm6_4
	float v320; // xmm0_4
	__int64 v321; // rcx
	__m128 v322; // xmm3
	__m128 v323; // xmm4
	__m128 v324; // xmm5
	__m128 v325; // xmm1
	float v326; // xmm0_4
	float v327; // xmm5_4
	float v328; // xmm4_4
	float v329; // xmm0_4
	__m128 v330; // xmm8
	__m128 v331; // xmm8
	float v332; // xmm8_4
	int v333; // eax
	int v334; // eax
	float v335; // xmm1_4
	float v336; // xmm7_4
	float v337; // xmm6_4
	float v338; // xmm0_4
	__int64 v339; // rsi
	float v340; // xmm7_4
	float v341; // xmm6_4
	float v342; // xmm0_4
	unsigned int v343; // [rsp+38h] [rbp-D0h] BYREF
	float v344; // [rsp+3Ch] [rbp-CCh]
	unsigned int v345; // [rsp+40h] [rbp-C8h]
	__m128 v346; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v347; // [rsp+58h] [rbp-B0h]
	float v348; // [rsp+68h] [rbp-A0h]
	__m128 v349; // [rsp+78h] [rbp-90h] BYREF
	float v350; // [rsp+88h] [rbp-80h]
	int v351; // [rsp+8Ch] [rbp-7Ch]
	float v352; // [rsp+90h] [rbp-78h]
	float v353; // [rsp+94h] [rbp-74h]
	float v354; // [rsp+98h] [rbp-70h]
	float v355; // [rsp+9Ch] [rbp-6Ch]
	__m128 v356; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v357; // [rsp+B8h] [rbp-50h]
	__m128 v358; // [rsp+C8h] [rbp-40h]
	__m128 v359; // [rsp+D8h] [rbp-30h]
	__m128 v360; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v361; // [rsp+F8h] [rbp-10h]
	__m128 v362; // [rsp+108h] [rbp+0h]
	__m128 v363; // [rsp+128h] [rbp+20h] BYREF
	__int128 v364[2]; // [rsp+138h] [rbp+30h] BYREF
	__m128 v365; // [rsp+158h] [rbp+50h]
	__m128 v366; // [rsp+168h] [rbp+60h]
	float v367; // [rsp+178h] [rbp+70h] BYREF
	float v368; // [rsp+17Ch] [rbp+74h]
	float v369; // [rsp+180h] [rbp+78h]
	float v370; // [rsp+184h] [rbp+7Ch]
	__m128 v371; // [rsp+188h] [rbp+80h] BYREF
	__m128 v372; // [rsp+198h] [rbp+90h]
	__m128 v373; // [rsp+1A8h] [rbp+A0h]
	__m128 v374; // [rsp+1B8h] [rbp+B0h]
	char v375[64]; // [rsp+1C8h] [rbp+C0h] BYREF
	__m128 v376; // [rsp+208h] [rbp+100h] BYREF
	__m128 v377; // [rsp+218h] [rbp+110h] BYREF
	__m128 v378; // [rsp+228h] [rbp+120h]
	__m128 v379; // [rsp+238h] [rbp+130h]
	__int128 v380; // [rsp+248h] [rbp+140h]
	__int128 v381[6]; // [rsp+258h] [rbp+150h] BYREF
	int v382; // [rsp+2B8h] [rbp+1B0h]
	int v383; // [rsp+2BCh] [rbp+1B4h]
	int v384; // [rsp+2C0h] [rbp+1B8h]
	__m128 v385; // [rsp+2C8h] [rbp+1C0h] BYREF
	__int128 v386; // [rsp+2D8h] [rbp+1D0h]
	__m128 v387; // [rsp+2E8h] [rbp+1E0h]
	__m128 v388; // [rsp+2F8h] [rbp+1F0h]
	__m128* v389; // [rsp+308h] [rbp+200h] BYREF
	__m128* v390; // [rsp+310h] [rbp+208h]
	__m128 v391[4]; // [rsp+318h] [rbp+210h] BYREF
	__m128* v392; // [rsp+358h] [rbp+250h] BYREF
	__m128* v393; // [rsp+360h] [rbp+258h]
	__m128 v394[4]; // [rsp+368h] [rbp+260h] BYREF

	v350 = (float)(int)(a2 - *(_DWORD*)(a1 + 4908)) * 0.001;
	v4 = v350;
	if (v350 <= 0.0000099999997)
		v354 = 0.0;
	else
		v354 = 1.0 / v350;
	*(_DWORD*)(a1 + 4908) = a2;
	sub_1407137C0(a1 + 4232, a1, a2);
	v5 = *(_DWORD*)(a1 + 4232);
	v6 = 1;
	if (*(_DWORD*)(a1 + 4912))
	{
		HIDWORD(v7) = 0;
		*(float*)&v7 = v4 * -0.69314718;
		HIDWORD(v8) = 0;
		if (v5 == 1)
			*(float*)&v8 = *(float*)&v7 * 8.0;
		else
			*(float*)&v8 = *(float*)&v7 * 32.0;
		v9 = sub_1408FC7F0(v8);
		HIDWORD(v10) = 0;
		*(float*)&v10 = *(float*)&v7 * 4.0;
		v353 = v9;
		*(float*)&v10 = sub_1408FC7F0(v10);
		v11 = *(_DWORD*)(a1 + 6176) == 0;
		v12 = v4;
		v355 = *(float*)&v10;
		if (!v11)
		{
			v13 = v9;
			if ((unsigned int)(*(_DWORD*)(a1 + 4992) - 2) > 1)
				goto LABEL_16;
			v14 = *(float*)(a1 + 4928);
			if (v14 <= 1.0)
				goto LABEL_16;
			if (v5 == 1)
				v14 = v14 * 4.0;
			v15 = v14 * 0.03125;
			if (v15 > 0.0000099999997)
			{
				*(float*)&v7 = *(float*)&v7 / v15;
				sub_1408FC7F0(v7);
				v16 = v9;
				v13 = *(float*)&v7;
				goto LABEL_18;
			}
		}
		v13 = 0.0;
	LABEL_16:
		v16 = v9;
		goto LABEL_18;
	}
	v12 = 0.0;
	v353 = 0.0;
	v16 = 0.0;
	*(_DWORD*)(a1 + 4912) = 1;
	v355 = 0.0;
	v13 = 0.0;
LABEL_18:
	v17 = *(_DWORD*)(a1 + 128);
	v351 = 0;
	v352 = 0.0;
	*(_DWORD*)(a1 + 4924) = 0;
	switch (v17)
	{
	case 0:
	case 3:
	case 5:
	case 6:
	case 7:
	case 20:
	case 23:
	case 24:
	case 25:
		v351 = 1;
		if ((v5 & 0xFFFFFFFD) != 0
			|| sub_14047BF00(a1)
			|| (LOBYTE(v18) = sub_14047C0E0((_QWORD*)a1), v11 = v18 == 0, v19 = 1, !v11))
		{
			v19 = 0;
		}
		*(_DWORD*)(a1 + 4924) = v19;
		break;
	case 9:
		v351 = 1;
		LODWORD(v352) = (v5 & 0xFFFFFFFD) == 0;
		break;
	case 27:
		v351 = 1;
		*(_DWORD*)(a1 + 4924) = 1;
		break;
	case 33:
		v351 = 0;
		*(_DWORD*)(a1 + 4924) = 0;
		break;
	default:
		break;
	}
	if (*(_DWORD*)(a1 + 3872))
		sub_1407137C0(a1 + 4208, a1, a2);
	v20 = *(_DWORD*)(a1 + 4208);
	if (*(_DWORD*)(a1 + 3872))
		sub_140714120((__m128*)(a1 + 3936), a1, a2);
	v22 = *(__m128**)(a1 + 3840);
	v347 = *(__m128*)(a1 + 3936);
	v21 = v347;
	v23 = v347;
	if (v22)
		v23 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v347, v347, 85), v22[284]),
					_mm_mul_ps(_mm_shuffle_ps(v347, v347, 0), v22[283])),
				_mm_mul_ps(_mm_shuffle_ps(v347, v347, 170), v22[285])),
			v22[286]);
	v24 = (__m128*)(a1 + 5952);
	v25 = *(__m128*)(a1 + 5952);
	v26 = _mm_max_ps((__m128)xmmword_140C7E010, _mm_min_ps(v23, (__m128)xmmword_140C7E020));
	v349 = v26;
	if (v22 && !v22[366].m128_u64[1])
		goto LABEL_77;
	v27 = *(_QWORD*)(a1 + 5872);
	v28 = *(_QWORD*)(qword_140C65898 + 29256);
	if (!v27)
		v27 = *(_QWORD*)(a1 + 5880);
	v29 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_140C77870, (__m128)xmmword_140B7B2F0), v26);
	v346 = v29;
	v30 = (*(__int64(__fastcall**)(__int64, __m128*, __int64, __int64, __int64))(*(_QWORD*)v28 + 440i64))(
		v28,
		&v346,
		a1 + 5952,
		1073766643i64,
		v27);
	*(_DWORD*)(a1 + 6176) = v30;
	if (!v30)
	{
	LABEL_77:
		*v24 = (__m128)xmmword_140C77870;
		*(_DWORD*)(a1 + 4900) = 0;
		goto LABEL_78;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
	{
		v31 = *(_QWORD*)(a1 + 184);
		if (v31)
		{
			if ((v32 = *(_DWORD*)(v31 + 4), ((v32 - 4) & 0xFFFFFFFC) == 0) && v32 != 5
				|| (*(_DWORD*)(v31 + 96) & 0x80000) != 0)
			{
				v29 = (__m128) * (unsigned int*)(a1 + 5984);
				if (v29.m128_f32[0] < *(float*)(a1 + 6096))
				{
					v29 = *(__m128*)(a1 + 6016);
					*v24 = v29;
					*(_DWORD*)(a1 + 5984) = *(_DWORD*)(a1 + 6096);
				}
			}
		}
	}
	if (v13 != 0.0)
	{
		if ((v20 & 0x100) != 0 || (v20 & 0x400) != 0)
		{
			v29.m128_f32[0] = v13;
			v33 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v25, *v24), _mm_shuffle_ps(v29, v29, 0)), *v24);
		}
		else
		{
			v29.m128_f32[0] = v12;
			v33 = _mm_add_ps(
				_mm_mul_ps(_mm_sub_ps(v25, (__m128)xmmword_140C77870), _mm_shuffle_ps(v29, v29, 0)),
				(__m128)xmmword_140C77870);
		}
		v34 = _mm_mul_ps(v33, v33);
		v34.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0])
				+ _mm_shuffle_ps(v34, v34, 170).m128_f32[0]);
		*v24 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v33);
	}
	if (!*(_DWORD*)(a1 + 3416)
		|| *(_DWORD*)(qword_140C65898 + 31560) != 127
		|| sub_14047BB50(a1)
		|| (*(_DWORD*)(a1 + 8) & 0xC0000000) == 0x40000000 && *(_QWORD*)(qword_140C65898 + 29080) && v5 == 3)
	{
		*(_DWORD*)(a1 + 4900) = 0;
	LABEL_76:
		v347 = v21;
		*(__m128*)(a1 + 3952) = v21;
		goto LABEL_78;
	}
	if (v5 != 1)
	{
		if (v5 == 2)
		{
			v37 = *(_QWORD*)(a1 + 3336);
			if (v37)
			{
				v35 = *(float*)(v37 + 336);
				goto LABEL_66;
			}
		}
		else
		{
			if (v5 != 3)
			{
				v35 = 0.0;
				goto LABEL_66;
			}
			v36 = *(_QWORD*)(a1 + 3336);
			if (v36)
			{
				v35 = *(float*)(v36 + 340);
				goto LABEL_66;
			}
		}
	}
	v35 = 1.0;
LABEL_66:
	v38 = v349.m128_f32[1];
	v39 = (float)(v35 + *(float*)(a1 + 5984)) - v349.m128_f32[1];
	if (v39 > *(float*)(a1 + 4900))
		*(float*)(a1 + 4900) = v39;
	if ((v20 & 0x100) != 0)
		v40 = -1073741824;
	else
		v40 = 0;
	v41 = fmaxf(v39, *(float*)&v40);
	v42 = (float)((float)(*(float*)(a1 + 4900) - v41) * v16) + v41;
	*(float*)(a1 + 4900) = v42;
	if (fabs(v42) <= 0.0000099999997)
		goto LABEL_76;
	v43 = *(__m128**)(a1 + 3840);
	v349.m128_f32[1] = v38 + v42;
	if (v43)
	{
		v347 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v349, v349, 85), v43[288]),
					_mm_mul_ps(_mm_shuffle_ps(v349, v349, 0), v43[287])),
				_mm_mul_ps(_mm_shuffle_ps(v349, v349, 170), v43[289])),
			v43[290]);
		*(__m128*)(a1 + 3952) = v347;
	}
	else
	{
		v347 = v349;
		*(__m128*)(a1 + 3952) = v349;
	}
LABEL_78:
	if (*(_DWORD*)(a1 + 3872))
	{
		sub_140714DC0((__m128*)(a1 + 4080), a1, a2);
		if (*(_DWORD*)(a1 + 3872))
		{
			sub_140714DC0((__m128*)(a1 + 4144), a1, a2);
			if (*(_DWORD*)(a1 + 3872))
				sub_1407137C0(a1 + 4208, a1, a2);
		}
	}
	v11 = *(_DWORD*)(a1 + 3872) == 0;
	v44 = *(_DWORD*)(a1 + 4208);
	v45 = (_DWORD*)(a1 + 4352);
	v46 = *(float*)(a1 + 4352);
	v348 = v46;
	if (!v11)
		sub_140715A90(a1 + 4256, a1, a2);
	*v45 = *(_DWORD*)(a1 + 4256);
	v47 = 2;
	*(_DWORD*)(a1 + 4356) = *(_DWORD*)(a1 + 4260);
	*(_DWORD*)(a1 + 4360) = *(_DWORD*)(a1 + 4264);
	v48 = *(_DWORD*)(a1 + 3824);
	if (v48)
	{
		if (v48 == 3)
		{
			v52 = (__m128) * (unsigned int*)(a1 + 3828);
			v50 = (__m128) * (unsigned int*)(a1 + 3836);
			v49 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 4356), (__m128) * (unsigned int*)(a1 + 4360)),
				_mm_unpacklo_ps((__m128)(unsigned int) * v45, (__m128)0i64));
			v50.m128_f32[0] = (float)((float)(v50.m128_f32[0] - _mm_shuffle_ps(v49, v49, 170).m128_f32[0]) + 3.1415927)
				* 0.15915494;
			v51 = (__m128)0xBFC90FDB;
			v51.m128_f32[0] = fmaxf(-1.5707964, fminf(*(float*)(a1 + 3832) - v49.m128_f32[0], 1.5707964));
			v346 = v51;
			v52.m128_f32[0] = (float)((float)(v52.m128_f32[0] - _mm_shuffle_ps(v49, v49, 85).m128_f32[0]) + 3.1415927)
				* 0.15915494;
			v53 = v52.m128_f32[0];
			v54 = (int)v52.m128_f32[0];
			if ((int)v52.m128_f32[0] != 0x80000000 && (float)v54 != v52.m128_f32[0])
				v53 = (float)(v54 - (_mm_movemask_ps(_mm_unpacklo_ps(v52, v52)) & 1));
			v55 = v50.m128_f32[0];
			v56 = (int)v50.m128_f32[0];
			v57 = (float)((float)(v52.m128_f32[0] - v53) * 6.2831855) - 3.1415927;
			if ((int)v50.m128_f32[0] != 0x80000000 && (float)v56 != v50.m128_f32[0])
				v55 = (float)(v56 - (_mm_movemask_ps(_mm_unpacklo_ps(v50, v50)) & 1));
			v58 = fmaxf(
				0.0,
				fminf(
					(float)(v4 * 6.2831855)
					/ fmaxf(
						fmaxf(fabs(v57), fabs(v346.m128_f32[0])),
						fmaxf(0.0000099999997, fabs((float)((float)(v50.m128_f32[0] - v55) * 6.2831855) - 3.1415927))),
					1.0));
			v59 = sub_1401B3250((float*)&v343, (float*)(a1 + 3828), (float*)(a1 + 4352), v58);
			v46 = v348;
			*v45 = *(_DWORD*)v59;
			*(float*)(a1 + 4356) = v59[1];
			*(float*)(a1 + 4360) = v59[2];
			if (v58 >= 1.0)
				*(_DWORD*)(a1 + 3824) = 0;
		}
		else
		{
			v60 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 3748));
			if (v60)
			{
				v61 = *(__m128*)(v60 + 4576);
				v62 = *(__m128**)(a1 + 3840);
				if (v62)
					v61 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v61, v61, 85), v62[288]),
								_mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v62[287])),
							_mm_mul_ps(_mm_shuffle_ps(v61, v61, 170), v62[289])),
						v62[290]);
				v63 = _mm_sub_ps(v61, *(__m128*)(a1 + 3952));
				v64 = _mm_mul_ps(v63, v63);
				v65 = (float)(v64.m128_f32[0] + _mm_shuffle_ps(v64, v64, 85).m128_f32[0])
					+ _mm_shuffle_ps(v64, v64, 170).m128_f32[0];
				if (v65 >= *(float*)&dword_140C4A548)
				{
					v66 = 0i64;
					v66.m128_f32[0] = 1.0 / fsqrt(v65);
					v67 = v66;
					v67.m128_f32[0] = (float)((float)((float)(v66.m128_f32[0] * v65) * v66.m128_f32[0]) - 3.0)
						* (float)(v66.m128_f32[0] * -0.5);
					v346 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v63);
					if (*(_DWORD*)(a1 + 3824) == 2)
					{
						v68 = (_DWORD*)sub_1401B3170((__int64)&v343, v346.m128_f32);
						*v45 = *v68;
						*(_DWORD*)(a1 + 4356) = v68[1];
						*(_DWORD*)(a1 + 4360) = v68[2];
					}
					else
					{
						sub_1401B3170((__int64)&v343, v346.m128_f32);
						v72 = (__m128)v343;
						v70 = (__m128)v345;
						v69 = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 3832), (__m128) * (unsigned int*)(a1 + 3836)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 3828), (__m128)0i64));
						v70.m128_f32[0] = (float)((float)(*(float*)&v345 - _mm_shuffle_ps(v69, v69, 170).m128_f32[0]) + 3.1415927)
							* 0.15915494;
						v71 = (__m128)0xBFC90FDB;
						v71.m128_f32[0] = fmaxf(-1.5707964, fminf(v344 - v69.m128_f32[0], 1.5707964));
						v346 = v71;
						v72.m128_f32[0] = (float)((float)(*(float*)&v343 - _mm_shuffle_ps(v69, v69, 85).m128_f32[0]) + 3.1415927)
							* 0.15915494;
						v73 = v72.m128_f32[0];
						v74 = (int)v72.m128_f32[0];
						if ((int)v72.m128_f32[0] != 0x80000000 && (float)v74 != v72.m128_f32[0])
							v73 = (float)(v74 - (_mm_movemask_ps(_mm_unpacklo_ps(v72, v72)) & 1));
						v75 = v70.m128_f32[0];
						v76 = (int)v70.m128_f32[0];
						v77 = (float)((float)(v72.m128_f32[0] - v73) * 6.2831855) - 3.1415927;
						if ((int)v70.m128_f32[0] != 0x80000000 && (float)v76 != v70.m128_f32[0])
							v75 = (float)(v76 - (_mm_movemask_ps(_mm_unpacklo_ps(v70, v70)) & 1));
						v78 = fmaxf(
							0.0,
							fminf(
								(float)(v4 * 6.2831855)
								/ fmaxf(
									fmaxf(fabs(v77), fabs(v346.m128_f32[0])),
									fmaxf(0.0000099999997, fabs((float)((float)(v70.m128_f32[0] - v75) * 6.2831855) - 3.1415927))),
								1.0));
						v79 = sub_1401B3250(v349.m128_f32, (float*)(a1 + 3828), (float*)&v343, v78);
						v46 = v348;
						*v45 = *(_DWORD*)v79;
						*(float*)(a1 + 4356) = v79[1];
						*(float*)(a1 + 4360) = v79[2];
						if (v78 >= 1.0)
							*(_DWORD*)(a1 + 3824) = 2;
					}
				}
			}
		}
		*(_DWORD*)(a1 + 3828) = *v45;
		*(_DWORD*)(a1 + 3832) = *(_DWORD*)(a1 + 4356);
		*(_DWORD*)(a1 + 3836) = *(_DWORD*)(a1 + 4360);
	}
	v80 = sub_1403B50C0((__m128*)a1).m128_u32[0];
	v11 = *(_DWORD*)(a1 + 3876) == 0;
	*(_DWORD*)(a1 + 3720) = v80;
	if (v11)
	{
		v82 = (__m128)(unsigned int) * v45;
		v82.m128_f32[0] = (float)((float)(v82.m128_f32[0] - v46) + 3.1415927) * 0.15915494;
		v83 = v82.m128_f32[0];
		v84 = (int)v82.m128_f32[0];
		if ((int)v82.m128_f32[0] != 0x80000000 && (float)v84 != v82.m128_f32[0])
			v83 = (float)(v84 - (_mm_movemask_ps(_mm_unpacklo_ps(v82, v82)) & 1));
		v81 = (float)((float)(v82.m128_f32[0] - v83) * 6.2831855) - 3.1415927;
	}
	else
	{
		v81 = 0.0;
	}
	v11 = *(_DWORD*)(a1 + 4924) == 0;
	v85 = (__m128)0x80000000;
	v348 = v81;
	if (v11)
	{
		if (v352 != 0.0
			&& (v93 = *(_QWORD*)(a1 + 4296)) != 0
			&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v93 + 8i64))(v93) == 20
			&& (v94 = *(_QWORD*)(a1 + 184)) != 0
			&& *(_DWORD*)(v94 + 4) == 5)
		{
			*(_QWORD*)&v95 = *(unsigned int*)(a1 + 4356);
			*(_QWORD*)&v96 = *(unsigned int*)(a1 + 4360);
			*(float*)&v95 = *(float*)&v95 * 0.5;
			*(float*)&v96 = *(float*)&v96 * 0.5;
		}
		else
		{
			*(_QWORD*)&v95 = *(unsigned int*)(a1 + 4356);
			*(_QWORD*)&v96 = *(unsigned int*)(a1 + 4360);
		}
		*(_QWORD*)&v97 = (unsigned int)*v45;
		*(float*)&v96 = *(float*)&v96 * 0.5;
		sub_1408FE3D0(v96);
		sub_1408FC950(v96);
		*(float*)&v95 = *(float*)&v95 * 0.5;
		sub_1408FE3D0(v95);
		sub_1408FC950(v95);
		*(float*)&v97 = *(float*)&v97 * 0.5;
		sub_1408FE3D0(v97);
		v98 = sub_1408FC950(v97);
		v349.m128_f32[0] = (float)(*(float*)&v96 * (float)(v98 * *(float*)&v95))
			+ (float)(*(float*)&v96 * (float)(*(float*)&v97 * *(float*)&v95));
		v349.m128_f32[1] = (float)(*(float*)&v96 * (float)(*(float*)&v97 * *(float*)&v95))
			- (float)(*(float*)&v96 * (float)(v98 * *(float*)&v95));
		v349.m128_f32[2] = (float)(*(float*)&v96 * (float)(v98 * *(float*)&v95))
			- (float)(*(float*)&v96 * (float)(*(float*)&v97 * *(float*)&v95));
		v349.m128_f32[3] = (float)(*(float*)&v96 * (float)(*(float*)&v97 * *(float*)&v95))
			+ (float)(*(float*)&v96 * (float)(v98 * *(float*)&v95));
		v99 = _mm_shuffle_ps(v349, v349, 85).m128_f32[0];
		*(float*)&v97 = _mm_shuffle_ps(v349, v349, 170).m128_f32[0];
		v100 = *(float*)&v97 * 2.0;
		v101 = _mm_shuffle_ps(v349, v349, 255).m128_f32[0];
		v102 = v349.m128_f32[0] * (float)(v349.m128_f32[0] * 2.0);
		v103 = v101 * (float)(v349.m128_f32[0] * 2.0);
		v104 = v99 * (float)(v99 * 2.0);
		*(float*)&v97 = *(float*)&v97 * (float)(*(float*)&v97 * 2.0);
		v105 = v101 * (float)(v99 * 2.0);
		v376.m128_f32[0] = (float)(1.0 - v104) - *(float*)&v97;
		v4 = v350;
		v106 = v349.m128_f32[0] * (float)(v99 * 2.0);
		v107 = v101 * v100;
		v108 = (float)(v349.m128_f32[0] * v100) + v105;
		v378.m128_i32[3] = 0;
		v376.m128_i32[3] = 0;
		v376.m128_f32[2] = (float)(v349.m128_f32[0] * v100) - v105;
		v109 = v99 * v100;
		v377.m128_f32[0] = v106 - v107;
		v376.m128_f32[1] = v106 + v107;
		v91 = v376;
		v364[0] = (__int128)v376;
		v378.m128_f32[1] = v109 - v103;
		v85 = (__m128)0x80000000;
		v378.m128_f32[0] = v108;
		v377.m128_f32[1] = (float)(1.0 - v102) - *(float*)&v97;
		v378.m128_f32[2] = (float)(1.0 - v102) - v104;
		v92 = v378;
		v90 = (__m128)xmmword_140B7AD00;
		v365 = v378;
		v377.m128_u64[1] = COERCE_UNSIGNED_INT(v109 + v103);
		v89 = v377;
	}
	else
	{
		*(_QWORD*)&v86 = (unsigned int)*v45;
		v87 = sub_1408FE3D0(v86);
		v88 = sub_1408FC950(v86);
		v89 = (__m128)xmmword_140B7A4B0;
		v365.m128_u64[0] = LODWORD(v87);
		*(_QWORD*)&v364[0] = LODWORD(v88);
		v365.m128_u64[1] = LODWORD(v88);
		v90 = (__m128)xmmword_140C78440;
		*((_QWORD*)&v364[0] + 1) = COERCE_UNSIGNED_INT(-v87);
		v91 = (__m128)v364[0];
		v92 = v365;
	}
	v11 = *(_DWORD*)(a1 + 3872) == 0;
	v366 = v90;
	v110 = v91;
	v111 = _mm_unpackhi_ps(v91, v89);
	v112 = _mm_unpacklo_ps(v110, v89);
	v113 = v92;
	v364[1] = (__int128)v89;
	v114 = _mm_unpackhi_ps(v92, v90);
	v115 = _mm_unpacklo_ps(v113, v90);
	v371 = _mm_shuffle_ps(v112, v115, 68);
	v372 = _mm_shuffle_ps(v112, v115, 238);
	v373 = _mm_shuffle_ps(v111, v114, 68);
	v374 = _mm_shuffle_ps(v111, v114, 238);
	if (!v11)
		sub_140716180(a1 + 4320, a1, a2);
	v116 = *(_DWORD*)(a1 + 3744);
	if (v116)
	{
		v117 = a2 - *(_DWORD*)(a1 + 3740);
		if (v116 < v117)
			v117 = *(_DWORD*)(a1 + 3744);
		v118 = 0;
		if (v117)
			v118 = v117;
		*(float*)(a1 + 3724) = (float)((float)(*(float*)(a1 + 3736) - *(float*)(a1 + 3728))
			* (float)((float)v118 / (float)(int)v116))
			+ *(float*)(a1 + 3728);
		if (v118 >= v116)
			*(_DWORD*)(a1 + 3744) = 0;
	}
	v119 = *(float*)(a1 + 4320);
	v120 = sub_14047A940((_QWORD*)a1);
	v121 = *(_QWORD*)(a1 + 3840);
	v122 = (float)(v120 * v119) * *(float*)(a1 + 3724);
	v123 = 1.0;
	v124 = fmaxf(v122, 0.001);
	if (v121)
		v123 = 1.0 / *(float*)(v121 + 4804);
	v11 = v351 == 0;
	v125 = v124 * v123;
	*(float*)(a1 + 4364) = v125;
	if (v11)
		v126 = 0i64;
	else
		v126 = (__m128) * (unsigned int*)(a1 + 1392);
	v376 = (__m128)xmmword_140C78410;
	v127 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v126, (__m128)0i64));
	v356 = (__m128)xmmword_140C78410;
	v377 = (__m128)xmmword_140C78420;
	v357 = (__m128)xmmword_140C78420;
	v378 = (__m128)xmmword_140C78430;
	v358 = (__m128)xmmword_140C78430;
	v128 = _mm_add_ps(v127, v347);
	v347.m128_u64[0] = (unsigned __int64)&v385;
	v347.m128_u64[1] = (unsigned __int64)&v356;
	v363 = v127;
	v379 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v128, _mm_shuffle_ps(v128, v128, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v128, v128, 85), (__m128)0x3F800000u));
	v129 = _mm_sub_ps((__m128)0i64, v127);
	v130 = _mm_shuffle_ps(v129, v129, 170);
	v131 = _mm_shuffle_ps(v129, v129, 85);
	v132 = _mm_unpacklo_ps(v129, v130);
	v130.m128_f32[0] = v125;
	v133 = _mm_shuffle_ps(v130, v130, 0);
	v359 = _mm_unpacklo_ps(v132, _mm_unpacklo_ps(v131, (__m128)0x3F800000u));
	v382 = v133.m128_i32[0];
	v132.m128_f32[0] = _mm_shuffle_ps(v133, v133, 170).m128_f32[0];
	v385 = _mm_mul_ps((__m128)xmmword_140C78410, v133);
	v133.m128_f32[0] = _mm_shuffle_ps(v133, v133, 85).m128_f32[0];
	v383 = v133.m128_i32[0];
	v134 = _mm_shuffle_ps(v133, v133, 0);
	v135 = _mm_mul_ps((__m128)xmmword_140C78420, v134);
	v134.m128_f32[0] = v132.m128_f32[0];
	v384 = v132.m128_i32[0];
	v393 = &v356;
	v386 = (__int128)v135;
	v388 = (__m128)xmmword_140C78440;
	v387 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v134, v134, 0));
	v392 = &v385;
	sub_1401AFB10(&v392, v394);
	v347.m128_u64[0] = (unsigned __int64)v394;
	v347.m128_u64[1] = (unsigned __int64)v364;
	v389 = v394;
	v390 = (__m128*)v364;
	sub_1401AFB10(&v389, v391);
	v347.m128_u64[0] = (unsigned __int64)v391;
	v347.m128_u64[1] = (unsigned __int64)&v376;
	*(_QWORD*)&v381[0] = v391;
	*((_QWORD*)&v381[0] + 1) = &v376;
	sub_1401AFB10((__m128**)v381, (__m128*)(a1 + 4464));
	v136 = (__m128*)(a1 + 4528);
	*(_OWORD*)(a1 + 4528) = *v137;
	*(_OWORD*)(a1 + 4544) = v137[1];
	*(_OWORD*)(a1 + 4560) = v137[2];
	*(_OWORD*)(a1 + 4576) = v137[3];
	v138 = (__m128)(unsigned int) * v45;
	v139 = v138;
	v139.m128_f32[0] = sub_1408FE3D0(*(double*)v138.m128_u64);
	v140 = _mm_xor_ps(v139, v85);
	sub_1408FC950(*(double*)v138.m128_u64);
	*(__m128*)(a1 + 4368) = _mm_unpacklo_ps(_mm_unpacklo_ps(v140, _mm_xor_ps(v138, v85)), (__m128)0i64);
	v141 = *(_QWORD*)(a1 + 3840);
	if (v141)
	{
		v346.m128_u64[0] = a1 + 4528;
		v346.m128_u64[1] = v141 + 4528;
		sub_1401AFB10((__m128**) & v346, (__m128*)(a1 + 4528));
		v142 = *(__m128*)(a1 + 4080);
		*(__m128*)(a1 + 4384) = _mm_add_ps(
			*(__m128*)(*(_QWORD*)(a1 + 3840) + 4384i64),
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v142, v142, 85),
						*(__m128*)(*(_QWORD*)(a1 + 3840) + 4544i64)),
					_mm_mul_ps(
						_mm_shuffle_ps(v142, v142, 0),
						*(__m128*)(*(_QWORD*)(a1 + 3840) + 4528i64))),
				_mm_mul_ps(
					_mm_shuffle_ps(v142, v142, 170),
					*(__m128*)(*(_QWORD*)(a1 + 3840) + 4560i64))));
		v143 = *(__m128*)(a1 + 4144);
		*(__m128*)(a1 + 4400) = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps(v143, v143, 85),
					*(__m128*)(*(_QWORD*)(a1 + 3840) + 4544i64)),
				_mm_mul_ps(
					_mm_shuffle_ps(v143, v143, 0),
					*(__m128*)(*(_QWORD*)(a1 + 3840) + 4528i64))),
			_mm_mul_ps(
				_mm_shuffle_ps(v143, v143, 170),
				*(__m128*)(*(_QWORD*)(a1 + 3840) + 4560i64)));
		v144 = *(__m128*)(a1 + 4368);
		v145 = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v144, v144, 85), *(__m128*)(*(_QWORD*)(a1 + 3840) + 4544i64)),
				_mm_mul_ps(_mm_shuffle_ps(v144, v144, 0), *(__m128*)(*(_QWORD*)(a1 + 3840) + 4528i64))),
			_mm_mul_ps(_mm_shuffle_ps(v144, v144, 170), *(__m128*)(*(_QWORD*)(a1 + 3840) + 4560i64)));
		v146 = _mm_mul_ps(v145, v145);
		v146.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v146.m128_f32[0] + _mm_shuffle_ps(v146, v146, 85).m128_f32[0])
				+ _mm_shuffle_ps(v146, v146, 170).m128_f32[0]);
		*(__m128*)(a1 + 4416) = _mm_mul_ps(_mm_shuffle_ps(v146, v146, 0), v145);
		v147 = sub_1408FD190(
			COERCE_FLOAT(*(_DWORD*)(a1 + 4416) ^ v85.m128_i32[0]),
			COERCE_FLOAT(*(_DWORD*)(a1 + 4424) ^ v85.m128_i32[0]));
		v148 = *(_QWORD*)(a1 + 3840);
		*(float*)(a1 + 4800) = v147;
		*(float*)(a1 + 4804) = *(float*)(v148 + 4804) * *(float*)(a1 + 4364);
	}
	else
	{
		*(_OWORD*)(a1 + 4384) = *(_OWORD*)(a1 + 4080);
		*(_OWORD*)(a1 + 4400) = *(_OWORD*)(a1 + 4144);
		*(_OWORD*)(a1 + 4416) = *(_OWORD*)(a1 + 4368);
		*(_DWORD*)(a1 + 4800) = *v45;
		*(_DWORD*)(a1 + 4804) = *(_DWORD*)(a1 + 4364);
	}
	v149 = (__m128*)(a1 + 4576);
	if (!sub_1405B3B30((float*)(a1 + 4576)))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
		v149->m128_i32[0] = _mm_cvtsi128_si32((__m128i)0i64);
		*(_DWORD*)(a1 + 4580) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 4));
		*(_DWORD*)(a1 + 4584) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
	}
	if (!sub_1405B3B30((float*)(a1 + 4528))
		|| !sub_1405B3B30((float*)(a1 + 4544))
		|| !sub_1405B3B30((float*)(a1 + 4560)))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
		v150 = (__m128i)xmmword_140C77860;
		v136->m128_i32[0] = _mm_cvtsi128_si32((__m128i)xmmword_140C77860);
		*(_DWORD*)(a1 + 4532) = _mm_cvtsi128_si32(_mm_srli_si128(v150, 4));
		*(_DWORD*)(a1 + 4536) = _mm_cvtsi128_si32(_mm_srli_si128(v150, 8));
		v151 = (__m128i)xmmword_140C77870;
		*(_DWORD*)(a1 + 4544) = _mm_cvtsi128_si32((__m128i)xmmword_140C77870);
		*(_DWORD*)(a1 + 4548) = _mm_cvtsi128_si32(_mm_srli_si128(v151, 4));
		*(_DWORD*)(a1 + 4552) = _mm_cvtsi128_si32(_mm_srli_si128(v151, 8));
		v152 = (__m128i)xmmword_140C77880;
		*(_DWORD*)(a1 + 4560) = _mm_cvtsi128_si32((__m128i)xmmword_140C77880);
		*(_DWORD*)(a1 + 4564) = _mm_cvtsi128_si32(_mm_srli_si128(v152, 4));
		*(_DWORD*)(a1 + 4568) = _mm_cvtsi128_si32(_mm_srli_si128(v152, 8));
	}
	v153 = *v149;
	*(_QWORD*)&v381[0] = a1 + 4528;
	v154 = (__m128i)_mm_max_ps((__m128)xmmword_140C7E010, _mm_min_ps(v153, (__m128)xmmword_140C7E020));
	v149->m128_i32[0] = _mm_cvtsi128_si32(v154);
	*(_DWORD*)(a1 + 4580) = _mm_cvtsi128_si32(_mm_srli_si128(v154, 4));
	*(_DWORD*)(a1 + 4584) = _mm_cvtsi128_si32(_mm_srli_si128(v154, 8));
	sub_1401AFC20((__int64*)v381, (double*)(a1 + 4592));
	v155 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 1392), (__m128)0i64));
	*(__m128*)(a1 + 4656) = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v155, v155, 85), *(__m128*)(a1 + 4544)),
				_mm_mul_ps(_mm_shuffle_ps(v155, v155, 0), *v136)),
			_mm_mul_ps(_mm_shuffle_ps(v155, v155, 170), *(__m128*)(a1 + 4560))),
		*(__m128*)(a1 + 4576));
	v11 = *(_DWORD*)(a1 + 4924) == 0;
	v156 = *(__m128*)(a1 + 4144);
	v347 = v156;
	if (v11)
	{
		v157 = v347.m128_f32[1];
	}
	else
	{
		v157 = 0.0;
		v347.m128_i32[1] = 0;
		v156 = v347;
	}
	v158 = 0;
	if (*(_DWORD*)(a1 + 684)
		&& (v44 & 0x80u) != 0
		&& (v159 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 264))) != 0i64)
	{
		v160 = _mm_sub_ps(v159[291], *(__m128*)(a1 + 4656));
		v347 = v160;
		v161 = _mm_mul_ps(v160, v160);
		v162 = _mm_shuffle_ps(v161, v161, 85);
		v163 = fsqrt((float)(v161.m128_f32[0] + v162.m128_f32[0]) + _mm_shuffle_ps(v161, v161, 170).m128_f32[0]);
		if (v163 > 0.0000099999997)
		{
			v162.m128_f32[0] = v163;
			v164 = _mm_div_ps(v160, _mm_shuffle_ps(v162, v162, 0));
			v165 = _mm_mul_ps(*(__m128*)(a1 + 4416), v164);
			v347 = v164;
			if ((float)((float)(v165.m128_f32[0] + _mm_shuffle_ps(v165, v165, 85).m128_f32[0])
				+ _mm_shuffle_ps(v165, v165, 170).m128_f32[0]) > -0.5)
				v158 = 1;
		}
	}
	else
	{
		v347 = v376;
	}
	v166.m128_u64[0] = 0i64;
	*(_DWORD*)(a1 + 5004) = 0;
	*(_DWORD*)(a1 + 4848) = 0;
	v167 = *(_DWORD*)(a1 + 3412);
	v168 = 0.0;
	v352 = 0.0;
	*(float*)&v343 = 0.0;
	v350 = 0.0;
	*(float*)&v345 = 0.0;
	v344 = 0.0;
	if (v167 && *(_DWORD*)(a1 + 3408) && *(_DWORD*)(a1 + 3572) == 1 || (v44 & 0x40000) != 0 || *(_DWORD*)(a1 + 4044))
	{
		if (v167 && *(_DWORD*)(a1 + 3408) && *(_DWORD*)(a1 + 3572) == 1)
			goto LABEL_259;
		if (*(_DWORD*)(a1 + 4044) || !*(_DWORD*)(a1 + 4840) || *(_DWORD*)(a1 + 14052) && *(_QWORD*)(a1 + 3840))
			goto LABEL_259;
		v299 = _mm_shuffle_ps(v156, v156, 136);
		v300 = _mm_mul_ps(v299, v299);
		if ((float)(v300.m128_f32[0] + _mm_shuffle_ps(v300, v300, 85).m128_f32[0]) <= *(float*)&dword_140C4A548
			|| (v44 & 2) == 0
			|| (v44 & 0x80u) != 0
			|| !sub_140482370((_DWORD*)a1) && !*(_DWORD*)(a1 + 5664))
		{
			goto LABEL_259;
		}
		v301 = *(_DWORD*)(a1 + 4208);
		if ((v301 & 0x3000) != 0)
			goto LABEL_259;
		if ((v301 & 0x18000) != 0)
			goto LABEL_259;
		if ((unsigned int)(*(_DWORD*)(a1 + 4932) - 6) <= 9)
			goto LABEL_259;
		*(_QWORD*)&v302 = *(unsigned int*)(a1 + 4800);
		v303 = sub_1408FE3D0(v302);
		v304 = sub_1408FC950(v302);
		v305 = *(float*)(a1 + 4408);
		v306 = *(float*)(a1 + 4400);
		v307 = (float)(v304 * v306) - (float)(v303 * v305);
		v308 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v304 * v305) ^ v85.m128_i32[0]) - (float)(v303 * v306);
		if (v308 < (float)(fabs(v307) * -0.5))
			goto LABEL_259;
		if (v307 > 0.0000099999997 && v307 > (float)(v308 * 2.0))
		{
			*(_DWORD*)(a1 + 5004) = 7545;
			goto LABEL_259;
		}
		LODWORD(v309) = LODWORD(v307) ^ v85.m128_i32[0];
		if (v309 <= 0.0000099999997)
			goto LABEL_259;
		v171 = 0.0;
		if (v309 > (float)(v308 * 2.0))
			*(_DWORD*)(a1 + 5004) = 7544;
	}
	else
	{
		if (*(_DWORD*)(a1 + 14052))
		{
			v169 = *(_QWORD*)(a1 + 3840);
			if (v169)
			{
				v170 = *(unsigned int*)(v169 + 4808);
				*(float*)(a1 + 4808) = *(float*)&v170;
				v343 = v170;
				if (sub_14047BF00(a1) && *(_DWORD*)(a1 + 4996))
				{
					v171 = 1.5707964;
					goto LABEL_260;
				}
			LABEL_259:
				v171 = 0.0;
				goto LABEL_260;
			}
		}
		v172 = _mm_mul_ps(v156, v156);
		if ((float)((float)(v172.m128_f32[0] + _mm_shuffle_ps(v172, v172, 85).m128_f32[0])
			+ _mm_shuffle_ps(v172, v172, 170).m128_f32[0]) >= *(float*)&dword_140C4A548
			&& (v44 & 2) != 0)
		{
			v173 = (__m128)0x40400000u;
			v174 = _mm_mul_ps(v156, v156);
			v346 = (__m128)0x3F000000u;
			v175 = (float)(v174.m128_f32[0] + _mm_shuffle_ps(v174, v174, 85).m128_f32[0])
				+ _mm_shuffle_ps(v174, v174, 170).m128_f32[0];
			v176 = (__m128)0x40400000u;
			v177 = fsqrt(v175);
			v176.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v175 * (float)(1.0 / v177)) * (float)(1.0 / v177)))
					* 0.5)
				* (float)(1.0 / v177),
				0.0);
			v178 = _mm_mul_ps(*(__m128*)(a1 + 4368), _mm_mul_ps(_mm_shuffle_ps(v176, v176, 0), v156));
			v176.m128_f32[0] = (float)(v178.m128_f32[0] + _mm_shuffle_ps(v178, v178, 85).m128_f32[0])
				+ _mm_shuffle_ps(v178, v178, 170).m128_f32[0];
			v179 = v176.m128_f32[0] < -0.5;
			v11 = v176.m128_f32[0] == -0.5;
			v180 = _mm_shuffle_ps(v156, v156, 136);
			v181 = _mm_mul_ps(v180, v180);
			v182 = !v179 && !v11;
			v183 = v181.m128_f32[0] + _mm_shuffle_ps(v181, v181, 85).m128_f32[0];
			if ((v44 & 0x80u) == 0)
			{
				if (v183 <= *(float*)&dword_140C4A548)
					goto LABEL_239;
				v234 = _mm_mul_ps(v156, v156);
				v234.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v234.m128_f32[0] + _mm_shuffle_ps(v234, v234, 85).m128_f32[0])
						+ _mm_shuffle_ps(v234, v234, 170).m128_f32[0]);
				v235 = _mm_mul_ps(_mm_shuffle_ps(v234, v234, 0), v156);
				v236 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v235, v235, 85), v372),
						_mm_mul_ps(_mm_shuffle_ps(v235, v235, 0), v371)),
					_mm_mul_ps(_mm_shuffle_ps(v235, v235, 170), v373));
				v237 = _mm_shuffle_ps(v236, v236, 170).m128_f32[0];
				v238 = _mm_xor_ps(v236, v85);
				v238.m128_f32[0] = sub_1408FD190(v238.m128_f32[0], COERCE_FLOAT(LODWORD(v237) ^ v85.m128_i32[0]));
				v239 = v238;
				v343 = v238.m128_u32[0];
				if (!v182)
				{
					v239.m128_f32[0] = (float)((float)(v238.m128_f32[0] + 3.1415927) + 3.1415927) * 0.15915494;
					v240 = v239.m128_f32[0];
					v241 = (int)v239.m128_f32[0];
					if ((int)v239.m128_f32[0] != 0x80000000 && (float)v241 != v239.m128_f32[0])
						v240 = (float)(v241 - (_mm_movemask_ps(_mm_unpacklo_ps(v239, v239)) & 1));
					v239.m128_f32[0] = (float)((float)(v239.m128_f32[0] - v240) * 6.2831855) - 3.1415927;
					v343 = v239.m128_u32[0];
				}
				if (!*(_DWORD*)(a1 + 4840) || !sub_140482370((_DWORD*)a1) && !*(_DWORD*)(a1 + 5664))
					goto LABEL_239;
				v242 = *(_DWORD*)(a1 + 4208);
				if ((v242 & 0x3000) != 0 || (v242 & 0x18000) != 0 || (unsigned int)(*(_DWORD*)(a1 + 4932) - 6) <= 9)
					goto LABEL_239;
				*(_QWORD*)&v243 = *(unsigned int*)(a1 + 4800);
				v244 = sub_1408FE3D0(v243);
				v245 = sub_1408FC950(v243);
				v246 = *(float*)(a1 + 4408);
				v247 = *(float*)(a1 + 4400);
				v248 = (float)(v245 * v247) - (float)(v244 * v246);
				v249 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v245 * v246) ^ v85.m128_i32[0]) - (float)(v244 * v247);
				if (v249 < (float)(fabs(v248) * -0.5))
				{
					if (!*(_DWORD*)(a1 + 4844))
						goto LABEL_239;
					if (v248 > 0.0000099999997 && (float)(v248 * 2.0) > COERCE_FLOAT(LODWORD(v249) ^ v85.m128_i32[0]))
					{
						*(_DWORD*)(a1 + 4848) = -1085730853;
						goto LABEL_239;
					}
					if (COERCE_FLOAT(LODWORD(v248) ^ v85.m128_i32[0]) <= 0.0000099999997
						|| (float)(v248 * -2.0) <= COERCE_FLOAT(LODWORD(v249) ^ v85.m128_i32[0]))
					{
						goto LABEL_239;
					}
				}
				else
				{
					if (v248 > 0.0000099999997 && v248 > (float)(v249 * 2.0))
					{
						v239.m128_f32[0] = (float)((float)(v239.m128_f32[0] + 1.5707964) + 3.1415927) * 0.15915494;
						v250 = v239.m128_f32[0];
						v251 = (int)v239.m128_f32[0];
						if ((int)v239.m128_f32[0] != 0x80000000 && (float)v251 != v239.m128_f32[0])
							v250 = (float)(v251 - (_mm_movemask_ps(_mm_unpacklo_ps(v239, v239)) & 1));
						*(_DWORD*)(a1 + 5004) = 7545;
						*(float*)&v343 = (float)((float)(v239.m128_f32[0] - v250) * 6.2831855) - 3.1415927;
						goto LABEL_239;
					}
					LODWORD(v252) = LODWORD(v248) ^ v85.m128_i32[0];
					if (COERCE_FLOAT(LODWORD(v248) ^ v85.m128_i32[0]) > 0.0000099999997 && v252 > (float)(v249 * 2.0))
					{
						v239.m128_f32[0] = (float)((float)(v239.m128_f32[0] - 1.5707964) + 3.1415927) * 0.15915494;
						v253 = v239.m128_f32[0];
						v254 = (int)v239.m128_f32[0];
						if ((int)v239.m128_f32[0] != 0x80000000 && (float)v254 != v239.m128_f32[0])
							v253 = (float)(v254 - (_mm_movemask_ps(_mm_unpacklo_ps(v239, v239)) & 1));
						*(_DWORD*)(a1 + 5004) = 7544;
						*(float*)&v343 = (float)((float)(v239.m128_f32[0] - v253) * 6.2831855) - 3.1415927;
						goto LABEL_239;
					}
					if (!*(_DWORD*)(a1 + 4844))
						goto LABEL_239;
					if (v248 <= 0.0000099999997 || (float)(v248 * 2.0) <= v249)
					{
						if (v252 > 0.0000099999997 && (float)(v248 * -2.0) > v249)
							*(_DWORD*)(a1 + 4848) = -1085730853;
						goto LABEL_239;
					}
				}
				*(_DWORD*)(a1 + 4848) = 1061752795;
				goto LABEL_239;
			}
			if (v183 <= *(float*)&dword_140C4A548)
			{
				if (v157 <= 0.0000099999997)
				{
					if (v157 >= -0.0000099999997)
						goto LABEL_185;
					*(_QWORD*)&v168 = 3217625051i64;
				}
				else
				{
					*(_QWORD*)&v168 = 1070141403i64;
				}
				v344 = *(float*)&v168;
			}
			else
			{
				v184 = _mm_mul_ps(v156, v156);
				v184.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v184.m128_f32[0] + _mm_shuffle_ps(v184, v184, 85).m128_f32[0])
						+ _mm_shuffle_ps(v184, v184, 170).m128_f32[0]);
				v185 = _mm_mul_ps(_mm_shuffle_ps(v184, v184, 0), v156);
				v376 = _mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v185, v185, 85), v372),
						_mm_mul_ps(_mm_shuffle_ps(v185, v185, 0), v371)),
					_mm_mul_ps(_mm_shuffle_ps(v185, v185, 170), v373));
				v186 = (float*)sub_1401B3170((__int64)&v349, v376.m128_f32);
				v187 = v186[2];
				v166 = (__m128) * (unsigned int*)v186;
				*(_QWORD*)&v168 = *((unsigned int*)v186 + 1);
				v343 = *(unsigned int*)v186;
				v344 = *(float*)&v168;
				v350 = v187;
				*(float*)&v345 = v187;
				if (!v182)
				{
					v166.m128_f32[0] = (float)((float)(v166.m128_f32[0] + 3.1415927) + 3.1415927) * 0.15915494;
					v188 = v166.m128_f32[0];
					v189 = (int)v166.m128_f32[0];
					if ((int)v166.m128_f32[0] != 0x80000000 && (float)v189 != v166.m128_f32[0])
						v188 = (float)(v189 - (_mm_movemask_ps(_mm_unpacklo_ps(v166, v166)) & 1));
					*(_QWORD*)&v168 ^= v85.m128_u64[0];
					v344 = *(float*)&v168;
					v166.m128_f32[0] = (float)((float)(v166.m128_f32[0] - v188) * 6.2831855) - 3.1415927;
					v343 = v166.m128_u32[0];
				}
				LOBYTE(v190) = sub_14047C120((_QWORD*)a1);
				if (v190)
				{
					v166.m128_u64[0] = 0i64;
					*(float*)&v343 = 0.0;
				}
			}
		LABEL_185:
			v191 = _mm_mul_ps(v156, v156);
			v192 = fsqrt(
				(float)(v191.m128_f32[0] + _mm_shuffle_ps(v191, v191, 85).m128_f32[0])
				+ _mm_shuffle_ps(v191, v191, 170).m128_f32[0]);
			v193 = fmaxf(sub_1405B45E0(a1, *(_DWORD*)(a1 + 4232), 3u), 1.0);
			if (v192 < v193)
			{
				*(float*)&v168 = *(float*)&v168 * (float)(v192 / v193);
				v344 = *(float*)&v168;
			}
			if (v182 && ((v5 - 1) & 0xFFFFFFFD) == 0 && *(_DWORD*)(a1 + 4996))
				v352 = 1.5707964;
			if (*(_DWORD*)(a1 + 4924))
			{
				v168 = 0.0;
				v344 = 0.0;
			}
			if (!v158 || *(_DWORD*)(a1 + 3416))
				goto LABEL_239;
			*(_QWORD*)&v194 = LODWORD(v350);
			*(float*)&v194 = v350 * 0.5;
			sub_1408FE3D0(v194);
			v195 = *(float*)&v194;
			sub_1408FC950(v194);
			*(float*)&v168 = *(float*)&v168 * 0.5;
			v196 = *(float*)&v194;
			sub_1408FE3D0(v168);
			v197 = *(float*)&v168;
			sub_1408FC950(v168);
			v166.m128_f32[0] = v166.m128_f32[0] * 0.5;
			LODWORD(v194) = LODWORD(v168);
			sub_1408FE3D0(*(double*)v166.m128_u64);
			v198 = sub_1408FC950(*(double*)v166.m128_u64);
			v199 = v166.m128_f32[0] * *(float*)&v168;
			v349.m128_f32[0] = (float)(v196 * (float)(v198 * v197))
				+ (float)(v195 * (float)(v166.m128_f32[0] * *(float*)&v194));
			v349.m128_f32[1] = (float)(v196 * (float)(v166.m128_f32[0] * *(float*)&v194))
				- (float)(v195 * (float)(v198 * v197));
			v349.m128_f32[2] = (float)(v195 * (float)(v198 * *(float*)&v194)) - (float)(v196 * v199);
			v349.m128_f32[3] = (float)(v195 * v199) + (float)(v196 * (float)(v198 * *(float*)&v194));
			v200 = _mm_shuffle_ps(v349, v349, 85).m128_f32[0];
			v201 = _mm_shuffle_ps(v349, v349, 170).m128_f32[0];
			v202 = _mm_shuffle_ps(v349, v349, 255).m128_f32[0];
			v203 = (float)(v349.m128_f32[0] * 2.0) * v349.m128_f32[0];
			v204 = (float)(v200 * 2.0) * v349.m128_f32[0];
			v205 = (float)(v349.m128_f32[0] * 2.0) * v202;
			v206 = (float)(v200 * 2.0) * v202;
			v207 = (float)(v201 * 2.0) * v202;
			*(float*)&v194 = (float)(v201 * 2.0) * v349.m128_f32[0];
			v208 = (float)(v200 * 2.0) * v200;
			v209 = (float)(v201 * 2.0) * v200;
			v210 = (float)(v201 * 2.0) * v201;
			v356.m128_f32[0] = (float)(1.0 - v208) - v210;
			v349.m128_u64[0] = (unsigned __int64)&v356;
			v356.m128_u64[1] = COERCE_UNSIGNED_INT(*(float*)&v194 - v206);
			v349.m128_u64[1] = (unsigned __int64)v364;
			v357.m128_i32[3] = 0;
			v356.m128_f32[1] = v204 + v207;
			v357.m128_f32[0] = v204 - v207;
			v358.m128_i32[3] = 0;
			v357.m128_f32[2] = v209 + v205;
			v357.m128_f32[1] = (float)(1.0 - v203) - v210;
			v358.m128_f32[1] = v209 - v205;
			v359 = (__m128)xmmword_140B7AD00;
			v358.m128_f32[0] = *(float*)&v194 + v206;
			v358.m128_f32[2] = (float)(1.0 - v203) - v208;
			*(_QWORD*)&v381[0] = &v356;
			*((_QWORD*)&v381[0] + 1) = v364;
			sub_1401AFB10((__m128**)v381, &v376);
			if (v182)
			{
				v211 = v378;
				v212 = _mm_sub_ps((__m128)0i64, v347);
				v213 = _mm_mul_ps(v212, v378);
				*(_QWORD*)&v214 = (unsigned int)dword_140C3B438;
				*(float*)&v214 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 15.0;
				if (fabs(
					(float)(v213.m128_f32[0] + _mm_shuffle_ps(v213, v213, 85).m128_f32[0])
					+ _mm_shuffle_ps(v213, v213, 170).m128_f32[0]) < sub_1408FC950(v214))
				{
					v347.m128_u64[0] = (unsigned __int64)&v376;
					v347.m128_u64[1] = (unsigned __int64)&v371;
					v215 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v212, v212, 210), _mm_shuffle_ps(v211, v211, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v212, v212, 201), _mm_shuffle_ps(v211, v211, 210)));
					v216 = _mm_mul_ps(v215, v215);
					v217 = (float)(v216.m128_f32[0] + _mm_shuffle_ps(v216, v216, 85).m128_f32[0])
						+ _mm_shuffle_ps(v216, v216, 170).m128_f32[0];
					v218 = 1.0 / fsqrt(v217);
					v173.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v217 * v218) * v218)) * v346.m128_f32[0]) * v218,
						0.0);
					v219 = _mm_mul_ps(_mm_shuffle_ps(v173, v173, 0), v215);
					v220 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v211, v211, 210), _mm_shuffle_ps(v219, v219, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v211, v211, 201), _mm_shuffle_ps(v219, v219, 210)));
					v377.m128_u64[0] = v220.m128i_i64[0];
					v377.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v220, 8));
					v221 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v211, v211, 210), _mm_shuffle_ps(v377, v377, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v211, v211, 201), _mm_shuffle_ps(v377, v377, 210)));
					v376.m128_u64[0] = v221.m128i_i64[0];
					v376.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v221, 8));
				LABEL_200:
					*(_QWORD*)&v381[0] = &v376;
					*((_QWORD*)&v381[0] + 1) = &v371;
					sub_1401AFB10((__m128**)v381, &v356);
					v231 = (int*)sub_1401B2ED0((__int64)&v349, v356.m128_f32);
					v232 = *((float*)v231 + 1);
					v343 = *(unsigned int*)v231;
					v233 = *((float*)v231 + 2);
					v344 = v232;
					*(float*)&v345 = v233;
				}
			}
			else
			{
				v222 = _mm_sub_ps((__m128)0i64, v347);
				v223 = _mm_mul_ps(v222, v377);
				if (fabs(
					(float)(v223.m128_f32[0] + _mm_shuffle_ps(v223, v223, 85).m128_f32[0])
					+ _mm_shuffle_ps(v223, v223, 170).m128_f32[0]) < 0.99998999)
				{
					v224 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v377, v377, 210), _mm_shuffle_ps(v222, v222, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v377, v377, 201), _mm_shuffle_ps(v222, v222, 210)));
					v225 = _mm_mul_ps(v224, v224);
					v226 = (float)(v225.m128_f32[0] + _mm_shuffle_ps(v225, v225, 85).m128_f32[0])
						+ _mm_shuffle_ps(v225, v225, 170).m128_f32[0];
					v227 = 1.0 / fsqrt(v226);
					v173.m128_f32[0] = (float)(3.0 - (float)((float)(v226 * v227) * v227)) * v346.m128_f32[0];
					v346.m128_u64[0] = (unsigned __int64)&v376;
					v346.m128_u64[1] = (unsigned __int64)&v371;
					v173.m128_f32[0] = fmaxf(v173.m128_f32[0] * v227, 0.0);
					v228 = _mm_mul_ps(_mm_shuffle_ps(v173, v173, 0), v224);
					v229 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v222, v222, 210), _mm_shuffle_ps(v228, v228, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v222, v222, 201), _mm_shuffle_ps(v228, v228, 210)));
					v377.m128_u64[0] = v229.m128i_i64[0];
					v377.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v229, 8));
					v230 = (__m128i)_mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v377, v377, 210), _mm_shuffle_ps(v376, v376, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v377, v377, 201), _mm_shuffle_ps(v376, v376, 210)));
					v378.m128_u64[0] = v230.m128i_i64[0];
					v378.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v230, 8));
					goto LABEL_200;
				}
			}
		LABEL_239:
			v85.m128_u64[0] = 0x80000000i64;
			v171 = v352;
			*(_DWORD*)(a1 + 4824) = 0;
			goto LABEL_260;
		}
		if (*(_QWORD*)(qword_140C65898 + 25744) != a1 || !*(_DWORD*)(qword_140C65898 + 25440))
			v6 = 0;
		if (!*(_DWORD*)(a1 + 4832) || sub_1404695E0(a1) || v6)
		{
			*(_QWORD*)(a1 + 4820) = 0i64;
			goto LABEL_259;
		}
		v255 = *(float*)(a1 + 4820);
		if (v255 != 0.0)
		{
			v256 = fmaxf(0.0, v255 - v4);
			if (v256 <= 0.0000099999997)
			{
				*(_DWORD*)(a1 + 4808) = 0;
				*(_DWORD*)(a1 + 4820) = 0;
			}
			else
			{
				*(float*)(a1 + 4820) = v256;
				*(float*)(a1 + 4808) = (float)(v256 / v255) * *(float*)(a1 + 4808);
			}
		}
		if (*(float*)(a1 + 4820) == 0.0)
		{
			v257 = (__m128) * (unsigned int*)(a1 + 4808);
			v257.m128_f32[0] = (float)((float)(v257.m128_f32[0] - v81) + 3.1415927) * 0.15915494;
			v258 = v257.m128_f32[0];
			v259 = (int)v257.m128_f32[0];
			if ((int)v257.m128_f32[0] != 0x80000000 && (float)v259 != v257.m128_f32[0])
				v258 = (float)(v259 - (_mm_movemask_ps(_mm_unpacklo_ps(v257, v257)) & 1));
			*(float*)(a1 + 4808) = (float)((float)(v257.m128_f32[0] - v258) * 6.2831855) - 3.1415927;
		}
		v343 = *(unsigned int*)(a1 + 4808);
		v171 = 0.0;
		if (COERCE_FLOAT(v343 & 0x7FFFFFFF) <= 1.0471976)
			*(_DWORD*)(a1 + 4824) = 0;
		else
			*(float*)(a1 + 4824) = v4 + *(float*)(a1 + 4824);
	}
LABEL_260:
	v260 = *(unsigned int*)(a1 + 4876);
	v261 = v353;
	*(float*)&v260 = (float)((float)(*(float*)&v260 - v171) * v353) + v171;
	*(_DWORD*)(a1 + 4876) = v260;
	sub_1408FE3D0(0.0);
	sub_1408FC950(0.0);
	*(_QWORD*)&v262 = v260 ^ v85.m128_u64[0];
	*(float*)&v262 = *(float*)&v262 * 0.5;
	sub_1408FE3D0(v262);
	v263 = sub_1408FC950(v262);
	v376.m128_i32[0] = 1065353216;
	v376.m128_u64[1] = (unsigned __int64)&v363;
	v377 = (__m128)(unsigned __int64) & v367;
	v367 = (float)((float)(0.0 * *(float*)&v262) * 0.0) + (float)((float)(0.0 * v263) * 0.0);
	v368 = (float)((float)(0.0 * v263) * 0.0) - (float)((float)(0.0 * *(float*)&v262) * 0.0);
	v381[0] = (__int128)v376;
	v369 = v368;
	v370 = v367;
	v381[1] = (unsigned __int64)&v367;
	sub_1401B0590((int*)v381, (__int64)v375);
	v264 = sub_1401B3250(v349.m128_f32, (float*)&v343, (float*)(a1 + 4808), v261);
	v265 = (__m128)v363.m128_u32[2];
	*v266 = *(_DWORD*)v264;
	v266[1] = *((_DWORD*)v264 + 1);
	v266[2] = *((_DWORD*)v264 + 2);
	v267 = xmmword_140C78410;
	v268 = xmmword_140C78420;
	v269 = xmmword_140C78430;
	v376 = (__m128)xmmword_140C78410;
	v377 = (__m128)xmmword_140C78420;
	v378 = (__m128)xmmword_140C78430;
	*(_QWORD*)&v270 = v266[2];
	*(float*)&v270 = *(float*)&v270 * 0.5;
	*(_QWORD*)&v271 = *v266;
	*(_QWORD*)&v272 = v266[1];
	v379 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v363.m128_u32[0], v265),
		_mm_unpacklo_ps((__m128)v363.m128_u32[1], (__m128)0x3F800000u));
	sub_1408FE3D0(v270);
	sub_1408FC950(v270);
	*(float*)&v272 = *(float*)&v272 * 0.5;
	sub_1408FE3D0(v272);
	sub_1408FC950(v272);
	*(float*)&v271 = *(float*)&v271 * 0.5;
	sub_1408FE3D0(v271);
	v265.m128_f32[0] = sub_1408FC950(v271);
	v347.m128_f32[0] = (float)((float)(*(float*)&v271 * *(float*)&v272) * *(float*)&v270)
		+ (float)((float)(v265.m128_f32[0] * *(float*)&v272) * *(float*)&v270);
	v347.m128_f32[2] = (float)((float)(v265.m128_f32[0] * *(float*)&v272) * *(float*)&v270)
		- (float)((float)(*(float*)&v271 * *(float*)&v272) * *(float*)&v270);
	v347.m128_f32[1] = (float)((float)(*(float*)&v271 * *(float*)&v272) * *(float*)&v270)
		- (float)((float)(v265.m128_f32[0] * *(float*)&v272) * *(float*)&v270);
	v347.m128_f32[3] = v347.m128_f32[0];
	*(float*)&v270 = _mm_shuffle_ps(v347, v347, 255).m128_f32[0];
	v273 = _mm_shuffle_ps(v347, v347, 85).m128_f32[0];
	*(float*)&v271 = _mm_shuffle_ps(v347, v347, 170).m128_f32[0];
	v274 = *(float*)&v270 * (float)(v347.m128_f32[0] * 2.0);
	v275 = v347.m128_f32[0] * (float)(v347.m128_f32[0] * 2.0);
	v276 = *(float*)&v271 * 2.0;
	*(float*)&v272 = *(float*)&v270 * (float)(v273 * 2.0);
	*(float*)&v270 = *(float*)&v270 * (float)(*(float*)&v271 * 2.0);
	v277 = v347.m128_f32[0] * (float)(v273 * 2.0);
	v278 = v347.m128_f32[0] * (float)(*(float*)&v271 * 2.0);
	*(float*)&v271 = *(float*)&v271 * (float)(*(float*)&v271 * 2.0);
	v279 = v273 * (float)(v273 * 2.0);
	v280 = v273 * v276;
	v346.m128_u64[0] = (unsigned __int64)&v385;
	v385 = (__m128)v267;
	v386 = v268;
	v387 = (__m128)v269;
	v356.m128_u64[1] = COERCE_UNSIGNED_INT(v278 - *(float*)&v272);
	v358.m128_f32[0] = v278 + *(float*)&v272;
	v346.m128_u64[1] = (unsigned __int64)&v356;
	v358.m128_i32[3] = 0;
	v357.m128_u64[1] = COERCE_UNSIGNED_INT(v280 + v274);
	v358.m128_f32[1] = v280 - v274;
	v356.m128_f32[0] = (float)(1.0 - v279) - *(float*)&v271;
	v390 = &v356;
	v357.m128_f32[0] = v277 - *(float*)&v270;
	v356.m128_f32[1] = v277 + *(float*)&v270;
	v358.m128_f32[2] = (float)(1.0 - v275) - v279;
	v357.m128_f32[1] = (float)(1.0 - v275) - *(float*)&v271;
	v281 = _mm_sub_ps((__m128)0i64, v363);
	v359 = (__m128)xmmword_140B7AD00;
	v382 = v281.m128_i32[0];
	v282 = _mm_shuffle_ps(v281, v281, 85);
	v283 = _mm_shuffle_ps(v281, v281, 170);
	v383 = v282.m128_i32[0];
	v384 = v283.m128_i32[0];
	v389 = &v385;
	v388 = _mm_unpacklo_ps(_mm_unpacklo_ps(v281, v283), _mm_unpacklo_ps(v282, (__m128)0x3F800000u));
	sub_1401AFB10(&v389, v391);
	v346.m128_u64[0] = (unsigned __int64)v391;
	v392 = v391;
	v346.m128_u64[1] = (unsigned __int64)&v376;
	v393 = &v376;
	sub_1401AFB10(&v392, v394);
	v346.m128_u64[0] = (unsigned __int64)v394;
	v346.m128_u64[1] = a1 + 4528;
	*(_QWORD*)&v381[0] = v394;
	*((_QWORD*)&v381[0] + 1) = a1 + 4528;
	sub_1401AFB10((__m128**)v381, &v360);
	if (*(_DWORD*)(a1 + 4924) && !*(_DWORD*)(a1 + 14052))
	{
		v284 = *(_DWORD*)(a1 + 4992);
		if (v284 == 2)
		{
			v285 = (__m128)0x40400000u;
			v286 = _mm_mul_ps(v360, v360);
			v287 = (float)(v286.m128_f32[0] + _mm_shuffle_ps(v286, v286, 85).m128_f32[0])
				+ _mm_shuffle_ps(v286, v286, 170).m128_f32[0];
			v288 = (__m128)0x40400000u;
			v289 = fsqrt(v287);
			v288.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v287 * (float)(1.0 / v289)) * (float)(1.0 / v289)))
					* 0.5)
				* (float)(1.0 / v289),
				0.0);
			v290 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v288, v288, 0), v360);
			v291 = *(__m128*)(a1 + 5952);
			v360.m128_u64[0] = v290.m128i_i64[0];
			v360.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v290, 8));
			v292 = _mm_mul_ps(v360, v291);
			v293 = _mm_shuffle_ps(v292, v292, 85);
			v293.m128_f32[0] = (float)(v293.m128_f32[0] + v292.m128_f32[0]) + _mm_shuffle_ps(v292, v292, 170).m128_f32[0];
			v294 = _mm_sub_ps(v291, _mm_mul_ps(_mm_shuffle_ps(v293, v293, 0), v360));
			v295 = _mm_mul_ps(v294, v294);
			v292.m128_f32[0] = (float)(v295.m128_f32[0] + _mm_shuffle_ps(v295, v295, 85).m128_f32[0])
				+ _mm_shuffle_ps(v295, v295, 170).m128_f32[0];
			v293.m128_f32[0] = fsqrt(v292.m128_f32[0]);
			v285.m128_f32[0] = fmaxf(
				(float)((float)(3.0
					- (float)((float)(v292.m128_f32[0] * (float)(1.0 / v293.m128_f32[0]))
						* (float)(1.0 / v293.m128_f32[0])))
					* 0.5)
				* (float)(1.0 / v293.m128_f32[0]),
				0.0);
			v296 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v285, v285, 0), v294);
			v361.m128_u64[0] = v296.m128i_i64[0];
			v361.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v296, 8));
			v297 = (__m128i)_mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v361, v361, 210), _mm_shuffle_ps(v360, v360, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v361, v361, 201), _mm_shuffle_ps(v360, v360, 210)));
			v298 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 4804), (__m128) * (unsigned int*)(a1 + 4804), 0);
			v360 = _mm_mul_ps(v360, v298);
			v361 = _mm_mul_ps(v361, v298);
		}
		else
		{
			if (v284 != 3)
				goto LABEL_289;
			v310 = (__m128)0x40400000u;
			v361.m128_u64[0] = *(_QWORD*)(a1 + 5952);
			v361.m128_i32[2] = *(_DWORD*)(a1 + 5960);
			v311 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v362, v362, 210), _mm_shuffle_ps(v361, v361, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v362, v362, 201), _mm_shuffle_ps(v361, v361, 210)));
			v312 = _mm_mul_ps(v311, v311);
			v313 = (float)(v312.m128_f32[0] + _mm_shuffle_ps(v312, v312, 85).m128_f32[0])
				+ _mm_shuffle_ps(v312, v312, 170).m128_f32[0];
			v314 = fsqrt(v313);
			v310.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v313 * (float)(1.0 / v314)) * (float)(1.0 / v314)))
					* 0.5)
				* (float)(1.0 / v314),
				0.0);
			v315 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v310, v310, 0), v311);
			v360.m128_u64[0] = v315.m128i_i64[0];
			v360.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v315, 8));
			v297 = (__m128i)_mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v361, v361, 210), _mm_shuffle_ps(v360, v360, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v361, v361, 201), _mm_shuffle_ps(v360, v360, 210)));
			v298 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 4804), (__m128) * (unsigned int*)(a1 + 4804), 0);
			v360 = _mm_mul_ps(v360, v298);
			v361 = _mm_mul_ps(v361, v298);
		}
		v362.m128_u64[0] = v297.m128i_i64[0];
		v362.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v297, 8));
		v362 = _mm_mul_ps(v362, v298);
	}
LABEL_289:
	v346.m128_u64[0] = (unsigned __int64)v375;
	v346.m128_u64[1] = (unsigned __int64)&v360;
	*(_QWORD*)&v381[0] = v375;
	*((_QWORD*)&v381[0] + 1) = &v360;
	sub_1401AFB10((__m128**)v381, (__m128*)(a1 + 4672));
	if (a1 == *(_QWORD*)(qword_140C65898 + 25744))
	{
		v316 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 28608) + 24i64))(*(_QWORD*)(qword_140C65898 + 28608));
		v317 = *(float*)(a1 + 4724);
		*(float*)(a1 + 4720) = *(float*)(a1 + 4720) - v316[12];
		v318 = *(float*)(a1 + 4728);
		*(float*)(a1 + 4724) = v317 - v316[13];
		*(float*)(a1 + 4728) = v318 - v316[14];
	}
	*(_QWORD*)&v381[0] = a1 + 4672;
	sub_1401AFC20((__int64*)v381, (double*)(a1 + 4736));
	v376.m128_i32[0] = 1078530011;
	v319 = sub_1408FE3D0(COERCE_DOUBLE(1078530011i64));
	v320 = sub_1408FC950(COERCE_DOUBLE(1078530011i64));
	v379.m128_u64[0] = LODWORD(v319);
	v377.m128_u64[0] = LODWORD(v320);
	v379.m128_u64[1] = LODWORD(v320);
	v346.m128_u64[0] = (unsigned __int64)&v377;
	v380 = xmmword_140C78440;
	v377.m128_u64[1] = LODWORD(v319) ^ 0x80000000i64;
	v346.m128_u64[1] = (unsigned __int64)&v360;
	v378 = (__m128)xmmword_140B7A4B0;
	v389 = &v377;
	v390 = &v360;
	sub_1401AFB10(&v389, v391);
	*(_QWORD*)&v381[0] = v391;
	sub_1401AFC20((__int64*)v381, (double*)v356.m128_u64);
	if (*(_QWORD*)(a1 + 3840) && (sub_14047BE40(a1) || sub_14047BF00(a1)))
	{
		*(_OWORD*)(a1 + 4432) = *(_OWORD*)(*(_QWORD*)(a1 + 3840) + 4432i64);
		*(_OWORD*)(a1 + 4448) = *(_OWORD*)(*(_QWORD*)(a1 + 3840) + 4448i64);
		v321 = *(_QWORD*)(a1 + 3840);
		*(_DWORD*)(a1 + 4896) = *(_DWORD*)(v321 + 4896);
		*(_DWORD*)(a1 + 4904) = *(_DWORD*)(v321 + 4904);
	}
	else
	{
		v322 = v357;
		v323 = v356;
		v324 = v358;
		*(__m128*)(a1 + 4432) = _mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4384), *(__m128*)(a1 + 4384), 0), v356),
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4384), *(__m128*)(a1 + 4384), 85), v357)),
			_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4384), *(__m128*)(a1 + 4384), 170), v358));
		v325 = _mm_mul_ps(*(__m128*)(a1 + 4144), *(__m128*)(a1 + 4144));
		if ((float)((float)(v325.m128_f32[0] + _mm_shuffle_ps(v325, v325, 85).m128_f32[0])
			+ _mm_shuffle_ps(v325, v325, 170).m128_f32[0]) < *(float*)&dword_140C4A548
			&& (v44 & 0x10) != 0
			&& (v44 & 0x80u) == 0)
		{
			*(_OWORD*)(a1 + 4448) = *(_OWORD*)(a1 + 4432);
		}
		else
		{
			*(__m128*)(a1 + 4448) = _mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4400), *(__m128*)(a1 + 4400), 0), v323),
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4400), *(__m128*)(a1 + 4400), 85), v322)),
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(a1 + 4400), *(__m128*)(a1 + 4400), 170), v324));
		}
		v326 = sub_1405B4780(a1, 0, 4).m128_f32[0];
		if (v326 > 0.0000099999997)
		{
			v327 = *(float*)(a1 + 4456);
			if ((float)((float)(*(float*)(a1 + 4448) * *(float*)(a1 + 4448)) + (float)(v327 * v327)) <= *(float*)&dword_140C4A548)
			{
				v329 = v353 * *(float*)(a1 + 4904);
			}
			else
			{
				v328 = fmaxf(-1.0, fminf((float)((float)((float)(v327 / v326) * v348) * -0.15915494) * v354, 1.0));
				v329 = (float)((float)(*(float*)(a1 + 4904) - v328) * v355) + v328;
			}
			*(float*)(a1 + 4904) = v329;
		}
		v330 = _mm_shuffle_ps(*(__m128*)(a1 + 4448), *(__m128*)(a1 + 4448), 136);
		v331 = _mm_mul_ps(v330, v330);
		v332 = fsqrt(v331.m128_f32[0] + _mm_shuffle_ps(v331, v331, 85).m128_f32[0]);
		LOBYTE(v333) = sub_14047C060((_QWORD*)a1);
		if (v333 || (LOBYTE(v334) = sub_14047C120((_QWORD*)a1), v334))
			v332 = v332 * *(float*)(a1 + 4804);
		if ((v44 & 2) != 0)
		{
			v335 = *(float*)(a1 + 4456);
			if (v335 >= 0.0 || (float)-v335 <= fabs(*(float*)(a1 + 4448)))
			{
				do
				{
					v339 = (unsigned int)(v47 + 1);
					v340 = dword_140B6D840[v339];
					v341 = sub_1405B4780(a1, v5, v47 + 1).m128_f32[0];
					v342 = sub_1405B4780(a1, v5, v47).m128_f32[0];
					if (v332 <= (float)((float)((float)(v341 - v342) * v340) + v342))
						break;
					++v47;
				} while ((unsigned int)v339 < 5);
			}
			else
			{
				do
				{
					v336 = dword_140B6D840[v47 - 1];
					v337 = sub_1405B4780(a1, v5, v47 - 1).m128_f32[0];
					v338 = sub_1405B4780(a1, v5, v47).m128_f32[0];
					if (v332 <= (float)((float)((float)(v337 - v338) * v336) + v338))
						break;
					--v47;
				} while (v47);
			}
		}
		*(_DWORD*)(a1 + 4896) = v47;
	}
}
// 1405B5293: variable 'v18' is possibly undefined
// 1405B625E: variable 'v137' is possibly undefined
// 1405B69A6: variable 'v190' is possibly undefined
// 1405B7606: variable 'v266' is possibly undefined
// 1405B810D: variable 'v333' is possibly undefined
// 1405B8119: variable 'v334' is possibly undefined
// 140B6D840: using guessed type float dword_140B6D840[8];
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4A548: using guessed type int dword_140C4A548;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C7E010: using guessed type __int128 xmmword_140C7E010;
// 140C7E020: using guessed type __int128 xmmword_140C7E020;
// 1405B5070: using guessed type __m128 var_120[4];
// 1405B5070: using guessed type __m128 var_170[4];
// 1405B5070: using guessed type __m128 var_380;

