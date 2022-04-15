//----- (000000014061B900) ----------------------------------------------------
__int64 __fastcall sub_14061B900(__int64 a1, float a2)
{
	int v4; // ecx
	int v5; // ecx
	__int64 v6; // rcx
	int v7; // edi
	__int64 v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rbx
	__int64 v11; // rax
	__int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rbx
	_QWORD* v16; // rdi
	unsigned int v17; // eax
	__int64 v18; // rdi
	__int64 v19; // rax
	__m128* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rcx
	bool v23; // zf
	__int64 i; // rbx
	__int64 v25; // rcx
	__int64 v26; // r15
	__int64 v27; // rax
	__int64 v28; // rbx
	unsigned int v29; // edi
	float v30; // xmm7_4
	float v31; // xmm6_4
	int* v32; // rax
	__m128 v33; // xmm0
	__m128 v34; // xmm1
	__m128 v35; // xmm0
	__m128 v36; // xmm2
	__m128 v37; // xmm1
	__m128 v38; // xmm0
	__int64 v39; // rdi
	__int64 v40; // rax
	unsigned int v41; // edx
	__m128 v42; // xmm7
	double v43; // xmm6_8
	float v44; // xmm8_4
	float v45; // xmm9_4
	float v46; // xmm0_4
	__m128 v47; // xmm7
	__m128 v48; // xmm8
	__m128 v49; // xmm9
	__m128 v50; // xmm10
	__m128 v51; // xmm6
	int v52; // edx
	__m128* v53; // rax
	__int64 v54; // rcx
	__int64 v55; // rbx
	__int64 v56; // rdi
	__m128* v57; // rax
	__m128 v58; // xmm1
	__m128 v59; // xmm2
	__int64 v60; // rcx
	__int64 v61; // rcx
	__int64 v62; // rcx
	__int64 v63; // rcx
	__int64 v64; // rcx
	int v65; // ecx
	int v66; // ecx
	__int64 v67; // rax
	__int64 v68; // rdx
	float v69; // xmm1_4
	float v70; // xmm2_4
	__int64 v71; // rdx
	int v72; // r9d
	int v73; // eax
	__int64(__fastcall * **v74)(); // r8
	float v75; // xmm2_4
	float v76; // xmm11_4
	__int64 j; // rbx
	__int64 v78; // rcx
	int v79; // ecx
	int v80; // ecx
	__int64 v81; // rax
	__int64 v82; // rcx
	__int64 v83; // rbx
	__int64 v84; // rax
	__m128 v85; // xmm4
	__int64 v86; // rcx
	float v87; // xmm1_4
	float v88; // xmm5_4
	float v89; // xmm0_4
	float v90; // xmm2_4
	float v91; // xmm6_4
	float v92; // xmm9_4
	float v93; // xmm7_4
	float v94; // xmm3_4
	float v95; // xmm10_4
	float v96; // xmm11_4
	float v97; // xmm8_4
	int v98; // xmm0_4
	unsigned int v99; // xmm0_4
	float v100; // xmm3_4
	__m128* v101; // rdi
	float v102; // xmm5_4
	int v103; // eax
	__m128 v104; // xmm7
	__m128 v105; // xmm1
	__m128 v106; // xmm8
	float v107; // xmm8_4
	__m128 v108; // xmm2
	__m128 v109; // xmm1
	__int64 v110; // rcx
	__int64 v111; // rbx
	int v112; // eax
	__int64 v113; // rbx
	int v114; // eax
	__int64 v115; // rbx
	int v116; // eax
	__int64 v117; // rcx
	__int64 v118; // rcx
	__int64 v119; // rcx
	int v120; // eax
	__int64 v121; // rcx
	__int64 v122; // rcx
	__int64 v123; // rcx
	__int64 v124; // rcx
	__m128i v125; // xmm12
	__m128 v126; // xmm2
	__m128* v127; // r9
	__m128 v128; // xmm2
	__m128 v129; // xmm1
	char* v130; // rdx
	__int64 v131; // rax
	__int64 v132; // rcx
	__m128 v133; // xmm5
	float v134; // xmm11_4
	float v135; // xmm6_4
	float v136; // xmm8_4
	float v137; // xmm3_4
	float v138; // xmm2_4
	float v139; // xmm7_4
	float v140; // xmm4_4
	float v141; // xmm9_4
	float v142; // xmm10_4
	float v143; // xmm8_4
	float v144; // xmm6_4
	float v145; // xmm11_4
	unsigned int v146; // xmm1_4
	unsigned int v147; // xmm0_4
	__int64 v148; // rax
	__int64 v149; // rdi
	__int64 v150; // rbx
	int v151; // edx
	__int64 v152; // rdx
	__int64 v153; // rcx
	__int64 v154; // rcx
	__int64* v155; // rbx
	__int64 v156; // rdi
	__int64 v157; // rax
	__int64 v158; // rbx
	int v159; // eax
	__int64 v160; // rcx
	__int64 v161; // rax
	__int64 v162; // rax
	__int64 v163; // rcx
	__int64 v164; // rcx
	__int64 v165; // rcx
	__m128* v166; // r9
	__m128 v167; // xmm2
	__m128 v168; // xmm1
	char* v169; // rdx
	__int64 v170; // rax
	__int128 v171; // xmm1
	__int64 v172; // rcx
	__m128 v173; // xmm4
	__m128 v174; // xmm6
	__m128 v175; // xmm5
	__m128 v176; // xmm3
	float v177; // xmm0_4
	__m128 v178; // xmm0
	__m128 v179; // xmm4
	float v180; // xmm1_4
	float v181; // xmm3_4
	float v182; // xmm1_4
	__m128 v183; // xmm0
	__m128 v184; // xmm1
	__m128 v185; // xmm0
	__m128 v186; // xmm2
	__int64 v187; // rcx
	__m128* v188; // rcx
	__m128 v189; // xmm2
	__m128 v190; // xmm1
	__m128* v191; // r9
	char* v192; // rdx
	__m128 v193; // xmm1
	__m128 v194; // xmm4
	__m128 v195; // xmm2
	float v196; // xmm0_4
	__m128 v197; // xmm3
	__m128 v198; // xmm1
	__int64 v199; // rax
	__int128 v200; // xmm1
	__int64 v201; // rcx
	__int64 v202; // rax
	__int64 v203; // rbx
	__int64 v204; // rax
	__int64 v205; // rcx
	int v206; // ecx
	int v207; // ecx
	__int64 v208; // rax
	__int64 v209; // rcx
	__int64 v210; // rcx
	__int64 v211; // rax
	__m128 v212; // xmm12
	__int64 v213; // rcx
	float v214; // xmm11_4
	float v215; // xmm5_4
	float v216; // xmm9_4
	float v217; // xmm4_4
	float v218; // xmm2_4
	float v219; // xmm8_4
	float v220; // xmm10_4
	float v221; // xmm6_4
	float v222; // xmm9_4
	float v223; // xmm7_4
	float v224; // xmm8_4
	float v225; // xmm11_4
	unsigned int v226; // xmm0_4
	__int64 v227; // rcx
	float v228; // xmm1_4
	__int64 v229; // rcx
	__int64 v230; // rbx
	int v231; // eax
	__int64 v232; // rbx
	int v233; // eax
	__int64 v234; // rbx
	int v235; // eax
	__int64 v236; // rcx
	__int64 v237; // rcx
	__int64 v238; // rcx
	int v239; // eax
	__int64 v240; // rcx
	__int64 v241; // rcx
	__int64 v242; // rcx
	__m128i v243; // xmm12
	__m128 v244; // xmm2
	__m128* v245; // r9
	__m128 v246; // xmm2
	__m128 v247; // xmm1
	char* v248; // rdx
	__int64 v249; // rax
	__int64 v250; // rcx
	__m128 v251; // xmm4
	float v252; // xmm1_4
	float v253; // xmm5_4
	float v254; // xmm0_4
	float v255; // xmm2_4
	float v256; // xmm6_4
	float v257; // xmm9_4
	float v258; // xmm7_4
	float v259; // xmm3_4
	float v260; // xmm10_4
	float v261; // xmm11_4
	float v262; // xmm8_4
	unsigned int v263; // xmm1_4
	unsigned int v264; // xmm0_4
	__int64 v265; // rax
	__int64 v266; // rdi
	__int64 v267; // rbx
	int v268; // edx
	__int64 v269; // rdx
	__int64 v270; // rcx
	__int64 v271; // rcx
	__int64* v272; // rbx
	__int64 v273; // rdi
	__int64 v274; // rax
	__int64 v275; // rbx
	__int32 v276; // eax
	__int64 v277; // rax
	__int64 v278; // rax
	__int64 v279; // rcx
	__int64 v280; // rcx
	__int64 v281; // rcx
	__m128* v282; // r9
	__m128 v283; // xmm2
	__m128 v284; // xmm1
	char* v285; // rdx
	__int64 v286; // rax
	__int128 v287; // xmm1
	__int64 v288; // rcx
	__m128 v289; // xmm0
	__m128 v290; // xmm1
	__m128 v291; // xmm2
	__m128 v292; // xmm0
	float v293; // xmm2_4
	float v294; // xmm3_4
	float v295; // xmm1_4
	__m128 v296; // xmm0
	__m128 v297; // xmm1
	__m128 v298; // xmm0
	__m128 v299; // xmm2
	__int64 v300; // rcx
	float v301; // xmm0_4
	float v302; // xmm0_4
	float v303; // xmm1_4
	__m128 v304; // xmm4
	__m128* v305; // r9
	__m128 v306; // xmm5
	__m128 v307; // xmm2
	__m128 v308; // xmm2
	__m128 v309; // xmm3
	__m128* v310; // r8
	char* v311; // rdx
	__m128 v312; // xmm0
	__int64 v313; // rax
	__int64 v314; // r8
	__int64 v315; // r8
	__int64 v316; // rcx
	__int64 v317; // rcx
	__int64 v318; // rcx
	__int64 v319; // rax
	_QWORD* v320; // rbx
	__int64 k; // rdi
	__int64 v322; // r12
	__int64 v323; // rax
	__int64 v324; // rax
	double v325; // xmm6_8
	float v326; // xmm8_4
	float v327; // xmm9_4
	float v328; // xmm7_4
	float v329; // xmm0_4
	unsigned int v330; // ecx
	__int64 v331; // rax
	__int64 v332; // r15
	__int64 v333; // rcx
	__int64 v334; // rax
	__m128 v335; // xmm3
	__m128 v336; // xmm1
	__int64 v337; // rcx
	__int64 v338; // rcx
	__int64* v339; // rdi
	int v340; // eax
	int v341; // r15d
	__int64 v342; // rcx
	__int64 v343; // rbx
	__int64 v344; // rax
	__m128* v345; // rax
	__m128 v346; // xmm9
	__m128 v347; // xmm3
	__m128 v348; // xmm4
	__m128 v349; // xmm4
	__m128 v350; // xmm2
	__m128 v351; // xmm8
	__m128 v352; // xmm0
	__int64 v353; // rcx
	__int64 v354; // rax
	__int64 v355; // r10
	__int64 v356; // r11
	__int64* v357; // rcx
	__int64 v358; // rax
	__m128 v359; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v360; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v361; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v362; // [rsp+70h] [rbp-90h]
	__m128 v363; // [rsp+80h] [rbp-80h]
	__int128 v364; // [rsp+90h] [rbp-70h]
	int v365[4]; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v366; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v367; // [rsp+C0h] [rbp-40h]
	__int128 v368; // [rsp+D0h] [rbp-30h]
	__m128 v369; // [rsp+E0h] [rbp-20h]
	__int128 v370; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v371; // [rsp+100h] [rbp+0h]
	__int128 v372; // [rsp+110h] [rbp+10h]
	__int128 v373; // [rsp+120h] [rbp+20h]
	int v374[2]; // [rsp+130h] [rbp+30h] BYREF
	__int64 v375; // [rsp+138h] [rbp+38h]
	int v376; // [rsp+140h] [rbp+40h]
	__int64 v377; // [rsp+144h] [rbp+44h]
	int v378; // [rsp+14Ch] [rbp+4Ch]
	__int64 v379[2]; // [rsp+150h] [rbp+50h] BYREF
	int v380; // [rsp+160h] [rbp+60h]
	__int64 v381; // [rsp+164h] [rbp+64h]
	int v382; // [rsp+16Ch] [rbp+6Ch]
	int v383[2]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v384; // [rsp+178h] [rbp+78h]
	__int64 v385; // [rsp+180h] [rbp+80h]
	__int64 v386; // [rsp+188h] [rbp+88h]
	__int64 v387[2]; // [rsp+190h] [rbp+90h] BYREF
	int v388; // [rsp+1A0h] [rbp+A0h]
	__int64 v389; // [rsp+1A4h] [rbp+A4h]
	int v390; // [rsp+1ACh] [rbp+ACh]
	__int64 v391[2]; // [rsp+1B0h] [rbp+B0h] BYREF
	int v392; // [rsp+1C0h] [rbp+C0h]
	__int64 v393; // [rsp+1C4h] [rbp+C4h]
	int v394; // [rsp+1CCh] [rbp+CCh]
	__int64 v395[2]; // [rsp+1D0h] [rbp+D0h] BYREF
	int v396; // [rsp+1E0h] [rbp+E0h]
	__int64 v397; // [rsp+1E4h] [rbp+E4h]
	int v398; // [rsp+1ECh] [rbp+ECh]
	int v399[2]; // [rsp+1F0h] [rbp+F0h] BYREF
	__int64 v400; // [rsp+1F8h] [rbp+F8h]
	int v401; // [rsp+200h] [rbp+100h]
	__int64 v402; // [rsp+204h] [rbp+104h]
	int v403; // [rsp+20Ch] [rbp+10Ch]
	int v404[2]; // [rsp+210h] [rbp+110h] BYREF
	__int64 v405; // [rsp+218h] [rbp+118h]
	__int64 v406; // [rsp+220h] [rbp+120h]
	__int64 v407; // [rsp+228h] [rbp+128h]
	int v408[2]; // [rsp+230h] [rbp+130h] BYREF
	__int64 v409; // [rsp+238h] [rbp+138h]
	int v410; // [rsp+240h] [rbp+140h]
	__int64 v411; // [rsp+244h] [rbp+144h]
	int v412; // [rsp+24Ch] [rbp+14Ch]
	int v413[2]; // [rsp+250h] [rbp+150h] BYREF
	__int64 v414; // [rsp+258h] [rbp+158h]
	int v415; // [rsp+260h] [rbp+160h]
	__int64 v416; // [rsp+264h] [rbp+164h]
	int v417; // [rsp+26Ch] [rbp+16Ch]
	__int64 v418[2]; // [rsp+270h] [rbp+170h] BYREF
	int v419; // [rsp+280h] [rbp+180h]
	__int64 v420; // [rsp+284h] [rbp+184h]
	int v421; // [rsp+28Ch] [rbp+18Ch]
	int v422[2]; // [rsp+290h] [rbp+190h] BYREF
	__int64 v423; // [rsp+298h] [rbp+198h]
	int v424; // [rsp+2A0h] [rbp+1A0h]
	__int64 v425; // [rsp+2A4h] [rbp+1A4h]
	int v426; // [rsp+2ACh] [rbp+1ACh]
	int v427[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
	__int64 v428; // [rsp+2B8h] [rbp+1B8h]
	int v429; // [rsp+2C0h] [rbp+1C0h]
	__int64 v430; // [rsp+2C4h] [rbp+1C4h]
	int v431; // [rsp+2CCh] [rbp+1CCh]
	int v432[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
	__int64 v433; // [rsp+2D8h] [rbp+1D8h]
	int v434; // [rsp+2E0h] [rbp+1E0h]
	__int64 v435; // [rsp+2E4h] [rbp+1E4h]
	int v436; // [rsp+2ECh] [rbp+1ECh]
	__int64 v437[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
	int v438; // [rsp+300h] [rbp+200h]
	__int64 v439; // [rsp+304h] [rbp+204h]
	int v440; // [rsp+30Ch] [rbp+20Ch]
	__int128 v441[4]; // [rsp+310h] [rbp+210h] BYREF
	__int64 v442; // [rsp+350h] [rbp+250h]
	__int128 v443[4]; // [rsp+360h] [rbp+260h] BYREF
	__int64 v444; // [rsp+3A0h] [rbp+2A0h]
	__int128 v445[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
	__int64 v446; // [rsp+3F0h] [rbp+2F0h]
	__m128 v447; // [rsp+400h] [rbp+300h] BYREF
	__m128 v448[4]; // [rsp+410h] [rbp+310h] BYREF
	__m128 v449[4]; // [rsp+450h] [rbp+350h] BYREF
	__int64 v450; // [rsp+490h] [rbp+390h]
	__m128 v451[4]; // [rsp+4A0h] [rbp+3A0h] BYREF
	__int64 v452; // [rsp+4E0h] [rbp+3E0h]
	__m128 v453[4]; // [rsp+4F0h] [rbp+3F0h] BYREF
	__int64 v454; // [rsp+530h] [rbp+430h]
	double v455[8]; // [rsp+540h] [rbp+440h] BYREF
	double v456[8]; // [rsp+580h] [rbp+480h] BYREF
	__m128 v457[4]; // [rsp+5C0h] [rbp+4C0h] BYREF
	__m128 v458[4]; // [rsp+600h] [rbp+500h] BYREF
	char v459[64]; // [rsp+640h] [rbp+540h] BYREF
	double v460[8]; // [rsp+680h] [rbp+580h] BYREF
	double v461[8]; // [rsp+6C0h] [rbp+5C0h] BYREF
	__m128 v462[4]; // [rsp+700h] [rbp+600h] BYREF
	char v463; // [rsp+740h] [rbp+640h] BYREF
	char v464; // [rsp+780h] [rbp+680h] BYREF
	char v465; // [rsp+7C0h] [rbp+6C0h] BYREF
	char v466; // [rsp+800h] [rbp+700h] BYREF
	char v467; // [rsp+840h] [rbp+740h] BYREF
	char v468; // [rsp+880h] [rbp+780h] BYREF
	char v469; // [rsp+8C0h] [rbp+7C0h] BYREF
	char v470; // [rsp+900h] [rbp+800h] BYREF
	char v471[64]; // [rsp+940h] [rbp+840h] BYREF
	char v472; // [rsp+980h] [rbp+880h] BYREF
	char v473; // [rsp+9C0h] [rbp+8C0h] BYREF
	char v474; // [rsp+A00h] [rbp+900h] BYREF
	__m128 v475; // [rsp+A40h] [rbp+940h] BYREF
	__m128 v476; // [rsp+A50h] [rbp+950h]
	__m128 v477; // [rsp+A60h] [rbp+960h]
	__m128 v478; // [rsp+A70h] [rbp+970h]
	__m128 v479[4]; // [rsp+A90h] [rbp+990h] BYREF
	__int64 v480; // [rsp+AD0h] [rbp+9D0h]
	__int128 v481; // [rsp+AE0h] [rbp+9E0h] BYREF
	__m128 v482; // [rsp+AF0h] [rbp+9F0h] BYREF
	__int128 v483; // [rsp+B00h] [rbp+A00h]
	__int128 v484; // [rsp+B10h] [rbp+A10h]
	__int64 v485; // [rsp+B20h] [rbp+A20h]
	__m128* v486; // [rsp+B30h] [rbp+A30h] BYREF
	__m128* v487; // [rsp+B38h] [rbp+A38h]
	__m128 v488[4]; // [rsp+B40h] [rbp+A40h] BYREF
	float v489; // [rsp+B80h] [rbp+A80h]
	float v490; // [rsp+B84h] [rbp+A84h]
	float v491; // [rsp+B88h] [rbp+A88h]
	__int128 v492[4]; // [rsp+B90h] [rbp+A90h] BYREF
	__m128 v493; // [rsp+BD0h] [rbp+AD0h] BYREF
	__m128 v494[3]; // [rsp+BE0h] [rbp+AE0h] BYREF
	__int64 v495; // [rsp+C10h] [rbp+B10h]
	float v496; // [rsp+C20h] [rbp+B20h]
	float v497; // [rsp+C24h] [rbp+B24h]
	float v498; // [rsp+C28h] [rbp+B28h]
	__int128 v499[4]; // [rsp+C30h] [rbp+B30h] BYREF
	__m128 v500[4]; // [rsp+C70h] [rbp+B70h] BYREF
	__int64 v501; // [rsp+CB0h] [rbp+BB0h]

	if (*(_DWORD*)(a1 + 676))
	{
	LABEL_6:
		v6 = *(_QWORD*)(a1 + 48);
		v7 = 1;
		if (v6 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 1128i64))(v6))
			v7 = 0;
		v8 = *(_QWORD*)(a1 + 56);
		if (v8 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 1128i64))(v8))
			v7 = 0;
		v9 = *(_QWORD*)(a1 + 96);
		if (v9 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 1128i64))(v9))
			v7 = 0;
		v10 = *(_QWORD**)(a1 + 136);
		if (v10)
		{
			while (1)
			{
				if ((*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 328i64))(*v10))
				{
					v11 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 328i64))(*v10);
					if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 1128i64))(v11))
						break;
				}
				v10 = (_QWORD*)v10[3];
				if (!v10)
					goto LABEL_19;
			}
		}
		else
		{
		LABEL_19:
			if (v7)
				*(_DWORD*)(a1 + 700) = 1;
		}
		return 0i64;
	}
	if (*(_DWORD*)(a1 + 684))
	{
		v4 = *(_DWORD*)(a1 + 968);
		if (v4 && (v5 = v4 - 2) != 0)
		{
			if (v5 == 1)
				goto LABEL_6;
		}
		else if ((*(_DWORD*)(a1 + 896) & 2) != 0)
		{
			goto LABEL_6;
		}
	}
	if (!*(_DWORD*)(a1 + 696))
		return 0i64;
	if (*(_DWORD*)(a1 + 704))
	{
		v13 = *(_QWORD*)(a1 + 48);
		if (v13 && *(_QWORD*)(a1 + 112) && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 944i64))(v13))
		{
			v14 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 960i64))(*(_QWORD*)(a1 + 48));
			v15 = *v14;
			v16 = v14;
			v17 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 976i64))(*(_QWORD*)(a1 + 48));
			v18 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD))(v15 + 880))(v16, v17, 0i64);
			v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 968i64))(*(_QWORD*)(a1 + 48));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 328i64))(v19);
			v20 = *(__m128**)(qword_140C65898 + 29096);
			if (!v20)
				v20 = *(__m128**)(qword_140C65898 + 29088);
			v21 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 80i64))(*(_QWORD*)(a1 + 48));
			*((_QWORD*)&v481 + 1) = v18;
			*(_QWORD*)&v481 = v21;
			sub_1401AFB10((__m128**) & v481, &v482);
			v360.m128_u64[0] = (unsigned __int64)&v482;
			v486 = &v482;
			v360.m128_u64[1] = (unsigned __int64)&v20[10];
			v487 = v20 + 10;
			sub_1401AFB10(&v486, (__m128*) & v366);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 112) + 336i64))(
				*(_QWORD*)(a1 + 112),
				*(_QWORD*)(a1 + 48));
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 936i64))(*(_QWORD*)(a1 + 48));
			v360.m128_u64[0] = a1 + 208;
			v486 = (__m128*)(a1 + 208);
			v360.m128_u64[1] = (unsigned __int64)&v366;
			v487 = (__m128*) & v366;
			sub_1401AFB10(&v486, &v493);
			v22 = *(_QWORD*)(a1 + 112);
			v495 = 0i64;
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v22 + 320i64))(v22, &v493);
		}
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(*(_QWORD*)(a1 + 128), 0i64);
		*(_DWORD*)(a1 + 704) = 0;
	}
	v23 = *(_DWORD*)(a1 + 968) == 3;
	*(_DWORD*)(a1 + 708) = 0;
	*(float*)(a1 + 592) = a2 + *(float*)(a1 + 592);
	if (v23)
	{
		for (i = *(_QWORD*)(a1 + 1472); i; i = *(_QWORD*)(i + 8))
		{
			v25 = *(_QWORD*)(a1 + 112);
			if (v25)
				*(_OWORD*)(i + 400) = *(_OWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 56i64))(v25) + 48);
		}
		if (*(_QWORD*)(a1 + 48))
		{
			v26 = sub_140217880(*(_DWORD*)(a1 + 1000));
			if (v26)
			{
				v27 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
				v28 = v27;
				v360 = *(__m128*)(a1 + 800);
				if (v27)
				{
					if (*(_QWORD*)(v27 + 5864))
					{
						v29 = *(_DWORD*)(v26 + 20);
						v360 = *(__m128*)(v27 + 4576);
						if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v27 + 5864) + 848i64))(
							*(_QWORD*)(v27 + 5864),
							v29))
						{
							(*(void(__fastcall**)(_QWORD, _QWORD, __m128*, _QWORD))(**(_QWORD**)(v28 + 5864) + 872i64))(
								*(_QWORD*)(v28 + 5864),
								v29,
								&v360,
								0i64);
						}
					}
					v30 = *((float*)sub_14046BEC0(v28, *(_DWORD*)(a1 + 1000)) + 5);
					v31 = *((float*)sub_14046BEC0(v28, *(_DWORD*)(a1 + 1000)) + 5);
					v32 = sub_14046BEC0(v28, *(_DWORD*)(a1 + 1000));
					v33 = _mm_shuffle_ps((__m128)(unsigned int)v32[5], (__m128)(unsigned int)v32[5], 0);
					v34 = _mm_mul_ps((__m128)xmmword_140C78410, v33);
					v33.m128_f32[0] = v31;
					v35 = _mm_shuffle_ps(v33, v33, 0);
					v475 = v34;
					v36 = _mm_mul_ps((__m128)xmmword_140C78420, v35);
					v35.m128_f32[0] = v30;
					v476 = v36;
					v37 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v35, v35, 0));
					v38 = (__m128)xmmword_140C78440;
					v478 = (__m128)xmmword_140C78440;
					v477 = v37;
					v39 = *(_QWORD*)(v28 + 3336);
					if (v39)
					{
						v38.m128_f32[0] = sub_14047A940((_QWORD*)v28) * *(float*)(v39 + 140);
					}
					else
					{
						v40 = sub_14022D500(*(_DWORD*)(v28 + 216));
						if (v40)
							v38 = (__m128) * (unsigned int*)(v40 + 40);
						else
							v38 = 0i64;
					}
					v38.m128_f32[0] = v38.m128_f32[0] * *(float*)(v26 + 4);
					v41 = *(_DWORD*)(a1 + 1000);
					v42 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v38), (__m128)xmmword_140B7A4B0);
					v475 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v475, v475, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v475, v475, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v475, v475, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v475, v475, 255), v42));
					v476 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v476, v476, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v476, v476, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v476, v476, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v476, v476, 255), v42));
					v477 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v477, v477, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v477, v477, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v477, v477, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v477, v477, 255), v42));
					v478 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v478, v478, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v478, v478, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v478, v478, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v478, v478, 255), v42));
					*(_QWORD*)&v43 = (unsigned int)sub_14046BEC0(v28, v41)[3];
					*(float*)&v43 = (float)(*(float*)&v43 * 6.2831855) + *(float*)(a1 + 1484);
					v44 = sub_1408FE3D0(0.0);
					v45 = sub_1408FC950(0.0);
					v42.m128_i32[0] = sub_1408FE3D0(v43);
					v46 = sub_1408FC950(v43);
					v362.m128_i32[3] = 0;
					v363.m128_i32[3] = 0;
					v361.m128_f32[1] = v44 * v46;
					v361.m128_u64[1] = v42.m128_u32[0] ^ 0x80000000i64;
					v361.m128_f32[0] = v45 * v46;
					v362.m128_f32[0] = (float)((float)(v45 * v42.m128_f32[0]) * v44) - (float)(v44 * v45);
					v363.m128_f32[0] = (float)(v44 * v44) + (float)((float)(v45 * v42.m128_f32[0]) * v45);
					v362.m128_f32[1] = (float)((float)(v44 * v42.m128_f32[0]) * v44) + (float)(v45 * v45);
					v362.m128_f32[2] = v46 * v44;
					v363.m128_f32[2] = v46 * v45;
					v363.m128_f32[1] = (float)((float)(v44 * v42.m128_f32[0]) * v45) - (float)(v45 * v44);
					v47 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v475, v475, 0), v361),
								_mm_mul_ps(_mm_shuffle_ps(v475, v475, 85), v362)),
							_mm_mul_ps(_mm_shuffle_ps(v475, v475, 170), v363)),
						_mm_mul_ps(_mm_shuffle_ps(v475, v475, 255), (__m128)xmmword_140C78440));
					v48 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v476, v476, 0), v361),
								_mm_mul_ps(_mm_shuffle_ps(v476, v476, 85), v362)),
							_mm_mul_ps(_mm_shuffle_ps(v476, v476, 170), v363)),
						_mm_mul_ps(_mm_shuffle_ps(v476, v476, 255), (__m128)xmmword_140C78440));
					v49 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v477, v477, 85), v362),
								_mm_mul_ps(_mm_shuffle_ps(v477, v477, 0), v361)),
							_mm_mul_ps(_mm_shuffle_ps(v477, v477, 170), v363)),
						_mm_mul_ps(_mm_shuffle_ps(v477, v477, 255), (__m128)xmmword_140C78440));
					v50 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v478, v478, 85), v362),
								_mm_mul_ps(_mm_shuffle_ps(v478, v478, 0), v361)),
							_mm_mul_ps(_mm_shuffle_ps(v478, v478, 170), v363)),
						_mm_mul_ps(_mm_shuffle_ps(v478, v478, 255), (__m128)xmmword_140C78440));
					v51 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v360.m128_u32[0], (__m128)v360.m128_u32[2]),
						_mm_unpacklo_ps((__m128)v360.m128_u32[1], (__m128)0x3F800000u));
					v475 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v47, v47, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v47, v47, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v47, v47, 255), v51));
					v476 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v48, v48, 255), v51));
					v477 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v49, v49, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v49, v49, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v49, v49, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v49, v49, 255), v51));
					v478 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v50, v50, 85), (__m128)xmmword_140C78420),
								_mm_mul_ps(_mm_shuffle_ps(v50, v50, 0), (__m128)xmmword_140C78410)),
							_mm_mul_ps(_mm_shuffle_ps(v50, v50, 170), (__m128)xmmword_140C78430)),
						_mm_mul_ps(_mm_shuffle_ps(v50, v50, 255), v51));
					if (*(_DWORD*)(v28 + 592))
						sub_140622B70(a1);
				}
				else
				{
					v52 = *(_DWORD*)(a1 + 908);
					if (v52)
					{
						v53 = (__m128*)sub_1403D90D0(qword_140C65898, v52);
						if (v53)
							v360 = _mm_add_ps(
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v360, v360, 85), v53[284]),
										_mm_mul_ps(_mm_shuffle_ps(v360, v360, 0), v53[283])),
									_mm_mul_ps(_mm_shuffle_ps(v360, v360, 170), v53[285])),
								v53[286]);
					}
					v475 = (__m128)xmmword_140C78410;
					v476 = (__m128)xmmword_140C78420;
					v477 = (__m128)xmmword_140C78430;
					v478 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v360.m128_u32[0], (__m128)v360.m128_u32[2]),
						_mm_unpacklo_ps((__m128)v360.m128_u32[1], (__m128)0x3F800000u));
				}
				v359.m128_u64[0] = a1 + 208;
				v359.m128_u64[1] = (unsigned __int64)&v475;
				v486 = (__m128*)(a1 + 208);
				v487 = &v475;
				sub_1401AFB10(&v486, v479);
				v54 = *(_QWORD*)(a1 + 112);
				v480 = 0i64;
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v54 + 320i64))(v54, v479);
			}
		}
	}
	else
	{
		v55 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		v56 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
		v57 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 908));
		if (v57)
		{
			v58 = *(__m128*)(a1 + 800);
			v59 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v58, v58, 85), v57[284]),
						_mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v57[283])),
					_mm_mul_ps(_mm_shuffle_ps(v58, v58, 170), v57[285])),
				v57[286]);
			*(__m128*)(a1 + 352) = v59;
			*(__m128*)(a1 + 368) = v59;
		}
		if (v55)
		{
			v60 = *(_QWORD*)(v55 + 5864);
			if (v60)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v60 + 296i64))(v60, 1i64);
		}
		if (v56)
		{
			v61 = *(_QWORD*)(v56 + 5864);
			if (v61)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v61 + 296i64))(v61, 1i64);
		}
		v62 = *(_QWORD*)(a1 + 48);
		if (v62)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v62 + 208i64))(v62, 10i64);
		v63 = *(_QWORD*)(a1 + 56);
		if (v63)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v63 + 208i64))(v63, 10i64);
		v64 = *(_QWORD*)(a1 + 64);
		if (v64)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v64 + 208i64))(v64, 10i64);
	}
	v65 = *(_DWORD*)(a1 + 968);
	if (!v65)
	{
		if (!*(_DWORD*)(a1 + 604))
			*(float*)(a1 + 596) = *(float*)(a1 + 596) - a2;
		v206 = *(_DWORD*)(a1 + 672);
		if (!v206)
		{
			if ((float)(*(float*)(a1 + 596) - a2) <= 0.0)
				goto LABEL_312;
			if (!*(_QWORD*)(a1 + 48) || *(_QWORD*)(a1 + 72))
				goto LABEL_342;
		LABEL_341:
			sub_140625410(a1);
			goto LABEL_342;
		}
		v207 = v206 - 1;
		if (v207)
		{
			if (v207 == 1)
			{
				if (*(_DWORD*)(a1 + 928) != 1
					|| (v208 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904))) == 0
					|| (v209 = *(_QWORD*)(v208 + 5864)) == 0
					|| !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v209 + 848i64))(
						v209,
						*(unsigned int*)(a1 + 944))
					|| (v210 = *(_QWORD*)(a1 + 80)) == 0
					|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v210 + 944i64))(v210))
				{
					if (*(_DWORD*)(a1 + 908))
					{
						if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)))
						{
							v211 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
							if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v211 + 848i64))(v211, 67i64))
							{
								v212 = *(__m128*)(a1 + 640);
								v213 = *(_QWORD*)(a1 + 128);
								v442 = 0i64;
								v361.m128_i32[3] = 0;
								v362.m128_i32[3] = 0;
								v214 = _mm_shuffle_ps(v212, v212, 85).m128_f32[0];
								v363.m128_i32[3] = 0;
								v215 = v212.m128_f32[0] * (float)(v212.m128_f32[0] * 2.0);
								v216 = _mm_shuffle_ps(v212, v212, 170).m128_f32[0];
								v217 = v216 * 2.0;
								v218 = v212.m128_f32[0] * (float)(v214 * 2.0);
								v219 = _mm_shuffle_ps(v212, v212, 255).m128_f32[0];
								v220 = v219 * (float)(v212.m128_f32[0] * 2.0);
								v221 = v214 * (float)(v214 * 2.0);
								v222 = v216 * (float)(v216 * 2.0);
								v361.m128_f32[0] = (float)(1.0 - v221) - v222;
								v223 = v219 * v217;
								v212.m128_f32[0] = v212.m128_f32[0] * v217;
								v224 = v219 * (float)(v214 * 2.0);
								v225 = v214 * v217;
								v361.m128_f32[1] = v218 + v223;
								v362.m128_f32[0] = v218 - v223;
								v361.m128_f32[2] = v212.m128_f32[0] - v224;
								v362.m128_f32[1] = (float)(1.0 - v215) - v222;
								v226 = *(_DWORD*)(a1 + 352);
								v362.m128_f32[2] = v225 + v220;
								*(_QWORD*)&v364 = __PAIR64__(*(_DWORD*)(a1 + 356), v226);
								*((_QWORD*)&v364 + 1) = *(unsigned int*)(a1 + 360) | 0x3F80000000000000i64;
								v363.m128_f32[2] = (float)(1.0 - v215) - v221;
								v363.m128_f32[0] = v212.m128_f32[0] + v224;
								v441[1] = (__int128)v362;
								v441[0] = (__int128)v361;
								v363.m128_f32[1] = v225 - v220;
								v441[3] = v364;
								v441[2] = (__int128)v363;
								(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v213 + 320i64))(v213, v441);
							}
						}
					}
					v227 = *(_QWORD*)(a1 + 80);
					if (v227 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v227 + 848i64))(v227, 67i64))
					{
						(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 80) + 888i64))(
							*(_QWORD*)(a1 + 80),
							67i64,
							v479);
						*(__m128*)(a1 + 432) = v479[3];
					}
					goto LABEL_342;
				}
				goto LABEL_236;
			}
			goto LABEL_342;
		}
		v228 = *(float*)(a1 + 596);
		if ((float)(v228 - a2) <= 0.0)
		{
			*(_DWORD*)(a1 + 688) = 1;
			*(_OWORD*)(a1 + 432) = *(_OWORD*)(a1 + 368);
			v229 = *(_QWORD*)(a1 + 48);
			if (v229)
			{
				if ((*(_BYTE*)(a1 + 896) & 8) != 0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v229 + 728i64))(v229, 61i64);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 62i64);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 63i64);
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 64i64);
				}
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
					*(_QWORD*)(a1 + 48),
					2016i64))
				{
					v230 = *(_QWORD*)(a1 + 48);
					v231 = sub_1401AE6F0(0, -1);
					v427[0] = 2016;
					v428 = 1065353216i64;
					v429 = 0;
					v430 = 3i64;
					v431 = 0;
					v427[1] = v231;
					(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v230 + 584i64))(v230, 0i64, v427);
					(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
						*(_QWORD*)(a1 + 48),
						sub_1406248A0,
						a1);
				}
				else if ((*(_BYTE*)(a1 + 896) & 2) != 0
					&& (*(_DWORD*)(a1 + 684)
						|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
							*(_QWORD*)(a1 + 48),
							2017i64)))
				{
					if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
						*(_QWORD*)(a1 + 48),
						2018i64))
					{
						v232 = *(_QWORD*)(a1 + 48);
						v233 = sub_1401AE6F0(0, -1);
						v408[0] = 2018;
						v409 = 1065353216i64;
						v410 = 0;
						v411 = 3i64;
						v412 = 0;
						v408[1] = v233;
						(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v232 + 584i64))(v232, 0i64, v408);
						(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
							*(_QWORD*)(a1 + 48),
							sub_140624A90,
							a1);
					}
				}
				else if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
					*(_QWORD*)(a1 + 48),
					2017i64))
				{
					v234 = *(_QWORD*)(a1 + 48);
					v235 = sub_1401AE6F0(0, -1);
					v374[0] = 2017;
					v375 = 1065353216i64;
					v376 = 0;
					v377 = 3i64;
					v378 = 0;
					v374[1] = v235;
					(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v234 + 584i64))(v234, 0i64, v374);
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 1112i64))(*(_QWORD*)(a1 + 48));
				}
			}
			v236 = *(_QWORD*)(a1 + 96);
			if (v236)
			{
				if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v236 + 408i64))(v236, 2016i64))
				{
					v237 = *(_QWORD*)(a1 + 96);
					v437[0] = 2016i64;
					v437[1] = 1065353216i64;
					v438 = 0;
					v439 = 3i64;
					v440 = 0;
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v237 + 584i64))(v237, 0i64, v437);
					(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 96) + 648i64))(
						*(_QWORD*)(a1 + 96),
						sub_1406248A0,
						a1);
				}
				else if ((*(_BYTE*)(a1 + 896) & 2) != 0
					&& (*(_DWORD*)(a1 + 684)
						|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(
							*(_QWORD*)(a1 + 96),
							2017i64)))
				{
					if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(
						*(_QWORD*)(a1 + 96),
						2018i64))
					{
						v238 = *(_QWORD*)(a1 + 96);
						v418[0] = 2018i64;
						v418[1] = 1065353216i64;
						v419 = 0;
						v420 = 3i64;
						v421 = 0;
						(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v238 + 584i64))(v238, 0i64, v418);
						(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 96) + 648i64))(
							*(_QWORD*)(a1 + 96),
							sub_140624A90,
							a1);
					}
				}
				else
				{
					v239 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(
						*(_QWORD*)(a1 + 96),
						2017i64);
					v240 = *(_QWORD*)(a1 + 96);
					if (v239)
					{
						v379[0] = 2017i64;
						v379[1] = 1065353216i64;
						v380 = 0;
						v381 = 3i64;
						v382 = 0;
						(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v240 + 584i64))(v240, 0i64, v379);
					}
					else
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v240 + 1112i64))(v240);
					}
				}
			}
			if (*(_QWORD*)(a1 + 56) && *(_DWORD*)(a1 + 960) != -1)
			{
				sub_1406257A0(a1, 150, v365, (void(__fastcall**)(__int64, __int64, __int64, int, int, __int64)) & v360);
				if (v365[0])
				{
					v241 = *(_QWORD*)(a1 + 56);
					v383[0] = v365[0];
					v383[1] = 0;
					v384 = 1065353216i64;
					v385 = 0i64;
					v386 = 0i64;
					(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v241 + 584i64))(v241, 0i64, v383);
					(*(void(__fastcall**)(_QWORD, unsigned __int64, __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
						*(_QWORD*)(a1 + 56),
						v360.m128_u64[0],
						a1);
				}
				else if ((*(_BYTE*)(a1 + 896) & 2) == 0)
				{
					sub_14061A600(a1);
				}
			}
			v242 = *(_QWORD*)(a1 + 88);
			if (v242 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v242 + 848i64))(v242, 67i64))
			{
				(*(void(__fastcall**)(_QWORD, __int64, __int128*))(**(_QWORD**)(a1 + 88) + 888i64))(
					*(_QWORD*)(a1 + 88),
					67i64,
					&v366);
				v243 = 0i64;
				v369.m128_u64[0] = 0i64;
				v369.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
			}
			else
			{
				v244 = *(__m128*)(a1 + 368);
				v245 = (__m128*)(a1 + 464);
				v243 = 0i64;
				v475 = 0i64;
				v246 = _mm_sub_ps(v244, *(__m128*)(a1 + 464));
				v247 = _mm_mul_ps(v246, v246);
				if ((float)((float)(v247.m128_f32[0] + _mm_shuffle_ps(v247, v247, 85).m128_f32[0])
					+ _mm_shuffle_ps(v247, v247, 170).m128_f32[0]) > *(float*)&dword_140C4A8A8)
				{
					v248 = &v467;
				}
				else
				{
					v245 = (__m128*)(a1 + 336);
					v248 = &v472;
				}
				v249 = sub_14061F3D0(v242, (__int64)v248, (__m128*)(a1 + 368), v245, &v475);
				v366 = *(_OWORD*)v249;
				v367 = *(_OWORD*)(v249 + 16);
				v368 = *(_OWORD*)(v249 + 32);
				v369 = *(__m128*)(v249 + 48);
			}
			v250 = *(_QWORD*)(a1 + 80);
			if (!v250
				|| !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v250 + 408i64))(v250, 150i64)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 80) + 848i64))(
					*(_QWORD*)(a1 + 80),
					67i64))
			{
				v280 = *(_QWORD*)(a1 + 48);
				if (v280)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v280 + 936i64))(v280);
					v282 = (__m128*)(a1 + 464);
					v283 = _mm_sub_ps(*(__m128*)(a1 + 352), *(__m128*)(a1 + 464));
					v284 = _mm_mul_ps(v283, v283);
					if ((float)((float)(v284.m128_f32[0] + _mm_shuffle_ps(v284, v284, 85).m128_f32[0])
						+ _mm_shuffle_ps(v284, v284, 170).m128_f32[0]) > 0.0000099999997)
					{
						v285 = &v469;
					}
					else
					{
						v282 = (__m128*)(a1 + 336);
						v285 = &v470;
					}
					v286 = sub_14061F3D0(v281, (__int64)v285, (__m128*)(a1 + 368), v282, (_DWORD*)(a1 + 368));
					v361 = *(__m128*)v286;
					v362 = *(__m128*)(v286 + 16);
					v363 = *(__m128*)(v286 + 32);
					v287 = *(_OWORD*)(v286 + 48);
					v359.m128_u64[0] = a1 + 208;
					v359.m128_u64[1] = (unsigned __int64)&v361;
					v364 = v287;
					v479[0].m128_u64[0] = a1 + 208;
					v479[0].m128_u64[1] = (unsigned __int64)&v361;
					sub_1401AFB10((__m128**)v479, v449);
					v288 = *(_QWORD*)(a1 + 112);
					v450 = 0i64;
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v288 + 320i64))(v288, v449);
				}
				if ((*(_BYTE*)(a1 + 896) & 2) != 0)
					goto LABEL_342;
				goto LABEL_312;
			}
			*(_DWORD*)(a1 + 672) = 2;
			v251 = *(__m128*)(a1 + 640);
			v361.m128_i32[3] = 0;
			v362.m128_i32[3] = 0;
			v363.m128_i32[3] = 0;
			v252 = _mm_shuffle_ps(v251, v251, 170).m128_f32[0];
			v253 = _mm_shuffle_ps(v251, v251, 85).m128_f32[0];
			v254 = _mm_shuffle_ps(v251, v251, 255).m128_f32[0];
			v255 = (float)(v253 * 2.0) * v251.m128_f32[0];
			v256 = (float)(v252 * 2.0) * v251.m128_f32[0];
			v257 = (float)(v251.m128_f32[0] * 2.0) * v254;
			v258 = (float)(v253 * 2.0) * v254;
			v259 = (float)(v252 * 2.0) * v254;
			v260 = (float)(v251.m128_f32[0] * 2.0) * v251.m128_f32[0];
			v261 = (float)(v253 * 2.0) * v253;
			v262 = (float)(v252 * 2.0) * v252;
			v251.m128_f32[0] = (float)(v252 * 2.0) * v253;
			v363.m128_f32[0] = v256 + v258;
			v361.m128_f32[0] = (float)(1.0 - v261) - v262;
			v361.m128_f32[2] = v256 - v258;
			v361.m128_f32[1] = v255 + v259;
			v362.m128_f32[0] = v255 - v259;
			v362.m128_f32[2] = v251.m128_f32[0] + v257;
			v263 = *(_DWORD*)(a1 + 356);
			v363.m128_f32[1] = v251.m128_f32[0] - v257;
			v362.m128_f32[1] = (float)(1.0 - v260) - v262;
			v264 = *(_DWORD*)(a1 + 352);
			v363.m128_f32[2] = (float)(1.0 - v260) - v261;
			*(_QWORD*)&v364 = __PAIR64__(v263, v264);
			*((_QWORD*)&v364 + 1) = *(unsigned int*)(a1 + 360) | 0x3F80000000000000i64;
			if (*(_DWORD*)(a1 + 928) == 1
				&& (v265 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904)), (v266 = v265) != 0)
				&& (v267 = *(_QWORD*)(v265 + 5864)) != 0
				&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v267 + 848i64))(
					*(_QWORD*)(v265 + 5864),
					*(unsigned int*)(a1 + 944)))
			{
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(*(_QWORD*)(a1 + 128), 0i64);
				(*(void(__fastcall**)(__int64, _QWORD, __m128*, _QWORD))(*(_QWORD*)v267 + 888i64))(
					v267,
					*(unsigned int*)(a1 + 944),
					v479,
					0i64);
				v475.m128_u64[0] = (unsigned __int64)v479;
				sub_1401AFC20((__int64*)&v475, v455);
				v359.m128_u64[0] = (unsigned __int64)&v361;
				v359.m128_u64[1] = (unsigned __int64)v455;
				v475.m128_u64[0] = (unsigned __int64)&v361;
				v475.m128_u64[1] = (unsigned __int64)v455;
				sub_1401AFB10((__m128**) & v475, v457);
				(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 80) + 72i64))(*(_QWORD*)(a1 + 80), v457);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v267 + 896i64))(
					v267,
					*(unsigned int*)(a1 + 944),
					*(_QWORD*)(a1 + 80));
				v268 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 80) + 424i64))(
					*(_QWORD*)(a1 + 80),
					150i64,
					0i64)
					+ 20);
				v476.m128_u64[0] = (unsigned __int64)sub_140623450;
				v475.m128_i32[0] = 0;
				v475.m128_u64[1] = a1;
				v476.m128_u64[1] = 0i64;
				sub_140195960(a1 + 1288, v268, (__int64)&v475, 4);
				v269 = *(_QWORD*)(a1 + 1640);
				if (v269)
				{
					v270 = *(_QWORD*)(v266 + 5512);
					if (v270)
						goto LABEL_295;
				}
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(
					*(_QWORD*)(a1 + 128),
					*(_QWORD*)(a1 + 80));
				v271 = *(_QWORD*)(a1 + 128);
				v485 = 0i64;
				v481 = (__int128)v361;
				v482 = v362;
				v483 = (__int128)v363;
				v484 = v364;
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v271 + 320i64))(v271, &v481);
				if (*(_QWORD*)(a1 + 1640) && (int)sub_140625C00(a1) >= 0)
				{
					v272 = *(__int64**)(a1 + 1624);
					v273 = *v272;
					v274 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 56i64))(*(_QWORD*)(a1 + 128));
					(*(void(__fastcall**)(__int64*, __int64))(v273 + 88))(v272, v274);
					v270 = *(_QWORD*)(a1 + 1624);
					v269 = *(_QWORD*)(a1 + 1640);
				LABEL_295:
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v270 + 24i64))(
						v270,
						v269,
						0i64,
						0i64,
						0i64,
						0i64,
						0i64);
				}
			}
			v275 = *(_QWORD*)(a1 + 80);
			v276 = sub_1401AE6F0(0, -1);
			LODWORD(v370) = 150;
			*((_QWORD*)&v370 + 1) = 1065353216i64;
			v371.m128_i32[0] = 0;
			*(unsigned __int64*)((char*)v371.m128_u64 + 4) = 3i64;
			v371.m128_i32[3] = 0;
			DWORD1(v370) = v276;
			(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v275 + 584i64))(v275, 0i64, &v370);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 80) + 648i64))(
				*(_QWORD*)(a1 + 80),
				sub_1406247E0,
				a1);
			if (*(_QWORD*)(a1 + 48)
				&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 80) + 848i64))(
					*(_QWORD*)(a1 + 80),
					67i64))
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 936i64))(*(_QWORD*)(a1 + 48));
				(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 80) + 888i64))(
					*(_QWORD*)(a1 + 80),
					67i64,
					&v475);
				v478.m128_u64[0] = v243.m128i_i64[0];
				v478.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v243, 8));
				v479[0].m128_u64[0] = (unsigned __int64)&v475;
				sub_1401AFC20((__int64*)v479, v461);
				v486 = (__m128*)(a1 + 208);
				v487 = (__m128*) & v366;
				sub_1401AFB10(&v486, v488);
				v359.m128_u64[0] = (unsigned __int64)v488;
				v359.m128_u64[1] = (unsigned __int64)v461;
				v479[0].m128_u64[0] = (unsigned __int64)v488;
				v479[0].m128_u64[1] = (unsigned __int64)v461;
				sub_1401AFB10((__m128**)v479, v448);
				(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48), v448);
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 80) + 896i64))(
					*(_QWORD*)(a1 + 80),
					67i64,
					*(_QWORD*)(a1 + 48));
			}
			if (!*(_QWORD*)(a1 + 96))
				goto LABEL_342;
			if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)))
			{
				v277 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
				if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v277 + 848i64))(v277, 21i64))
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 936i64))(*(_QWORD*)(a1 + 96));
					v278 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v278 + 896i64))(
						v278,
						21i64,
						*(_QWORD*)(a1 + 96));
					goto LABEL_342;
				}
			}
			v279 = *(_QWORD*)(a1 + 48);
			if (v279 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v279 + 848i64))(v279, 44i64))
				goto LABEL_305;
			goto LABEL_342;
		}
		*(_OWORD*)(a1 + 464) = *(_OWORD*)(a1 + 448);
		v289 = *(__m128*)(a1 + 432);
		*(__m128*)(a1 + 448) = v289;
		v289.m128_f32[0] = a2 / v228;
		*(__m128*)(a1 + 432) = _mm_add_ps(
			_mm_mul_ps(
				_mm_sub_ps(*(__m128*)(a1 + 368), *(__m128*)(a1 + 432)),
				_mm_shuffle_ps(v289, v289, 0)),
			*(__m128*)(a1 + 432));
		sub_140622800(a1);
		sub_140621C30((__m128*)a1);
		sub_140621F70((__m128*)a1);
		v290 = _mm_sub_ps(*(__m128*)(a1 + 432), *(__m128*)(a1 + 368));
		v291 = _mm_mul_ps(v290, v290);
		v292 = _mm_shuffle_ps(v291, v291, 85);
		v293 = fsqrt((float)(v291.m128_f32[0] + v292.m128_f32[0]) + _mm_shuffle_ps(v291, v291, 170).m128_f32[0]);
		if (!*(_DWORD*)(a1 + 672))
		{
			v294 = *(float*)(a1 + 1024);
			goto LABEL_325;
		}
		v292 = (__m128) * (unsigned int*)(a1 + 1028);
		v295 = *(float*)(a1 + 660);
		v294 = *(float*)(a1 + 1028) - (float)(v293 * *(float*)(a1 + 664));
		if (v292.m128_f32[0] <= *(float*)(a1 + 1024))
		{
			if (v294 >= v295)
				v294 = *(float*)(a1 + 660);
			if (v294 > v292.m128_f32[0])
				goto LABEL_324;
		}
		else
		{
			if (v294 <= v295)
				v294 = *(float*)(a1 + 660);
			if (v294 < v292.m128_f32[0])
				goto LABEL_324;
		}
		v294 = *(float*)(a1 + 1028);
	LABEL_324:
		*(float*)(a1 + 660) = v294;
	LABEL_325:
		v292.m128_f32[0] = v294;
		v489 = v294;
		v490 = v294;
		v491 = v294;
		v296 = _mm_shuffle_ps(v292, v292, 0);
		v297 = _mm_mul_ps((__m128)xmmword_140C78410, v296);
		v359.m128_u64[0] = (unsigned __int64)v492;
		v296.m128_f32[0] = v294;
		v359.m128_u64[1] = a1 + 144;
		v492[0] = (__int128)v297;
		v298 = _mm_shuffle_ps(v296, v296, 0);
		v299 = _mm_mul_ps((__m128)xmmword_140C78420, v298);
		v298.m128_f32[0] = v294;
		v492[1] = (__int128)v299;
		v492[3] = xmmword_140C78440;
		v492[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v298, v298, 0));
		v479[0].m128_u64[0] = (unsigned __int64)v492;
		v479[0].m128_u64[1] = a1 + 144;
		sub_1401AFB10((__m128**)v479, (__m128*)(a1 + 208));
		if (*(_QWORD*)(a1 + 48))
		{
			v300 = *(_QWORD*)(a1 + 88);
			if (v300
				&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v300 + 848i64))(v300, 67i64)
				&& (!*(_DWORD*)(a1 + 692) || (*(_BYTE*)(a1 + 896) & 1) != 0))
			{
				sub_140624CC0(a1);
			}
			else
			{
				if (*(float*)(a1 + 1020) > 0.0)
				{
					v301 = *(float*)(a1 + 560);
					*(_DWORD*)(a1 + 544) = *(_DWORD*)(a1 + 548);
					v302 = v301 * *(float*)(a1 + 596);
					*(_DWORD*)(a1 + 548) = *(_DWORD*)(a1 + 552);
					v303 = 1.0 - (float)(fmaxf(0.0, fminf(v302, 1.0)) * 2.0);
					*(float*)(a1 + 552) = (float)(1.0 - (float)(v303 * v303)) * *(float*)(a1 + 556);
				}
				v304 = *(__m128*)(a1 + 432);
				v305 = (__m128*)(a1 + 336);
				v306 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 544), (__m128)0i64));
				v307 = _mm_sub_ps(*(__m128*)(a1 + 336), v304);
				v308 = _mm_mul_ps(v307, v307);
				v309 = _mm_add_ps(
					_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 552), (__m128)0i64)),
					v304);
				v475 = v309;
				if ((float)((float)(v308.m128_f32[0] + _mm_shuffle_ps(v308, v308, 85).m128_f32[0])
					+ _mm_shuffle_ps(v308, v308, 170).m128_f32[0]) > *(float*)&dword_140C4A8A8)
				{
					v312 = *(__m128*)(a1 + 464);
					v360 = v309;
					v305 = &v359;
					v310 = &v360;
					v311 = v459;
					v359 = _mm_add_ps(v312, v306);
				}
				else
				{
					v310 = (__m128*)(a1 + 368);
					v311 = &v463;
				}
				v313 = sub_14061F3D0(v300, (__int64)v311, v310, v305, &v475);
				v314 = *(_QWORD*)(a1 + 112);
				v366 = *(_OWORD*)v313;
				v367 = *(_OWORD*)(v313 + 16);
				v368 = *(_OWORD*)(v313 + 32);
				v369 = *(__m128*)(v313 + 48);
				if (v314)
				{
					v359.m128_u64[0] = a1 + 208;
					v359.m128_u64[1] = (unsigned __int64)&v366;
					v479[0].m128_u64[0] = a1 + 208;
					v479[0].m128_u64[1] = (unsigned __int64)&v366;
					sub_1401AFB10((__m128**)v479, v500);
					v501 = 0i64;
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v315 + 320i64))(v315, v500);
				}
			}
		}
		goto LABEL_342;
	}
	v66 = v65 - 2;
	if (v66)
	{
		if (v66 == 1)
		{
			sub_140622800(a1);
			sub_140621C30((__m128*)a1);
			sub_140621F70((__m128*)a1);
			v67 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
			if (v67
				&& (*(_QWORD*)(qword_140C65898 + 25744) != v67
					|| (*(_DWORD*)(qword_140C65898 + 26448) & *(_DWORD*)(qword_140C65898 + 26444)) != 0))
			{
				v68 = *(_QWORD*)(a1 + 48);
			}
			else
			{
				v68 = 0i64;
			}
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 112) + 336i64))(*(_QWORD*)(a1 + 112), v68);
			v69 = *(float*)(a1 + 1484);
			v70 = *(float*)(a1 + 1488);
			v71 = (unsigned int)dword_140C4E6A0;
			v72 = *(_DWORD*)qword_140C63750;
			v73 = dword_140C4E6A0;
			v74 = &off_140C4E690;
			if (v69 >= v70)
			{
				if (v72 < dword_140C4E6A0)
					v73 = *(_DWORD*)qword_140C63750;
				if ((float)(a2 * *((float*)&off_140C4E690 + v73 + 8)) >= (float)(v69 - v70))
				{
					v76 = v69 - v70;
				}
				else
				{
					if (v72 < dword_140C4E6A0)
						v71 = (unsigned int)v72;
					v76 = a2 * *((float*)&off_140C4E690 + (int)v71 + 8);
				}
				*(float*)(a1 + 1484) = v69 - v76;
			}
			else
			{
				v75 = v70 - v69;
				if (v72 < dword_140C4E6A0)
					v73 = *(_DWORD*)qword_140C63750;
				if ((float)(a2 * *((float*)&off_140C4E690 + v73 + 8)) >= v75)
				{
					*(float*)(a1 + 1484) = v75 + v69;
				}
				else
				{
					if (v72 < dword_140C4E6A0)
						v71 = (unsigned int)v72;
					*(float*)(a1 + 1484) = (float)(a2 * *((float*)&off_140C4E690 + (int)v71 + 8)) + v69;
				}
			}
			for (j = *(_QWORD*)(a1 + 1472); j; j = *(_QWORD*)(j + 40))
			{
				if (*(_QWORD*)(j + 56) && *(_QWORD*)(j + 112))
				{
					v78 = *(_QWORD*)(a1 + 48);
					if (v78
						&& (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64(__fastcall***)()))(*(_QWORD*)v78 + 848i64))(
							v78,
							*(unsigned int*)(j + 940),
							v74))
					{
						(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 872i64))(
							*(_QWORD*)(a1 + 48),
							*(unsigned int*)(j + 940),
							j + 336,
							0i64);
					}
					else
					{
						*(_OWORD*)(j + 336) = *(_OWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, __int64(__fastcall***)()))(**(_QWORD**)(a1 + 48) + 80i64))(
							*(_QWORD*)(a1 + 48),
							v71,
							v74)
							+ 48);
					}
				}
			}
		}
		goto LABEL_344;
	}
	v79 = *(_DWORD*)(a1 + 672);
	if (!v79)
	{
		if (!*(_QWORD*)(a1 + 48))
			goto LABEL_342;
		if (*(_QWORD*)(a1 + 72))
		{
			v202 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 900));
			v203 = v202;
			if (v202 && (*(_BYTE*)(a1 + 896) & 0x40) != 0)
			{
				*(__m128*)(a1 + 576) = *sub_1405B44A0(v202, &v447);
				sub_1405B4520(v203, (__int64)&v366);
				v204 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 72) + 80i64))(*(_QWORD*)(a1 + 72));
				v369.m128_u64[0] = *(_QWORD*)(v204 + 48);
				v205 = *(_QWORD*)(a1 + 72);
				v369.m128_i32[2] = *(_DWORD*)(v204 + 56);
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v205 + 72i64))(v205, &v366);
			}
			goto LABEL_342;
		}
		goto LABEL_341;
	}
	v80 = v79 - 1;
	if (v80)
	{
		if (v80 == 1)
		{
			if (*(_DWORD*)(a1 + 928) != 1
				|| (v81 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904))) == 0
				|| (v82 = *(_QWORD*)(v81 + 5864)) == 0
				|| !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v82 + 848i64))(
					v82,
					*(unsigned int*)(a1 + 944))
				|| (v83 = *(_QWORD*)(a1 + 80)) == 0
				|| (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v83 + 968i64))(*(_QWORD*)(a1 + 80)) != v83)
			{
				if (*(_DWORD*)(a1 + 908))
				{
					if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)))
					{
						v84 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
						if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v84 + 848i64))(v84, 67i64))
						{
							v85 = *(__m128*)(a1 + 640);
							v86 = *(_QWORD*)(a1 + 128);
							v444 = 0i64;
							v361.m128_i32[3] = 0;
							v362.m128_i32[3] = 0;
							v87 = _mm_shuffle_ps(v85, v85, 170).m128_f32[0];
							v88 = _mm_shuffle_ps(v85, v85, 85).m128_f32[0];
							v363.m128_i32[3] = 0;
							v89 = _mm_shuffle_ps(v85, v85, 255).m128_f32[0];
							v90 = (float)(v88 * 2.0) * v85.m128_f32[0];
							v91 = (float)(v87 * 2.0) * v85.m128_f32[0];
							v92 = (float)(v85.m128_f32[0] * 2.0) * v89;
							v93 = (float)(v88 * 2.0) * v89;
							v94 = (float)(v87 * 2.0) * v89;
							v95 = (float)(v85.m128_f32[0] * 2.0) * v85.m128_f32[0];
							v96 = (float)(v88 * 2.0) * v88;
							v97 = (float)(v87 * 2.0) * v87;
							v85.m128_f32[0] = (float)(v87 * 2.0) * v88;
							v363.m128_f32[0] = v91 + v93;
							v361.m128_f32[0] = (float)(1.0 - v96) - v97;
							v361.m128_f32[2] = v91 - v93;
							v361.m128_f32[1] = v90 + v94;
							v362.m128_f32[0] = v90 - v94;
							v362.m128_f32[2] = v85.m128_f32[0] + v92;
							DWORD1(v364) = *(_DWORD*)(a1 + 356);
							v443[0] = (__int128)v361;
							v362.m128_f32[1] = (float)(1.0 - v95) - v97;
							v98 = *(_DWORD*)(a1 + 352);
							v363.m128_f32[1] = v85.m128_f32[0] - v92;
							LODWORD(v364) = v98;
							v99 = *(_DWORD*)(a1 + 360);
							v363.m128_f32[2] = (float)(1.0 - v95) - v96;
							v443[2] = (__int128)v363;
							*((_QWORD*)&v364 + 1) = v99 | 0x3F80000000000000i64;
							v443[1] = (__int128)v362;
							v443[3] = v364;
							(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v86 + 320i64))(v86, v443);
						}
					}
				}
				goto LABEL_342;
			}
		LABEL_236:
			sub_140622B70(a1);
			return 0i64;
		}
		goto LABEL_342;
	}
	sub_140622800(a1);
	sub_140621C30((__m128*)a1);
	sub_140621F70((__m128*)a1);
	if (*(_DWORD*)(a1 + 604) || !*(_QWORD*)(a1 + 48) && !*(_QWORD*)(a1 + 56))
	{
	LABEL_207:
		if (!*(_QWORD*)(a1 + 48))
			goto LABEL_342;
		v187 = *(_QWORD*)(a1 + 88);
		if (v187
			&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v187 + 848i64))(v187, 67i64)
			&& (!*(_DWORD*)(a1 + 692) || (*(_BYTE*)(a1 + 896) & 1) != 0))
		{
			sub_140624CC0(a1);
			goto LABEL_342;
		}
		v188 = (__m128*)(a1 + 432);
		v189 = _mm_sub_ps(*(__m128*)(a1 + 368), *(__m128*)(a1 + 432));
		v190 = _mm_mul_ps(v189, v189);
		if ((float)((float)(v190.m128_f32[0] + _mm_shuffle_ps(v190, v190, 85).m128_f32[0])
			+ _mm_shuffle_ps(v190, v190, 170).m128_f32[0]) > *(float*)&dword_140C4A8A8)
		{
			if (*(float*)(a1 + 1020) > 0.0)
			{
				v193 = _mm_sub_ps(*(__m128*)(a1 + 352), *(__m128*)(a1 + 784));
				*(_DWORD*)(a1 + 544) = *(_DWORD*)(a1 + 548);
				*(_DWORD*)(a1 + 548) = *(_DWORD*)(a1 + 552);
				v194 = _mm_mul_ps(v193, v193);
				v195 = (__m128)0x3F800000u;
				v196 = fmaxf(
					0.0,
					fminf(
						*(float*)(a1 + 592)
						/ (float)(fsqrt(
							(float)(v194.m128_f32[0] + _mm_shuffle_ps(v194, v194, 85).m128_f32[0])
							+ _mm_shuffle_ps(v194, v194, 170).m128_f32[0])
							/ (float)*(int*)(a1 + 976)),
						1.0));
				v195.m128_f32[0] = (float)(1.0 - (float)((float)(1.0 - (float)(v196 * 2.0)) * (float)(1.0 - (float)(v196 * 2.0))))
					* *(float*)(a1 + 556);
				v197 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 544), (__m128)0i64));
				*(_DWORD*)(a1 + 552) = v195.m128_i32[0];
				v198 = *v188;
				v360 = _mm_add_ps(*(__m128*)(a1 + 464), v197);
				v359 = _mm_add_ps(v198, _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v195, (__m128)0i64)));
				v475 = v359;
				v199 = sub_14061F3D0((__int64)v188, (__int64)v471, &v475, &v360, &v359);
			LABEL_219:
				v361 = *(__m128*)v199;
				v362 = *(__m128*)(v199 + 16);
				v363 = *(__m128*)(v199 + 32);
				v200 = *(_OWORD*)(v199 + 48);
				v359.m128_u64[0] = a1 + 208;
				v359.m128_u64[1] = (unsigned __int64)&v361;
				v364 = v200;
				v479[0].m128_u64[0] = a1 + 208;
				v479[0].m128_u64[1] = (unsigned __int64)&v361;
				sub_1401AFB10((__m128**)v479, v453);
				v201 = *(_QWORD*)(a1 + 112);
				v454 = 0i64;
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v201 + 320i64))(v201, v453);
				goto LABEL_342;
			}
			v191 = (__m128*)(a1 + 432);
			v192 = &v465;
		}
		else
		{
			v191 = (__m128*)(a1 + 336);
			v192 = &v474;
		}
		v199 = sub_14061F3D0((__int64)v188, (__int64)v192, (__m128*)(a1 + 368), v191, (_DWORD*)(a1 + 432));
		goto LABEL_219;
	}
	v23 = (*(_BYTE*)(a1 + 896) & 8) == 0;
	v100 = *(float*)(a1 + 592);
	v101 = (__m128*)(a1 + 368);
	v104 = (__m128)LODWORD(v100);
	v102 = (float)*(int*)(a1 + 976);
	v103 = 0;
	v104.m128_f32[0] = (float)(v100 * *(float*)(a1 + 980)) + v102;
	*(_DWORD*)(a1 + 600) = v104.m128_i32[0];
	v104.m128_f32[0] = v104.m128_f32[0] * a2;
	v105 = _mm_sub_ps(*(__m128*)(a1 + 368), *(__m128*)(a1 + 432));
	v106 = _mm_mul_ps(v105, v105);
	v107 = (float)(v106.m128_f32[0] + _mm_shuffle_ps(v106, v106, 85).m128_f32[0])
		+ _mm_shuffle_ps(v106, v106, 170).m128_f32[0];
	if (!v23)
	{
		if (*(_QWORD*)(a1 + 1512))
		{
			v108 = _mm_sub_ps(*(__m128*)(a1 + 1552), *(__m128*)(a1 + 336));
			v109 = _mm_mul_ps(v108, v108);
			if ((float)(v100
				/ (float)(fsqrt(
					(float)(v109.m128_f32[0] + _mm_shuffle_ps(v109, v109, 85).m128_f32[0])
					+ _mm_shuffle_ps(v109, v109, 170).m128_f32[0])
					/ v102)) >= 1.0)
				v103 = 1;
		}
	}
	if ((float)(v104.m128_f32[0] * v104.m128_f32[0]) < v107 && !v103)
	{
	LABEL_192:
		v173 = (__m128)0x40400000u;
		*(_OWORD*)(a1 + 464) = *(_OWORD*)(a1 + 448);
		*(_OWORD*)(a1 + 448) = *(_OWORD*)(a1 + 432);
		v174 = *(__m128*)(a1 + 432);
		v175 = _mm_sub_ps(*v101, v174);
		v176 = _mm_mul_ps(v175, v175);
		v176.m128_f32[0] = (float)(v176.m128_f32[0] + _mm_shuffle_ps(v176, v176, 85).m128_f32[0])
			+ _mm_shuffle_ps(v176, v176, 170).m128_f32[0];
		v177 = 1.0 / fsqrt(v176.m128_f32[0]);
		v173.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v176.m128_f32[0] * v177) * v177)) * 0.5) * v177, 0.0);
		v178 = _mm_shuffle_ps(v104, v104, 0);
		v179 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v173, v173, 0), v175), v178), v174);
		*(__m128*)(a1 + 432) = v179;
		if (!*(_DWORD*)(a1 + 972))
		{
			v178 = _mm_add_ps(
				v179,
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 384), (__m128) * (unsigned int*)(a1 + 392)),
					(__m128)0i64));
			*(__m128*)(a1 + 432) = v178;
		}
		v180 = fsqrt(v107);
		if (!*(_DWORD*)(a1 + 672))
		{
			v181 = *(float*)(a1 + 1024);
		LABEL_206:
			v178.m128_f32[0] = v181;
			v496 = v181;
			v497 = v181;
			v498 = v181;
			v183 = _mm_shuffle_ps(v178, v178, 0);
			v184 = _mm_mul_ps((__m128)xmmword_140C78410, v183);
			v359.m128_u64[0] = (unsigned __int64)v499;
			v183.m128_f32[0] = v181;
			v359.m128_u64[1] = a1 + 144;
			v499[0] = (__int128)v184;
			v185 = _mm_shuffle_ps(v183, v183, 0);
			v186 = _mm_mul_ps((__m128)xmmword_140C78420, v185);
			v185.m128_f32[0] = v181;
			v499[1] = (__int128)v186;
			v499[3] = xmmword_140C78440;
			v499[2] = (__int128)_mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v185, v185, 0));
			v479[0].m128_u64[0] = (unsigned __int64)v499;
			v479[0].m128_u64[1] = a1 + 144;
			sub_1401AFB10((__m128**)v479, (__m128*)(a1 + 208));
			goto LABEL_207;
		}
		v178 = (__m128) * (unsigned int*)(a1 + 1028);
		v181 = *(float*)(a1 + 1028) - (float)(v180 * *(float*)(a1 + 664));
		v182 = *(float*)(a1 + 660);
		if (v178.m128_f32[0] <= *(float*)(a1 + 1024))
		{
			if (v181 >= v182)
				v181 = *(float*)(a1 + 660);
			if (v181 > v178.m128_f32[0])
				goto LABEL_205;
		}
		else
		{
			if (v181 <= v182)
				v181 = *(float*)(a1 + 660);
			if (v181 < v178.m128_f32[0])
				goto LABEL_205;
		}
		v181 = *(float*)(a1 + 1028);
	LABEL_205:
		*(float*)(a1 + 660) = v181;
		goto LABEL_206;
	}
	*(_DWORD*)(a1 + 688) = 1;
	*(__m128*)(a1 + 432) = *v101;
	v110 = *(_QWORD*)(a1 + 48);
	if (v110)
	{
		if ((*(_BYTE*)(a1 + 896) & 8) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v110 + 728i64))(v110, 61i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 62i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 63i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(*(_QWORD*)(a1 + 48), 64i64);
		}
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
			*(_QWORD*)(a1 + 48),
			2016i64))
		{
			v111 = *(_QWORD*)(a1 + 48);
			v112 = sub_1401AE6F0(0, -1);
			v413[0] = 2016;
			v414 = 1065353216i64;
			v415 = 0;
			v416 = 3i64;
			v417 = 0;
			v413[1] = v112;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v111 + 584i64))(v111, 0i64, v413);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
				*(_QWORD*)(a1 + 48),
				sub_1406248A0,
				a1);
		}
		else if ((*(_BYTE*)(a1 + 896) & 2) != 0
			&& (*(_DWORD*)(a1 + 684)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
					*(_QWORD*)(a1 + 48),
					2017i64)))
		{
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
				*(_QWORD*)(a1 + 48),
				2018i64))
			{
				v113 = *(_QWORD*)(a1 + 48);
				v114 = sub_1401AE6F0(0, -1);
				v422[0] = 2018;
				v423 = 1065353216i64;
				v424 = 0;
				v425 = 3i64;
				v426 = 0;
				v422[1] = v114;
				(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v113 + 584i64))(v113, 0i64, v422);
				(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 48) + 648i64))(
					*(_QWORD*)(a1 + 48),
					sub_140624A90,
					a1);
			}
		}
		else if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
			*(_QWORD*)(a1 + 48),
			2017i64))
		{
			v115 = *(_QWORD*)(a1 + 48);
			v116 = sub_1401AE6F0(0, -1);
			v432[0] = 2017;
			v433 = 1065353216i64;
			v434 = 0;
			v435 = 3i64;
			v436 = 0;
			v432[1] = v116;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v115 + 584i64))(v115, 0i64, v432);
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 1112i64))(*(_QWORD*)(a1 + 48));
		}
	}
	v117 = *(_QWORD*)(a1 + 96);
	if (v117)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v117 + 408i64))(v117, 2016i64))
		{
			v118 = *(_QWORD*)(a1 + 96);
			v391[0] = 2016i64;
			v391[1] = 1065353216i64;
			v392 = 0;
			v393 = 3i64;
			v394 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v118 + 584i64))(v118, 0i64, v391);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 96) + 648i64))(
				*(_QWORD*)(a1 + 96),
				sub_1406248A0,
				a1);
		}
		else if ((*(_BYTE*)(a1 + 896) & 2) != 0
			&& (*(_DWORD*)(a1 + 684)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(
					*(_QWORD*)(a1 + 96),
					2017i64)))
		{
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(
				*(_QWORD*)(a1 + 96),
				2018i64))
			{
				v119 = *(_QWORD*)(a1 + 96);
				v387[0] = 2018i64;
				v387[1] = 1065353216i64;
				v388 = 0;
				v389 = 3i64;
				v390 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v119 + 584i64))(v119, 0i64, v387);
				(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 96) + 648i64))(
					*(_QWORD*)(a1 + 96),
					sub_140624A90,
					a1);
			}
		}
		else
		{
			v120 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(
				*(_QWORD*)(a1 + 96),
				2017i64);
			v121 = *(_QWORD*)(a1 + 96);
			if (v120)
			{
				v395[0] = 2017i64;
				v395[1] = 1065353216i64;
				v396 = 0;
				v397 = 3i64;
				v398 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v121 + 584i64))(v121, 0i64, v395);
			}
			else
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v121 + 1112i64))(v121);
			}
		}
	}
	v122 = *(_QWORD*)(a1 + 56);
	if (v122 && *(_DWORD*)(a1 + 960) != -1)
	{
		if ((*(_BYTE*)(a1 + 896) & 8) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v122 + 728i64))(v122, 61i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 62i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 63i64);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 728i64))(*(_QWORD*)(a1 + 56), 64i64);
		}
		sub_1406257A0(a1, 150, v365, (void(__fastcall**)(__int64, __int64, __int64, int, int, __int64)) & v360);
		if (v365[0])
		{
			v123 = *(_QWORD*)(a1 + 56);
			v404[0] = v365[0];
			v404[1] = 0;
			v405 = 1065353216i64;
			v406 = 0i64;
			v407 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v123 + 584i64))(v123, 0i64, v404);
			(*(void(__fastcall**)(_QWORD, unsigned __int64, __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
				*(_QWORD*)(a1 + 56),
				v360.m128_u64[0],
				a1);
		}
		else if ((*(_BYTE*)(a1 + 896) & 2) == 0)
		{
			sub_14061A600(a1);
		}
	}
	v124 = *(_QWORD*)(a1 + 88);
	if (v124 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v124 + 848i64))(v124, 67i64))
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int128*))(**(_QWORD**)(a1 + 88) + 888i64))(
			*(_QWORD*)(a1 + 88),
			67i64,
			&v366);
		v125 = 0i64;
		v369.m128_u64[0] = 0i64;
		v369.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
	}
	else
	{
		v126 = *v101;
		v127 = (__m128*)(a1 + 464);
		v125 = 0i64;
		v359 = 0i64;
		v128 = _mm_sub_ps(v126, *(__m128*)(a1 + 464));
		v129 = _mm_mul_ps(v128, v128);
		if ((float)((float)(v129.m128_f32[0] + _mm_shuffle_ps(v129, v129, 85).m128_f32[0])
			+ _mm_shuffle_ps(v129, v129, 170).m128_f32[0]) > *(float*)&dword_140C4A8A8)
		{
			v130 = &v464;
		}
		else
		{
			v127 = (__m128*)(a1 + 336);
			v130 = &v473;
		}
		v131 = sub_14061F3D0(v124, (__int64)v130, (__m128*)(a1 + 368), v127, &v359);
		v366 = *(_OWORD*)v131;
		v367 = *(_OWORD*)(v131 + 16);
		v368 = *(_OWORD*)(v131 + 32);
		v369 = *(__m128*)(v131 + 48);
	}
	v132 = *(_QWORD*)(a1 + 80);
	if (!v132
		|| !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v132 + 408i64))(v132, 150i64)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 80) + 848i64))(*(_QWORD*)(a1 + 80), 67i64))
	{
		v164 = *(_QWORD*)(a1 + 48);
		if (v164)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v164 + 936i64))(v164);
			v166 = (__m128*)(a1 + 464);
			v167 = _mm_sub_ps(*(__m128*)(a1 + 352), *(__m128*)(a1 + 464));
			v168 = _mm_mul_ps(v167, v167);
			if ((float)((float)(v168.m128_f32[0] + _mm_shuffle_ps(v168, v168, 85).m128_f32[0])
				+ _mm_shuffle_ps(v168, v168, 170).m128_f32[0]) > 0.0000099999997)
			{
				v169 = &v468;
			}
			else
			{
				v166 = (__m128*)(a1 + 336);
				v169 = &v466;
			}
			v170 = sub_14061F3D0(v165, (__int64)v169, (__m128*)(a1 + 368), v166, (_DWORD*)(a1 + 368));
			v361 = *(__m128*)v170;
			v362 = *(__m128*)(v170 + 16);
			v363 = *(__m128*)(v170 + 32);
			v171 = *(_OWORD*)(v170 + 48);
			v359.m128_u64[0] = a1 + 208;
			v359.m128_u64[1] = (unsigned __int64)&v361;
			v364 = v171;
			v479[0].m128_u64[0] = a1 + 208;
			v479[0].m128_u64[1] = (unsigned __int64)&v361;
			sub_1401AFB10((__m128**)v479, v451);
			v172 = *(_QWORD*)(a1 + 112);
			v452 = 0i64;
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v172 + 320i64))(v172, v451);
		}
		if ((*(_BYTE*)(a1 + 896) & 2) != 0)
			goto LABEL_192;
	LABEL_312:
		sub_140622B70(a1);
		return 2147500037i64;
	}
	*(_DWORD*)(a1 + 672) = 2;
	v133 = *(__m128*)(a1 + 640);
	v361.m128_i32[3] = 0;
	v363.m128_i32[3] = 0;
	HIDWORD(v364) = 1065353216;
	v134 = _mm_shuffle_ps(v133, v133, 85).m128_f32[0];
	v135 = _mm_shuffle_ps(v133, v133, 255).m128_f32[0];
	v136 = _mm_shuffle_ps(v133, v133, 170).m128_f32[0];
	v137 = v136 * 2.0;
	v138 = (float)(v134 * 2.0) * v133.m128_f32[0];
	v139 = v135 * (float)(v134 * 2.0);
	v140 = (float)(v136 * 2.0) * v133.m128_f32[0];
	v141 = v135 * (float)(v133.m128_f32[0] * 2.0);
	v142 = (float)(v133.m128_f32[0] * 2.0) * v133.m128_f32[0];
	v143 = v136 * (float)(v136 * 2.0);
	v133.m128_f32[0] = v134 * (float)(v134 * 2.0);
	v144 = v135 * v137;
	v145 = v134 * v137;
	v363.m128_f32[0] = v140 + v139;
	v361.m128_f32[2] = v140 - v139;
	v361.m128_f32[0] = (float)(1.0 - v133.m128_f32[0]) - v143;
	v362.m128_u64[1] = COERCE_UNSIGNED_INT(v145 + v141);
	v146 = *(_DWORD*)(a1 + 356);
	v361.m128_f32[1] = v138 + v144;
	v362.m128_f32[0] = v138 - v144;
	v363.m128_f32[1] = v145 - v141;
	v362.m128_f32[1] = (float)(1.0 - v142) - v143;
	v147 = *(_DWORD*)(a1 + 352);
	v363.m128_f32[2] = (float)(1.0 - v142) - v133.m128_f32[0];
	*(_QWORD*)&v364 = __PAIR64__(v146, v147);
	DWORD2(v364) = *(_DWORD*)(a1 + 360);
	if (*(_DWORD*)(a1 + 928) == 1
		&& (v148 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904)), (v149 = v148) != 0)
		&& (v150 = *(_QWORD*)(v148 + 5864)) != 0
		&& (*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v150 + 848i64))(
			*(_QWORD*)(v148 + 5864),
			*(unsigned int*)(a1 + 944)))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(*(_QWORD*)(a1 + 128), 0i64);
		(*(void(__fastcall**)(__int64, _QWORD, __m128*, _QWORD))(*(_QWORD*)v150 + 888i64))(
			v150,
			*(unsigned int*)(a1 + 944),
			v479,
			0i64);
		v475.m128_u64[0] = (unsigned __int64)v479;
		sub_1401AFC20((__int64*)&v475, v456);
		v359.m128_u64[0] = (unsigned __int64)&v361;
		v359.m128_u64[1] = (unsigned __int64)v456;
		v475.m128_u64[0] = (unsigned __int64)&v361;
		v475.m128_u64[1] = (unsigned __int64)v456;
		sub_1401AFB10((__m128**) & v475, v458);
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 80) + 72i64))(*(_QWORD*)(a1 + 80), v458);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v150 + 896i64))(
			v150,
			*(unsigned int*)(a1 + 944),
			*(_QWORD*)(a1 + 80));
		v151 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 80) + 424i64))(
			*(_QWORD*)(a1 + 80),
			150i64,
			0i64)
			+ 20);
		v476.m128_u64[0] = (unsigned __int64)sub_140623450;
		v475.m128_i32[0] = 0;
		v475.m128_u64[1] = a1;
		v476.m128_u64[1] = 0i64;
		sub_140195960(a1 + 1288, v151, (__int64)&v475, 4);
		v152 = *(_QWORD*)(a1 + 1640);
		if (v152)
		{
			v153 = *(_QWORD*)(v149 + 5512);
			if (v153)
				goto LABEL_176;
		}
	}
	else
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(
			*(_QWORD*)(a1 + 128),
			*(_QWORD*)(a1 + 80));
		v154 = *(_QWORD*)(a1 + 128);
		v446 = 0i64;
		v445[0] = (__int128)v361;
		v445[1] = (__int128)v362;
		v445[2] = (__int128)v363;
		v445[3] = v364;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v154 + 320i64))(v154, v445);
		if (*(_QWORD*)(a1 + 1640) && (int)sub_140625C00(a1) >= 0)
		{
			v155 = *(__int64**)(a1 + 1624);
			v156 = *v155;
			v157 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 56i64))(*(_QWORD*)(a1 + 128));
			(*(void(__fastcall**)(__int64*, __int64))(v156 + 88))(v155, v157);
			v153 = *(_QWORD*)(a1 + 1624);
			v152 = *(_QWORD*)(a1 + 1640);
		LABEL_176:
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v153 + 24i64))(
				v153,
				v152,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
		}
	}
	v158 = *(_QWORD*)(a1 + 80);
	v159 = sub_1401AE6F0(0, -1);
	v399[0] = 150;
	v400 = 1065353216i64;
	v401 = 0;
	v402 = 3i64;
	v403 = 0;
	v399[1] = v159;
	(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v158 + 584i64))(v158, 0i64, v399);
	(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 80) + 648i64))(
		*(_QWORD*)(a1 + 80),
		sub_1406247E0,
		a1);
	v160 = *(_QWORD*)(a1 + 48);
	if (v160)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v160 + 936i64))(v160);
		(*(void(__fastcall**)(_QWORD, __int64, __m128*))(**(_QWORD**)(a1 + 80) + 888i64))(
			*(_QWORD*)(a1 + 80),
			67i64,
			&v475);
		v478.m128_u64[0] = v125.m128i_i64[0];
		v478.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v125, 8));
		v479[0].m128_u64[0] = (unsigned __int64)&v475;
		sub_1401AFC20((__int64*)v479, v460);
		v359.m128_u64[0] = a1 + 208;
		v359.m128_u64[1] = (unsigned __int64)&v366;
		v493.m128_u64[0] = a1 + 208;
		v493.m128_u64[1] = (unsigned __int64)&v366;
		sub_1401AFB10((__m128**) & v493, v494);
		v359.m128_u64[0] = (unsigned __int64)v494;
		v359.m128_u64[1] = (unsigned __int64)v460;
		v479[0].m128_u64[0] = (unsigned __int64)v494;
		v479[0].m128_u64[1] = (unsigned __int64)v460;
		sub_1401AFB10((__m128**)v479, v462);
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48), v462);
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 80) + 896i64))(
			*(_QWORD*)(a1 + 80),
			67i64,
			*(_QWORD*)(a1 + 48));
	}
	if (!*(_QWORD*)(a1 + 96))
		goto LABEL_342;
	if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)))
	{
		v161 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v161 + 848i64))(v161, 21i64))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 936i64))(*(_QWORD*)(a1 + 96));
			v162 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v162 + 896i64))(v162, 21i64, *(_QWORD*)(a1 + 96));
			goto LABEL_342;
		}
	}
	v163 = *(_QWORD*)(a1 + 48);
	if (v163 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v163 + 848i64))(v163, 44i64))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 936i64))(*(_QWORD*)(a1 + 96));
	LABEL_305:
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 896i64))(
			*(_QWORD*)(a1 + 48),
			44i64,
			*(_QWORD*)(a1 + 96));
	}
