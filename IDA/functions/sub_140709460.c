#include "../winhttp.h"

//----- (0000000140709460) ----------------------------------------------------
__int64 __fastcall sub_140709460(_QWORD* a1)
{
	unsigned __int64 v2; // r15
	unsigned int v3; // eax
	unsigned int v4; // r13d
	unsigned int v5; // r12d
	__int64 v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int16* v8; // rdx
	unsigned __int64* v9; // r14
	unsigned __int64 v10; // rsi
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned __int64 v13; // r8
	__int64* v14; // rbx
	__int64 v15; // rax
	unsigned int* v16; // r9
	__int64 v17; // rax
	__int64 v18; // r9
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rbx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rcx
	__int64 v51; // rbx
	__int64 v52; // rax
	__int64 v53; // rcx
	__int64 v54; // rbx
	__int64 v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rcx
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rbx
	__int64 v68; // rax
	__int64 v69; // rax
	__int64* v70; // rax
	__int64 v71; // rcx
	__int64 v72; // rbx
	__int64 v73; // rax
	__int64 v74; // rax
	__int64* v75; // rax
	__int64 v76; // rcx
	__int64 v77; // rbx
	__int64 v78; // rax
	__int64 v79; // rax
	__int64* v80; // rax
	__int64 v81; // rcx
	__int64 v82; // rbx
	__int64 v83; // rax
	__int64 v84; // rcx
	__int64 v85; // rbx
	__int64 v86; // rax
	__int64 v87; // rcx
	__int64 v88; // rbx
	__int64 v89; // rax
	__int64 v90; // rax
	__int64* v91; // rax
	__int64 v92; // rcx
	__int64 v93; // rbx
	__int64 v94; // rax
	__int64 v95; // rax
	__int64* v96; // rax
	__int64 v97; // rcx
	__int64 v98; // rbx
	__int64 v99; // rax
	__int64 v100; // rax
	__int64* v101; // rax
	__int64 v102; // rcx
	__int64 v103; // rbx
	__int64 v104; // rax
	__int64 v105; // rax
	__int64* v106; // rax
	__int64 v107; // rcx
	__int64 v108; // rbx
	__int64 v109; // rax
	__int64 v110; // rax
	__int64* v111; // rax
	__int64 v112; // rcx
	__int64 v113; // rbx
	__int64 v114; // rax
	__int64 v115; // rax
	__int64* v116; // rax
	__int64 v117; // rcx
	__int64 v118; // rbx
	__int64 v119; // rax
	__int64 v120; // rcx
	__int64 v121; // rbx
	__int64 v122; // rax
	__int64 v123; // rcx
	__int64 v124; // rbx
	__int64 v125; // rax
	__int64 v126; // rax
	__int64* v127; // rax
	__int64 v128; // rcx
	__int64 v129; // rbx
	__int64 v130; // rax
	__int64 v131; // rax
	__int64* v132; // rax
	__int64 v133; // rcx
	__int64 v134; // rbx
	__int64 v135; // rax
	__int64 v136; // rax
	__int64* v137; // rax
	__int64 v138; // rcx
	__int64 v139; // rbx
	__int64 v140; // rax
	__int64 v141; // rax
	__int64* v142; // rax
	__int64 v143; // rcx
	__int64 v144; // rbx
	__int64 v145; // rax
	__int64 v146; // rcx
	__int64 v147; // rbx
	__int64 v148; // rax
	__int64 v149; // rcx
	__int64 v150; // rbx
	__int64 v151; // rax
	__int64 v152; // rax
	__int64* v153; // rax
	__int64 v154; // rcx
	__int64 v155; // rbx
	__int64 v156; // rax
	__int64 v157; // rax
	__int64* v158; // rax
	__int64 v159; // rcx
	__int64 v160; // rbx
	__int64 v161; // rax
	__int64 v162; // rax
	__int64* v163; // rax
	__int64 v164; // rcx
	__int64 v165; // rbx
	__int64 v166; // rax
	__int64 v167; // rcx
	__int64 v168; // rbx
	__int64 v169; // rax
	__int64 v170; // rcx
	__int64 v171; // rbx
	__int64 v172; // rax
	__int64 v173; // rax
	__int64* v174; // rax
	__int64 v175; // rcx
	__int64 v176; // rbx
	__int64 v177; // rax
	__int64 v178; // rax
	__int64* v179; // rax
	__int64 v180; // rcx
	__int64 v181; // rbx
	__int64 v182; // rax
	__int64 v183; // rax
	__int64* v184; // rax
	__int64 v185; // rcx
	__int64 v186; // rbx
	__int64 v187; // rax
	__int64 v188; // rax
	__int64* v189; // rax
	__int64 v190; // rcx
	__int64 v191; // rbx
	__int64 v192; // rax
	__int64 v193; // rax
	__int64* v194; // rax
	__int64 v195; // rcx
	__int64 v196; // rbx
	__int64 v197; // rax
	__int64 v198; // rax
	__int64* v199; // rax
	__int64 v200; // rcx
	__int64 v201; // rbx
	__int64 v202; // rax
	__int64 v203; // rcx
	__int64 v204; // rbx
	__int64 v205; // rax
	__int64 v206; // rcx
	__int64 v207; // rbx
	__int64 v208; // rax
	__int64 v209; // rax
	__int64* v210; // rax
	__int64 v211; // rcx
	__int64 v212; // rbx
	__int64 v213; // rax
	__int64 v214; // rax
	__int64* v215; // rax
	__int64 v216; // rcx
	__int64 v217; // rbx
	__int64 v218; // rax
	__int64 v219; // rax
	__int64* v220; // rax
	__int64 v221; // rdx
	__int64 v222; // rdx
	__int64 v223; // rdx
	__int64 v224; // rdx
	__int64 v225; // rbx
	__int64 v226; // rax
	__int64 v227; // rdx
	__int64 v228; // rdx
	__int64 v229; // rdx
	__int64 v230; // rbx
	__int64 v231; // rax
	__int64 v232; // rdx
	__int64 v233; // rdx
	__int64 v234; // rdx
	__int64 v235; // rdx
	__int64 v236; // rdx
	__int64 v237; // rdx
	__int64 v238; // rbx
	__int64 v239; // rax
	__int64 v240; // rdx
	__int64 v241; // rdx
	__int64 v242; // rdx
	__int64 v243; // rdx
	__int64 v244; // rdx
	__int64 v245; // rdx
	__int64 v246; // rbx
	__int64 v247; // rax
	__int64 v248; // rdx
	__int64 v249; // rdx
	__int64 v250; // rdx
	__int64 v251; // rdx
	__int64 v252; // rdx
	__int64 v253; // rdx
	__int64 v254; // rbx
	__int64 v255; // rax
	__int64 v256; // rdx
	__int64 v257; // rdx
	__int64 v258; // rdx
	__int64 v259; // rdx
	__int64 v260; // rdx
	__int64 v261; // rdx
	__int64 v262; // rdx
	__int64 v263; // rbx
	__int64 v264; // rax
	__int64 v265; // rdx
	__int64 v266; // rbx
	__int64 v267; // rax
	__int64 v268; // rdx
	__int64 v269; // rdx
	__int64 v270; // rdx
	__int64 v271; // rdx
	__int64 v272; // rdx
	__int64 v273; // rdx
	__int64 v274; // rdx
	__int64 v275; // rdx
	__int64 v276; // rdx
	__int64 v277; // rdx
	__int64 v278; // rdx
	__int64 v279; // rdx
	__int64 v280; // rdx
	__int64 v281; // rdx
	__int64 v282; // rdx
	__int64 v283; // rdx
	__int64 v284; // rdx
	__int64 v285; // rdx
	__int64 v286; // rdx
	__int64 v287; // rdx
	__int64 v288; // rdx
	__int64 v289; // rdx
	__int64 v290; // rdx
	__int64 v291; // rdx
	__int64 v292; // rdx
	__int64 v293; // rdx
	__int64 v294; // rdx
	__int64 v295; // rdx
	__int64 v296; // rdx
	__int64 v297; // rdx
	__int64 v298; // rdx
	__int64 v299; // rdx
	__int64 v300; // rdx
	__int64 v301; // rdx
	__int64 v302; // rdx
	__int64 v303; // rdx
	__int64 v304; // rdx
	__int64 v305; // rdx
	__int64 v306; // rdx
	__int64 v307; // rdx
	int v308; // ecx
	__int64 v309; // rdx
	int v310; // ecx
	__int64 v311; // rdx
	int v312; // ecx
	__int64 v313; // rdx
	int v314; // ecx
	__int64 v315; // rdx
	int v316; // ecx
	__int64 v317; // rax
	int v318; // ecx
	__int64 v319; // rax
	__int64 v320; // rbx
	__int64 v321; // rax
	unsigned int* v322; // r9
	__int64 v323; // rax
	int v324; // ecx
	__int64 v325; // rax
	__int64 v326; // rbx
	__int64 v327; // rax
	unsigned int* v328; // r9
	__int64 v329; // rax
	int v330; // ecx
	__int64 v331; // rax
	__int64 v332; // rbx
	__int64 v333; // rax
	unsigned int* v334; // r9
	__int64 v335; // rdx
	__int64 v336; // rdx
	__int64 v337; // rdx
	__int64 v338; // rdx
	__int64 v339; // rdx
	__int64 v340; // rdx
	__int64 v341; // rdx
	__int64 v342; // rdx
	__int64 v343; // rdx
	__int64 v344; // rdx
	__int64 v345; // rdx
	__int64 v346; // rdx
	__int64 v347; // rdx
	__int64 v348; // rdx
	__int64 v349; // rdx
	__int64 v350; // rdx
	__int64 v351; // rdx
	__int64 v352; // rdx
	__int64 v353; // rdx
	__int64 v354; // rdx
	__int64 v355; // rdx
	__int64 v356; // rdx
	__int64 v357; // rdx
	__int64 v358; // rdx
	__int64 v359; // rdx
	__int64 v360; // rdx
	__int64 v361; // rdx
	__int64 v362; // rdx
	__int64 v363; // rdx
	__int64 v364; // rdx
	__int64 v365; // rdx
	__int64 v366; // rdx
	__int64 v367; // rdx
	__int64 v368; // rdx
	__int64 v369; // rdx
	__int64 v370; // rdx
	__int64 v371; // rdx
	__int64 v372; // rdx
	__int64 v373; // rdx
	__int64 v374; // rdx
	__int64 v375; // rdx
	__int64 v376; // rdx
	__int64 v377; // rdx
	__int64 v378; // rdx
	__int64 v379; // rdx
	__int64 v380; // rdx
	__int64 v381; // rdx
	__int64 v382; // rdx
	__int64 v383; // rax
	__int64 v384; // rbx
	__int64 v385; // rax
	unsigned int* v386; // r9
	__int64 v387; // rdx
	__int64 v388; // rdx
	__int64 v389; // rdx
	__int64 v390; // rdx
	__int64 v391; // rdx
	__int64 v392; // rdx
	__int64 v393; // rdx
	__int64 v394; // rdx
	__int64 v395; // rdx
	__int64 v396; // rdx
	__int64 v397; // rdx
	__int64 v398; // rdx
	__int64 v399; // rdx
	__int64 v400; // rdx
	__int64 v401; // rdx
	__int64 v402; // rdx
	__int64 v403; // rdx
	__int64 v404; // rdx
	__int64 v405; // rdx
	__int64 v406; // rdx
	__int64 v407; // rdx
	__int64 v408; // rdx
	__int64 v409; // rdx
	__int64 v410; // rdx
	__int64 v411; // rdx
	__int64 v412; // rdx
	__int64 v413; // rdx
	__int64 v414; // rdx
	__int64 v415; // rdx
	__int64 v416; // rdx
	__int64 v417; // rdx
	__int64 v418; // rdx
	__int64 v419; // rdx
	__int64 v420; // rdx
	__int64 v421; // rdx
	__int64 v422; // rdx
	__int64 v423; // rdx
	__int64 v424; // rdx
	__int64 v425; // rdx
	__int64 v426; // rdx
	__int64 v427; // rdx
	__int64 v428; // rdx
	__int64 v429; // rdx
	__int64 v430; // rdx
	__int64 v431; // rdx
	__int64 v432; // rdx
	__int64 v433; // rdx
	__int64 v434; // rdx
	__int64 v435; // rdx
	__int64 v436; // rdx
	__int64 v437; // rdx
	__int64 v438; // rdx
	__int64 v439; // rdx
	__int64 v440; // rdx
	__int64 v441; // rdx
	__int64 v442; // rdx
	__int64 v443; // rdx
	__int64 v444; // rdx
	__int64 v445; // rdx
	__int64 v446; // rdx
	__int64 v447; // rdx
	__int64 v448; // rdx
	__int64 v449; // rdx
	__int64 v450; // rdx
	__int64 v451; // rdx
	__int64 v452; // rdx
	__int64 v453; // rdx
	__int64 v454; // rdx
	__int64 v455; // rdx
	__int64 v456; // rdx
	__int64 v457; // rdx
	__int64 v458; // rdx
	__int64 v459; // rdx
	__int64 v460; // rdx
	__int64 v461; // rdx
	__int64 v462; // rdx
	__int64 v463; // rdx
	__int64 v464; // rdx
	__int64 v465; // rdx
	__int64 v466; // rdx
	__int64 v467; // rdx
	__int64 v468; // rdx
	__int64 v469; // rdx
	__int64 v470; // rdx
	__int64 v471; // rdx
	__int64 v472; // rdx
	__int64 v473; // rdx
	__int64 v474; // rdx
	__int64 v475; // rdx
	__int64 v476; // rdx
	__int64 v477; // rdx
	__int64 v478; // rdx
	__int64 v479; // rdx
	__int64 v480; // rdx
	__int64 v481; // rdx
	unsigned __int64 v482; // rcx
	__int64 v483; // rax
	__int64 v484; // rsi
	__int64 v485; // rax
	__int64 v486; // rbx
	int v487; // ebx
	unsigned __int16* v488; // rax
	__int64 v489; // rdx
	__int64 v490; // rdx
	__int64 v491; // rdx
	__int64 v492; // rdx
	__int64 v493; // rdx
	__int64 v494; // rdx
	__int64 v495; // rdx
	__int64 v496; // rdx
	__int64 v497; // rdx
	__int64 v498; // rdx
	__int64 v499; // rdx
	__int64 v500; // rdx
	__int64 v501; // rdx
	__int64 v502; // rdx
	__int64 v503; // rdx
	__int64 v504; // rdx
	__int64 v505; // rdx
	__int64 v506; // rdx
	__int64 v507; // rdx
	__int64 v508; // rdx
	__int64 v509; // rdx
	__int64 v510; // rdx
	__int64 v511; // rdx
	__int64 v512; // rdx
	__int64 v513; // rdx
	__int64 v514; // rdx
	__int64 v515; // rdx
	__int64 v516; // rdx
	__int64 v517; // rdx
	__int64 v518; // rdx
	__int64 v519; // rdx
	__int64 v520; // rdx
	__int64 v521; // rax
	unsigned int* v522; // r9
	__int64 v524; // [rsp+30h] [rbp-30h] BYREF
	int v525; // [rsp+38h] [rbp-28h]
	__int64 v526; // [rsp+40h] [rbp-20h] BYREF
	unsigned __int64* v527; // [rsp+48h] [rbp-18h]

	sub_140057020(a1, "GameLib", &off_140B726D0);
	v2 = 0i64;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6B2B0, qword_140C63858);
	}
	else
	{
		if (dword_140C653EC)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140211CE0() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64278 + 40i64))(qword_140C64278);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	if (v4)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C653EC && (int)sub_140211CE0() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64278 + 32i64))(qword_140C64278, v5);
			LABEL_15:
				if (v6)
				{
					v7 = *(_QWORD*)(v6 + 8);
					if (v7)
					{
						if (v7 <= qword_140C3FE70)
							v8 = (unsigned __int16*)(v7 + qword_140C3FE68);
						else
							v8 = 0i64;
					}
					else
					{
						v8 = 0i64;
					}
					sub_14018F0E0(&v526, v8);
					v9 = v527;
					if (v527)
					{
						v10 = -1i64;
						do
							++v10;
						while (*((_BYTE*)v527 + v10));
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v11 = a1[2];
						v12 = sub_140062650((__int64)a1, v9, v10);
						*(_DWORD*)(v11 + 8) = 4;
						*(_QWORD*)v11 = v12;
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
					}
					a1[2] += 16i64;
					v13 = -1i64;
					v14 = (__int64*)(a1[2] - 32i64);
					do
						++v13;
					while (*((_BYTE*)v9 + v13));
					v15 = sub_140062650((__int64)a1, v9, v13);
					v16 = (unsigned int*)(a1[2] - 16i64);
					v524 = v15;
					v525 = 4;
					sub_14005EA50((__int64)a1, v14, (int*)&v524, v16);
					a1[2] -= 16i64;
					if (v9)
						sub_14018B900((__int64)v9, 0);
				}
			}
			if (++v5 >= v4)
				goto LABEL_33;
		}
		v6 = qword_140C63848(off_140A6B2B0, v5, qword_140C63858);
		goto LABEL_15;
	}
