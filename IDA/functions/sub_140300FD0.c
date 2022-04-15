#include "../winhttp.h"

//----- (0000000140300FD0) ----------------------------------------------------
__int64 __fastcall sub_140300FD0(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rsi
	int v5; // ecx
	__m128* v6; // r13
	__m128* v8; // r12
	int v9; // r14d
	__int64 result; // rax
	__int64 v11; // rbx
	__int64 v12; // rdi
	int v13; // eax
	_DWORD* v14; // rax
	int v15; // ecx
	_DWORD* v16; // rax
	int v17; // ecx
	unsigned int v18; // edi
	__int64 v19; // rbx
	__int64 v20; // rcx
	__int64 v21; // rcx
	int v22; // eax
	unsigned int v23; // edi
	unsigned int* v24; // rbx
	__int64 v25; // r8
	__int64 v26; // r9
	int v27; // r14d
	__m128 v28; // xmm0
	__m128 v29; // xmm0
	__int64 v30; // rdx
	__int64 v31; // rax
	unsigned int v32; // ecx
	__int64 v33; // r8
	__int64 v34; // r15
	__m128* v35; // r12
	__int64 v36; // r13
	__int64 v37; // rdi
	unsigned int v38; // r8d
	unsigned int v39; // r11d
	__int64 v40; // r14
	unsigned int v41; // edx
	__int64 v42; // rbx
	__int64 v43; // r14
	__int64 v44; // rcx
	unsigned int v45; // r10d
	unsigned int v46; // r9d
	__int64 v47; // rbx
	__int64 v48; // r8
	__int64 v49; // rax
	__int64 v50; // rdx
	__int32 v51; // eax
	__int64 v52; // rax
	__m128* v53; // r14
	__m128 v54; // xmm0
	__m128 v55; // xmm0
	__int16 v56; // ax
	__m128 v57; // xmm1
	__m128 v58; // xmm1
	__m128 v59; // xmm0
	__m128 v60; // xmm1
	__m128 v61; // xmm1
	__m128 v62; // xmm0
	__m128* v63; // rax
	__m128* v64; // rdi
	_DWORD* v65; // rcx
	_DWORD* v66; // rcx
	_DWORD* v67; // rcx
	_DWORD* v68; // rcx
	_DWORD* v69; // rcx
	__m128 v70; // xmm1
	__int64 v71; // rax
	unsigned int i; // ebx
	__int64 v73; // r8
	__int64 v74; // rdx
	float v75; // xmm2_4
	__m128 v76; // xmm2
	__int64 v77; // rax
	unsigned int v78; // ecx
	unsigned int v79; // edx
	__int64 v80; // r12
	__int64 v81; // r8
	__m128* v82; // rdi
	__int64 v83; // r15
	__m128* v84; // rcx
	__int64 v85; // rax
	__int64 v86; // r14
	__m128* v87; // rax
	unsigned __int32 v88; // eax
	__int64 v89; // rdx
	__int64 v90; // r8
	__int64 v91; // rdx
	__m128* v92; // rax
	unsigned int v93; // r11d
	unsigned int v94; // r8d
	__int64 v95; // r13
	unsigned int v96; // edx
	__int64 v97; // rbx
	__int64 v98; // r13
	__int64 v99; // rcx
	unsigned int v100; // r10d
	__int64 v101; // rcx
	__m128* v102; // rax
	__int64 v103; // rcx
	__int64 v104; // rax
	__int64 v105; // rax
	__m128* v106; // r10
	_DWORD* v107; // rcx
	_DWORD* v108; // rcx
	__m128* v109; // rbx
	__int64 v110; // rcx
	__int64 v111; // rax
	int v112; // r15d
	unsigned int* v113; // rbx
	_DWORD* v114; // r12
	__int64 v115; // rdi
	unsigned int v116; // edx
	__m128 v117; // xmm1
	__m128 v118; // xmm0
	__m128 v119; // xmm1
	__m128 v120; // xmm0
	__int64 v121; // r9
	__m128 v122; // xmm12
	float v123; // xmm5_4
	float v124; // xmm6_4
	__m128 v125; // xmm11
	float v126; // xmm4_4
	float v127; // xmm8_4
	float v128; // xmm10_4
	__m128 v129; // xmm3
	__m128 v130; // xmm2
	float v131; // xmm7_4
	__int128 v132; // xmm0
	__int64 v133; // rcx
	unsigned int v134; // eax
	int v135; // esi
	__m128 v136; // xmm6
	double v137; // xmm7_8
	float* v138; // rdi
	__int64* v139; // r15
	unsigned int v140; // edx
	__m128 v141; // xmm2
	__m128 v142; // xmm1
	__m128 v143; // xmm1
	__m128 v144; // xmm1
	__m128 v145; // xmm1
	__m128 v146; // xmm0
	__m128* v147; // rax
	float v148; // xmm6_4
	float v149; // xmm7_4
	float v150; // xmm9_4
	float v151; // xmm11_4
	__m128 v152; // xmm12
	__m128 v153; // xmm8
	__m128 v154; // xmm3
	__m128 v155; // xmm5
	__m128 v156; // xmm4
	__m128 v157; // xmm2
	__int64 v158; // r9
	unsigned int v159; // eax
	int v160; // edi
	unsigned int* v161; // rsi
	char* v162; // r15
	unsigned int v163; // edx
	__m128 v164; // xmm1
	__m128 v165; // xmm0
	__m128 v166; // xmm1
	__m128* v167; // rcx
	__m128 v168; // xmm1
	__m128 v169; // xmm12
	float v170; // xmm5_4
	__m128 v171; // xmm11
	float v172; // xmm4_4
	float v173; // xmm7_4
	__m128 v174; // xmm2
	float v175; // xmm9_4
	__m128 v176; // xmm3
	__int16 v177; // ax
	__m128 v178; // xmm6
	__m128 v179; // xmm7
	__m128* v180; // rcx
	__m128 v181; // xmm5
	__m128 v182; // xmm2
	__m128 v183; // xmm6
	__m128 v184; // xmm3
	float v185; // xmm1_4
	__m128 v186; // xmm7
	__m128 v187; // xmm0
	__m128i v188; // xmm2
	__m128 v189; // xmm2
	__m128 v190; // xmm0
	__m128i v191; // xmm2
	__m128 v192; // xmm1
	__m128 v193; // xmm2
	__m128i v194; // xmm2
	__int16 v195; // ax
	__m128 v196; // xmm4
	__m128 v197; // xmm7
	__m128 v198; // xmm1
	__m128 v199; // xmm0
	float v200; // xmm3_4
	float v201; // xmm2_4
	__m128 v202; // xmm0
	__m128 v203; // xmm4
	__m128 v204; // xmm1
	float v205; // xmm2_4
	__m128 v206; // xmm2
	__m128 v207; // xmm3
	__m128 v208; // xmm2
	__m128i v209; // xmm2
	__m128 v210; // xmm2
	__m128 v211; // xmm0
	__m128i v212; // xmm3
	__m128 v213; // xmm1
	__m128 v214; // xmm2
	__m128i v215; // xmm2
	__m128 v216; // xmm4
	__m128 v217; // xmm7
	__m128 v218; // xmm1
	__m128 v219; // xmm0
	float v220; // xmm3_4
	float v221; // xmm2_4
	__m128 v222; // xmm0
	__m128 v223; // xmm4
	__m128 v224; // xmm1
	float v225; // xmm2_4
	__m128 v226; // xmm2
	__m128 v227; // xmm3
	__m128 v228; // xmm2
	__m128i v229; // xmm2
	__m128 v230; // xmm2
	__m128 v231; // xmm2
	__m128i v232; // xmm2
	__m128 v233; // xmm1
	__m128 v234; // xmm2
	__m128 v235; // xmm7
	__m128 v236; // xmm1
	float v237; // xmm4_4
	__m128 v238; // xmm2
	__m128 v239; // xmm1
	__m128 v240; // xmm0
	__m128i v241; // xmm1
	__m128 v242; // xmm4
	__m128 v243; // xmm2
	__m128 v244; // xmm0
	__m128i v245; // xmm7
	__m128 v246; // xmm7
	__m128 v247; // xmm1
	float v248; // xmm4_4
	__m128 v249; // xmm2
	__m128 v250; // xmm1
	__m128 v251; // xmm0
	__m128i v252; // xmm1
	__m128 v253; // xmm4
	__m128 v254; // xmm2
	__m128 v255; // xmm0
	__m128 v256; // xmm2
	__m128 v257; // xmm7
	__m128 v258; // xmm1
	float v259; // xmm4_4
	__m128 v260; // xmm2
	__m128 v261; // xmm1
	__m128 v262; // xmm0
	__m128i v263; // xmm1
	__m128 v264; // xmm4
	__m128 v265; // xmm2
	__m128 v266; // xmm0
	__m128i v267; // xmm7
	__m128 v268; // xmm6
	__m128 v269; // xmm7
	__m128 v270; // xmm3
	__m128 v271; // xmm1
	float v272; // xmm2_4
	float v273; // xmm0_4
	__m128 v274; // xmm7
	__m128 v275; // xmm1
	float v276; // xmm2_4
	float v277; // xmm0_4
	__m128 v278; // xmm2
	float v279; // xmm0_4
	__m128 v280; // xmm3
	__m128 v281; // xmm2
	__m128i v282; // xmm2
	__m128 v283; // xmm2
	__m128 v284; // xmm0
	__m128i v285; // xmm3
	__m128 v286; // xmm1
	__m128 v287; // xmm2
	__m128 v288; // xmm1
	__m128 v289; // xmm1
	__m128 v290; // xmm1
	__m128 v291; // xmm2
	__m128* v292; // rax
	__m128 v293; // xmm1
	__m128 v294; // xmm8
	__m128 v295; // xmm7
	bool v296; // zf
	__m128 v297; // xmm9
	__m128 v298; // xmm2
	__int64 v299; // r9
	float v300; // xmm1_4
	__m128 v301; // xmm6
	__m128 v302; // xmm5
	__m128 v303; // xmm2
	__m128 v304; // xmm8
	__m128 v305; // xmm9
	__m128 v306; // xmm1
	__m128 v307; // xmm7
	__m128 v308; // xmm3
	__m128 v309; // xmm0
	__m128i v310; // xmm2
	__m128 v311; // xmm0
	__m128 v312; // xmm0
	__m128* v313; // rax
	unsigned int j; // r8d
	__int64 v315; // rdx
	unsigned __int64 v316; // rax
	__int64 v317; // rcx
	__m128 v318; // xmm4
	__m128 v319; // xmm3
	__m128 v320; // xmm2
	__m128 v321; // xmm1
	__m128 v322; // xmm6
	unsigned int* v323; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v325; // rdx
	__int64 v326; // rcx
	HANDLE EventW; // rcx
	__int64 v328; // rcx
	__int64 v329; // rax
	__int64 v330; // r13
	__int64 v331; // r12
	unsigned int v332; // r15d
	__int64 v333; // r14
	_DWORD* v334; // rdi
	__m128* v335; // rbx
	__int64 v336; // rax
	unsigned int v337; // ecx
	_DWORD* v338; // r13
	__int64 v339; // rbx
	__int64 v340; // r14
	unsigned int* v341; // r12
	__int64 v342; // r14
	__m128 v343; // xmm6
	double v344; // xmm7_8
	__int64* v345; // r15
	float* v346; // rdi
	unsigned int v347; // edx
	__m128 v348; // xmm2
	__m128 v349; // xmm1
	__m128 v350; // xmm1
	__m128 v351; // xmm1
	__m128 v352; // xmm1
	__m128 v353; // xmm0
	__m128* v354; // rax
	__m128 v355; // xmm12
	__m128 v356; // xmm7
	__m128 v357; // xmm4
	__m128 v358; // xmm11
	__m128 v359; // xmm2
	float v360; // xmm6_4
	float v361; // xmm5_4
	float v362; // xmm3_4
	float v363; // xmm1_4
	__m128* v364; // r12
	float v365; // xmm0_4
	float v366; // xmm1_4
	float v367; // xmm5_4
	float v368; // xmm9_4
	float v369; // xmm10_4
	float v370; // xmm3_4
	float v371; // xmm7_4
	float v372; // xmm2_4
	float v373; // xmm11_4
	float v374; // xmm8_4
	float v375; // xmm4_4
	float v376; // xmm1_4
	_DWORD* v377; // rax
	__int64 v378; // r15
	__int64 v379; // r13
	unsigned int* v380; // r14
	__int64 v381; // rsi
	unsigned int v382; // edx
	__m128* v383; // r15
	__int64 v384; // r12
	int* v385; // rsi
	char* v386; // r13
	unsigned int* v387; // r14
	unsigned int v388; // edx
	__int64 v389; // rax
	unsigned int v390; // r15d
	__int64 v391; // rbx
	__int64 v392; // r14
	__m128* v393; // rdi
	__int64 v394; // r14
	__int64 v395; // rax
	unsigned int v396; // r15d
	__m128i* v397; // rdi
	__int64 v398; // rbx
	__int64 v399; // rax
	__int64 v400; // r14
	__int64 v401; // r8
	unsigned int v402; // ebx
	__int64 v403; // rdi
	unsigned __int16** v404; // rcx
	__int64* v405; // r12
	__int64 v406; // rcx
	_QWORD* v407; // rdx
	__int64 v408; // rdx
	__int64 v409; // rax
	__int64 v410; // rbx
	unsigned __int16* v411; // r14
	_QWORD* v412; // rcx
	__int64 v413; // rcx
	__int64 v414; // rdi
	__int64 v415; // r15
	__int64 v416; // r15
	unsigned __int16 v417; // ax
	__int64 v418; // rcx
	__int64* v419; // rcx
	__int64* v420; // r15
	__int64 v421; // rcx
	_QWORD* v422; // rdx
	__int64 v423; // rdx
	__int64 v424; // rcx
	unsigned int v425; // r12d
	unsigned __int16* v426; // r14
	__int64 v427; // rbx
	_QWORD* v428; // rcx
	__int64 v429; // rcx
	__int64 v430; // rdi
	__int64 v431; // rcx
	__int64* v432; // rcx
	__int64 v433; // rcx
	unsigned int v434; // edx
	__int64 v435; // r12
	__int64 v436; // r13
	__int64 v437; // r14
	__int64 v438; // r9
	__m128* v439; // rax
	unsigned int v440; // edi
	unsigned __int16** v441; // rbx
	unsigned int v442; // esi
	__int64* v443; // r15
	_DWORD* v444; // rcx
	__int64 v445; // rax
	char v446; // di
	_BYTE* v447; // rbx
	__int64 v448; // rax
	__int64 v449; // rcx
	unsigned int v450; // r15d
	__int64 v451; // r14
	__int64 v452; // rdi
	unsigned __int16** v453; // rbx
	__m128* v454; // rax
	__m128 v455; // xmm3
	__m128 v456; // xmm0
	__m128 v457; // xmm1
	float v458; // xmm1_4
	float* v459; // rax
	float v460; // xmm0_4
	float v461; // xmm1_4
	float v462; // xmm3_4
	float v463; // xmm2_4
	float v464; // xmm0_4
	float v465; // xmm1_4
	float v466; // xmm5_4
	float v467; // xmm4_4
	float v468; // xmm3_4
	float v469; // xmm2_4
	float v470; // xmm2_4
	float v471; // xmm0_4
	float v472; // xmm0_4
	float v473; // xmm1_4
	float v474; // xmm3_4
	float v475; // xmm2_4
	float v476; // xmm0_4
	float v477; // xmm1_4
	float v478; // xmm3_4
	float v479; // xmm2_4
	float v480; // xmm0_4
	float v481; // xmm1_4
	float v482; // xmm9_4
	float v483; // xmm8_4
	float v484; // xmm0_4
	float v485; // xmm1_4
	float v486; // xmm7_4
	float v487; // xmm6_4
	float v488; // xmm0_4
	float v489; // xmm1_4
	float v490; // xmm5_4
	float v491; // xmm4_4
	float v492; // xmm0_4
	float v493; // xmm1_4
	unsigned int v494; // edi
	__int64 v495; // rcx
	__int64 v496; // rax
	__int64 v497; // rcx
	__int64 v498; // rax
	unsigned __int64 v499; // r8
	unsigned __int64 v500; // r10
	int v501; // ecx
	int v502; // ecx
	__m128* v503; // rax
	__m128* v504; // r9
	__m128* v505; // rdx
	double* v506; // r8
	unsigned __int16* v507; // r9
	unsigned __int64 v508; // rcx
	__m128* v509; // r8
	__m128* v510; // rcx
	__int64 v511; // rcx
	unsigned __int64 v512; // r10
	__int64 v513; // rbx
	__int64 v514; // r13
	__int64 v515; // r8
	unsigned int v516; // eax
	__m128* v517; // rdx
	int v518; // r14d
	__int64 v519; // r12
	__int64 v520; // r15
	__int64 v521; // rdi
	__int64 v522; // r9
	__m128* v523; // rdi
	__m128 v524; // xmm7
	__m128 v525; // xmm2
	float v526; // xmm0_4
	__m128 v527; // xmm7
	float v528; // xmm0_4
	float v529; // xmm6_4
	float v530; // xmm8_4
	int* v531; // rax
	int* v532; // rdi
	int v533; // ebx
	__int64 v534; // rdx
	__int128 v535; // xmm0
	__int64 v536; // rdx
	__int64 v537; // r14
	int* v538; // rbx
	__int64 v539; // rax
	int v540; // eax
	int** v541; // rdx
	__int64 v542; // r14
	_QWORD* v543; // rcx
	__int64 v544; // rdx
	int* v545; // rcx
	__m128 v546; // xmm1
	__m128 v547; // xmm6
	int* v548; // rax
	__m128* v549; // r14
	__int32 v550; // ebx
	__int32 v551; // edi
	__m128* v552; // rdi
	int* v553; // rax
	__int32 v554; // edi
	__int32 v555; // ebx
	unsigned int v556; // edi
	__int64 k; // rbx
	unsigned int v558; // [rsp+40h] [rbp-C0h]
	unsigned int v559; // [rsp+40h] [rbp-C0h]
	int v560; // [rsp+40h] [rbp-C0h]
	unsigned int v561; // [rsp+40h] [rbp-C0h]
	unsigned int v562; // [rsp+40h] [rbp-C0h]
	int v563; // [rsp+44h] [rbp-BCh]
	unsigned int v564; // [rsp+44h] [rbp-BCh]
	unsigned int v565; // [rsp+44h] [rbp-BCh]
	int v566; // [rsp+48h] [rbp-B8h]
	__int64 v567; // [rsp+50h] [rbp-B0h]
	__int64 v568; // [rsp+50h] [rbp-B0h]
	__int64 v570; // [rsp+58h] [rbp-A8h]
	__m128* v571; // [rsp+70h] [rbp-90h]
	__m128* v572; // [rsp+70h] [rbp-90h]
	__m128 v573; // [rsp+70h] [rbp-90h]
	__int64 v574; // [rsp+70h] [rbp-90h]
	__int64 v575; // [rsp+80h] [rbp-80h]
	__int64* v576; // [rsp+80h] [rbp-80h]
	__int64 v577; // [rsp+80h] [rbp-80h]
	__int64 v578; // [rsp+90h] [rbp-70h]
	__int128 v579; // [rsp+90h] [rbp-70h]
	__int64 v581; // [rsp+A0h] [rbp-60h]
	int v582; // [rsp+A0h] [rbp-60h]
	__int64 v583; // [rsp+A8h] [rbp-58h]
	__int64 v584; // [rsp+A8h] [rbp-58h]
	int* v585; // [rsp+A8h] [rbp-58h]
	_DWORD* v586; // [rsp+A8h] [rbp-58h]
	__m128* v587; // [rsp+B0h] [rbp-50h]
	const void** v588[2]; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v589; // [rsp+D0h] [rbp-30h] BYREF
	__m128 v590; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v591; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v592; // [rsp+100h] [rbp+0h] BYREF
	unsigned int v593; // [rsp+110h] [rbp+10h]
	__int64 v594; // [rsp+118h] [rbp+18h] BYREF
	__m128* v595; // [rsp+120h] [rbp+20h]
	__m128 v596; // [rsp+130h] [rbp+30h] BYREF
	__m128 v597; // [rsp+140h] [rbp+40h]
	__int64(__fastcall * *v598)(); // [rsp+150h] [rbp+50h] BYREF
	const wchar_t* v599; // [rsp+158h] [rbp+58h]
	LPVOID lpTlsValue; // [rsp+160h] [rbp+60h]
	__int64 v601; // [rsp+168h] [rbp+68h]
	__int128 v602; // [rsp+170h] [rbp+70h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+180h] [rbp+80h] BYREF
	__int64 v604; // [rsp+188h] [rbp+88h]
	LPVOID Value; // [rsp+190h] [rbp+90h]
	__m128 v606; // [rsp+1A0h] [rbp+A0h] BYREF
	__m128 v607; // [rsp+1B0h] [rbp+B0h] BYREF
	__m128 v608; // [rsp+1C0h] [rbp+C0h]
	__m128 v609; // [rsp+1D0h] [rbp+D0h]
	__m128 v610; // [rsp+1E0h] [rbp+E0h]
	__m128 v611; // [rsp+1F0h] [rbp+F0h]
	__int64 v612; // [rsp+200h] [rbp+100h] BYREF
	__m128i v613; // [rsp+210h] [rbp+110h] BYREF
	__m128 v614; // [rsp+220h] [rbp+120h]
	__m128 v615; // [rsp+230h] [rbp+130h] BYREF
	float v616; // [rsp+240h] [rbp+140h]
	float v617; // [rsp+244h] [rbp+144h]
	float v618; // [rsp+248h] [rbp+148h]
	float v619; // [rsp+250h] [rbp+150h]
	float v620; // [rsp+254h] [rbp+154h]
	float v621; // [rsp+258h] [rbp+158h]
	__m128 v622; // [rsp+260h] [rbp+160h]
	__m128 v623; // [rsp+270h] [rbp+170h] BYREF
	__m128 v624; // [rsp+280h] [rbp+180h]
	__int64 v625[4]; // [rsp+290h] [rbp+190h] BYREF
	__int64 v626[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
	__int128 v627; // [rsp+2D0h] [rbp+1D0h] BYREF
	__m128 v628; // [rsp+2E0h] [rbp+1E0h]
	__m128 v629; // [rsp+2F0h] [rbp+1F0h] BYREF
	__m128 v630; // [rsp+300h] [rbp+200h] BYREF
	__m128 v631; // [rsp+310h] [rbp+210h] BYREF
	__int128 v632[2]; // [rsp+320h] [rbp+220h] BYREF
	__m128 v633[4]; // [rsp+340h] [rbp+240h] BYREF
	__m128 v634; // [rsp+380h] [rbp+280h]
	__m128 v635; // [rsp+390h] [rbp+290h]
	__m128 v636; // [rsp+3A0h] [rbp+2A0h]
	__m128 v637; // [rsp+3B0h] [rbp+2B0h]
	__m128i v638; // [rsp+3C0h] [rbp+2C0h]
	__int128 v639; // [rsp+3D0h] [rbp+2D0h]
	__m128 v640; // [rsp+3E0h] [rbp+2E0h]
	__m128 v641; // [rsp+3F0h] [rbp+2F0h]
	__m128 v642; // [rsp+400h] [rbp+300h]
	__m128 v643; // [rsp+410h] [rbp+310h]
	__m128 v644; // [rsp+420h] [rbp+320h]
	__int128 v645; // [rsp+430h] [rbp+330h]
	__m128 v646; // [rsp+440h] [rbp+340h]
	__m128 v647; // [rsp+450h] [rbp+350h]
	__m128 v648; // [rsp+460h] [rbp+360h]
	__m128 v649; // [rsp+470h] [rbp+370h]
	__m128i v650; // [rsp+480h] [rbp+380h]
	__m128 v651; // [rsp+490h] [rbp+390h]
	__m128i v652; // [rsp+4A0h] [rbp+3A0h]
	__m128 v653; // [rsp+4B0h] [rbp+3B0h]
	__m128i v654; // [rsp+4C0h] [rbp+3C0h]
	__m128 v655; // [rsp+4D0h] [rbp+3D0h]
	__int128 v656; // [rsp+4E0h] [rbp+3E0h]
	__m128 v657; // [rsp+4F0h] [rbp+3F0h]
	__int128 v658; // [rsp+500h] [rbp+400h]
	__m128i v659; // [rsp+510h] [rbp+410h]
	__m128 v660; // [rsp+520h] [rbp+420h]
	__m128 v661; // [rsp+530h] [rbp+430h]
	__m128 v662; // [rsp+540h] [rbp+440h]
	__m128 v663; // [rsp+550h] [rbp+450h]
	__m128 v664; // [rsp+560h] [rbp+460h]
	__m128 v665; // [rsp+570h] [rbp+470h]
	__m128 v666; // [rsp+580h] [rbp+480h]
	__m128i v667; // [rsp+590h] [rbp+490h]
	__m128i v668; // [rsp+5A0h] [rbp+4A0h]
	__m128i v669; // [rsp+5B0h] [rbp+4B0h]
	__m128i v670; // [rsp+5C0h] [rbp+4C0h]
	__m128 v671; // [rsp+5D0h] [rbp+4D0h]
	__m128i v672; // [rsp+5E0h] [rbp+4E0h]
	__m128 v673; // [rsp+5F0h] [rbp+4F0h]
	__m128 v674[2]; // [rsp+600h] [rbp+500h] BYREF
	__m128 v675; // [rsp+620h] [rbp+520h]
	__m128i v676; // [rsp+630h] [rbp+530h]
	__m128 v677; // [rsp+640h] [rbp+540h]
	__m128 v678; // [rsp+650h] [rbp+550h]
	__m128 v679; // [rsp+660h] [rbp+560h]
	__m128i v680; // [rsp+670h] [rbp+570h]
	__m128 v681; // [rsp+680h] [rbp+580h]
	__m128 v682; // [rsp+690h] [rbp+590h]
	__m128 v683; // [rsp+6A0h] [rbp+5A0h]
	__m128 v684; // [rsp+6B0h] [rbp+5B0h]
	__m128 v685; // [rsp+6C0h] [rbp+5C0h]
	__m128i v686; // [rsp+6D0h] [rbp+5D0h]
	__int128 v687; // [rsp+6E0h] [rbp+5E0h]
	__m128 v688; // [rsp+6F0h] [rbp+5F0h]
	__int128 v689; // [rsp+700h] [rbp+600h]
	__m128 v690; // [rsp+710h] [rbp+610h]
	__int128 v691; // [rsp+720h] [rbp+620h]
	__m128 v692; // [rsp+730h] [rbp+630h]
	__m128 v693; // [rsp+740h] [rbp+640h]
	__m128 v694; // [rsp+750h] [rbp+650h]
	__int128 v695; // [rsp+760h] [rbp+660h]
	__m128i v696; // [rsp+770h] [rbp+670h]
	__m128 v697; // [rsp+780h] [rbp+680h]
	__m128 v698; // [rsp+790h] [rbp+690h]
	__m128 v699; // [rsp+7A0h] [rbp+6A0h]
	__m128 v700; // [rsp+7B0h] [rbp+6B0h]
	__int128 v701; // [rsp+7C0h] [rbp+6C0h]
	__m128 v702; // [rsp+7D0h] [rbp+6D0h]
	__m128 v703; // [rsp+7E0h] [rbp+6E0h]
	__m128i v704; // [rsp+7F0h] [rbp+6F0h]
	__m128i v705; // [rsp+800h] [rbp+700h]
	__m128i v706; // [rsp+810h] [rbp+710h]
	__m128 v707; // [rsp+820h] [rbp+720h]
	__m128 v708; // [rsp+830h] [rbp+730h]
	__m128 v709; // [rsp+840h] [rbp+740h]
	__m128 v710; // [rsp+850h] [rbp+750h]
	__m128 v711[3]; // [rsp+860h] [rbp+760h] BYREF
	__m128 v712; // [rsp+890h] [rbp+790h]
	__m128 v713; // [rsp+8A0h] [rbp+7A0h]
	__m128 v714; // [rsp+8B0h] [rbp+7B0h]
	__m128 v715; // [rsp+8C0h] [rbp+7C0h]
	__m128i v716; // [rsp+8D0h] [rbp+7D0h]
	__m128 v717; // [rsp+8E0h] [rbp+7E0h]
	__m128 v718; // [rsp+8F0h] [rbp+7F0h]
	__m128i v719; // [rsp+900h] [rbp+800h]
	__m128i v720; // [rsp+910h] [rbp+810h]
	double v721[8]; // [rsp+920h] [rbp+820h] BYREF
	__m128 v722[2]; // [rsp+960h] [rbp+860h] BYREF
	__m128 v723; // [rsp+980h] [rbp+880h]
	__int128 v724; // [rsp+990h] [rbp+890h]
	__m128 v725[4]; // [rsp+9A0h] [rbp+8A0h] BYREF
	__m128 v726[4]; // [rsp+9E0h] [rbp+8E0h] BYREF
	__m128 v727[4]; // [rsp+A20h] [rbp+920h] BYREF
	__m128 v728[4]; // [rsp+A60h] [rbp+960h] BYREF
	__m128 v729[4]; // [rsp+AA0h] [rbp+9A0h] BYREF
	double v730[8]; // [rsp+AE0h] [rbp+9E0h] BYREF
	unsigned __int128 v731; // [rsp+B20h] [rbp+A20h] BYREF
	__m128 v732[4]; // [rsp+B30h] [rbp+A30h] BYREF
	__m128* v733[2]; // [rsp+B70h] [rbp+A70h] BYREF
	__m128 v734[4]; // [rsp+B80h] [rbp+A80h] BYREF
	__m128* v735[2]; // [rsp+BC0h] [rbp+AC0h] BYREF
	__m128 v736[4]; // [rsp+BD0h] [rbp+AD0h] BYREF
	__m128* v737[10]; // [rsp+C10h] [rbp+B10h] BYREF
	__m128* v738[10]; // [rsp+C60h] [rbp+B60h] BYREF
	__m128* v739[10]; // [rsp+CB0h] [rbp+BB0h] BYREF
	__m128* v740[10]; // [rsp+D00h] [rbp+C00h] BYREF
	__m128* v741[10]; // [rsp+D50h] [rbp+C50h] BYREF
	__m128* v742[10]; // [rsp+DA0h] [rbp+CA0h] BYREF
	__m128* v743[10]; // [rsp+DF0h] [rbp+CF0h] BYREF
	__m128* v744[10]; // [rsp+E40h] [rbp+D40h] BYREF
	__m128* v745[10]; // [rsp+E90h] [rbp+D90h] BYREF
	__m128* v746[10]; // [rsp+EE0h] [rbp+DE0h] BYREF
	__m128* v747[10]; // [rsp+F30h] [rbp+E30h] BYREF
	__m128* v748[10]; // [rsp+F80h] [rbp+E80h] BYREF
	__m128* v749[10]; // [rsp+FD0h] [rbp+ED0h] BYREF
	__m128* v750[10]; // [rsp+1020h] [rbp+F20h] BYREF
	__m128* v751[10]; // [rsp+1070h] [rbp+F70h] BYREF
	__int64 v752[10]; // [rsp+10C0h] [rbp+FC0h] BYREF
	unsigned __int64 v753[10]; // [rsp+1110h] [rbp+1010h] BYREF
	__int64 v754[10]; // [rsp+1160h] [rbp+1060h] BYREF
	__m128 v755[2]; // [rsp+11B0h] [rbp+10B0h] BYREF
	float v756; // [rsp+11D0h] [rbp+10D0h]
	__m128 v757; // [rsp+1290h] [rbp+1190h]

	v4 = a1;
	v5 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 220i64);
	v6 = 0i64;
	v593 = a4;
	v8 = a2;
	if (*(_DWORD*)(v4 + 1396) != v5)
	{
		*(_DWORD*)(v4 + 1396) = v5;
		*(_DWORD*)(v4 + 1404) = *(_DWORD*)(*(_QWORD*)(v4 + 16) + 208i64);
		*(_QWORD*)(v4 + 1408) = 0i64;
	}
	v9 = a4 & ~*(_DWORD*)(v4 + 1408);
	v566 = v9;
	if (!v9)
		return 0i64;
	if ((v9 & 1) == 0)
		goto LABEL_35;
	v11 = 0i64;
	if (!*(_QWORD*)(v4 + 880))
	{
	LABEL_20:
		v18 = 0;
		if (*(_DWORD*)(v4 + 904))
		{
			do
			{
				v19 = *(_QWORD*)(v4 + 8i64 * v18 + 912);
				v20 = *(_QWORD*)(v19 + 8);
				if (v20 && *(_DWORD*)(*(_QWORD*)(v4 + 16) + 208i64) - *(_DWORD*)(v20 + 52) >= 0)
					sub_1402F9480(v4, *(unsigned int**)(v4 + 8i64 * v18 + 912));
				v21 = *(_QWORD*)(v19 + 16);
				if (v21 && *(_DWORD*)(*(_QWORD*)(v4 + 16) + 208i64) - *(_DWORD*)(v21 + 56) >= 0)
					sub_1402F96A0(v4, (unsigned int*)v19);
				v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 400i64))(v4);
				result = sub_1402F1F50(v19, *(_DWORD*)(*(_QWORD*)(v4 + 16) + 208i64), *(float*)(v4 + 196), v22);
				if ((int)result < 0)
					return result;
			} while (++v18 < *(_DWORD*)(v4 + 904));
		}
		v23 = 0;
		if (!*(_DWORD*)(*(_QWORD*)(v4 + 56) + 200i64))
			goto LABEL_34;
		do
		{
			v24 = (unsigned int*)(*(_QWORD*)(v4 + 808) + 344i64 * v23);
			v27 = sub_1402F02E0((__int64)v24, v4);
			if (v27 < 0 || (v27 = sub_1402F0C90(v24, v4, v25, v26), v27 < 0))
			{
				v604 = 0i64;
				TlsValue = &off_140B5E648;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v625[0] = (__int64)TlsValue;
				v625[1] = v604;
				v625[2] = (__int64)Value;
				v47 = *(_QWORD*)(*(_QWORD*)(v4 + 56) + 24i64);
				v598 = &off_140B5E648;
				v599 = L"FileName";
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v598);
				v601 = v47;
				v626[1] = (__int64)v599;
				v598 = &off_140B5E638;
				v626[3] = v47;
				v626[0] = (__int64)&off_140B5E638;
				v612 = 0x141DEB930i64;
				v626[2] = (__int64)lpTlsValue;
				LODWORD(v47) = sub_1401971E0(&dword_140C8A5F4, 6, &v612, v626, v625);
				v598 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, Value);
				if ((_DWORD)v47)
					DebugBreak();
				return (unsigned int)v27;
			}
			++v23;
		} while (v23 < *(_DWORD*)(*(_QWORD*)(v4 + 56) + 200i64));
		v9 = v566;
	LABEL_34:
		*(_DWORD*)(v4 + 1408) |= 1u;
	LABEL_35:
		if ((v9 & 2) == 0)
			goto LABEL_103;
		a4 = v4 + 400;
		v28 = _mm_mul_ps(*(__m128*)(v4 + 224), *(__m128*)a3);
		*(__m128*)(v4 + 400) = v28;
		v673 = v28;
		v29 = _mm_add_ps(*(__m128*)(a3 + 16), *(__m128*)(v4 + 240));
		*(__m128*)(v4 + 416) = v29;
		v677 = v29;
		*(float*)(v4 + 432) = *(float*)(a3 + 32) * *(float*)(v4 + 200);
		*(float*)(v4 + 436) = (float)(*(float*)(v4 + 204) + *(float*)(a3 + 36))
			- (float)(*(float*)(v4 + 204) * *(float*)(a3 + 36));
		*(float*)(v4 + 440) = *(float*)(a3 + 40) * *(float*)(v4 + 208);
		*(float*)(v4 + 444) = *(float*)(a3 + 44) * *(float*)(v4 + 212);
		*(_DWORD*)(v4 + 448) = *(_DWORD*)(a3 + 48);
		*(_WORD*)(v4 + 452) = *(_WORD*)(a3 + 52);
		*(_OWORD*)(v4 + 464) = *(_OWORD*)(a3 + 64);
		*(_DWORD*)(v4 + 480) = *(_DWORD*)(a3 + 80);
		v30 = *(_QWORD*)(v4 + 64);
		v31 = 0i64;
		v32 = *(_DWORD*)(v30 + 240);
		v563 = 0;
		v558 = v32;
		if (!v32)
			goto LABEL_90;
		while (2)
		{
			v33 = *(_QWORD*)(v4 + 496);
			v34 = *(_QWORD*)(v30 + 248) + 184 * v31;
			v35 = (__m128*)(*(_QWORD*)(v4 + 504) + 192 * v31);
			v36 = v35->m128_u64[0];
			v37 = v33 + 96 * v31;
			if (*(_QWORD*)(v4 + 1216) && !*(_DWORD*)(v4 + 1200))
			{
				v38 = 0;
				v39 = *(_DWORD*)(352i64 * *(unsigned __int16*)(v34 + 4) + *(_QWORD*)(v30 + 392) + 8);
				v40 = *(_QWORD*)(*(_QWORD*)(v4 + 1216) + 64i64);
				v41 = *(_DWORD*)(v40 + 416);
				if (v41)
				{
					v42 = *(_QWORD*)(v40 + 424);
					v43 = *(_QWORD*)(v40 + 392);
					do
					{
						v44 = (v41 + v38) >> 1;
						v45 = *(unsigned __int16*)(v42 + 2 * v44);
						v46 = *(_DWORD*)(352i64 * *(unsigned __int16*)(v42 + 2 * v44) + v43 + 8);
						if (v39 >= v46)
						{
							if (v39 <= v46)
								goto LABEL_50;
							v38 = v44 + 1;
						}
						else
						{
							v41 = (v41 + v38) >> 1;
						}
					} while (v38 < v41);
				}
				v45 = -1;
			LABEL_50:
				v48 = *(_QWORD*)(v4 + 1216);
				v49 = *(_QWORD*)(v48 + 64);
				if (v45 < *(_DWORD*)(v49 + 384))
				{
					v50 = *(_QWORD*)(v48 + 496) + 96i64 * *(unsigned __int16*)(352i64 * v45 + *(_QWORD*)(v49 + 392) + 6);
					*(_OWORD*)v37 = *(_OWORD*)v50;
					*(_OWORD*)(v37 + 16) = *(_OWORD*)(v50 + 16);
					*(_DWORD*)(v37 + 32) = *(_DWORD*)(v50 + 32);
					*(_DWORD*)(v37 + 36) = *(_DWORD*)(v50 + 36);
					*(_DWORD*)(v37 + 40) = *(_DWORD*)(v50 + 40);
					*(_DWORD*)(v37 + 44) = *(_DWORD*)(v50 + 44);
					*(_DWORD*)(v37 + 48) = *(_DWORD*)(v50 + 48);
					*(_WORD*)(v37 + 52) = *(_WORD*)(v50 + 52);
					*(_WORD*)(v37 + 54) = *(_WORD*)(v50 + 54);
					*(_DWORD*)(v37 + 56) = *(_DWORD*)(v50 + 56);
					*(_DWORD*)(v37 + 60) = *(_DWORD*)(v50 + 60);
					*(_OWORD*)(v37 + 64) = *(_OWORD*)(v50 + 64);
					v51 = *(_DWORD*)(v50 + 80);
					goto LABEL_88;
				}
				v32 = v558;
				v33 = *(_QWORD*)(v4 + 496);
				a4 = v4 + 400;
			}
			v52 = *(unsigned __int16*)(v34 + 2);
			if ((unsigned int)v52 >= v32)
				v53 = (__m128*)a4;
			else
				v53 = (__m128*)(v33 + 96 * v52);
			if (*(_DWORD*)(v4 + 272))
			{
				v54 = *(__m128*)(v4 + 256);
			}
			else if (*(_DWORD*)(v34 + 8))
			{
				sub_1403068B0(v34 + 8, v35 + 1, v35->m128_u64[0], a4);
				v54 = _mm_mul_ps(v35[1], *v53);
				v679 = v54;
			}
			else
			{
				v54 = *v53;
			}
			*(__m128*)v37 = v54;
			if (*(_DWORD*)(v34 + 32))
			{
				sub_1403068B0(v34 + 32, v35 + 3, v36, a4);
				v55 = _mm_add_ps(v53[1], v35[3]);
				v681 = v55;
			}
			else
			{
				v55 = v53[1];
			}
			*(__m128*)(v37 + 16) = v55;
			if (!*(_DWORD*)(v34 + 56) || v53[2].m128_f32[0] == 0.0)
			{
				*(_DWORD*)(v37 + 32) = v53[2].m128_i32[0];
			}
			else
			{
				sub_140306730(v34 + 56, v35[5].m128_f32, v36, a4);
				*(float*)(v37 + 32) = v53[2].m128_f32[0] * v35[5].m128_f32[0];
			}
			if (*(_DWORD*)(v34 + 80))
			{
				sub_140306730(v34 + 80, &v35[6].m128_f32[1], v36, a4);
				*(float*)(v37 + 36) = (float)(v35[6].m128_f32[1] + v53[2].m128_f32[1])
					- (float)(v35[6].m128_f32[1] * v53[2].m128_f32[1]);
			}
			else
			{
				*(_DWORD*)(v37 + 36) = v53[2].m128_i32[1];
			}
			*(_DWORD*)(v37 + 40) = v53[2].m128_i32[2];
			*(_DWORD*)(v37 + 44) = v53[2].m128_i32[3];
			if (*(_DWORD*)(v34 + 104) && v53[3].m128_f32[0] < 1.0)
			{
				sub_140306730(v34 + 104, &v35[7].m128_f32[2], v36, a4);
				*(float*)(v37 + 48) = (float)(v35[7].m128_f32[2] + v53[3].m128_f32[0])
					- (float)(v35[7].m128_f32[2] * v53[3].m128_f32[0]);
			}
			else
			{
				*(_DWORD*)(v37 + 48) = v53[3].m128_i32[0];
			}
			if (*(_DWORD*)(v34 + 128) && v53[3].m128_i16[2])
			{
				sub_1403069D0(v34 + 128, &v35[8].m128_i8[12], v36, a4);
				v56 = v35[8].m128_i8[12] && v53[3].m128_i16[2];
			}
			else
			{
				v56 = v53[3].m128_i16[2];
			}
			*(_WORD*)(v37 + 52) = v56;
			if (*(_DWORD*)(v34 + 152))
			{
				sub_140306B90(v34 + 152, v35 + 10, v36, a4);
				v57 = (__m128)v35[10].m128_u32[3];
				v611 = v35[10];
				v611.m128_i32[3] = 1065353216;
				v58 = _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0), v611);
				*(__m128*)(v37 + 64) = v58;
				v59 = *(__m128*)(v37 + 64);
				v611 = v58;
				v60 = (__m128)0x3F800000u;
				v60.m128_f32[0] = 1.0 - *(float*)(v37 + 76);
				v61 = _mm_mul_ps(_mm_shuffle_ps(v60, v60, 0), v53[4]);
				v62 = _mm_add_ps(v59, v61);
				v683 = v61;
				v685 = v62;
			}
			else
			{
				v62 = v53[4];
			}
			*(__m128*)(v37 + 64) = v62;
			v63 = (__m128*)(v34 + 176);
			if (*(float*)(v34 + 176) < v53[5].m128_f32[0])
				v63 = v53 + 5;
			v51 = v63->m128_i32[0];
		LABEL_88:
			v30 = *(_QWORD*)(v4 + 64);
			*(_DWORD*)(v37 + 80) = v51;
			v32 = *(_DWORD*)(v30 + 240);
			v31 = (unsigned int)(v563 + 1);
			a4 = v4 + 400;
			v563 = v31;
			v558 = v32;
			if ((unsigned int)v31 < v32)
				continue;
			break;
		}
		v8 = a2;
		v9 = v566;
		v6 = 0i64;
	LABEL_90:
		v64 = (__m128*)(v4 + 512);
		*(_OWORD*)(v4 + 512) = xmmword_140B7B240;
		*(_OWORD*)(v4 + 528) = 0i64;
		v687 = xmmword_140B7B240;
		*(_QWORD*)(v4 + 544) = 1065353216i64;
		*(_OWORD*)(v4 + 560) = 0i64;
		v689 = 0i64;
		v691 = 0i64;
		*(_DWORD*)(v4 + 576) = 0;
		if (*(_QWORD*)(v4 + 1216))
			v64 = (__m128*)(*(_QWORD*)(v4 + 1216) + 512i64);
		v65 = (_DWORD*)(*(_QWORD*)(v4 + 64) + 256i64);
		if (*v65)
		{
			sub_1403068B0((__int64)v65, (__m128*)(v4 + 592), *(_QWORD*)(v4 + 816), a4);
			v713 = _mm_mul_ps(*v64, *(__m128*)(v4 + 592));
			*v64 = v713;
		}
		v66 = (_DWORD*)(*(_QWORD*)(v4 + 64) + 280i64);
		if (*v66)
		{
			sub_1403068B0((__int64)v66, (__m128*)(v4 + 624), *(_QWORD*)(v4 + 816), a4);
			v64[1] = _mm_add_ps(v64[1], *(__m128*)(v4 + 624));
		}
		v67 = (_DWORD*)(*(_QWORD*)(v4 + 64) + 304i64);
		if (*v67)
		{
			sub_140306730((__int64)v67, (float*)(v4 + 656), *(_QWORD*)(v4 + 816), a4);
			v64[2].m128_f32[0] = *(float*)(v4 + 656) * v64[2].m128_f32[0];
		}
		v68 = (_DWORD*)(*(_QWORD*)(v4 + 64) + 328i64);
		if (*v68)
		{
			sub_140306730((__int64)v68, (float*)(v4 + 676), *(_QWORD*)(v4 + 816), a4);
			v64[2].m128_f32[1] = (float)(*(float*)(v4 + 676) + v64[2].m128_f32[1])
				- (float)(*(float*)(v4 + 676) * v64[2].m128_f32[1]);
		}
		v69 = (_DWORD*)(*(_QWORD*)(v4 + 64) + 352i64);
		if (*v69)
		{
			sub_140306B90((__int64)v69, (__m128*)(v4 + 704), *(_QWORD*)(v4 + 816), a4);
			v70 = (__m128) * (unsigned int*)(v4 + 716);
			v614 = *(__m128*)(v4 + 704);
			v614.m128_i32[3] = 1065353216;
			v614 = _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0), v614);
			v64[3] = v614;
		}
		v64[4].m128_i32[0] = *(_DWORD*)(*(_QWORD*)(v4 + 64) + 376i64);
	LABEL_103:
		if ((v9 & 4) != 0)
		{
			v71 = *(_QWORD*)(v4 + 64);
			for (i = 0; i < *(_DWORD*)(v71 + 808); ++i)
			{
				v73 = *(_QWORD*)(v4 + 736) + 32i64 * i;
				sub_140306CB0(
					(unsigned __int16**)(*(_QWORD*)(v71 + 816) + 16i64 + 56i64 * i),
					(float*)(v73 + 8),
					*(_QWORD*)v73);
				v71 = *(_QWORD*)(v4 + 64);
			}
			if (*(_QWORD*)(v4 + 744))
				sub_140306DB0(*(_QWORD*)(v4 + 64) + 848i64, (float*)(v4 + 752), *(_QWORD*)(v4 + 744), a4);
			if (*(_QWORD*)(v4 + 776))
				sub_140306DB0(*(_QWORD*)(v4 + 64) + 880i64, (float*)(v4 + 784), *(_QWORD*)(v4 + 776), a4);
			*(_DWORD*)(v4 + 1408) |= 4u;
		}
		if ((v9 & 8) != 0)
		{
			v589.m128_u64[1] = (unsigned __int64)v8;
			v589.m128_u64[0] = v4 + 80;
			v750[1] = v8;
			v750[0] = (__m128*)(v4 + 80);
			sub_1401AFB10(v750, (__m128*)(v4 + 1264));
			v752[0] = v74;
			sub_1401AFC20(v752, (double*)(v4 + 1328));
			if (*(_QWORD*)(v4 + 1216))
			{
				v75 = *(float*)(*(_QWORD*)(v4 + 1216) + 1392i64);
			}
			else
			{
				v76 = _mm_mul_ps(*(__m128*)(v4 + 1312), *(__m128*)(v4 + 1312));
				v75 = (float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0])
					+ _mm_shuffle_ps(v76, v76, 170).m128_f32[0];
			}
			v77 = *(_QWORD*)(v4 + 64);
			*(float*)(v4 + 1392) = v75;
			v78 = 0;
			v79 = *(_DWORD*)(v77 + 384);
			v559 = 0;
			v564 = v79;
			if (v79)
			{
				while (1)
				{
					v80 = *(_QWORD*)(v77 + 392);
					v81 = *(_QWORD*)(v4 + 840);
					a4 = *(_QWORD*)(v4 + 824);
					v578 = v80;
					v82 = (__m128*)(a4 + ((unsigned __int64)v78 << 6));
					v83 = 352i64 * v78;
					v84 = *(__m128**)(v81 + v83 + 16);
					v85 = *(_QWORD*)(v81 + v83);
					v86 = v81 + v83;
					v597.m128_u64[0] = v83;
					v575 = v81 + v83;
					v567 = v85;
					v595 = v82;
					if (!v84)
						break;
					if (v84->m128_i32[0] == 1)
					{
						v88 = v84->m128_u32[1];
						a4 = v84->m128_i64[1];
						if (!v88)
							goto LABEL_243;
						v89 = *(_QWORD*)(a4 + 64);
						if (v88 >= *(_DWORD*)(v89 + 624))
							goto LABEL_243;
						v90 = *(unsigned __int16*)(*(_QWORD*)(v89 + 632) + 2i64 * v84->m128_i32[1]);
						if ((unsigned int)v90 >= *(_DWORD*)(v89 + 608))
							goto LABEL_243;
						v91 = *(_QWORD*)(v89 + 616) + 4 * v90;
						if (!v91)
							goto LABEL_243;
						v92 = (__m128*)(*(_QWORD*)(a4 + 824) + ((unsigned __int64)*(unsigned __int16*)(v91 + 2) << 6));
						*v82 = *v92;
						v82[1] = v92[1];
						v82[2] = v92[2];
						v82[3] = v92[3];
					LABEL_125:
						*(_DWORD*)(v86 + 24) = 0;
						goto LABEL_243;
					}
					if (v84->m128_i32[0] != 2)
						goto LABEL_125;
					v606.m128_u64[0] = (unsigned __int64)&v84[1];
					v87 = (__m128*)(*(_QWORD*)(v4 + 16) + 240i64);
					v739[0] = v84 + 1;
					v606.m128_u64[1] = (unsigned __int64)v87;
					v739[1] = v87;
					sub_1401AFB10(v739, v82);
					*(_DWORD*)(v86 + 24) = 0;
				LABEL_243:
					v77 = *(_QWORD*)(v4 + 64);
					v79 = *(_DWORD*)(v77 + 384);
					v78 = v559 + 1;
					v559 = v78;
					v564 = v79;
					if (v78 >= v79)
					{
						v9 = v566;
						goto LABEL_245;
					}
				}
				if (*(_QWORD*)(v4 + 1216))
				{
					if (!*(_DWORD*)(v4 + 1200))
					{
						v93 = *(_DWORD*)(v80 + v83 + 8);
						if (v93)
						{
							v94 = 0;
							v95 = *(_QWORD*)(*(_QWORD*)(v4 + 1216) + 64i64);
							v96 = *(_DWORD*)(v95 + 416);
							if (v96)
							{
								v97 = *(_QWORD*)(v95 + 424);
								v98 = *(_QWORD*)(v95 + 392);
								do
								{
									v99 = (v96 + v94) >> 1;
									v100 = *(unsigned __int16*)(v97 + 2 * v99);
									a4 = *(unsigned int*)(352i64 * *(unsigned __int16*)(v97 + 2 * v99) + v98 + 8);
									if (v93 >= (unsigned int)a4)
									{
										if (v93 <= (unsigned int)a4)
											goto LABEL_137;
										v94 = v99 + 1;
									}
									else
									{
										v96 = (v96 + v94) >> 1;
									}
								} while (v94 < v96);
							}
							v100 = -1;
						LABEL_137:
							v101 = *(_QWORD*)(v4 + 1216);
							if (v100 < *(_DWORD*)(*(_QWORD*)(v101 + 64) + 384i64))
							{
								v102 = (__m128*)(*(_QWORD*)(v101 + 824) + ((unsigned __int64)v100 << 6));
								v6 = 0i64;
								*v82 = *v102;
								v82[1] = v102[1];
								v82[2] = v102[2];
								v82[3] = v102[3];
							LABEL_242:
								*(_DWORD*)(v86 + 24) = 0;
								goto LABEL_243;
							}
							v79 = v564;
							v81 = *(_QWORD*)(v4 + 840);
							a4 = *(_QWORD*)(v4 + 824);
							v6 = 0i64;
						}
					}
				}
				v103 = *(unsigned __int16*)(v80 + v83 + 4);
				v571 = 0i64;
				if ((unsigned int)v103 < v79 && (~*(_BYTE*)(v80 + v83 + 2) & 0x70) != 0)
				{
					v104 = 352i64 * *(unsigned __int16*)(v80 + v83 + 4);
					v6 = (__m128*)(v104 + v81);
					v571 = (__m128*)(v104 + v81);
					if (!*(_DWORD*)(v104 + v81 + 24))
					{
						v105 = v80 + v104 + 208;
						v596.m128_u64[0] = v105;
						v596.m128_u64[1] = a4 + (v103 << 6);
						v731 = __PAIR128__(v596.m128_u64[1], v105);
						sub_1401AFB10((__m128**) & v731, v732);
						*((_QWORD*)&v602 + 1) = v106;
						v751[1] = v106;
						*(_QWORD*)&v602 = v732;
						v751[0] = v732;
						sub_1401AFB10(v751, v6 + 18);
						sub_1402F15D0((__int64)v6);
					}
				}
				v107 = (_DWORD*)(v80 + v83 + 16);
				if (*v107)
				{
					sub_140306EB0((__int64)v107, (__m128i*)(v86 + 32), v567);
					if (v6 && (*(_BYTE*)(v80 + v83 + 2) & 0x10) == 0)
					{
						v637 = _mm_mul_ps(v6[2], *(__m128*)(v86 + 32));
						*(__m128*)(v86 + 32) = v637;
					}
					v108 = (_DWORD*)(v80 + v83 + 64);
					if (*v108)
					{
						sub_140306EB0((__int64)v108, (__m128i*)(v86 + 96), v567);
						v109 = (__m128*)(v86 + 32);
						if (fabs(*(float*)(v86 + 96)) > 0.0000099999997)
							v109->m128_f32[0] = v109->m128_f32[0] / *(float*)(v86 + 96);
						if (fabs(*(float*)(v86 + 100)) > 0.0000099999997)
							*(float*)(v86 + 36) = *(float*)(v86 + 36) / *(float*)(v86 + 100);
						if (fabs(*(float*)(v86 + 104)) > 0.0000099999997)
							*(float*)(v86 + 40) = *(float*)(v86 + 40) / *(float*)(v86 + 104);
					}
					else
					{
						v109 = (__m128*)(v86 + 32);
					}
				}
				else if (!v6 || (*(_BYTE*)(v80 + v83 + 2) & 0x10) != 0)
				{
					v109 = (__m128*)(v86 + 32);
					v695 = xmmword_140B7B240;
					*(_OWORD*)(v86 + 32) = xmmword_140B7B240;
				}
				else
				{
					v109 = (__m128*)(v86 + 32);
					*(__m128*)(v86 + 32) = v6[2];
				}
				v110 = v567;
				v583 = v80 + v83 + 40;
				if (*(_DWORD*)(v80 + v83 + 40))
				{
					v565 = *(_DWORD*)(v567 + 180);
					if (v565)
					{
						v111 = v83 + 88;
						v112 = *(_DWORD*)(v567 + 180);
						v113 = (unsigned int*)(v567 + 116 + 8i64 * v565);
						v114 = (_DWORD*)(v80 + v111);
						v115 = v86 + 4 * (v565 + 32i64);
						do
						{
							v116 = *(v113 - 2);
							v113 -= 2;
							v115 -= 4i64;
							--v112;
							sub_140306FC0(v583, v116, (__m128i*) & v589);
							if (*v114)
							{
								sub_140306FC0((__int64)v114, *v113, &v613);
								if (fabs(*(float*)v613.m128i_i32) > 0.0000099999997)
									v589.m128_f32[0] = v589.m128_f32[0] / *(float*)v613.m128i_i32;
								if (fabs(*(float*)&v613.m128i_i32[1]) > 0.0000099999997)
									v589.m128_f32[1] = v589.m128_f32[1] / *(float*)&v613.m128i_i32[1];
								if (fabs(*(float*)&v613.m128i_i32[2]) > 0.0000099999997)
									v589.m128_f32[2] = v589.m128_f32[2] / *(float*)&v613.m128i_i32[2];
							}
							v117 = (__m128)v113[1];
							v639 = xmmword_140B7B240;
							v118 = _mm_sub_ps(v589, (__m128)xmmword_140B7B240);
							v119 = _mm_mul_ps(_mm_shuffle_ps(v117, v117, 0), v118);
							v709 = v118;
							v120 = *(__m128*)(v86 + 32);
							v641 = v119;
							v697 = _mm_add_ps(v119, (__m128)xmmword_140B7B240);
							v643 = _mm_mul_ps(v120, v697);
							*(__m128*)(v86 + 32) = v643;
						} while (v112);
						v4 = a1;
						v82 = v595;
						v83 = v597.m128_u64[0];
						v80 = v578;
						v6 = v571;
						v110 = v567;
						v109 = (__m128*)(v86 + 32);
					}
				}
				v121 = v80 + v83;
				if (*(_DWORD*)(v80 + v83 + 112))
				{
					sub_140307280(v121 + 112, (__m128*)(v86 + 160), v110, v121);
					if (v6 && (*(_BYTE*)(v80 + v83 + 2) & 0x20) == 0)
					{
						v122 = (__m128) * (unsigned int*)(v86 + 172);
						v123 = *(float*)(v86 + 160);
						v124 = v6[10].m128_f32[0];
						v125 = (__m128)LODWORD(v124);
						v126 = v6[10].m128_f32[3];
						v127 = v6[10].m128_f32[1];
						v128 = v6[10].m128_f32[2];
						v129 = (__m128) * (unsigned int*)(v86 + 164);
						v130 = v129;
						v131 = v129.m128_f32[0] * v127;
						v125.m128_f32[0] = (float)((float)((float)(v124 * v122.m128_f32[0]) + (float)(v123 * v126))
							+ (float)(*(float*)(v86 + 168) * v127))
							- (float)(*(float*)(v86 + 164) * v128);
						v129.m128_f32[0] = (float)((float)((float)(v129.m128_f32[0] * v126) - (float)(*(float*)(v86 + 168) * v124))
							+ (float)(v127 * v122.m128_f32[0]))
							+ (float)(v128 * v123);
						v130.m128_f32[0] = (float)((float)((float)(v130.m128_f32[0] * v124) + (float)(*(float*)(v86 + 168) * v126))
							- (float)(v127 * v123))
							+ (float)(v128 * v122.m128_f32[0]);
						v122.m128_f32[0] = (float)((float)((float)(v122.m128_f32[0] * v126) - (float)(v124 * v123)) - v131)
							- (float)(v128 * *(float*)(v86 + 168));
						v717 = _mm_unpacklo_ps(_mm_unpacklo_ps(v125, v130), _mm_unpacklo_ps(v129, v122));
						*(__m128*)(v86 + 160) = v717;
					}
				}
				else
				{
					if (!v6 || (*(_BYTE*)(v80 + v83 + 2) & 0x20) != 0)
					{
						v132 = xmmword_140C78450;
						v645 = xmmword_140C78450;
					}
					else
					{
						v132 = (__int128)v6[10];
					}
					*(_OWORD*)(v86 + 160) = v132;
				}
				v133 = v567;
				v584 = v80 + v83 + 136;
				if (*(_DWORD*)(v80 + v83 + 136))
				{
					v134 = *(_DWORD*)(v567 + 180);
					if (v134)
					{
						v135 = *(_DWORD*)(v567 + 180);
						v136 = 0i64;
						v137 = 0.0;
						v138 = (float*)(v567 + 120 + 8i64 * v134);
						v624 = 0i64;
						v139 = (__int64*)(v86 + 4 * (v134 + 48i64));
						do
						{
							v140 = *((_DWORD*)v138 - 3);
							v138 -= 2;
							v139 = (__int64*)((char*)v139 - 4);
							--v135;
							sub_1403073A0(v584, v140, &v623, v121, v139);
							v141 = v623;
							v142 = _mm_mul_ps(v136, v623);
							v143 = _mm_add_ps(v142, _mm_shuffle_ps(v142, v142, 78));
							if ((float)(_mm_shuffle_ps(v143, v143, 177).m128_f32[0] + v143.m128_f32[0]) < 0.0)
							{
								v141 = _mm_sub_ps((__m128)0i64, v623);
								v699 = v141;
								v623 = v141;
							}
							*(float*)&v137 = *(float*)&v137 + *v138;
							v136 = _mm_add_ps(
								_mm_mul_ps(v141, _mm_shuffle_ps((__m128) * (unsigned int*)v138, (__m128) * (unsigned int*)v138, 0)),
								v136);
						} while (v135);
						v4 = a1;
						v82 = v595;
						v83 = v597.m128_u64[0];
						v80 = v578;
						v647 = v136;
						v624 = v136;
						if (*(float*)&v137 > 0.0000099999997)
						{
							v144 = _mm_mul_ps(v136, v136);
							v145 = _mm_add_ps(v144, _mm_shuffle_ps(v144, v144, 78));
							v146 = _mm_add_ps(_mm_shuffle_ps(v145, v145, 177), v145);
							if (v146.m128_f32[0] > *(float*)&dword_140C42008)
							{
								v146.m128_f32[0] = fsqrt(v146.m128_f32[0]);
								v627 = xmmword_140C78450;
								v630 = _mm_div_ps(v136, _mm_shuffle_ps(v146, v146, 0));
								v147 = sub_1401B1EE0(v711, (__m128*) & v627, &v630, v137);
								v148 = *(float*)(v86 + 172);
								v149 = *(float*)(v86 + 160);
								v150 = *(float*)(v86 + 164);
								v151 = *(float*)(v86 + 168);
								v153 = _mm_shuffle_ps(*v147, *v147, 255);
								v154 = _mm_shuffle_ps(*v147, *v147, 85);
								v155 = _mm_shuffle_ps(*v147, *v147, 170);
								v156 = v154;
								v157 = v155;
								v624 = *v147;
								v152 = v624;
								v152.m128_f32[0] = (float)((float)(v624.m128_f32[0] + (float)(v153.m128_f32[0] * v149))
									+ (float)(v150 * v155.m128_f32[0]))
									- (float)(v154.m128_f32[0] * v151);
								v156.m128_f32[0] = (float)((float)((float)(v154.m128_f32[0] * v148) - (float)(v155.m128_f32[0] * v149))
									+ (float)(v153.m128_f32[0] * v150))
									+ (float)(v624.m128_f32[0] * v151);
								v157.m128_f32[0] = (float)((float)((float)(v155.m128_f32[0] * v148) + (float)(v154.m128_f32[0] * v149))
									- (float)(v150 * v624.m128_f32[0]))
									+ (float)(v153.m128_f32[0] * v151);
								v153.m128_f32[0] = (float)((float)((float)(v153.m128_f32[0] * v148) - (float)(v624.m128_f32[0] * v149))
									- (float)(v150 * v154.m128_f32[0]))
									- (float)(v155.m128_f32[0] * v151);
								v649 = _mm_unpacklo_ps(_mm_unpacklo_ps(v152, v157), _mm_unpacklo_ps(v156, v153));
								*(__m128*)(v86 + 160) = v649;
							}
						}
						v133 = v567;
					}
				}
				v158 = v80 + v83;
				v572 = (__m128*)(v86 + 224);
				if (*(_DWORD*)(v80 + v83 + 160))
				{
					sub_140307720(v158 + 160, (__m128*)(v86 + 224), v133, v158);
				}
				else
				{
					v701 = 0i64;
					*(_OWORD*)(v86 + 224) = 0i64;
				}
				v585 = (int*)(v80 + v83 + 184);
				if (*(_DWORD*)(v80 + v83 + 184))
				{
					v159 = *(_DWORD*)(v567 + 180);
					if (v159)
					{
						v160 = *(_DWORD*)(v567 + 180);
						v161 = (unsigned int*)(v567 + 120 + 8i64 * v159);
						v162 = (char*)(v86 + 4 * (v159 + 64i64));
						do
						{
							v163 = *(v161 - 3);
							v161 -= 2;
							v162 -= 4;
							sub_140307830(v585, v163, &v629, v158, v162);
							v164 = _mm_mul_ps(v629, _mm_shuffle_ps((__m128) * v161, (__m128) * v161, 0));
							v165 = _mm_add_ps(*v572, v164);
							v651 = v164;
							*v572 = v165;
							--v160;
						} while (v160);
						v4 = a1;
						v82 = v595;
						v86 = v575;
						v83 = v597.m128_u64[0];
						v80 = v578;
					}
				}
				if (v6 && (*(_BYTE*)(v80 + v83 + 2) & 0x40) == 0)
				{
					v166 = *(__m128*)(v86 + 224);
					*(__m128*)(v86 + 224) = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v166, v166, 85), v6[19]),
								_mm_mul_ps(_mm_shuffle_ps(v166, v166, 0), v6[18])),
							_mm_mul_ps(_mm_shuffle_ps(v166, v166, 170), v6[20])),
						v6[21]);
				}
				sub_1402F13D0(v86);
				v167 = *(__m128**)(v86 + 8);
				if (v167)
				{
					if ((v167->m128_i8[0] & 4) != 0)
					{
						v168 = v167[3];
						v715 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v168, v168, 85), *(__m128*)(v86 + 304)),
									_mm_mul_ps(_mm_shuffle_ps(v168, v168, 0), *(__m128*)(v86 + 288))),
								_mm_mul_ps(_mm_shuffle_ps(v168, v168, 170), *(__m128*)(v86 + 320))),
							*(__m128*)(v86 + 336));
						*(__m128*)(v86 + 224) = v715;
					}
					if ((v167->m128_i8[0] & 2) != 0)
					{
						v169 = (__m128)v167[2].m128_u32[3];
						v170 = *(float*)(v86 + 172);
						v171 = (__m128)v167[2].m128_u32[0];
						v172 = *(float*)(v86 + 160);
						v173 = *(float*)(v86 + 164);
						v174 = (__m128)v167[2].m128_u32[2];
						v175 = *(float*)(v86 + 168);
						v176 = (__m128)v167[2].m128_u32[1];
						v171.m128_f32[0] = (float)((float)((float)(v171.m128_f32[0] * v170) + (float)(v167[2].m128_f32[3] * v172))
							+ (float)(v167[2].m128_f32[2] * v173))
							- (float)(v167[2].m128_f32[1] * v175);
						v176.m128_f32[0] = (float)((float)((float)(v176.m128_f32[0] * v170) - (float)(v167[2].m128_f32[2] * v172))
							+ (float)(v167[2].m128_f32[3] * v173))
							+ (float)(v167[2].m128_f32[0] * v175);
						v174.m128_f32[0] = (float)((float)((float)(v174.m128_f32[0] * v170) + (float)(v167[2].m128_f32[1] * v172))
							- (float)(v167[2].m128_f32[0] * v173))
							+ (float)(v167[2].m128_f32[3] * v175);
						v169.m128_f32[0] = (float)((float)((float)(v169.m128_f32[0] * v170) - (float)(v167[2].m128_f32[0] * v172))
							- (float)(v167[2].m128_f32[1] * v173))
							- (float)(v167[2].m128_f32[2] * v175);
						v653 = _mm_unpacklo_ps(_mm_unpacklo_ps(v171, v174), _mm_unpacklo_ps(v176, v169));
						*(__m128*)(v86 + 160) = v653;
					}
					if ((v167->m128_i8[0] & 1) != 0)
					{
						v703 = _mm_mul_ps(v167[1], *v109);
						*v109 = v703;
					}
					sub_1402F13D0(v86);
				}
				v592.m128_u64[0] = v80 + v83 + 272;
				v592.m128_u64[1] = v86 + 288;
				v733[0] = (__m128*)v592.m128_u64[0];
				v733[1] = (__m128*)(v86 + 288);
				sub_1401AFB10(v733, v734);
				v590.m128_u64[0] = (unsigned __int64)v734;
				v741[0] = v734;
				v590.m128_u64[1] = v4 + 1264;
				v741[1] = (__m128*)(v4 + 1264);
				sub_1401AFB10(v741, v82);
				v177 = *(_WORD*)(v80 + v83 + 2);
				if ((v177 & 0x428F) == 0)
				{
					v6 = 0i64;
					if ((*(_BYTE*)(96i64 * *(unsigned __int16*)(v80 + v83 + 6) + *(_QWORD*)(v4 + 496) + 54) & 2) != 0)
					{
						v288 = _mm_mul_ps(*v82, *v82);
						v82->m128_f32[0] = fsqrt(
							(float)(v288.m128_f32[0] + _mm_shuffle_ps(v288, v288, 85).m128_f32[0])
							+ _mm_shuffle_ps(v288, v288, 170).m128_f32[0]);
						v82->m128_i32[1] = 0;
						v82->m128_i32[2] = 0;
						v289 = v82[1];
						v82[1].m128_i32[0] = 0;
						v82[1].m128_i32[1] = 0;
						v290 = _mm_mul_ps(v289, v289);
						v82[1].m128_f32[2] = fsqrt(
							(float)(v290.m128_f32[0] + _mm_shuffle_ps(v290, v290, 85).m128_f32[0])
							+ _mm_shuffle_ps(v290, v290, 170).m128_f32[0]);
						v291 = _mm_mul_ps(v82[2], v82[2]);
						v82[2].m128_i32[0] = 0;
						v82[2].m128_f32[1] = -fsqrt(
							(float)(v291.m128_f32[0] + _mm_shuffle_ps(v291, v291, 85).m128_f32[0])
							+ _mm_shuffle_ps(v291, v291, 170).m128_f32[0]);
						v82[2].m128_i32[2] = 0;
						*(_DWORD*)(v86 + 24) = 0;
					}
				LABEL_230:
					if ((*(_WORD*)(v80 + v83 + 2) & 0x2100) != 0)
					{
						v292 = (__m128*)(*(_QWORD*)(v4 + 16) + 304i64);
						v737[0] = v82;
						v737[1] = v292;
						sub_1401AFB10(v737, &v607);
						v293 = *(__m128*)(v80 + v83 + 336);
						v294 = v608;
						v295 = v607;
						v296 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 488i64) == 0i64;
						v297 = v609;
						v298 = _mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(
									_mm_mul_ps(_mm_shuffle_ps(v293, v293, 85), v608),
									_mm_mul_ps(_mm_shuffle_ps(v293, v293, 0), v607)),
								_mm_mul_ps(_mm_shuffle_ps(v293, v293, 170), v609)),
							v610);
						v628 = v298;
						if (v296)
						{
							v301 = (__m128)xmmword_140C77870;
							v300 = 0.0;
							v756 = 0.0;
							v658 = xmmword_140C77870;
							v755[0] = (__m128)xmmword_140C77870;
						}
						else
						{
							v299 = (*(_WORD*)(v80 + v83 + 2) & 0x100) != 0;
							if ((*(_WORD*)(v80 + v83 + 2) & 0x2000) != 0)
								v299 = (unsigned int)v299 | 2;
							v656 = xmmword_140C77870;
							v631 = _mm_add_ps((__m128)xmmword_140C77870, v298);
							if (!(*(unsigned int(__fastcall**)(_QWORD, __m128*, __m128*, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(v4 + 16) + 488i64)
								+ 440i64))(
									*(_QWORD*)(*(_QWORD*)(v4 + 16) + 488i64),
									&v631,
									v755,
									v299,
									0i64))
								goto LABEL_243;
							v297 = v609;
							v294 = v608;
							v295 = v607;
							v300 = v756;
							v301 = v755[0];
						}
						if ((*(_WORD*)(v80 + v83 + 2) & 0x100) != 0)
							v610.m128_f32[1] = v610.m128_f32[1] + (float)(v300 - v628.m128_f32[1]);
						if ((*(_WORD*)(v80 + v83 + 2) & 0x2000) != 0)
						{
							v302 = 0i64;
							v660 = v301;
							v303 = _mm_mul_ps(_mm_shuffle_ps(v301, v301, 201), _mm_shuffle_ps(v295, v295, 210));
							v304 = _mm_mul_ps(v294, v294);
							v305 = _mm_mul_ps(v297, v297);
							v306 = _mm_shuffle_ps(v295, v295, 201);
							v307 = _mm_mul_ps(v295, v295);
							v662 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v301, v301, 210), v306), v303);
							v308 = _mm_mul_ps(v662, v662);
							v308.m128_f32[0] = (float)(v308.m128_f32[0] + _mm_shuffle_ps(v308, v308, 85).m128_f32[0])
								+ _mm_shuffle_ps(v308, v308, 170).m128_f32[0];
							v306.m128_f32[0] = 1.0 / fsqrt(v308.m128_f32[0]);
							v302.m128_f32[0] = fmaxf(
								(float)((float)(3.0
									- (float)((float)(v308.m128_f32[0] * v306.m128_f32[0])
										* v306.m128_f32[0]))
									* 0.5)
								* v306.m128_f32[0],
								0.0);
							v664 = _mm_mul_ps(_mm_shuffle_ps(v302, v302, 0), v662);
							v309 = _mm_shuffle_ps(v307, v307, 85);
							v666 = _mm_sub_ps(
								_mm_mul_ps(_mm_shuffle_ps(v664, v664, 210), _mm_shuffle_ps(v301, v301, 201)),
								_mm_mul_ps(_mm_shuffle_ps(v664, v664, 201), _mm_shuffle_ps(v301, v301, 210)));
							v309.m128_f32[0] = fsqrt(
								(float)(v307.m128_f32[0] + v309.m128_f32[0])
								+ _mm_shuffle_ps(v307, v307, 170).m128_f32[0]);
							v310 = (__m128i)_mm_mul_ps(v666, _mm_shuffle_ps(v309, v309, 0));
							v311 = _mm_shuffle_ps(v304, v304, 85);
							v668 = v310;
							v607.m128_u64[0] = v310.m128i_i64[0];
							v607.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v310, 8));
							v311.m128_f32[0] = fsqrt(
								(float)(v304.m128_f32[0] + v311.m128_f32[0])
								+ _mm_shuffle_ps(v304, v304, 170).m128_f32[0]);
							v670 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v311, v311, 0), v301);
							v608.m128_u64[0] = v670.m128i_i64[0];
							v608.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v670, 8));
							v312 = _mm_shuffle_ps(v305, v305, 85);
							v312.m128_f32[0] = fsqrt(
								(float)(v305.m128_f32[0] + v312.m128_f32[0])
								+ _mm_shuffle_ps(v305, v305, 170).m128_f32[0]);
							v672 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v312, v312, 0), v664);
							v609.m128_u64[0] = v672.m128i_i64[0];
							v609.m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v672, 8));
						}
						v313 = (__m128*)(*(_QWORD*)(v4 + 16) + 240i64);
						v743[0] = &v607;
						v743[1] = v313;
						sub_1401AFB10(v743, v82);
						goto LABEL_242;
					}
					goto LABEL_243;
				}
				if ((v177 & 0x200) != 0)
				{
					v178 = *v82;
					v179 = 0i64;
					v180 = (__m128*)(*(_QWORD*)(v4 + 16) + 256i64);
					v181 = *v180;
					v182 = _mm_mul_ps(_mm_shuffle_ps(v181, v181, 201), _mm_shuffle_ps(v178, v178, 210));
					v183 = _mm_mul_ps(v178, v178);
					v655 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(*v180, *v180, 210), _mm_shuffle_ps(*v82, *v82, 201)), v182);
					v184 = _mm_mul_ps(v655, v655);
					v184.m128_f32[0] = (float)(v184.m128_f32[0] + _mm_shuffle_ps(v184, v184, 85).m128_f32[0])
						+ _mm_shuffle_ps(v184, v184, 170).m128_f32[0];
					v185 = 1.0 / fsqrt(v184.m128_f32[0]);
					v179.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v184.m128_f32[0] * v185) * v185)) * 0.5) * v185,
						0.0);
					v186 = _mm_mul_ps(_mm_shuffle_ps(v179, v179, 0), v655);
					v711[2] = v186;
					v187 = _mm_shuffle_ps(v183, v183, 85);
					v657 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v186, v186, 210), _mm_shuffle_ps(v181, v181, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v186, v186, 201), _mm_shuffle_ps(v181, v181, 210)));
					v187.m128_f32[0] = fsqrt(
						(float)(v183.m128_f32[0] + v187.m128_f32[0])
						+ _mm_shuffle_ps(v183, v183, 170).m128_f32[0]);
					v188 = (__m128i)_mm_mul_ps(v657, _mm_shuffle_ps(v187, v187, 0));
					v82->m128_i32[0] = _mm_cvtsi128_si32(v188);
					v705 = v188;
					v82->m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v188, 4));
					v82->m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v188, 8));
					v189 = _mm_mul_ps(v82[1], v82[1]);
					v190 = _mm_shuffle_ps(v189, v189, 85);
					v190.m128_f32[0] = fsqrt(
						(float)(v189.m128_f32[0] + v190.m128_f32[0])
						+ _mm_shuffle_ps(v189, v189, 170).m128_f32[0]);
					v191 = (__m128i)_mm_mul_ps(*v180, _mm_shuffle_ps(v190, v190, 0));
					v82[1].m128_i32[0] = _mm_cvtsi128_si32(v191);
					v659 = v191;
					v82[1].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v191, 4));
					v82[1].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v191, 8));
					v192 = _mm_mul_ps(v82[2], v82[2]);
					v193 = _mm_shuffle_ps(v192, v192, 170);
					v193.m128_f32[0] = fsqrt((float)(v192.m128_f32[0] + _mm_shuffle_ps(v192, v192, 85).m128_f32[0]) + v193.m128_f32[0]);
					v194 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v193, v193, 0), v186);
					v82[2].m128_i32[0] = _mm_cvtsi128_si32(v194);
					v719 = v194;
					v82[2].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v194, 4));
					v82[2].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v194, 8));
				}
				v195 = *(_WORD*)(v80 + v83 + 2);
				if ((v195 & 0x80u) != 0)
				{
					v196 = v82[3];
					v197 = 0i64;
					v197.m128_f32[0] = 3.0;
					v198 = _mm_mul_ps(v196, v196);
					v199 = v197;
					v200 = (float)(v198.m128_f32[0] + _mm_shuffle_ps(v198, v198, 85).m128_f32[0])
						+ _mm_shuffle_ps(v198, v198, 170).m128_f32[0];
					v201 = fsqrt(v200);
					v663 = (__m128)xmmword_140C77870;
					v199.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v200 * (float)(1.0 / v201)) * (float)(1.0 / v201)))
							* 0.5)
						* (float)(1.0 / v201),
						0.0);
					v202 = _mm_mul_ps(_mm_shuffle_ps(v199, v199, 0), v196);
					v203 = _mm_sub_ps((__m128)0i64, v202);
					v661 = v202;
					v707 = v203;
					v693 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v203, v203, 210), _mm_shuffle_ps(v663, v663, 201)),
						_mm_mul_ps(
							_mm_shuffle_ps(v203, v203, 201),
							_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
					v204 = _mm_mul_ps(v693, v693);
					v205 = (float)(v204.m128_f32[0] + _mm_shuffle_ps(v204, v204, 85).m128_f32[0])
						+ _mm_shuffle_ps(v204, v204, 170).m128_f32[0];
					v202.m128_f32[0] = 1.0 / fsqrt(v205);
					v197.m128_f32[0] = 3.0 - (float)((float)(v205 * v202.m128_f32[0]) * v202.m128_f32[0]);
					v206 = _mm_mul_ps(*v82, *v82);
					v197.m128_f32[0] = fmaxf((float)(v197.m128_f32[0] * 0.5) * v202.m128_f32[0], 0.0);
					v665 = _mm_mul_ps(_mm_shuffle_ps(v197, v197, 0), v693);
					v202.m128_f32[0] = _mm_shuffle_ps(v206, v206, 85).m128_f32[0];
					v207 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v665, v665, 210), _mm_shuffle_ps(v203, v203, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v665, v665, 201), _mm_shuffle_ps(v203, v203, 210)));
					v204.m128_i32[0] = v206.m128_i32[0];
					v208 = _mm_shuffle_ps(v206, v206, 170);
					v694 = v207;
					v208.m128_f32[0] = fsqrt((float)(v204.m128_f32[0] + v202.m128_f32[0]) + v208.m128_f32[0]);
					v209 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v208, v208, 0), v665);
					v82->m128_i32[0] = _mm_cvtsi128_si32(v209);
					v667 = v209;
					v82->m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v209, 4));
					v82->m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v209, 8));
					v210 = _mm_mul_ps(v82[1], v82[1]);
					v211 = _mm_shuffle_ps(v210, v210, 85);
					v211.m128_f32[0] = fsqrt(
						(float)(v210.m128_f32[0] + v211.m128_f32[0])
						+ _mm_shuffle_ps(v210, v210, 170).m128_f32[0]);
					v212 = (__m128i)_mm_mul_ps(v207, _mm_shuffle_ps(v211, v211, 0));
					v82[1].m128_i32[0] = _mm_cvtsi128_si32(v212);
					v696 = v212;
					v82[1].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v212, 4));
					v82[1].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v212, 8));
					v213 = _mm_mul_ps(v82[2], v82[2]);
					v214 = _mm_shuffle_ps(v213, v213, 170);
					v214.m128_f32[0] = fsqrt((float)(v213.m128_f32[0] + _mm_shuffle_ps(v213, v213, 85).m128_f32[0]) + v214.m128_f32[0]);
					v215 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v214, v214, 0), v203);
					v669 = v215;
					goto LABEL_226;
				}
				if ((v195 & 1) != 0)
				{
					v216 = v82[3];
					v217 = 0i64;
					v217.m128_f32[0] = 3.0;
					v218 = _mm_mul_ps(v216, v216);
					v219 = v217;
					v220 = (float)(v218.m128_f32[0] + _mm_shuffle_ps(v218, v218, 85).m128_f32[0])
						+ _mm_shuffle_ps(v218, v218, 170).m128_f32[0];
					v221 = fsqrt(v220);
					v700 = (__m128)xmmword_140C77870;
					v219.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v220 * (float)(1.0 / v221)) * (float)(1.0 / v221)))
							* 0.5)
						* (float)(1.0 / v221),
						0.0);
					v222 = _mm_mul_ps(_mm_shuffle_ps(v219, v219, 0), v216);
					v223 = _mm_sub_ps((__m128)0i64, v222);
					v698 = v222;
					v671 = v223;
					v634 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v223, v223, 210), _mm_shuffle_ps(v700, v700, 201)),
						_mm_mul_ps(
							_mm_shuffle_ps(v223, v223, 201),
							_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
					v224 = _mm_mul_ps(v634, v634);
					v225 = (float)(v224.m128_f32[0] + _mm_shuffle_ps(v224, v224, 85).m128_f32[0])
						+ _mm_shuffle_ps(v224, v224, 170).m128_f32[0];
					v222.m128_f32[0] = 1.0 / fsqrt(v225);
					v217.m128_f32[0] = 3.0 - (float)((float)(v225 * v222.m128_f32[0]) * v222.m128_f32[0]);
					v226 = _mm_mul_ps(*v82, *v82);
					v217.m128_f32[0] = fmaxf((float)(v217.m128_f32[0] * 0.5) * v222.m128_f32[0], 0.0);
					v702 = _mm_mul_ps(_mm_shuffle_ps(v217, v217, 0), v634);
					v222.m128_f32[0] = _mm_shuffle_ps(v226, v226, 85).m128_f32[0];
					v227 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v702, v702, 210), _mm_shuffle_ps(v223, v223, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v702, v702, 201), _mm_shuffle_ps(v223, v223, 210)));
					v224.m128_i32[0] = v226.m128_i32[0];
					v228 = _mm_shuffle_ps(v226, v226, 170);
					v674[1] = v227;
					v228.m128_f32[0] = fsqrt((float)(v224.m128_f32[0] + v222.m128_f32[0]) + v228.m128_f32[0]);
					v229 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v228, v228, 0), v702);
					v82->m128_i32[0] = _mm_cvtsi128_si32(v229);
					v704 = v229;
					v82->m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v229, 4));
					v82->m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v229, 8));
					v230 = _mm_mul_ps(v82[1], v82[1]);
					v224.m128_i32[0] = v230.m128_i32[0];
					v222.m128_f32[0] = _mm_shuffle_ps(v230, v230, 85).m128_f32[0];
					v231 = _mm_shuffle_ps(v230, v230, 170);
					v231.m128_f32[0] = fsqrt((float)(v224.m128_f32[0] + v222.m128_f32[0]) + v231.m128_f32[0]);
					v232 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v231, v231, 0), v223);
					v82[1].m128_i32[0] = _mm_cvtsi128_si32(v232);
					v676 = v232;
					v82[1].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v232, 4));
					v82[1].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v232, 8));
					v233 = _mm_mul_ps(v82[2], v82[2]);
					v234 = _mm_shuffle_ps(v233, v233, 170);
					v234.m128_f32[0] = -fsqrt(
						(float)(v233.m128_f32[0] + _mm_shuffle_ps(v233, v233, 85).m128_f32[0])
						+ v234.m128_f32[0]);
					v215 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v234, v234, 0), v227);
					v706 = v215;
					goto LABEL_226;
				}
				if ((v195 & 2) != 0)
				{
					v235 = 0i64;
					v235.m128_f32[0] = 3.0;
					v236 = _mm_mul_ps(v82[1], v82[1]);
					v237 = (float)(v236.m128_f32[0] + _mm_shuffle_ps(v236, v236, 85).m128_f32[0])
						+ _mm_shuffle_ps(v236, v236, 170).m128_f32[0];
					v678 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v82[3], v82[3], 210), _mm_shuffle_ps(*v82, *v82, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v82[3], v82[3], 201), _mm_shuffle_ps(*v82, *v82, 210)));
					v238 = _mm_mul_ps(v678, v678);
					v238.m128_f32[0] = (float)(v238.m128_f32[0] + _mm_shuffle_ps(v238, v238, 85).m128_f32[0])
						+ _mm_shuffle_ps(v238, v238, 170).m128_f32[0];
					v239 = v235;
					v240 = v238;
					v240.m128_f32[0] = fsqrt(v238.m128_f32[0]);
					v239.m128_f32[0] = (float)((float)(3.0
						- (float)((float)(v238.m128_f32[0] * (float)(1.0 / v240.m128_f32[0]))
							* (float)(1.0 / v240.m128_f32[0])))
						* 0.5)
						* (float)(1.0 / v240.m128_f32[0]);
					v240.m128_f32[0] = fsqrt(v237);
					v239.m128_f32[0] = fmaxf(v239.m128_f32[0], 0.0);
					v708 = _mm_mul_ps(_mm_shuffle_ps(v239, v239, 0), v678);
					v241 = (__m128i)_mm_mul_ps(v708, _mm_shuffle_ps(v240, v240, 0));
					v82[1].m128_i32[0] = _mm_cvtsi128_si32(v241);
					v680 = v241;
					v82[1].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v241, 4));
					v82[1].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v241, 8));
					v242 = _mm_mul_ps(v82[2], v82[2]);
					v710 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v82[1], v82[1], 210), _mm_shuffle_ps(*v82, *v82, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v82[1], v82[1], 201), _mm_shuffle_ps(*v82, *v82, 210)));
					v243 = _mm_mul_ps(v710, v710);
					v243.m128_f32[0] = (float)(v243.m128_f32[0] + _mm_shuffle_ps(v243, v243, 85).m128_f32[0])
						+ _mm_shuffle_ps(v243, v243, 170).m128_f32[0];
					v244 = v243;
					v244.m128_f32[0] = 1.0 / fsqrt(v243.m128_f32[0]);
					v235.m128_f32[0] = (float)((float)(3.0
						- (float)((float)(v243.m128_f32[0] * v244.m128_f32[0]) * v244.m128_f32[0]))
						* 0.5)
						* v244.m128_f32[0];
					v244.m128_f32[0] = fsqrt(
						(float)(v242.m128_f32[0] + _mm_shuffle_ps(v242, v242, 85).m128_f32[0])
						+ _mm_shuffle_ps(v242, v242, 170).m128_f32[0]);
					v235.m128_f32[0] = fmaxf(v235.m128_f32[0], 0.0);
					v682 = _mm_mul_ps(_mm_shuffle_ps(v235, v235, 0), v710);
					v245 = (__m128i)_mm_mul_ps(v682, _mm_shuffle_ps(v244, v244, 0));
					v711[1] = (__m128)v245;
				}
				else
				{
					if ((v195 & 4) == 0)
					{
						if ((v195 & 8) != 0)
						{
							v256 = v82[2];
							v257 = 0i64;
							v257.m128_f32[0] = 3.0;
							v258 = _mm_mul_ps(v82[1], v82[1]);
							v690 = (__m128)xmmword_140C77860;
							v259 = (float)(v258.m128_f32[0] + _mm_shuffle_ps(v258, v258, 85).m128_f32[0])
								+ _mm_shuffle_ps(v258, v258, 170).m128_f32[0];
							v718 = _mm_sub_ps(
								_mm_mul_ps(_mm_shuffle_ps(v690, v690, 210), _mm_shuffle_ps(v256, v256, 201)),
								_mm_mul_ps(
									_mm_shuffle_ps((__m128)xmmword_140C77860, (__m128)xmmword_140C77860, 201),
									_mm_shuffle_ps(v256, v256, 210)));
							v260 = _mm_mul_ps(v718, v718);
							v260.m128_f32[0] = (float)(v260.m128_f32[0] + _mm_shuffle_ps(v260, v260, 85).m128_f32[0])
								+ _mm_shuffle_ps(v260, v260, 170).m128_f32[0];
							v261 = v257;
							v262 = v260;
							v262.m128_f32[0] = fsqrt(v260.m128_f32[0]);
							v261.m128_f32[0] = (float)((float)(3.0
								- (float)((float)(v260.m128_f32[0] * (float)(1.0 / v262.m128_f32[0]))
									* (float)(1.0 / v262.m128_f32[0])))
								* 0.5)
								* (float)(1.0 / v262.m128_f32[0]);
							v262.m128_f32[0] = fsqrt(v259);
							v261.m128_f32[0] = fmaxf(v261.m128_f32[0], 0.0);
							v692 = _mm_mul_ps(_mm_shuffle_ps(v261, v261, 0), v718);
							v263 = (__m128i)_mm_mul_ps(v692, _mm_shuffle_ps(v262, v262, 0));
							v82[1].m128_i32[0] = _mm_cvtsi128_si32(v263);
							v720 = v263;
							v82[1].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v263, 4));
							v82[1].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v263, 8));
							v264 = _mm_mul_ps(*v82, *v82);
							v635 = _mm_sub_ps(
								_mm_mul_ps(_mm_shuffle_ps(v82[2], v82[2], 210), _mm_shuffle_ps(v82[1], v82[1], 201)),
								_mm_mul_ps(_mm_shuffle_ps(v82[2], v82[2], 201), _mm_shuffle_ps(v82[1], v82[1], 210)));
							v265 = _mm_mul_ps(v635, v635);
							v6 = 0i64;
							v265.m128_f32[0] = (float)(v265.m128_f32[0] + _mm_shuffle_ps(v265, v265, 85).m128_f32[0])
								+ _mm_shuffle_ps(v265, v265, 170).m128_f32[0];
							v266 = v265;
							v266.m128_f32[0] = 1.0 / fsqrt(v265.m128_f32[0]);
							v257.m128_f32[0] = (float)((float)(3.0
								- (float)((float)(v265.m128_f32[0] * v266.m128_f32[0]) * v266.m128_f32[0]))
								* 0.5)
								* v266.m128_f32[0];
							v266.m128_f32[0] = fsqrt(
								(float)(v264.m128_f32[0] + _mm_shuffle_ps(v264, v264, 85).m128_f32[0])
								+ _mm_shuffle_ps(v264, v264, 170).m128_f32[0]);
							v257.m128_f32[0] = fmaxf(v257.m128_f32[0], 0.0);
							v636 = _mm_mul_ps(_mm_shuffle_ps(v257, v257, 0), v635);
							v267 = (__m128i)_mm_mul_ps(v636, _mm_shuffle_ps(v266, v266, 0));
							v82->m128_i32[0] = _mm_cvtsi128_si32(v267);
							v638 = v267;
							v82->m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v267, 4));
							v82->m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v267, 8));
							*(_DWORD*)(v86 + 24) = 0;
							goto LABEL_230;
						}
						if ((v195 & 0x4000) == 0)
							goto LABEL_227;
						v268 = 0i64;
						v268.m128_f32[0] = 3.0;
						v269 = v268;
						v270 = a2[2];
						v271 = _mm_mul_ps(v270, v270);
						v272 = (float)(v271.m128_f32[0] + _mm_shuffle_ps(v271, v271, 85).m128_f32[0])
							+ _mm_shuffle_ps(v271, v271, 170).m128_f32[0];
						v273 = fsqrt(v272);
						v642 = (__m128)xmmword_140C77870;
						v269.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v272 * (float)(1.0 / v273)) * (float)(1.0 / v273)))
								* 0.5)
							* (float)(1.0 / v273),
							0.0);
						v274 = _mm_mul_ps(_mm_shuffle_ps(v269, v269, 0), v270);
						v640 = v274;
						v644 = _mm_sub_ps(
							_mm_mul_ps(_mm_shuffle_ps(v274, v274, 210), _mm_shuffle_ps(v642, v642, 201)),
							_mm_mul_ps(
								_mm_shuffle_ps(v274, v274, 201),
								_mm_shuffle_ps((__m128)xmmword_140C77870, (__m128)xmmword_140C77870, 210)));
						v275 = _mm_mul_ps(v644, v644);
						v276 = (float)(v275.m128_f32[0] + _mm_shuffle_ps(v275, v275, 85).m128_f32[0])
							+ _mm_shuffle_ps(v275, v275, 170).m128_f32[0];
						v277 = 1.0 / fsqrt(v276);
						v268.m128_f32[0] = 3.0 - (float)((float)(v276 * v277) * v277);
						v278 = _mm_mul_ps(*v82, *v82);
						v268.m128_f32[0] = fmaxf((float)(v268.m128_f32[0] * 0.5) * v277, 0.0);
						v646 = _mm_mul_ps(_mm_shuffle_ps(v268, v268, 0), v644);
						v279 = _mm_shuffle_ps(v278, v278, 85).m128_f32[0];
						v280 = _mm_sub_ps(
							_mm_mul_ps(_mm_shuffle_ps(v646, v646, 210), _mm_shuffle_ps(v274, v274, 201)),
							_mm_mul_ps(_mm_shuffle_ps(v646, v646, 201), _mm_shuffle_ps(v274, v274, 210)));
						v275.m128_i32[0] = v278.m128_i32[0];
						v281 = _mm_shuffle_ps(v278, v278, 170);
						v648 = v280;
						v281.m128_f32[0] = fsqrt((float)(v275.m128_f32[0] + v279) + v281.m128_f32[0]);
						v282 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v281, v281, 0), v646);
						v650 = v282;
						v82->m128_i32[0] = _mm_cvtsi128_si32(v282);
						v82->m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v282, 4));
						v82->m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v282, 8));
						v283 = _mm_mul_ps(v82[1], v82[1]);
						v284 = _mm_shuffle_ps(v283, v283, 85);
						v284.m128_f32[0] = fsqrt(
							(float)(v283.m128_f32[0] + v284.m128_f32[0])
							+ _mm_shuffle_ps(v283, v283, 170).m128_f32[0]);
						v285 = (__m128i)_mm_mul_ps(v280, _mm_shuffle_ps(v284, v284, 0));
						v82[1].m128_i32[0] = _mm_cvtsi128_si32(v285);
						v652 = v285;
						v82[1].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v285, 4));
						v82[1].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v285, 8));
						v286 = _mm_mul_ps(v82[2], v82[2]);
						v287 = _mm_shuffle_ps(v286, v286, 170);
						v287.m128_f32[0] = fsqrt(
							(float)(v286.m128_f32[0] + _mm_shuffle_ps(v286, v286, 85).m128_f32[0])
							+ v287.m128_f32[0]);
						v215 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v287, v287, 0), v274);
						v654 = v215;
					LABEL_226:
						v82[2].m128_i32[0] = _mm_cvtsi128_si32(v215);
						v82[2].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v215, 4));
						v82[2].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v215, 8));
					LABEL_227:
						v6 = 0i64;
						*(_DWORD*)(v86 + 24) = 0;
						goto LABEL_230;
					}
					v246 = 0i64;
					v246.m128_f32[0] = 3.0;
					v247 = _mm_mul_ps(*v82, *v82);
					v248 = (float)(v247.m128_f32[0] + _mm_shuffle_ps(v247, v247, 85).m128_f32[0])
						+ _mm_shuffle_ps(v247, v247, 170).m128_f32[0];
					v684 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v82[1], v82[1], 210), _mm_shuffle_ps(v82[3], v82[3], 201)),
						_mm_mul_ps(_mm_shuffle_ps(v82[1], v82[1], 201), _mm_shuffle_ps(v82[3], v82[3], 210)));
					v249 = _mm_mul_ps(v684, v684);
					v249.m128_f32[0] = (float)(v249.m128_f32[0] + _mm_shuffle_ps(v249, v249, 85).m128_f32[0])
						+ _mm_shuffle_ps(v249, v249, 170).m128_f32[0];
					v250 = v246;
					v251 = v249;
					v251.m128_f32[0] = fsqrt(v249.m128_f32[0]);
					v250.m128_f32[0] = (float)((float)(3.0
						- (float)((float)(v249.m128_f32[0] * (float)(1.0 / v251.m128_f32[0]))
							* (float)(1.0 / v251.m128_f32[0])))
						* 0.5)
						* (float)(1.0 / v251.m128_f32[0]);
					v251.m128_f32[0] = fsqrt(v248);
					v250.m128_f32[0] = fmaxf(v250.m128_f32[0], 0.0);
					v712 = _mm_mul_ps(_mm_shuffle_ps(v250, v250, 0), v684);
					v252 = (__m128i)_mm_mul_ps(v712, _mm_shuffle_ps(v251, v251, 0));
					v82->m128_i32[0] = _mm_cvtsi128_si32(v252);
					v686 = v252;
					v82->m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v252, 4));
					v82->m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v252, 8));
					v253 = _mm_mul_ps(v82[2], v82[2]);
					v714 = _mm_sub_ps(
						_mm_mul_ps(_mm_shuffle_ps(v82[1], v82[1], 210), _mm_shuffle_ps(*v82, *v82, 201)),
						_mm_mul_ps(_mm_shuffle_ps(v82[1], v82[1], 201), _mm_shuffle_ps(*v82, *v82, 210)));
					v254 = _mm_mul_ps(v714, v714);
					v254.m128_f32[0] = (float)(v254.m128_f32[0] + _mm_shuffle_ps(v254, v254, 85).m128_f32[0])
						+ _mm_shuffle_ps(v254, v254, 170).m128_f32[0];
					v255 = v254;
					v255.m128_f32[0] = 1.0 / fsqrt(v254.m128_f32[0]);
					v246.m128_f32[0] = (float)((float)(3.0
						- (float)((float)(v254.m128_f32[0] * v255.m128_f32[0]) * v255.m128_f32[0]))
						* 0.5)
						* v255.m128_f32[0];
					v255.m128_f32[0] = fsqrt(
						(float)(v253.m128_f32[0] + _mm_shuffle_ps(v253, v253, 85).m128_f32[0])
						+ _mm_shuffle_ps(v253, v253, 170).m128_f32[0]);
					v246.m128_f32[0] = fmaxf(v246.m128_f32[0], 0.0);
					v688 = _mm_mul_ps(_mm_shuffle_ps(v246, v246, 0), v714);
					v245 = (__m128i)_mm_mul_ps(v688, _mm_shuffle_ps(v255, v255, 0));
					v716 = v245;
				}
				v82[2].m128_i32[0] = _mm_cvtsi128_si32(v245);
				v6 = 0i64;
				v82[2].m128_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v245, 4));
				v82[2].m128_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v245, 8));
				*(_DWORD*)(v86 + 24) = 0;
				goto LABEL_230;
			}
		LABEL_245:
			for (j = 0; j < *(_DWORD*)(*(_QWORD*)(v4 + 64) + 432i64); *(__m128*)(v317 + 32) = v322)
			{
				v315 = j++;
				v316 = *(_QWORD*)(v4 + 824)
					+ ((unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v4 + 64) + 440i64) + 2 * v315) << 6);
				v317 = *(_QWORD*)(v4 + 832) + 48 * v315;
				v318 = *(__m128*)(v316 + 16);
				v319 = *(__m128*)(v316 + 48);
				v320 = _mm_unpacklo_ps(*(__m128*)v316, v318);
				v321 = _mm_unpacklo_ps(*(__m128*)(v316 + 32), v319);
				v322 = _mm_shuffle_ps(_mm_unpackhi_ps(*(__m128*)v316, v318), _mm_unpackhi_ps(*(__m128*)(v316 + 32), v319), 68);
				*(__m128*)v317 = _mm_shuffle_ps(v320, v321, 68);
				*(__m128*)(v317 + 16) = _mm_shuffle_ps(v320, v321, 238);
			}
			if (*(_QWORD*)(v4 + 1808))
			{
				v323 = (unsigned int*)(v4 + 1776);
				CurrentThreadId = GetCurrentThreadId();
				v325 = CurrentThreadId;
				if (*(_DWORD*)(v4 + 1776) == CurrentThreadId)
				{
					++* (_QWORD*)(v4 + 1784);
				}
				else
				{
					v326 = 0i64;
					while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 1784), 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v326 >= 0x400)
						{
							sub_14019FB60(v4 + 1776, CurrentThreadId);
							goto LABEL_255;
						}
					}
					*v323 = CurrentThreadId;
				}
			LABEL_255:
				if (*(_QWORD*)(v4 + 1808))
				{
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v4 + 1808) + 8i64))(*(_QWORD*)(v4 + 1808), v325);
					*(_QWORD*)(v4 + 1808) = 0i64;
				}
				if (*(_QWORD*)(v4 + 1784) <= 1ui64)
				{
					*v323 = 0;
					_InterlockedExchange64((volatile __int64*)(v4 + 1784), 0i64);
					if (*(_QWORD*)(v4 + 1792))
					{
						if (!*(_QWORD*)(v4 + 1800))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 1800), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v4 + 1800));
					}
				}
				else
				{
					--* (_QWORD*)(v4 + 1784);
				}
			}
			*(_DWORD*)(v4 + 1400) = *(_DWORD*)(v4 + 1396);
			*(_DWORD*)(v4 + 1408) |= 8u;
		}
		if ((v9 & 0x10) != 0)
		{
			v328 = *(_QWORD*)(v4 + 64);
			v329 = 0i64;
			v560 = 0;
			if (*(_DWORD*)(v328 + 496))
			{
				do
				{
					v330 = *(_QWORD*)(v328 + 504);
					v331 = 6 * v329;
					v332 = 0;
					v576 = (__int64*)(*(_QWORD*)(v4 + 1104) + 96 * v329);
					v333 = *v576;
					if (*(_DWORD*)(v330 + 48 * v329 + 32))
					{
						do
						{
							v334 = (_DWORD*)(*(_QWORD*)(v330 + 8 * v331 + 40) + 296i64 * v332);
							v335 = (__m128*)(v576[1] + 224i64 * v332);
							if (v334[6])
								sub_140306DB0((__int64)(v334 + 6), (float*)(v576[1] + 224i64 * v332), v333, a4);
							if (v334[12])
								sub_140306DB0((__int64)(v334 + 12), &v335[1].m128_f32[1], v333, a4);
							if (v334[18])
								sub_140306DB0((__int64)(v334 + 18), &v335[2].m128_f32[2], v333, a4);
							if (v334[24])
								sub_140306DB0((__int64)(v334 + 24), &v335[3].m128_f32[3], v333, a4);
							if (v334[30])
								sub_140306DB0((__int64)(v334 + 30), v335[5].m128_f32, v333, a4);
							if (v334[42])
								sub_140306DB0((__int64)(v334 + 42), &v335[6].m128_f32[1], v333, a4);
							if (v334[48])
								sub_140306DB0((__int64)(v334 + 48), &v335[7].m128_f32[2], v333, a4);
							if (v334[54])
								sub_140306DB0((__int64)(v334 + 54), &v335[8].m128_f32[3], v333, a4);
							if (v334[60])
								sub_140306DB0((__int64)(v334 + 60), v335[10].m128_f32, v333, a4);
							if (v334[66])
								sub_140307720((__int64)(v334 + 66), v335 + 12, v333, a4);
							++v332;
						} while (v332 < *(_DWORD*)(v330 + 8 * v331 + 32));
						v4 = a1;
					}
					v328 = *(_QWORD*)(v4 + 64);
					v329 = (unsigned int)(v560 + 1);
					v560 = v329;
				} while ((unsigned int)v329 < *(_DWORD*)(v328 + 496));
				v9 = v566;
				LODWORD(v6) = 0;
			}
			*(_DWORD*)(v4 + 1408) |= 0x10u;
		}
		if ((v9 & 0x20) != 0)
		{
			v336 = *(_QWORD*)(v4 + 64);
			v337 = 0;
			v561 = 0;
			if (*(_DWORD*)(v336 + 480))
			{
				do
				{
					v338 = (_DWORD*)(*(_QWORD*)(v336 + 488) + 152i64 * v337);
					v339 = *(_QWORD*)(v4 + 848) + 272i64 * v337;
					v340 = *(_QWORD*)v339;
					v586 = v338;
					v568 = *(_QWORD*)v339;
					v341 = (unsigned int*)(v339 + 80);
					if (v338[14])
						sub_140307280((__int64)(v338 + 14), (__m128*)(v339 + 80), v340, a4);
					else
						*(_OWORD*)v341 = xmmword_140C78450;
					if (v338[20])
					{
						v342 = *(unsigned int*)(v340 + 180);
						if ((_DWORD)v342)
						{
							v343 = 0i64;
							v344 = 0.0;
							v345 = (__int64*)(v339 + 4 * (v342 + 28));
							v346 = (float*)(v568 + 120 + 8 * v342);
							do
							{
								v347 = *((_DWORD*)v346 - 3);
								v346 -= 2;
								v345 = (__int64*)((char*)v345 - 4);
								LODWORD(v342) = v342 - 1;
								sub_1403073A0((__int64)(v338 + 20), v347, &v590, a4, v345);
								v348 = v590;
								v349 = _mm_mul_ps(v343, v590);
								v350 = _mm_add_ps(v349, _mm_shuffle_ps(v349, v349, 78));
								if ((float)(_mm_shuffle_ps(v350, v350, 177).m128_f32[0] + v350.m128_f32[0]) < 0.0)
								{
									v348 = _mm_sub_ps((__m128)0i64, v590);
									v590 = v348;
								}
								*(float*)&v344 = *(float*)&v344 + *v346;
								v343 = _mm_add_ps(
									_mm_mul_ps(
										v348,
										_mm_shuffle_ps((__m128) * (unsigned int*)v346, (__m128) * (unsigned int*)v346, 0)),
									v343);
							} while ((_DWORD)v342);
							v4 = a1;
							if (*(float*)&v344 > 0.0000099999997)
							{
								v351 = _mm_mul_ps(v343, v343);
								v352 = _mm_add_ps(v351, _mm_shuffle_ps(v351, v351, 78));
								v353 = _mm_add_ps(_mm_shuffle_ps(v352, v352, 177), v352);
								if (v353.m128_f32[0] > *(float*)&dword_140C42008)
								{
									v353.m128_f32[0] = fsqrt(v353.m128_f32[0]);
									v602 = xmmword_140C78450;
									v592 = _mm_div_ps(v343, _mm_shuffle_ps(v353, v353, 0));
									v354 = sub_1401B1EE0(v674, (__m128*) & v602, &v592, v344);
									v355 = (__m128) * (unsigned int*)(v339 + 92);
									v356 = (__m128) * v341;
									v357 = v355;
									v358 = v356;
									v359 = v356;
									v360 = _mm_shuffle_ps(*v354, *v354, 255).m128_f32[0];
									v361 = _mm_shuffle_ps(*v354, *v354, 170).m128_f32[0];
									v362 = _mm_shuffle_ps(*v354, *v354, 85).m128_f32[0];
									v358.m128_f32[0] = (float)((float)((float)(v356.m128_f32[0] * v360)
										+ (float)(*(float*)(v339 + 92) * COERCE_FLOAT(*v354)))
										+ (float)(*(float*)(v339 + 84) * v361))
										- (float)(*(float*)(v339 + 88) * v362);
									v363 = *(float*)(v339 + 84);
									v357.m128_f32[0] = (float)((float)((float)(v355.m128_f32[0] * v362)
										- (float)(*(float*)(v339 + 80) * v361))
										+ (float)(v363 * v360))
										+ (float)(*(float*)(v339 + 88) * COERCE_FLOAT(*v354));
									v359.m128_f32[0] = (float)((float)((float)(v356.m128_f32[0] * v362)
										+ (float)(*(float*)(v339 + 92) * v361))
										- (float)(v363 * COERCE_FLOAT(*v354)))
										+ (float)(*(float*)(v339 + 88) * v360);
									v355.m128_f32[0] = (float)((float)((float)(v355.m128_f32[0] * v360)
										- (float)(v356.m128_f32[0] * COERCE_FLOAT(*v354)))
										- (float)(v363 * v362))
										- (float)(*(float*)(v339 + 88) * v361);
									*(__m128*)v341 = _mm_unpacklo_ps(_mm_unpacklo_ps(v358, v359), _mm_unpacklo_ps(v357, v355));
								}
							}
						}
						v340 = v568;
					}
					v675 = *(__m128*)v341;
					v757 = v675;
					v364 = (__m128*)(v339 + 16);
					v365 = _mm_shuffle_ps(v675, v675, 255).m128_f32[0];
					v366 = _mm_shuffle_ps(v675, v675, 170).m128_f32[0];
					v367 = _mm_shuffle_ps(v675, v675, 85).m128_f32[0];
					v368 = (float)(v675.m128_f32[0] * 2.0) * v365;
					v369 = (float)(v675.m128_f32[0] * 2.0) * v675.m128_f32[0];
					v370 = (float)(v366 * 2.0) * v365;
					v371 = (float)(v367 * 2.0) * v365;
					v372 = (float)(v367 * 2.0) * v675.m128_f32[0];
					v373 = (float)(v367 * 2.0) * v367;
					v374 = (float)(v366 * 2.0) * v366;
					v375 = (float)(v366 * 2.0) * v367;
					v376 = (float)(v366 * 2.0) * v675.m128_f32[0];
					*(float*)(v339 + 208) = (float)(1.0 - v373) - v374;
					*(float*)(v339 + 212) = v372 + v370;
					*(float*)(v339 + 216) = v376 - v371;
					*(_DWORD*)(v339 + 220) = 0;
					*(float*)(v339 + 224) = v372 - v370;
					*(float*)(v339 + 228) = (float)(1.0 - v369) - v374;
					*(float*)(v339 + 232) = v375 + v368;
					*(_DWORD*)(v339 + 236) = 0;
					*(float*)(v339 + 240) = v376 + v371;
					*(float*)(v339 + 244) = v375 - v368;
					*(float*)(v339 + 248) = (float)(1.0 - v369) - v373;
					*(_QWORD*)(v339 + 252) = 0i64;
					*(_QWORD*)(v339 + 260) = 0i64;
					*(_DWORD*)(v339 + 268) = 1065353216;
					if (v338[2])
						sub_140306EB0((__int64)(v338 + 2), (__m128i*)(v339 + 16), v340);
					else
						*v364 = (__m128)xmmword_140B7B240;
					v377 = v338 + 8;
					if (v338[8])
					{
						v378 = *(unsigned int*)(v340 + 180);
						if ((_DWORD)v378)
						{
							v379 = v339 + 4 * (v378 + 12);
							v380 = (unsigned int*)(v340 + 8 * v378 + 120);
							v381 = (__int64)v377;
							do
							{
								v382 = *(v380 - 3);
								v380 -= 2;
								v379 -= 4i64;
								sub_140306FC0(v381, v382, (__m128i*) & v596);
								*v364 = _mm_mul_ps(
									*v364,
									_mm_add_ps(
										_mm_mul_ps(
											_mm_sub_ps(v596, (__m128)xmmword_140B7B240),
											_mm_shuffle_ps((__m128) * v380, (__m128) * v380, 0)),
										(__m128)xmmword_140B7B240));
								LODWORD(v378) = v378 - 1;
							} while ((_DWORD)v378);
							v4 = a1;
							v338 = v586;
						}
					}
					v383 = (__m128*)(v339 + 144);
					*(__m128*)(v339 + 208) = _mm_mul_ps(
						*(__m128*)(v339 + 208),
						_mm_shuffle_ps((__m128)v364->m128_u32[0], (__m128)v364->m128_u32[0], 0));
					*(__m128*)(v339 + 224) = _mm_mul_ps(
						*(__m128*)(v339 + 224),
						_mm_shuffle_ps(
							(__m128) * (unsigned int*)(v339 + 20),
							(__m128) * (unsigned int*)(v339 + 20),
							0));
					*(__m128*)(v339 + 240) = _mm_mul_ps(
						*(__m128*)(v339 + 240),
						_mm_shuffle_ps(
							(__m128) * (unsigned int*)(v339 + 24),
							(__m128) * (unsigned int*)(v339 + 24),
							0));
					if (v338[26])
						sub_140307720((__int64)(v338 + 26), (__m128*)(v339 + 144), v568, a4);
					else
						*v383 = 0i64;
					if (v338[32])
					{
						v384 = *(unsigned int*)(v568 + 180);
						if ((_DWORD)v384)
						{
							v385 = v338 + 32;
							v386 = (char*)(v339 + 4 * (v384 + 44));
							v387 = (unsigned int*)(v568 + 8 * v384 + 120);
							do
							{
								v388 = *(v387 - 3);
								v387 -= 2;
								v386 -= 4;
								sub_140307830(v385, v388, &v606, a4, v386);
								*v383 = _mm_add_ps(*v383, _mm_mul_ps(v606, _mm_shuffle_ps((__m128) * v387, (__m128) * v387, 0)));
								LODWORD(v384) = v384 - 1;
							} while ((_DWORD)v384);
							v4 = a1;
						}
					}
					*(_DWORD*)(v339 + 256) = v383->m128_i32[0];
					*(_DWORD*)(v339 + 260) = *(_DWORD*)(v339 + 148);
					*(_DWORD*)(v339 + 264) = *(_DWORD*)(v339 + 152);
					if ((dword_140DC0D50 & 1) == 0)
					{
						dword_140DC0D50 |= 1u;
						xmmword_140DC0D60 = xmmword_140B7A330;
						xmmword_140DC0D70 = xmmword_140B7A5D0;
						xmmword_140DC0D80 = xmmword_140B7A700;
						xmmword_140DC0D90 = xmmword_140B7AEE0;
					}
					v754[0] = v339 + 208;
					sub_1401AFC20(v754, v730);
					v735[1] = (__m128*)v730;
					v735[0] = (__m128*) & xmmword_140DC0D60;
					sub_1401AFB10(v735, v736);
					v748[0] = v736;
					v748[1] = (__m128*) & xmmword_140DC0D60;
					sub_1401AFB10(v748, (__m128*)(v339 + 208));
					v336 = *(_QWORD*)(v4 + 64);
					v337 = v561 + 1;
					v561 = v337;
				} while (v337 < *(_DWORD*)(v336 + 480));
				v9 = v566;
				LODWORD(v6) = 0;
			}
			*(_DWORD*)(v4 + 1408) |= 0x20u;
		}
		if ((v9 & 0x40) != 0)
		{
			v389 = *(_QWORD*)(v4 + 64);
			v390 = 0;
			if (*(_DWORD*)(v389 + 792))
			{
				do
				{
					v391 = *(_QWORD*)(v389 + 800) + 400i64 * v390;
					v392 = 352i64 * *(unsigned __int16*)(v391 + 2);
					if (*(_WORD*)(96i64 * *(unsigned __int16*)(*(_QWORD*)(v389 + 392) + v392 + 6) + *(_QWORD*)(v4 + 496) + 52))
					{
						v393 = (__m128*)(*(_QWORD*)(v4 + 1464) + 432i64 * v390);
						v394 = *(_QWORD*)(v392 + *(_QWORD*)(v4 + 840));
						if (*(_DWORD*)(v391 + 16))
							sub_140306CB0((unsigned __int16**)(v391 + 16), (float*)(*(_QWORD*)(v4 + 1464) + 432i64 * v390), v394);
						if (*(_DWORD*)(v391 + 40))
							sub_140306CB0((unsigned __int16**)(v391 + 40), &v393[1].m128_f32[1], v394);
						if (*(_DWORD*)(v391 + 64))
							sub_140306CB0((unsigned __int16**)(v391 + 64), &v393[2].m128_f32[2], v394);
						if (*(_DWORD*)(v391 + 88))
							sub_1403068B0(v391 + 88, v393 + 4, v394, a4);
						if (*(_DWORD*)(v391 + 112))
							sub_1403068B0(v391 + 112, v393 + 6, v394, a4);
						if (*(_DWORD*)(v391 + 136))
							sub_140306CB0((unsigned __int16**)(v391 + 136), v393[8].m128_f32, v394);
						if (*(_DWORD*)(v391 + 160))
							sub_140306CB0((unsigned __int16**)(v391 + 160), &v393[9].m128_f32[1], v394);
						if (*(_DWORD*)(v391 + 184))
							sub_140306CB0((unsigned __int16**)(v391 + 184), &v393[10].m128_f32[2], v394);
						if (*(_DWORD*)(v391 + 208))
							sub_140306CB0((unsigned __int16**)(v391 + 208), &v393[11].m128_f32[3], v394);
						if (*(_DWORD*)(v391 + 232))
							sub_140306CB0((unsigned __int16**)(v391 + 232), v393[13].m128_f32, v394);
						if (*(_DWORD*)(v391 + 256))
							sub_140306CB0((unsigned __int16**)(v391 + 256), &v393[14].m128_f32[1], v394);
						if (*(_DWORD*)(v391 + 280))
							sub_140306CB0((unsigned __int16**)(v391 + 280), &v393[15].m128_f32[2], v394);
						if (*(_DWORD*)(v391 + 304))
							sub_140306CB0((unsigned __int16**)(v391 + 304), &v393[16].m128_f32[3], v394);
						if (*(_DWORD*)(v391 + 328))
							sub_140306CB0((unsigned __int16**)(v391 + 328), v393[18].m128_f32, v394);
						if (*(_DWORD*)(v391 + 352))
							sub_140306CB0((unsigned __int16**)(v391 + 352), &v393[19].m128_f32[1], v394);
						if (*(_DWORD*)(v391 + 376))
							sub_140306CB0((unsigned __int16**)(v391 + 376), &v393[20].m128_f32[2], v394);
					}
					v389 = *(_QWORD*)(v4 + 64);
					++v390;
				} while (v390 < *(_DWORD*)(v389 + 792));
				v9 = v566;
			}
			*(_DWORD*)(v4 + 1408) |= 0x40u;
		}
		if ((v9 & 0x80u) != 0)
		{
			v395 = *(_QWORD*)(v4 + 64);
			v396 = 0;
			if (*(_DWORD*)(v395 + 1344))
			{
				do
				{
					v397 = (__m128i*)(*(_QWORD*)(v4 + 1664) + ((unsigned __int64)v396 << 7));
					v398 = *(_QWORD*)(v395 + 1352) + 104i64 * v396;
					v399 = *(_QWORD*)(v4 + 840);
					v400 = *(_QWORD*)(352i64 * *(unsigned __int16*)(v398 + 2) + v399);
					if (*(_DWORD*)(v398 + 8))
						sub_140306CB0(
							(unsigned __int16**)(v398 + 8),
							(float*)(*(_QWORD*)(v4 + 1664) + ((unsigned __int64)v396 << 7)),
							*(_QWORD*)(352i64 * *(unsigned __int16*)(v398 + 2) + v399));
					if (*(_DWORD*)(v398 + 32))
						sub_140307B80(v398 + 32, v397 + 2, v400);
					if (*(_DWORD*)(v398 + 56))
						sub_140306EB0(v398 + 56, v397 + 4, v400);
					if (*(_DWORD*)(v398 + 80))
						sub_140307C90(v398 + 80, v397 + 6, v400);
					v395 = *(_QWORD*)(v4 + 64);
					++v396;
				} while (v396 < *(_DWORD*)(v395 + 1344));
				v9 = v566;
			}
			*(_DWORD*)(v4 + 1408) |= 0x80u;
		}
		if ((v9 & 0x100) != 0)
		{
			v401 = *(_QWORD*)(v4 + 64);
			if (*(_DWORD*)(v401 + 1416))
			{
				v402 = 0;
				v403 = *(_QWORD*)(352i64 * *(unsigned __int16*)(v401 + 1408) + *(_QWORD*)(v4 + 840));
				do
				{
					v404 = (unsigned __int16**)(*(_QWORD*)(v401 + 1424) + 32i64 * v402 + 8);
					if (*(_DWORD*)v404)
						sub_140306CB0(v404, (float*)(*(_QWORD*)(v4 + 1672) + 20i64 * v402), v403);
					v401 = *(_QWORD*)(v4 + 64);
					++v402;
				} while (v402 < *(_DWORD*)(v401 + 1416));
			}
			*(_DWORD*)(v4 + 1408) |= 0x100u;
		}
		if ((v9 & 0x200) != 0)
		{
			v405 = (__int64*)(v4 + 1480);
			v406 = *(_QWORD*)(v4 + 1480);
			if (v406)
			{
				do
				{
					v407 = *(_QWORD**)(v406 + 16);
					if (v407)
						*v407 = *(_QWORD*)(v406 + 24);
					v408 = *(_QWORD*)(v406 + 24);
					if (v408)
						*(_QWORD*)(v408 + 16) = *(_QWORD*)(v406 + 16);
					*(_QWORD*)(v406 + 16) = 0i64;
					*(_QWORD*)(v406 + 24) = 0i64;
					v406 = *v405;
				} while (*v405);
			}
			v409 = *(_QWORD*)(v4 + 64);
			if (*(_DWORD*)(v409 + 1376))
			{
				while (1)
				{
					v410 = *(_QWORD*)(v4 + 1472) + 136i64 * (unsigned int)v6;
					v411 = (unsigned __int16*)(*(_QWORD*)(v409 + 1384) + 160i64 * (unsigned int)v6);
					v412 = *(_QWORD**)(v410 + 16);
					if (v412)
						*v412 = *(_QWORD*)(v410 + 24);
					v413 = *(_QWORD*)(v410 + 24);
					v414 = v410 + 24;
					if (v413)
						*(_QWORD*)(v413 + 16) = *(_QWORD*)(v410 + 16);
					*(_QWORD*)(v410 + 16) = 0i64;
					*(_QWORD*)v414 = 0i64;
					v415 = 352i64 * *v411;
					if (!*(_WORD*)(96i64 * *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v4 + 64) + 392i64) + v415 + 6)
						+ *(_QWORD*)(v4 + 496)
						+ 52))
						goto LABEL_422;
					v416 = *(_QWORD*)(v415 + *(_QWORD*)(v4 + 840));
					if (*((_DWORD*)v411 + 10))
						sub_140306CB0((unsigned __int16**)v411 + 5, (float*)(v410 + 32), v416);
					if (*(float*)(v410 + 32) == 0.0)
						goto LABEL_422;
					*(_QWORD*)(v410 + 8) = v4;
					if (*((_DWORD*)v411 + 16))
						sub_140307DA0((__int64)(v411 + 32), (_WORD*)(v410 + 52), v416, a4);
					if (*((_DWORD*)v411 + 22))
						sub_140307F60((__int64)(v411 + 44), (unsigned int*)(v410 + 72), v416, a4);
					if (*((_DWORD*)v411 + 28))
						sub_140308160((__int64)(v411 + 56), (char*)(v410 + 92), v416);
					if (*((_DWORD*)v411 + 34))
						sub_140308160((__int64)(v411 + 68), (char*)(v410 + 112), v416);
					v417 = v411[6];
					if (!v417)
						break;
					if (v417 == 1 && *(_QWORD*)(v4 + 1216))
					{
						v418 = *(_QWORD*)(v4 + 1216);
					LABEL_413:
						v419 = (__int64*)(v418 + 1480);
						if (!*(_QWORD*)(v410 + 16))
						{
							*(_QWORD*)(v410 + 16) = v419;
							*(_QWORD*)v414 = *v419;
							*v419 = v410;
							goto LABEL_420;
						}
						goto LABEL_422;
					}
					if (!*(_QWORD*)(v410 + 16))
					{
						*(_QWORD*)(v410 + 16) = v405;
						*(_QWORD*)v414 = *v405;
						*v405 = v410;
					LABEL_420:
						if (*(_QWORD*)v414)
							*(_QWORD*)(*(_QWORD*)v414 + 16i64) = v414;
					}
				LABEL_422:
					v409 = *(_QWORD*)(v4 + 64);
					LODWORD(v6) = (_DWORD)v6 + 1;
					if ((unsigned int)v6 >= *(_DWORD*)(v409 + 1376))
					{
						v9 = v566;
						goto LABEL_424;
					}
				}
				v418 = *(_QWORD*)(v4 + 1224);
				goto LABEL_413;
			}
		LABEL_424:
			*(_DWORD*)(v4 + 1408) |= 0x200u;
		}
		if ((v9 & 0x400) != 0)
		{
			v420 = (__int64*)(v4 + 1496);
			v421 = *(_QWORD*)(v4 + 1496);
			if (v421)
			{
				do
				{
					v422 = *(_QWORD**)(v421 + 32);
					if (v422)
						*v422 = *(_QWORD*)(v421 + 40);
					v423 = *(_QWORD*)(v421 + 40);
					if (v423)
						*(_QWORD*)(v423 + 32) = *(_QWORD*)(v421 + 32);
					*(_QWORD*)(v421 + 32) = 0i64;
					*(_QWORD*)(v421 + 40) = 0i64;
					v421 = *v420;
				} while (*v420);
			}
			v424 = *(_QWORD*)(v4 + 64);
			v425 = 0;
			if (*(_DWORD*)(v424 + 1392))
			{
				while (1)
				{
					v426 = (unsigned __int16*)(*(_QWORD*)(v424 + 1400) + 32i64 * v425);
					v427 = *(_QWORD*)(v4 + 1488) + 48i64 * v425;
					v428 = *(_QWORD**)(v427 + 32);
					if (v428)
						*v428 = *(_QWORD*)(v427 + 40);
					v429 = *(_QWORD*)(v427 + 40);
					v430 = v427 + 40;
					if (v429)
						*(_QWORD*)(v429 + 32) = *(_QWORD*)(v427 + 32);
					*(_QWORD*)(v427 + 32) = 0i64;
					*(_QWORD*)v430 = 0i64;
					a4 = 352i64 * *v426;
					if (!*(_WORD*)(96i64 * *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v4 + 64) + 392i64) + a4 + 6)
						+ *(_QWORD*)(v4 + 496)
						+ 52))
						goto LABEL_455;
					if (*((_DWORD*)v426 + 2))
						sub_1403069D0(
							(__int64)(v426 + 4),
							(_BYTE*)(v427 + 8),
							*(_QWORD*)(*(_QWORD*)(v4 + 840) + 352i64 * *v426),
							352i64 * *v426);
					if (!*(_BYTE*)(v427 + 8))
						goto LABEL_455;
					if (v426[2])
						break;
					if (!*(_QWORD*)(v427 + 32))
					{
						*(_QWORD*)(v427 + 32) = v420;
						*(_QWORD*)v430 = *v420;
						*v420 = v427;
					LABEL_453:
						if (*(_QWORD*)v430)
							*(_QWORD*)(*(_QWORD*)v430 + 32i64) = v430;
					}
				LABEL_455:
					v424 = *(_QWORD*)(v4 + 64);
					if (++v425 >= *(_DWORD*)(v424 + 1392))
					{
						v9 = v566;
						goto LABEL_457;
					}
				}
				if (v426[2] == 1)
				{
					if (!*(_QWORD*)(v4 + 1216))
					{
						v432 = (__int64*)(v4 + 1496);
					LABEL_446:
						if (!*(_QWORD*)(v427 + 32))
						{
							*(_QWORD*)(v427 + 32) = v432;
							*(_QWORD*)v430 = *v432;
							*v432 = v427;
							goto LABEL_453;
						}
						goto LABEL_455;
					}
					v431 = *(_QWORD*)(v4 + 1216);
				}
				else
				{
					if (v426[2] != 2)
						goto LABEL_455;
					v431 = *(_QWORD*)(v4 + 1224);
				}
				v432 = (__int64*)(v431 + 1496);
				goto LABEL_446;
			}
		LABEL_457:
			*(_DWORD*)(v4 + 1408) |= 0x400u;
		}
		if ((v9 & 0x800) != 0 && (*(_BYTE*)(v4 + 48) & 2) != 0)
		{
			if (*(_DWORD*)(v4 + 320))
			{
				v433 = *(_QWORD*)(v4 + 64);
				v434 = 0;
				v562 = 0;
				if (*(_DWORD*)(v433 + 696))
				{
					do
					{
						v435 = *(_QWORD*)(v433 + 704);
						v436 = *(_QWORD*)(v4 + 1128);
						v437 = 5i64 * v434;
						v438 = *(unsigned __int16*)(v435 + 40i64 * v434);
						if (*(_DWORD*)(v433 + 384) > (unsigned int)v438)
						{
							v581 = *(_QWORD*)(352 * v438 + *(_QWORD*)(v4 + 840));
							v439 = *(__m128**)(v4 + 16);
							v745[0] = (__m128*)(*(_QWORD*)(v4 + 824) + (v438 << 6));
							v745[1] = v439 + 19;
							sub_1401AFB10(v745, v729);
							(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(v436 + 8 * v437) + 88i64))(
								*(_QWORD*)(v436 + 8 * v437),
								v729);
							v440 = 0;
							if (*(_DWORD*)(v435 + 8 * v437 + 8))
							{
								do
								{
									v441 = (unsigned __int16**)(*(_QWORD*)(v435 + 8 * v437 + 16) + 32i64 * v440);
									if (*((_DWORD*)v441 + 2))
									{
										sub_140306CB0(v441 + 1, (float*)(*(_QWORD*)(v436 + 8 * v437 + 24) + 20i64 * v440), v581);
										(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v436 + 8 * v437) + 80i64))(
											*(_QWORD*)(v436 + 8 * v437),
											*(unsigned int*)v441);
									}
									++v440;
								} while (v440 < *(_DWORD*)(v435 + 8 * v437 + 8));
								v4 = a1;
							}
							if (*(_DWORD*)(v435 + 8 * v437 + 24))
							{
								v442 = 0;
								do
								{
									v443 = *(__int64**)(*(_QWORD*)(v436 + 8 * v437 + 8) + 8i64 * v442);
									if (v443)
									{
										v444 = (_DWORD*)(*(_QWORD*)(v435 + 8 * v437 + 32) + 32i64 * v442 + 8);
										if (*v444)
										{
											v445 = *(_QWORD*)(v436 + 8 * v437 + 32);
											v446 = *(_BYTE*)(v445 + 20i64 * v442);
											v447 = (_BYTE*)(v445 + 20i64 * v442);
											sub_1403069D0((__int64)v444, v447, v581, a4);
											if (v446 != *v447)
											{
												v448 = *v443;
												if (*v447)
													(*(void(__fastcall**)(__int64*))(v448 + 64))(v443);
												else
													(*(void(__fastcall**)(__int64*))(v448 + 72))(v443);
											}
										}
									}
									++v442;
								} while (v442 < *(_DWORD*)(v435 + 8 * v437 + 24));
								v4 = a1;
							}
						}
						else
						{
							sub_1400035B0();
						}
						v433 = *(_QWORD*)(v4 + 64);
						v434 = v562 + 1;
						v562 = v434;
					} while (v434 < *(_DWORD*)(v433 + 696));
					v9 = v566;
				}
			}
			*(_DWORD*)(v4 + 1408) |= 0x800u;
		}
		if ((v9 & 0x1000) != 0)
		{
			v449 = *(_QWORD*)(v4 + 64);
			v450 = 0;
			if (*(_DWORD*)(v449 + 776))
			{
				do
				{
					v451 = *(_QWORD*)(v4 + 1416);
					v452 = 9i64 * v450;
					v453 = (unsigned __int16**)(*(_QWORD*)(v449 + 784) + 80i64 * v450);
					if (*((_DWORD*)v453 + 2))
						sub_140306CB0(v453 + 1, (float*)(v451 + 8 * (v452 + 1)), *(_QWORD*)(v451 + 72i64 * v450));
					if (*((_DWORD*)v453 + 8))
						sub_140306CB0(v453 + 4, (float*)(v451 + 72i64 * v450 + 28), *(_QWORD*)(v451 + 72i64 * v450));
					if (*((_DWORD*)v453 + 14))
						sub_140306CB0(v453 + 7, (float*)(v451 + 8 * (v452 + 6)), *(_QWORD*)(v451 + 72i64 * v450));
					v449 = *(_QWORD*)(v4 + 64);
					++v450;
				} while (v450 < *(_DWORD*)(v449 + 776));
				v9 = v566;
			}
			*(_DWORD*)(v4 + 1408) |= 0x1000u;
		}
		if ((v9 & 0x2000) != 0)
		{
			v454 = (__m128*)(*(_QWORD*)(v4 + 16) + 304i64);
			v749[0] = (__m128*)(v4 + 1264);
			v749[1] = v454;
			sub_1401AFB10(v749, &v615);
			v455 = v622;
			v456 = _mm_sub_ps(v622, *(__m128*)(v4 + 160));
			*(__m128*)(v4 + 176) = v456;
			v457 = _mm_mul_ps(v456, v456);
			v458 = fsqrt(
				(float)(v457.m128_f32[0] + _mm_shuffle_ps(v457, v457, 85).m128_f32[0])
				+ _mm_shuffle_ps(v457, v457, 170).m128_f32[0]);
			*(float*)(v4 + 192) = v458;
			*(__m128*)(v4 + 160) = v455;
			*(_DWORD*)(v4 + 1456) = *(_DWORD*)(v4 + 1404) - *(_DWORD*)(v4 + 1452);
			*(_DWORD*)(v4 + 1452) = *(_DWORD*)(*(_QWORD*)(v4 + 16) + 208i64);
			if (*(_QWORD*)(v4 + 1432) && v458 > 0.0000099999997)
			{
				v459 = (float*)(*(_QWORD*)(v4 + 64) + 912i64);
				v573 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v622.m128_u32[0], (__m128)v622.m128_u32[2]),
					_mm_unpacklo_ps((__m128)v622.m128_u32[1], (__m128)0i64));
				v579 = (__int128)v573;
				if (v615.m128_f32[0] <= 0.0)
				{
					v460 = *(float*)(*(_QWORD*)(v4 + 64) + 928i64);
					v461 = *v459;
				}
				else
				{
					v460 = *v459;
					v461 = *(float*)(*(_QWORD*)(v4 + 64) + 928i64);
				}
				v462 = v573.m128_f32[0] + (float)(v461 * v615.m128_f32[0]);
				v463 = v573.m128_f32[0] + (float)(v460 * v615.m128_f32[0]);
				if (v616 <= 0.0)
				{
					v464 = *(float*)(*(_QWORD*)(v4 + 64) + 932i64);
					v465 = *(float*)(*(_QWORD*)(v4 + 64) + 916i64);
				}
				else
				{
					v464 = *(float*)(*(_QWORD*)(v4 + 64) + 916i64);
					v465 = *(float*)(*(_QWORD*)(v4 + 64) + 932i64);
				}
				v466 = *(float*)(*(_QWORD*)(v4 + 64) + 920i64);
				v467 = *(float*)(*(_QWORD*)(v4 + 64) + 936i64);
				v468 = v462 + (float)(v465 * v616);
				v469 = v463 + (float)(v464 * v616);
				if (v619 <= 0.0)
				{
					v470 = v469 + (float)(v467 * v619);
					v471 = *(float*)(*(_QWORD*)(v4 + 64) + 920i64);
				}
				else
				{
					v470 = v469 + (float)(v466 * v619);
					v471 = *(float*)(*(_QWORD*)(v4 + 64) + 936i64);
				}
				v573.m128_f32[0] = v470;
				*(float*)&v579 = v468 + (float)(v471 * v619);
				if (v615.m128_f32[1] <= 0.0)
				{
					v472 = *(float*)(*(_QWORD*)(v4 + 64) + 928i64);
					v473 = *v459;
				}
				else
				{
					v472 = *v459;
					v473 = *(float*)(*(_QWORD*)(v4 + 64) + 928i64);
				}
				v474 = *((float*)&v579 + 1) + (float)(v473 * v615.m128_f32[1]);
				v475 = v573.m128_f32[1] + (float)(v472 * v615.m128_f32[1]);
				if (v617 <= 0.0)
				{
					v476 = *(float*)(*(_QWORD*)(v4 + 64) + 932i64);
					v477 = *(float*)(*(_QWORD*)(v4 + 64) + 916i64);
				}
				else
				{
					v476 = *(float*)(*(_QWORD*)(v4 + 64) + 916i64);
					v477 = *(float*)(*(_QWORD*)(v4 + 64) + 932i64);
				}
				v478 = v474 + (float)(v477 * v617);
				v479 = v475 + (float)(v476 * v617);
				if (v620 <= 0.0)
				{
					v480 = *(float*)(*(_QWORD*)(v4 + 64) + 936i64);
					v481 = *(float*)(*(_QWORD*)(v4 + 64) + 920i64);
				}
				else
				{
					v480 = *(float*)(*(_QWORD*)(v4 + 64) + 920i64);
					v481 = *(float*)(*(_QWORD*)(v4 + 64) + 936i64);
				}
				v482 = *v459 * v615.m128_f32[2];
				v483 = *(float*)(*(_QWORD*)(v4 + 64) + 928i64) * v615.m128_f32[2];
				*((float*)&v579 + 1) = v478 + (float)(v481 * v620);
				v573.m128_f32[1] = v479 + (float)(v480 * v620);
				if (v615.m128_f32[2] <= 0.0)
				{
					v484 = v573.m128_f32[2] + v483;
					v485 = *((float*)&v579 + 2) + v482;
				}
				else
				{
					v484 = v573.m128_f32[2] + v482;
					v485 = *((float*)&v579 + 2) + v483;
				}
				v486 = *(float*)(*(_QWORD*)(v4 + 64) + 916i64) * v618;
				v487 = *(float*)(*(_QWORD*)(v4 + 64) + 932i64) * v618;
				if (v618 <= 0.0)
				{
					v488 = v484 + v487;
					v489 = v485 + v486;
				}
				else
				{
					v488 = v484 + v486;
					v489 = v485 + v487;
				}
				v490 = v466 * v621;
				v491 = v467 * v621;
				if (v621 <= 0.0)
				{
					v492 = v488 + v491;
					v493 = v489 + v490;
				}
				else
				{
					v492 = v488 + v490;
					v493 = v489 + v491;
				}
				*((float*)&v579 + 2) = v493;
				v573.m128_f32[2] = v492;
				v632[1] = v579;
				v632[0] = (__int128)v573;
				(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v4 + 1432) + 24i64))(*(_QWORD*)(v4 + 1432), v632);
			}
			v494 = 0;
			if (*(_DWORD*)(*(_QWORD*)(v4 + 64) + 760i64))
			{
				while (1)
				{
					v495 = *(_QWORD*)(v4 + 1424);
					if (!*(_QWORD*)(v495 + 8i64 * v494))
						goto LABEL_538;
					v496 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v495 + 8i64 * v494) + 32i64))(*(_QWORD*)(v495 + 8i64 * v494));
					v497 = *(_QWORD*)(v4 + 64);
					a4 = v496;
					v498 = *(unsigned __int16*)(v496 + 2);
					if ((unsigned int)v498 < *(_DWORD*)(v497 + 512))
					{
						v499 = *(unsigned __int16*)(*(_QWORD*)(v497 + 520) + 4 * v498);
						if (v499 >> 3 >= *(_QWORD*)(*(_QWORD*)(v4 + 1224) + 1048i64))
							goto LABEL_538;
						if (((unsigned __int8)(1 << (v499 & 7)) & *(_BYTE*)((v499 >> 3)
							+ *(_QWORD*)(*(_QWORD*)(v4 + 1224) + 1040i64))) == 0)
							goto LABEL_538;
						v500 = (unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(v497 + 520) + 4 * v498) >> 3;
						if (v500 >= *(_QWORD*)(v4 + 1048)
							|| ((unsigned __int8)(1 << (v499 & 7)) & *(_BYTE*)(v500 + *(_QWORD*)(v4 + 1040))) == 0)
						{
							goto LABEL_538;
						}
					}
					v501 = *(_DWORD*)(a4 + 8);
					if (!v501)
					{
						v753[0] = *(_QWORD*)(v4 + 824) + ((unsigned __int64)*(unsigned __int16*)a4 << 6);
						sub_1401AFC20((__int64*)v753, v721);
						v592.m128_u64[0] = *(_QWORD*)(v4 + 16) + 240i64;
						v592.m128_u64[1] = (unsigned __int64)v721;
						v742[0] = (__m128*)v592.m128_u64[0];
						v742[1] = (__m128*)v721;
						sub_1401AFB10(v742, v727);
						v504 = v727;
						v506 = v721;
						v505 = (__m128*) & xmmword_140C78390;
						goto LABEL_537;
					}
					v502 = v501 - 1;
					if (!v502)
						break;
					if (v502 == 1)
					{
						v503 = (__m128*)(*(_QWORD*)(v4 + 16) + 304i64);
						v747[0] = (__m128*)(*(_QWORD*)(v4 + 824) + ((unsigned __int64)*(unsigned __int16*)a4 << 6));
						v747[1] = v503;
						sub_1401AFB10(v747, v728);
						v504 = (__m128*) & xmmword_140C78390;
						v505 = v728;
						v506 = (double*)(*(_QWORD*)(v4 + 16) + 304i64);
					LABEL_537:
						v511 = *(_QWORD*)(*(_QWORD*)(v4 + 1424) + 8i64 * v494);
						(*(void(__fastcall**)(__int64, __m128*, double*, __m128*))(*(_QWORD*)v511 + 48i64))(
							v511,
							v505,
							v506,
							v504);
					}
				LABEL_538:
					if (++v494 >= *(_DWORD*)(*(_QWORD*)(v4 + 64) + 760i64))
					{
						v9 = v566;
						goto LABEL_540;
					}
				}
				v587 = (__m128*)(*(_QWORD*)(v4 + 16) + 240i64);
				v738[1] = (__m128*)(v4 + 1328);
				v738[0] = v587;
				sub_1401AFB10(v738, v725);
				v508 = (unsigned __int64)*v507 << 6;
				v590.m128_u64[1] = (unsigned __int64)v509;
				v510 = (__m128*)(*(_QWORD*)(v4 + 824) + v508);
				v740[1] = v509;
				v590.m128_u64[0] = (unsigned __int64)v510;
				v740[0] = v510;
				sub_1401AFB10(v740, v726);
				v504 = v725;
				v505 = v726;
				goto LABEL_537;
			}
		LABEL_540:
			*(_DWORD*)(v4 + 1408) |= 0x2000u;
		}
		if ((v9 & 0x4000) == 0 || (*(_BYTE*)(v4 + 48) & 2) == 0)
			goto LABEL_605;
		v512 = 0i64;
		v574 = 0i64;
		if (!*(_QWORD*)(v4 + 880))
			goto LABEL_604;
		while (1)
		{
			v513 = *(_QWORD*)(*(_QWORD*)(v4 + 872) + 8 * v512);
			v570 = v513;
			v514 = *(_QWORD*)(v513 + 8);
			if (v514)
			{
				if (!*(_DWORD*)(v514 + 44) && fabs(*(float*)(v514 + 8)) > 0.0000099999997)
				{
					v515 = *(_QWORD*)(v4 + 64);
					v516 = *(_DWORD*)(v514 + 76);
					if (v516 < *(_DWORD*)(v515 + 656))
						break;
				}
			}
		LABEL_602:
			v574 = ++v512;
			if (v512 >= *(_QWORD*)(v4 + 880))
			{
				v9 = v566;
			LABEL_604:
				*(_DWORD*)(v4 + 1408) |= 0x4000u;
			LABEL_605:
				if ((v9 & 0x8000) != 0)
				{
					sub_140308350(*(_QWORD*)(v4 + 64) + 1472i64, (_DWORD*)(v4 + 1712), *(_QWORD*)(v4 + 816), a4);
					*(_DWORD*)(v4 + 1408) |= 0x8000u;
				}
				if ((v9 & 0x10000) != 0)
				{
					v556 = v593;
					if ((~*(_DWORD*)(v4 + 1412) & v593) != 0)
					{
						for (k = *(_QWORD*)(v4 + 1232); k; k = *(_QWORD*)(k + 1248))
						{
							result = sub_140305B60(v4, k, v556);
							if ((int)result < 0)
								return result;
						}
						*(_DWORD*)(v4 + 1412) |= v556 & 0xFFFFFFFD;
					}
				}
				return 0i64;
			}
		}
		while (1)
		{
			a4 = v516;
			v517 = *(__m128**)(v4 + 16);
			v518 = *(_DWORD*)(v514 + 48)
				+ (int)(float)((float)(*(_DWORD*)(*(_QWORD*)(v515 + 664) + 4i64 * v516)
					- *(_DWORD*)(*(_QWORD*)(v514 + 32) + 12i64)
					- *(_DWORD*)(v514 + 12))
					/ *(float*)(v514 + 8));
			v582 = v518;
			if (v517[13].m128_i32[0] - v518 < 0)
			{
			LABEL_601:
				v512 = v574;
				goto LABEL_602;
			}
			v519 = *(_QWORD*)(v515 + 648);
			v520 = *(unsigned __int16*)(*(_QWORD*)(v515 + 672) + 2i64 * v516);
			v521 = *(unsigned __int16*)(v519 + 8 * v520 + 2);
			v522 = *(_QWORD*)(352 * v521 + *(_QWORD*)(v4 + 840));
			if (*(_DWORD*)(v522 + 108) == *(_DWORD*)(*(_QWORD*)v522 + 4i64 * *(int*)(v514 + 16) + 8)
				&& *(_DWORD*)(v522 + 112) == *(_DWORD*)(v514 + 24))
			{
				break;
			}
		LABEL_600:
			sub_1402F1A60(v514, *(_QWORD*)(v4 + 64));
			v515 = *(_QWORD*)(v4 + 64);
			v516 = *(_DWORD*)(v514 + 76);
			v513 = v570;
			if (v516 >= *(_DWORD*)(v515 + 656))
				goto LABEL_601;
		}
		if (*(_WORD*)(v519 + 8 * v520))
		{
			if (*(_WORD*)(v519 + 8 * v520) != 1)
			{
				if (*(_WORD*)(v519 + 8 * v520) != 2 || !v517[30].m128_u64[1])
					goto LABEL_600;
				v523 = (__m128*)(*(_QWORD*)(v4 + 824) + (v521 << 6));
				v744[1] = v517 + 19;
				v744[0] = v523;
				sub_1401AFB10(v744, v722);
				v524 = 0i64;
				v525 = _mm_mul_ps(v723, v723);
				v525.m128_f32[0] = (float)(v525.m128_f32[0] + _mm_shuffle_ps(v525, v525, 85).m128_f32[0])
					+ _mm_shuffle_ps(v525, v525, 170).m128_f32[0];
				v526 = 1.0 / fsqrt(v525.m128_f32[0]);
				v524.m128_f32[0] = fmaxf(
					(float)((float)(3.0 - (float)((float)(v525.m128_f32[0] * v526) * v526)) * 0.5) * v526,
					0.0);
				v527 = _mm_mul_ps(_mm_shuffle_ps(v524, v524, 0), v723);
				v597 = v527;
				LODWORD(v528) = sub_1408FCCB0(v527.m128_f32[0]).m128_u32[0];
				v529 = v528;
				if (_mm_shuffle_ps(v527, v527, 170).m128_f32[0] < 0.0)
					v529 = -v528;
				v530 = fmaxf(0.0, fminf(1.0 - fabs(v597.m128_f32[1]), 1.0));
				v531 = sub_14018B280(112i64, 0);
				v532 = v531;
				if (v531)
				{
					v533 = *(_DWORD*)(v519 + 8 * v520 + 4);
					sub_1403272B0((__int64)v531, v518, (void(__fastcall***)(_QWORD))v4, 0);
					v534 = (__int64)v532;
					v535 = v724;
					*(_QWORD*)v532 = off_140B644E8;
					v532[16] = v533;
					*((_OWORD*)v532 + 5) = v535;
					*((float*)v532 + 24) = v529;
					*((float*)v532 + 25) = v530;
				}
				else
				{
					v534 = 0i64;
				}
				goto LABEL_599;
			}
			if (!*(_DWORD*)(v4 + 320) || (unsigned int)*(unsigned __int16*)(v519 + 8 * v520 + 4) >= *(_DWORD*)(v515 + 696))
				goto LABEL_600;
			sub_14003D8F0(&v594, (__int64)&v517[6].m128_i64[1]);
			v536 = *(unsigned __int16*)(v519 + 8 * v520 + 6);
			v537 = 5i64 * *(unsigned __int16*)(v519 + 8 * v520 + 4);
			v577 = *(_QWORD*)(v4 + 1128);
			if ((*(_DWORD*)(*(_QWORD*)(v4 + 1120) + 4 * v536) & 0x20000) != 0)
			{
				v588[0] = 0i64;
				v538 = sub_14018B280(24i64, 0);
				if (v538)
				{
					*(_QWORD*)v538 = 0i64;
					*((_QWORD*)v538 + 1) = 0i64;
					*((_QWORD*)v538 + 2) = 0i64;
					if (!*((_QWORD*)v538 + 1))
					{
						*((_QWORD*)v538 + 1) = v588;
						*((const void***)v538 + 2) = v588[0];
						v588[0] = (const void**)v538;
						v539 = *((_QWORD*)v538 + 2);
						if (v539)
							*(_QWORD*)(v539 + 8) = v538 + 4;
					}
				}
				else
				{
					v538 = 0i64;
				}
				v591 = 0i64;
				v540 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64, _QWORD * (__fastcall*)(__int64, int, _QWORD*), int*, _QWORD))(**(_QWORD**)(v577 + 8 * v537) + 16i64))(
					*(_QWORD*)(v577 + 8 * v537),
					*(unsigned int*)(*(_QWORD*)(v4 + 1112) + 4i64 * *(unsigned __int16*)(v519 + 8 * v520 + 6)),
					&v591,
					2150629376i64,
					sub_1402F2150,
					v538,
					0i64);
				if (v588[0])
				{
					if (v540 < 0)
					{
						if (v538)
							sub_1402F1EF0(v538);
					}
					else
					{
						v542 = v591;
						if (*(_QWORD*)v538 != v591)
						{
							if (v591)
								(**(void(__fastcall***)(__int64))v591)(v591);
							if (*(_QWORD*)v538)
								(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v538 + 8i64))(*(_QWORD*)v538);
							*(_QWORD*)v538 = v542;
						}
						v543 = (_QWORD*)*((_QWORD*)v538 + 1);
						if (v543)
							*v543 = *((_QWORD*)v538 + 2);
						v544 = *((_QWORD*)v538 + 2);
						v545 = v538 + 4;
						if (v544)
							*(_QWORD*)(v544 + 8) = *((_QWORD*)v538 + 1);
						*((_QWORD*)v538 + 1) = 0i64;
						v541 = (int**)(v570 + 24);
						*(_QWORD*)v545 = 0i64;
						if (!*((_QWORD*)v538 + 1))
						{
							*((_QWORD*)v538 + 1) = v541;
							*(_QWORD*)v545 = *v541;
							*v541 = v538;
							if (*(_QWORD*)v545)
								*(_QWORD*)(*(_QWORD*)v545 + 8i64) = v545;
						}
					}
				}
				if (v591)
				{
					(*(void(__fastcall**)(__int64, int**))(*(_QWORD*)v591 + 8i64))(v591, v541);
					v591 = 0i64;
				}
				if (v588[0])
					sub_1401A4A00(v588);
				v513 = v570;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(v4 + 1128) + 8 * v537)
					+ 16i64))(
						*(_QWORD*)(*(_QWORD*)(v4 + 1128) + 8 * v537),
						*(unsigned int*)(*(_QWORD*)(v4 + 1112) + 4 * v536),
						0i64,
						3145728i64,
						0i64,
						0i64,
						0i64);
			}
			sub_14003D880(&v594);
			if (!*(_QWORD*)(v4 + 992))
				goto LABEL_600;
			v546 = *(__m128*)((v521 << 6) + *(_QWORD*)(v4 + 824) + 48);
			v547 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v546, v546, 85), *(__m128*)(*(_QWORD*)(v4 + 16) + 320i64)),
						_mm_mul_ps(_mm_shuffle_ps(v546, v546, 0), *(__m128*)(*(_QWORD*)(v4 + 16) + 304i64))),
					_mm_mul_ps(_mm_shuffle_ps(v546, v546, 170), *(__m128*)(*(_QWORD*)(v4 + 16) + 336i64))),
				*(__m128*)(*(_QWORD*)(v4 + 16) + 352i64));
			v548 = sub_14018B280(96i64, 0);
			v549 = (__m128*)v548;
			if (v548)
			{
				v550 = *(_DWORD*)v513;
				v551 = *(_DWORD*)(*(_QWORD*)(v4 + 1112) + 4i64 * *(unsigned __int16*)(v519 + 8 * v520 + 6));
				sub_1403272B0((__int64)v548, v582, (void(__fastcall***)(_QWORD))v4, 0);
				v549->m128_u64[0] = (unsigned __int64)off_140B64498;
				v549[4].m128_i32[0] = v550;
				v549[4].m128_i32[1] = v551;
				v549[5] = v547;
			LABEL_598:
				v534 = (__int64)v549;
			LABEL_599:
				sub_1403129A0(*(_QWORD*)(v4 + 16), v534);
				goto LABEL_600;
			}
		}
		else
		{
			v552 = (__m128*)(*(_QWORD*)(v4 + 824) + (v521 << 6));
			v746[1] = v517 + 19;
			v746[0] = v552;
			sub_1401AFB10(v746, v633);
			v553 = sub_14018B280(160i64, 0);
			v549 = (__m128*)v553;
			if (v553)
			{
				v554 = *(_DWORD*)(v519 + 8 * v520 + 4);
				v555 = *(_DWORD*)v513;
				sub_1403272B0((__int64)v553, v582, (void(__fastcall***)(_QWORD))v4, 0);
				v549->m128_u64[0] = (unsigned __int64)off_140B644A8;
				v549[4].m128_i32[0] = v555;
				v549[4].m128_i32[1] = v554;
				v549[5] = v633[0];
				v549[6] = v633[1];
				v549[7] = v633[2];
				v549[8] = v633[3];
				v549[9].m128_i32[0] = 0;
				goto LABEL_598;
			}
		}
		v549 = 0i64;
		goto LABEL_598;
	}
	while (1)
	{
		v12 = *(_QWORD*)(*(_QWORD*)(v4 + 872) + 8 * v11);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 400i64))(v4);
		result = sub_1402F1F50(v12, *(_DWORD*)(*(_QWORD*)(v4 + 16) + 208i64), *(float*)(v4 + 196), v13);
		if ((int)result < 0)
			return result;
		if (*(float*)(v4 + 196) != 0.0)
		{
			v14 = *(_DWORD**)(v12 + 8);
			if (v14)
			{
				if (!v14[11])
				{
					v15 = v14[5];
					if ((v15 & 0x10) == 0 && (v15 & 4) != 0)
						sub_140306300(v4, v14[13]);
				}
			}
			v16 = *(_DWORD**)(v12 + 16);
			if (v16)
			{
				if (!v16[12])
				{
					v17 = v16[5];
					if ((v17 & 0x10) == 0 && (v17 & 4) != 0)
						sub_140306300(v4, v16[14]);
				}
			}
		}
		if ((unsigned __int64)++v11 >= *(_QWORD*)(v4 + 880))
			goto LABEL_20;
	}
}
// 140304738: conditional instruction was optimized away because edx.4!=0
// 14030122C: variable 'v25' is possibly undefined
// 14030122C: variable 'v26' is possibly undefined
// 1403016BE: variable 'a4' is possibly undefined
// 140301BAD: variable 'v74' is possibly undefined
// 140301EE3: variable 'v106' is possibly undefined
// 1403023AC: variable 'v121' is possibly undefined
// 14030265A: variable 'v158' is possibly undefined
// 140303B48: variable 'v325' is possibly undefined
// 1403052E8: variable 'v507' is possibly undefined
// 1403052F0: variable 'v509' is possibly undefined
// 1403053D2: variable 'v506' is possibly undefined
// 140305848: variable 'v541' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B64498: using guessed type __int64 (__fastcall *off_140B64498[13])();
// 140B644A8: using guessed type __int64 (__fastcall *off_140B644A8[11])();
// 140B644E8: using guessed type __int64 (__fastcall *off_140B644E8[3])();
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A5D0: using guessed type __int128 xmmword_140B7A5D0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7AEE0: using guessed type __int128 xmmword_140B7AEE0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C42008: using guessed type int dword_140C42008;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 140C8A5F4: using guessed type _DWORD dword_140C8A5F4;
// 140DC0D50: using guessed type int dword_140DC0D50;
// 140DC0D60: using guessed type __int128 xmmword_140DC0D60;
// 140DC0D70: using guessed type __int128 xmmword_140DC0D70;
// 140DC0D80: using guessed type __int128 xmmword_140DC0D80;
// 140DC0D90: using guessed type __int128 xmmword_140DC0D90;
// 140300FD0: using guessed type __int64 var_310[10];
// 140300FD0: using guessed type __m128 var_8A0[4];
// 140300FD0: using guessed type __m128 var_850[4];
// 140300FD0: using guessed type __m128 var_220[2];
// 140300FD0: using guessed type double var_8F0[8];
// 140300FD0: using guessed type __m128 var_800[4];
// 140300FD0: using guessed type __int64 var_270[10];
// 140300FD0: using guessed type __m128 var_930[4];
// 140300FD0: using guessed type __m128 var_970[4];
// 140300FD0: using guessed type __m128 var_A30[4];
// 140300FD0: using guessed type __m128 var_9F0[4];
// 140300FD0: using guessed type double var_AB0[8];
// 140300FD0: using guessed type unsigned __int64 var_2C0[10];
// 140300FD0: using guessed type __m128 var_9B0[4];
// 140300FD0: using guessed type __m128 var_A70[2];

