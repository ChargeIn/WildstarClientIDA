//----- (00000001405D0300) ----------------------------------------------------
__int64 __fastcall sub_1405D0300(
	__int64 a1,
	__int64* a2,
	__int64* a3,
	__int64* a4,
	float a5,
	float a6,
	int a7,
	__int64 a8,
	_OWORD* a9,
	float a10,
	int a11)
{
	int* v11; // rbx
	double v12; // xmm7_8
	int v13; // eax
	int v15; // ecx
	int v18; // eax
	float v19; // xmm1_4
	float v20; // xmm0_4
	double v21; // xmm0_8
	float v22; // xmm10_4
	float v23; // xmm0_4
	__m128 v24; // xmm1
	float v25; // xmm2_4
	int v26; // ecx
	float v27; // xmm0_4
	__m128 v28; // xmm13
	float v29; // xmm1_4
	int v30; // xmm0_4
	int v31; // r8d
	int v32; // edx
	int v33; // eax
	__m128 v34; // xmm6
	int v35; // edx
	int v36; // eax
	float v37; // xmm0_4
	float v38; // xmm1_4
	__int64 v39; // rax
	int v40; // esi
	__m128* v41; // r14
	__int64 v42; // rcx
	__int64 v43; // rax
	int v44; // ebx
	__m128 v45; // xmm0
	__int64 v46; // rax
	float v47; // xmm6_4
	__m128* v48; // rax
	__m128 v49; // xmm0
	__int64 v50; // rax
	float v51; // xmm6_4
	__m128* v52; // rax
	__m128 v53; // xmm0
	__int64 v54; // rax
	int v55; // eax
	int v56; // ecx
	__m128 v57; // xmm0
	__int64 v58; // rax
	__m128 v59; // xmm1
	int v60; // esi
	int v61; // eax
	float v62; // xmm8_4
	float v63; // xmm1_4
	float v64; // xmm0_4
	double v65; // xmm0_8
	int v66; // eax
	float v67; // xmm14_4
	float v68; // xmm0_4
	float v69; // xmm0_4
	float v70; // xmm2_4
	float v71; // xmm1_4
	float v72; // xmm8_4
	float v73; // xmm8_4
	float v74; // xmm1_4
	float v75; // xmm0_4
	double v76; // xmm0_8
	int v77; // eax
	float v78; // xmm1_4
	float v79; // xmm0_4
	float v80; // xmm0_4
	float v81; // xmm3_4
	float v82; // xmm4_4
	float v83; // xmm0_4
	float v84; // xmm2_4
	float v85; // xmm1_4
	float v86; // xmm4_4
	float v87; // xmm1_4
	float v88; // xmm2_4
	float v89; // xmm0_4
	int v90; // edx
	int v91; // eax
	float v92; // xmm1_4
	int v93; // ecx
	__int128 v94; // xmm2
	__int128 v95; // xmm7
	float v96; // xmm1_4
	int v97; // ecx
	float v98; // xmm0_4
	_OWORD* v99; // r11
	__int128* v100; // r10
	__m128 v101; // xmm2
	__m128 v102; // xmm1
	__m128 v103; // xmm2
	__m128 v104; // xmm1
	int v105; // r9d
	int v106; // r8d
	float v107; // xmm3_4
	int v108; // eax
	int v109; // eax
	__m128 v110; // xmm0
	__int128 v111; // xmm0
	int v112; // eax
	float* v113; // rsi
	int v114; // eax
	int v115; // ecx
	int v116; // eax
	float v117; // xmm1_4
	float v118; // xmm0_4
	float v119; // xmm1_4
	int v120; // r8d
	int v121; // eax
	float v122; // xmm0_4
	int v123; // edx
	int v124; // eax
	__int64 v125; // rax
	__m128 v126; // xmm14
	__m128 v127; // xmm0
	__m128 v128; // xmm8
	__m128 v129; // xmm6
	double v130; // rax
	float v131; // xmm11_4
	float v132; // xmm9_4
	float v133; // xmm4_4
	float v134; // xmm2_4
	float v135; // xmm9_4
	float v136; // xmm7_4
	float v137; // xmm10_4
	float v138; // xmm11_4
	float v139; // xmm2_4
	float v140; // xmm12_4
	float v141; // xmm8_4
	unsigned int v142; // xmm2_4
	__m128 v143; // xmm7
	__m128 v144; // xmm12
	__m128 v145; // xmm0
	__m128 v146; // xmm2
	__m128 v147; // xmm0
	__m128 v148; // xmm1
	__m128 v149; // xmm2
	float v150; // xmm2_4
	int v151; // edx
	int v152; // eax
	int v153; // ebx
	double v154; // xmm0_8
	double v155; // rbx
	__int64 v156; // rax
	__int128 v157; // xmm1
	double v158; // xmm6_8
	float v159; // xmm11_4
	float v160; // xmm10_4
	float v161; // xmm7_4
	float v162; // xmm0_4
	float v163; // xmm5_4
	float v164; // xmm0_4
	float v165; // xmm10_4
	float v166; // xmm2_4
	float v167; // xmm9_4
	float v168; // xmm7_4
	float v169; // xmm3_4
	float v170; // xmm4_4
	float v171; // xmm8_4
	float v172; // xmm11_4
	int v173; // ecx
	int v174; // eax
	float v175; // xmm4_4
	__int64 v176; // rcx
	__int64 v177; // rax
	__m128 v178; // xmm0
	__m128 v179; // xmm2
	__m128 v180; // xmm0
	int v181; // eax
	__m128 v182; // xmm2
	__m128 v183; // xmm1
	double v184; // xmm6_8
	float v185; // xmm11_4
	float v186; // xmm10_4
	float v187; // xmm7_4
	float v188; // xmm0_4
	float v189; // xmm5_4
	float v190; // xmm1_4
	float v191; // xmm0_4
	float v192; // xmm2_4
	float v193; // xmm10_4
	float v194; // xmm9_4
	float v195; // xmm7_4
	float v196; // xmm3_4
	float v197; // xmm11_4
	float v198; // xmm8_4
	float v199; // xmm4_4
	__m128 v200; // xmm0
	__m128 v201; // xmm2
	__m128 v202; // xmm1
	__m128 v203; // xmm0
	double v204; // xmm6_8
	float v205; // xmm11_4
	float v206; // xmm10_4
	float v207; // xmm7_4
	float v208; // xmm0_4
	float v209; // xmm10_4
	float v210; // xmm8_4
	float v211; // xmm3_4
	float v212; // xmm7_4
	float v213; // xmm4_4
	float v214; // xmm9_4
	float v215; // xmm5_4
	float v216; // xmm8_4
	float v217; // xmm2_4
	float v218; // xmm7_4
	float v219; // xmm10_4
	unsigned int v220; // xmm1_4
	float v221; // xmm11_4
	__m128 v222; // xmm1
	__m128 v223; // xmm0
	int v224; // ebx
	float v225; // xmm9_4
	int v226; // esi
	float v227; // xmm12_4
	int v228; // eax
	__m128 v229; // xmm1
	__m128 v230; // xmm6
	float v231; // xmm0_4
	float v232; // xmm0_4
	__m128* v233; // rsi
	__int64 v234; // rax
	float v235; // xmm0_4
	__m128 v236; // xmm1
	__int64 v237; // rax
	int v238; // eax
	float v239; // xmm1_4
	double v240; // xmm6_8
	float v241; // xmm10_4
	float v242; // xmm9_4
	float v243; // xmm7_4
	float v244; // xmm0_4
	float v245; // xmm10_4
	float v246; // xmm8_4
	float v247; // xmm7_4
	float v248; // xmm4_4
	float v249; // xmm3_4
	float v250; // xmm5_4
	float v251; // xmm9_4
	float v252; // xmm2_4
	float v253; // xmm8_4
	float v254; // xmm11_4
	float v255; // xmm7_4
	float v256; // xmm1_4
	float v257; // xmm10_4
	__m128 v258; // xmm3
	_DWORD* v259; // rsi
	__m128 v260; // xmm2
	__m128 v261; // xmm2
	__m128 v262; // xmm2
	__m128 v263; // xmm9
	float v264; // xmm1_4
	bool v265; // cf
	bool v266; // zf
	__m128 v267; // xmm1
	__m128 v268; // xmm6
	__m128 v269; // xmm3
	__m128 v270; // xmm4
	__m128 v271; // xmm1
	__m128 v272; // xmm2
	__int64 v273; // r8
	__m128 v274; // xmm4
	__m128 v275; // xmm3
	unsigned __int32 v276; // xmm0_4
	__m128 v277; // xmm4
	__m128 v278; // xmm6
	bool v279; // cc
	float v280; // xmm3_4
	__int64 v281; // rdx
	float v282; // xmm0_4
	__int64 v283; // r8
	float v284; // xmm4_4
	__int64 v285; // rdx
	float v286; // xmm0_4
	__int64 v287; // r8
	__int64 v288; // rdx
	int* v289; // rax
	int v290; // ecx
	int v291; // eax
	float v292; // xmm1_4
	float v293; // xmm0_4
	int* v294; // rax
	int v295; // r8d
	int v296; // eax
	int v297; // edx
	int v298; // eax
	int v299; // edx
	int v300; // eax
	int v301; // eax
	int v302; // eax
	__m128* v303; // rdx
	float v304; // xmm0_4
	__int64 v305; // rax
	__m128 v306; // xmm0
	__m128 v307; // xmm0
	__m128 v308; // xmm0
	int v309; // eax
	int v310; // eax
	int v311; // eax
	float v312; // xmm0_4
	int v313; // r13d
	__m128 v314; // xmm0
	float v315; // ecx
	__m128 v316; // xmm6
	float v317; // xmm15_4
	__int64 v318; // xmm0_8
	int v319; // edx
	double v320; // xmm7_8
	int v321; // ebx
	double v322; // xmm8_8
	double v323; // xmm9_8
	double v324; // xmm10_8
	double v325; // xmm11_8
	double v326; // xmm12_8
	unsigned int v327; // eax
	int v328; // eax
	int v329; // ebx
	__int64 v331; // [rsp+28h] [rbp-190h]
	__int64 v332; // [rsp+30h] [rbp-188h]
	__int64 v333; // [rsp+38h] [rbp-180h]
	__int64 v334; // [rsp+40h] [rbp-178h]
	__m128 v335; // [rsp+138h] [rbp-80h] BYREF
	int v336; // [rsp+148h] [rbp-70h]
	__int64 v337; // [rsp+150h] [rbp-68h]
	double v338; // [rsp+158h] [rbp-60h]
	float v339; // [rsp+160h] [rbp-58h]
	__int64 v340; // [rsp+168h] [rbp-50h]
	__m128 v341; // [rsp+178h] [rbp-40h] BYREF
	__m128 v342; // [rsp+188h] [rbp-30h] BYREF
	double v343; // [rsp+198h] [rbp-20h]
	double v344; // [rsp+1A0h] [rbp-18h]
	__m128 v345; // [rsp+1A8h] [rbp-10h] BYREF
	double v346; // [rsp+1B8h] [rbp+0h]
	__m128 v347; // [rsp+1C8h] [rbp+10h]
	double v348; // [rsp+1D8h] [rbp+20h] BYREF
	double v349; // [rsp+1E0h] [rbp+28h] BYREF
	_OWORD* v350; // [rsp+1E8h] [rbp+30h]
	double v351; // [rsp+1F0h] [rbp+38h] BYREF
	double v352; // [rsp+1F8h] [rbp+40h] BYREF
	double v353; // [rsp+200h] [rbp+48h] BYREF
	double v354[2]; // [rsp+208h] [rbp+50h] BYREF
	__int128 v355; // [rsp+218h] [rbp+60h]
	__m128 TlsValue; // [rsp+228h] [rbp+70h] BYREF
	LPVOID lpTlsValue; // [rsp+238h] [rbp+80h]
	__int64 v358; // [rsp+240h] [rbp+88h]
	int v359; // [rsp+248h] [rbp+90h]
	__int64 v360; // [rsp+250h] [rbp+98h]
	__m128 v361; // [rsp+258h] [rbp+A0h] BYREF
	__m128 v362; // [rsp+268h] [rbp+B0h]
	int v363; // [rsp+278h] [rbp+C0h]
	__int64 v364; // [rsp+280h] [rbp+C8h]
	double v365; // [rsp+288h] [rbp+D0h]
	__m256 v366; // [rsp+298h] [rbp+E0h] BYREF
	__int128 v367; // [rsp+2B8h] [rbp+100h]
	__int128 v368; // [rsp+2C8h] [rbp+110h]
	__m128 v369; // [rsp+2D8h] [rbp+120h] BYREF
	__m128 v370; // [rsp+2E8h] [rbp+130h] BYREF
	__m128 v371; // [rsp+2F8h] [rbp+140h]
	__int128 v372; // [rsp+308h] [rbp+150h]
	char v373[32]; // [rsp+348h] [rbp+190h] BYREF
	float v374; // [rsp+368h] [rbp+1B0h]
	float v375; // [rsp+38Ch] [rbp+1D4h]
	float v376; // [rsp+3D8h] [rbp+220h]

	v11 = (int*)qword_140C63750;
	*(_QWORD*)&v12 = LODWORD(a6);
	v340 = a8;
	v13 = dword_140C4DAA0;
	v350 = a9;
	v15 = *(_DWORD*)qword_140C63750;
	v346 = *(double*)&a4;
	if (v15 < dword_140C4DAA0)
		v13 = v15;
	if (byte_140C4DAB0[v13])
	{
		v18 = dword_140C4D980;
		if (v15 < dword_140C4D980)
			v18 = v15;
		v19 = dword_140C4D990[v18];
	}
	else
	{
		v19 = *(float*)(a1 + 48);
	}
	if (v19 > 0.0000099999997)
	{
		HIDWORD(v21) = 0;
		*(float*)&v21 = (float)(a6 * -0.69314718) / v19;
		v20 = sub_1408FC7F0(v21);
		*(double*)&a4 = v346;
	}
	else
	{
		v20 = 0.0;
	}
	v24 = (__m128) * (unsigned int*)(a1 + 548);
	v22 = 1.0 - v20;
	v23 = *(float*)(a1 + 564);
	v339 = v22;
	v24.m128_f32[0] = (float)((float)((float)((float)(v24.m128_f32[0] - v23) * v22) + v23) + 3.1415927) * 0.15915494;
	v25 = v24.m128_f32[0];
	v26 = (int)v24.m128_f32[0];
	if ((int)v24.m128_f32[0] != 0x80000000 && (float)v26 != v24.m128_f32[0])
		v25 = (float)(v26 - (_mm_movemask_ps(_mm_unpacklo_ps(v24, v24)) & 1));
	v27 = *(float*)(a1 + 560);
	v28 = (__m128) * (unsigned int*)(a1 + 52);
	*(float*)(a1 + 564) = (float)((float)(v24.m128_f32[0] - v25) * 6.2831855) - 3.1415927;
	v29 = (float)((float)(*(float*)(a1 + 544) - v27) * v22) + v27;
	v30 = *(_DWORD*)(a1 + 56);
	*(float*)(a1 + 560) = v29;
	LODWORD(v338) = v30;
	v31 = *v11;
	v32 = dword_140C4DE40;
	v33 = dword_140C4DE40;
	if (*v11 < dword_140C4DE40)
		v33 = *v11;
	LODWORD(v343) = *(_DWORD*)(a1 + 60);
	if (*((float*)&xmmword_140C4DE50 + v33) < *(float*)(a1 + 668))
	{
		if (v31 < dword_140C4DE40)
			v32 = v31;
		*(_DWORD*)(a1 + 668) = *((_DWORD*)&xmmword_140C4DE50 + v32);
		v32 = dword_140C4DE40;
	}
	v34 = 0i64;
	if (*v11 < v32)
		v32 = *v11;
	*(float*)(a1 + 752) = fmaxf(0.0, fminf(*(float*)(a1 + 752), *((float*)&xmmword_140C4DE50 + v32)));
	v35 = dword_140C4DE40;
	v36 = dword_140C4DE40;
	if (*v11 < dword_140C4DE40)
		v36 = *v11;
	if (*((float*)&xmmword_140C4DE50 + v36) < *(float*)(a1 + 680))
	{
		if (*v11 < dword_140C4DE40)
			v35 = *v11;
		*(_DWORD*)(a1 + 680) = *((_DWORD*)&xmmword_140C4DE50 + v35);
	}
	v37 = *(float*)(a1 + 664);
	v38 = *(float*)(a1 + 660);
	v39 = qword_140C65898;
	v40 = dword_140C636A8;
	LODWORD(v344) = dword_140C636A8;
	v336 = 0;
	*(float*)(a1 + 664) = (float)((float)(v38 - v37) * v22) + v37;
	v41 = *(__m128**)(v39 + 25744);
	if (v41)
	{
		v42 = v41[367].m128_i64[0];
		v43 = v42;
		if (!v42)
			v43 = v41[367].m128_i64[1];
		if (v43 && !v41[252].m128_i32[3] && !*(_DWORD*)(a1 + 748))
		{
			if (!v42)
				v42 = v41[367].m128_i64[1];
			v44 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v42 + 264i64))(
				v42,
				0i64,
				0i64,
				1i64);
			if (v44 == 2)
			{
				v337 = v41[366].m128_i64[1];
				if (!v337)
				{
				LABEL_57:
					*(_DWORD*)(a1 + 728) = 0;
					*(_DWORD*)(a1 + 732) += (unsigned int)(v40 - *(_DWORD*)(a1 + 736)) >> 1;
				LABEL_60:
					v11 = (int*)qword_140C63750;
					goto LABEL_61;
				}
				v45 = v41[286];
				v348 = 0.0;
				v335 = v45;
				v349 = 0.0;
				v354[0] = 0.0;
				v361.m128_i32[2] = 0;
				v362 = 0ui64;
				v363 = 0;
				v364 = 0i64;
				v351 = 0.0078125;
				v46 = *a2;
				v361.m128_u64[0] = 16401i64;
				if ((*(unsigned int(__fastcall**)(__int64*, __int64, __m128*, double*, double*, __m128*))(v46 + 424))(
					a2,
					a1 + 640,
					&v335,
					&v351,
					&v348,
					&v361))
				{
					v47 = v41[300].m128_f32[1];
					v48 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v337 + 1216i64))(v337);
					v49 = _mm_mul_ps(_mm_add_ps(v48[1], *v48), (__m128)xmmword_140B7AC50);
					TlsValue.m128_i32[2] = 0;
					lpTlsValue = 0i64;
					v358 = 0i64;
					v359 = 0;
					v360 = 0i64;
					v353 = 0.0078125;
					v335.m128_f32[1] = v335.m128_f32[1] + (float)(v47 * _mm_shuffle_ps(v49, v49, 85).m128_f32[0]);
					v50 = *a2;
					TlsValue.m128_u64[0] = 16401i64;
					if ((*(unsigned int(__fastcall**)(__int64*, __int64, __m128*, double*, double*, __m128*))(v50 + 424))(
						a2,
						a1 + 640,
						&v335,
						&v353,
						&v349,
						&TlsValue))
					{
						v51 = v41[300].m128_f32[1];
						v52 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v337 + 1216i64))(v337);
						v53 = _mm_mul_ps(_mm_add_ps(v52[1], *v52), (__m128)xmmword_140B7AC50);
						v369.m128_i32[2] = 0;
						v370 = 0ui64;
						v371.m128_i32[0] = 0;
						v371.m128_u64[1] = 0i64;
						v335.m128_f32[1] = v335.m128_f32[1] + (float)(v51 * _mm_shuffle_ps(v53, v53, 85).m128_f32[0]);
						v352 = 0.0078125;
						v54 = *a2;
						v369.m128_u64[0] = 16401i64;
						if ((*(unsigned int(__fastcall**)(__int64*, __int64, __m128*, double*, double*, __m128*))(v54 + 424))(
							a2,
							a1 + 640,
							&v335,
							&v352,
							v354,
							&v369))
						{
							v44 = 1;
						}
					}
					v34 = 0i64;
				}
				if (v354[0] != 0.0)
					(*(void(__fastcall**)(double))(**(_QWORD**)&v354[0] + 8i64))(COERCE_DOUBLE(*(_QWORD*)&v354[0]));
				if (v349 != 0.0)
					(*(void(__fastcall**)(double))(**(_QWORD**)&v349 + 8i64))(COERCE_DOUBLE(*(_QWORD*)&v349));
				if (v348 != 0.0)
					(*(void(__fastcall**)(double))(**(_QWORD**)&v348 + 8i64))(COERCE_DOUBLE(*(_QWORD*)&v348));
			}
			if (v44 == 1)
			{
				v55 = v40 - *(_DWORD*)(a1 + 732);
				if (*(_DWORD*)(a1 + 728))
				{
					if (v55 > 0)
						v336 = 1;
				}
				else
				{
					*(_DWORD*)(a1 + 728) = 1;
					if (v55 > 0)
					{
						v56 = dword_140C4D880;
						v11 = (int*)qword_140C63750;
						if (*(_DWORD*)qword_140C63750 < dword_140C4D880)
							v56 = *(_DWORD*)qword_140C63750;
						*(_DWORD*)(a1 + 732) = v40 + (int)(float)(dword_140C4D890[v56] * 1000.0);
						goto LABEL_61;
					}
				}
				goto LABEL_60;
			}
			goto LABEL_57;
		}
	}
	*(_QWORD*)(a1 + 728) = 0i64;
	v336 = 1;
	if (*(_DWORD*)(a1 + 748))
	{
		v57 = *(__m128*)(a1 + 640);
		v58 = *a4;
		v59 = *(__m128*)(a1 + 688);
		v361 = _mm_min_ps(v59, v57);
		v362 = _mm_max_ps(v59, v57);
		(*(void(__fastcall**)(__int64*, __m128*))(v58 + 88))(a4, &v361);
		*(_DWORD*)(a1 + 748) = 0;
		goto LABEL_60;
	}
