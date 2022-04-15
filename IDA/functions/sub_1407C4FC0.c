//----- (00000001407C4FC0) ----------------------------------------------------
__int64 __fastcall sub_1407C4FC0(
	_DWORD* a1,
	int a2,
	unsigned int a3,
	_DWORD* a4,
	__int64 a5,
	int a6,
	int a7,
	int a8,
	unsigned int a9)
{
	__int64* v9; // r12
	__int64 v11; // rdi
	int v12; // eax
	__int64 v13; // rcx
	_QWORD* v14; // rdx
	__int64 v15; // rdx
	__int64 result; // rax
	__m128 v17; // xmm6
	__m128 v18; // xmm11
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm0_4
	float v22; // xmm1_4
	float v23; // xmm3_4
	bool v24; // cf
	float v25; // xmm3_4
	__m128 v26; // xmm12
	float v27; // xmm0_4
	__m128 v28; // xmm1
	float v29; // xmm0_4
	float v30; // xmm1_4
	float v31; // xmm0_4
	float v32; // xmm1_4
	float v33; // xmm4_4
	__int128 v34; // xmm8
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm4_4
	float v38; // xmm1_4
	__int128 v39; // xmm9
	float v40; // xmm2_4
	float v41; // xmm0_4
	__int128 v42; // xmm10
	unsigned int v43; // r15d
	__int128 v44; // xmm2
	__int128 v45; // xmm1
	__m128* v46; // rsi
	__int64 v47; // rcx
	_OWORD* v48; // rax
	__m128 v49; // xmm15
	__m128* v50; // rbx
	float* v51; // r13
	__int64 v52; // rdx
	double v53; // xmm0_8
	bool v54; // zf
	__int64 v55; // r14
	float v56; // xmm7_4
	unsigned __int64 v57; // r8
	float v58; // xmm1_4
	__m128 v59; // xmm2
	__int64 v60; // rax
	float* v61; // rcx
	__int64 v62; // rax
	float* v63; // rax
	__m128 v64; // xmm3
	float* v65; // rax
	__m128* v66; // rcx
	__int64 v67; // rdx
	__m128 v68; // xmm3
	float v69; // xmm1_4
	char* v70; // rax
	__m128 v71; // xmm1
	__m128 v72; // xmm0
	__m128 v73; // xmm3
	float v74; // xmm1_4
	float v75; // xmm2_4
	float v76; // xmm4_4
	float v77; // xmm5_4
	float v78; // xmm6_4
	float v79; // xmm7_4
	float v80; // xmm8_4
	float v81; // xmm9_4
	float v82; // xmm10_4
	float v83; // xmm11_4
	float v84; // xmm12_4
	float v85; // xmm13_4
	float v86; // xmm14_4
	float v87; // xmm15_4
	float* v88; // rax
	__m128* v89; // rcx
	__m128 v90; // xmm3
	char* v91; // rax
	__int64 v92; // rdx
	__m128 v93; // xmm1
	__m128 v94; // xmm0
	__m128 v95; // xmm3
	float v96; // xmm1_4
	float v97; // xmm2_4
	float v98; // xmm4_4
	float v99; // xmm5_4
	float v100; // xmm6_4
	float v101; // xmm7_4
	float v102; // xmm8_4
	float v103; // xmm9_4
	float v104; // xmm10_4
	float v105; // xmm11_4
	float v106; // xmm12_4
	float v107; // xmm13_4
	float v108; // xmm14_4
	float v109; // xmm15_4
	float* v110; // rax
	__m128* v111; // rcx
	__m128 v112; // xmm3
	char* v113; // rax
	__int64 v114; // rdx
	__m128 v115; // xmm1
	__m128 v116; // xmm0
	__m128 v117; // xmm3
	float v118; // xmm1_4
	float v119; // xmm2_4
	float v120; // xmm4_4
	float v121; // xmm5_4
	float v122; // xmm6_4
	float v123; // xmm7_4
	float v124; // xmm8_4
	float v125; // xmm9_4
	float v126; // xmm10_4
	float v127; // xmm11_4
	float v128; // xmm12_4
	float v129; // xmm13_4
	float v130; // xmm14_4
	float v131; // xmm15_4
	float* v132; // rax
	__m128* v133; // rcx
	__m128 v134; // xmm3
	char* v135; // rax
	__int64 v136; // rdx
	__m128 v137; // xmm1
	__m128 v138; // xmm0
	__m128 v139; // xmm6
	float* v140; // rcx
	float* v141; // rcx
	float v142; // xmm6_4
	__m128 v143; // xmm0
	float* v144; // rcx
	float v145; // xmm6_4
	__m128 v146; // xmm0
	float* v147; // rcx
	float v148; // xmm6_4
	__int64 v149; // rax
	__int64 v150; // rax
	float* v151; // rax
	float* v152; // rcx
	float v153; // xmm6_4
	float v154; // xmm1_4
	float v155; // xmm0_4
	float v156; // xmm1_4
	float v157; // xmm0_4
	float v158; // xmm1_4
	float v159; // xmm0_4
	float v160; // xmm1_4
	float v161; // xmm0_4
	float v162; // xmm1_4
	float v163; // xmm0_4
	float v164; // xmm1_4
	float v165; // xmm0_4
	float v166; // xmm1_4
	float v167; // xmm0_4
	float* v168; // rcx
	float v169; // xmm6_4
	__m128 v170; // xmm0
	float* v171; // rcx
	__m128 v172; // xmm6
	__m128 v173; // xmm0
	unsigned int v174; // eax
	unsigned __int64 v175; // rcx
	__int64 v176; // rax
	float* v177; // rcx
	float v178; // xmm6_4
	float* v179; // rcx
	float v180; // xmm6_4
	__m128 v181; // xmm0
	float* v182; // rcx
	float v183; // xmm6_4
	__m128 v184; // xmm0
	int v185; // r13d
	unsigned int v186; // r14d
	__int64 v187; // r15
	float* v188; // rbx
	float* v189; // rcx
	float v190; // xmm6_4
	__m128 v191; // xmm1
	float* v192; // rcx
	float v193; // xmm6_4
	float* v194; // rax
	float* v195; // rax
	float* v196; // rax
	float* v197; // rbx
	float v198; // xmm0_4
	__int64 v199; // rcx
	__int64 v200; // rax
	_DWORD* v201; // rcx
	double v202; // xmm0_8
	int v203; // ecx
	unsigned int v204; // eax
	__int64 v205; // r12
	__int64(__fastcall * **v206)(); // rdx
	double v207; // xmm0_8
	__int64 v208; // r8
	__int64 v209; // rsi
	__int64(__fastcall * ***v210)(); // r9
	__m128 v211; // xmm8
	int v212; // eax
	int v213; // eax
	__int64 v214; // rcx
	double v215; // xmm0_8
	float v216; // xmm1_4
	unsigned int v217; // r14d
	int v218; // ebx
	unsigned int v219; // ebx
	__int64 v220; // rcx
	int* v221; // rax
	__int64 v222; // rbx
	float v223; // xmm6_4
	float v224; // xmm7_4
	double v225; // xmm0_8
	float v226; // xmm5_4
	__m128 v227; // xmm0
	__m128 v228; // xmm0
	__m128 v229; // xmm2
	__m128 v230; // xmm0
	__m128 v231; // xmm3
	__int64* v232; // rdx
	__int64 v233; // rax
	void(__fastcall * **v234)(_QWORD); // r14
	__int64 v235; // rcx
	__int64 v236; // rcx
	int v237; // eax
	__int64 v238; // rcx
	__int64 v239; // rax
	int v240; // edx
	int v241; // ecx
	float v242; // xmm0_4
	__int64 v243; // rdx
	__int64* v244; // r8
	_QWORD* v245; // rcx
	__int64 v246; // rcx
	__int64 v247; // rcx
	__int64 v248; // rax
	__int64 v249; // rcx
	_QWORD* v250; // r8
	__m128 v251; // xmm0
	int v252; // ecx
	int v253; // eax
	int v254; // eax
	int v255; // eax
	int v256; // eax
	int v257; // eax
	int v258; // eax
	int v259; // eax
	int v260; // eax
	int v261; // eax
	int v262; // eax
	int v263; // eax
	int v264; // ecx
	int v265; // eax
	float v266; // xmm0_4
	int v267; // eax
	float v268; // xmm0_4
	int v269; // eax
	float v270; // xmm0_4
	int v271; // eax
	int v272; // eax
	__m128 v273; // xmm10
	__m128 v274; // xmm7
	__m128 v275; // xmm8
	__m128 v276; // xmm0
	int* v277; // rdx
	int v278; // eax
	int v279; // ecx
	__m128 v280; // xmm6
	__m128 v281; // xmm7
	__m128 v282; // xmm6
	__m128 v283; // xmm4
	__m128 v284; // xmm4
	float v285; // xmm5_4
	float v286; // xmm0_4
	float v287; // xmm3_4
	float v288; // xmm2_4
	float v289; // xmm0_4
	float v290; // xmm1_4
	float v291; // xmm2_4
	float v292; // eax
	__int128 v293; // xmm1
	__int128 v294; // xmm0
	__int128 v295; // xmm1
	float v296; // eax
	__int128 v297; // xmm0
	__int128 v298; // xmm1
	float v299; // eax
	int v300; // ecx
	__m128 v301; // xmm0
	int v302; // ecx
	unsigned int* v303; // r9
	__int64 v304; // r8
	__int64 v305; // r10
	__m128 v306; // xmm0
	float v307; // xmm1_4
	int v308; // ecx
	__int64 v309; // rcx
	__int64 v310; // rbx
	float v311; // xmm9_4
	int v312; // eax
	__int64 v313; // rsi
	float v314; // xmm0_4
	__int64 v315; // rcx
	_QWORD* v316; // rcx
	__int64 v317; // rcx
	__int64 v318; // rcx
	int v319; // edx
	int v320; // eax
	__int64 v321; // rcx
	int v322; // eax
	float v323; // xmm7_4
	__int64 v324; // rcx
	int v325; // eax
	double v326; // xmm0_8
	float v327; // xmm1_4
	int v328; // ecx
	__int64 v329; // rdx
	unsigned int* v330; // rcx
	__m128 v331; // xmm0
	__m128 v332; // xmm2
	__m128 v333; // xmm3
	__m128i v334; // xmm1
	__m128i v335; // xmm1
	__m128* v336; // rdx
	unsigned int* v337; // rcx
	__m128 v338; // xmm0
	__m128 v339; // xmm2
	__m128 v340; // xmm3
	__m128i v341; // xmm1
	__m128i v342; // xmm1
	__m128 v343; // xmm1
	__int64 v344; // rcx
	__m128 v345; // xmm1
	int v346; // eax
	__int64 v347; // [rsp+20h] [rbp-E0h]
	unsigned int v348; // [rsp+40h] [rbp-C0h]
	unsigned int v349; // [rsp+40h] [rbp-C0h]
	unsigned int v350; // [rsp+40h] [rbp-C0h]
	unsigned int v351; // [rsp+40h] [rbp-C0h]
	float v352; // [rsp+50h] [rbp-B0h]
	float v353; // [rsp+50h] [rbp-B0h]
	float v354; // [rsp+50h] [rbp-B0h]
	float v355; // [rsp+60h] [rbp-A0h]
	float v356; // [rsp+60h] [rbp-A0h]
	float v357; // [rsp+60h] [rbp-A0h]
	float v358; // [rsp+68h] [rbp-98h]
	float v359; // [rsp+68h] [rbp-98h]
	float v360; // [rsp+68h] [rbp-98h]
	float v361; // [rsp+70h] [rbp-90h]
	float v362; // [rsp+70h] [rbp-90h]
	float v363; // [rsp+70h] [rbp-90h]
	float v364; // [rsp+90h] [rbp-70h]
	float v365; // [rsp+90h] [rbp-70h]
	float v366; // [rsp+90h] [rbp-70h]
	float v367; // [rsp+98h] [rbp-68h]
	float v368; // [rsp+98h] [rbp-68h]
	float v369; // [rsp+98h] [rbp-68h]
	float v370; // [rsp+A0h] [rbp-60h]
	float v371; // [rsp+A0h] [rbp-60h]
	float v372; // [rsp+A0h] [rbp-60h]
	float v373; // [rsp+B0h] [rbp-50h]
	float v374; // [rsp+B0h] [rbp-50h]
	float v375; // [rsp+B0h] [rbp-50h]
	float v376; // [rsp+C0h] [rbp-40h]
	float v377; // [rsp+C0h] [rbp-40h]
	float v378; // [rsp+C0h] [rbp-40h]
	float v379; // [rsp+D0h] [rbp-30h]
	float v380; // [rsp+D0h] [rbp-30h]
	float v381; // [rsp+D0h] [rbp-30h]
	float v382; // [rsp+E0h] [rbp-20h]
	float v383; // [rsp+E0h] [rbp-20h]
	float v384; // [rsp+E0h] [rbp-20h]
	float v385; // [rsp+F0h] [rbp-10h]
	float v386; // [rsp+F4h] [rbp-Ch]
	float v387; // [rsp+F8h] [rbp-8h]
	float v388; // [rsp+FCh] [rbp-4h]
	float v389; // [rsp+100h] [rbp+0h]
	float v390; // [rsp+104h] [rbp+4h]
	float v391; // [rsp+108h] [rbp+8h]
	float v392; // [rsp+10Ch] [rbp+Ch] BYREF
	float v393; // [rsp+110h] [rbp+10h]
	float v394; // [rsp+114h] [rbp+14h]
	float v395; // [rsp+120h] [rbp+20h]
	float v396; // [rsp+130h] [rbp+30h] BYREF
	float v397; // [rsp+134h] [rbp+34h] BYREF
	float v398; // [rsp+138h] [rbp+38h] BYREF
	float v399; // [rsp+13Ch] [rbp+3Ch] BYREF
	float v400; // [rsp+140h] [rbp+40h] BYREF
	float v401; // [rsp+144h] [rbp+44h] BYREF
	float v402; // [rsp+148h] [rbp+48h] BYREF
	float v403; // [rsp+14Ch] [rbp+4Ch] BYREF
	__m128 v404; // [rsp+150h] [rbp+50h]
	__int128 v405; // [rsp+160h] [rbp+60h] BYREF
	__int64 v406[4]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v407; // [rsp+190h] [rbp+90h] BYREF
	float v408; // [rsp+198h] [rbp+98h]
	__int64 v409; // [rsp+19Ch] [rbp+9Ch]
	__int64 v410; // [rsp+1A4h] [rbp+A4h]
	int v411; // [rsp+1ACh] [rbp+ACh]
	_DWORD* v412; // [rsp+1B0h] [rbp+B0h]
	__m128 v413; // [rsp+1C0h] [rbp+C0h]
	__int64 v414; // [rsp+1D0h] [rbp+D0h]
	__int64 v415; // [rsp+1D8h] [rbp+D8h]
	__int128* v416; // [rsp+1E0h] [rbp+E0h]
	__m128* v417; // [rsp+1E8h] [rbp+E8h]
	__int128 v418; // [rsp+1F0h] [rbp+F0h]
	__m128 v419; // [rsp+200h] [rbp+100h]
	__m128 v420[4]; // [rsp+210h] [rbp+110h] BYREF
	__m128 v421; // [rsp+250h] [rbp+150h] BYREF
	__m128 v422; // [rsp+260h] [rbp+160h] BYREF
	__m128 v423; // [rsp+270h] [rbp+170h] BYREF
	__m128 v424; // [rsp+280h] [rbp+180h] BYREF
	int v425[4]; // [rsp+290h] [rbp+190h] BYREF
	__int128 v426; // [rsp+2A0h] [rbp+1A0h]
	__int128 v427; // [rsp+2B0h] [rbp+1B0h]
	__int128 v428; // [rsp+2C0h] [rbp+1C0h]
	__m128 v429; // [rsp+2D0h] [rbp+1D0h] BYREF
	__m128 v430; // [rsp+2E0h] [rbp+1E0h] BYREF
	__m128 v431; // [rsp+2F0h] [rbp+1F0h]
	__int128 v432; // [rsp+300h] [rbp+200h] BYREF
	__int128 v433; // [rsp+310h] [rbp+210h]
	float v434; // [rsp+320h] [rbp+220h]
	__int128 v435; // [rsp+330h] [rbp+230h]
	__int128 v436; // [rsp+340h] [rbp+240h]
	float v437; // [rsp+350h] [rbp+250h]
	__int128 v438; // [rsp+360h] [rbp+260h]
	__int128 v439; // [rsp+370h] [rbp+270h]
	float v440; // [rsp+380h] [rbp+280h]
	__int128 v441; // [rsp+390h] [rbp+290h]
	__int128 v442; // [rsp+3A0h] [rbp+2A0h]
	float v443; // [rsp+3B0h] [rbp+2B0h]
	__int128 v444; // [rsp+3C0h] [rbp+2C0h]
	__int128 v445; // [rsp+3D0h] [rbp+2D0h]
	float v446; // [rsp+3E0h] [rbp+2E0h]
	__int128 v447; // [rsp+3F0h] [rbp+2F0h]
	__int128 v448; // [rsp+400h] [rbp+300h]
	float v449; // [rsp+410h] [rbp+310h]
	__m128* v450; // [rsp+420h] [rbp+320h] BYREF
	__m128* v451; // [rsp+428h] [rbp+328h]
	float v452; // [rsp+438h] [rbp+338h]
	float v453; // [rsp+43Ch] [rbp+33Ch]
	float v454; // [rsp+440h] [rbp+340h]
	float v455; // [rsp+444h] [rbp+344h]
	float v456; // [rsp+45Ch] [rbp+35Ch]
	float v457; // [rsp+460h] [rbp+360h]
	float v458; // [rsp+464h] [rbp+364h]
	float v459; // [rsp+468h] [rbp+368h]
	float v460; // [rsp+46Ch] [rbp+36Ch]
	float v461; // [rsp+470h] [rbp+370h]
	float v462; // [rsp+474h] [rbp+374h]
	float v463; // [rsp+480h] [rbp+380h]
	float v464; // [rsp+484h] [rbp+384h]
	float v465; // [rsp+488h] [rbp+388h]
	__int128 v466[4]; // [rsp+490h] [rbp+390h] BYREF
	__m128 v467; // [rsp+4D0h] [rbp+3D0h] BYREF
	__m128 v468[3]; // [rsp+4E0h] [rbp+3E0h] BYREF

	v9 = (__int64*)(a1 + 332);
	v11 = (__int64)a1;
	if (a3 > 0x1517F)
		a3 = 86399;
	v12 = a1[330];
	v412 = a1;
	a1[329] = v12;
	a1[330] = a2;
	for (a1[328] = a3; *v9; *(_QWORD*)(v13 + 136) = 0i64)
	{
		v13 = *v9;
		v14 = *(_QWORD**)(*v9 + 128);
		if (v14)
			*v14 = *(_QWORD*)(v13 + 136);
		v15 = *(_QWORD*)(v13 + 136);
		if (v15)
			*(_QWORD*)(v15 + 128) = *(_QWORD*)(v13 + 128);
		*(_QWORD*)(v13 + 128) = 0i64;
	}
	result = sub_1407C8AF0(v11, a4);
	if ((int)result >= 0)
	{
		v17 = (__m128)0x3F800000u;
		v18 = 0i64;
		v19 = *(float*)(v11 + 2220) > 0.0000099999997 ? 1.0 : 0.0;
		v20 = 1.0 - (float)(v19 * *(float*)(v11 + 2568));
		v21 = *(float*)(v11 + 2336) > 0.0000099999997 ? 1.0 : 0.0;
		v22 = v20 - (float)(v21 * *(float*)(v11 + 2684));
		v23 = *(float*)(v11 + 2452) > 0.0000099999997 ? 1.0 : 0.0;
		v24 = *(float*)(v11 + 2192) > 0.0000099999997;
		v25 = v23 * *(float*)(v11 + 2800);
		v26 = 0i64;
		v418 = 0x3F800000u;
		v27 = v22 - v25;
		v28 = 0i64;
		v28.m128_f32[0] = fmaxf(0.0, fminf(v27, 1.0));
		v431 = v28;
		v29 = v24 ? 1.0 : 0.0;
		v30 = 1.0 - (float)(v29 * *(float*)(v11 + 2540));
		v31 = *(float*)(v11 + 2308) > 0.0000099999997 ? 1.0 : 0.0;
		v32 = v30 - (float)(v31 * *(float*)(v11 + 2656));
		v33 = *(float*)(v11 + 2424) > 0.0000099999997 ? 1.0 : 0.0;
		v34 = 0i64;
		v39 = 0i64;
		v42 = 0i64;
		*(float*)&v34 = fmaxf(0.0, fminf(v32 - (float)(v33 * *(float*)(v11 + 2772)), 1.0));
		v35 = *(float*)(v11 + 2292) * *(float*)(v11 + 2640);
		v36 = *(float*)(v11 + 2176) * *(float*)(v11 + 2524);
		v426 = v34;
		v37 = (float)(1.0 - v36) - v35;
		v38 = *(float*)(v11 + 2372) * *(float*)(v11 + 2720);
		*(float*)&v39 = fmaxf(0.0, fminf(v37 - (float)(*(float*)(v11 + 2408) * *(float*)(v11 + 2756)), 1.0));
		v40 = 1.0 - (float)(*(float*)(v11 + 2256) * *(float*)(v11 + 2604));
		v41 = *(float*)(v11 + 2488);
		v427 = v39;
		*(float*)&v42 = fmaxf(0.0, fminf((float)(v40 - v38) - (float)(v41 * *(float*)(v11 + 2836)), 1.0));
		v428 = v42;
		result = sub_1407C9AD0(v11);
		if ((int)result >= 0)
		{
			v43 = a9;
			result = sub_1407C9D80(v11, a2, a5, a9);
			if ((int)result >= 0)
			{
				v443 = *(float*)&dword_140C78290;
				v388 = 0.0;
				v385 = 0.0;
				v386 = 0.0;
				v44 = xmmword_140C78270;
				v442 = xmmword_140C78280;
				v446 = *(float*)&dword_140C782C0;
				v449 = *(float*)&dword_140C782F0;
				v444 = xmmword_140C782A0;
				v445 = xmmword_140C782B0;
				v45 = xmmword_140C782E0;
				v447 = xmmword_140C782D0;
				*(_OWORD*)(v11 + 3792) = xmmword_140C78270;
				v448 = v45;
				*(_OWORD*)(v11 + 3808) = xmmword_140C78280;
				*(_DWORD*)(v11 + 3824) = dword_140C78290;
				v441 = v44;
				*(_OWORD*)(v11 + 3840) = xmmword_140C782A0;
				*(_OWORD*)(v11 + 3856) = xmmword_140C782B0;
				*(_DWORD*)(v11 + 3872) = dword_140C782C0;
				*(_OWORD*)(v11 + 3888) = xmmword_140C782D0;
				*(_OWORD*)(v11 + 3904) = xmmword_140C782E0;
				*(_DWORD*)(v11 + 3920) = dword_140C782F0;
				*(_OWORD*)(v11 + 3936) = xmmword_140C78270;
				*(_OWORD*)(v11 + 3952) = xmmword_140C78280;
				*(_DWORD*)(v11 + 3968) = dword_140C78290;
				*(_OWORD*)(v11 + 3984) = xmmword_140C782A0;
				*(_OWORD*)(v11 + 4000) = xmmword_140C782B0;
				*(_DWORD*)(v11 + 4016) = dword_140C782C0;
				*(_OWORD*)(v11 + 4032) = xmmword_140C782D0;
				*(_OWORD*)(v11 + 4048) = xmmword_140C782E0;
				*(_DWORD*)(v11 + 4064) = dword_140C782F0;
				*(_OWORD*)(v11 + 4080) = xmmword_140C78270;
				*(_OWORD*)(v11 + 4096) = xmmword_140C78280;
				*(_DWORD*)(v11 + 4112) = dword_140C78290;
				*(_OWORD*)(v11 + 4128) = xmmword_140C782A0;
				*(_OWORD*)(v11 + 4144) = xmmword_140C782B0;
				*(_DWORD*)(v11 + 4160) = dword_140C782C0;
				*(_OWORD*)(v11 + 4176) = xmmword_140C782D0;
				*(_OWORD*)(v11 + 4192) = xmmword_140C782E0;
				v419 = 0i64;
				*(_DWORD*)(v11 + 4208) = dword_140C782F0;
				*(_OWORD*)(v11 + 6496) = 0i64;
				*(_DWORD*)(v11 + 6512) = 0;
				*(_DWORD*)(v11 + 5408) = 0;
				*(_OWORD*)(v11 + 5424) = 0i64;
				v46 = (__m128*)(v11 + 5456);
				*(_OWORD*)(v11 + 5712) = 0i64;
				v387 = 0.0;
				v390 = 0.0;
				v389 = 0.0;
				v47 = 8i64;
				v48 = (_OWORD*)(v11 + 5456);
				v404 = 0i64;
				v49 = 0i64;
				v413 = 0i64;
				*(_OWORD*)(v11 + 6528) = 0i64;
				do
				{
					*v48 = 0i64;
					v48 += 2;
					*(v48 - 3) = 0i64;
					--v47;
				} while (v47);
				v50 = (__m128*)(v11 + 4224);
				sub_1407E4830((int*)(v11 + 4224), 0i64, 0x60ui64);
				*(_DWORD*)(v11 + 5696) = 0;
				*(_DWORD*)(v11 + 5728) = 0;
				sub_1407E4830((int*)(v11 + 4320), 0i64, 0x110ui64);
				v51 = (float*)(v11 + 4592);
				sub_1407E4830((int*)(v11 + 4592), 0i64, 0x110ui64);
				sub_1407E4830((int*)(v11 + 4864), 0i64, 0x110ui64);
				sub_1407E4830((int*)(v11 + 5136), 0i64, 0x110ui64);
				v53 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
				v54 = *(_QWORD*)(v11 + 1256) == 0i64;
				v55 = 16i64;
				v56 = 0.0;
				v57 = 0x140000000ui64;
				v58 = v53;
				v393 = v58;
				if (!v54)
				{
					while (1)
					{
						v59 = v17;
						v60 = *(_QWORD*)(v11 + 1256) + 248i64;
						*(_QWORD*)v60 = 0i64;
						*(_QWORD*)(v60 + 8) = 0i64;
						*(_QWORD*)(v60 + 16) = 0i64;
						*(_DWORD*)(v60 + 24) = 0;
						v61 = *(float**)(v11 + 1256);
						v62 = *(_QWORD*)v61;
						v394 = (float)((float)(*(float*)(v11 + 2968) * v61[22])
							+ (float)((float)(*(float*)(v11 + 2964) * v61[21])
								* (float)(v17.m128_f32[0] - *(float*)(v11 + 2968))))
							+ (float)((float)(v61[20] * *(float*)(v11 + 2960))
								* (float)((float)(v17.m128_f32[0] - *(float*)(v11 + 2968))
									* (float)(v17.m128_f32[0] - *(float*)(v11 + 2964))));
						v391 = v56 + v394;
						if ((*(unsigned int(__fastcall**)(float*, __int64, unsigned __int64))(v62 + 64))(v61, v52, v57))
						{
							(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v11 + 1256) + 56i64))(*(_QWORD*)(v11 + 1256), v43);
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 288i64))(*(_QWORD*)(v11 + 1256)))
							{
								(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v11 + 1256) + 80i64))(
									*(_QWORD*)(v11 + 1256),
									&v432);
								v63 = *(float**)(v11 + 1256);
								v64 = (__m128)(unsigned int)v435;
								*(float*)&v348 = (float)((float)((float)(*(float*)(v11 + 2148) * v63[20]) * *(float*)(v11 + 2496))
									+ (float)((float)(*(float*)(v11 + 2264) * v63[21]) * *(float*)(v11 + 2612)))
									+ (float)((float)(*(float*)(v11 + 2380) * v63[22]) * *(float*)(v11 + 2728));
								v395 = *(float*)&v439 * *(float*)&v348;
								*(float*)&v444 = *(float*)&v444 + (float)(*(float*)&v435 * *(float*)&v348);
								*(float*)&v441 = *(float*)&v441 + (float)(*(float*)&v432 * *(float*)&v348);
								*((float*)&v441 + 1) = *((float*)&v441 + 1) + (float)(*((float*)&v432 + 1) * *(float*)&v348);
								*(float*)&v447 = *(float*)&v447 + (float)(*(float*)&v438 * *(float*)&v348);
								*((float*)&v447 + 1) = *((float*)&v447 + 1) + (float)(*((float*)&v438 + 1) * *(float*)&v348);
								*((float*)&v444 + 1) = *((float*)&v444 + 1) + (float)(*((float*)&v435 + 1) * *(float*)&v348);
								*((float*)&v444 + 2) = *((float*)&v444 + 2) + (float)(*((float*)&v435 + 2) * *(float*)&v348);
								*((float*)&v441 + 2) = *((float*)&v441 + 2) + (float)(*((float*)&v432 + 2) * *(float*)&v348);
								*((float*)&v441 + 3) = *((float*)&v441 + 3) + (float)(*((float*)&v432 + 3) * *(float*)&v348);
								*((float*)&v447 + 2) = *((float*)&v447 + 2) + (float)(*((float*)&v438 + 2) * *(float*)&v348);
								*((float*)&v447 + 3) = *((float*)&v447 + 3) + (float)(*((float*)&v438 + 3) * *(float*)&v348);
								*((float*)&v444 + 3) = *((float*)&v444 + 3) + (float)(*((float*)&v435 + 3) * *(float*)&v348);
								*(float*)&v445 = *(float*)&v445 + (float)(*(float*)&v436 * *(float*)&v348);
								*(float*)&v442 = *(float*)&v442 + (float)(*(float*)&v433 * *(float*)&v348);
								*((float*)&v442 + 1) = *((float*)&v442 + 1) + (float)(*((float*)&v433 + 1) * *(float*)&v348);
								*(float*)&v448 = *(float*)&v448 + (float)(*(float*)&v439 * *(float*)&v348);
								*((float*)&v448 + 1) = *((float*)&v448 + 1) + (float)(*((float*)&v439 + 1) * *(float*)&v348);
								*((float*)&v445 + 1) = *((float*)&v445 + 1) + (float)(*((float*)&v436 + 1) * *(float*)&v348);
								*((float*)&v445 + 2) = *((float*)&v445 + 2) + (float)(*((float*)&v436 + 2) * *(float*)&v348);
								*((float*)&v442 + 2) = *((float*)&v442 + 2) + (float)(*((float*)&v433 + 2) * *(float*)&v348);
								*((float*)&v442 + 3) = *((float*)&v442 + 3) + (float)(*((float*)&v433 + 3) * *(float*)&v348);
								*((float*)&v448 + 2) = *((float*)&v448 + 2) + (float)(*((float*)&v439 + 2) * *(float*)&v348);
								*((float*)&v448 + 3) = *((float*)&v448 + 3) + (float)(*((float*)&v439 + 3) * *(float*)&v348);
								*((float*)&v445 + 3) = *((float*)&v445 + 3) + (float)(*((float*)&v436 + 3) * *(float*)&v348);
								v443 = v443 + (float)(v434 * *(float*)&v348);
								v446 = v446 + (float)(v437 * *(float*)&v348);
								v449 = v449 + (float)(v440 * *(float*)&v348);
								v65 = (float*)(*(__int64(__fastcall**)(float*))(*(_QWORD*)v63 + 224i64))(v63);
								v59 = (__m128)v348;
								v66 = (__m128*)(v11 + 4336);
								v64.m128_f32[0] = *(float*)&v348;
								v67 = 16i64;
								v68 = _mm_shuffle_ps(v64, v64, 0);
								*(float*)(v11 + 4320) = *(float*)&v348 * *v65;
								v69 = *(float*)&v348 * v65[1];
								v70 = (char*)v65 - v11;
								*(float*)(v11 + 4324) = v69;
								do
								{
									v71 = *(__m128*)((char*)v66 + (_QWORD)v70 - 4320);
									v72 = *v66++;
									v66[-1] = _mm_add_ps(v72, _mm_mul_ps(v71, v68));
									--v67;
								} while (v67);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 296i64))(*(_QWORD*)(v11 + 1256)))
							{
								(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v11 + 1256) + 88i64))(
									*(_QWORD*)(v11 + 1256),
									&v432);
								v73 = (__m128)DWORD1(v432);
								*(float*)&v349 = (float)((float)((float)(*(float*)(*(_QWORD*)(v11 + 1256) + 80i64)
									* *(float*)(v11 + 2152))
									* *(float*)(v11 + 2500))
									+ (float)((float)(*(float*)(*(_QWORD*)(v11 + 1256) + 84i64)
										* *(float*)(v11 + 2268))
										* *(float*)(v11 + 2616)))
									+ (float)((float)(*(float*)(*(_QWORD*)(v11 + 1256) + 88i64) * *(float*)(v11 + 2384))
										* *(float*)(v11 + 2732));
								v74 = *(float*)&v435 * *(float*)&v349;
								v75 = *(float*)&v438 * *(float*)&v349;
								v73.m128_f32[0] = *((float*)&v432 + 1) * *(float*)&v349;
								v76 = *((float*)&v435 + 1) * *(float*)&v349;
								v77 = *((float*)&v438 + 1) * *(float*)&v349;
								v78 = *((float*)&v432 + 2) * *(float*)&v349;
								v79 = *((float*)&v435 + 2) * *(float*)&v349;
								v80 = *((float*)&v438 + 2) * *(float*)&v349;
								v81 = *((float*)&v432 + 3) * *(float*)&v349;
								v82 = *((float*)&v435 + 3) * *(float*)&v349;
								v83 = *((float*)&v438 + 3) * *(float*)&v349;
								v84 = *(float*)&v433 * *(float*)&v349;
								v85 = *(float*)&v436 * *(float*)&v349;
								v86 = *(float*)&v439 * *(float*)&v349;
								v379 = *((float*)&v433 + 1) * *(float*)&v349;
								v382 = *((float*)&v436 + 1) * *(float*)&v349;
								v376 = *((float*)&v439 + 1) * *(float*)&v349;
								v370 = *((float*)&v433 + 2) * *(float*)&v349;
								v364 = *((float*)&v436 + 2) * *(float*)&v349;
								v361 = *((float*)&v439 + 2) * *(float*)&v349;
								v358 = *((float*)&v433 + 3) * *(float*)&v349;
								v367 = *((float*)&v436 + 3) * *(float*)&v349;
								v355 = *((float*)&v439 + 3) * *(float*)&v349;
								v352 = v434 * *(float*)&v349;
								v373 = v437 * *(float*)&v349;
								v87 = v440 * *(float*)&v349;
								*(float*)(v11 + 3792) = (float)(*(float*)&v432 * *(float*)&v349) + *(float*)(v11 + 3792);
								*(float*)(v11 + 3840) = v74 + *(float*)(v11 + 3840);
								*(float*)(v11 + 3888) = v75 + *(float*)(v11 + 3888);
								*(float*)(v11 + 3796) = v73.m128_f32[0] + *(float*)(v11 + 3796);
								*(float*)(v11 + 3844) = v76 + *(float*)(v11 + 3844);
								*(float*)(v11 + 3892) = v77 + *(float*)(v11 + 3892);
								*(float*)(v11 + 3800) = v78 + *(float*)(v11 + 3800);
								*(float*)(v11 + 3848) = v79 + *(float*)(v11 + 3848);
								*(float*)(v11 + 3896) = v80 + *(float*)(v11 + 3896);
								*(float*)(v11 + 3804) = v81 + *(float*)(v11 + 3804);
								*(float*)(v11 + 3852) = v82 + *(float*)(v11 + 3852);
								*(float*)(v11 + 3900) = v83 + *(float*)(v11 + 3900);
								*(float*)(v11 + 3808) = v84 + *(float*)(v11 + 3808);
								*(float*)(v11 + 3856) = v85 + *(float*)(v11 + 3856);
								*(float*)(v11 + 3904) = v86 + *(float*)(v11 + 3904);
								*(float*)(v11 + 3812) = v379 + *(float*)(v11 + 3812);
								*(float*)(v11 + 3860) = v382 + *(float*)(v11 + 3860);
								*(float*)(v11 + 3908) = v376 + *(float*)(v11 + 3908);
								*(float*)(v11 + 3816) = v370 + *(float*)(v11 + 3816);
								*(float*)(v11 + 3864) = v364 + *(float*)(v11 + 3864);
								*(float*)(v11 + 3912) = v361 + *(float*)(v11 + 3912);
								*(float*)(v11 + 3820) = v358 + *(float*)(v11 + 3820);
								*(float*)(v11 + 3868) = v367 + *(float*)(v11 + 3868);
								*(float*)(v11 + 3916) = v355 + *(float*)(v11 + 3916);
								*(float*)(v11 + 3824) = v352 + *(float*)(v11 + 3824);
								*(float*)(v11 + 3872) = v373 + *(float*)(v11 + 3872);
								*(float*)(v11 + 3920) = v87 + *(float*)(v11 + 3920);
								v88 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 232i64))(*(_QWORD*)(v11 + 1256));
								v59 = (__m128)v349;
								v89 = (__m128*)(v11 + 4608);
								v73.m128_f32[0] = *(float*)&v349;
								v90 = _mm_shuffle_ps(v73, v73, 0);
								*v51 = *(float*)&v349 * *v88;
								*(float*)(v11 + 4596) = *(float*)&v349 * v88[1];
								v91 = (char*)v88 - v11;
								v92 = 16i64;
								do
								{
									v93 = *(__m128*)((char*)v89 + (_QWORD)v91 - 4592);
									v94 = *v89++;
									v89[-1] = _mm_add_ps(v94, _mm_mul_ps(v93, v90));
									--v92;
								} while (v92);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 304i64))(*(_QWORD*)(v11 + 1256)))
							{
								(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v11 + 1256) + 96i64))(
									*(_QWORD*)(v11 + 1256),
									&v432);
								v95 = (__m128)DWORD1(v432);
								*(float*)&v350 = (float)((float)((float)(*(float*)(v11 + 2156)
									* *(float*)(*(_QWORD*)(v11 + 1256) + 80i64))
									* *(float*)(v11 + 2504))
									+ (float)((float)(*(float*)(v11 + 2272)
										* *(float*)(*(_QWORD*)(v11 + 1256) + 84i64))
										* *(float*)(v11 + 2620)))
									+ (float)((float)(*(float*)(v11 + 2388) * *(float*)(*(_QWORD*)(v11 + 1256) + 88i64))
										* *(float*)(v11 + 2736));
								v96 = *(float*)&v435 * *(float*)&v350;
								v97 = *(float*)&v438 * *(float*)&v350;
								v95.m128_f32[0] = *((float*)&v432 + 1) * *(float*)&v350;
								v98 = *((float*)&v435 + 1) * *(float*)&v350;
								v99 = *((float*)&v438 + 1) * *(float*)&v350;
								v100 = *((float*)&v432 + 2) * *(float*)&v350;
								v101 = *((float*)&v435 + 2) * *(float*)&v350;
								v102 = *((float*)&v438 + 2) * *(float*)&v350;
								v103 = *((float*)&v432 + 3) * *(float*)&v350;
								v104 = *((float*)&v435 + 3) * *(float*)&v350;
								v105 = *((float*)&v438 + 3) * *(float*)&v350;
								v106 = *(float*)&v433 * *(float*)&v350;
								v107 = *(float*)&v436 * *(float*)&v350;
								v108 = *(float*)&v439 * *(float*)&v350;
								v380 = *((float*)&v433 + 1) * *(float*)&v350;
								v383 = *((float*)&v436 + 1) * *(float*)&v350;
								v377 = *((float*)&v439 + 1) * *(float*)&v350;
								v371 = *((float*)&v433 + 2) * *(float*)&v350;
								v365 = *((float*)&v436 + 2) * *(float*)&v350;
								v362 = *((float*)&v439 + 2) * *(float*)&v350;
								v359 = *((float*)&v433 + 3) * *(float*)&v350;
								v368 = *((float*)&v436 + 3) * *(float*)&v350;
								v356 = *((float*)&v439 + 3) * *(float*)&v350;
								v353 = v434 * *(float*)&v350;
								v374 = v437 * *(float*)&v350;
								v109 = v440 * *(float*)&v350;
								*(float*)(v11 + 3936) = (float)(*(float*)&v432 * *(float*)&v350) + *(float*)(v11 + 3936);
								*(float*)(v11 + 3984) = v96 + *(float*)(v11 + 3984);
								*(float*)(v11 + 4032) = v97 + *(float*)(v11 + 4032);
								*(float*)(v11 + 3940) = v95.m128_f32[0] + *(float*)(v11 + 3940);
								*(float*)(v11 + 3988) = v98 + *(float*)(v11 + 3988);
								*(float*)(v11 + 4036) = v99 + *(float*)(v11 + 4036);
								*(float*)(v11 + 3944) = v100 + *(float*)(v11 + 3944);
								*(float*)(v11 + 3992) = v101 + *(float*)(v11 + 3992);
								*(float*)(v11 + 4040) = v102 + *(float*)(v11 + 4040);
								*(float*)(v11 + 3948) = v103 + *(float*)(v11 + 3948);
								*(float*)(v11 + 3996) = v104 + *(float*)(v11 + 3996);
								*(float*)(v11 + 4044) = v105 + *(float*)(v11 + 4044);
								*(float*)(v11 + 3952) = v106 + *(float*)(v11 + 3952);
								*(float*)(v11 + 4000) = v107 + *(float*)(v11 + 4000);
								*(float*)(v11 + 4048) = v108 + *(float*)(v11 + 4048);
								*(float*)(v11 + 3956) = v380 + *(float*)(v11 + 3956);
								*(float*)(v11 + 4004) = v383 + *(float*)(v11 + 4004);
								*(float*)(v11 + 4052) = v377 + *(float*)(v11 + 4052);
								*(float*)(v11 + 3960) = v371 + *(float*)(v11 + 3960);
								*(float*)(v11 + 4008) = v365 + *(float*)(v11 + 4008);
								*(float*)(v11 + 4056) = v362 + *(float*)(v11 + 4056);
								*(float*)(v11 + 3964) = v359 + *(float*)(v11 + 3964);
								*(float*)(v11 + 4012) = v368 + *(float*)(v11 + 4012);
								*(float*)(v11 + 4060) = v356 + *(float*)(v11 + 4060);
								*(float*)(v11 + 3968) = v353 + *(float*)(v11 + 3968);
								*(float*)(v11 + 4016) = v374 + *(float*)(v11 + 4016);
								*(float*)(v11 + 4064) = v109 + *(float*)(v11 + 4064);
								v110 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 240i64))(*(_QWORD*)(v11 + 1256));
								v59 = (__m128)v350;
								v111 = (__m128*)(v11 + 4880);
								v95.m128_f32[0] = *(float*)&v350;
								v112 = _mm_shuffle_ps(v95, v95, 0);
								*(float*)(v11 + 4864) = *(float*)&v350 * *v110;
								*(float*)(v11 + 4868) = *(float*)&v350 * v110[1];
								v113 = (char*)v110 - v11;
								v114 = 16i64;
								do
								{
									v115 = *(__m128*)((char*)v111 + (_QWORD)v113 - 4864);
									v116 = *v111++;
									v111[-1] = _mm_add_ps(v116, _mm_mul_ps(v115, v112));
									--v114;
								} while (v114);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 312i64))(*(_QWORD*)(v11 + 1256)))
							{
								(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v11 + 1256) + 104i64))(
									*(_QWORD*)(v11 + 1256),
									&v432);
								v117 = (__m128)DWORD1(v432);
								*(float*)&v351 = (float)((float)((float)(*(float*)(v11 + 2160)
									* *(float*)(*(_QWORD*)(v11 + 1256) + 80i64))
									* *(float*)(v11 + 2508))
									+ (float)((float)(*(float*)(v11 + 2276)
										* *(float*)(*(_QWORD*)(v11 + 1256) + 84i64))
										* *(float*)(v11 + 2624)))
									+ (float)((float)(*(float*)(v11 + 2392) * *(float*)(*(_QWORD*)(v11 + 1256) + 88i64))
										* *(float*)(v11 + 2740));
								v118 = *(float*)&v435 * *(float*)&v351;
								v119 = *(float*)&v438 * *(float*)&v351;
								v117.m128_f32[0] = *((float*)&v432 + 1) * *(float*)&v351;
								v120 = *((float*)&v435 + 1) * *(float*)&v351;
								v121 = *((float*)&v438 + 1) * *(float*)&v351;
								v122 = *((float*)&v432 + 2) * *(float*)&v351;
								v123 = *((float*)&v435 + 2) * *(float*)&v351;
								v124 = *((float*)&v438 + 2) * *(float*)&v351;
								v125 = *((float*)&v432 + 3) * *(float*)&v351;
								v126 = *((float*)&v435 + 3) * *(float*)&v351;
								v127 = *((float*)&v438 + 3) * *(float*)&v351;
								v128 = *(float*)&v433 * *(float*)&v351;
								v129 = *(float*)&v436 * *(float*)&v351;
								v130 = *(float*)&v439 * *(float*)&v351;
								v381 = *((float*)&v433 + 1) * *(float*)&v351;
								v384 = *((float*)&v436 + 1) * *(float*)&v351;
								v378 = *((float*)&v439 + 1) * *(float*)&v351;
								v372 = *((float*)&v433 + 2) * *(float*)&v351;
								v366 = *((float*)&v436 + 2) * *(float*)&v351;
								v363 = *((float*)&v439 + 2) * *(float*)&v351;
								v360 = *((float*)&v433 + 3) * *(float*)&v351;
								v369 = *((float*)&v436 + 3) * *(float*)&v351;
								v357 = *((float*)&v439 + 3) * *(float*)&v351;
								v354 = v434 * *(float*)&v351;
								v375 = v437 * *(float*)&v351;
								v131 = v440 * *(float*)&v351;
								*(float*)(v11 + 4080) = (float)(*(float*)&v432 * *(float*)&v351) + *(float*)(v11 + 4080);
								*(float*)(v11 + 4128) = v118 + *(float*)(v11 + 4128);
								*(float*)(v11 + 4176) = v119 + *(float*)(v11 + 4176);
								*(float*)(v11 + 4084) = v117.m128_f32[0] + *(float*)(v11 + 4084);
								*(float*)(v11 + 4132) = v120 + *(float*)(v11 + 4132);
								*(float*)(v11 + 4180) = v121 + *(float*)(v11 + 4180);
								*(float*)(v11 + 4088) = v122 + *(float*)(v11 + 4088);
								*(float*)(v11 + 4136) = v123 + *(float*)(v11 + 4136);
								*(float*)(v11 + 4184) = v124 + *(float*)(v11 + 4184);
								*(float*)(v11 + 4092) = v125 + *(float*)(v11 + 4092);
								*(float*)(v11 + 4140) = v126 + *(float*)(v11 + 4140);
								*(float*)(v11 + 4188) = v127 + *(float*)(v11 + 4188);
								*(float*)(v11 + 4096) = v128 + *(float*)(v11 + 4096);
								*(float*)(v11 + 4144) = v129 + *(float*)(v11 + 4144);
								*(float*)(v11 + 4192) = v130 + *(float*)(v11 + 4192);
								*(float*)(v11 + 4100) = v381 + *(float*)(v11 + 4100);
								*(float*)(v11 + 4148) = v384 + *(float*)(v11 + 4148);
								*(float*)(v11 + 4196) = v378 + *(float*)(v11 + 4196);
								*(float*)(v11 + 4104) = v372 + *(float*)(v11 + 4104);
								*(float*)(v11 + 4152) = v366 + *(float*)(v11 + 4152);
								*(float*)(v11 + 4200) = v363 + *(float*)(v11 + 4200);
								*(float*)(v11 + 4108) = v360 + *(float*)(v11 + 4108);
								*(float*)(v11 + 4156) = v369 + *(float*)(v11 + 4156);
								*(float*)(v11 + 4204) = v357 + *(float*)(v11 + 4204);
								*(float*)(v11 + 4112) = v354 + *(float*)(v11 + 4112);
								*(float*)(v11 + 4160) = v375 + *(float*)(v11 + 4160);
								*(float*)(v11 + 4208) = v131 + *(float*)(v11 + 4208);
								v132 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 248i64))(*(_QWORD*)(v11 + 1256));
								v59 = (__m128)v351;
								v133 = (__m128*)(v11 + 5152);
								v117.m128_f32[0] = *(float*)&v351;
								v134 = _mm_shuffle_ps(v117, v117, 0);
								*(float*)(v11 + 5136) = *(float*)&v351 * *v132;
								*(float*)(v11 + 5140) = *(float*)&v351 * v132[1];
								v135 = (char*)v132 - v11;
								v136 = 16i64;
								do
								{
									v137 = *(__m128*)((char*)v133 + (_QWORD)v135 - 5136);
									v138 = *v133++;
									v133[-1] = _mm_add_ps(v138, _mm_mul_ps(v137, v134));
									--v136;
								} while (v136);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 320i64))(*(_QWORD*)(v11 + 1256)))
							{
								v139 = (__m128) * (unsigned int*)(v11 + 2164);
								v140 = *(float**)(v11 + 1256);
								v139.m128_f32[0] = (float)((float)((float)(v139.m128_f32[0] * v140[20]) * *(float*)(v11 + 2512))
									+ (float)((float)(*(float*)(v11 + 2280) * v140[21]) * *(float*)(v11 + 2628)))
									+ (float)((float)(*(float*)(v11 + 2396) * v140[22]) * *(float*)(v11 + 2744));
								(*(void(__fastcall**)(float*, float*, float*, __m128*))(*(_QWORD*)v140 + 200i64))(
									v140,
									&v399,
									&v403,
									&v421);
								v390 = v390 + (float)(v399 * v139.m128_f32[0]);
								v389 = v389 + (float)(v403 * v139.m128_f32[0]);
								v404 = _mm_add_ps(_mm_mul_ps(v421, _mm_shuffle_ps(v139, v139, 0)), v404);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 328i64))(*(_QWORD*)(v11 + 1256)))
							{
								v141 = *(float**)(v11 + 1256);
								v142 = (float)((float)((float)(v141[20] * *(float*)(v11 + 2168)) * *(float*)(v11 + 2516))
									+ (float)((float)(v141[21] * *(float*)(v11 + 2284)) * *(float*)(v11 + 2632)))
									+ (float)((float)(v141[22] * *(float*)(v11 + 2400)) * *(float*)(v11 + 2748));
								v143 = ((__m128 (__fastcall*)(float*, __m128*)) * (_QWORD*)(*(_QWORD*)v141 + 208i64))(v141, &v422);
								v143.m128_f32[0] = v142;
								v49 = _mm_add_ps(_mm_mul_ps(v422, _mm_shuffle_ps(v143, v143, 0)), v413);
								v413 = v49;
							}
							else
							{
								v49 = v413;
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 336i64))(*(_QWORD*)(v11 + 1256)))
							{
								v144 = *(float**)(v11 + 1256);
								v145 = (float)((float)((float)(v144[20] * *(float*)(v11 + 2172)) * *(float*)(v11 + 2520))
									+ (float)((float)(v144[21] * *(float*)(v11 + 2288)) * *(float*)(v11 + 2636)))
									+ (float)((float)(v144[22] * *(float*)(v11 + 2404)) * *(float*)(v11 + 2752));
								v146 = ((__m128 (__fastcall*)(float*, __m128*)) * (_QWORD*)(*(_QWORD*)v144 + 464i64))(v144, &v424);
								v146.m128_f32[0] = v145;
								v419 = _mm_add_ps(_mm_mul_ps(v424, _mm_shuffle_ps(v146, v146, 0)), v419);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 344i64))(*(_QWORD*)(v11 + 1256)))
							{
								v147 = *(float**)(v11 + 1256);
								v148 = (float)((float)((float)(v147[20] * *(float*)(v11 + 2176)) * *(float*)(v11 + 2524))
									+ (float)((float)(v147[21] * *(float*)(v11 + 2292)) * *(float*)(v11 + 2640)))
									+ (float)((float)(v147[22] * *(float*)(v11 + 2408)) * *(float*)(v11 + 2756));
								(*(void(__fastcall**)(float*, float*, float*, float*, float*))(*(_QWORD*)v147 + 472i64))(
									v147,
									&v396,
									&v402,
									&v398,
									&v401);
								v388 = v388 + (float)(v396 * v148);
								v385 = v385 + (float)(v402 * v148);
								v386 = v386 + (float)(v398 * v148);
								v387 = v387 + (float)(v401 * v148);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 352i64))(*(_QWORD*)(v11 + 1256)))
							{
								v149 = *(_QWORD*)(v11 + 1256);
								v59 = (__m128) * (unsigned int*)(v149 + 80);
								*(float*)(v149 + 248) = (float)((float)((float)(v59.m128_f32[0] * *(float*)(v11 + 2180))
									* *(float*)(v11 + 2528))
									+ (float)((float)(*(float*)(v149 + 84) * *(float*)(v11 + 2296))
										* *(float*)(v11 + 2644)))
									+ (float)((float)(*(float*)(v149 + 88) * *(float*)(v11 + 2412))
										* *(float*)(v11 + 2760));
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 360i64))(*(_QWORD*)(v11 + 1256)))
							{
								v150 = *(_QWORD*)(v11 + 1256);
								v59 = (__m128) * (unsigned int*)(v150 + 80);
								*(float*)(v150 + 252) = (float)((float)((float)(v59.m128_f32[0] * *(float*)(v11 + 2184))
									* *(float*)(v11 + 2532))
									+ (float)((float)(*(float*)(v150 + 84) * *(float*)(v11 + 2300))
										* *(float*)(v11 + 2648)))
									+ (float)((float)(*(float*)(v150 + 88) * *(float*)(v11 + 2416))
										* *(float*)(v11 + 2764));
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 368i64))(*(_QWORD*)(v11 + 1256)))
							{
								v151 = *(float**)(v11 + 1256);
								v59 = (__m128) * (unsigned int*)(v11 + 2188);
								v151[64] = (float)((float)((float)(v59.m128_f32[0] * v151[20]) * *(float*)(v11 + 2536))
									+ (float)((float)(*(float*)(v11 + 2304) * v151[21]) * *(float*)(v11 + 2652)))
									+ (float)((float)(*(float*)(v11 + 2420) * v151[22]) * *(float*)(v11 + 2768));
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 376i64))(*(_QWORD*)(v11 + 1256)))
							{
								v152 = *(float**)(v11 + 1256);
								v153 = (float)((float)((float)(v152[20] * *(float*)(v11 + 2192)) * *(float*)(v11 + 2540))
									+ (float)((float)(v152[21] * *(float*)(v11 + 2308)) * *(float*)(v11 + 2656)))
									+ (float)((float)(v152[22] * *(float*)(v11 + 2424)) * *(float*)(v11 + 2772));
								(*(void(__fastcall**)(float*, __m128**))(*(_QWORD*)v152 + 216i64))(v152, &v450);
								v154 = (float)(*((float*)&v450 + 1) * v153) + *(float*)(v11 + 4228);
								v50->m128_f32[0] = (float)(*(float*)&v450 * v153) + v50->m128_f32[0];
								v155 = *(float*)&v451;
								*(float*)(v11 + 4228) = v154;
								v156 = (float)(*((float*)&v451 + 1) * v153) + *(float*)(v11 + 4236);
								*(float*)(v11 + 4232) = (float)(v155 * v153) + *(float*)(v11 + 4232);
								v157 = (float)(v452 * v153) + *(float*)(v11 + 4248);
								*(float*)(v11 + 4236) = v156;
								v158 = (float)(v453 * v153) + *(float*)(v11 + 4252);
								*(float*)(v11 + 4248) = v157;
								v159 = (float)(v454 * v153) + *(float*)(v11 + 4256);
								*(float*)(v11 + 4252) = v158;
								v160 = (float)(v455 * v153) + *(float*)(v11 + 4260);
								*(float*)(v11 + 4256) = v159;
								v161 = (float)(v456 * v153) + *(float*)(v11 + 4284);
								*(float*)(v11 + 4260) = v160;
								v162 = (float)(v457 * v153) + *(float*)(v11 + 4288);
								*(float*)(v11 + 4284) = v161;
								v163 = (float)(v458 * v153) + *(float*)(v11 + 4292);
								*(float*)(v11 + 4288) = v162;
								v164 = (float)(v459 * v153) + *(float*)(v11 + 4296);
								*(float*)(v11 + 4292) = v163;
								v165 = (float)(v460 * v153) + *(float*)(v11 + 4300);
								*(float*)(v11 + 4296) = v164;
								v166 = (float)(v461 * v153) + *(float*)(v11 + 4304);
								*(float*)(v11 + 4300) = v165;
								v167 = (float)(v462 * v153) + *(float*)(v11 + 4308);
								*(float*)(v11 + 4304) = v166;
								*(float*)(v11 + 4308) = v167;
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 384i64))(*(_QWORD*)(v11 + 1256)))
							{
								v168 = *(float**)(v11 + 1256);
								v169 = (float)((float)((float)(*(float*)(v11 + 2196) * v168[20]) * *(float*)(v11 + 2544))
									+ (float)((float)(*(float*)(v11 + 2312) * v168[21]) * *(float*)(v11 + 2660)))
									+ (float)((float)(*(float*)(v11 + 2428) * v168[22]) * *(float*)(v11 + 2776));
								v170 = ((__m128 (__fastcall*)(float*, __m128*)) * (_QWORD*)(*(_QWORD*)v168 + 480i64))(v168, &v429);
								v170.m128_f32[0] = v169;
								*(__m128*)(v11 + 6496) = _mm_add_ps(
									*(__m128*)(v11 + 6496),
									_mm_mul_ps(v429, _mm_shuffle_ps(v170, v170, 0)));
							}
							if (((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 176i64))(*(_QWORD*)(v11 + 1256)) & 1) != 0)
							{
								v172 = (__m128) * (unsigned int*)(v11 + 2200);
								v171 = *(float**)(v11 + 1256);
								v172.m128_f32[0] = (float)((float)((float)(v172.m128_f32[0] * v171[20]) * *(float*)(v11 + 2548))
									+ (float)((float)(*(float*)(v11 + 2316) * v171[21]) * *(float*)(v11 + 2664)))
									+ (float)((float)(*(float*)(v11 + 2432) * v171[22]) * *(float*)(v11 + 2780));
								v173 = v172;
								*(float*)(v11 + 6512) = v172.m128_f32[0] + *(float*)(v11 + 6512);
								v174 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v171 + 184i64))(v171);
								v175 = v174;
								if (v174 != -1)
								{
									v176 = *(_QWORD*)(v11 + 1256);
									if (*(_QWORD*)(v176 + 288) > v175)
									{
										v173.m128_f32[0] = v172.m128_f32[0];
										*(__m128*)(v11 + 6528) = _mm_add_ps(
											*(__m128*)(v11 + 6528),
											_mm_mul_ps(
												*(__m128*)(32 * v175 + *(_QWORD*)(v176 + 280) + 16),
												_mm_shuffle_ps(v173, v173, 0)));
									}
								}
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 392i64))(*(_QWORD*)(v11 + 1256)))
							{
								v177 = *(float**)(v11 + 1256);
								v178 = (float)((float)((float)(*(float*)(v11 + 2212) * v177[20]) * *(float*)(v11 + 2560))
									+ (float)((float)(*(float*)(v11 + 2328) * v177[21]) * *(float*)(v11 + 2676)))
									+ (float)((float)(*(float*)(v11 + 2444) * v177[22]) * *(float*)(v11 + 2792));
								(*(void(__fastcall**)(float*, float*))(*(_QWORD*)v177 + 488i64))(v177, &v400);
								*(float*)(v11 + 5408) = (float)(v400 * v178) + *(float*)(v11 + 5408);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 400i64))(*(_QWORD*)(v11 + 1256)))
							{
								v179 = *(float**)(v11 + 1256);
								v180 = (float)((float)((float)(*(float*)(v11 + 2216) * v179[20]) * *(float*)(v11 + 2564))
									+ (float)((float)(*(float*)(v11 + 2332) * v179[21]) * *(float*)(v11 + 2680)))
									+ (float)((float)(*(float*)(v11 + 2448) * v179[22]) * *(float*)(v11 + 2796));
								v181 = ((__m128 (__fastcall*)(float*, __m128*)) * (_QWORD*)(*(_QWORD*)v179 + 496i64))(v179, &v423);
								v181.m128_f32[0] = v180;
								*(__m128*)(v11 + 5424) = _mm_add_ps(
									*(__m128*)(v11 + 5424),
									_mm_mul_ps(v423, _mm_shuffle_ps(v181, v181, 0)));
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 408i64))(*(_QWORD*)(v11 + 1256)))
							{
								v182 = *(float**)(v11 + 1256);
								v183 = (float)((float)((float)(v182[20] * *(float*)(v11 + 2220)) * *(float*)(v11 + 2568))
									+ (float)((float)(v182[21] * *(float*)(v11 + 2336)) * *(float*)(v11 + 2684)))
									+ (float)((float)(v182[22] * *(float*)(v11 + 2452)) * *(float*)(v11 + 2800));
								v184 = ((__m128 (__fastcall*)(float*, __m128*)) * (_QWORD*)(*(_QWORD*)v182 + 520i64))(v182, &v430);
								v184.m128_f32[0] = v183;
								*(__m128*)(v11 + 5712) = _mm_add_ps(
									*(__m128*)(v11 + 5712),
									_mm_mul_ps(v430, _mm_shuffle_ps(v184, v184, 0)));
							}
							v185 = 0;
							v186 = 0;
							v187 = 0i64;
							v188 = (float*)(v11 + 2572);
							v467 = (__m128)xmmword_140C777D0;
							v468[0] = (__m128)xmmword_140B7B240;
							do
							{
								if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 1256) + 416i64))(
									*(_QWORD*)(v11 + 1256),
									v187))
								{
									v189 = *(float**)(v11 + 1256);
									v190 = (float)((float)((float)(v189[20] * *(v188 - 87)) * *v188)
										+ (float)((float)(v189[21] * *(v188 - 58)) * v188[29]))
										+ (float)((float)(v189[22] * *(v188 - 29)) * v188[58]);
									(*(void(__fastcall**)(float*, _QWORD, __m128*, __m128*))(*(_QWORD*)v189 + 504i64))(
										v189,
										v186,
										&v467,
										v468);
									v59.m128_f32[0] = v190;
									v59 = _mm_shuffle_ps(v59, v59, 0);
									v191 = _mm_mul_ps(v468[0], v59);
									v46[-1] = _mm_add_ps(v46[-1], _mm_mul_ps(v467, v59));
									*v46 = _mm_add_ps(*v46, v191);
								}
								++v186;
								++v187;
								v46 += 2;
								++v188;
							} while (v186 < 8);
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 424i64))(*(_QWORD*)(v11 + 1256)))
							{
								v192 = *(float**)(v11 + 1256);
								v193 = (float)((float)((float)(v192[20] * *(float*)(v11 + 2256)) * *(float*)(v11 + 2604))
									+ (float)((float)(v192[21] * *(float*)(v11 + 2372)) * *(float*)(v11 + 2720)))
									+ (float)((float)(v192[22] * *(float*)(v11 + 2488)) * *(float*)(v11 + 2836));
								*(float*)(v11 + 5696) = (float)((*(float(__fastcall**)(float*))(*(_QWORD*)v192 + 512i64))(v192)
									* v193)
									+ *(float*)(v11 + 5696);
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 432i64))(*(_QWORD*)(v11 + 1256)))
							{
								v194 = *(float**)(v11 + 1256);
								v194[66] = (float)((float)((float)(v194[20] * *(float*)(v11 + 2204)) * *(float*)(v11 + 2552))
									+ (float)((float)(v194[21] * *(float*)(v11 + 2320)) * *(float*)(v11 + 2668)))
									+ (float)((float)(v194[22] * *(float*)(v11 + 2436)) * *(float*)(v11 + 2784));
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 440i64))(*(_QWORD*)(v11 + 1256)))
							{
								v195 = *(float**)(v11 + 1256);
								v195[67] = (float)((float)((float)(v195[20] * *(float*)(v11 + 2208)) * *(float*)(v11 + 2556))
									+ (float)((float)(v195[21] * *(float*)(v11 + 2324)) * *(float*)(v11 + 2672)))
									+ (float)((float)(v195[22] * *(float*)(v11 + 2440)) * *(float*)(v11 + 2788));
							}
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 1256) + 448i64))(*(_QWORD*)(v11 + 1256)))
							{
								v196 = *(float**)(v11 + 1256);
								v196[68] = (float)((float)((float)(v196[20] * *(float*)(v11 + 2260)) * *(float*)(v11 + 2608))
									+ (float)((float)(v196[21] * *(float*)(v11 + 2376)) * *(float*)(v11 + 2724)))
									+ (float)((float)(v196[22] * *(float*)(v11 + 2492)) * *(float*)(v11 + 2840));
							}
							v197 = *(float**)(v11 + 1256);
							v198 = (*(float(__fastcall**)(float*))(*(_QWORD*)v197 + 48i64))(v197);
							v199 = *(_QWORD*)(v11 + 1256);
							*(float*)(v11 + 5728) = (float)(v198 * v197[23]) + *(float*)(v11 + 5728);
							if (!*(_QWORD*)(v199 + 128))
							{
								*(_QWORD*)(v199 + 128) = v9;
								*(_QWORD*)(v199 + 136) = *v9;
								*v9 = v199;
								v200 = *(_QWORD*)(v199 + 136);
								if (v200)
									*(_QWORD*)(v200 + 128) = v199 + 136;
							}
							if ((float)(v391 - v394) <= v393 && v391 > v393 && *(_DWORD*)(v11 + 6328) < *(_DWORD*)(v11 + 1320))
							{
								v201 = *(_DWORD**)(v11 + 1256);
								if (v201[81])
								{
									if (*(_DWORD*)(v11 + 6240) == 3)
									{
										v202 = (*(double(__fastcall**)(_DWORD*))(*(_QWORD*)v201 + 256i64))(v201);
										v203 = dword_140C54E50;
										v52 = qword_140C63750;
										if (*(_DWORD*)qword_140C63750 < dword_140C54E50)
											v203 = *(_DWORD*)qword_140C63750;
										v204 = (int)(float)((float)((float)(*(float*)&v202 * dword_140C54E60[v203])
											* (float)((float)(*(_DWORD*)(v11 + 1320) - *(_DWORD*)(v11 + 6328))
												* 0.001))
											* 0.00025000001);
										if (!v204)
											goto LABEL_152;
										v205 = v204;
										do
										{
											v207 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
											v211 = 0i64;
											v208 = *(unsigned int*)qword_140C63750;
											v209 = 0i64;
											v211.m128_f32[0] = v207 * 4000.0;
											v210 = off_140C3AD70;
											v211.m128_f32[0] = v211.m128_f32[0] - 2000.0;
											do
											{
												v212 = *((_DWORD*)*v210 + 4);
												if ((int)v208 < v212)
													v212 = *(_DWORD*)qword_140C63750;
												if (v211.m128_f32[0] >= *((float*)*v210 + v212 + 8))
												{
													v206 = off_140C3AD70[(unsigned int)(v209 + 1)];
													v213 = *((_DWORD*)v206 + 4);
													if ((int)v208 < v213)
														v213 = *(_DWORD*)qword_140C63750;
													if (v211.m128_f32[0] <= *((float*)v206 + v213 + 8))
														break;
												}
												v209 = (unsigned int)(v209 + 1);
												++v210;
											} while ((unsigned int)v209 < 6);
											v11 = (__int64)v412;
											v214 = *((_QWORD*)v412 + 157);
											if ((_DWORD)v209 == 6)
												v209 = 5i64;
											if (*(_DWORD*)(v214 + 324) == 2)
											{
												v215 = (*(double(__fastcall**)(__int64*, __int64(__fastcall***)(), __int64, __int64(__fastcall****)()))(qword_140C77890 + 40))(
													&qword_140C77890,
													v206,
													v208,
													v210);
												v214 = *(_QWORD*)(v11 + 1256);
												v216 = v215;
												v217 = v216 < *(float*)(v214 + 320);
											}
											else
											{
												v217 = 0;
											}
											if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v214 + 264i64))(
												v214,
												*(unsigned int*)(v214 + 4i64 * v217 + 312),
												(unsigned int)v209))
											{
												v218 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(v11 + 1256) + 264i64))(
													*(_QWORD*)(v11 + 1256),
													*(unsigned int*)(*(_QWORD*)(v11 + 1256) + 4i64 * v217 + 312),
													(unsigned int)v209)
													- 1;
												v219 = (int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
													* 2.328306436538696e-10
													* ((double)v218 + 1.0));
												if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(v11 + 1256) + 264i64))(
													*(_QWORD*)(v11 + 1256),
													*(unsigned int*)(*(_QWORD*)(v11 + 1256) + 4i64 * v217 + 312),
													(unsigned int)v209) > 1)
												{
													v220 = *(_QWORD*)(v11 + 1256);
													if (v220 == *(_QWORD*)(v11 + 8 * v209 + 6384)
														&& v217 == *(_DWORD*)(v11 + 4 * v209 + 6432)
														&& v219 == *(_DWORD*)(v11 + 4 * v209 + 6456))
													{
														if (v219 == (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v220
															+ 264i64))(
																v220,
																*(unsigned int*)(v220 + 4i64 * v217 + 312),
																(unsigned int)v209)
															- 1)
															--v219;
														else
															++v219;
													}
												}
												*(_QWORD*)(v11 + 8 * v209 + 6384) = *(_QWORD*)(v11 + 1256);
												*(_DWORD*)(v11 + 4 * v209 + 6432) = v217;
												*(_DWORD*)(v11 + 4 * v209 + 6456) = v219;
												if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, float*, float*, __int128*))(**(_QWORD**)(v11 + 1256) + 272i64))(
													*(_QWORD*)(v11 + 1256),
													*(unsigned int*)(*(_QWORD*)(v11 + 1256) + 4i64 * v217 + 312),
													(unsigned int)v209,
													v219,
													&v392,
													&v397,
													&v405) >= 0)
												{
													v221 = sub_14018B280(96i64, 0);
													v222 = (__int64)v221;
													if (v221)
													{
														*((_QWORD*)v221 + 9) = 0i64;
														*((_QWORD*)v221 + 10) = 0i64;
														*((_QWORD*)v221 + 11) = 0i64;
													}
													else
													{
														v222 = 0i64;
													}
													if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(v11 + 2992) + 40i64))(
														*(_QWORD*)(v11 + 2992),
														v405,
														v222 + 64,
														0i64) < 0)
													{
														if (v222)
														{
															v245 = *(_QWORD**)(v222 + 80);
															if (v245)
																*v245 = *(_QWORD*)(v222 + 88);
															v246 = *(_QWORD*)(v222 + 88);
															if (v246)
																*(_QWORD*)(v246 + 80) = *(_QWORD*)(v222 + 80);
															*(_QWORD*)(v222 + 80) = 0i64;
															*(_QWORD*)(v222 + 88) = 0i64;
															v247 = *(_QWORD*)(v222 + 72);
															if (v247)
																(*(void(__fastcall**)(__int64))(*(_QWORD*)v247 + 8i64))(v247);
															sub_14018B900(v222, 0);
														}
													}
													else
													{
														v223 = v397;
														v224 = v392;
														v225 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
														v416 = v466;
														v420[0] = *(__m128*)ymmword_140C78410.m256_f32;
														v420[1] = *(__m128*) & ymmword_140C78410.m256_f32[4];
														v420[2] = (__m128)xmmword_140C78430;
														v417 = v420;
														v226 = v225 * (float)(v223 - v224);
														v227 = v211;
														v463 = v226 + v224;
														v464 = v226 + v224;
														v465 = v226 + v224;
														v227.m128_f32[0] = v226 + v224;
														v420[3] = _mm_unpacklo_ps(
															_mm_unpacklo_ps((__m128)0xC4FA0000, v211),
															(__m128)xmmword_140B7A4D0);
														v228 = _mm_shuffle_ps(v227, v227, 0);
														v451 = v420;
														v229 = _mm_mul_ps(*(__m128*)ymmword_140C78410.m256_f32, v228);
														v228.m128_f32[0] = v226 + v224;
														v230 = _mm_shuffle_ps(v228, v228, 0);
														v466[0] = (__int128)v229;
														v231 = _mm_mul_ps(*(__m128*) & ymmword_140C78410.m256_f32[4], v230);
														v230.m128_f32[0] = v226 + v224;
														v466[1] = (__int128)v231;
														v466[3] = xmmword_140C78440;
														v466[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v230, v230, 0));
														v450 = (__m128*)v466;
														sub_1401AFB10(&v450, (__m128*)v222);
														v232 = (__int64*)(v11 + 6320);
														if (!*(_QWORD*)(v222 + 80))
														{
															*(_QWORD*)(v222 + 80) = v232;
															*(_QWORD*)(v222 + 88) = *v232;
															*v232 = v222;
															v233 = *(_QWORD*)(v222 + 88);
															if (v233)
																*(_QWORD*)(v233 + 80) = v222 + 88;
														}
														v414 = v222;
														v415 = v11 + 6176;
														v450 = (__m128*)v222;
														v451 = (__m128*)(v11 + 6176);
														sub_1401AFB10(&v450, v420);
														(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v222 + 64) + 72i64))(
															*(_QWORD*)(v222 + 64),
															v420);
														(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v222 + 64) + 112i64))(*(_QWORD*)(v222 + 64));
														(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v222 + 64) + 224i64))(*(_QWORD*)(v222 + 64));
														v234 = *(void(__fastcall****)(_QWORD))(v11 + 1256);
														if (*(void(__fastcall****)(_QWORD))(v222 + 72) != v234)
														{
															if (v234)
																(**v234)(*(_QWORD*)(v11 + 1256));
															v235 = *(_QWORD*)(v222 + 72);
															if (v235)
																(*(void(__fastcall**)(__int64))(*(_QWORD*)v235 + 8i64))(v235);
															*(_QWORD*)(v222 + 72) = v234;
														}
														v236 = *(_QWORD*)(v222 + 64);
														v425[0] = 0;
														v237 = (*(__int64(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v236 + 16i64))(
															v236,
															v425,
															0i64);
														v238 = *(_QWORD*)(v222 + 64);
														if (v237)
														{
															v239 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v238 + 424i64))(
																v238,
																150i64,
																0i64);
															v407 = 150i64;
															v240 = *(_DWORD*)qword_140C63750;
															v241 = dword_140C54E50;
															v242 = (float)*(int*)(v239 + 20);
															v409 = 0i64;
															if (v240 < dword_140C54E50)
																v241 = v240;
															v410 = 3i64;
															v411 = 0;
															v243 = v241;
															v238 = *(_QWORD*)(v222 + 64);
															v244 = &v407;
															v408 = (float)((float)(v242 * dword_140C54E60[v243]) * 0.001) * 0.00025000001;
														}
														else
														{
															v185 = 1;
															v406[0] = 150i64;
															v406[1] = 1065353216i64;
															v406[2] = 0i64;
															v406[3] = 0i64;
															v244 = v406;
														}
														(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v238 + 584i64))(
															v238,
															0i64,
															v244);
														*(_DWORD*)(v11 + 6328) = *(_DWORD*)(v11 + 1320);
													}
												}
											}
											--v205;
										} while (v205);
										if (v185)
											*(_DWORD*)(v11 + 6248) = 1;
									}
								}
							}
						}
						v52 = qword_140C63750;
					LABEL_152:
						v248 = *(_QWORD*)(v11 + 1256);
						*(_QWORD*)(v248 + 80) = 0i64;
						*(_DWORD*)(v248 + 88) = 0;
						v249 = *(_QWORD*)(v11 + 1256);
						v250 = *(_QWORD**)(v249 + 112);
						if (v250)
							*v250 = *(_QWORD*)(v249 + 120);
						v57 = *(_QWORD*)(v249 + 120);
						if (v57)
							*(_QWORD*)(v57 + 112) = *(_QWORD*)(v249 + 112);
						v17 = (__m128)0x3F800000u;
						v56 = v391;
						v43 = a9;
						*(_QWORD*)(v249 + 112) = 0i64;
						*(_QWORD*)(v249 + 120) = 0i64;
						v9 = (__int64*)(v11 + 1328);
						v55 = 16i64;
						v50 = (__m128*)(v11 + 4224);
						v46 = (__m128*)(v11 + 5456);
						v51 = (float*)(v11 + 4592);
						if (!*(_QWORD*)(v11 + 1256))
						{
							LODWORD(v34) = v426;
							LODWORD(v39) = v427;
							v18 = 0i64;
							v26 = 0i64;
							v9 = (__int64*)(v11 + 1328);
							v50 = (__m128*)(v11 + 4224);
							LODWORD(v42) = v428;
							goto LABEL_159;
						}
					}
				}
				v52 = qword_140C63750;
			LABEL_159:
				v251 = v431;
				if (v431.m128_f32[0] > 0.0000099999997)
				{
					v251 = _mm_add_ps(
						*(__m128*)(v11 + 5712),
						_mm_mul_ps((__m128)xmmword_140B7AC50, _mm_shuffle_ps(v431, v431, 0)));
					*(__m128*)(v11 + 5712) = v251;
				}
				if (*(float*)&v34 > 0.0000099999997)
				{
					v252 = dword_140C55C10;
					v251.m128_f32[0] = *(float*)&v34;
					if (*(_DWORD*)v52 < dword_140C55C10)
						v252 = *(_DWORD*)v52;
					*v50 = _mm_add_ps(*v50, _mm_mul_ps(stru_140C55C20[v252], _mm_shuffle_ps(v251, v251, 0)));
					v253 = dword_140C55CD0;
					if (*(_DWORD*)v52 < dword_140C55CD0)
						v253 = *(_DWORD*)v52;
					*(float*)(v11 + 4248) = (float)(*(float*)&v34 * dword_140C55CE0[v253]) + *(float*)(v11 + 4248);
					v254 = dword_140C55D30;
					if (*(_DWORD*)v52 < dword_140C55D30)
						v254 = *(_DWORD*)v52;
					*(float*)(v11 + 4252) = (float)(*(float*)&v34 * dword_140C55D40[v254]) + *(float*)(v11 + 4252);
					v255 = dword_140C55D90;
					if (*(_DWORD*)v52 < dword_140C55D90)
						v255 = *(_DWORD*)v52;
					*(float*)(v11 + 4256) = (float)(*(float*)&v34 * dword_140C55DA0[v255]) + *(float*)(v11 + 4256);
					v256 = dword_140C40110;
					if (*(_DWORD*)v52 < dword_140C40110)
						v256 = *(_DWORD*)v52;
					*(float*)(v11 + 4260) = (float)(*(float*)&v34 * *((float*)&xmmword_140C40120 + v256))
						+ *(float*)(v11 + 4260);
					v257 = dword_140C40170;
					if (*(_DWORD*)v52 < dword_140C40170)
						v257 = *(_DWORD*)v52;
					*(float*)(v11 + 4284) = (float)(*(float*)&v34 * dword_140C40180[v257]) + *(float*)(v11 + 4284);
					v258 = dword_140C401D0;
					if (*(_DWORD*)v52 < dword_140C401D0)
						v258 = *(_DWORD*)v52;
					*(float*)(v11 + 4288) = (float)(*(float*)&v34 * dword_140C401E0[v258]) + *(float*)(v11 + 4288);
					v259 = dword_140C40230;
					if (*(_DWORD*)v52 < dword_140C40230)
						v259 = *(_DWORD*)v52;
					*(float*)(v11 + 4292) = (float)(*(float*)&v34 * dword_140C40240[v259]) + *(float*)(v11 + 4292);
					v260 = dword_140C55DF0;
					if (*(_DWORD*)v52 < dword_140C55DF0)
						v260 = *(_DWORD*)v52;
					*(float*)(v11 + 4296) = (float)(*(float*)&v34 * dword_140C55E00[v260]) + *(float*)(v11 + 4296);
					v261 = dword_140C55E50;
					if (*(_DWORD*)v52 < dword_140C55E50)
						v261 = *(_DWORD*)v52;
					*(float*)(v11 + 4300) = (float)(*(float*)&v34 * dword_140C55E60[v261]) + *(float*)(v11 + 4300);
					v262 = dword_140C55EB0;
					if (*(_DWORD*)v52 < dword_140C55EB0)
						v262 = *(_DWORD*)v52;
					*(float*)(v11 + 4304) = (float)(*(float*)&v34 * dword_140C55EC0[v262]) + *(float*)(v11 + 4304);
					v263 = dword_140C55F10;
					if (*(_DWORD*)v52 < dword_140C55F10)
						v263 = *(_DWORD*)v52;
					*(float*)(v11 + 4308) = (float)(*(float*)&v34 * dword_140C55F20[v263]) + *(float*)(v11 + 4308);
				}
				if (*(float*)&v39 > 0.0000099999997)
				{
					v264 = *(_DWORD*)v52;
					v265 = dword_140C55F70;
					if (*(_DWORD*)v52 < dword_140C55F70)
						v265 = *(_DWORD*)v52;
					v266 = *(float*)&v39 * dword_140C55F80[v265];
					v267 = dword_140C55FD0;
					if (v264 < dword_140C55FD0)
						v267 = *(_DWORD*)v52;
					v388 = v388 + v266;
					v268 = *(float*)&v39 * dword_140C55FE0[v267];
					v269 = dword_140C56030;
					if (v264 < dword_140C56030)
						v269 = *(_DWORD*)v52;
					v385 = v385 + v268;
					v270 = *(float*)&v39 * dword_140C56040[v269];
					v271 = dword_140C56090;
					if (v264 < dword_140C56090)
						v271 = *(_DWORD*)v52;
					v386 = v386 + v270;
					v387 = v387 + (float)(*(float*)&v39 * dword_140C560A0[v271]);
				}
				if (*(float*)&v42 > 0.0000099999997)
				{
					v272 = *(_DWORD*)v52;
					v52 = (unsigned int)dword_140C560F0;
					if (v272 < dword_140C560F0)
						v52 = (unsigned int)v272;
					*(float*)(v11 + 5696) = (float)(*(float*)&v42 * dword_140C56100[(int)v52]) + *(float*)(v11 + 5696);
				}
				sub_1407D0E00(v9, v52, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_1407C4F90);
				v273 = (__m128)(unsigned int)dword_140C3B438;
				v273.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
				v274 = v273;
				v274.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v390;
				sub_1408FC950(*(double*)v274.m128_u64);
				v273.m128_f32[0] = v273.m128_f32[0] * v389;
				sub_1408FE3D0(*(double*)v273.m128_u64);
				v275 = v273;
				v275.m128_f32[0] = v273.m128_f32[0] * v274.m128_f32[0];
				sub_1408FE3D0(*(double*)v274.m128_u64);
				v276 = v273;
				v276.m128_f32[0] = sub_1408FC950(*(double*)v273.m128_u64);
				v277 = (int*)qword_140C63750;
				v278 = dword_140C56150;
				v276.m128_f32[0] = v276.m128_f32[0] * v274.m128_f32[0];
				v279 = dword_140C561B0;
				v280 = _mm_unpacklo_ps(_mm_xor_ps(v275, (__m128)xmmword_140B7B530), _mm_xor_ps(v276, (__m128)xmmword_140B7B530));
				v281 = _mm_unpacklo_ps(v274, v18);
				if (*(_DWORD*)qword_140C63750 < dword_140C56150)
					v278 = *(_DWORD*)qword_140C63750;
				v282 = _mm_unpacklo_ps(v280, v281);
				v283 = (__m128) * ((unsigned int*)&xmmword_140C56160 + v278);
				v284 = _mm_mul_ps(_mm_shuffle_ps(v283, v283, 0), *(__m128*)(v11 + 5424));
				v285 = *(float*)&v441 + (float)(v284.m128_f32[0] * 3.5449078);
				*(float*)&v441 = v285;
				v286 = *(float*)&v447 + (float)(_mm_shuffle_ps(v284, v284, 170).m128_f32[0] * 3.5449078);
				v287 = *(float*)&v444 + (float)(_mm_shuffle_ps(v284, v284, 85).m128_f32[0] * 3.5449078);
				*(float*)&v447 = v286;
				*(float*)&v444 = v287;
				if (*(_DWORD*)qword_140C63750 < dword_140C561B0)
					v279 = *(_DWORD*)qword_140C63750;
				v288 = dword_140C561C0[v279];
				*(float*)&v438 = v286 * v288;
				*(float*)&v432 = v285 * v288;
				*(float*)&v435 = v287 * v288;
				*((float*)&v432 + 1) = v288 * *((float*)&v441 + 1);
				*((float*)&v435 + 1) = v288 * *((float*)&v444 + 1);
				*((float*)&v438 + 1) = v288 * *((float*)&v447 + 1);
				*((float*)&v432 + 2) = v288 * *((float*)&v441 + 2);
				*((float*)&v435 + 2) = v288 * *((float*)&v444 + 2);
				*((float*)&v432 + 3) = v288 * *((float*)&v441 + 3);
				*((float*)&v438 + 2) = v288 * *((float*)&v447 + 2);
				*((float*)&v438 + 3) = v288 * *((float*)&v447 + 3);
				*((float*)&v435 + 3) = v288 * *((float*)&v444 + 3);
				*(float*)&v436 = v288 * *(float*)&v445;
				*(float*)&v433 = v288 * *(float*)&v442;
				*((float*)&v433 + 1) = v288 * *((float*)&v442 + 1);
				*(float*)&v439 = v288 * *(float*)&v448;
				*((float*)&v439 + 1) = v288 * *((float*)&v448 + 1);
				*((float*)&v436 + 1) = v288 * *((float*)&v445 + 1);
				*((float*)&v436 + 2) = v288 * *((float*)&v445 + 2);
				*((float*)&v433 + 2) = v288 * *((float*)&v442 + 2);
				*((float*)&v433 + 3) = v288 * *((float*)&v442 + 3);
				*((float*)&v439 + 2) = v288 * *((float*)&v448 + 2);
				*((float*)&v439 + 3) = v288 * *((float*)&v448 + 3);
				*((float*)&v436 + 3) = v288 * *((float*)&v445 + 3);
				v289 = v288 * v446;
				v290 = v288 * v443;
				v291 = v288 * v449;
				v437 = v289;
				v434 = v290;
				v292 = v290;
				v293 = v433;
				*(_OWORD*)(v11 + 3008) = v432;
				v440 = v291;
				v294 = v435;
				*(_OWORD*)(v11 + 3024) = v293;
				v295 = v436;
				*(float*)(v11 + 3040) = v292;
				v296 = v437;
				*(_OWORD*)(v11 + 3056) = v294;
				v297 = v438;
				*(_OWORD*)(v11 + 3072) = v295;
				v298 = v439;
				*(float*)(v11 + 3088) = v296;
				v299 = v440;
				*(_OWORD*)(v11 + 3104) = v297;
				*(_OWORD*)(v11 + 3120) = v298;
				*(float*)(v11 + 3136) = v299;
				v300 = dword_140C56210;
				if (*v277 < dword_140C56210)
					v300 = *v277;
				v301 = (__m128)(unsigned int)dword_140C56220[v300];
				*(__m128*)(v11 + 3152) = _mm_mul_ps(_mm_shuffle_ps(v301, v301, 0), v49);
				v302 = dword_140C56210;
				HIDWORD(v405) = 1065353216;
				v303 = (unsigned int*)(v11 + 6688);
				v304 = v11 + 3424;
				if (*v277 < dword_140C56210)
					v302 = *v277;
				v305 = 12i64;
				v306 = (__m128)(unsigned int)dword_140C56220[v302];
				*(__m128*)(v11 + 3168) = _mm_mul_ps(_mm_shuffle_ps(v306, v306, 0), v404);
				*(_DWORD*)(v11 + 3696) = 1103101952;
				*(__m128*)(v11 + 3184) = v282;
				*(_OWORD*)(v11 + 3616) = *(_OWORD*)(v11 + 5712);
				*(float*)(v11 + 3704) = v388;
				*(float*)(v11 + 3708) = v385;
				v307 = *(float*)(v11 + 4032) * 0.28209481;
				*(float*)&v405 = *(float*)(v11 + 3936) * 0.28209481;
				v306.m128_i32[0] = *(_DWORD*)(v11 + 3984);
				*((float*)&v405 + 2) = v307;
				*((float*)&v405 + 1) = v306.m128_f32[0] * 0.28209481;
				*(_OWORD*)(v11 + 3200) = v405;
				*(float*)(v11 + 3748) = v387;
				*(_QWORD*)(v11 + 3776) = *(_QWORD*)(v11 + 6576);
				*(float*)(v11 + 3744) = v386;
				v308 = dword_140C56270;
				if (*v277 < dword_140C56270)
					v308 = *v277;
				*(_DWORD*)(v11 + 3752) = dword_140C56280[v308];
				do
				{
					v309 = *v303;
					v304 += 16i64;
					++v303;
					*(_OWORD*)(v304 - 208) = *(_OWORD*)(32 * (v309 + 170) + v11);
					*(_OWORD*)(v304 - 16) = *(_OWORD*)(32 * v309 + v11 + 5456);
					--v305;
				} while (v305);
				v310 = *(_QWORD*)(v11 + 6320);
				if (v310)
				{
					v311 = *(float*)&v418;
					do
					{
						v312 = dword_140C54E50;
						v313 = *(_QWORD*)(v310 + 88);
						if (*v277 < dword_140C54E50)
							v312 = *v277;
						v314 = (float)((float)((float)(*(_DWORD*)(v11 + 1320) - *(_DWORD*)(v11 + 1316)) * dword_140C54E60[v312])
							* 0.001)
							+ *(float*)(v310 + 48);
						*(float*)(v310 + 48) = v314;
						if (v314 <= 2000.0)
						{
							v404.m128_u64[0] = v310;
							v404.m128_u64[1] = v11 + 6176;
							v450 = (__m128*)v310;
							v451 = (__m128*)(v11 + 6176);
							sub_1401AFB10(&v450, v420);
							(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v310 + 64) + 72i64))(
								*(_QWORD*)(v310 + 64),
								v420);
							v319 = *(_DWORD*)qword_140C63750;
							v320 = dword_140C54DF0;
							if (*(_DWORD*)qword_140C63750 < dword_140C54DF0)
								v320 = *(_DWORD*)qword_140C63750;
							v321 = v320;
							v322 = dword_140C54D90;
							if (v319 < dword_140C54D90)
								v322 = *(_DWORD*)qword_140C63750;
							v323 = dword_140C54E00[v321] - dword_140C54DA0[v322];
							v324 = *(_QWORD*)(v310 + 72);
							if (!v324)
								goto LABEL_236;
							v325 = dword_140C557B0;
							if (v319 < dword_140C557B0)
								v325 = *(_DWORD*)qword_140C63750;
							if (dword_140C557C0[v325] > *(float*)(v324 + 92))
							{
								(*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v310 + 64) + 120i64))(*(_QWORD*)(v310 + 64));
							}
							else
							{
							LABEL_236:
								v326 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(v310 + 64) + 120i64))(*(_QWORD*)(v310 + 64));
								v277 = (int*)qword_140C63750;
								if (v323 > v18.m128_f32[0])
								{
									v328 = dword_140C54DF0;
									if (*(_DWORD*)qword_140C63750 < dword_140C54DF0)
										v328 = *(_DWORD*)qword_140C63750;
									v327 = fmaxf(
										v26.m128_f32[0],
										fminf((float)(dword_140C54E00[v328] - fabs(*(float*)(v310 + 48))) / v323, v311))
										* *(float*)(v11 + 5696);
								}
								else
								{
									v327 = *(float*)(v11 + 5696);
								}
								if (*(float*)&v326 == v327)
									goto LABEL_244;
							}
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v310 + 64) + 112i64))(*(_QWORD*)(v310 + 64));
						}
						else
						{
							v315 = *(_QWORD*)(v310 + 64);
							if (v315)
							{
								(*(void(__fastcall**)(__int64, int*, __int64, unsigned int*))(*(_QWORD*)v315 + 8i64))(
									v315,
									v277,
									v304,
									v303);
								*(_QWORD*)(v310 + 64) = 0i64;
							}
							v316 = *(_QWORD**)(v310 + 80);
							if (v316)
								*v316 = *(_QWORD*)(v310 + 88);
							v317 = *(_QWORD*)(v310 + 88);
							if (v317)
								*(_QWORD*)(v317 + 80) = *(_QWORD*)(v310 + 80);
							*(_QWORD*)(v310 + 80) = 0i64;
							*(_QWORD*)(v310 + 88) = 0i64;
							v318 = *(_QWORD*)(v310 + 72);
							if (v318)
								(*(void(__fastcall**)(__int64, int*, __int64, unsigned int*))(*(_QWORD*)v318 + 8i64))(
									v318,
									v277,
									v304,
									v303);
							sub_14018B900(v310, 0);
						}
						v277 = (int*)qword_140C63750;
					LABEL_244:
						v310 = v313;
					} while (v313);
				}
				if ((v43 & 2) != 0
					|| !(*(unsigned int(__fastcall**)(_QWORD, int*, __int64, unsigned int*))(**(_QWORD**)(v11 + 6080) + 48i64))(
						*(_QWORD*)(v11 + 6080),
						v277,
						v304,
						v303))
				{
					if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD, int*, __int64, unsigned int*))(**(_QWORD**)(v11 + 6080)
						+ 24i64))(
							*(_QWORD*)(v11 + 6080),
							v277,
							v304,
							v303)
						+ 28) == 4)
					{
						v329 = (*(__int64(__fastcall**)(_QWORD, _QWORD, float*, __int64))(**(_QWORD**)(v11 + 6080) + 72i64))(
							*(_QWORD*)(v11 + 6080),
							0i64,
							&v392,
							2i64);
						if (v329)
						{
							v330 = (unsigned int*)(v11 + 5156);
							do
							{
								v331 = (__m128)v330[1];
								v329 += 4i64;
								v332 = _mm_unpacklo_ps((__m128) * v330, (__m128)v330[2]);
								v333 = (__m128) * (v330 - 1);
								v330 += 4;
								v334 = _mm_shuffle_epi32(
									_mm_cvttps_epi32(
										_mm_add_ps(
											_mm_mul_ps(
												_mm_min_ps(
													_mm_max_ps(v26, _mm_unpacklo_ps(_mm_unpacklo_ps(v333, v331), v332)),
													(__m128)xmmword_140B7B240),
												(__m128)xmmword_140B7B470),
											(__m128)xmmword_140B7AC50)),
									198);
								v335 = _mm_packus_epi16(v334, v334);
								*(_DWORD*)(v329 - 4) = _mm_cvtsi128_si32(_mm_packus_epi16(v335, v335));
								--v55;
							} while (v55);
							(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v11 + 6080) + 80i64))(
								*(_QWORD*)(v11 + 6080),
								0i64);
						}
					}
					else
					{
						v336 = &v467;
						v337 = (unsigned int*)(v11 + 5156);
						do
						{
							v338 = (__m128)v337[1];
							v336 = (__m128*)((char*)v336 + 4);
							v339 = _mm_unpacklo_ps((__m128) * v337, (__m128)v337[2]);
							v340 = (__m128) * (v337 - 1);
							v337 += 4;
							v341 = _mm_shuffle_epi32(
								_mm_cvttps_epi32(
									_mm_add_ps(
										_mm_mul_ps(
											_mm_min_ps(
												_mm_max_ps(v26, _mm_unpacklo_ps(_mm_unpacklo_ps(v340, v338), v339)),
												(__m128)xmmword_140B7B240),
											(__m128)xmmword_140B7B470),
										(__m128)xmmword_140B7AC50)),
								198);
							v342 = _mm_packus_epi16(v341, v341);
							v336[-1].m128_i32[3] = _mm_cvtsi128_si32(_mm_packus_epi16(v342, v342));
							--v55;
						} while (v55);
						if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(v11 + 6088), (__int64)&v467, 0x40ui64)
							|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 6080) + 48i64))(*(_QWORD*)(v11 + 6080)))
						{
							v343 = v468[0];
							v344 = *(_QWORD*)(v11 + 6080);
							LODWORD(v347) = 64;
							*(__m128*)(v11 + 6088) = v467;
							*(__m128*)(v11 + 6104) = v343;
							v345 = v468[2];
							*(__m128*)(v11 + 6120) = v468[1];
							*(__m128*)(v11 + 6136) = v345;
							(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)v344 + 96i64))(
								v344,
								0i64,
								0i64,
								v11 + 6088,
								v347,
								0i64);
						}
					}
				}
				v346 = dword_140C400D0;
				if (*(_DWORD*)qword_140C63750 < dword_140C400D0)
					v346 = *(_DWORD*)qword_140C63750;
				if (!*((_BYTE*)&dword_140C400E0 + v346))
					return 0i64;
				result = sub_1407CE760((_QWORD*)v11);
				if ((int)result >= 0)
					return 0i64;
			}
		}
	}
	return result;
}
// 1407C502C: conditional instruction was optimized away because r8d.4<15180u
// 1407C56A7: variable 'v52' is possibly undefined
// 1407C77FD: variable 'v206' is possibly undefined
// 1407C8671: variable 'v304' is possibly undefined
// 1407C8671: variable 'v303' is possibly undefined
// 1407C86AD: variable 'v277' is possibly undefined
// 1407C8A48: variable 'v347' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7A4D0: using guessed type __int128 xmmword_140B7A4D0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3AD70: using guessed type __int64 (__fastcall ***off_140C3AD70[7])();
// 140C3B438: using guessed type int dword_140C3B438;
// 140C400D0: using guessed type int dword_140C400D0;
// 140C400E0: using guessed type int dword_140C400E0;
// 140C40110: using guessed type int dword_140C40110;
// 140C40120: using guessed type __int128 xmmword_140C40120;
// 140C40170: using guessed type int dword_140C40170;
// 140C40180: using guessed type float dword_140C40180[16];
// 140C401D0: using guessed type int dword_140C401D0;
// 140C401E0: using guessed type float dword_140C401E0[16];
// 140C40230: using guessed type int dword_140C40230;
// 140C40240: using guessed type float dword_140C40240[16];
// 140C54D90: using guessed type int dword_140C54D90;
// 140C54DA0: using guessed type float dword_140C54DA0[14];
// 140C54DF0: using guessed type int dword_140C54DF0;
// 140C54E00: using guessed type float dword_140C54E00[16];
// 140C54E50: using guessed type int dword_140C54E50;
// 140C54E60: using guessed type float dword_140C54E60[16];
// 140C557B0: using guessed type int dword_140C557B0;
// 140C557C0: using guessed type float dword_140C557C0[18];
// 140C55C10: using guessed type int dword_140C55C10;
// 140C55C20: using guessed type __m128 stru_140C55C20[7];
// 140C55CD0: using guessed type int dword_140C55CD0;
// 140C55CE0: using guessed type float dword_140C55CE0[16];
// 140C55D30: using guessed type int dword_140C55D30;
// 140C55D40: using guessed type float dword_140C55D40[16];
// 140C55D90: using guessed type int dword_140C55D90;
// 140C55DA0: using guessed type float dword_140C55DA0[16];
// 140C55DF0: using guessed type int dword_140C55DF0;
// 140C55E00: using guessed type float dword_140C55E00[16];
// 140C55E50: using guessed type int dword_140C55E50;
// 140C55E60: using guessed type float dword_140C55E60[16];
// 140C55EB0: using guessed type int dword_140C55EB0;
// 140C55EC0: using guessed type float dword_140C55EC0[16];
// 140C55F10: using guessed type int dword_140C55F10;
// 140C55F20: using guessed type float dword_140C55F20[16];
// 140C55F70: using guessed type int dword_140C55F70;
// 140C55F80: using guessed type float dword_140C55F80[16];
// 140C55FD0: using guessed type int dword_140C55FD0;
// 140C55FE0: using guessed type float dword_140C55FE0[16];
// 140C56030: using guessed type int dword_140C56030;
// 140C56040: using guessed type float dword_140C56040[16];
// 140C56090: using guessed type int dword_140C56090;
// 140C560A0: using guessed type float dword_140C560A0[16];
// 140C560F0: using guessed type int dword_140C560F0;
// 140C56100: using guessed type float dword_140C56100[16];
// 140C56150: using guessed type int dword_140C56150;
// 140C56160: using guessed type __int128 xmmword_140C56160;
// 140C561B0: using guessed type int dword_140C561B0;
// 140C561C0: using guessed type float dword_140C561C0[16];
// 140C56210: using guessed type int dword_140C56210;
// 140C56220: using guessed type int dword_140C56220[16];
// 140C56270: using guessed type int dword_140C56270;
// 140C56280: using guessed type int dword_140C56280[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C78270: using guessed type __int128 xmmword_140C78270;
// 140C78280: using guessed type __int128 xmmword_140C78280;
// 140C78290: using guessed type int dword_140C78290;
// 140C782A0: using guessed type __int128 xmmword_140C782A0;
// 140C782B0: using guessed type __int128 xmmword_140C782B0;
// 140C782C0: using guessed type int dword_140C782C0;
// 140C782D0: using guessed type __int128 xmmword_140C782D0;
// 140C782E0: using guessed type __int128 xmmword_140C782E0;
// 140C782F0: using guessed type int dword_140C782F0;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1407C4FC0: using guessed type int var_350[4];

