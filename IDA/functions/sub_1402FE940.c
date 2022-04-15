//----- (00000001402FE940) ----------------------------------------------------
__int64 __fastcall sub_1402FE940(
	__m128* a1,
	__int64 a2,
	__m128* a3,
	float* a4,
	int a5,
	float* a6,
	float a7,
	int a8,
	__m128* a9,
	int a10)
{
	int v10; // edi
	__int64 v11; // r13
	int v13; // eax
	float* v14; // rbx
	__m128* v15; // r12
	int v17; // r15d
	unsigned __int64 v18; // rax
	unsigned __int8 v19; // di
	int v20; // xmm15_4
	unsigned __int64 v21; // rdi
	__m128* v22; // r15
	__int64 v23; // r9
	__m128* v24; // r11
	float v25; // xmm2_4
	unsigned __int64 v26; // rsi
	__int64 v27; // rdx
	unsigned __int64 v28; // rax
	__m128 v29; // xmm1
	__m128 v30; // xmm7
	__m128 v31; // xmm0
	__m128 v32; // xmm6
	float v33; // xmm1_4
	float v34; // xmm0_4
	float v35; // xmm3_4
	float v36; // xmm0_4
	__int64 v37; // rax
	float v38; // xmm0_4
	int v39; // xmm0_4
	int v40; // xmm1_4
	__int64 v41; // rax
	int v42; // xmm2_4
	__int64 v43; // rax
	unsigned __int64 v44; // rdi
	__int64 v45; // rbx
	unsigned int v46; // r10d
	char v47; // r9
	__m128 v48; // xmm4
	__m128 v49; // xmm9
	__m128 v50; // xmm5
	__m128 v51; // xmm10
	__m128 v52; // xmm5
	__m128 v53; // xmm9
	__m128 v54; // xmm9
	__m128 v55; // xmm3
	float v56; // xmm0_4
	__int32 v57; // ecx
	__m128 v58; // xmm4
	__m128 v59; // xmm6
	__m128 v60; // xmm2
	__m128 v61; // xmm3
	float v62; // xmm4_4
	float v63; // xmm0_4
	float v64; // xmm4_4
	float v65; // xmm3_4
	float v66; // xmm1_4
	float v67; // xmm0_4
	float v68; // xmm3_4
	float v69; // xmm2_4
	float v70; // xmm3_4
	float v71; // xmm1_4
	float v72; // xmm0_4
	float v73; // xmm3_4
	float v74; // xmm2_4
	float v75; // xmm3_4
	float v76; // xmm0_4
	float v77; // xmm3_4
	float v78; // xmm2_4
	float v79; // xmm3_4
	float v80; // xmm1_4
	float v81; // xmm0_4
	float v82; // xmm3_4
	float v83; // xmm2_4
	float v84; // xmm3_4
	float v85; // xmm1_4
	float v86; // xmm0_4
	float v87; // xmm3_4
	float v88; // xmm2_4
	float v89; // xmm3_4
	float v90; // xmm0_4
	float v91; // xmm3_4
	float v92; // xmm2_4
	float v93; // xmm3_4
	float v94; // xmm1_4
	float v95; // xmm0_4
	float v96; // xmm3_4
	float v97; // xmm1_4
	float v98; // xmm0_4
	float v99; // xmm2_4
	float v100; // xmm7_4
	float v101; // xmm8_4
	float v102; // xmm1_4
	float v103; // xmm2_4
	float v104; // xmm6_4
	__m128 v105; // xmm0
	__m128 v106; // xmm3
	__m128 v107; // xmm0
	__m128 v108; // xmm2
	__m128 v109; // xmm4
	__m128 v110; // xmm1
	__m128* v111; // rax
	__m128 v112; // xmm8
	__m128 v113; // xmm2
	__m128 v114; // xmm7
	__m128 v115; // xmm1
	__m128 v116; // xmm0
	__m128 v117; // xmm0
	__m128 v118; // xmm2
	unsigned __int64 v119; // rax
	__m128 v120; // xmm0
	float v121; // xmm2_4
	__m128 v122; // xmm8
	float v123; // xmm1_4
	float v124; // xmm0_4
	float v125; // xmm3_4
	float v126; // xmm0_4
	__int64 v127; // rax
	float v128; // xmm0_4
	__int64 v129; // r12
	_QWORD* v130; // rbx
	int* v131; // rax
	int* v132; // rcx
	unsigned __int64 v133; // rsi
	unsigned __int64 v134; // r13
	unsigned __int64 v135; // r12
	__int64 v136; // r15
	__int64 v137; // rdi
	unsigned __int64 v138; // rax
	__int64 v139; // rcx
	unsigned int v140; // r10d
	unsigned __int64 v141; // rax
	__int64* v142; // rcx
	void(__fastcall * **v143)(_QWORD); // rcx
	unsigned __int64 v144; // r13
	int* v145; // rsi
	__m128 v146; // xmm1
	__m128 v147; // xmm13
	__m128 v148; // xmm1
	__m128 v149; // xmm14
	__int64 v150; // rax
	int* v151; // rax
	unsigned __int64 v152; // rcx
	__int64 v153; // r15
	__m128 v154; // xmm12
	float* v155; // r13
	float v156; // xmm4_4
	float v157; // xmm6_4
	float v158; // xmm7_4
	float v159; // xmm0_4
	float v160; // xmm4_4
	float v161; // xmm3_4
	float v162; // xmm8_4
	float v163; // xmm9_4
	float v164; // xmm1_4
	float v165; // xmm2_4
	float v166; // xmm0_4
	float v167; // xmm3_4
	float v168; // xmm5_4
	float v169; // xmm4_4
	float v170; // xmm2_4
	float v171; // xmm3_4
	float v172; // xmm1_4
	float v173; // xmm0_4
	float v174; // xmm5_4
	float v175; // xmm2_4
	float v176; // xmm5_4
	float v177; // xmm0_4
	float v178; // xmm5_4
	float v179; // xmm2_4
	float v180; // xmm5_4
	float v181; // xmm1_4
	float v182; // xmm0_4
	float v183; // xmm5_4
	float v184; // xmm2_4
	float v185; // xmm5_4
	float v186; // xmm1_4
	float v187; // xmm0_4
	float v188; // xmm5_4
	float v189; // xmm2_4
	float v190; // xmm5_4
	float v191; // xmm0_4
	float v192; // xmm5_4
	float v193; // xmm2_4
	float v194; // xmm5_4
	float v195; // xmm1_4
	float v196; // xmm0_4
	float v197; // xmm5_4
	float v198; // xmm1_4
	float v199; // xmm0_4
	float v200; // xmm2_4
	float v201; // xmm4_4
	float v202; // xmm3_4
	float v203; // xmm1_4
	float v204; // xmm2_4
	float v205; // xmm4_4
	__m128 v206; // xmm0
	__m128 v207; // xmm2
	__m128 v208; // xmm1
	unsigned __int64 v209; // rax
	float v210; // xmm2_4
	float v211; // xmm1_4
	float v212; // xmm0_4
	float v213; // xmm3_4
	float v214; // xmm0_4
	unsigned __int64 i; // rax
	float v216; // xmm0_4
	unsigned __int64 v217; // r9
	unsigned __int64 v218; // r15
	__int64 v219; // rbx
	_QWORD* v220; // rdi
	__int64 v221; // r12
	unsigned __int64 v222; // rsi
	int v223; // r11d
	__int64 v224; // rax
	__int64 v225; // rcx
	int v226; // r10d
	__int64 v227; // rcx
	__m128* v228; // rcx
	__int64 v229; // rdx
	__m128 v230; // xmm1
	__m128 v231; // xmm1
	__m128 v232; // xmm6
	__m128 v233; // xmm7
	__m128 v234; // xmm8
	__m128 v235; // xmm9
	__m128 v236; // xmm9
	unsigned __int8 v237; // r8
	__int64 v238; // rax
	__m128* v239; // rcx
	__m128 v240; // xmm1
	__m128 v241; // xmm1
	__m128 v242; // xmm5
	__m128 v243; // xmm3
	__m128 v244; // xmm4
	unsigned __int64 v245; // rsi
	__int64 v246; // rdx
	unsigned __int8 v247; // al
	unsigned __int64 v248; // r8
	int* v249; // r9
	unsigned __int64 v250; // rdx
	unsigned __int64 v251; // rdi
	__m128 v252; // xmm4
	__int64 v253; // rcx
	__m128 v254; // xmm1
	volatile signed __int64* v255; // roff
	unsigned __int64 v256; // r10
	unsigned __int64 v257; // r9
	__int64 v258; // rbx
	_QWORD* v259; // r8
	__int64 v260; // r12
	unsigned __int64 v261; // r15
	int v262; // esi
	__int64 v263; // rax
	__int64 v264; // rcx
	int v265; // r11d
	__int64 v266; // rcx
	__m128* v267; // rcx
	__int64 v268; // rdx
	__m128 v269; // xmm1
	__m128 v270; // xmm1
	__m128 v271; // xmm6
	__m128 v272; // xmm7
	__m128 v273; // xmm8
	__m128 v274; // xmm9
	unsigned __int8 v275; // di
	__int64 v276; // rax
	__m128* v277; // rcx
	__m128 v278; // xmm2
	__m128 v279; // xmm2
	__m128 v280; // xmm1
	__m128 v281; // xmm4
	__m128 v282; // xmm3
	unsigned __int64 v283; // rdi
	__int64 v284; // rdx
	__m128 v285; // xmm1
	__m128 v286; // xmm1
	__m128 v287; // xmm6
	__m128 v288; // xmm7
	__m128 v289; // xmm8
	__int64 v290; // r9
	__int64 v291; // r8
	__int64 v292; // r10
	__m128 v293; // xmm2
	__m128 v294; // xmm0
	int* v295; // r11
	__int64 v296; // rdx
	char v297; // di
	__m128 v298; // xmm2
	__m128 v299; // xmm3
	__m128 v300; // xmm1
	__m128 v301; // xmm6
	__m128 v302; // xmm4
	__m128 v303; // xmm0
	__m128 v304; // xmm6
	__m128 v305; // xmm5
	__m128 v306; // xmm3
	__m128 v307; // xmm1
	char v308; // al
	bool v309; // zf
	__int64 v310; // rcx
	__int64 v311; // rax
	float v312; // xmm11_4
	unsigned __int64 v313; // r8
	unsigned __int64 v314; // r9
	float v315; // xmm11_4
	__m128 v316; // xmm13
	unsigned __int16* v317; // r8
	__int64 v318; // rcx
	__int64 v319; // rdx
	__int64 v320; // rdi
	__m128 v321; // xmm7
	__m128 v322; // xmm6
	__m128 v323; // xmm5
	__m128 v324; // xmm2
	__m128 v325; // xmm4
	float v326; // xmm4_4
	__m128 v327; // xmm3
	__m128 v328; // xmm7
	float v329; // xmm7_4
	__m128 v330; // xmm2
	__m128 v331; // xmm8
	float v332; // xmm8_4
	__m128 v333; // xmm1
	float v334; // xmm1_4
	__m128* v335; // rax
	__m128 v336; // xmm4
	__m128 v337; // xmm3
	float v338; // xmm1_4
	unsigned __int64 v339; // rdi
	unsigned int v340; // edx
	__int64 v341; // rax
	__int64 v342; // rcx
	__m128i v343; // xmm0
	__m128 v344; // xmm3
	__m128i v345; // xmm0
	__m128 v346; // xmm0
	__m128 v347; // xmm1
	__m128 v348; // xmm0
	__m128 v349; // xmm1
	unsigned __int64 v350; // r10
	unsigned __int64 v351; // rsi
	_DWORD* v352; // r10
	__int64 v353; // r8
	__int64 v354; // r9
	__int64 v355; // rdi
	__m128* v356; // rdi
	__m128* v357; // r8
	__m128* v358; // r9
	__m128* v359; // rax
	__m128 v360; // xmm4
	__m128 v361; // xmm5
	__m128 v362; // xmm3
	float v363; // xmm1_4
	unsigned __int64 v364; // rdi
	unsigned int v365; // edx
	__int64 v366; // rax
	__int64 v367; // rcx
	__m128i v368; // xmm0
	__m128 v369; // xmm3
	__m128i v370; // xmm0
	unsigned __int64 v371; // r10
	__int64 v372; // r11
	__int64 v373; // r9
	unsigned __int64 v374; // rax
	__int64 v375; // rsi
	__int64 v376; // rdx
	__int64 v377; // r8
	__int8* v378; // rdi
	__int64 v379; // rdx
	__int64 v380; // rcx
	__int32* v381; // rdi
	unsigned __int64 k; // rdi
	int v383; // xmm0_4
	__int64 v384; // rax
	int* v386; // [rsp+58h] [rbp-A8h]
	__int64 v387; // [rsp+60h] [rbp-A0h]
	int v388[4]; // [rsp+70h] [rbp-90h]
	__m128 v389; // [rsp+80h] [rbp-80h]
	__m128 v390; // [rsp+90h] [rbp-70h]
	__m128 v391; // [rsp+A0h] [rbp-60h]
	__m128 v392; // [rsp+B0h] [rbp-50h]
	_QWORD* v393; // [rsp+C0h] [rbp-40h]
	float* v394; // [rsp+C8h] [rbp-38h]
	int* v395; // [rsp+D0h] [rbp-30h]
	unsigned __int64 v396; // [rsp+D8h] [rbp-28h]
	int v397; // [rsp+E0h] [rbp-20h] BYREF
	int v398; // [rsp+E4h] [rbp-1Ch]
	unsigned int v399; // [rsp+E8h] [rbp-18h] BYREF
	float v400; // [rsp+ECh] [rbp-14h] BYREF
	float v401; // [rsp+F0h] [rbp-10h] BYREF
	unsigned int v402; // [rsp+F4h] [rbp-Ch] BYREF
	int v403; // [rsp+F8h] [rbp-8h]
	int v404; // [rsp+FCh] [rbp-4h]
	int v405[2]; // [rsp+100h] [rbp+0h]
	int v406[6]; // [rsp+108h] [rbp+8h] BYREF
	__m128 v407; // [rsp+120h] [rbp+20h] BYREF
	__m128 v408; // [rsp+130h] [rbp+30h]
	__m128* v409; // [rsp+140h] [rbp+40h]
	__int64 v410; // [rsp+148h] [rbp+48h]
	int* v411; // [rsp+150h] [rbp+50h]
	__m128 v412; // [rsp+160h] [rbp+60h] BYREF
	int v413[12]; // [rsp+170h] [rbp+70h] BYREF
	__m128 v414; // [rsp+1A0h] [rbp+A0h] BYREF
	float* v415; // [rsp+1B0h] [rbp+B0h]
	__m128 v416; // [rsp+1C0h] [rbp+C0h]
	unsigned __int64 v417; // [rsp+1D0h] [rbp+D0h]
	__m128 v418; // [rsp+1E0h] [rbp+E0h]
	__int64 v419[2]; // [rsp+1F0h] [rbp+F0h] BYREF
	__m128 v420; // [rsp+200h] [rbp+100h]
	__int64 v421; // [rsp+210h] [rbp+110h] BYREF
	__int64 v422; // [rsp+218h] [rbp+118h]
	float v423; // [rsp+220h] [rbp+120h]
	__int64 v424; // [rsp+228h] [rbp+128h] BYREF
	__m128 v425; // [rsp+230h] [rbp+130h]
	__m128 v426; // [rsp+240h] [rbp+140h]
	__int128 v427; // [rsp+250h] [rbp+150h]
	__m128 v428; // [rsp+260h] [rbp+160h] BYREF
	__int64 v429; // [rsp+270h] [rbp+170h]
	__int64 v430; // [rsp+278h] [rbp+178h]
	__int128 v431[3]; // [rsp+280h] [rbp+180h] BYREF
	int v432; // [rsp+2B0h] [rbp+1B0h]
	unsigned int* v433; // [rsp+2B8h] [rbp+1B8h]
	__int64 v434; // [rsp+2C0h] [rbp+1C0h]
	__m128 v435; // [rsp+2D0h] [rbp+1D0h] BYREF
	__m128 v436; // [rsp+2E0h] [rbp+1E0h]
	__m128 v437; // [rsp+2F0h] [rbp+1F0h]
	__m128 v438; // [rsp+300h] [rbp+200h]
	__m128 v439; // [rsp+310h] [rbp+210h] BYREF
	__m128 v440; // [rsp+320h] [rbp+220h] BYREF
	__int128 v441; // [rsp+330h] [rbp+230h]
	int v442[4]; // [rsp+340h] [rbp+240h] BYREF
	__m128 v443; // [rsp+350h] [rbp+250h] BYREF
	__m128 v444; // [rsp+360h] [rbp+260h]
	__m128 v445; // [rsp+370h] [rbp+270h]
	__m128 v446; // [rsp+380h] [rbp+280h]
	__m128 v447; // [rsp+390h] [rbp+290h]
	__m128 v448; // [rsp+3A0h] [rbp+2A0h] BYREF
	__m128 v449; // [rsp+3B0h] [rbp+2B0h]
	__m128 v450; // [rsp+3C0h] [rbp+2C0h]
	__m128 v451; // [rsp+3D0h] [rbp+2D0h]
	__m128 v452; // [rsp+3E0h] [rbp+2E0h]
	__m128 v453; // [rsp+3F0h] [rbp+2F0h]
	__m128 v454; // [rsp+400h] [rbp+300h]
	__m128 v455; // [rsp+410h] [rbp+310h]
	__m128 v456; // [rsp+420h] [rbp+320h]
	__m128 v457; // [rsp+430h] [rbp+330h]
	__m128 v458; // [rsp+440h] [rbp+340h]
	__m128 v459; // [rsp+450h] [rbp+350h]
	__m128 v460; // [rsp+460h] [rbp+360h]
	__m128 v461; // [rsp+470h] [rbp+370h]
	__m128 v462; // [rsp+480h] [rbp+380h]
	__m128 v463; // [rsp+490h] [rbp+390h]
	__m128 v464; // [rsp+4A0h] [rbp+3A0h]
	__m128 v465; // [rsp+4B0h] [rbp+3B0h]
	__m128 v466; // [rsp+4C0h] [rbp+3C0h]
	__m128 v467; // [rsp+4D0h] [rbp+3D0h]
	__m128 v468; // [rsp+4E0h] [rbp+3E0h]
	__m128 v469; // [rsp+4F0h] [rbp+3F0h]
	__m128 v470; // [rsp+500h] [rbp+400h]
	__m128 v471; // [rsp+510h] [rbp+410h]
	__m128 v472; // [rsp+520h] [rbp+420h]
	__m128 v473; // [rsp+530h] [rbp+430h]
	__m128 v474; // [rsp+540h] [rbp+440h]
	__m128 v475; // [rsp+550h] [rbp+450h]
	__m128 v476; // [rsp+560h] [rbp+460h]
	__m128 v477; // [rsp+570h] [rbp+470h]
	__m128 v478; // [rsp+580h] [rbp+480h]
	__m128 v479; // [rsp+590h] [rbp+490h]
	__m128 v480; // [rsp+5A0h] [rbp+4A0h]
	__m128 v481; // [rsp+5B0h] [rbp+4B0h]
	__m128 v482; // [rsp+5C0h] [rbp+4C0h]
	__m128 v483; // [rsp+5D0h] [rbp+4D0h]
	__m128 v484; // [rsp+5E0h] [rbp+4E0h]
	__m128 v485; // [rsp+5F0h] [rbp+4F0h]
	__m128 v486; // [rsp+600h] [rbp+500h]
	__m128 v487; // [rsp+610h] [rbp+510h]
	__m128 v488; // [rsp+620h] [rbp+520h]
	__m128 v489; // [rsp+630h] [rbp+530h]
	__m128 v490; // [rsp+640h] [rbp+540h]
	__m128 v491; // [rsp+650h] [rbp+550h]
	__m128 v492; // [rsp+660h] [rbp+560h]
	__m128 v493; // [rsp+670h] [rbp+570h]
	__m128 v494; // [rsp+680h] [rbp+580h]
	__m128 v495; // [rsp+690h] [rbp+590h]
	__m128 v496; // [rsp+6A0h] [rbp+5A0h]
	__m128 v497; // [rsp+6B0h] [rbp+5B0h]
	__m128 v498; // [rsp+6C0h] [rbp+5C0h]
	__m128 v499; // [rsp+6D0h] [rbp+5D0h]
	__m128 v500; // [rsp+6E0h] [rbp+5E0h]
	__m128 v501; // [rsp+6F0h] [rbp+5F0h]
	__m128 v502; // [rsp+700h] [rbp+600h]
	__int128 v503; // [rsp+710h] [rbp+610h]
	__m128 v504; // [rsp+720h] [rbp+620h]
	__m128 v505; // [rsp+730h] [rbp+630h]
	__m128 v506; // [rsp+740h] [rbp+640h]
	__m128 v507; // [rsp+750h] [rbp+650h]
	__m128 v508; // [rsp+760h] [rbp+660h]
	__m128 v509; // [rsp+770h] [rbp+670h]
	__m128 v510; // [rsp+780h] [rbp+680h]
	__m128 v511; // [rsp+790h] [rbp+690h]
	__m128 v512; // [rsp+7A0h] [rbp+6A0h]
	__m128 v513; // [rsp+7B0h] [rbp+6B0h]
	__m128 v514; // [rsp+7C0h] [rbp+6C0h]
	__m128 v515; // [rsp+7D0h] [rbp+6D0h]
	__m128 v516; // [rsp+7E0h] [rbp+6E0h]
	__m128 v517; // [rsp+7F0h] [rbp+6F0h]
	__m128 v518; // [rsp+800h] [rbp+700h]
	__m128 v519; // [rsp+810h] [rbp+710h]
	__m128 v520; // [rsp+820h] [rbp+720h]
	__m128 v521; // [rsp+830h] [rbp+730h]
	__m128 v522; // [rsp+840h] [rbp+740h]
	__m128 v523; // [rsp+850h] [rbp+750h]
	__m128 v524; // [rsp+860h] [rbp+760h]
	__m128 v525; // [rsp+870h] [rbp+770h]
	__m128 v526; // [rsp+880h] [rbp+780h]
	__m128 v527; // [rsp+890h] [rbp+790h]
	__m128 v528; // [rsp+8A0h] [rbp+7A0h]
	__m128 v529; // [rsp+8B0h] [rbp+7B0h]
	__m128 v530; // [rsp+8C0h] [rbp+7C0h]
	__m128 v531; // [rsp+8D0h] [rbp+7D0h]
	__m128 v532; // [rsp+8E0h] [rbp+7E0h]
	__m128 v533; // [rsp+8F0h] [rbp+7F0h]
	__m128 v534; // [rsp+900h] [rbp+800h]
	__m128 v535; // [rsp+910h] [rbp+810h]
	__m128 v536; // [rsp+920h] [rbp+820h]
	__m128 v537; // [rsp+930h] [rbp+830h]
	__m128 v538; // [rsp+940h] [rbp+840h]
	__m128 v539; // [rsp+950h] [rbp+850h]
	__m128 v540; // [rsp+960h] [rbp+860h]
	__m128 v541; // [rsp+970h] [rbp+870h]
	__m128 j; // [rsp+980h] [rbp+880h]
	__m128 v543; // [rsp+990h] [rbp+890h]
	__m128 v544; // [rsp+9A0h] [rbp+8A0h]
	__m128 v545; // [rsp+9B0h] [rbp+8B0h]
	__m128 v546; // [rsp+9C0h] [rbp+8C0h]
	__m128 v547; // [rsp+9D0h] [rbp+8D0h]
	__m128 v548; // [rsp+9E0h] [rbp+8E0h]
	__m128 v549; // [rsp+9F0h] [rbp+8F0h]
	__m128 v550; // [rsp+A00h] [rbp+900h]
	__m128* v551; // [rsp+A10h] [rbp+910h] BYREF

	v10 = dword_140C421A0;
	v11 = (__int64)a9;
	v415 = a6;
	v13 = *(_DWORD*)qword_140C63750;
	v14 = a4;
	v394 = a4;
	if (v13 < dword_140C421A0)
		v10 = v13;
	v15 = (__m128*)a2;
	v409 = (__m128*)a2;
	if (!byte_140C421B0[v10] && (a1[2].m128_i8[8] & 4) != 0)
		return 0i64;
	v17 = a10;
	if (a10)
	{
		v18 = a1->m128_u64[0];
		v442[0] = -1;
		(*(void(__fastcall**)(__m128*, int*, _QWORD))(v18 + 16))(a1, v442, 0i64);
	}
	v19 = a5;
	v20 = *((int*)v14 + 1);
	if ((a5 & 4) == 0)
	{
		if ((int)sub_140300DD0((__int64)a1, 0xAu) >= 0)
		{
			(*(void(__fastcall**)(__m128*, __m128*))(a1->m128_u64[0] + 1200))(a1, &v407);
			if (v407.m128_f32[0] >= v408.m128_f32[0]
				|| v407.m128_f32[1] >= v408.m128_f32[1]
				|| v407.m128_f32[2] >= v408.m128_f32[2])
			{
				v104 = a7;
			LABEL_255:
				v24 = a3;
			}
			else
			{
				v58 = (__m128)a1[82].m128_u32[0];
				v59 = (__m128)a1[82].m128_u32[2];
				v60 = _mm_unpacklo_ps((__m128)a1[82].m128_u32[1], (__m128)0i64);
				v390 = _mm_unpacklo_ps(_mm_unpacklo_ps(v58, v59), v60);
				v61 = v58;
				v62 = a1[79].m128_f32[0];
				v392 = _mm_unpacklo_ps(_mm_unpacklo_ps(v61, v59), v60);
				if (v62 <= 0.0)
				{
					v63 = v62 * v408.m128_f32[0];
					v64 = v62 * v407.m128_f32[0];
				}
				else
				{
					v63 = v62 * v407.m128_f32[0];
					v64 = v62 * v408.m128_f32[0];
				}
				v65 = a1[80].m128_f32[0];
				v66 = v390.m128_f32[0] + v63;
				if (v65 <= 0.0)
				{
					v67 = v65 * v408.m128_f32[1];
					v68 = v65 * v407.m128_f32[1];
				}
				else
				{
					v67 = v65 * v407.m128_f32[1];
					v68 = v65 * v408.m128_f32[1];
				}
				v69 = (float)(v392.m128_f32[0] + v64) + v68;
				v70 = a1[81].m128_f32[0];
				v71 = v66 + v67;
				if (v70 <= 0.0)
				{
					v72 = v70 * v408.m128_f32[2];
					v73 = v70 * v407.m128_f32[2];
				}
				else
				{
					v72 = v70 * v407.m128_f32[2];
					v73 = v70 * v408.m128_f32[2];
				}
				v74 = v69 + v73;
				v75 = a1[79].m128_f32[1];
				v392.m128_f32[0] = v74;
				v390.m128_f32[0] = v71 + v72;
				if (v75 <= 0.0)
				{
					v76 = v75 * v408.m128_f32[0];
					v77 = v75 * v407.m128_f32[0];
				}
				else
				{
					v76 = v75 * v407.m128_f32[0];
					v77 = v75 * v408.m128_f32[0];
				}
				v78 = v392.m128_f32[1] + v77;
				v79 = a1[80].m128_f32[1];
				v80 = v390.m128_f32[1] + v76;
				if (v79 <= 0.0)
				{
					v81 = v79 * v408.m128_f32[1];
					v82 = v79 * v407.m128_f32[1];
				}
				else
				{
					v81 = v79 * v407.m128_f32[1];
					v82 = v79 * v408.m128_f32[1];
				}
				v83 = v78 + v82;
				v84 = a1[81].m128_f32[1];
				v85 = v80 + v81;
				if (v84 <= 0.0)
				{
					v86 = v84 * v408.m128_f32[2];
					v87 = v84 * v407.m128_f32[2];
				}
				else
				{
					v86 = v84 * v407.m128_f32[2];
					v87 = v84 * v408.m128_f32[2];
				}
				v88 = v83 + v87;
				v89 = a1[79].m128_f32[2];
				v392.m128_f32[1] = v88;
				v390.m128_f32[1] = v85 + v86;
				if (v89 <= 0.0)
				{
					v90 = v89 * v408.m128_f32[0];
					v91 = v89 * v407.m128_f32[0];
				}
				else
				{
					v90 = v89 * v407.m128_f32[0];
					v91 = v89 * v408.m128_f32[0];
				}
				v92 = v392.m128_f32[2] + v91;
				v93 = a1[80].m128_f32[2];
				v94 = v390.m128_f32[2] + v90;
				if (v93 <= 0.0)
				{
					v95 = v93 * v408.m128_f32[1];
					v96 = v93 * v407.m128_f32[1];
				}
				else
				{
					v95 = v93 * v407.m128_f32[1];
					v96 = v93 * v408.m128_f32[1];
				}
				v97 = v94 + v95;
				v98 = a1[81].m128_f32[2];
				v99 = v92 + v96;
				v100 = v407.m128_f32[2] * v98;
				v101 = v408.m128_f32[2] * v98;
				if (v98 <= 0.0)
				{
					v102 = v97 + v101;
					v103 = v99 + v100;
				}
				else
				{
					v102 = v97 + v100;
					v103 = v99 + v101;
				}
				v104 = a7;
				v390.m128_f32[2] = v102;
				v392.m128_f32[2] = v103;
				v105 = _mm_add_ps(v390, v392);
				v106 = _mm_mul_ps((__m128)xmmword_140B7AC50, v105);
				v498 = v105;
				v107 = (__m128)xmmword_140B7B2C0;
				v497 = v106;
				v108 = _mm_sub_ps(v390, v106);
				v499 = _mm_sub_ps(v392, v106);
				v502 = v499;
				v527 = _mm_mul_ps((__m128)xmmword_140B7B2C0, v499);
				v505 = v527;
				v109 = _mm_add_ps(v527, v106);
				v549 = _mm_mul_ps((__m128)xmmword_140B7B2C0, v108);
				v504 = v549;
				v525 = v108;
				v110 = _mm_add_ps(v549, v106);
				v518 = v110;
				v507 = v110;
				v407 = v110;
				v501 = v108;
				v454 = v109;
				v508 = v109;
				v408 = v109;
				if (a7 != 0.0)
				{
					v107.m128_f32[0] = a7;
					v456 = _mm_shuffle_ps(v107, v107, 0);
					v494 = _mm_add_ps(v109, v456);
					v458 = _mm_sub_ps(v110, v456);
					v510 = v458;
					v511 = v494;
				}
				v111 = (__m128*)a1[1].m128_u64[0];
				v24 = a3;
				v112 = v111[18];
				v113 = *a3;
				v114 = _mm_add_ps(
					v112,
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 85), v111[16]),
							_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 0), v111[15])),
						_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 170), v111[17])));
				v115 = _mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v111[15]);
				v116 = _mm_shuffle_ps(*a3, *a3, 85);
				v447 = v114;
				v412 = v114;
				v117 = _mm_mul_ps(v116, v111[16]);
				v118 = _mm_mul_ps(_mm_shuffle_ps(v113, v113, 170), v111[17]);
				v119 = 0i64;
				v120 = _mm_add_ps(_mm_add_ps(v117, v115), v118);
				v121 = -*(float*)&dword_140C3E928;
				v122 = _mm_add_ps(v112, v120);
				v533 = v122;
				v416 = _mm_sub_ps(v122, v114);
				do
				{
					v123 = v412.m128_f32[v119];
					v124 = v407.m128_f32[v119];
					if (v123 >= v124 && (v124 = v408.m128_f32[v119], v123 <= v124))
					{
						v126 = 0.0;
						v413[v119 + 2] = 0;
					}
					else
					{
						v125 = v416.m128_f32[v119];
						if (v125 == 0.0)
							goto LABEL_256;
						v126 = (float)(v124 - v123) / v125;
						*(float*)&v413[v119 + 2] = v126;
					}
					if (v121 < v126)
						v121 = v126;
					++v119;
				} while (v119 < 3);
				v127 = 0i64;
				while (1)
				{
					if (v121 > *(float*)&v413[v127 + 2])
					{
						v128 = (float)(v121 * v416.m128_f32[v127]) + v412.m128_f32[v127];
						if (v128 < v407.m128_f32[v127] || v128 > v408.m128_f32[v127])
							break;
					}
					if ((unsigned __int64)++v127 >= 3)
					{
						v423 = v121;
						if (v121 >= *(float*)&v20)
							break;
						v129 = *(_QWORD*)(a1[3].m128_u64[1] + 64);
						v130 = 0i64;
						v387 = v129;
						v393 = 0i64;
						sub_14003D8F0(v419, (__int64)&a1[111]);
						if (!a1[113].m128_u64[0])
						{
							v131 = sub_14018B280(72i64, 0);
							v132 = v131;
							if (v131)
							{
								*(_QWORD*)v131 = off_140B55048;
								v131[2] = 1;
								*(_QWORD*)v131 = off_140B63930;
								*((_QWORD*)v131 + 3) = 0i64;
								*((_QWORD*)v131 + 2) = 0i64;
								*((_QWORD*)v131 + 5) = 0i64;
								*((_QWORD*)v131 + 4) = 0i64;
								*((_QWORD*)v131 + 7) = 0i64;
								*((_QWORD*)v131 + 6) = 0i64;
							}
							else
							{
								v132 = 0i64;
							}
							a1[113].m128_u64[0] = (unsigned __int64)v132;
							sub_140306840((__int64*)v132 + 2, *(unsigned int*)(v129 + 128));
							sub_140306840((__int64*)(a1[113].m128_u64[0] + 32), *(unsigned int*)(v129 + 128));
							v133 = 0i64;
							v134 = 0i64;
							v135 = 0i64;
							if (*(_DWORD*)(v387 + 128))
							{
								v136 = 0i64;
								do
								{
									v137 = v136 + *(_QWORD*)(v387 + 136);
									v421 = v137;
									if ((*(_BYTE*)(v137 + 57) & 3) != 0)
									{
										v138 = a1[4].m128_u64[0];
										v139 = *(unsigned __int16*)(v137 + 30);
										if (((unsigned int)v139 >= *(_DWORD*)(v138 + 512)
											|| sub_1407B07D0(
												(_QWORD*)(a1[76].m128_u64[1] + 1040),
												*(unsigned __int16*)(*(_QWORD*)(v138 + 520) + 4 * v139))
											&& sub_1407B07D0((__m128*)a1[65].m128_u64, v140))
											&& *(_WORD*)(96i64 * *(unsigned __int16*)(v137 + 24) + a1[31].m128_u64[0] + 52)
											&& ((*(_BYTE*)(v137 + 56) & 4) == 0 || (*(_BYTE*)(a1[1].m128_u64[0] + 232) & 2) == 0))
										{
											v141 = *(unsigned int*)(v137 + 12);
											v134 += v141;
											if (v133 < v141)
												v133 = *(unsigned int*)(v137 + 12);
											sub_140033260((__int64*)(a1[113].m128_u64[0] + 16), &v421);
											v142 = (__int64*)(a1[113].m128_u64[0] + 32);
											v424 = 0i64;
											sub_140033260(v142, &v424);
										}
									}
									++v135;
									v136 += 112i64;
								} while (v135 < *(unsigned int*)(v387 + 128));
								v19 = a5;
								v130 = 0i64;
							}
							sub_1402626B0((__int64*)(a1[113].m128_u64[0] + 48), v134);
							v129 = v387;
							*(_QWORD*)(a1[113].m128_u64[0] + 64) = v133;
						}
						v143 = (void(__fastcall***)(_QWORD))a1[113].m128_u64[0];
						if (v143)
						{
							(**v143)(v143);
							v130 = (_QWORD*)a1[113].m128_u64[0];
							v393 = v130;
						}
						sub_14003D880(v419);
						if (v130[8])
						{
							v444 = _mm_sub_ps(v122, v114);
							v414 = v444;
							sub_1401AE000(&v440, &v439, &v414);
							v144 = v130[3];
							v145 = (int*)v130[6];
							v417 = v144;
							v386 = v145;
							v146 = _mm_mul_ps(v440, v114);
							v146.m128_f32[0] = (float)(v146.m128_f32[0] + _mm_shuffle_ps(v146, v146, 85).m128_f32[0])
								+ _mm_shuffle_ps(v146, v146, 170).m128_f32[0];
							v147 = _mm_unpacklo_ps(
								_mm_unpacklo_ps(v440, _mm_shuffle_ps(v440, v440, 170)),
								_mm_unpacklo_ps(_mm_shuffle_ps(v440, v440, 85), _mm_xor_ps(v146, (__m128)0x80000000)));
							v427 = (__int128)v147;
							v460 = v147;
							v148 = _mm_mul_ps(v439, v114);
							v441 = (__int128)v147;
							v148.m128_f32[0] = (float)(v148.m128_f32[0] + _mm_shuffle_ps(v148, v148, 85).m128_f32[0])
								+ _mm_shuffle_ps(v148, v148, 170).m128_f32[0];
							v149 = _mm_unpacklo_ps(
								_mm_unpacklo_ps(v439, _mm_shuffle_ps(v439, v439, 170)),
								_mm_unpacklo_ps(_mm_shuffle_ps(v439, v439, 85), _mm_xor_ps(v148, (__m128)0x80000000)));
							v496 = v149;
							v445 = v149;
							if (a7 == 0.0)
							{
								v395 = 0i64;
							}
							else
							{
								v150 = 16i64 * v130[8];
								if (!is_mul_ok(v130[8], 0x10ui64))
									v150 = -1i64;
								v395 = sub_14018B280(v150, 8u);
							}
							v151 = sub_14018B280(v130[8], 8u);
							v152 = 0i64;
							v153 = (__int64)v151;
							v411 = v151;
							v396 = 0i64;
							if (v144)
							{
								v154 = v414;
								do
								{
									v155 = *(float**)(v130[2] + 8 * v152);
									v410 = *(_QWORD*)(a1[4].m128_u64[0] + 440) + 2i64 * *((unsigned __int16*)v155 + 8);
									if ((v19 & *((_BYTE*)v155 + 57)) != 0)
									{
										v156 = a1[79].m128_f32[0];
										v157 = v155[16];
										v158 = v155[20];
										v391 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)a1[82].m128_u32[0], (__m128)a1[82].m128_u32[2]),
											_mm_unpacklo_ps((__m128)a1[82].m128_u32[1], (__m128)0i64));
										v389 = v391;
										if (v156 <= 0.0)
										{
											v159 = v156 * v158;
											v160 = v156 * v157;
										}
										else
										{
											v159 = v156 * v157;
											v160 = v156 * v158;
										}
										v161 = a1[80].m128_f32[0];
										v162 = v155[17];
										v163 = v155[21];
										v164 = v391.m128_f32[0] + v159;
										v165 = v391.m128_f32[0] + v160;
										if (v161 <= 0.0)
										{
											v166 = v161 * v163;
											v167 = v161 * v162;
										}
										else
										{
											v166 = v161 * v162;
											v167 = v161 * v163;
										}
										v168 = a1[81].m128_f32[0];
										v169 = v155[18];
										v170 = v165 + v167;
										v171 = v155[22];
										v172 = v164 + v166;
										if (v168 <= 0.0)
										{
											v173 = v168 * v171;
											v174 = v168 * v169;
										}
										else
										{
											v173 = v168 * v169;
											v174 = v168 * v171;
										}
										v175 = v170 + v174;
										v176 = a1[79].m128_f32[1];
										v389.m128_f32[0] = v175;
										v391.m128_f32[0] = v172 + v173;
										if (v176 <= 0.0)
										{
											v177 = v176 * v158;
											v178 = v176 * v157;
										}
										else
										{
											v177 = v176 * v157;
											v178 = v176 * v158;
										}
										v179 = v389.m128_f32[1] + v178;
										v180 = a1[80].m128_f32[1];
										v181 = v391.m128_f32[1] + v177;
										if (v180 <= 0.0)
										{
											v182 = v180 * v163;
											v183 = v180 * v162;
										}
										else
										{
											v182 = v180 * v162;
											v183 = v180 * v163;
										}
										v184 = v179 + v183;
										v185 = a1[81].m128_f32[1];
										v186 = v181 + v182;
										if (v185 <= 0.0)
										{
											v187 = v185 * v171;
											v188 = v185 * v169;
										}
										else
										{
											v187 = v185 * v169;
											v188 = v185 * v171;
										}
										v189 = v184 + v188;
										v190 = a1[79].m128_f32[2];
										v389.m128_f32[1] = v189;
										v391.m128_f32[1] = v186 + v187;
										if (v190 <= 0.0)
										{
											v191 = v190 * v158;
											v192 = v190 * v157;
										}
										else
										{
											v191 = v190 * v157;
											v192 = v190 * v158;
										}
										v193 = v389.m128_f32[2] + v192;
										v194 = a1[80].m128_f32[2];
										v195 = v391.m128_f32[2] + v191;
										if (v194 <= 0.0)
										{
											v196 = v194 * v163;
											v197 = v194 * v162;
										}
										else
										{
											v196 = v194 * v162;
											v197 = v194 * v163;
										}
										v198 = v195 + v196;
										v199 = a1[81].m128_f32[2];
										v200 = v193 + v197;
										v201 = v169 * v199;
										v202 = v171 * v199;
										if (v199 <= 0.0)
										{
											v203 = v198 + v202;
											v204 = v200 + v201;
										}
										else
										{
											v203 = v198 + v201;
											v204 = v200 + v202;
										}
										v205 = a7;
										v389.m128_f32[2] = v204;
										v391.m128_f32[2] = v203;
										v462 = _mm_add_ps(v391, v389);
										v206 = _mm_mul_ps(v462, (__m128)xmmword_140B7AC50);
										v521 = v206;
										v464 = _mm_sub_ps(v389, v206);
										v452 = _mm_sub_ps(v391, v206);
										v513 = v452;
										v514 = v464;
										v550 = _mm_mul_ps(v452, (__m128)xmmword_140B7B2C0);
										v516 = v550;
										v207 = _mm_add_ps(v550, v206);
										v466 = _mm_mul_ps(v464, (__m128)xmmword_140B7B2C0);
										v517 = v466;
										v500 = v207;
										v208 = _mm_add_ps(v466, v206);
										v468 = v208;
										v519 = v207;
										v520 = v208;
										v425 = v207;
										v426 = v208;
										if (a7 != 0.0)
										{
											v206.m128_f32[0] = a7;
											v470 = _mm_shuffle_ps(v206, v206, 0);
											v524 = _mm_add_ps(v208, v470);
											v472 = _mm_sub_ps(v207, v470);
											v522 = v472;
											v523 = v524;
										}
										v209 = 0i64;
										v420 = v444;
										v210 = -*(float*)&dword_140C3E928;
										do
										{
											v211 = v412.m128_f32[v209];
											v212 = v425.m128_f32[v209];
											if (v211 >= v212 && (v212 = v426.m128_f32[v209], v211 <= v212))
											{
												v214 = 0.0;
												v413[v209 + 6] = 0;
											}
											else
											{
												v213 = v420.m128_f32[v209];
												if (v213 == 0.0)
													goto LABEL_250;
												v214 = (float)(v212 - v211) / v213;
												*(float*)&v413[v209 + 6] = v214;
											}
											if (v210 < v214)
												v210 = v214;
											++v209;
										} while (v209 < 3);
										for (i = 0i64; i < 3; ++i)
										{
											if (v210 > *(float*)&v413[i + 6])
											{
												v216 = (float)(v210 * v420.m128_f32[i]) + v412.m128_f32[i];
												if (v216 < v425.m128_f32[i] || v216 > v426.m128_f32[i])
													goto LABEL_250;
											}
										}
										if (v210 >= *(float*)&v20)
											goto LABEL_250;
										v217 = *((unsigned int*)v155 + 3);
										v422 = v130[4];
										v218 = *(_QWORD*)(v422 + 8 * v396);
										if (v218 < v217)
										{
											v219 = v410;
											do
											{
												v220 = (_QWORD*)a1[3].m128_u64[1];
												v221 = *((unsigned int*)v155 + 1);
												v222 = a1[51].m128_u64[1];
												v223 = *(_DWORD*)((v218 + v221) * v220[42] + v220[31]);
												v224 = v220[32];
												v225 = v220[43];
												v388[0] = v223;
												v226 = *(_DWORD*)((v218 + v221) * v225 + v224);
												v227 = *(unsigned __int16*)(v219 + 2i64 * (unsigned __int8)v223);
												v404 = v226;
												v228 = (__m128*)(v222 + (v227 << 6));
												v229 = 0i64;
												v230 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)v226);
												v230.m128_f32[0] = v230.m128_f32[0] * 0.0039215689;
												v231 = _mm_shuffle_ps(v230, v230, 0);
												v232 = _mm_mul_ps(*v228, v231);
												v233 = _mm_mul_ps(v228[1], v231);
												v234 = _mm_mul_ps(v228[2], v231);
												v235 = v228[3];
												v435 = v232;
												v436 = v233;
												v437 = v234;
												v236 = _mm_mul_ps(v235, v231);
												v438 = v236;
												do
												{
													v237 = *((_BYTE*)&v404 + v229 + 1);
													if (!v237)
														break;
													v238 = *((unsigned __int8*)v388 + ++v229);
													v239 = (__m128*)(v222 + ((unsigned __int64)*(unsigned __int16*)(v219 + 2 * v238) << 6));
													v240 = (__m128)COERCE_UNSIGNED_INT((float)v237);
													v240.m128_f32[0] = v240.m128_f32[0] * 0.0039215689;
													v241 = _mm_shuffle_ps(v240, v240, 0);
													v242 = v239[3];
													v243 = _mm_mul_ps(v239[1], v241);
													v244 = _mm_mul_ps(v239[2], v241);
													v529 = _mm_mul_ps(*v239, v241);
													v530 = v243;
													v232 = _mm_add_ps(v529, v232);
													v531 = v244;
													v435 = v232;
													v532 = _mm_mul_ps(v242, v241);
													v233 = _mm_add_ps(v243, v233);
													v436 = v233;
													v234 = _mm_add_ps(v244, v234);
													v437 = v234;
													v236 = _mm_add_ps(v532, v236);
													v438 = v236;
												} while ((unsigned __int64)(v229 + 1) < 4);
												v245 = v218 + 1;
												if (v218 + 1 < v217)
												{
													v246 = v245 + v221;
													do
													{
														if (v223 != *(_DWORD*)(v246 * v220[42] + v220[31]))
															break;
														if (v226 != *(_DWORD*)(v246 * v220[43] + v220[32]))
															break;
														++v245;
														++v246;
													} while (v245 < v217);
												}
												v129 = v387;
												if (*(_BYTE*)(v387 + 32) != 1 || (v247 = *(_BYTE*)(v387 + 28), (v247 & 0xF) != 0))
												{
													v248 = v218;
													if (v218 != v245)
													{
														v249 = &v386[4 * v218];
														do
														{
															v250 = a1[3].m128_u64[1];
															v251 = v248 + *((unsigned int*)v155 + 1);
															if (*(_DWORD*)(v250 + 392) == 1)
															{
																v252 = _mm_unpacklo_ps(
																	_mm_unpacklo_ps(
																		(__m128) * (unsigned int*)(*(_QWORD*)(v250 + 216)
																			+ v251 * *(_QWORD*)(v250 + 304)),
																		(__m128) * (unsigned int*)(*(_QWORD*)(v250 + 216)
																			+ v251 * *(_QWORD*)(v250 + 304)
																			+ 8)),
																	_mm_unpacklo_ps(
																		(__m128) * (unsigned int*)(*(_QWORD*)(v250 + 216)
																			+ v251 * *(_QWORD*)(v250 + 304)
																			+ 4),
																		(__m128)0i64));
															}
															else
															{
																v253 = *(_QWORD*)(v250 + 304);
																v503 = xmmword_140B7AB30;
																v474 = _mm_unpacklo_ps(
																	_mm_unpacklo_ps(
																		(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)(v250 + 216)
																			+ v251 * v253)),
																		(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)(v250 + 216)
																			+ v251 * v253
																			+ 4))),
																	_mm_unpacklo_ps(
																		(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(*(_QWORD*)(v250 + 216)
																			+ v251 * v253
																			+ 2)),
																		(__m128)0i64));
																v252 = _mm_mul_ps(v474, (__m128)xmmword_140B7AB30);
															}
															v446 = v252;
															++v248;
															v249 += 4;
															v254 = _mm_add_ps(
																_mm_add_ps(
																	_mm_add_ps(
																		_mm_mul_ps(_mm_shuffle_ps(v252, v252, 0), v232),
																		_mm_mul_ps(_mm_shuffle_ps(v252, v252, 85), v233)),
																	_mm_mul_ps(_mm_shuffle_ps(v252, v252, 170), v234)),
																v236);
															*((__m128*)v249 - 1) = v254;
															v538 = v254;
														} while (v248 != v245);
													}
												}
												else
												{
													sub_1401ADE90(
														(__int64)&v386[4 * v218],
														v245 - v218,
														(__m128*)(*(_QWORD*)(v387 + 64) + 16 * (*(unsigned __int8*)(v387 + 43) + v247 * v218)),
														v247,
														&v435,
														v245 - v218);
												}
												v255 = (volatile signed __int64*)(v422 + 8 * v396);
												_InterlockedCompareExchange64(v255, v245, v218);
												v218 = *v255;
												v217 = *((unsigned int*)v155 + 3);
											} while (*v255 < v217);
											v147 = (__m128)v441;
											v154 = v414;
											v149 = v445;
											v205 = a7;
											v130 = v393;
											v145 = v386;
											v427 = v441;
										}
										if (v205 == 0.0)
										{
											v295 = v145;
										}
										else
										{
											v256 = *((unsigned int*)v155 + 3);
											v257 = 0i64;
											if (*((_DWORD*)v155 + 3))
											{
												v258 = v410;
												do
												{
													v259 = (_QWORD*)a1[3].m128_u64[1];
													v260 = *((unsigned int*)v155 + 1);
													v261 = a1[51].m128_u64[1];
													v262 = *(_DWORD*)((v257 + v260) * v259[42] + v259[31]);
													v263 = v259[32];
													v264 = v259[43];
													v405[0] = v262;
													v265 = *(_DWORD*)((v257 + v260) * v264 + v263);
													v266 = *(unsigned __int16*)(v258 + 2i64 * (unsigned __int8)v262);
													v403 = v265;
													v267 = (__m128*)(v261 + (v266 << 6));
													v268 = 0i64;
													v269 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)v265);
													v269.m128_f32[0] = v269.m128_f32[0] * 0.0039215689;
													v270 = _mm_shuffle_ps(v269, v269, 0);
													v271 = _mm_mul_ps(*v267, v270);
													v272 = _mm_mul_ps(v267[1], v270);
													v273 = _mm_mul_ps(v267[2], v270);
													v274 = _mm_mul_ps(v267[3], v270);
													do
													{
														v275 = *((_BYTE*)&v403 + v268 + 1);
														if (!v275)
															break;
														v276 = *((unsigned __int8*)v405 + ++v268);
														v277 = (__m128*)(v261 + ((unsigned __int64)*(unsigned __int16*)(v258 + 2 * v276) << 6));
														v278 = (__m128)COERCE_UNSIGNED_INT((float)v275);
														v278.m128_f32[0] = v278.m128_f32[0] * 0.0039215689;
														v279 = _mm_shuffle_ps(v278, v278, 0);
														v280 = v277[3];
														v281 = _mm_mul_ps(v277[1], v279);
														v282 = _mm_mul_ps(v277[2], v279);
														v534 = _mm_mul_ps(*v277, v279);
														v535 = v281;
														v271 = _mm_add_ps(v534, v271);
														v536 = v282;
														v537 = _mm_mul_ps(v280, v279);
														v272 = _mm_add_ps(v281, v272);
														v273 = _mm_add_ps(v282, v273);
														v274 = _mm_add_ps(v537, v274);
													} while ((unsigned __int64)(v268 + 1) < 4);
													v283 = v257 + 1;
													if (v257 + 1 < v256)
													{
														v284 = v283 + v260;
														do
														{
															if (v262 != *(_DWORD*)(v284 * v259[42] + v259[31]))
																break;
															if (v265 != *(_DWORD*)(v284 * v259[43] + v259[32]))
																break;
															++v283;
															++v284;
														} while (v283 < v256);
													}
													v285 = (__m128)LODWORD(a7);
													v285.m128_f32[0] = a7 * a1[9].m128_f32[1];
													v286 = _mm_shuffle_ps(v285, v285, 0);
													v287 = _mm_mul_ps(v271, v286);
													v288 = _mm_mul_ps(v272, v286);
													v289 = _mm_mul_ps(v273, v286);
													v539 = v287;
													v540 = v288;
													v541 = v289;
													for (j = _mm_mul_ps(v274, v286); v257 < v283; v478 = v294)
													{
														sub_1407B08C0(
															(unsigned __int8*)(*(_QWORD*)(a1[3].m128_u64[1] + 232)
																+ *(_QWORD*)(a1[3].m128_u64[1] + 320)
																* (v257 + *((unsigned int*)v155 + 1))),
															&v443);
														v257 = v290 + 1;
														v291 += 16i64;
														v476 = v443;
														v293 = _mm_add_ps(
															_mm_add_ps(
																_mm_mul_ps(_mm_shuffle_ps(v476, v476, 0), v287),
																_mm_mul_ps(_mm_shuffle_ps(v443, v443, 85), v288)),
															_mm_mul_ps(_mm_shuffle_ps(v443, v443, 170), v289));
														v294 = _mm_add_ps(*(__m128*)(v292 + v291 - 16), v293);
														v506 = v293;
														*(__m128*)(v291 - 16) = v294;
													}
													v256 = *((unsigned int*)v155 + 3);
													v257 = v283;
												} while (v283 < v256);
												v130 = v393;
												v129 = v387;
											}
											v295 = v395;
											v145 = v386;
										}
										v153 = (__int64)v411;
										v296 = 0i64;
										v297 = -1;
										v544 = v147;
										v298 = _mm_sub_ps((__m128)0i64, v149);
										v480 = _mm_sub_ps((__m128)0i64, v147);
										v545 = v480;
										v546 = v149;
										v299 = _mm_unpacklo_ps(v147, v480);
										v300 = _mm_unpackhi_ps(v149, v298);
										v301 = _mm_unpackhi_ps(v147, v480);
										v302 = _mm_shuffle_ps(v301, v300, 238);
										v303 = _mm_unpacklo_ps(v149, v298);
										v304 = _mm_shuffle_ps(v301, v300, 68);
										v526 = v298;
										v547 = v298;
										v305 = _mm_shuffle_ps(v299, v303, 68);
										v306 = _mm_shuffle_ps(v299, v303, 238);
										if (!*((_DWORD*)v155 + 3))
											goto LABEL_249;
										do
										{
											v307 = *(__m128*) & v295[4 * (unsigned int)v296];
											v509 = _mm_add_ps(
												_mm_add_ps(
													_mm_add_ps(
														_mm_mul_ps(_mm_shuffle_ps(v307, v307, 85), v306),
														_mm_mul_ps(_mm_shuffle_ps(v307, v307, 0), v305)),
													_mm_mul_ps(_mm_shuffle_ps(v307, v307, 170), v304)),
												v302);
											v308 = _mm_movemask_ps(v509) & 7;
											*(_BYTE*)(v296 + v153) = v308;
											v296 = (unsigned int)(v296 + 1);
											v297 &= v308;
										} while ((unsigned int)v296 < *((_DWORD*)v155 + 3));
										if (v297)
											goto LABEL_249;
										v309 = *(_BYTE*)(v129 + 109) == 1;
										v310 = *(unsigned int*)v155;
										v311 = *(_QWORD*)(v129 + 120);
										v312 = *(float*)&v20;
										v388[0] = v20;
										if (v309)
										{
											v313 = v311 + 2 * v310;
											v314 = v313 + 2i64 * *((unsigned int*)v155 + 2);
											if (v313 >= v314)
												goto LABEL_249;
											v315 = *(float*)&dword_140C3ED18;
											v316 = v447;
											v317 = (unsigned __int16*)(v313 + 4);
											do
											{
												v318 = *(v317 - 2);
												v319 = *(v317 - 1);
												v320 = *v317;
												if (((unsigned __int8)(*(_BYTE*)(v319 + v153) & *(_BYTE*)(v318 + v153)) & *(_BYTE*)(v320 + v153)) == 0)
												{
													v321 = *(__m128*) & v295[4 * v318];
													v322 = _mm_sub_ps(*(__m128*) & v295[4 * v320], v321);
													v323 = _mm_sub_ps(*(__m128*) & v295[4 * v319], v321);
													v482 = v323;
													v548 = v322;
													v324 = _mm_sub_ps(
														_mm_mul_ps(_mm_shuffle_ps(v322, v322, 210), _mm_shuffle_ps(v154, v154, 201)),
														_mm_mul_ps(_mm_shuffle_ps(v322, v322, 201), _mm_shuffle_ps(v154, v154, 210)));
													v484 = v324;
													v325 = _mm_mul_ps(v323, v324);
													v326 = (float)(v325.m128_f32[0] + _mm_shuffle_ps(v325, v325, 85).m128_f32[0])
														+ _mm_shuffle_ps(v325, v325, 170).m128_f32[0];
													if (v326 >= v315)
													{
														v327 = _mm_sub_ps(v316, v321);
														v512 = v327;
														v328 = _mm_mul_ps(v327, v324);
														v329 = (float)(v328.m128_f32[0] + _mm_shuffle_ps(v328, v328, 85).m128_f32[0])
															+ _mm_shuffle_ps(v328, v328, 170).m128_f32[0];
														if (v329 >= 0.0 && v329 <= v326)
														{
															v330 = _mm_sub_ps(
																_mm_mul_ps(_mm_shuffle_ps(v323, v323, 210), _mm_shuffle_ps(v327, v327, 201)),
																_mm_mul_ps(_mm_shuffle_ps(v323, v323, 201), _mm_shuffle_ps(v327, v327, 210)));
															v486 = v330;
															v331 = _mm_mul_ps(v330, v154);
															v332 = (float)(v331.m128_f32[0] + _mm_shuffle_ps(v331, v331, 85).m128_f32[0])
																+ _mm_shuffle_ps(v331, v331, 170).m128_f32[0];
															if (v332 >= 0.0 && (float)(v329 + v332) <= v326)
															{
																v333 = _mm_mul_ps(v330, v322);
																v334 = (float)((float)(v333.m128_f32[0] + _mm_shuffle_ps(v333, v333, 85).m128_f32[0])
																	+ _mm_shuffle_ps(v333, v333, 170).m128_f32[0])
																	/ v326;
																if (v334 >= *v394 && *(float*)&v20 > v334)
																{
																	*(float*)&v20 = v334;
																	if ((a8 & 2) != 0)
																	{
																		v335 = (__m128*)a1[1].m128_u64[0];
																		v336 = (__m128)0x40400000u;
																		v488 = v323;
																		v528 = v322;
																		v515 = _mm_sub_ps(
																			_mm_mul_ps(
																				_mm_shuffle_ps(v322, v322, 210),
																				_mm_shuffle_ps(v323, v323, 201)),
																			_mm_mul_ps(
																				_mm_shuffle_ps(v322, v322, 201),
																				_mm_shuffle_ps(v323, v323, 210)));
																		v490 = _mm_add_ps(
																			_mm_add_ps(
																				_mm_mul_ps(_mm_shuffle_ps(v515, v515, 85), v335[20]),
																				_mm_mul_ps(_mm_shuffle_ps(v515, v515, 0), v335[19])),
																			_mm_mul_ps(_mm_shuffle_ps(v515, v515, 170), v335[21]));
																		v337 = _mm_mul_ps(v490, v490);
																		v337.m128_f32[0] = (float)(v337.m128_f32[0]
																			+ _mm_shuffle_ps(v337, v337, 85).m128_f32[0])
																			+ _mm_shuffle_ps(v337, v337, 170).m128_f32[0];
																		v338 = 1.0 / fsqrt(v337.m128_f32[0]);
																		v336.m128_f32[0] = fmaxf(
																			(float)((float)(3.0
																				- (float)((float)(v337.m128_f32[0] * v338) * v338))
																				* 0.5)
																			* v338,
																			0.0);
																		v543 = _mm_mul_ps(_mm_shuffle_ps(v336, v336, 0), v490);
																		*a9 = v543;
																	}
																	if ((a8 & 8) != 0)
																	{
																		v339 = a1[3].m128_u64[1];
																		v340 = *((_DWORD*)v155 + 1);
																		v341 = *(_QWORD*)(v339 + 272);
																		v342 = *(_QWORD*)(v339 + 360) * (v340 + *v317);
																		v343 = _mm_unpacklo_epi16(
																			_mm_unpacklo_epi8(
																				_mm_shuffle_epi32(
																					_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v339 + 360)
																						* (v340 + *(v317 - 1))
																						+ v341)),
																					0),
																				(__m128i)0i64),
																			(__m128i)0i64);
																		v492 = _mm_mul_ps(
																			_mm_cvtepi32_ps(
																				_mm_shuffle_epi32(
																					_mm_unpacklo_epi16(
																						_mm_unpacklo_epi8(
																							_mm_shuffle_epi32(
																								_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v339 + 360)
																									* (v340 + *(v317 - 2))
																									+ v341)),
																								0),
																							(__m128i)0i64),
																						(__m128i)0i64),
																					198)),
																			(__m128)xmmword_140B7AB70);
																		v344 = _mm_cvtepi32_ps(_mm_shuffle_epi32(v343, 198));
																		v345 = _mm_unpacklo_epi16(
																			_mm_unpacklo_epi8(
																				_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v342 + v341)), 0),
																				(__m128i)0i64),
																			(__m128i)0i64);
																		v453 = _mm_mul_ps(v344, (__m128)xmmword_140B7AB70);
																		v346 = (__m128)_mm_shuffle_epi32(v345, 198);
																		v461 = _mm_sub_ps(v453, v492);
																		v347 = _mm_cvtepi32_ps((__m128i)v346);
																		v346.m128_f32[0] = v332;
																		v348 = _mm_shuffle_ps(v346, v346, 0);
																		v455 = _mm_mul_ps(v347, (__m128)xmmword_140B7AB70);
																		v457 = _mm_sub_ps(v455, v492);
																		v349 = _mm_mul_ps(v457, v348);
																		v348.m128_f32[0] = v329;
																		v459 = v349;
																		v463 = _mm_mul_ps(v461, _mm_shuffle_ps(v348, v348, 0));
																		v465 = _mm_add_ps(v463, v492);
																		v467 = _mm_add_ps(v349, v465);
																		a9[1] = v467;
																	}
																}
															}
														}
													}
												}
												v317 += 3;
											} while ((unsigned __int64)(v317 - 2) < v314);
											v312 = *(float*)v388;
											v147 = (__m128)v427;
										}
										else
										{
											v350 = v311 + 4 * v310;
											v351 = v350 + 4i64 * *((unsigned int*)v155 + 2);
											if (v350 >= v351)
												goto LABEL_248;
											v352 = (_DWORD*)(v350 + 8);
											do
											{
												v353 = (unsigned int)*(v352 - 2);
												v354 = (unsigned int)*(v352 - 1);
												v355 = (unsigned int)*v352;
												if (((unsigned __int8)(*(_BYTE*)(v153 + v354) & *(_BYTE*)(v153 + v353)) & *(_BYTE*)(v153 + v355)) == 0)
												{
													v356 = (__m128*) & v295[4 * v355];
													if ((unsigned int)sub_1401D7860(
														&v412,
														&v414,
														(__m128*) & v295[4 * v353],
														(__m128*) & v295[4 * v354],
														v356,
														&v400,
														(float*)&v399,
														(float*)&v402))
													{
														if (v400 >= *v394 && *(float*)&v20 > v400)
														{
															*(float*)&v20 = v400;
															if ((a8 & 2) != 0)
															{
																v359 = (__m128*)a1[1].m128_u64[0];
																v360 = (__m128)0x40400000u;
																v361 = _mm_sub_ps(*v356, *v357);
																v471 = _mm_sub_ps(*v358, *v357);
																v469 = v361;
																v473 = _mm_sub_ps(
																	_mm_mul_ps(_mm_shuffle_ps(v361, v361, 210), _mm_shuffle_ps(v471, v471, 201)),
																	_mm_mul_ps(_mm_shuffle_ps(v361, v361, 201), _mm_shuffle_ps(v471, v471, 210)));
																v475 = _mm_add_ps(
																	_mm_add_ps(
																		_mm_mul_ps(_mm_shuffle_ps(v473, v473, 85), v359[20]),
																		_mm_mul_ps(_mm_shuffle_ps(v473, v473, 0), v359[19])),
																	_mm_mul_ps(_mm_shuffle_ps(v473, v473, 170), v359[21]));
																v362 = _mm_mul_ps(v475, v475);
																v362.m128_f32[0] = (float)(v362.m128_f32[0] + _mm_shuffle_ps(v362, v362, 85).m128_f32[0])
																	+ _mm_shuffle_ps(v362, v362, 170).m128_f32[0];
																v363 = 1.0 / fsqrt(v362.m128_f32[0]);
																v360.m128_f32[0] = fmaxf(
																	(float)((float)(3.0
																		- (float)((float)(v362.m128_f32[0] * v363) * v363))
																		* 0.5)
																	* v363,
																	0.0);
																v477 = _mm_mul_ps(_mm_shuffle_ps(v360, v360, 0), v475);
																*a9 = v477;
															}
															if ((a8 & 8) != 0)
															{
																v364 = a1[3].m128_u64[1];
																v365 = *((_DWORD*)v155 + 1);
																v366 = *(_QWORD*)(v364 + 272);
																v367 = *(_QWORD*)(v364 + 360) * (v365 + *v352);
																v368 = _mm_unpacklo_epi16(
																	_mm_unpacklo_epi8(
																		_mm_shuffle_epi32(
																			_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v364 + 360)
																				* (v365 + *(v352 - 1))
																				+ v366)),
																			0),
																		(__m128i)0i64),
																	(__m128i)0i64);
																v479 = _mm_mul_ps(
																	_mm_cvtepi32_ps(
																		_mm_shuffle_epi32(
																			_mm_unpacklo_epi16(
																				_mm_unpacklo_epi8(
																					_mm_shuffle_epi32(
																						_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v364 + 360)
																							* (v365 + *(v352 - 2))
																							+ v366)),
																						0),
																					(__m128i)0i64),
																				(__m128i)0i64),
																			198)),
																	(__m128)xmmword_140B7AB70);
																v369 = _mm_cvtepi32_ps(_mm_shuffle_epi32(v368, 198));
																v370 = _mm_unpacklo_epi16(
																	_mm_unpacklo_epi8(
																		_mm_shuffle_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v367 + v366)), 0),
																		(__m128i)0i64),
																	(__m128i)0i64);
																v481 = _mm_mul_ps(v369, (__m128)xmmword_140B7AB70);
																v489 = _mm_sub_ps(v481, v479);
																v483 = _mm_mul_ps(
																	_mm_cvtepi32_ps(_mm_shuffle_epi32(v370, 198)),
																	(__m128)xmmword_140B7AB70);
																v485 = _mm_sub_ps(v483, v479);
																v487 = _mm_mul_ps(v485, _mm_shuffle_ps((__m128)v402, (__m128)v402, 0));
																v491 = _mm_mul_ps(v489, _mm_shuffle_ps((__m128)v399, (__m128)v399, 0));
																v493 = _mm_add_ps(v491, v479);
																v495 = _mm_add_ps(v487, v493);
																a9[1] = v495;
															}
														}
													}
												}
												v352 += 3;
											} while ((unsigned __int64)(v352 - 2) < v351);
										}
										v129 = v387;
										v130 = v393;
										if (*(float*)&v20 >= v312)
										{
										LABEL_248:
											v145 = v386;
										LABEL_249:
											v19 = a5;
											goto LABEL_250;
										}
										if ((a8 & 4) == 0)
											goto LABEL_245;
										v371 = 4i64;
										v372 = *(_QWORD*)(a1[4].m128_u64[0] + 504);
										v373 = 6i64 * *((unsigned __int16*)v155 + 11);
										v374 = *(unsigned int*)(v372 + 48i64 * *((unsigned __int16*)v155 + 11) + 32);
										if (v374 < 4)
											v371 = (unsigned int)v374;
										v375 = 0i64;
										if (!v371)
											goto LABEL_241;
										v376 = 0i64;
										v377 = (unsigned int)v371;
										v378 = &a9[2].m128_i8[4];
										v375 = (unsigned int)v371;
										do
										{
											v378 += 4;
											v376 += 296i64;
											*((_DWORD*)v378 - 1) = *(_DWORD*)(v376 + *(_QWORD*)(v372 + 8 * v373 + 40) - 4);
											--v377;
										} while (v377);
										if (v371 >= 4)
										{
										LABEL_245:
											v379 = (__int64)a9;
										}
										else
										{
										LABEL_241:
											v379 = (__int64)a9;
											v380 = 4 - v375;
											v381 = &a9[2].m128_i32[v375 + 1];
											while (v380)
											{
												*v381++ = 0;
												--v380;
											}
										}
										v145 = v386;
										v19 = a5;
										if ((a8 & 0x10) != 0)
											*(_DWORD*)(v379 + 52) = a1[13].m128_i32[1];
									}
								LABEL_250:
									v152 = v396 + 1;
									v145 += 4 * *((unsigned int*)v155 + 3);
									v396 = v152;
									v386 = v145;
								} while (v152 < v417);
								v104 = a7;
							}
							sub_14018B900(v153, 0);
							sub_14018B900((__int64)v395, 0);
						}
						(*(void(__fastcall**)(_QWORD*))(*v130 + 8i64))(v130);
						v11 = (__int64)a9;
						v14 = v394;
						v17 = a10;
						v15 = v409;
						goto LABEL_255;
					}
				}
			}
		LABEL_256:
			for (k = a1[77].m128_u64[0]; k; v24 = a3)
			{
				if (!*(_DWORD*)(k + 1200) || *(_QWORD*)(k + 1208))
				{
					v383 = *(_DWORD*)v14;
					v384 = *(_QWORD*)k;
					v413[1] = v20;
					v413[0] = v383;
					if ((*(unsigned int(__fastcall**)(unsigned __int64, __m128*, __m128*, int*, int, float*, float, int, __int64, int))(v384 + 1328))(
						k,
						v15,
						v24,
						v413,
						a5,
						&v401,
						COERCE_FLOAT(LODWORD(v104)),
						a8,
						v11,
						v17))
					{
						if (*(float*)&v20 > v401)
							*(float*)&v20 = v401;
					}
				}
				k = *(_QWORD*)(k + 1248);
			}
			goto LABEL_263;
		}
		return 0i64;
	}
	if ((a1[3].m128_i8[0] & 1) == 0)
		return 0i64;
	v21 = *(_QWORD*)(a1[4].m128_u64[0] + 1176) + ((unsigned __int64)a1[19].m128_u32[2] << 6);
	if (*(_DWORD*)v21)
	{
		v22 = a1 + 5;
		v551 = a1 + 5;
		sub_1401AFC20((__int64*)&v551, (double*)v448.m128_u64);
		v24 = a3;
		v25 = -*(float*)&dword_140C3E928;
		v26 = a1[4].m128_u64[0];
		v27 = v26 + 1200 - (_QWORD)v431;
		v28 = 0i64;
		v29 = *a3;
		v30 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 0), v448),
					_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 85), v449)),
				_mm_mul_ps(_mm_shuffle_ps(*v15, *v15, 170), v450)),
			v451);
		v31 = _mm_shuffle_ps(*a3, *a3, 85);
		v431[0] = (__int128)v30;
		v32 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v448), _mm_mul_ps(v31, v449)),
				_mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), v450)),
			v451);
		v431[1] = (__int128)v32;
		v418 = _mm_sub_ps(v32, v30);
		do
		{
			v33 = *(float*)((char*)v431 + v28 * 4);
			v34 = *(float*)((char*)v431 + v28 * 4 + v27);
			if (v33 >= v34 && (v34 = *(float*)((char*)&v431[1] + v28 * 4 + v27), v33 <= v34))
			{
				v36 = 0.0;
				v406[v28] = 0;
			}
			else
			{
				v35 = v418.m128_f32[v28];
				if (v35 == 0.0)
					goto LABEL_263;
				v36 = (float)(v34 - v33) / v35;
				*(float*)&v406[v28] = v36;
			}
			if (v25 < v36)
				v25 = v36;
			++v28;
		} while (v28 < 3);
		v37 = 0i64;
		while (1)
		{
			if (v25 > *(float*)&v406[v37])
			{
				v38 = (float)(v25 * v418.m128_f32[v37]) + *(float*)((char*)v431 + v37 * 4);
				if (v38 < *(float*)(v26 + v37 * 4 + 1200)
					|| v38 > *(float*)((char*)&v406[v37 + 4] + v26 + 1200 - (_QWORD)v406))
				{
					break;
				}
			}
			if ((unsigned __int64)++v37 >= 3)
			{
				if (v25 >= *(float*)&v20)
					break;
				v39 = *(_DWORD*)v14;
				v40 = *((_DWORD*)v14 + 1);
				v428.m128_u64[1] = *(_QWORD*)(v21 + 24);
				v41 = *(_QWORD*)(v21 + 40);
				v42 = v20;
				v432 = v20;
				v397 = v39;
				v429 = v41;
				v43 = *(_QWORD*)(v21 + 56);
				v434 = 0i64;
				v431[2] = (__int128)_mm_sub_ps(v32, v30);
				v398 = v40;
				v433 = 0i64;
				v430 = v43;
				if (!(_DWORD)v23)
					break;
				v44 = *(_QWORD*)(v21 + 8);
				v45 = v23;
				do
				{
					v428.m128_u64[0] = v44;
					if ((unsigned int)*(unsigned __int16*)(v44 + 12) >= *(_DWORD*)(v26 + 512)
						|| sub_1407B07D0(
							(_QWORD*)(a1[76].m128_u64[1] + 1040),
							*(unsigned __int16*)(*(_QWORD*)(v26 + 520) + 4i64 * *(unsigned __int16*)(v44 + 12)))
						&& sub_1407B07D0((__m128*)a1[65].m128_u64, v46))
					{
						sub_1401D79D0(&v428, *(_DWORD*)v44, 0, (float*)&v397);
						v42 = v432;
						v398 = v432;
					}
					v44 += 16i64;
					--v45;
				} while (v45);
				v47 = a8;
				if (v433)
				{
					v20 = v42;
					if ((a8 & 2) != 0)
					{
						v48 = (__m128)0x40400000u;
						v49 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * *v433),
								(__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * *v433 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * *v433 + 4), (__m128)0i64));
						v50 = _mm_sub_ps(
							_mm_unpacklo_ps(
								_mm_unpacklo_ps(
									(__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * v433[1]),
									(__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * v433[1] + 8)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * v433[1] + 4), (__m128)0i64)),
							v49);
						v51 = _mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v50, v50, 0), *v22),
								_mm_mul_ps(_mm_shuffle_ps(v50, v50, 85), a1[6])),
							_mm_mul_ps(_mm_shuffle_ps(v50, v50, 170), a1[7]));
						v52 = _mm_sub_ps(
							_mm_unpacklo_ps(
								_mm_unpacklo_ps(
									(__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * v433[2]),
									(__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * v433[2] + 8)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v428.m128_u64[1] + 12i64 * v433[2] + 4), (__m128)0i64)),
							v49);
						v53 = _mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), *v22),
								_mm_mul_ps(_mm_shuffle_ps(v52, v52, 85), a1[6])),
							_mm_mul_ps(_mm_shuffle_ps(v52, v52, 170), a1[7]));
						v54 = _mm_sub_ps(
							_mm_mul_ps(_mm_shuffle_ps(v53, v53, 210), _mm_shuffle_ps(v51, v51, 201)),
							_mm_mul_ps(_mm_shuffle_ps(v53, v53, 201), _mm_shuffle_ps(v51, v51, 210)));
						v55 = _mm_mul_ps(v54, v54);
						v55.m128_f32[0] = (float)(v55.m128_f32[0] + _mm_shuffle_ps(v55, v55, 85).m128_f32[0])
							+ _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
						v56 = fsqrt(v55.m128_f32[0]);
						v48.m128_f32[0] = fmaxf(
							(float)((float)(3.0
								- (float)((float)(v55.m128_f32[0] * (float)(1.0 / v56))
									* (float)(1.0 / v56)))
								* 0.5)
							* (float)(1.0 / v56),
							0.0);
						*a9 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v54);
					}
					if ((a8 & 4) != 0)
					{
						v57 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1[4].m128_u64[0] + 504)
							+ 48i64 * *(unsigned __int16*)(v434 + 14)
							+ 40)
							+ 292i64);
						a9[2].m128_u64[1] = 0i64;
						a9[3].m128_i32[0] = 0;
						a9[2].m128_i32[1] = v57;
					}
					if ((a8 & 8) != 0)
						a9[1] = (__m128)xmmword_140C78410;
					v24 = a3;
					if ((a8 & 0x10) != 0)
						a9[3].m128_i32[1] = a1[13].m128_i32[1];
					goto LABEL_264;
				}
				goto LABEL_269;
			}
		}
	LABEL_263:
		v47 = a8;
		goto LABEL_264;
	}
	v47 = a8;