LABEL_61:
	*(_DWORD*)(a1 + 736) = v40;
	v60 = *v11;
	v61 = dword_140C4D9E0;
	if (a11)
	{
		v62 = *(float*)(a1 + 680);
		if (v60 < dword_140C4D9E0)
			v61 = *v11;
		v63 = (float)(v62 * dword_140C4D9F0[v61]) * 0.03125;
		if (v63 > 0.0000099999997)
		{
			HIDWORD(v65) = 0;
			*(float*)&v65 = (float)(a6 * -0.69314718) / v63;
			v64 = sub_1408FC7F0(v65);
		}
		else
		{
			v64 = v34.m128_f32[0];
		}
		v66 = dword_140C4DA40;
		if (v60 < dword_140C4DA40)
			v66 = v60;
		v67 = 1.0 - v64;
		v68 = (float)(v62 * dword_140C4DA50[v66]) * 0.03125;
		if (v68 > 0.0000099999997)
		{
			*(float*)&v12 = (float)(a6 * -0.69314718) / v68;
			v69 = sub_1408FC7F0(v12);
		}
		else
		{
			v69 = v34.m128_f32[0];
		}
		v70 = *(float*)(a1 + 752);
		v71 = *(float*)(a1 + 672);
		if (v70 < v71)
			goto LABEL_75;
		if (v71 >= v62)
		{
		LABEL_76:
			v72 = (float)((float)(v62 - v71) * v67) + v71;
		LABEL_93:
			*(float*)(a1 + 672) = v72;
			*(float*)(a1 + 752) = v72;
			goto LABEL_101;
		}
		if (v70 <= v71)
		{
		LABEL_75:
			if (v71 <= v62)
				goto LABEL_76;
		}
		*(float*)(a1 + 672) = (float)((float)((float)(v70 - v71) * (float)(1.0 - v69)) + v71)
			+ (float)((float)((float)((float)((float)((float)(v71 + v62) - v70) - v71) * v67) + v71) - v71);
		goto LABEL_101;
	}
	v73 = *(float*)(a1 + 668);
	if (v60 < dword_140C4D9E0)
		v61 = *v11;
	v74 = (float)(v73 * dword_140C4D9F0[v61]) * 0.03125;
	if (v74 > 0.0000099999997)
	{
		HIDWORD(v76) = 0;
		*(float*)&v76 = (float)(a6 * -0.69314718) / v74;
		v75 = sub_1408FC7F0(v76);
	}
	else
	{
		v75 = v34.m128_f32[0];
	}
	v77 = dword_140C4DA40;
	if (v60 < dword_140C4DA40)
		v77 = v60;
	v78 = 1.0 - v75;
	*(float*)&v337 = 1.0 - v75;
	v79 = (float)(v73 * dword_140C4DA50[v77]) * 0.03125;
	if (v79 > 0.0000099999997)
	{
		*(float*)&v12 = (float)(a6 * -0.69314718) / v79;
		v80 = sub_1408FC7F0(v12);
		v78 = *(float*)&v337;
	}
	else
	{
		v80 = v34.m128_f32[0];
	}
	v81 = *(float*)(a1 + 752);
	v82 = 1.0 - v80;
	v83 = *(float*)(a1 + 672);
	if (v81 < v83)
		goto LABEL_91;
	if (v83 >= v73)
	{
	LABEL_92:
		v72 = (float)((float)(v73 - v83) * v78) + v83;
		goto LABEL_93;
	}
	if (v81 <= v83)
	{
	LABEL_91:
		if (v83 <= v73)
			goto LABEL_92;
	}
	v84 = (float)((float)((float)(v83 + v73) - v81) - v83) * v78;
	v85 = (float)(v81 - v83) * v82;
	v86 = *(float*)(a1 + 672);
	v87 = v85 + v83;
	v88 = (float)(v84 + v83) - v83;
	if (fabs(v86 - v87) <= 0.001)
	{
		if (fabs(v86 - v81) > 0.001)
		{
			if (v86 >= v81)
				v87 = v86 - 0.001;
			else
				v87 = v86 + 0.001;
		}
		else
		{
			v87 = *(float*)(a1 + 752);
		}
	}
	*(float*)(a1 + 672) = v87 + v88;