LABEL_33:
	v17 = sub_140062650((__int64)a1, (unsigned __int64*)"GameLib", 7ui64);
	v18 = a1[2];
	v524 = v17;
	v525 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v524, v18);
	v19 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v19 + 120) >= *(_QWORD*)(v19 + 112))
		sub_14005E2C0((__int64)a1);
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"RezType", 7ui64);
	*(_DWORD*)(v20 + 8) = 4;
	*(_QWORD*)v20 = v21;
	v22 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v22 + 120) >= *(_QWORD*)(v22 + 112))
		sub_14005E2C0((__int64)a1);
	v23 = a1[2];
	v24 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v23 + 8) = 5;
	*(_QWORD*)v23 = v24;
	v25 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v25 + 120) >= *(_QWORD*)(v25 + 112))
		sub_14005E2C0((__int64)a1);
	v26 = a1[2];
	v27 = sub_140062650((__int64)a1, (unsigned __int64*)"WakeHere", 8ui64);
	*(_DWORD*)(v26 + 8) = 4;
	*(_QWORD*)v26 = v27;
	a1[2] += 16i64;
	v28 = a1[2];
	*(_QWORD*)v28 = 0x3FF0000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v30 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v30 + 120) >= *(_QWORD*)(v30 + 112))
		sub_14005E2C0((__int64)a1);
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"Holocrypt", 9ui64);
	*(_DWORD*)(v31 + 8) = 4;
	*(_QWORD*)v31 = v32;
	a1[2] += 16i64;
	v33 = a1[2];
	*(_QWORD*)v33 = 0x4000000000000000i64;
	*(_DWORD*)(v33 + 8) = 3;
	a1[2] += 16i64;
	v34 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v34, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v35 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v35 + 120) >= *(_QWORD*)(v35 + 112))
		sub_14005E2C0((__int64)a1);
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"ExitInstance", 0xCui64);
	*(_DWORD*)(v36 + 8) = 4;
	*(_QWORD*)v36 = v37;
	a1[2] += 16i64;
	v38 = a1[2];
	*(_QWORD*)v38 = 0x4040000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v40 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v40 + 120) >= *(_QWORD*)(v40 + 112))
		sub_14005E2C0((__int64)a1);
	v41 = a1[2];
	v42 = sub_140062650((__int64)a1, (unsigned __int64*)"SpellCasterLocation", 0x13ui64);
	*(_DWORD*)(v41 + 8) = 4;
	*(_QWORD*)v41 = v42;
	a1[2] += 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4010000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v45 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v45 + 120) >= *(_QWORD*)(v45 + 112))
		sub_14005E2C0((__int64)a1);
	v46 = a1[2];
	v47 = sub_140062650((__int64)a1, (unsigned __int64*)"WakeHereServiceToken", 0x14ui64);
	*(_DWORD*)(v46 + 8) = 4;
	*(_QWORD*)v46 = v47;
	a1[2] += 16i64;
	v48 = a1[2];
	*(_QWORD*)v48 = 0x4050000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v50 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v50 + 120) >= *(_QWORD*)(v50 + 112))
		sub_14005E2C0((__int64)a1);
	v51 = a1[2];
	v52 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumMapOverlayType", 0x16ui64);
	*(_DWORD*)(v51 + 8) = 4;
	*(_QWORD*)v51 = v52;
	v53 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v53 + 120) >= *(_QWORD*)(v53 + 112))
		sub_14005E2C0((__int64)a1);
	v54 = a1[2];
	v55 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v54 + 8) = 5;
	*(_QWORD*)v54 = v55;
	v56 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v56 + 120) >= *(_QWORD*)(v56 + 112))
		sub_14005E2C0((__int64)a1);
	v57 = a1[2];
	v58 = sub_140062650((__int64)a1, (unsigned __int64*)"Unit", 4ui64);
	*(_DWORD*)(v57 + 8) = 4;
	*(_QWORD*)v57 = v58;
	a1[2] += 16i64;
	v59 = a1[2];
	*(_QWORD*)v59 = 0i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v61 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v61 + 120) >= *(_QWORD*)(v61 + 112))
		sub_14005E2C0((__int64)a1);
	v62 = a1[2];
	v63 = sub_140062650((__int64)a1, (unsigned __int64*)"Object", 6ui64);
	*(_DWORD*)(v62 + 8) = 4;
	*(_QWORD*)v62 = v63;
	a1[2] += 16i64;
	v64 = a1[2];
	*(_QWORD*)v64 = 0x3FF0000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v66 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v66 + 120) >= *(_QWORD*)(v66 + 112))
		sub_14005E2C0((__int64)a1);
	v67 = a1[2];
	v68 = sub_140062650((__int64)a1, (unsigned __int64*)"PathObjective", 0xDui64);
	*(_DWORD*)(v67 + 8) = 4;
	*(_QWORD*)v67 = v68;
	a1[2] += 16i64;
	v69 = a1[2];
	*(_QWORD*)v69 = 0x4000000000000000i64;
	*(_DWORD*)(v69 + 8) = 3;
	a1[2] += 16i64;
	v70 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v70, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v71 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v71 + 120) >= *(_QWORD*)(v71 + 112))
		sub_14005E2C0((__int64)a1);
	v72 = a1[2];
	v73 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestObjective", 0xEui64);
	*(_DWORD*)(v72 + 8) = 4;
	*(_QWORD*)v72 = v73;
	a1[2] += 16i64;
	v74 = a1[2];
	*(_QWORD*)v74 = 0x4008000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v75, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v76 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v76 + 120) >= *(_QWORD*)(v76 + 112))
		sub_14005E2C0((__int64)a1);
	v77 = a1[2];
	v78 = sub_140062650((__int64)a1, (unsigned __int64*)"TrackedUnit", 0xBui64);
	*(_DWORD*)(v77 + 8) = 4;
	*(_QWORD*)v77 = v78;
	a1[2] += 16i64;
	v79 = a1[2];
	*(_QWORD*)v79 = 0x4010000000000000i64;
	*(_DWORD*)(v79 + 8) = 3;
	a1[2] += 16i64;
	v80 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v80, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v81 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v81 + 120) >= *(_QWORD*)(v81 + 112))
		sub_14005E2C0((__int64)a1);
	v82 = a1[2];
	v83 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumEquipItemResult", 0x17ui64);
	*(_DWORD*)(v82 + 8) = 4;
	*(_QWORD*)v82 = v83;
	v84 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v84 + 120) >= *(_QWORD*)(v84 + 112))
		sub_14005E2C0((__int64)a1);
	v85 = a1[2];
	v86 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v85 + 8) = 5;
	*(_QWORD*)v85 = v86;
	v87 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v87 + 120) >= *(_QWORD*)(v87 + 112))
		sub_14005E2C0((__int64)a1);
	v88 = a1[2];
	v89 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F883C, 2ui64);
	*(_DWORD*)(v88 + 8) = 4;
	*(_QWORD*)v88 = v89;
	a1[2] += 16i64;
	v90 = a1[2];
	*(_QWORD*)v90 = 0i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v92 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v92 + 120) >= *(_QWORD*)(v92 + 112))
		sub_14005E2C0((__int64)a1);
	v93 = a1[2];
	v94 = sub_140062650((__int64)a1, (unsigned __int64*)"Cooldown", 8ui64);
	*(_DWORD*)(v93 + 8) = 4;
	*(_QWORD*)v93 = v94;
	a1[2] += 16i64;
	v95 = a1[2];
	*(_QWORD*)v95 = 0x3FF0000000000000i64;
	*(_DWORD*)(v95 + 8) = 3;
	a1[2] += 16i64;
	v96 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v96, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v97 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v97 + 120) >= *(_QWORD*)(v97 + 112))
		sub_14005E2C0((__int64)a1);
	v98 = a1[2];
	v99 = sub_140062650((__int64)a1, (unsigned __int64*)"Invalid", 7ui64);
	*(_DWORD*)(v98 + 8) = 4;
	*(_QWORD*)v98 = v99;
	a1[2] += 16i64;
	v100 = a1[2];
	*(_QWORD*)v100 = 0x4014000000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v101, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v102 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v102 + 120) >= *(_QWORD*)(v102 + 112))
		sub_14005E2C0((__int64)a1);
	v103 = a1[2];
	v104 = sub_140062650((__int64)a1, (unsigned __int64*)"LevelTooLow", 0xBui64);
	*(_DWORD*)(v103 + 8) = 4;
	*(_QWORD*)v103 = v104;
	a1[2] += 16i64;
	v105 = a1[2];
	*(_QWORD*)v105 = 0x4000000000000000i64;
	*(_DWORD*)(v105 + 8) = 3;
	a1[2] += 16i64;
	v106 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v106, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v107 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v107 + 120) >= *(_QWORD*)(v107 + 112))
		sub_14005E2C0((__int64)a1);
	v108 = a1[2];
	v109 = sub_140062650((__int64)a1, (unsigned __int64*)"WrongClass", 0xAui64);
	*(_DWORD*)(v108 + 8) = 4;
	*(_QWORD*)v108 = v109;
	a1[2] += 16i64;
	v110 = a1[2];
	*(_QWORD*)v110 = 0x4008000000000000i64;
	*(_DWORD*)(v110 + 8) = 3;
	a1[2] += 16i64;
	v111 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v111, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v112 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v112 + 120) >= *(_QWORD*)(v112 + 112))
		sub_14005E2C0((__int64)a1);
	v113 = a1[2];
	v114 = sub_140062650((__int64)a1, (unsigned __int64*)"WrongRace", 9ui64);
	*(_DWORD*)(v113 + 8) = 4;
	*(_QWORD*)v113 = v114;
	a1[2] += 16i64;
	v115 = a1[2];
	*(_QWORD*)v115 = 0x4010000000000000i64;
	*(_DWORD*)(v115 + 8) = 3;
	a1[2] += 16i64;
	v116 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v116, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v117 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v117 + 120) >= *(_QWORD*)(v117 + 112))
		sub_14005E2C0((__int64)a1);
	v118 = a1[2];
	v119 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumAddonSaveLevel", 0x16ui64);
	*(_DWORD*)(v118 + 8) = 4;
	*(_QWORD*)v118 = v119;
	v120 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v120 + 120) >= *(_QWORD*)(v120 + 112))
		sub_14005E2C0((__int64)a1);
	v121 = a1[2];
	v122 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v121 + 8) = 5;
	*(_QWORD*)v121 = v122;
	v123 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v123 + 120) >= *(_QWORD*)(v123 + 112))
		sub_14005E2C0((__int64)a1);
	v124 = a1[2];
	v125 = sub_140062650((__int64)a1, (unsigned __int64*)"General", 7ui64);
	*(_DWORD*)(v124 + 8) = 4;
	*(_QWORD*)v124 = v125;
	a1[2] += 16i64;
	v126 = a1[2];
	*(_QWORD*)v126 = 0x3FF0000000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v127, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v128 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v128 + 120) >= *(_QWORD*)(v128 + 112))
		sub_14005E2C0((__int64)a1);
	v129 = a1[2];
	v130 = sub_140062650((__int64)a1, (unsigned __int64*)"Account", 7ui64);
	*(_DWORD*)(v129 + 8) = 4;
	*(_QWORD*)v129 = v130;
	a1[2] += 16i64;
	v131 = a1[2];
	*(_QWORD*)v131 = 0x4000000000000000i64;
	*(_DWORD*)(v131 + 8) = 3;
	a1[2] += 16i64;
	v132 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v132, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v133 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v133 + 120) >= *(_QWORD*)(v133 + 112))
		sub_14005E2C0((__int64)a1);
	v134 = a1[2];
	v135 = sub_140062650((__int64)a1, (unsigned __int64*)"Realm", 5ui64);
	*(_DWORD*)(v134 + 8) = 4;
	*(_QWORD*)v134 = v135;
	a1[2] += 16i64;
	v136 = a1[2];
	*(_QWORD*)v136 = 0x4008000000000000i64;
	*(_DWORD*)(v136 + 8) = 3;
	a1[2] += 16i64;
	v137 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v137, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v138 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v138 + 120) >= *(_QWORD*)(v138 + 112))
		sub_14005E2C0((__int64)a1);
	v139 = a1[2];
	v140 = sub_140062650((__int64)a1, (unsigned __int64*)"Character", 9ui64);
	*(_DWORD*)(v139 + 8) = 4;
	*(_QWORD*)v139 = v140;
	a1[2] += 16i64;
	v141 = a1[2];
	*(_QWORD*)v141 = 0x4010000000000000i64;
	*(_DWORD*)(v141 + 8) = 3;
	a1[2] += 16i64;
	v142 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v142, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v143 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v143 + 120) >= *(_QWORD*)(v143 + 112))
		sub_14005E2C0((__int64)a1);
	v144 = a1[2];
	v145 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumInputDevice", 0x13ui64);
	*(_DWORD*)(v144 + 8) = 4;
	*(_QWORD*)v144 = v145;
	v146 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v146 + 120) >= *(_QWORD*)(v146 + 112))
		sub_14005E2C0((__int64)a1);
	v147 = a1[2];
	v148 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v147 + 8) = 5;
	*(_QWORD*)v147 = v148;
	v149 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v149 + 120) >= *(_QWORD*)(v149 + 112))
		sub_14005E2C0((__int64)a1);
	v150 = a1[2];
	v151 = sub_140062650((__int64)a1, (unsigned __int64*)"None", 4ui64);
	*(_DWORD*)(v150 + 8) = 4;
	*(_QWORD*)v150 = v151;
	a1[2] += 16i64;
	v152 = a1[2];
	*(_QWORD*)v152 = 0i64;
	*(_DWORD*)(v152 + 8) = 3;
	a1[2] += 16i64;
	v153 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v153, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v154 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v154 + 120) >= *(_QWORD*)(v154 + 112))
		sub_14005E2C0((__int64)a1);
	v155 = a1[2];
	v156 = sub_140062650((__int64)a1, (unsigned __int64*)"Keyboard", 8ui64);
	*(_DWORD*)(v155 + 8) = 4;
	*(_QWORD*)v155 = v156;
	a1[2] += 16i64;
	v157 = a1[2];
	*(_QWORD*)v157 = 0x3FF0000000000000i64;
	*(_DWORD*)(v157 + 8) = 3;
	a1[2] += 16i64;
	v158 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v158, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v159 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v159 + 120) >= *(_QWORD*)(v159 + 112))
		sub_14005E2C0((__int64)a1);
	v160 = a1[2];
	v161 = sub_140062650((__int64)a1, (unsigned __int64*)"Mouse", 5ui64);
	*(_DWORD*)(v160 + 8) = 4;
	*(_QWORD*)v160 = v161;
	a1[2] += 16i64;
	v162 = a1[2];
	*(_QWORD*)v162 = 0x4000000000000000i64;
	*(_DWORD*)(v162 + 8) = 3;
	a1[2] += 16i64;
	v163 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v163, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v164 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v164 + 120) >= *(_QWORD*)(v164 + 112))
		sub_14005E2C0((__int64)a1);
	v165 = a1[2];
	v166 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumInputEventType", 0x16ui64);
	*(_DWORD*)(v165 + 8) = 4;
	*(_QWORD*)v165 = v166;
	v167 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v167 + 120) >= *(_QWORD*)(v167 + 112))
		sub_14005E2C0((__int64)a1);
	v168 = a1[2];
	v169 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v168 + 8) = 5;
	*(_QWORD*)v168 = v169;
	v170 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v170 + 120) >= *(_QWORD*)(v170 + 112))
		sub_14005E2C0((__int64)a1);
	v171 = a1[2];
	v172 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F8864, 3ui64);
	*(_DWORD*)(v171 + 8) = 4;
	*(_QWORD*)v171 = v172;
	a1[2] += 16i64;
	v173 = a1[2];
	*(_QWORD*)v173 = 0i64;
	*(_DWORD*)(v173 + 8) = 3;
	a1[2] += 16i64;
	v174 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v174, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v175 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v175 + 120) >= *(_QWORD*)(v175 + 112))
		sub_14005E2C0((__int64)a1);
	v176 = a1[2];
	v177 = sub_140062650((__int64)a1, (unsigned __int64*)"Click", 5ui64);
	*(_DWORD*)(v176 + 8) = 4;
	*(_QWORD*)v176 = v177;
	a1[2] += 16i64;
	v178 = a1[2];
	*(_QWORD*)v178 = 0x3FF0000000000000i64;
	*(_DWORD*)(v178 + 8) = 3;
	a1[2] += 16i64;
	v179 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v179, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v180 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v180 + 120) >= *(_QWORD*)(v180 + 112))
		sub_14005E2C0((__int64)a1);
	v181 = a1[2];
	v182 = sub_140062650((__int64)a1, (unsigned __int64*)"Hold", 4ui64);
	*(_DWORD*)(v181 + 8) = 4;
	*(_QWORD*)v181 = v182;
	a1[2] += 16i64;
	v183 = a1[2];
	*(_QWORD*)v183 = 0x4000000000000000i64;
	*(_DWORD*)(v183 + 8) = 3;
	a1[2] += 16i64;
	v184 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v184, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v185 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v185 + 120) >= *(_QWORD*)(v185 + 112))
		sub_14005E2C0((__int64)a1);
	v186 = a1[2];
	v187 = sub_140062650((__int64)a1, (unsigned __int64*)"DoubleClick", 0xBui64);
	*(_DWORD*)(v186 + 8) = 4;
	*(_QWORD*)v186 = v187;
	a1[2] += 16i64;
	v188 = a1[2];
	*(_QWORD*)v188 = 0x4008000000000000i64;
	*(_DWORD*)(v188 + 8) = 3;
	a1[2] += 16i64;
	v189 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v189, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v190 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v190 + 120) >= *(_QWORD*)(v190 + 112))
		sub_14005E2C0((__int64)a1);
	v191 = a1[2];
	v192 = sub_140062650((__int64)a1, (unsigned __int64*)"DoubleHold", 0xAui64);
	*(_DWORD*)(v191 + 8) = 4;
	*(_QWORD*)v191 = v192;
	a1[2] += 16i64;
	v193 = a1[2];
	*(_QWORD*)v193 = 0x4010000000000000i64;
	*(_DWORD*)(v193 + 8) = 3;
	a1[2] += 16i64;
	v194 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v194, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v195 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v195 + 120) >= *(_QWORD*)(v195 + 112))
		sub_14005E2C0((__int64)a1);
	v196 = a1[2];
	v197 = sub_140062650((__int64)a1, (unsigned __int64*)"Rapid", 5ui64);
	*(_DWORD*)(v196 + 8) = 4;
	*(_QWORD*)v196 = v197;
	a1[2] += 16i64;
	v198 = a1[2];
	*(_QWORD*)v198 = 0x4014000000000000i64;
	*(_DWORD*)(v198 + 8) = 3;
	a1[2] += 16i64;
	v199 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v199, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v200 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v200 + 120) >= *(_QWORD*)(v200 + 112))
		sub_14005E2C0((__int64)a1);
	v201 = a1[2];
	v202 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumInputMouse", 0x12ui64);
	*(_DWORD*)(v201 + 8) = 4;
	*(_QWORD*)v201 = v202;
	v203 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v203 + 120) >= *(_QWORD*)(v203 + 112))
		sub_14005E2C0((__int64)a1);
	v204 = a1[2];
	v205 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v204 + 8) = 5;
	*(_QWORD*)v204 = v205;
	v206 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v206 + 120) >= *(_QWORD*)(v206 + 112))
		sub_14005E2C0((__int64)a1);
	v207 = a1[2];
	v208 = sub_140062650((__int64)a1, (unsigned __int64*)"Left", 4ui64);
	*(_DWORD*)(v207 + 8) = 4;
	*(_QWORD*)v207 = v208;
	a1[2] += 16i64;
	v209 = a1[2];
	*(_QWORD*)v209 = 0i64;
	*(_DWORD*)(v209 + 8) = 3;
	a1[2] += 16i64;
	v210 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v210, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v211 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v211 + 120) >= *(_QWORD*)(v211 + 112))
		sub_14005E2C0((__int64)a1);
	v212 = a1[2];
	v213 = sub_140062650((__int64)a1, (unsigned __int64*)"Right", 5ui64);
	*(_DWORD*)(v212 + 8) = 4;
	*(_QWORD*)v212 = v213;
	a1[2] += 16i64;
	v214 = a1[2];
	*(_QWORD*)v214 = 0x3FF0000000000000i64;
	*(_DWORD*)(v214 + 8) = 3;
	a1[2] += 16i64;
	v215 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v215, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v216 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v216 + 120) >= *(_QWORD*)(v216 + 112))
		sub_14005E2C0((__int64)a1);
	v217 = a1[2];
	v218 = sub_140062650((__int64)a1, (unsigned __int64*)"Middle", 6ui64);
	*(_DWORD*)(v217 + 8) = 4;
	*(_QWORD*)v217 = v218;
	a1[2] += 16i64;
	v219 = a1[2];
	*(_QWORD*)v219 = 0x4000000000000000i64;
	*(_DWORD*)(v219 + 8) = 3;
	a1[2] += 16i64;
	v220 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v220, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400EFF50((__int64)a1, v221, (unsigned __int64*)&unk_1409F890C, 3);
	sub_1400EFF50((__int64)a1, v222, (unsigned __int64*)&unk_1409F88E4, 4);
	sub_1400EFF50((__int64)a1, v223, (unsigned __int64*)"WheelUp", 5);
	sub_1400EFF50((__int64)a1, v224, (unsigned __int64*)"WheelDown", 6);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumInputModifier", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v225 = a1[2];
	v226 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v225 + 8) = 5;
	*(_QWORD*)v225 = v226;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v227, (unsigned __int64*)"Shift", 1);
	sub_1400EFF50((__int64)a1, v228, (unsigned __int64*)"Control", 2);
	sub_1400EFF50((__int64)a1, v229, (unsigned __int64*)&unk_1409F88A4, 4);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumInputModifierScancode", 0x1Dui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v230 = a1[2];
	v231 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v230 + 8) = 5;
	*(_QWORD*)v230 = v231;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v232, (unsigned __int64*)"LeftShift", 42);
	sub_1400EFF50((__int64)a1, v233, (unsigned __int64*)"LeftCtrl", 29);
	sub_1400EFF50((__int64)a1, v234, (unsigned __int64*)"LeftAlt", 56);
	sub_1400EFF50((__int64)a1, v235, (unsigned __int64*)"RightShift", 54);
	sub_1400EFF50((__int64)a1, v236, (unsigned __int64*)"RightCtrl", 285);
	sub_1400EFF50((__int64)a1, v237, (unsigned __int64*)"RightAlt", 312);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumInputSets", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v238 = a1[2];
	v239 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v238 + 8) = 5;
	*(_QWORD*)v238 = v239;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v240, (unsigned __int64*)"Default1", 0);
	sub_1400EFF50((__int64)a1, v241, (unsigned __int64*)"Default2", 1);
	sub_1400EFF50((__int64)a1, v242, (unsigned __int64*)"Default3", 2);
	sub_1400EFF50((__int64)a1, v243, (unsigned __int64*)"Account", 3);
	sub_1400EFF50((__int64)a1, v244, (unsigned __int64*)"Character", 4);
	sub_1400EFF50((__int64)a1, v245, (unsigned __int64*)"Count", 6);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumInputKeyLookupGroup", 0x1Bui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v246 = a1[2];
	v247 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v246 + 8) = 5;
	*(_QWORD*)v246 = v247;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v248, (unsigned __int64*)"Main", 0);
	sub_1400EFF50((__int64)a1, v249, (unsigned __int64*)"StunBreakoutGameplay", 1);
	sub_1400EFF50((__int64)a1, v250, (unsigned __int64*)"Count", 2);
	sub_1400EFF50((__int64)a1, v251, (unsigned __int64*)"First", 0);
	sub_1400EFF50((__int64)a1, v252, (unsigned __int64*)"Last", 1);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v253, (unsigned __int64*)"CodeEnumInputAction", (__int64)&off_140C31BB0, 0xD2u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumDamageType", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v254 = a1[2];
	v255 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v254 + 8) = 5;
	*(_QWORD*)v254 = v255;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v256, (unsigned __int64*)"Physical", 1);
	sub_1400EFF50((__int64)a1, v257, (unsigned __int64*)"Tech", 2);
	sub_1400EFF50((__int64)a1, v258, (unsigned __int64*)"Magic", 3);
	sub_1400EFF50((__int64)a1, v259, (unsigned __int64*)"Heal", 4);
	sub_1400EFF50((__int64)a1, v260, (unsigned __int64*)"HealShields", 5);
	sub_1400EFF50((__int64)a1, v261, (unsigned __int64*)"Fall", 6);
	sub_1400EFF50((__int64)a1, v262, (unsigned __int64*)"Suffocate", 7);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumMissType", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v263 = a1[2];
	v264 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v263 + 8) = 5;
	*(_QWORD*)v263 = v264;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v265, (unsigned __int64*)"Dodge", 0);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCombatResult", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v266 = a1[2];
	v267 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v266 + 8) = 5;
	*(_QWORD*)v266 = v267;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v268, (unsigned __int64*)"Avoid", 0);
	sub_1400EFF50((__int64)a1, v269, (unsigned __int64*)"Critical", 1);
	sub_1400EFF50((__int64)a1, v270, (unsigned __int64*)"Hit", 2);
	sub_1400EFF50((__int64)a1, v271, (unsigned __int64*)"NeedsTelegraphEvaluation", 3);
	sub_1400EFF50((__int64)a1, v272, (unsigned __int64*)"OutsideTelegraph", 4);
	sub_1400EFF50((__int64)a1, v273, (unsigned __int64*)"OutsideTelegraphInvalid", 5);
	sub_1400EFF50((__int64)a1, v274, (unsigned __int64*)"InsideTelegraph", 6);
	sub_1400EFF50((__int64)a1, v275, (unsigned __int64*)"NeedsHitResultCalc", 7);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v276, (unsigned __int64*)"CodeEnumVital", (__int64)&off_140C2D580, 0x1Du);
	sub_1400F0490((__int64)a1, v277, (unsigned __int64*)"CodeEnumStoryPanel", (__int64)&off_140C33E70, 8u);
	sub_1400F0490((__int64)a1, v278, (unsigned __int64*)"CodeEnumStoryPanelStyle", (__int64)&off_140C317D0, 8u);
	sub_1400F0490((__int64)a1, v279, (unsigned __int64*)"CodeEnumTutorial", (__int64)&off_140C30760, 0x67u);
	sub_1400F0490((__int64)a1, v280, (unsigned __int64*)"CodeEnumTutorialCategory", (__int64)&off_140C32FE0, 0x1Fu);
	sub_1400F0490((__int64)a1, v281, (unsigned __int64*)"CodeEnumTutorialAnchor", (__int64)&off_140C32B70, 0x47u);
	sub_1400F0490((__int64)a1, v282, (unsigned __int64*)"CodeEnumTutorialAnchorOrientation", (__int64)&off_140C2E8F0, 8u);
	sub_1400F0490((__int64)a1, v283, (unsigned __int64*)"CodeEnumWhoResult", (__int64)&off_140C31990, 3u);
	sub_1400F0490((__int64)a1, v284, (unsigned __int64*)"CodeEnumGameMode", (__int64)&off_140C33A20, 2u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumRace", 0xCui64);
	sub_140058900((__int64)a1, v285, 0);
	sub_1400EFF50((__int64)a1, v286, (unsigned __int64*)"Human", 1);
	sub_1400EFF50((__int64)a1, v287, (unsigned __int64*)"Granok", 3);
	sub_1400EFF50((__int64)a1, v288, (unsigned __int64*)"Aurin", 4);
	sub_1400EFF50((__int64)a1, v289, (unsigned __int64*)"Draken", 5);
	sub_1400EFF50((__int64)a1, v290, (unsigned __int64*)"Mechari", 12);
	sub_1400EFF50((__int64)a1, v291, (unsigned __int64*)"Mordesh", 16);
	sub_1400EFF50((__int64)a1, v292, (unsigned __int64*)"Chua", 13);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumClass", 0xDui64);
	sub_140058900((__int64)a1, v293, 0);
	sub_1400EFF50((__int64)a1, v294, (unsigned __int64*)"Warrior", 1);
	sub_1400EFF50((__int64)a1, v295, (unsigned __int64*)"Engineer", 2);
	sub_1400EFF50((__int64)a1, v296, (unsigned __int64*)"Esper", 3);
	sub_1400EFF50((__int64)a1, v297, (unsigned __int64*)"Medic", 4);
	sub_1400EFF50((__int64)a1, v298, (unsigned __int64*)"Stalker", 5);
	sub_1400EFF50((__int64)a1, v299, (unsigned __int64*)"Spellslinger", 7);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumRecallCommand", 0x15ui64);
	sub_140058900((__int64)a1, v300, 0);
	sub_1400EFF50((__int64)a1, v301, (unsigned __int64*)"BindPoint", 18);
	sub_1400EFF50((__int64)a1, v302, (unsigned __int64*)"House", 19);
	sub_1400EFF50((__int64)a1, v303, (unsigned __int64*)"Warplot", 21);
	sub_1400EFF50((__int64)a1, v304, (unsigned __int64*)"Illium", 28);
	sub_1400EFF50((__int64)a1, v305, (unsigned __int64*)"Thayd", 29);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumPetStance", 0x11ui64);
	sub_140058900((__int64)a1, v306, 0);
	v308 = 0;
	while (((1 << v308) & 1) == 0)
	{
		if ((unsigned int)++v308 >= 5)
		{
			v308 = 0;
			break;
		}
	}
	sub_1400EFF50((__int64)a1, v307, (unsigned __int64*)"Assist", v308);
	v310 = 0;
	while (((1 << v310) & 2) == 0)
	{
		if ((unsigned int)++v310 >= 5)
		{
			v310 = 0;
			break;
		}
	}
	sub_1400EFF50((__int64)a1, v309, (unsigned __int64*)"Stay", v310);
	v312 = 0;
	while (((1 << v312) & 4) == 0)
	{
		if ((unsigned int)++v312 >= 5)
		{
			v312 = 0;
			break;
		}
	}
	sub_1400EFF50((__int64)a1, v311, (unsigned __int64*)"Passive", v312);
	v314 = 0;
	while (((1 << v314) & 8) == 0)
	{
		if ((unsigned int)++v314 >= 5)
		{
			v314 = 0;
			break;
		}
	}
	sub_1400EFF50((__int64)a1, v313, (unsigned __int64*)"Defensive", v314);
	v316 = 0;
	while (((1 << v316) & 0x10) == 0)
	{
		if ((unsigned int)++v316 >= 5)
		{
			v316 = 0;
			break;
		}
	}
	sub_1400EFF50((__int64)a1, v315, (unsigned __int64*)"Aggressive", v316);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v317 = sub_140200220(0x285u);
	if (v317)
		v318 = *(_DWORD*)(v317 + 4);
	else
		v318 = 10000;
	v319 = a1[2];
	*(_DWORD*)(v319 + 8) = 3;
	*(double*)v319 = (double)v318;
	a1[2] += 16i64;
	v320 = a1[2];
	v321 = sub_140062650((__int64)a1, (unsigned __int64*)"ElderPointsPerGem", 0x11ui64);
	v322 = (unsigned int*)(a1[2] - 16i64);
	v524 = v321;
	v525 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v320 - 32), (int*)&v524, v322);
	a1[2] -= 16i64;
	v323 = sub_140200220(0x285u);
	if (v323)
		v324 = *(_DWORD*)(v323 + 8);
	else
		v324 = 15000;
	v325 = a1[2];
	*(_DWORD*)(v325 + 8) = 3;
	*(double*)v325 = (double)v324;
	a1[2] += 16i64;
	v326 = a1[2];
	v327 = sub_140062650((__int64)a1, (unsigned __int64*)"ElderPointsDailyMax", 0x13ui64);
	v328 = (unsigned int*)(a1[2] - 16i64);
	v524 = v327;
	v525 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v326 - 32), (int*)&v524, v328);
	a1[2] -= 16i64;
	v329 = sub_140200220(0x285u);
	if (v329)
		v330 = *(_DWORD*)(v329 + 12);
	else
		v330 = 100;
	v331 = a1[2];
	*(_DWORD*)(v331 + 8) = 3;
	*(double*)v331 = (double)v330;
	a1[2] += 16i64;
	v332 = a1[2];
	v333 = sub_140062650((__int64)a1, (unsigned __int64*)"ElderGemsMax", 0xCui64);
	v334 = (unsigned int*)(a1[2] - 16i64);
	v524 = v333;
	v525 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v332 - 32), (int*)&v524, v334);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumUserText", 0x10ui64);
	sub_140058900((__int64)a1, v335, 0);
	sub_1400EFF50((__int64)a1, v336, (unsigned __int64*)"CharacterName", 0);
	sub_1400EFF50((__int64)a1, v337, (unsigned __int64*)"ScientistScanbotName", 1);
	sub_1400EFF50((__int64)a1, v338, (unsigned __int64*)"GuildName", 2);
	sub_1400EFF50((__int64)a1, v339, (unsigned __int64*)"GuildRankName", 4);
	sub_1400EFF50((__int64)a1, v340, (unsigned __int64*)"GuildBankTabName", 5);
	sub_1400EFF50((__int64)a1, v341, (unsigned __int64*)"HousingResidenceName", 6);
	sub_1400EFF50((__int64)a1, v342, (unsigned __int64*)"Chat", 7);
	sub_1400EFF50((__int64)a1, v343, (unsigned __int64*)"MailSubject", 8);
	sub_1400EFF50((__int64)a1, v344, (unsigned __int64*)"MailBody", 9);
	sub_1400EFF50((__int64)a1, v345, (unsigned __int64*)"ChatCustomChannelName", 10);
	sub_1400EFF50((__int64)a1, v346, (unsigned __int64*)"ReadyCheck", 11);
	sub_1400EFF50((__int64)a1, v347, (unsigned __int64*)"FriendshipNote", 12);
	sub_1400EFF50((__int64)a1, v348, (unsigned __int64*)"ChatCustomChannelPassword", 13);
	sub_1400EFF50((__int64)a1, v349, (unsigned __int64*)"GuildMessageOfTheDay", 14);
	sub_1400EFF50((__int64)a1, v350, (unsigned __int64*)"GuildMemberNote", 15);
	sub_1400EFF50((__int64)a1, v351, (unsigned __int64*)"GuildRecruitDescription", 16);
	sub_1400EFF50((__int64)a1, v352, (unsigned __int64*)"GuildInfoMessage", 17);
	sub_1400EFF50((__int64)a1, v353, (unsigned __int64*)"FriendshipAccountName", 18);
	sub_1400EFF50((__int64)a1, v354, (unsigned __int64*)"FriendshipAccountPrivateNote", 19);
	sub_1400EFF50((__int64)a1, v355, (unsigned __int64*)"FriendshipAccountPublicNote", 20);
	sub_1400EFF50((__int64)a1, v356, (unsigned __int64*)"FriendshipAccountEmail", 21);
	sub_1400EFF50((__int64)a1, v357, (unsigned __int64*)"FriendshipInviteNote", 22);
	sub_1400EFF50((__int64)a1, v358, (unsigned __int64*)"PlayerTicketText", 24);
	sub_1400EFF50((__int64)a1, v359, (unsigned __int64*)"PlayerTicketSubject", 26);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumUserTextFilterClass", 0x1Bui64);
	sub_140058900((__int64)a1, v360, 0);
	sub_1400EFF50((__int64)a1, v361, (unsigned __int64*)"Strict", 0);
	sub_1400EFF50((__int64)a1, v362, (unsigned __int64*)"Standard", 1);
	sub_1400EFF50((__int64)a1, v363, (unsigned __int64*)"Low", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v364, (unsigned __int64*)"CodeEnumGenericError", (__int64)&off_140C2D820, 0xA2u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumExitEvent", 0x11ui64);
	sub_140058900((__int64)a1, v365, 0);
	sub_1400EFF50((__int64)a1, v366, (unsigned __int64*)"None", 0);
	sub_1400EFF50((__int64)a1, v367, (unsigned __int64*)"Camp", 1);
	sub_1400EFF50((__int64)a1, v368, (unsigned __int64*)"Quit", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumDuelState", 0x11ui64);
	sub_140058900((__int64)a1, v369, 0);
	sub_1400EFF50((__int64)a1, v370, (unsigned __int64*)"None", 0);
	sub_1400EFF50((__int64)a1, v371, (unsigned __int64*)"Pending", 2);
	sub_1400EFF50((__int64)a1, v372, (unsigned __int64*)"WaitingToAccept", 1);
	sub_1400EFF50((__int64)a1, v373, (unsigned __int64*)"Dueling", 3);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumZonePvpRules", 0x14ui64);
	sub_140058900((__int64)a1, v374, 0);
	sub_1400EFF50((__int64)a1, v375, (unsigned __int64*)"None", 0);
	sub_1400EFF50((__int64)a1, v376, (unsigned __int64*)"ExileStronghold", 1);
	sub_1400EFF50((__int64)a1, v377, (unsigned __int64*)"DominionStronghold", 2);
	sub_1400EFF50((__int64)a1, v378, (unsigned __int64*)"Sanctuary", 3);
	sub_1400EFF50((__int64)a1, v379, (unsigned __int64*)"Pvp", 4);
	sub_1400EFF50((__int64)a1, v380, (unsigned __int64*)"ExilePVPStronghold", 5);
	sub_1400EFF50((__int64)a1, v381, (unsigned __int64*)"DominionPVPStronghold", 6);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v382, (unsigned __int64*)"CodeEnumEquippedItems", (__int64)&off_140C36D50, 0x1Fu);
	v383 = a1[2];
	*(_QWORD*)v383 = 0x4024000000000000i64;
	*(_DWORD*)(v383 + 8) = 3;
	a1[2] += 16i64;
	v384 = a1[2];
	v385 = sub_140062650((__int64)a1, (unsigned __int64*)"knMaxBankBagSlots", 0x11ui64);
	v386 = (unsigned int*)(a1[2] - 16i64);
	v524 = v385;
	v525 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v384 - 32), (int*)&v524, v386);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumItemSlots", 0x11ui64);
	sub_140058900((__int64)a1, v387, 0);
	sub_1400EFF50((__int64)a1, v388, (unsigned __int64*)"Chest", 1);
	sub_1400EFF50((__int64)a1, v389, (unsigned __int64*)"Legs", 2);
	sub_1400EFF50((__int64)a1, v390, (unsigned __int64*)"Head", 3);
	sub_1400EFF50((__int64)a1, v391, (unsigned __int64*)"Shoulder", 4);
	sub_1400EFF50((__int64)a1, v392, (unsigned __int64*)"Feet", 5);
	sub_1400EFF50((__int64)a1, v393, (unsigned __int64*)"Hands", 6);
	sub_1400EFF50((__int64)a1, v394, (unsigned __int64*)"Tool", 7);
	sub_1400EFF50((__int64)a1, v395, (unsigned __int64*)"Weapon", 20);
	sub_1400EFF50((__int64)a1, v396, (unsigned __int64*)"Shields", 43);
	sub_1400EFF50((__int64)a1, v397, (unsigned __int64*)"Gadget", 46);
	sub_1400EFF50((__int64)a1, v398, (unsigned __int64*)"Attachment", 57);
	sub_1400EFF50((__int64)a1, v399, (unsigned __int64*)"System", 58);
	sub_1400EFF50((__int64)a1, v400, (unsigned __int64*)"Augment", 59);
	sub_1400EFF50((__int64)a1, v401, (unsigned __int64*)"Implant", 60);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumZoneCompletionType", 0x1Aui64);
	sub_140058900((__int64)a1, v402, 0);
	sub_1400EFF50((__int64)a1, v403, (unsigned __int64*)"EpisodeQuest", 0);
	sub_1400EFF50((__int64)a1, v404, (unsigned __int64*)"TaskQuest", 1);
	sub_1400EFF50((__int64)a1, v405, (unsigned __int64*)"Challenge", 2);
	sub_1400EFF50((__int64)a1, v406, (unsigned __int64*)"Datacube", 4);
	sub_1400EFF50((__int64)a1, v407, (unsigned __int64*)"Tale", 5);
	sub_1400EFF50((__int64)a1, v408, (unsigned __int64*)"Journal", 6);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CityDirectionType", 0x11ui64);
	sub_140058900((__int64)a1, v409, 0);
	sub_1400EFF50((__int64)a1, v410, (unsigned __int64*)"Mailbox", 1);
	sub_1400EFF50((__int64)a1, v411, (unsigned __int64*)"Bank", 2);
	sub_1400EFF50((__int64)a1, v412, (unsigned __int64*)"AuctionHouse", 3);
	sub_1400EFF50((__int64)a1, v413, (unsigned __int64*)"CommodityMarket", 4);
	sub_1400EFF50((__int64)a1, v414, (unsigned __int64*)"AbilityVendor", 5);
	sub_1400EFF50((__int64)a1, v415, (unsigned __int64*)"Tradeskill", 6);
	sub_1400EFF50((__int64)a1, v416, (unsigned __int64*)"General", 7);
	sub_1400EFF50((__int64)a1, v417, (unsigned __int64*)"HousingNpc", 8);
	sub_1400EFF50((__int64)a1, v418, (unsigned __int64*)"Transport", 9);
	sub_1400EFF50((__int64)a1, v419, (unsigned __int64*)"Fortune", 10);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v420, (unsigned __int64*)"SupportStuckAction", (__int64)&off_140C328D0, 3u);
	sub_1400F0490((__int64)a1, v421, (unsigned __int64*)"LevelUpUnlock", (__int64)&off_140C2E9C0, 0x57u);
	sub_1400F0490((__int64)a1, v422, (unsigned __int64*)"LevelUpUnlockSystem", (__int64)&off_140C38330, 2u);
	sub_1400F0490((__int64)a1, v423, (unsigned __int64*)"LevelUpUnlockType", (__int64)&off_140C33AB0, 0x19u);
	sub_1400F0490((__int64)a1, v424, (unsigned __int64*)"DisabledGameplaySystem", (__int64)&off_140C30700, 6u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumConfirmButtonType", 0x19ui64);
	sub_140058900((__int64)a1, v425, 0);
	sub_1400EFF50((__int64)a1, v426, (unsigned __int64*)"SendMail", 1);
	sub_1400EFF50((__int64)a1, v427, (unsigned __int64*)"CommitTrade", 2);
	sub_1400EFF50((__int64)a1, v428, (unsigned __int64*)"DeleteItem", 3);
	sub_1400EFF50((__int64)a1, v429, (unsigned __int64*)"SalvageItem", 4);
	sub_1400EFF50((__int64)a1, v430, (unsigned __int64*)"EldanForge", 7);
	sub_1400EFF50((__int64)a1, v431, (unsigned __int64*)"EquipItem", 5);
	sub_1400EFF50((__int64)a1, v432, (unsigned __int64*)"LootItem", 6);
	sub_1400EFF50((__int64)a1, v433, (unsigned __int64*)"CraftingAbandon", 10);
	sub_1400EFF50((__int64)a1, v434, (unsigned __int64*)"MarketplaceAuctionSellSubmit", 11);
	sub_1400EFF50((__int64)a1, v435, (unsigned __int64*)"MarketplaceAuctionBuySubmit", 12);
	sub_1400EFF50((__int64)a1, v436, (unsigned __int64*)"MarketplaceCommoditiesSubmit", 13);
	sub_1400EFF50((__int64)a1, v437, (unsigned __int64*)"AccountClaimItem", 14);
	sub_1400EFF50((__int64)a1, v438, (unsigned __int64*)"AccountTakeItem", 15);
	sub_1400EFF50((__int64)a1, v439, (unsigned __int64*)"AccountGiftItem", 16);
	sub_1400EFF50((__int64)a1, v440, (unsigned __int64*)"AccountGiftItemReturn", 17);
	sub_1400EFF50((__int64)a1, v441, (unsigned __int64*)"CREDDExchangeSubmit", 18);
	sub_1400EFF50((__int64)a1, v442, (unsigned __int64*)"AccountCreddRedeem", 19);
	sub_1400EFF50((__int64)a1, v443, (unsigned __int64*)"CopyToClipboard", 20);
	sub_1400EFF50((__int64)a1, v444, (unsigned __int64*)"MatchingGameRespondToPending", 21);
	sub_1400EFF50((__int64)a1, v445, (unsigned __int64*)"ReportPlayer", 23);
	sub_1400EFF50((__int64)a1, v446, (unsigned __int64*)"GenericMapNodeChoose", 22);
	sub_1400EFF50((__int64)a1, v447, (unsigned __int64*)"SubmitSupportTicket", 24);
	sub_1400EFF50((__int64)a1, v448, (unsigned __int64*)"RuneSlotReroll", 25);
	sub_1400EFF50((__int64)a1, v449, (unsigned __int64*)"RuneSlotClear", 27);
	sub_1400EFF50((__int64)a1, v450, (unsigned __int64*)"RuneSlotAdd", 26);
	sub_1400EFF50((__int64)a1, v451, (unsigned __int64*)"UnlockCostumeItem", 28);
	sub_1400EFF50((__int64)a1, v452, (unsigned __int64*)"ForgetCostumeItem", 29);
	sub_1400EFF50((__int64)a1, v453, (unsigned __int64*)"SaveCostumeChanges", 30);
	sub_1400EFF50((__int64)a1, v454, (unsigned __int64*)"CommitCustomizationChanges", 31);
	sub_1400EFF50((__int64)a1, v455, (unsigned __int64*)"WakeHereService", 34);
	sub_1400EFF50((__int64)a1, v456, (unsigned __int64*)"CastSpellService", 33);
	sub_1400EFF50((__int64)a1, v457, (unsigned __int64*)"RapidTransport", 32);
	sub_1400EFF50((__int64)a1, v458, (unsigned __int64*)"SaveKeyBinding", 35);
	sub_1400EFF50((__int64)a1, v459, (unsigned __int64*)"UnlockPath", 36);
	sub_1400EFF50((__int64)a1, v460, (unsigned __int64*)"ChangePath", 37);
	sub_1400EFF50((__int64)a1, v461, (unsigned __int64*)"DecorColorShift", 38);
	sub_1400EFF50((__int64)a1, v462, (unsigned __int64*)"PurchaseDecorColorShift", 39);
	sub_1400EFF50((__int64)a1, v463, (unsigned __int64*)"ResourceConversion", 40);
	sub_1400EFF50((__int64)a1, v464, (unsigned __int64*)"SavePrimalMatrix", 41);
	sub_1400EFF50((__int64)a1, v465, (unsigned __int64*)"PurchaseCommunity", 42);
	sub_1400EFF50((__int64)a1, v466, (unsigned __int64*)"RenameCommunity", 43);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"GuildHolomark", 0xDui64);
	sub_140058900((__int64)a1, v467, 0);
	sub_1400EFF50((__int64)a1, v468, (unsigned __int64*)"Left", 0);
	sub_1400EFF50((__int64)a1, v469, (unsigned __int64*)"Right", 1);
	sub_1400EFF50((__int64)a1, v470, (unsigned __int64*)"Back", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TelegraphColorSet", 0x11ui64);
	sub_140058900((__int64)a1, v471, 0);
	sub_1400EFF50((__int64)a1, v472, (unsigned __int64*)"Default", 0);
	sub_1400EFF50((__int64)a1, v473, (unsigned __int64*)"Deuteranopia", 1);
	sub_1400EFF50((__int64)a1, v474, (unsigned __int64*)"Protanopia", 2);
	sub_1400EFF50((__int64)a1, v475, (unsigned __int64*)"Tritanopia", 3);
	sub_1400EFF50((__int64)a1, v476, (unsigned __int64*)"Custom1", 4);
	sub_1400EFF50((__int64)a1, v477, (unsigned __int64*)"Custom2", 5);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490(
		(__int64)a1,
		v478,
		(unsigned __int64*)"CharacterRecustomizationResultCharacterRecustomizationResult",
		(__int64)&off_140C2E970,
		5u);
	sub_1400F0490((__int64)a1, v479, (unsigned __int64*)"DuelStateDuelState", (__int64)&off_140C2E8B0, 4u);
	sub_1400F0490((__int64)a1, v480, (unsigned __int64*)"SharedChallengePreference", (__int64)&off_140C38260, 3u);
	sub_140058710((__int64)a1, (unsigned __int64*)"MapZone", 7ui64);
	sub_140058900((__int64)a1, v481, 0);
	while (qword_140C658F8)
	{
		v482 = *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64));
		if (v2 >= v482 / 0x30)
			break;
		if (qword_140C658F8)
		{
			v483 = sub_1404483B0(v482, v2);
			v484 = v483;
			if (v483)
			{
				v485 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v483 + 24i64))(v483);
				v486 = v485;
				if (v485)
				{
					if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v485 + 48i64))(v485) & 4) != 0
						&& ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v486 + 48i64))(v486) & 1) == 0)
					{
						v487 = (**(__int64(__fastcall***)(__int64))v484)(v484);
						v488 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v484 + 16i64))(v484);
						sub_1400F06F0((__int64)a1, v489, v488, v487);
					}
				}
			}
		}
		++v2;
	}
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v490, (unsigned __int64*)"CodeEnumGameCommandType", (__int64)&off_140C2EF80, 0x20u);
	sub_1400F0490((__int64)a1, v491, (unsigned __int64*)"CodeEnumHealthyGamingStatus", (__int64)&off_140C37860, 3u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumHintType", 0x10ui64);
	sub_140058900((__int64)a1, v492, 0);
	sub_1400EFF50((__int64)a1, v493, (unsigned __int64*)"None", 10);
	sub_1400EFF50((__int64)a1, v494, (unsigned __int64*)"PathMission", 0);
	sub_1400EFF50((__int64)a1, v495, (unsigned __int64*)"Quest", 1);
	sub_1400EFF50((__int64)a1, v496, (unsigned __int64*)"PublicEvent", 3);
	sub_1400EFF50((__int64)a1, v497, (unsigned __int64*)"PublicEventObjective", 4);
	sub_1400EFF50((__int64)a1, v498, (unsigned __int64*)"Unit", 6);
	sub_1400EFF50((__int64)a1, v499, (unsigned __int64*)"Challenge", 7);
	sub_1400EFF50((__int64)a1, v500, (unsigned __int64*)"NavPoint", 8);
	sub_1400EFF50((__int64)a1, v501, (unsigned __int64*)"ServerPoint", 9);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumMoveSpeed", 0x11ui64);
	sub_140058900((__int64)a1, v502, 0);
	sub_1400EFF50((__int64)a1, v503, (unsigned __int64*)"Walk", 0);
	sub_1400EFF50((__int64)a1, v504, (unsigned __int64*)"Run", 1);
	sub_1400EFF50((__int64)a1, v505, (unsigned __int64*)"Sprint", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490(
		(__int64)a1,
		v506,
		(unsigned __int64*)"CodeEnumAccountPrivilegeRestriction",
		(__int64)&off_140C33C40,
		4u);
	sub_1400F0490((__int64)a1, v507, (unsigned __int64*)"CodeEnumSetNavPointFailed", (__int64)&off_140C340E0, 2u);
	sub_1400F0490((__int64)a1, v508, (unsigned __int64*)"ChannelUpdateLootType", (__int64)&off_140C35010, 3u);
	sub_1400F0490((__int64)a1, v509, (unsigned __int64*)"ChannelUpdateCraftingType", (__int64)&off_140C331F0, 1u);
	sub_1400F0490((__int64)a1, v510, (unsigned __int64*)"ChannelUpdateProgressType", (__int64)&off_140C318F0, 7u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumHoloMark", 0x10ui64);
	sub_140058900((__int64)a1, v511, 0);
	sub_1400EFF50((__int64)a1, v512, (unsigned __int64*)"Left", 0);
	sub_1400EFF50((__int64)a1, v513, (unsigned __int64*)"Right", 1);
	sub_1400EFF50((__int64)a1, v514, (unsigned __int64*)"Back", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v515, (unsigned __int64*)"CodeEnumGenericUnlockType", (__int64)&off_140C2D560, 2u);
	sub_1400F0490((__int64)a1, v516, (unsigned __int64*)"CodeEnumRewardRotationContentType", (__int64)&off_140C31B40, 7u);
	sub_1400F0490((__int64)a1, v517, (unsigned __int64*)"CodeEnumRewardRotationRewardType", (__int64)&off_140C319E0, 4u);
	sub_1400F0490((__int64)a1, v518, (unsigned __int64*)"CodeEnumRewardRotationItemType", (__int64)&off_140C33820, 4u);
	sub_1400F0490((__int64)a1, v519, (unsigned __int64*)"CodeEnumRewardRotationRewardType", (__int64)&off_140C319E0, 4u);
	sub_1400F0490((__int64)a1, v520, (unsigned __int64*)"WorldRemovalReason", (__int64)&off_140C34100, 4u);
	v521 = sub_140062650((__int64)a1, (unsigned __int64*)"GameLib", 7ui64);
	v522 = (unsigned int*)(a1[2] - 16i64);
	v524 = v521;
	v525 = 4;
	sub_14005EA50((__int64)a1, a1 + 15, (int*)&v524, v522);
	a1[2] -= 16i64;
	return 1i64;
}
// 14070AA07: variable 'v221' is possibly undefined
// 14070AA1C: variable 'v222' is possibly undefined
// 14070AA31: variable 'v223' is possibly undefined
// 14070AA46: variable 'v224' is possibly undefined
// 14070AAC3: variable 'v227' is possibly undefined
// 14070AAD8: variable 'v228' is possibly undefined
// 14070AAED: variable 'v229' is possibly undefined
// 14070AB6A: variable 'v232' is possibly undefined
// 14070AB7F: variable 'v233' is possibly undefined
// 14070AB94: variable 'v234' is possibly undefined
// 14070ABA9: variable 'v235' is possibly undefined
// 14070ABBE: variable 'v236' is possibly undefined
// 14070ABD3: variable 'v237' is possibly undefined
// 14070AC4D: variable 'v240' is possibly undefined
// 14070AC62: variable 'v241' is possibly undefined
// 14070AC77: variable 'v242' is possibly undefined
// 14070AC8C: variable 'v243' is possibly undefined
// 14070ACA1: variable 'v244' is possibly undefined
// 14070ACB6: variable 'v245' is possibly undefined
// 14070AD30: variable 'v248' is possibly undefined
// 14070AD45: variable 'v249' is possibly undefined
// 14070AD5A: variable 'v250' is possibly undefined
// 14070AD6C: variable 'v251' is possibly undefined
// 14070AD81: variable 'v252' is possibly undefined
// 14070ADBC: variable 'v253' is possibly undefined
// 14070AE1C: variable 'v256' is possibly undefined
// 14070AE31: variable 'v257' is possibly undefined
// 14070AE46: variable 'v258' is possibly undefined
// 14070AE5B: variable 'v259' is possibly undefined
// 14070AE70: variable 'v260' is possibly undefined
// 14070AE85: variable 'v261' is possibly undefined
// 14070AE9A: variable 'v262' is possibly undefined
// 14070AF14: variable 'v265' is possibly undefined
// 14070AF8E: variable 'v268' is possibly undefined
// 14070AFA3: variable 'v269' is possibly undefined
// 14070AFB8: variable 'v270' is possibly undefined
// 14070AFCD: variable 'v271' is possibly undefined
// 14070AFE2: variable 'v272' is possibly undefined
// 14070AFF7: variable 'v273' is possibly undefined
// 14070B00C: variable 'v274' is possibly undefined
// 14070B021: variable 'v275' is possibly undefined
// 14070B05C: variable 'v276' is possibly undefined
// 14070B07A: variable 'v277' is possibly undefined
// 14070B098: variable 'v278' is possibly undefined
// 14070B0B6: variable 'v279' is possibly undefined
// 14070B0D4: variable 'v280' is possibly undefined
// 14070B0F2: variable 'v281' is possibly undefined
// 14070B110: variable 'v282' is possibly undefined
// 14070B12E: variable 'v283' is possibly undefined
// 14070B14C: variable 'v284' is possibly undefined
// 14070B16C: variable 'v285' is possibly undefined
// 14070B181: variable 'v286' is possibly undefined
// 14070B196: variable 'v287' is possibly undefined
// 14070B1AB: variable 'v288' is possibly undefined
// 14070B1C0: variable 'v289' is possibly undefined
// 14070B1D5: variable 'v290' is possibly undefined
// 14070B1EA: variable 'v291' is possibly undefined
// 14070B1FF: variable 'v292' is possibly undefined
// 14070B23C: variable 'v293' is possibly undefined
// 14070B251: variable 'v294' is possibly undefined
// 14070B266: variable 'v295' is possibly undefined
// 14070B27B: variable 'v296' is possibly undefined
// 14070B290: variable 'v297' is possibly undefined
// 14070B2A5: variable 'v298' is possibly undefined
// 14070B2BA: variable 'v299' is possibly undefined
// 14070B2F7: variable 'v300' is possibly undefined
// 14070B30C: variable 'v301' is possibly undefined
// 14070B321: variable 'v302' is possibly undefined
// 14070B336: variable 'v303' is possibly undefined
// 14070B34B: variable 'v304' is possibly undefined
// 14070B360: variable 'v305' is possibly undefined
// 14070B39D: variable 'v306' is possibly undefined
// 14070B3C7: variable 'v307' is possibly undefined
// 14070B3F2: variable 'v309' is possibly undefined
// 14070B422: variable 'v311' is possibly undefined
// 14070B452: variable 'v313' is possibly undefined
// 14070B482: variable 'v315' is possibly undefined
// 14070B621: variable 'v335' is possibly undefined
// 14070B633: variable 'v336' is possibly undefined
// 14070B648: variable 'v337' is possibly undefined
// 14070B65D: variable 'v338' is possibly undefined
// 14070B672: variable 'v339' is possibly undefined
// 14070B687: variable 'v340' is possibly undefined
// 14070B69C: variable 'v341' is possibly undefined
// 14070B6B1: variable 'v342' is possibly undefined
// 14070B6C6: variable 'v343' is possibly undefined
// 14070B6DB: variable 'v344' is possibly undefined
// 14070B6F0: variable 'v345' is possibly undefined
// 14070B705: variable 'v346' is possibly undefined
// 14070B71A: variable 'v347' is possibly undefined
// 14070B72F: variable 'v348' is possibly undefined
// 14070B744: variable 'v349' is possibly undefined
// 14070B759: variable 'v350' is possibly undefined
// 14070B76E: variable 'v351' is possibly undefined
// 14070B783: variable 'v352' is possibly undefined
// 14070B798: variable 'v353' is possibly undefined
// 14070B7AD: variable 'v354' is possibly undefined
// 14070B7C2: variable 'v355' is possibly undefined
// 14070B7D7: variable 'v356' is possibly undefined
// 14070B7EC: variable 'v357' is possibly undefined
// 14070B801: variable 'v358' is possibly undefined
// 14070B816: variable 'v359' is possibly undefined
// 14070B853: variable 'v360' is possibly undefined
// 14070B865: variable 'v361' is possibly undefined
// 14070B87A: variable 'v362' is possibly undefined
// 14070B88F: variable 'v363' is possibly undefined
// 14070B8CA: variable 'v364' is possibly undefined
// 14070B8EA: variable 'v365' is possibly undefined
// 14070B8FC: variable 'v366' is possibly undefined
// 14070B911: variable 'v367' is possibly undefined
// 14070B926: variable 'v368' is possibly undefined
// 14070B963: variable 'v369' is possibly undefined
// 14070B975: variable 'v370' is possibly undefined
// 14070B98A: variable 'v371' is possibly undefined
// 14070B99F: variable 'v372' is possibly undefined
// 14070B9B4: variable 'v373' is possibly undefined
// 14070B9F1: variable 'v374' is possibly undefined
// 14070BA03: variable 'v375' is possibly undefined
// 14070BA18: variable 'v376' is possibly undefined
// 14070BA2D: variable 'v377' is possibly undefined
// 14070BA42: variable 'v378' is possibly undefined
// 14070BA57: variable 'v379' is possibly undefined
// 14070BA6C: variable 'v380' is possibly undefined
// 14070BA81: variable 'v381' is possibly undefined
// 14070BABC: variable 'v382' is possibly undefined
// 14070BB3A: variable 'v387' is possibly undefined
// 14070BB4F: variable 'v388' is possibly undefined
// 14070BB64: variable 'v389' is possibly undefined
// 14070BB79: variable 'v390' is possibly undefined
// 14070BB8E: variable 'v391' is possibly undefined
// 14070BBA3: variable 'v392' is possibly undefined
// 14070BBB8: variable 'v393' is possibly undefined
// 14070BBCD: variable 'v394' is possibly undefined
// 14070BBE2: variable 'v395' is possibly undefined
// 14070BBF7: variable 'v396' is possibly undefined
// 14070BC0C: variable 'v397' is possibly undefined
// 14070BC21: variable 'v398' is possibly undefined
// 14070BC36: variable 'v399' is possibly undefined
// 14070BC4B: variable 'v400' is possibly undefined
// 14070BC60: variable 'v401' is possibly undefined
// 14070BC9D: variable 'v402' is possibly undefined
// 14070BCAF: variable 'v403' is possibly undefined
// 14070BCC4: variable 'v404' is possibly undefined
// 14070BCD9: variable 'v405' is possibly undefined
// 14070BCEE: variable 'v406' is possibly undefined
// 14070BD03: variable 'v407' is possibly undefined
// 14070BD18: variable 'v408' is possibly undefined
// 14070BD55: variable 'v409' is possibly undefined
// 14070BD6A: variable 'v410' is possibly undefined
// 14070BD7F: variable 'v411' is possibly undefined
// 14070BD94: variable 'v412' is possibly undefined
// 14070BDA9: variable 'v413' is possibly undefined
// 14070BDBE: variable 'v414' is possibly undefined
// 14070BDD3: variable 'v415' is possibly undefined
// 14070BDE8: variable 'v416' is possibly undefined
// 14070BDFD: variable 'v417' is possibly undefined
// 14070BE12: variable 'v418' is possibly undefined
// 14070BE27: variable 'v419' is possibly undefined
// 14070BE62: variable 'v420' is possibly undefined
// 14070BE80: variable 'v421' is possibly undefined
// 14070BE9E: variable 'v422' is possibly undefined
// 14070BEBC: variable 'v423' is possibly undefined
// 14070BEDA: variable 'v424' is possibly undefined
// 14070BEFA: variable 'v425' is possibly undefined
// 14070BF0F: variable 'v426' is possibly undefined
// 14070BF24: variable 'v427' is possibly undefined
// 14070BF39: variable 'v428' is possibly undefined
// 14070BF4E: variable 'v429' is possibly undefined
// 14070BF63: variable 'v430' is possibly undefined
// 14070BF78: variable 'v431' is possibly undefined
// 14070BF8D: variable 'v432' is possibly undefined
// 14070BFA2: variable 'v433' is possibly undefined
// 14070BFB7: variable 'v434' is possibly undefined
// 14070BFCC: variable 'v435' is possibly undefined
// 14070BFE1: variable 'v436' is possibly undefined
// 14070BFF6: variable 'v437' is possibly undefined
// 14070C00B: variable 'v438' is possibly undefined
// 14070C020: variable 'v439' is possibly undefined
// 14070C035: variable 'v440' is possibly undefined
// 14070C04A: variable 'v441' is possibly undefined
// 14070C05F: variable 'v442' is possibly undefined
// 14070C074: variable 'v443' is possibly undefined
// 14070C089: variable 'v444' is possibly undefined
// 14070C09E: variable 'v445' is possibly undefined
// 14070C0B3: variable 'v446' is possibly undefined
// 14070C0C8: variable 'v447' is possibly undefined
// 14070C0DD: variable 'v448' is possibly undefined
// 14070C0F2: variable 'v449' is possibly undefined
// 14070C107: variable 'v450' is possibly undefined
// 14070C11C: variable 'v451' is possibly undefined
// 14070C131: variable 'v452' is possibly undefined
// 14070C146: variable 'v453' is possibly undefined
// 14070C15B: variable 'v454' is possibly undefined
// 14070C170: variable 'v455' is possibly undefined
// 14070C185: variable 'v456' is possibly undefined
// 14070C19A: variable 'v457' is possibly undefined
// 14070C1AF: variable 'v458' is possibly undefined
// 14070C1C4: variable 'v459' is possibly undefined
// 14070C1D9: variable 'v460' is possibly undefined
// 14070C1EE: variable 'v461' is possibly undefined
// 14070C203: variable 'v462' is possibly undefined
// 14070C218: variable 'v463' is possibly undefined
// 14070C22D: variable 'v464' is possibly undefined
// 14070C242: variable 'v465' is possibly undefined
// 14070C257: variable 'v466' is possibly undefined
// 14070C294: variable 'v467' is possibly undefined
// 14070C2A6: variable 'v468' is possibly undefined
// 14070C2BB: variable 'v469' is possibly undefined
// 14070C2D0: variable 'v470' is possibly undefined
// 14070C30D: variable 'v471' is possibly undefined
// 14070C31F: variable 'v472' is possibly undefined
// 14070C334: variable 'v473' is possibly undefined
// 14070C349: variable 'v474' is possibly undefined
// 14070C35E: variable 'v475' is possibly undefined
// 14070C373: variable 'v476' is possibly undefined
// 14070C388: variable 'v477' is possibly undefined
// 14070C3C3: variable 'v478' is possibly undefined
// 14070C3E1: variable 'v479' is possibly undefined
// 14070C3FF: variable 'v480' is possibly undefined
// 14070C41F: variable 'v481' is possibly undefined
// 14070C4BC: variable 'v489' is possibly undefined
// 14070C4FF: variable 'v490' is possibly undefined
// 14070C51D: variable 'v491' is possibly undefined
// 14070C53D: variable 'v492' is possibly undefined
// 14070C552: variable 'v493' is possibly undefined
// 14070C564: variable 'v494' is possibly undefined
// 14070C579: variable 'v495' is possibly undefined
// 14070C58E: variable 'v496' is possibly undefined
// 14070C5A3: variable 'v497' is possibly undefined
// 14070C5B8: variable 'v498' is possibly undefined
// 14070C5CD: variable 'v499' is possibly undefined
// 14070C5E2: variable 'v500' is possibly undefined
// 14070C5F7: variable 'v501' is possibly undefined
// 14070C634: variable 'v502' is possibly undefined
// 14070C646: variable 'v503' is possibly undefined
// 14070C65B: variable 'v504' is possibly undefined
// 14070C670: variable 'v505' is possibly undefined
// 14070C6AB: variable 'v506' is possibly undefined
// 14070C6C9: variable 'v507' is possibly undefined
// 14070C6E7: variable 'v508' is possibly undefined
// 14070C705: variable 'v509' is possibly undefined
// 14070C723: variable 'v510' is possibly undefined
// 14070C743: variable 'v511' is possibly undefined
// 14070C755: variable 'v512' is possibly undefined
// 14070C76A: variable 'v513' is possibly undefined
// 14070C77F: variable 'v514' is possibly undefined
// 14070C7BA: variable 'v515' is possibly undefined
// 14070C7D8: variable 'v516' is possibly undefined
// 14070C7F6: variable 'v517' is possibly undefined
// 14070C814: variable 'v518' is possibly undefined
// 14070C832: variable 'v519' is possibly undefined
// 14070C850: variable 'v520' is possibly undefined
// 140A6B2B0: using guessed type wchar_t *off_140A6B2B0[2];
// 140B726D0: using guessed type char *off_140B726D0;
// 140C2D560: using guessed type wchar_t *off_140C2D560;
// 140C2D580: using guessed type wchar_t *off_140C2D580;
// 140C2D820: using guessed type wchar_t *off_140C2D820;
// 140C2E8B0: using guessed type wchar_t *off_140C2E8B0;
// 140C2E8F0: using guessed type wchar_t *off_140C2E8F0;
// 140C2E970: using guessed type wchar_t *off_140C2E970;
// 140C2E9C0: using guessed type wchar_t *off_140C2E9C0;
// 140C2EF80: using guessed type wchar_t *off_140C2EF80;
// 140C30700: using guessed type wchar_t *off_140C30700;
// 140C30760: using guessed type wchar_t *off_140C30760;
// 140C317D0: using guessed type wchar_t *off_140C317D0;
// 140C318F0: using guessed type wchar_t *off_140C318F0;
// 140C31990: using guessed type wchar_t *off_140C31990;
// 140C319E0: using guessed type wchar_t *off_140C319E0;
// 140C31B40: using guessed type wchar_t *off_140C31B40;
// 140C31BB0: using guessed type wchar_t *off_140C31BB0;
// 140C328D0: using guessed type wchar_t *off_140C328D0;
// 140C32B70: using guessed type wchar_t *off_140C32B70;
// 140C32FE0: using guessed type wchar_t *off_140C32FE0;
// 140C331F0: using guessed type wchar_t *off_140C331F0;
// 140C33820: using guessed type wchar_t *off_140C33820;
// 140C33A20: using guessed type wchar_t *off_140C33A20;
// 140C33AB0: using guessed type wchar_t *off_140C33AB0;
// 140C33C40: using guessed type wchar_t *off_140C33C40;
// 140C33E70: using guessed type wchar_t *off_140C33E70;
// 140C340E0: using guessed type wchar_t *off_140C340E0;
// 140C34100: using guessed type wchar_t *off_140C34100;
// 140C35010: using guessed type wchar_t *off_140C35010;
// 140C36D50: using guessed type wchar_t *off_140C36D50;
// 140C37860: using guessed type wchar_t *off_140C37860;
// 140C38260: using guessed type wchar_t *off_140C38260;
// 140C38330: using guessed type wchar_t *off_140C38330;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64278: using guessed type __int64 qword_140C64278;
// 140C653EC: using guessed type int dword_140C653EC;
// 140C658F8: using guessed type __int64 qword_140C658F8;