LABEL_342:
	if (*(_QWORD*)(a1 + 56))
		sub_14061F640(a1);
LABEL_344:
	sub_140625AD0(a1);
	v316 = *(_QWORD*)(a1 + 112);
	if (v316)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v316 + 152i64))(v316);
	v317 = *(_QWORD*)(a1 + 120);
	if (v317)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v317 + 152i64))(v317);
	v318 = *(_QWORD*)(a1 + 128);
	if (v318)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v318 + 152i64))(v318);
	v319 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
	v320 = *(_QWORD**)(a1 + 136);
	for (k = v319; v320; v320 = (_QWORD*)v320[3])
	{
		if (k)
		{
			v322 = 0i64;
			if ((*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v320 + 328i64))(*v320))
			{
				v323 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v320 + 328i64))(*v320);
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v323 + 944i64))(v323))
				{
					v324 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v320 + 328i64))(*v320);
					v322 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v324 + 960i64))(v324);
				}
			}
			*(_QWORD*)&v325 = (unsigned int)sub_14046BEC0(k, *(_DWORD*)(a1 + 1000))[3];
			*(float*)&v325 = (float)(*(float*)&v325 * 6.2831855) + *(float*)(a1 + 1484);
			v326 = sub_1408FE3D0(0.0);
			v327 = sub_1408FC950(0.0);
			v328 = sub_1408FE3D0(v325);
			v329 = sub_1408FC950(v325);
			v330 = *(_DWORD*)(a1 + 996);
			v371.m128_i32[3] = 0;
			HIDWORD(v372) = 0;
			*(float*)&v370 = v327 * v329;
			*((float*)&v370 + 1) = v326 * v329;
			v371.m128_f32[0] = (float)((float)(v327 * v328) * v326) - (float)(v326 * v327);
			v371.m128_f32[1] = (float)((float)(v326 * v328) * v326) + (float)(v327 * v327);
			v371.m128_f32[2] = v329 * v326;
			*(float*)&v372 = (float)(v326 * v326) + (float)((float)(v327 * v328) * v327);
			*((_QWORD*)&v370 + 1) = COERCE_UNSIGNED_INT(-v328);
			*((float*)&v372 + 2) = v329 * v327;
			v373 = xmmword_140C78440;
			*((float*)&v372 + 1) = (float)((float)(v326 * v328) * v327) - (float)(v327 * v326);
			v331 = sub_140237680(v330);
			v332 = v331;
			if (v331
				&& (v333 = *(_QWORD*)(k + 5864)) != 0
				&& v333 == v322
				&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v333 + 848i64))(
					v333,
					*(unsigned int*)(v331 + 68)))
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, _QWORD))(**(_QWORD**)(k + 5864) + 888i64))(
					*(_QWORD*)(k + 5864),
					*(unsigned int*)(v332 + 68),
					&v366,
					0i64);
				v369.m128_u64[0] = 0i64;
				v369.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0i64, 8));
				v500[0].m128_u64[0] = (unsigned __int64)&v366;
				sub_1401AFC20((__int64*)v500, (double*)v448[0].m128_u64);
				v359.m128_u64[0] = (unsigned __int64)&v370;
				v359.m128_u64[1] = (unsigned __int64)v448;
				sub_1401AFB10((__m128**) & v359, (__m128*) & v370);
				v334 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v320 + 328i64))(*v320);
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v334 + 72i64))(v334, &v370);
			}
			else
			{
				v335 = (__m128) * (unsigned int*)(a1 + 352);
				v360.m128_u64[0] = (unsigned __int64)&v370;
				v366 = xmmword_140C78410;
				v367 = xmmword_140C78420;
				v336 = (__m128) * (unsigned int*)(a1 + 360);
				v360.m128_u64[1] = (unsigned __int64)&v366;
				v368 = xmmword_140C78430;
				v369 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v335, v336),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 356), (__m128)0x3F800000u));
				sub_1401AFB10((__m128**) & v360, (__m128*) & v370);
			}
			v337 = *v320;
			v485 = 0i64;
			v481 = v370;
			v482 = v371;
			v483 = v372;
			v484 = v373;
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v337 + 320i64))(v337, &v481);
		}
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v320 + 152i64))(*v320);
	}
	if (*(_DWORD*)(a1 + 604))
	{
		v338 = *(_QWORD*)(a1 + 112);
		if (!v338
			|| (v475.m128_i32[0] = 0,
				(*(unsigned int(__fastcall**)(__int64, __m128*))(*(_QWORD*)v338 + 40i64))(v338, &v475)))
		{
			*(_DWORD*)(a1 + 604) = 0;
		}
	}
	if (*(_DWORD*)(a1 + 1048) && !*(_DWORD*)(a1 + 712))
		sub_140625C00(a1);
	v339 = *(__int64**)(a1 + 1624);
	if (!v339)
		return 0i64;
	v340 = *(_DWORD*)(a1 + 672);
	v341 = 0;
	if (v340 == 2)
	{
		v342 = *(_QWORD*)(a1 + 128);
		if (v342)
			goto LABEL_377;
	}
	v342 = *(_QWORD*)(a1 + 112);
	if (v342)
	{
		LOBYTE(v341) = v340 != 2;
	LABEL_377:
		v343 = *v339;
		v344 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v342 + 56i64))(v342);
		(*(void(__fastcall**)(__int64*, __int64))(v343 + 88))(v339, v344);
		goto LABEL_379;
	}
	v342 = *(_QWORD*)(a1 + 120);
	if (!v342)
		goto LABEL_379;
	LOBYTE(v341) = v340 != 2;
	if ((_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 400), *(__m128*)(a1 + 416))) & 7) == 0)
		goto LABEL_377;
	v345 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
	v346 = *(__m128*)(a1 + 400);
	v347 = _mm_sub_ps(*(__m128*)(a1 + 416), v346);
	v348 = _mm_mul_ps(v347, v347);
	v348.m128_f32[0] = 1.0
		/ fsqrt(
			(float)(v348.m128_f32[0] + _mm_shuffle_ps(v348, v348, 85).m128_f32[0])
			+ _mm_shuffle_ps(v348, v348, 170).m128_f32[0]);
	v349 = _mm_mul_ps(_mm_shuffle_ps(v348, v348, 0), v347);
	v350 = _mm_mul_ps(v347, v347);
	v351 = _mm_mul_ps(_mm_sub_ps(v346, v345[2]), v349);
	v352 = _mm_shuffle_ps(v351, v351, 85);
	v352.m128_f32[0] = fmaxf(
		0.0,
		fminf(
			(float)(v351.m128_f32[0] + v352.m128_f32[0]) + _mm_shuffle_ps(v351, v351, 170).m128_f32[0],
			fsqrt(
				(float)(v350.m128_f32[0] + _mm_shuffle_ps(v350, v350, 85).m128_f32[0])
				+ _mm_shuffle_ps(v350, v350, 170).m128_f32[0])));
	v475 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v352, v352, 0), v349), v346);
	v354 = sub_14061F3D0(v353, (__int64)v459, (__m128*)(a1 + 416), (__m128*)(a1 + 400), &v475);
	(*(void(__fastcall**)(__int64, __int64))(v356 + 88))(v355, v354);