LABEL_101:
	v89 = *(float*)(a1 + 672);
	*(_DWORD*)(a1 + 80) = 1065353216;
	v90 = dword_140C4DE40;
	v91 = dword_140C4DE40;
	if (*v11 < dword_140C4DE40)
		v91 = *v11;
	if (v89 > *((float*)&xmmword_140C4DE50 + v91))
	{
		if (*v11 < dword_140C4DE40)
			v90 = *v11;
		*(_DWORD*)(a1 + 672) = *((_DWORD*)&xmmword_140C4DE50 + v90);
		v90 = dword_140C4DE40;
	}
	v28.m128_f32[0] = (float)((float)(v28.m128_f32[0] + *(float*)(a1 + 564)) + 3.1415927) * 0.15915494;
	v92 = v28.m128_f32[0];
	v93 = (int)v28.m128_f32[0];
	if ((int)v28.m128_f32[0] != 0x80000000 && (float)v93 != v28.m128_f32[0])
		v92 = (float)(v93 - (_mm_movemask_ps(_mm_unpacklo_ps(v28, v28)) & 1));
	v94 = 0xBFC90FDB;
	v95 = 0xBFC90FDB;
	v28.m128_f32[0] = (float)((float)(v28.m128_f32[0] - v92) * 6.2831855) - 3.1415927;
	*(float*)&v95 = fmaxf(-1.5707964, fminf(*(float*)&v338 + *(float*)(a1 + 560), 1.5707964));
	if (*(_DWORD*)(a1 + 720))
	{
		v28 = (__m128) * (unsigned int*)(a1 + 592);
		v28.m128_f32[0] = (float)(v28.m128_f32[0] + 3.1415927) * 0.15915494;
		v96 = v28.m128_f32[0];
		v97 = (int)v28.m128_f32[0];
		if ((int)v28.m128_f32[0] != 0x80000000 && (float)v97 != v28.m128_f32[0])
			v96 = (float)(v97 - (_mm_movemask_ps(_mm_unpacklo_ps(v28, v28)) & 1));
		v98 = *(float*)(a1 + 596);
		*(_DWORD*)(a1 + 720) = 0;
		v90 = dword_140C4DE40;
		*(float*)&v94 = fmaxf(-1.5707964, fminf(v98, 1.5707964));
		v28.m128_f32[0] = (float)((float)(v28.m128_f32[0] - v96) * 6.2831855) - 3.1415927;
		v95 = v94;
	}
	v99 = v350;
	v100 = (__int128*)v340;
	if (!*(_DWORD*)(a1 + 724)
		|| (v101 = _mm_sub_ps(*(__m128*)(a1 + 704), *(__m128*)v350),
			v102 = _mm_mul_ps(v101, v101),
			(float)((float)(v102.m128_f32[0] + _mm_shuffle_ps(v102, v102, 85).m128_f32[0])
				+ _mm_shuffle_ps(v102, v102, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8)
		|| (v103 = _mm_sub_ps(*(__m128*)(a1 + 688), *(__m128*)v340),
			v104 = _mm_mul_ps(v103, v103),
			(float)((float)(v104.m128_f32[0] + _mm_shuffle_ps(v104, v104, 85).m128_f32[0])
				+ _mm_shuffle_ps(v104, v104, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8))
	{
		v105 = *v11;
		v106 = dword_140C4DD80;
		v107 = *(float*)(a1 + 672);
		v108 = dword_140C4DD80;
		if (*v11 < dword_140C4DD80)
			v108 = *v11;
		if (v107 <= dword_140C4DD90[v108])
		{
			v110 = v34;
		}
		else
		{
			v109 = dword_140C4DD80;
			if (v105 < dword_140C4DD80)
				v109 = *v11;
			if (v105 < v90)
				v90 = *v11;
			if (v105 < dword_140C4DD80)
				v106 = *v11;
			v110 = 0i64;
			v110.m128_f32[0] = fmaxf(
				0.0,
				fminf(
					(float)(v107 - dword_140C4DD90[v109])
					/ (float)(*((float*)&xmmword_140C4DE50 + v90) - dword_140C4DD90[v106]),
					1.0));
		}
		*(__m128*)(a1 + 624) = _mm_add_ps(
			_mm_mul_ps(_mm_sub_ps(*(__m128*)v340, *(__m128*)v350), _mm_shuffle_ps(v110, v110, 0)),
			*(__m128*)v350);
	}
	*(_OWORD*)(a1 + 64) = *v99;
	v111 = *v100;
	*(_OWORD*)(a1 + 608) = *v100;
	*(_OWORD*)(a1 + 688) = v111;
	*(_OWORD*)(a1 + 704) = *(_OWORD*)(a1 + 64);
	v112 = dword_140C4DBE0;
	v366 = ymmword_140C78390;
	v367 = xmmword_140C783B0;
	v368 = xmmword_140C783C0;
	if (*v11 < dword_140C4DBE0)
		v112 = *v11;
	if (*((_BYTE*)&dword_140C4DBF0 + v112))
	{
		(*(void(__fastcall**)(_QWORD, __m256*))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 24i64) + 72i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64),
			&ymmword_140C78390);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 16i64) + 48i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64),
			(unsigned int)dword_140C636A8,
			0i64);
		v113 = (float*)(a1 + 16);
		v114 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, __int64, __int64, __m256*, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 24i64) + 1064i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64),
			2i64,
			**(_QWORD**)(*(_QWORD*)(a1 + 8) + 24i64),
			a1 + 16,
			a1 + 504,
			&v366,
			0i64,
			a1 + 224);
		v11 = (int*)qword_140C63750;
		if (v114 >= 0)
		{
			v115 = dword_140C4DEA0;
			if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
				v115 = *(_DWORD*)qword_140C63750;
			*v113 = fmaxf(
				0.0,
				fminf((float)(*((float*)&xmmword_140C4DEB0 + v115) / *(float*)&dword_140C4DECC) * *v113, 180.0));
		}
	}
	else
	{
		v116 = dword_140C4DEA0;
		v113 = (float*)(a1 + 16);
		if (*v11 < dword_140C4DEA0)
			v116 = *v11;
		*v113 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *((float*)&xmmword_140C4DEB0 + v116);
	}
	v117 = *v113;
	LODWORD(v337) = v34.m128_i32[0];
	v118 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 50.0;
	v119 = (float)((float)(v117 - *(float*)(a1 + 20)) * v22) + *(float*)(a1 + 20);
	*(float*)(a1 + 20) = v119;
	v120 = *v11;
	v121 = dword_140C4DC20;
	v122 = v118 / v119;
	if (*v11 < dword_140C4DC20)
		v121 = *v11;
	*(float*)&v338 = v122;
	if (byte_140C4DC30[v121])
	{
		v123 = dword_140C4DC60;
		v124 = dword_140C4DC60;
		if (v120 < dword_140C4DC60)
			v124 = v120;
		if (v34.m128_f32[0] != dword_140C4DC70[v124])
		{
			if (v120 < dword_140C4DC60)
				v123 = v120;
			*(float*)&v337 = dword_140C4DC70[v123];
		}
	}
	v125 = *a3;
	v126.m128_i32[0] = v34.m128_i32[0];
	v127 = _mm_shuffle_ps((__m128)LODWORD(a5), (__m128)LODWORD(a5), 0);
	v128 = _mm_mul_ps((__m128)xmmword_140B7A740, v127);
	v129 = _mm_mul_ps((__m128)xmmword_140B7A8D0, v127);
	v355 = (__int128)v128;
	v345 = v129;
	v130 = COERCE_DOUBLE((*(__int64(__fastcall**)(__int64*))(v125 + 24))(a3));
	*(double*)&v340 = v130;
	**(_OWORD**)&v130 = v129;
	v129.m128_u64[0] = LODWORD(v343);
	*(__m128*)(*(_QWORD*)&v130 + 16i64) = v128;
	v129.m128_f32[0] = v129.m128_f32[0] * 0.5;
	*(_OWORD*)(*(_QWORD*)&v130 + 32i64) = *(_OWORD*)(a1 + 640);
	LODWORD(v343) = v129.m128_i32[0];
	sub_1408FE3D0(*(double*)v129.m128_u64);
	sub_1408FC950(*(double*)v129.m128_u64);
	*(float*)&v95 = *(float*)&v95 * 0.5;
	v347 = (__m128)v95;
	sub_1408FE3D0(*(double*)&v95);
	sub_1408FC950(*(double*)&v95);
	v28.m128_f32[0] = v28.m128_f32[0] * 0.5;
	sub_1408FE3D0(*(double*)v28.m128_u64);
	v127.m128_f32[0] = sub_1408FC950(*(double*)v28.m128_u64);
	v335.m128_f32[1] = (float)(v129.m128_f32[0] * (float)(v28.m128_f32[0] * *(float*)&v95))
		- (float)(v129.m128_f32[0] * (float)(v127.m128_f32[0] * *(float*)&v95));
	v335.m128_f32[0] = (float)(v129.m128_f32[0] * (float)(v127.m128_f32[0] * *(float*)&v95))
		+ (float)(v129.m128_f32[0] * (float)(v28.m128_f32[0] * *(float*)&v95));
	v335.m128_f32[2] = (float)(v129.m128_f32[0] * (float)(v127.m128_f32[0] * *(float*)&v95))
		- (float)(v129.m128_f32[0] * (float)(v28.m128_f32[0] * *(float*)&v95));
	v335.m128_f32[3] = (float)(v129.m128_f32[0] * (float)(v28.m128_f32[0] * *(float*)&v95))
		+ (float)(v129.m128_f32[0] * (float)(v127.m128_f32[0] * *(float*)&v95));
	v131 = _mm_shuffle_ps(v335, v335, 85).m128_f32[0];
	v132 = _mm_shuffle_ps(v335, v335, 170).m128_f32[0];
	v133 = v132 * 2.0;
	v134 = v335.m128_f32[0] * (float)(v131 * 2.0);
	v135 = v132 * (float)(v132 * 2.0);
	v369.m128_i32[3] = 0;
	v370.m128_i32[3] = 0;
	v127.m128_f32[0] = _mm_shuffle_ps(v335, v335, 255).m128_f32[0];
	v136 = v131 * (float)(v131 * 2.0);
	v128.m128_f32[0] = (float)(v131 * 2.0) * v127.m128_f32[0];
	v137 = (float)(v335.m128_f32[0] * 2.0) * v127.m128_f32[0];
	v369.m128_f32[0] = (float)(1.0 - v136) - v135;
	v138 = v131 * v133;
	v370.m128_f32[0] = v134 - (float)(v133 * v127.m128_f32[0]);
	v369.m128_f32[1] = v134 + (float)(v133 * v127.m128_f32[0]);
	v369.m128_f32[2] = (float)(v335.m128_f32[0] * v133) - v128.m128_f32[0];
	v139 = 1.0 - (float)(v335.m128_f32[0] * (float)(v335.m128_f32[0] * 2.0));
	v140 = (float)(v335.m128_f32[0] * v133) + v128.m128_f32[0];
	v141 = 1.0;
	v127.m128_f32[0] = v139 - v135;
	*(float*)&v142 = v139 - v136;
	v143 = 0i64;
	v370.m128_i32[1] = v127.m128_i32[0];
	v370.m128_f32[2] = v138 + v137;
	v371.m128_u64[1] = v142;
	v371.m128_f32[0] = v140;
	v144 = (__m128)LODWORD(v338);
	v145 = (__m128)LODWORD(v338);
	v145.m128_f32[0] = *(float*)&v338 * *(float*)(a1 + 672);
	v371.m128_f32[1] = v138 - v137;
	LODWORD(v338) = 1065353216;
	v146 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v145), (__m128)0i64);
	v147 = _mm_add_ps(
		*(__m128*)(a1 + 624),
		_mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v146, v146, 85), v370),
					_mm_mul_ps(_mm_shuffle_ps(v146, v146, 0), v369)),
				_mm_mul_ps(_mm_shuffle_ps(v146, v146, 170), v371)),
			(__m128)xmmword_140B7AD00));
	v148 = _mm_sub_ps(*(__m128*)(a1 + 640), v147);
	v341 = v147;
	v149 = _mm_mul_ps(v148, v148);
	v150 = (float)(v149.m128_f32[0] + _mm_shuffle_ps(v149, v149, 85).m128_f32[0])
		+ _mm_shuffle_ps(v149, v149, 170).m128_f32[0];
	if (*(_DWORD*)(a1 + 724))
	{
		v153 = LODWORD(v344);
	LABEL_161:
		v141 = 0.0;
		goto LABEL_162;
	}
	v151 = dword_140C4DE40;
	v152 = dword_140C4DE40;
	if (*(_DWORD*)qword_140C63750 < dword_140C4DE40)
		v152 = *(_DWORD*)qword_140C63750;
	if (*(_DWORD*)qword_140C63750 < dword_140C4DE40)
		v151 = *(_DWORD*)qword_140C63750;
	v153 = LODWORD(v344);
	if (v150 > (float)((float)(*((float*)&xmmword_140C4DE50 + v152) * 2.0) * *((float*)&xmmword_140C4DE50 + v151))
		|| v336
		|| *(_DWORD*)(a1 + 744) && LODWORD(v344) - *(_DWORD*)(a1 + 740) < 0)
	{
		goto LABEL_161;
	}
	if (v150 <= 0.00000011920929)
		goto LABEL_163;
	v154 = (*(double(__fastcall**)(__int64*, __m128*, __int64))(*a3 + 72))(a3, &v341, 16401i64);
	*(_DWORD*)(a1 + 744) = 0;
	v141 = *(float*)&v154;