LABEL_269:
	v24 = a3;
LABEL_264:
	if (*(float*)&v20 >= v394[1])
		return 0i64;
	*v415 = *(float*)&v20;
	if ((v47 & 1) != 0)
		*(float*)(v11 + 32) = (float)((float)(v24->m128_f32[1] - v409->m128_f32[1]) * *(float*)&v20) + v409->m128_f32[1];
	return 1i64;
}
// 1402FEC7D: variable 'v23' is possibly undefined
// 1402FECD2: variable 'v46' is possibly undefined
// 1402FF50C: variable 'v140' is possibly undefined
// 140300146: variable 'v290' is possibly undefined
// 140300149: variable 'v291' is possibly undefined
// 14030017A: variable 'v292' is possibly undefined
// 1403006F0: variable 'v295' is possibly undefined
// 14030074B: variable 'v357' is possibly undefined
// 14030073B: variable 'v358' is possibly undefined
// 140300864: variable 'v352' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B63930: using guessed type __int64 (__fastcall *off_140B63930[3])();
// 140B7AB30: using guessed type __int128 xmmword_140B7AB30;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B2C0: using guessed type __int128 xmmword_140B7B2C0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3E928: using guessed type int dword_140C3E928;
// 140C3ED18: using guessed type int dword_140C3ED18;
// 140C421A0: using guessed type int dword_140C421A0;
// 140C421B0: using guessed type _BYTE byte_140C421B0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 1402FE940: using guessed type int var_810[4];