LABEL_379:
	if (!*(_DWORD*)(a1 + 712))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 1624) + 16i64))(
			*(_QWORD*)(a1 + 1624),
			*(unsigned int*)(a1 + 1048),
			0i64,
			0i64,
			0i64,
			0i64,
			0i64);
		*(_DWORD*)(a1 + 712) = 1;
	}
	v357 = *(__int64**)(a1 + 1632);
	if (v357)
	{
		v358 = *v357;
		if (v341)
		{
			(*(void (**)(void))(v358 + 64))();
			return 0i64;
		}
		(*(void (**)(void))(v358 + 72))();
	}
	return 0i64;
}
// 14061C608: variable 'v74' is possibly undefined
// 14061C638: variable 'v71' is possibly undefined
// 14061CEF9: variable 'v124' is possibly undefined
// 14061D581: variable 'v165' is possibly undefined
// 14061E303: variable 'v242' is possibly undefined
// 14061E99F: variable 'v281' is possibly undefined
// 14061ED49: variable 'v300' is possibly undefined
// 14061EDBE: variable 'v315' is possibly undefined
// 14061F350: variable 'v353' is possibly undefined
// 14061F35B: variable 'v356' is possibly undefined
// 14061F35B: variable 'v355' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4A8A8: using guessed type int dword_140C4A8A8;
// 140C4E690: using guessed type __int64 (__fastcall **off_140C4E690)();
// 140C4E6A0: using guessed type int dword_140C4E6A0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 14061B900: using guessed type __m128 var_330;
// 14061B900: using guessed type double var_820[8];
// 14061B900: using guessed type __m128 var_7A0[4];
// 14061B900: using guessed type double var_720[8];
// 14061B900: using guessed type __m128 var_1C0[3];
// 14061B900: using guessed type __m128 var_6A0[4];
// 14061B900: using guessed type __m128 var_900[4];
// 14061B900: using guessed type char var_460[64];
// 14061B900: using guessed type __m128 var_8B0[4];
// 14061B900: using guessed type double var_860[8];
// 14061B900: using guessed type __m128 var_7E0[4];
// 14061B900: using guessed type double var_6E0[8];
// 14061B900: using guessed type __m128 var_260[4];
// 14061B900: using guessed type __m128 var_990[4];
// 14061B900: using guessed type __m128 var_950[4];
// 14061B900: using guessed type __m128 var_130[4];