LABEL_162:
	*(float*)&v338 = v141;
LABEL_163:
	*(_DWORD*)(a1 + 724) = 0;
	if (v141 >= 1.0)
		goto LABEL_176;
	if (!*(_DWORD*)(a1 + 744))
	{
		*(_DWORD*)(a1 + 744) = 1;
		*(_DWORD*)(a1 + 740) = v153 + 1000;
	}
	v155 = v346;
	v156 = (*(__int64(__fastcall**)(double))(**(_QWORD**)&v346 + 24i64))(COERCE_DOUBLE(*(_QWORD*)&v346));
	v157 = v355;
	*(_QWORD*)&v158 = LODWORD(v343);
	*(__m128*)v156 = v345;
	*(_OWORD*)(v156 + 16) = v157;
	*(_OWORD*)(v156 + 32) = *(_OWORD*)(a1 + 624);
	sub_1408FE3D0(v158);
	v159 = *(float*)&v158;
	sub_1408FC950(v158);
	v160 = *(float*)&v158;
	v161 = sub_1408FE3D0(*(double*)v347.m128_u64);
	LODWORD(v158) = sub_1408FC950(*(double*)v347.m128_u64);
	sub_1408FE3D0(*(double*)v28.m128_u64);
	v162 = sub_1408FC950(*(double*)v28.m128_u64);
	v335.m128_f32[0] = (float)(v160 * (float)(v162 * v161)) + (float)(v159 * (float)(v28.m128_f32[0] * *(float*)&v158));
	v335.m128_f32[1] = (float)(v160 * (float)(v28.m128_f32[0] * *(float*)&v158)) - (float)(v159 * (float)(v162 * v161));
	v335.m128_f32[2] = (float)(v159 * (float)(v162 * *(float*)&v158)) - (float)(v160 * (float)(v28.m128_f32[0] * v161));
	v335.m128_f32[3] = (float)(v159 * (float)(v28.m128_f32[0] * v161)) + (float)(v160 * (float)(v162 * *(float*)&v158));
	v163 = _mm_shuffle_ps(v335, v335, 85).m128_f32[0];
	*(float*)&v157 = _mm_shuffle_ps(v335, v335, 170).m128_f32[0];
	v164 = _mm_shuffle_ps(v335, v335, 255).m128_f32[0];
	v165 = (float)(v335.m128_f32[0] * 2.0) * v335.m128_f32[0];
	v166 = (float)(v163 * 2.0) * v335.m128_f32[0];
	v167 = (float)(v335.m128_f32[0] * 2.0) * v164;
	v168 = (float)(v163 * 2.0) * v164;
	v169 = (float)(*(float*)&v157 * 2.0) * v164;
	v170 = *(float*)&v157 * 2.0;
	v171 = (float)(*(float*)&v157 * 2.0) * *(float*)&v157;
	v172 = (float)(v163 * 2.0) * v163;
	*(float*)&v157 = (float)(*(float*)&v157 * 2.0) * v335.m128_f32[0];
	v173 = *(_DWORD*)qword_140C63750;
	v174 = dword_140C4DE40;
	v370.m128_i32[3] = 0;
	*(float*)&v158 = *(float*)&v157 + v168;
	*(float*)&v157 = *(float*)&v157 - v168;
	v371.m128_i32[0] = LODWORD(v158);
	v175 = v170 * v163;
	v143 = 0i64;
	v371.m128_i32[3] = 0;
	v369.m128_u64[1] = (unsigned int)v157;
	v369.m128_f32[0] = (float)(1.0 - v172) - v171;
	if (v173 < dword_140C4DE40)
		v174 = v173;
	v176 = v174;
	v177 = **(_QWORD**)&v155;
	v370.m128_f32[2] = v175 + v167;
	v369.m128_f32[1] = v166 + v169;
	v370.m128_f32[0] = v166 - v169;
	v371.m128_f32[1] = v175 - v167;
	v370.m128_f32[1] = (float)(1.0 - v165) - v171;
	v371.m128_f32[2] = (float)(1.0 - v165) - v172;
	v178 = v144;
	v178.m128_f32[0] = v144.m128_f32[0] * *((float*)&xmmword_140C4DE50 + v176);
	v179 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v178), (__m128)0i64);
	v180 = _mm_add_ps(
		*(__m128*)(a1 + 624),
		_mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v179, v179, 85), v370),
					_mm_mul_ps(_mm_shuffle_ps(v179, v179, 0), v369)),
				_mm_mul_ps(_mm_shuffle_ps(v179, v179, 170), v371)),
			(__m128)xmmword_140B7AD00));
	v342 = v180;
	*(double*)v180.m128_u64 = (*(double(__fastcall**)(double, __m128*, __int64))(v177 + 72))(
		COERCE_DOUBLE(*(_QWORD*)&v155),
		&v342,
		16401i64);
	v141 = v180.m128_f32[0];
	LODWORD(v338) = v180.m128_i32[0];
	if (v180.m128_f32[0] >= 1.0)
	{
		*(_QWORD*)&v204 = LODWORD(v343);
		v205 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)LODWORD(v343)));
		sub_1408FC950(v204);
		v206 = *(float*)&v204;
		v207 = sub_1408FE3D0(*(double*)v347.m128_u64);
		LODWORD(v204) = sub_1408FC950(*(double*)v347.m128_u64);
		sub_1408FE3D0(*(double*)v28.m128_u64);
		v208 = sub_1408FC950(*(double*)v28.m128_u64);
		v335.m128_f32[0] = (float)(v206 * (float)(v208 * v207)) + (float)(v205 * (float)(v28.m128_f32[0] * *(float*)&v204));
		v335.m128_f32[1] = (float)(v206 * (float)(v28.m128_f32[0] * *(float*)&v204)) - (float)(v205 * (float)(v208 * v207));
		v335.m128_f32[2] = (float)(v205 * (float)(v208 * *(float*)&v204)) - (float)(v206 * (float)(v28.m128_f32[0] * v207));
		v335.m128_f32[3] = (float)(v205 * (float)(v28.m128_f32[0] * v207)) + (float)(v206 * (float)(v208 * *(float*)&v204));
		v209 = _mm_shuffle_ps(v335, v335, 85).m128_f32[0];
		v210 = _mm_shuffle_ps(v335, v335, 170).m128_f32[0];
		v211 = v210 * 2.0;
		v212 = _mm_shuffle_ps(v335, v335, 255).m128_f32[0];
		v213 = v335.m128_f32[0] * (float)(v335.m128_f32[0] * 2.0);
		v214 = v212 * (float)(v335.m128_f32[0] * 2.0);
		v215 = v209 * (float)(v209 * 2.0);
		v216 = v210 * (float)(v210 * 2.0);
		v217 = v335.m128_f32[0] * (float)(v209 * 2.0);
		v369.m128_f32[0] = (float)(1.0 - v215) - v216;
		*(float*)&v204 = v212 * v211;
		v218 = v212 * (float)(v209 * 2.0);
		v219 = v209 * v211;
		v144.m128_f32[0] = v144.m128_f32[0] * *(float*)(a1 + 672);
		v369.m128_f32[1] = v217 + *(float*)&v204;
		v370.m128_i32[3] = 0;
		*(float*)&v220 = (float)(v335.m128_f32[0] * v211) - v218;
		v370.m128_f32[0] = v217 - *(float*)&v204;
		v221 = (float)(v335.m128_f32[0] * v211) + v218;
		v143 = 0i64;
		v369.m128_u64[1] = v220;
		v371.m128_f32[0] = v221;
		v370.m128_f32[2] = v219 + v214;
		v370.m128_f32[1] = (float)(1.0 - v213) - v216;
		v371.m128_f32[2] = (float)(1.0 - v213) - v215;
		v201 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v144), (__m128)0i64);
		v371.m128_f32[1] = v219 - v214;
		v202 = _mm_mul_ps(_mm_shuffle_ps(v201, v201, 0), v369);
		v203 = _mm_mul_ps(_mm_shuffle_ps(v201, v201, 85), v370);
	}
	else
	{
		v181 = dword_140C4DE40;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DE40)
			v181 = *(_DWORD*)qword_140C63750;
		v180.m128_f32[0] = v180.m128_f32[0] * *((float*)&xmmword_140C4DE50 + v181);
		if (v180.m128_f32[0] < *(float*)(a1 + 672))
		{
			v182 = v342;
			*(_DWORD*)(a1 + 752) = v180.m128_i32[0];
			*(_DWORD*)(a1 + 672) = v180.m128_i32[0];
			v183 = *(__m128*)(a1 + 624);
			v180.m128_f32[0] = v141;
			*(_DWORD*)(a1 + 724) = 1;
			v341 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v182, v183), _mm_shuffle_ps(v180, v180, 0)), v183);
			goto LABEL_176;
		}
		*(_QWORD*)&v184 = LODWORD(v343);
		v185 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)LODWORD(v343)));
		sub_1408FC950(v184);
		v186 = *(float*)&v184;
		v187 = sub_1408FE3D0(*(double*)v347.m128_u64);
		LODWORD(v184) = sub_1408FC950(*(double*)v347.m128_u64);
		sub_1408FE3D0(*(double*)v28.m128_u64);
		v188 = sub_1408FC950(*(double*)v28.m128_u64);
		v335.m128_f32[0] = (float)(v186 * (float)(v188 * v187)) + (float)(v185 * (float)(v28.m128_f32[0] * *(float*)&v184));
		v335.m128_f32[1] = (float)(v186 * (float)(v28.m128_f32[0] * *(float*)&v184)) - (float)(v185 * (float)(v188 * v187));
		v335.m128_f32[2] = (float)(v185 * (float)(v188 * *(float*)&v184)) - (float)(v186 * (float)(v28.m128_f32[0] * v187));
		v335.m128_f32[3] = (float)(v186 * (float)(v188 * *(float*)&v184)) + (float)(v185 * (float)(v28.m128_f32[0] * v187));
		v189 = _mm_shuffle_ps(v335, v335, 85).m128_f32[0];
		v190 = _mm_shuffle_ps(v335, v335, 170).m128_f32[0];
		v191 = _mm_shuffle_ps(v335, v335, 255).m128_f32[0];
		v192 = (float)(v189 * 2.0) * v335.m128_f32[0];
		v193 = (float)(v335.m128_f32[0] * 2.0) * v335.m128_f32[0];
		v194 = (float)(v335.m128_f32[0] * 2.0) * v191;
		v195 = (float)(v189 * 2.0) * v191;
		v196 = (float)(v190 * 2.0) * v191;
		v197 = (float)(v189 * 2.0) * v189;
		v198 = (float)(v190 * 2.0) * v190;
		v199 = (float)(v190 * 2.0) * v189;
		v369.m128_f32[0] = (float)(1.0 - v197) - v198;
		v369.m128_i32[3] = 0;
		v370.m128_i32[3] = 0;
		v370.m128_f32[0] = v192 - v196;
		v369.m128_f32[1] = v192 + v196;
		v369.m128_f32[2] = (float)((float)(v190 * 2.0) * v335.m128_f32[0]) - v195;
		*(float*)&v184 = (float)((float)(v190 * 2.0) * v335.m128_f32[0]) + v195;
		v143 = 0i64;
		v370.m128_f32[1] = (float)(1.0 - v193) - v198;
		v200 = (__m128) * (unsigned int*)(a1 + 672);
		v370.m128_f32[2] = v199 + v194;
		v200.m128_f32[0] = v200.m128_f32[0] * v144.m128_f32[0];
		v371.m128_f32[2] = (float)(1.0 - v193) - v197;
		v371.m128_i32[0] = LODWORD(v184);
		v201 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v200), (__m128)0i64);
		v371.m128_f32[1] = v199 - v194;
		v202 = _mm_mul_ps(_mm_shuffle_ps(v201, v201, 85), v370);
		v203 = _mm_mul_ps(_mm_shuffle_ps(v201, v201, 0), v369);
	}
	v141 = *(float*)&v338;
	v222 = _mm_add_ps(v202, v203);
	v223 = *(__m128*)(a1 + 624);
	v371.m128_i32[3] = 0;
	v341 = _mm_add_ps(
		v223,
		_mm_add_ps(_mm_add_ps(v222, _mm_mul_ps(_mm_shuffle_ps(v201, v201, 170), v371)), (__m128)xmmword_140B7AD00));
LABEL_176:
	if (!(*(unsigned int(__fastcall**)(__int64*, __m128*, char*, __int64, _QWORD))(*a2 + 440))(
		a2,
		&v341,
		v373,
		1073742017i64,
		0i64))
	{
	LABEL_212:
		v227 = v341.m128_f32[1];
		goto LABEL_213;
	}
	v224 = dword_140C4D8E0;
	v225 = v374;
	v226 = *(_DWORD*)qword_140C63750;
	v227 = v341.m128_f32[1];
	v228 = dword_140C4D8E0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D8E0)
		v228 = *(_DWORD*)qword_140C63750;
	if (v341.m128_f32[1] >= (float)(v374 + dword_140C4D8F0[v228]))
	{
		v233 = (__m128*)v340;
	}
	else
	{
		v229 = (__m128) * (unsigned int*)(a1 + 672);
		if (v229.m128_f32[0] <= 4.0)
		{
			if (v229.m128_f32[0] >= 1.0)
			{
				if (v229.m128_f32[0] >= 2.0)
				{
					v229.m128_f32[0] = (float)((float)(v229.m128_f32[0] - 2.0) * 1.5707964) * 0.5;
					v232 = sub_140934E10(v229.m128_f32[0]);
					if (v226 < v224)
						v224 = v226;
					v230 = v229;
					v230.m128_f32[0] = (float)(v232 + 1.0) * (float)(dword_140C4D8F0[v224] - a5);
				}
				else
				{
					v229.m128_f32[0] = (float)((float)(v229.m128_f32[0] - 1.0) * 1.5707964) - 1.5707964;
					v231 = sub_140934E10(v229.m128_f32[0]);
					if (v226 < v224)
						v224 = v226;
					v230 = v229;
					v230.m128_f32[0] = (float)(v231 + 1.0) * (float)(dword_140C4D8F0[v224] - a5);
				}
				v230.m128_f32[0] = (float)(v230.m128_f32[0] * 0.5) + a5;
			}
			else
			{
				v230 = (__m128)LODWORD(a5);
			}
		}
		else
		{
			if (v226 < dword_140C4D8E0)
				v224 = *(_DWORD*)qword_140C63750;
			v230 = (__m128)LODWORD(dword_140C4D8F0[v224]);
		}
		v233 = (__m128*)v340;
		v230.m128_f32[0] = (float)(v230.m128_f32[0] + v225) - v227;
		if (v230.m128_f32[0] > v143.m128_f32[0])
		{
			*(__m128*)(v340 + 32) = v341;
			v234 = *a3;
			v342 = _mm_add_ps(_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v230, v143)), v341);
			v235 = (*(float(__fastcall**)(__int64*, __m128*, __int64))(v234 + 72))(a3, &v342, 16401i64);
			v225 = v374;
			v227 = v341.m128_f32[1] + (float)(v235 * v230.m128_f32[0]);
			v341.m128_f32[1] = v227;
		}
	}
	v236 = (__m128)LODWORD(v376);
	if (v376 <= v225)
		goto LABEL_213;
	if (v227 > v376)
	{
		if (v227 < (float)((float)(v375 * a5) + v376))
		{
			v126 = (__m128)LODWORD(v376);
			v126.m128_f32[0] = (float)(v376 - v227) + (float)(v375 * a5);
			goto LABEL_204;
		}
		if (v227 > v376)
			goto LABEL_213;
	}
	v236.m128_f32[0] = v376 - (float)(v375 * a5);
	if (v227 <= v236.m128_f32[0])
		goto LABEL_213;
	v126 = v236;
	v126.m128_f32[0] = v236.m128_f32[0] - v227;
LABEL_204:
	if (v126.m128_f32[0] == v143.m128_f32[0])
		goto LABEL_213;
	v233[2] = v341;
	v237 = *a3;
	v345 = _mm_add_ps(_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v126, v143)), v341);
	if ((*(float(__fastcall**)(__int64*, __m128*, __int64))(v237 + 72))(a3, &v345, 16401i64) >= 1.0)
		goto LABEL_212;
	v227 = v341.m128_f32[1];
	if (v341.m128_f32[1] <= v376)
		goto LABEL_210;
	if (v341.m128_f32[1] < (float)((float)(v375 * a5) + v376))
	{
		v126.m128_f32[0] = (float)(v376 - v341.m128_f32[1]) - (float)(v375 * a5);
		goto LABEL_213;
	}
	if (v341.m128_f32[1] <= v376)
	{
	LABEL_210:
		if (v341.m128_f32[1] > (float)(v376 - (float)(v375 * a5)))
			v126.m128_f32[0] = (float)((float)(v375 * a5) + v376) - v341.m128_f32[1];
	}
LABEL_213:
	if (v141 < *(float*)(a1 + 80))
		*(float*)(a1 + 80) = v141;
	if (v141 < 1.0)
	{
		v238 = dword_140C4DE40;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DE40)
			v238 = *(_DWORD*)qword_140C63750;
		v239 = *((float*)&xmmword_140C4DE50 + v238) * *(float*)(a1 + 80);
		if (v239 <= *(float*)(a1 + 672))
		{
			*(float*)(a1 + 752) = v239;
			*(float*)(a1 + 672) = v239;
		}
	}
	*(_QWORD*)&v240 = LODWORD(v343);
	v241 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)LODWORD(v343)));
	sub_1408FC950(v240);
	v242 = *(float*)&v240;
	v243 = sub_1408FE3D0(*(double*)v347.m128_u64);
	LODWORD(v240) = sub_1408FC950(*(double*)v347.m128_u64);
	sub_1408FE3D0(*(double*)v28.m128_u64);
	v244 = sub_1408FC950(*(double*)v28.m128_u64);
	v335.m128_f32[0] = (float)((float)(v244 * v243) * v242) + (float)((float)(v28.m128_f32[0] * *(float*)&v240) * v241);
	v335.m128_f32[2] = (float)((float)(v244 * *(float*)&v240) * v241) - (float)((float)(v28.m128_f32[0] * v243) * v242);
	v335.m128_f32[3] = (float)((float)(v28.m128_f32[0] * v243) * v241) + (float)((float)(v244 * *(float*)&v240) * v242);
	v335.m128_f32[1] = (float)((float)(v28.m128_f32[0] * *(float*)&v240) * v242) - (float)((float)(v244 * v243) * v241);
	v245 = _mm_shuffle_ps(v335, v335, 85).m128_f32[0];
	v246 = _mm_shuffle_ps(v335, v335, 170).m128_f32[0];
	v247 = _mm_shuffle_ps(v335, v335, 255).m128_f32[0];
	v248 = v335.m128_f32[0] * (float)(v335.m128_f32[0] * 2.0);
	v249 = v246 * 2.0;
	v250 = v245 * (float)(v245 * 2.0);
	v251 = v247 * (float)(v335.m128_f32[0] * 2.0);
	v252 = v335.m128_f32[0] * (float)(v245 * 2.0);
	v253 = v246 * (float)(v246 * 2.0);
	v369.m128_f32[0] = (float)(1.0 - v250) - v253;
	*(float*)&v240 = v247 * v249;
	v254 = v335.m128_f32[0] * v249;
	v255 = v247 * (float)(v245 * 2.0);
	v256 = v335.m128_f32[0] * v249;
	v369.m128_f32[1] = v252 + *(float*)&v240;
	v257 = v245 * v249;
	v258 = v341;
	v371.m128_i32[3] = 0;
	v370.m128_i32[3] = 0;
	v369.m128_i32[3] = 0;
	v370.m128_f32[0] = v252 - *(float*)&v240;
	v369.m128_f32[2] = v256 - v255;
	v259 = (_DWORD*)(a1 + 96);
	v371.m128_f32[0] = v254 + v255;
	v370.m128_f32[2] = v257 + v251;
	v371.m128_f32[2] = (float)(1.0 - v248) - v250;
	v370.m128_f32[1] = (float)(1.0 - v248) - v253;
	v260 = *(__m128*)(a1 + 640);
	v372 = xmmword_140B7AD00;
	v261 = _mm_sub_ps(v260, v341);
	v371.m128_f32[1] = v257 - v251;
	v262 = _mm_mul_ps(v261, v261);
	v341.m128_f32[1] = v227 + v126.m128_f32[0];
	v263 = v341;
	v369 = v341;
	v264 = (float)(v262.m128_f32[0] + _mm_shuffle_ps(v262, v262, 85).m128_f32[0])
		+ _mm_shuffle_ps(v262, v262, 170).m128_f32[0];
	v265 = *(float*)&dword_140C3C7A8 < v264;
	v266 = *(float*)&dword_140C3C7A8 == v264;
	v267 = _mm_sub_ps((__m128)0i64, v371);
	v347 = v370;
	v371 = v370;
	*(_DWORD*)(a1 + 516) = !v265 && !v266;
	v355 = (__int128)v267;
	v370 = v267;
	*(__m128*)(a1 + 640) = v258;
	v268 = _mm_sub_ps((__m128)0i64, *(__m128*)sub_1401ADD80(&v370, (__int64)&v342));
	v342 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v268, v268, 210), _mm_shuffle_ps(v371, v371, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v268, v268, 201), _mm_shuffle_ps(v371, v371, 210)));
	sub_1401ADD80(&v342, (__int64)&v345);
	v269 = v345;
	v270 = _mm_shuffle_ps(v345, v345, 210);
	v271 = _mm_mul_ps(_mm_shuffle_ps(v345, v345, 201), _mm_shuffle_ps(v268, v268, 210));
	v272 = v369;
	*(_DWORD*)(a1 + 96) = v345.m128_i32[0];
	v273 = 0i64;
	*(_DWORD*)(a1 + 108) = 0;
	*(_DWORD*)(a1 + 104) = v268.m128_i32[0];
	*(_DWORD*)(a1 + 124) = 0;
	*(_DWORD*)(a1 + 140) = 0;
	v274 = _mm_sub_ps(_mm_mul_ps(v270, _mm_shuffle_ps(v268, v268, 201)), v271);
	*(_DWORD*)(a1 + 112) = _mm_shuffle_ps(v269, v269, 85).m128_u32[0];
	*(_DWORD*)(a1 + 100) = v274.m128_i32[0];
	*(_DWORD*)(a1 + 120) = _mm_shuffle_ps(v268, v268, 85).m128_u32[0];
	*(_DWORD*)(a1 + 116) = _mm_shuffle_ps(v274, v274, 85).m128_u32[0];
	v271.m128_i32[0] = _mm_shuffle_ps(v269, v269, 170).m128_u32[0];
	v275 = _mm_mul_ps(v269, v272);
	*(_DWORD*)(a1 + 128) = v271.m128_i32[0];
	v335 = v275;
	v276 = _mm_shuffle_ps(v274, v274, 170).m128_u32[0];
	v277 = _mm_mul_ps(v274, v272);
	*(_DWORD*)(a1 + 132) = v276;
	*(_DWORD*)(a1 + 136) = _mm_shuffle_ps(v268, v268, 170).m128_u32[0];
	v278 = _mm_mul_ps(v268, v272);
	v279 = _mm_shuffle_ps(v275, v275, 85).m128_f32[0] <= v275.m128_f32[0];
	LODWORD(v280) = _mm_shuffle_ps(v275, v275, 170).m128_u32[0];
	if (!v279)
		v273 = 1i64;
	v281 = 1 - v273;
	if (v280 > v335.m128_f32[v273])
		v273 = 2i64;
	v282 = (float)(v335.m128_f32[-v281 + 3 - v273] + v335.m128_f32[v281]) + v335.m128_f32[v273];
	v335 = v277;
	v283 = 0i64;
	*(float*)(a1 + 144) = -v282;
	v279 = _mm_shuffle_ps(v277, v277, 85).m128_f32[0] <= v277.m128_f32[0];
	LODWORD(v284) = _mm_shuffle_ps(v277, v277, 170).m128_u32[0];
	if (!v279)
		v283 = 1i64;
	v285 = 1 - v283;
	if (v284 > v335.m128_f32[v283])
		v283 = 2i64;
	v286 = (float)(v335.m128_f32[-v285 + 3 - v283] + v335.m128_f32[v285]) + v335.m128_f32[v283];
	v287 = 0i64;
	v335 = v278;
	*(float*)(a1 + 148) = -v286;
	if (_mm_shuffle_ps(v278, v278, 85).m128_f32[0] > v278.m128_f32[0])
		v287 = 1i64;
	v288 = 1 - v287;
	*(_DWORD*)(a1 + 156) = 1065353216;
	if (_mm_shuffle_ps(v278, v278, 170).m128_f32[0] > v335.m128_f32[v287])
		v287 = 2i64;
	v289 = (int*)qword_140C63750;
	*(float*)(a1 + 152) = -(float)((float)(v335.m128_f32[-v288 + 3 - v287] + v335.m128_f32[v288]) + v335.m128_f32[v287]);
	v290 = *v289;
	v291 = dword_140C4DB40;
	if (v290 < dword_140C4DB40)
		v291 = v290;
	if (*((_BYTE*)&dword_140C4DB50 + v291))
	{
		v292 = (float)((float)(a10 - *(float*)(a1 + 676)) * v339) + *(float*)(a1 + 676);
		v293 = *(float*)&v337;
		*(float*)(a1 + 676) = v292;
		*(float*)&v337 = v293 + (float)(v292 * 2.0);
	}
	v294 = (int*)qword_140C63750;
	*(float*)(a1 + 144) = *(float*)(a1 + 144) - *(float*)&v337;
	v295 = *v294;
	v296 = dword_140C4DC20;
	if (v295 < dword_140C4DC20)
		v296 = v295;
	if (byte_140C4DC30[v296])
	{
		v297 = dword_140C4DCC0;
		v298 = dword_140C4DCC0;
		if (v295 < dword_140C4DCC0)
			v298 = v295;
		if (dword_140C4DCD0[v298] != 0.0)
		{
			if (v295 < dword_140C4DCC0)
				v297 = v295;
			*(float*)(a1 + 148) = *(float*)(a1 + 148) - dword_140C4DCD0[v297];
		}
		v299 = dword_140C4DD20;
		v300 = dword_140C4DD20;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DD20)
			v300 = *(_DWORD*)qword_140C63750;
		if (dword_140C4DD30[v300] != 0.0)
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C4DD20)
				v299 = *(_DWORD*)qword_140C63750;
			*(float*)(a1 + 152) = *(float*)(a1 + 152) - dword_140C4DD30[v299];
		}
	}
	v342.m128_u64[1] = (unsigned __int64)&v366;
	v342.m128_u64[0] = a1 + 96;
	sub_1401AFB10((__m128**) & v342, (__m128*)(a1 + 96));
	*(_DWORD*)(a1 + 160) = *v259;
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 112);
	v301 = *(_DWORD*)(a1 + 128);
	*(_DWORD*)(a1 + 172) = 0;
	*(_DWORD*)(a1 + 168) = v301;
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a1 + 100);
	*(_DWORD*)(a1 + 180) = *(_DWORD*)(a1 + 116);
	v302 = *(_DWORD*)(a1 + 132);
	*(_DWORD*)(a1 + 188) = 0;
	*(_DWORD*)(a1 + 184) = v302;
	*(_DWORD*)(a1 + 192) = *(_DWORD*)(a1 + 104);
	*(_DWORD*)(a1 + 196) = *(_DWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 200) = *(unsigned int*)(a1 + 136);
	*(_DWORD*)(a1 + 208) = COERCE_UNSIGNED_INT(sub_1401ADE30((__m128*)(a1 + 144), v303)) ^ 0x80000000;
	*(_DWORD*)(a1 + 212) = COERCE_UNSIGNED_INT(sub_1401ADE30((__m128*)(a1 + 144), (__m128*)(a1 + 112))) ^ 0x80000000;
	v304 = sub_1401ADE30((__m128*)(a1 + 144), (__m128*)(a1 + 128));
	v305 = v340;
	*(_DWORD*)(a1 + 220) = 1065353216;
	*(float*)(a1 + 216) = -v304;
	v306 = *(__m128*)(a1 + 208);
	*(__m128*)(a1 + 32) = v306;
	if (fabs(*(float*)(a1 + 32) - *(float*)(v305 + 32)) > 0.001
		|| (v307 = (__m128) * (unsigned int*)(a1 + 36),
			v307.m128_f32[0] = v307.m128_f32[0] - *(float*)(v305 + 36),
			v306 = _mm_and_ps(v307, (__m128)0x7FFFFFFFu),
			v306.m128_f32[0] > 0.001)
		|| (v308 = (__m128) * (unsigned int*)(a1 + 40),
			v308.m128_f32[0] = v308.m128_f32[0] - *(float*)(v305 + 40),
			v306 = _mm_and_ps(v308, (__m128)0x7FFFFFFFu),
			v306.m128_f32[0] > 0.001))
	{
		*(__m128*)(v305 + 32) = v263;
		v306.m128_f32[0] = (*(float(__fastcall**)(__int64*, __int64, __int64))(*a3 + 72))(a3, a1 + 32, 16401i64);
		if (v306.m128_f32[0] < 1.0)
		{
			*(__m128*)(a1 + 32) = _mm_add_ps(
				_mm_mul_ps(_mm_sub_ps(*(__m128*)(a1 + 32), v341), _mm_shuffle_ps(v306, v306, 0)),
				v341);
			*(_DWORD*)(a1 + 208) = *(_DWORD*)(a1 + 32);
			*(_DWORD*)(a1 + 212) = *(_DWORD*)(a1 + 36);
			*(_DWORD*)(a1 + 216) = *(_DWORD*)(a1 + 40);
			*v259 = *(_DWORD*)(a1 + 160);
			*(_DWORD*)(a1 + 100) = *(_DWORD*)(a1 + 176);
			v309 = *(_DWORD*)(a1 + 192);
			*(_DWORD*)(a1 + 108) = 0;
			*(_DWORD*)(a1 + 104) = v309;
			*(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 164);
			*(_DWORD*)(a1 + 116) = *(_DWORD*)(a1 + 180);
			v310 = *(_DWORD*)(a1 + 196);
			*(_DWORD*)(a1 + 124) = 0;
			*(_DWORD*)(a1 + 120) = v310;
			*(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 168);
			*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 184);
			v311 = *(_DWORD*)(a1 + 200);
			*(_DWORD*)(a1 + 140) = 0;
			*(_DWORD*)(a1 + 136) = v311;
			*(_DWORD*)(a1 + 144) = COERCE_UNSIGNED_INT(sub_1401ADE30((__m128*)(a1 + 208), (__m128*)(a1 + 160))) ^ 0x80000000;
			*(_DWORD*)(a1 + 148) = COERCE_UNSIGNED_INT(sub_1401ADE30((__m128*)(a1 + 208), (__m128*)(a1 + 176))) ^ 0x80000000;
			v312 = sub_1401ADE30((__m128*)(a1 + 208), (__m128*)(a1 + 192));
			*(_DWORD*)(a1 + 156) = 1065353216;
			*(float*)(a1 + 152) = -v312;
		}
	}
	if (!*(_DWORD*)(a1 + 512) && !sub_1405CFB60((float*)(a1 + 160)))
	{
		LODWORD(v337) = v41 && (v41[367].m128_u64[0] || v41[367].m128_u64[1]);
		if (!v41 || (v313 = 1, !v41[252].m128_i32[3]))
			v313 = 0;
		if (v41)
		{
			v314 = v41[286];
			v336 = v41[263].m128_i32[0];
			v315 = v41[264].m128_f32[2];
			v342 = v314;
			v339 = v315;
		}
		else
		{
			v336 = 0;
			v339 = 0.0;
			v342 = 0i64;
		}
		if (v41)
			v345 = v41[274];
		else
			v345 = 0i64;
		if (v41)
			v335 = v41[275];
		else
			v335 = 0i64;
		v316 = v335;
		TlsValue.m128_u64[1] = 0i64;
		TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v317 = *(float*)(a1 + 40);
		v361 = TlsValue;
		v362.m128_u64[0] = (unsigned __int64)lpTlsValue;
		*(double*)&v318 = *(float*)(a1 + 36);
		v319 = *(_DWORD*)(qword_140C635F0 + 5736);
		v335.m128_u64[0] = 0x141E1CC80i64;
		v350 = (_OWORD*)v318;
		v320 = v345.m128_f32[2];
		v348 = *(float*)(a1 + 32);
		v349 = v347.m128_f32[2];
		v354[0] = v347.m128_f32[1];
		v352 = v347.m128_f32[0];
		v353 = *((float*)&v355 + 2);
		v351 = *((float*)&v355 + 1);
		v346 = *(float*)&v355;
		*(double*)&v340 = v374;
		v344 = v376;
		v338 = *(float*)&v338;
		v343 = *(float*)(a1 + 672);
		v365 = v341.m128_f32[2];
		*(double*)&v355 = v341.m128_f32[1];
		*(double*)v347.m128_u64 = v341.m128_f32[0];
		v321 = 987654 - v319;
		v322 = v345.m128_f32[1];
		v323 = v345.m128_f32[0];
		v324 = v342.m128_f32[2];
		v325 = v342.m128_f32[1];
		v326 = v342.m128_f32[0];
		v327 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
		LODWORD(v334) = v336;
		LODWORD(v333) = v313;
		LODWORD(v332) = v337;
		LODWORD(v331) = v41 != 0i64;
		v328 = sub_1401971E0(
			&dword_140C8AFB4,
			22,
			&v335,
			v327,
			v331,
			v332,
			v333,
			v334,
			v339,
			*(_DWORD*)(a1 + 744),
			v321,
			v326,
			v325,
			v324,
			v323,
			v322,
			v320,
			v316.m128_f32[0],
			_mm_shuffle_ps(v316, v316, 85).m128_f32[0],
			_mm_shuffle_ps(v316, v316, 170).m128_f32[0],
			v347.m128_u64[0],
			(_QWORD)v355,
			v365,
			v343,
			v338,
			v344,
			v340,
			v346,
			v351,
			v353,
			v352,
			v354[0],
			v349,
			v348,
			v350,
			v317,
			&v361);
		TlsValue.m128_u64[0] = (unsigned __int64)&off_140B5E648;
		v329 = v328;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v329)
			DebugBreak();
		*(_DWORD*)(a1 + 512) = 1;
	}
	return 0i64;
}
// 1405D2560: variable 'v303' is possibly undefined
// 1405D2AE7: variable 'v331' is possibly undefined
// 1405D2AE7: variable 'v332' is possibly undefined
// 1405D2AE7: variable 'v333' is possibly undefined
// 1405D2AE7: variable 'v334' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7A740: using guessed type __int128 xmmword_140B7A740;
// 140B7A8D0: using guessed type __int128 xmmword_140B7A8D0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C4D880: using guessed type int dword_140C4D880;
// 140C4D890: using guessed type float dword_140C4D890[16];
// 140C4D8E0: using guessed type int dword_140C4D8E0;
// 140C4D8F0: using guessed type float dword_140C4D8F0[16];
// 140C4D980: using guessed type int dword_140C4D980;
// 140C4D990: using guessed type float dword_140C4D990[16];
// 140C4D9E0: using guessed type int dword_140C4D9E0;
// 140C4D9F0: using guessed type float dword_140C4D9F0[16];
// 140C4DA40: using guessed type int dword_140C4DA40;
// 140C4DA50: using guessed type float dword_140C4DA50[16];
// 140C4DAA0: using guessed type int dword_140C4DAA0;
// 140C4DAB0: using guessed type _BYTE[32];
// 140C4DB40: using guessed type int dword_140C4DB40;
// 140C4DB50: using guessed type int dword_140C4DB50;
// 140C4DBE0: using guessed type int dword_140C4DBE0;
// 140C4DBF0: using guessed type int dword_140C4DBF0;
// 140C4DC20: using guessed type int dword_140C4DC20;
// 140C4DC30: using guessed type _BYTE[32];
// 140C4DC60: using guessed type int dword_140C4DC60;
// 140C4DC70: using guessed type float dword_140C4DC70[16];
// 140C4DCC0: using guessed type int dword_140C4DCC0;
// 140C4DCD0: using guessed type float dword_140C4DCD0[14];
// 140C4DD20: using guessed type int dword_140C4DD20;
// 140C4DD30: using guessed type float dword_140C4DD30[14];
// 140C4DD80: using guessed type int dword_140C4DD80;
// 140C4DD90: using guessed type float dword_140C4DD90[14];
// 140C4DE40: using guessed type int dword_140C4DE40;
// 140C4DE50: using guessed type __int128 xmmword_140C4DE50;
// 140C4DEA0: using guessed type int dword_140C4DEA0;
// 140C4DEB0: using guessed type __int128 xmmword_140C4DEB0;
// 140C4DECC: using guessed type int dword_140C4DECC;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C8AFB4: using guessed type _DWORD dword_140C8AFB4;
// 1405D0300: using guessed type double var_310[2];
// 1405D0300: using guessed type char var_1D0[32];

