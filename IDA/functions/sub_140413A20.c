#include "../winhttp.h"

//----- (0000000140413A20) ----------------------------------------------------
__int64 __fastcall sub_140413A20(_QWORD* a1)
{
	char** v2; // rcx
	_QWORD* v3; // rdx
	char** v4; // r8
	__int64 v5; // r9
	char* v6; // rax
	char* v7; // rdx
	__int64 v8; // r8
	char* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int* v13; // r9
	unsigned __int64* v14; // rbx
	__int64 v15; // rax
	__int128* v16; // rsi
	__int64 v17; // r14
	__int64 v18; // rax
	__int64 v19; // r8
	_QWORD* v20; // rax
	__int64 v21; // rcx
	__int64* v22; // rax
	unsigned __int64 v23; // r8
	__int64* v24; // r14
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rbx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rbx
	__int64 v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rcx
	__int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // rax
	__int64* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rbx
	__int64 v49; // rax
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rax
	__int64* v56; // rax
	__int64 v57; // rcx
	__int64 v58; // rbx
	__int64 v59; // rax
	__int64 v60; // rax
	__int64* v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 v65; // rax
	__int64* v66; // rax
	__int64 v67; // rcx
	__int64 v68; // rbx
	__int64 v69; // rax
	__int64 v70; // rax
	__int64* v71; // rax
	__int64 v72; // rcx
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // rax
	__int64* v76; // rax
	__int64 v77; // rcx
	__int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rcx
	__int64 v83; // rbx
	__int64 v84; // rax
	__int64 v85; // rax
	__int64* v86; // rax
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
	__int64 v120; // rax
	__int64* v121; // rax
	__int64 v122; // rcx
	__int64 v123; // rbx
	__int64 v124; // rax
	__int64 v125; // rax
	__int64* v126; // rax
	__int64 v127; // rcx
	__int64 v128; // rbx
	__int64 v129; // rax
	__int64 v130; // rax
	__int64* v131; // rax
	__int64 v132; // rcx
	__int64 v133; // rbx
	__int64 v134; // rax
	__int64 v135; // rax
	__int64* v136; // rax
	__int64 v137; // rcx
	__int64 v138; // rbx
	__int64 v139; // rax
	__int64 v140; // rax
	__int64* v141; // rax
	__int64 v142; // rcx
	__int64 v143; // rbx
	__int64 v144; // rax
	__int64 v145; // rax
	__int64* v146; // rax
	__int64 v147; // rcx
	__int64 v148; // rbx
	__int64 v149; // rax
	__int64 v150; // rax
	__int64* v151; // rax
	__int64 v152; // rcx
	__int64 v153; // rbx
	__int64 v154; // rax
	__int64 v155; // rax
	__int64* v156; // rax
	__int64 v157; // rcx
	__int64 v158; // rbx
	__int64 v159; // rax
	__int64 v160; // rax
	__int64* v161; // rax
	__int64 v162; // rcx
	__int64 v163; // rbx
	__int64 v164; // rax
	__int64 v165; // rax
	__int64* v166; // rax
	__int64 v167; // rcx
	__int64 v168; // rbx
	__int64 v169; // rax
	__int64 v170; // rax
	__int64* v171; // rax
	__int64 v172; // rcx
	__int64 v173; // rbx
	__int64 v174; // rax
	__int64 v175; // rax
	__int64* v176; // rax
	__int64 v177; // rcx
	__int64 v178; // rbx
	__int64 v179; // rax
	__int64 v180; // rax
	__int64* v181; // rax
	__int64 v182; // rcx
	__int64 v183; // rbx
	__int64 v184; // rax
	__int64 v185; // rax
	__int64* v186; // rax
	__int64 v187; // rcx
	__int64 v188; // rbx
	__int64 v189; // rax
	__int64 v190; // rax
	__int64* v191; // rax
	__int64 v192; // rdx
	__int64 v193; // rdx
	__int64 v194; // rdx
	__int64 v195; // rdx
	__int64 v196; // rdx
	__int64 v197; // rdx
	__int64 v198; // rdx
	__int64 v199; // rdx
	__int64 v200; // rdx
	__int64 v201; // rdx
	__int64 v202; // rdx
	__int64 v203; // rdx
	__int64 v204; // rdx
	__int64 v205; // rdx
	__int64 v206; // rdx
	__int64 v207; // rdx
	__int64 v208; // rdx
	__int64 v209; // rdx
	__int64 v210; // rdx
	__int64 v211; // rdx
	__int64 v212; // rdx
	__int64 v213; // rdx
	__int64 v214; // rdx
	__int64 v215; // rdx
	__int64 v216; // rdx
	__int64 v217; // rdx
	__int64 v218; // rdx
	__int64 v219; // rdx
	__int64 v220; // rdx
	__int64 v221; // rdx
	__int64 v222; // rdx
	__int64 v223; // rdx
	__int64 v224; // rdx
	__int64 v225; // rdx
	__int64 v226; // rdx
	__int64 v227; // rdx
	__int64 v228; // rdx
	__int64 v229; // rdx
	__int64 v230; // rdx
	__int64 v231; // rdx
	__int64 v232; // rdx
	__int64 v233; // rdx
	__int64 v234; // rdx
	__int64 v235; // rdx
	__int64 v236; // rdx
	__int64 v237; // rdx
	__int64 v238; // rdx
	__int64 v239; // rdx
	__int64 v240; // rdx
	__int64 v241; // rdx
	__int64 v242; // rdx
	__int64 v243; // rdx
	__int64 v244; // rdx
	__int64 v245; // rdx
	__int64 v246; // rdx
	__int64 v247; // rdx
	__int64 v248; // rdx
	__int64 v249; // rdx
	__int64 v250; // rdx
	__int64 v251; // rdx
	__int64 v252; // rdx
	__int64 v253; // rdx
	__int64 v254; // rdx
	__int64 v255; // rdx
	__int64 v256; // rdx
	__int64 v257; // rdx
	__int64 v258; // rdx
	__int64 v259; // rdx
	__int64 v260; // rdx
	__int64 v261; // rdx
	__int64 v262; // rdx
	__int64 v263; // rdx
	__int64 v264; // rdx
	__int64 v265; // rdx
	__int64 v266; // rdx
	__int64 v267; // rdx
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
	__int64 v308; // rdx
	__int64 v309; // rbx
	__int64 v310; // rax
	__int64 v311; // rdx
	__int64 v312; // rdx
	__int64 v313; // rdx
	__int64 v314; // rdx
	__int64 v315; // rdx
	__int64 v316; // rdx
	__int64 v317; // rdx
	__int64 v318; // rbx
	__int64 v319; // rax
	__int64 v320; // rdx
	__int64 v321; // rdx
	__int64 v322; // rdx
	__int64 v323; // rdx
	__int64 v324; // rdx
	__int64 v325; // rdx
	__int64 v326; // rdx
	__int64 v327; // rbx
	__int64 v328; // rax
	__int64 v329; // rdx
	__int64 v330; // rdx
	__int64 v331; // rdx
	__int64 v332; // rdx
	__int64 v333; // rdx
	__int64 v334; // rdx
	__int64 v335; // rdx
	__int64 v336; // rdx
	__int64 v337; // rdx
	__int64 v338; // rdx
	__int64 v339; // rdx
	__int64 v340; // rdx
	__int64 v341; // rdx
	__int64 v343; // [rsp+30h] [rbp-D0h] BYREF
	int v344; // [rsp+38h] [rbp-C8h]
	__int128 v345[2]; // [rsp+40h] [rbp-C0h] BYREF
	char v346; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v347; // [rsp+500h] [rbp+400h]
	__int128 v348; // [rsp+510h] [rbp+410h]
	__int128 v349; // [rsp+520h] [rbp+420h]
	__int128 v350; // [rsp+530h] [rbp+430h]
	__int128 v351; // [rsp+540h] [rbp+440h]
	__int128 v352; // [rsp+550h] [rbp+450h]
	_QWORD v353[148]; // [rsp+560h] [rbp+460h] BYREF
	__int128 v354; // [rsp+A00h] [rbp+900h]
	__int128 v355; // [rsp+A10h] [rbp+910h]
	__int128 v356; // [rsp+A20h] [rbp+920h]
	__int128 v357; // [rsp+A30h] [rbp+930h]
	__int128 v358; // [rsp+A40h] [rbp+940h]
	__int128 v359; // [rsp+A50h] [rbp+950h]
	__int128 v360; // [rsp+A60h] [rbp+960h]
	__int128 v361; // [rsp+A70h] [rbp+970h]
	__int128 v362; // [rsp+A80h] [rbp+980h]
	__int128 v363; // [rsp+A90h] [rbp+990h]

	v2 = &off_140C58C00;
	v3 = v353;
	v4 = &off_140C58C00;
	v5 = 37i64;
	v345[0] = *(_OWORD*)&off_140C58BD8;
	v345[1] = *(_OWORD*)&off_140C58BE8;
	do
	{
		v6 = *v4;
		v3 += 4;
		v4 += 4;
		*(v3 - 4) = v6;
		*(v3 - 3) = *(v4 - 3);
		*(v3 - 2) = *(v4 - 2);
		*(v3 - 1) = *(v4 - 1);
		--v5;
	} while (v5);
	v7 = &v346;
	v8 = 37i64;
	do
	{
		v9 = *v2;
		v7 += 32;
		v2 += 4;
		*((_QWORD*)v7 - 4) = v9;
		*((_QWORD*)v7 - 3) = *(v2 - 3);
		*((_QWORD*)v7 - 2) = *(v2 - 2);
		*((_QWORD*)v7 - 1) = *(v2 - 1);
		--v8;
	} while (v8);
	v347 = *(_OWORD*)&off_140C590A0;
	v348 = *(_OWORD*)&off_140C590B0;
	v349 = *(_OWORD*)&off_140C590C0;
	v350 = *(_OWORD*)&off_140C590D0;
	v351 = *(_OWORD*)&off_140C590E0;
	v352 = xmmword_140C590F0;
	v354 = *(_OWORD*)&off_140B66970;
	v355 = *(_OWORD*)&off_140B66980;
	v356 = *(_OWORD*)&off_140B66990;
	v357 = *(_OWORD*)&off_140B669A0;
	v358 = *(_OWORD*)&off_140B669B0;
	v359 = *(_OWORD*)&off_140B669C0;
	v360 = *(_OWORD*)&off_140B669D0;
	v361 = *(_OWORD*)&off_140B669E0;
	v362 = *(_OWORD*)&off_140B669F0;
	v363 = xmmword_140B66A00;
	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.ItemData");
	v10 = a1[2];
	*(_QWORD*)v10 = *(_QWORD*)(v10 - 16);
	*(_DWORD*)(v10 + 8) = *(_DWORD*)(v10 - 8);
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v343 = v12;
	v344 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v343, v13);
	a1[2] -= 16i64;
	v14 = *(unsigned __int64**)&v345[0];
	v15 = a1[2];
	v16 = v345;
	if (*(_QWORD*)&v345[0])
	{
		do
		{
			v17 = *((_QWORD*)v16 + 1);
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v18 = a1[5];
			if (v18 == a1[10])
				v19 = a1[15];
			else
				v19 = *(_QWORD*)(**(_QWORD**)(v18 + 8) + 24i64);
			v20 = sub_140060AB0((__int64)a1, 0, v19);
			v20[4] = v17;
			v21 = a1[2];
			*(_QWORD*)v21 = v20;
			*(_DWORD*)(v21 + 8) = 6;
			a1[2] += 16i64;
			v22 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v23 = -1i64;
			v24 = v22;
			do
				++v23;
			while (*((_BYTE*)v14 + v23));
			v25 = sub_140062650((__int64)a1, v14, v23);
			v26 = (unsigned int*)(a1[2] - 16i64);
			v343 = v25;
			v344 = 4;
			sub_14005EA50((__int64)a1, v24, (int*)&v343, v26);
			a1[2] -= 16i64;
			v14 = (unsigned __int64*)*((_QWORD*)v16 + 2);
			v15 = a1[2];
			++v16;
		} while (v14);
	}
	a1[2] = v15;
	sub_140057020(a1, "Item", v353);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumItemType", 0x10ui64);
	*(_DWORD*)(v27 + 8) = 4;
	*(_QWORD*)v27 = v28;
	v29 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v29 + 120) >= *(_QWORD*)(v29 + 112))
		sub_14005E2C0((__int64)a1);
	v30 = a1[2];
	v31 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v30 + 8) = 5;
	*(_QWORD*)v30 = v31;
	v32 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v32 + 120) >= *(_QWORD*)(v32 + 112))
		sub_14005E2C0((__int64)a1);
	v33 = a1[2];
	v34 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneChest", 0x10ui64);
	*(_DWORD*)(v33 + 8) = 4;
	*(_QWORD*)v33 = v34;
	a1[2] += 16i64;
	v35 = a1[2];
	*(_QWORD*)v35 = 0x3FF0000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v37 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v37 + 120) >= *(_QWORD*)(v37 + 112))
		sub_14005E2C0((__int64)a1);
	v38 = a1[2];
	v39 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneLegs", 0xFui64);
	*(_DWORD*)(v38 + 8) = 4;
	*(_QWORD*)v38 = v39;
	a1[2] += 16i64;
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4000000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v42 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v42 + 120) >= *(_QWORD*)(v42 + 112))
		sub_14005E2C0((__int64)a1);
	v43 = a1[2];
	v44 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneHead", 0xFui64);
	*(_DWORD*)(v43 + 8) = 4;
	*(_QWORD*)v43 = v44;
	a1[2] += 16i64;
	v45 = a1[2];
	*(_QWORD*)v45 = 0x4008000000000000i64;
	*(_DWORD*)(v45 + 8) = 3;
	a1[2] += 16i64;
	v46 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v46, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v47 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v47 + 120) >= *(_QWORD*)(v47 + 112))
		sub_14005E2C0((__int64)a1);
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneShoulder", 0x13ui64);
	*(_DWORD*)(v48 + 8) = 4;
	*(_QWORD*)v48 = v49;
	a1[2] += 16i64;
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4010000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v52 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v52 + 120) >= *(_QWORD*)(v52 + 112))
		sub_14005E2C0((__int64)a1);
	v53 = a1[2];
	v54 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneFeet", 0xFui64);
	*(_DWORD*)(v53 + 8) = 4;
	*(_QWORD*)v53 = v54;
	a1[2] += 16i64;
	v55 = a1[2];
	*(_QWORD*)v55 = 0x4014000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v57 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v57 + 120) >= *(_QWORD*)(v57 + 112))
		sub_14005E2C0((__int64)a1);
	v58 = a1[2];
	v59 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneHands", 0x10ui64);
	*(_DWORD*)(v58 + 8) = 4;
	*(_QWORD*)v58 = v59;
	a1[2] += 16i64;
	v60 = a1[2];
	*(_QWORD*)v60 = 0x4018000000000000i64;
	*(_DWORD*)(v60 + 8) = 3;
	a1[2] += 16i64;
	v61 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v61, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v62 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v62 + 120) >= *(_QWORD*)(v62 + 112))
		sub_14005E2C0((__int64)a1);
	v63 = a1[2];
	v64 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorArcaneBuckle", 0x11ui64);
	*(_DWORD*)(v63 + 8) = 4;
	*(_QWORD*)v63 = v64;
	a1[2] += 16i64;
	v65 = a1[2];
	*(_QWORD*)v65 = 0x401C000000000000i64;
	*(_DWORD*)(v65 + 8) = 3;
	a1[2] += 16i64;
	v66 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v66, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v67 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v67 + 120) >= *(_QWORD*)(v67 + 112))
		sub_14005E2C0((__int64)a1);
	v68 = a1[2];
	v69 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexChest", 0x10ui64);
	*(_DWORD*)(v68 + 8) = 4;
	*(_QWORD*)v68 = v69;
	a1[2] += 16i64;
	v70 = a1[2];
	*(_QWORD*)v70 = 0x4020000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	a1[2] += 16i64;
	v71 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v71, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v72 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v72 + 120) >= *(_QWORD*)(v72 + 112))
		sub_14005E2C0((__int64)a1);
	v73 = a1[2];
	v74 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexLegs", 0xFui64);
	*(_DWORD*)(v73 + 8) = 4;
	*(_QWORD*)v73 = v74;
	a1[2] += 16i64;
	v75 = a1[2];
	*(_QWORD*)v75 = 0x4022000000000000i64;
	*(_DWORD*)(v75 + 8) = 3;
	a1[2] += 16i64;
	v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v77 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v77 + 120) >= *(_QWORD*)(v77 + 112))
		sub_14005E2C0((__int64)a1);
	v78 = a1[2];
	v79 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexHead", 0xFui64);
	*(_DWORD*)(v78 + 8) = 4;
	*(_QWORD*)v78 = v79;
	a1[2] += 16i64;
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4024000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v82 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v82 + 120) >= *(_QWORD*)(v82 + 112))
		sub_14005E2C0((__int64)a1);
	v83 = a1[2];
	v84 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexShoulder", 0x13ui64);
	*(_DWORD*)(v83 + 8) = 4;
	*(_QWORD*)v83 = v84;
	a1[2] += 16i64;
	v85 = a1[2];
	*(_QWORD*)v85 = 0x4026000000000000i64;
	*(_DWORD*)(v85 + 8) = 3;
	a1[2] += 16i64;
	v86 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v86, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v87 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v87 + 120) >= *(_QWORD*)(v87 + 112))
		sub_14005E2C0((__int64)a1);
	v88 = a1[2];
	v89 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexFeet", 0xFui64);
	*(_DWORD*)(v88 + 8) = 4;
	*(_QWORD*)v88 = v89;
	a1[2] += 16i64;
	v90 = a1[2];
	*(_QWORD*)v90 = 0x4028000000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v92 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v92 + 120) >= *(_QWORD*)(v92 + 112))
		sub_14005E2C0((__int64)a1);
	v93 = a1[2];
	v94 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexHands", 0x10ui64);
	*(_DWORD*)(v93 + 8) = 4;
	*(_QWORD*)v93 = v94;
	a1[2] += 16i64;
	v95 = a1[2];
	*(_QWORD*)v95 = 0x402A000000000000i64;
	*(_DWORD*)(v95 + 8) = 3;
	a1[2] += 16i64;
	v96 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v96, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v97 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v97 + 120) >= *(_QWORD*)(v97 + 112))
		sub_14005E2C0((__int64)a1);
	v98 = a1[2];
	v99 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorReflexBuckle", 0x11ui64);
	*(_DWORD*)(v98 + 8) = 4;
	*(_QWORD*)v98 = v99;
	a1[2] += 16i64;
	v100 = a1[2];
	*(_QWORD*)v100 = 0x402C000000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v101, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v102 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v102 + 120) >= *(_QWORD*)(v102 + 112))
		sub_14005E2C0((__int64)a1);
	v103 = a1[2];
	v104 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalChest", 0xFui64);
	*(_DWORD*)(v103 + 8) = 4;
	*(_QWORD*)v103 = v104;
	a1[2] += 16i64;
	v105 = a1[2];
	*(_QWORD*)v105 = 0x402E000000000000i64;
	*(_DWORD*)(v105 + 8) = 3;
	a1[2] += 16i64;
	v106 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v106, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v107 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v107 + 120) >= *(_QWORD*)(v107 + 112))
		sub_14005E2C0((__int64)a1);
	v108 = a1[2];
	v109 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalLegs", 0xEui64);
	*(_DWORD*)(v108 + 8) = 4;
	*(_QWORD*)v108 = v109;
	a1[2] += 16i64;
	v110 = a1[2];
	*(_QWORD*)v110 = 0x4030000000000000i64;
	*(_DWORD*)(v110 + 8) = 3;
	a1[2] += 16i64;
	v111 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v111, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v112 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v112 + 120) >= *(_QWORD*)(v112 + 112))
		sub_14005E2C0((__int64)a1);
	v113 = a1[2];
	v114 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalHead", 0xEui64);
	*(_DWORD*)(v113 + 8) = 4;
	*(_QWORD*)v113 = v114;
	a1[2] += 16i64;
	v115 = a1[2];
	*(_QWORD*)v115 = 0x4031000000000000i64;
	*(_DWORD*)(v115 + 8) = 3;
	a1[2] += 16i64;
	v116 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v116, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v117 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v117 + 120) >= *(_QWORD*)(v117 + 112))
		sub_14005E2C0((__int64)a1);
	v118 = a1[2];
	v119 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalShoulder", 0x12ui64);
	*(_DWORD*)(v118 + 8) = 4;
	*(_QWORD*)v118 = v119;
	a1[2] += 16i64;
	v120 = a1[2];
	*(_QWORD*)v120 = 0x4032000000000000i64;
	*(_DWORD*)(v120 + 8) = 3;
	a1[2] += 16i64;
	v121 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v121, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v122 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v122 + 120) >= *(_QWORD*)(v122 + 112))
		sub_14005E2C0((__int64)a1);
	v123 = a1[2];
	v124 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalFeet", 0xEui64);
	*(_DWORD*)(v123 + 8) = 4;
	*(_QWORD*)v123 = v124;
	a1[2] += 16i64;
	v125 = a1[2];
	*(_QWORD*)v125 = 0x4033000000000000i64;
	*(_DWORD*)(v125 + 8) = 3;
	a1[2] += 16i64;
	v126 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v126, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v127 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v127 + 120) >= *(_QWORD*)(v127 + 112))
		sub_14005E2C0((__int64)a1);
	v128 = a1[2];
	v129 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalHands", 0xFui64);
	*(_DWORD*)(v128 + 8) = 4;
	*(_QWORD*)v128 = v129;
	a1[2] += 16i64;
	v130 = a1[2];
	*(_QWORD*)v130 = 0x4034000000000000i64;
	*(_DWORD*)(v130 + 8) = 3;
	a1[2] += 16i64;
	v131 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v131, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v132 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v132 + 120) >= *(_QWORD*)(v132 + 112))
		sub_14005E2C0((__int64)a1);
	v133 = a1[2];
	v134 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorFocalBuckle", 0x10ui64);
	*(_DWORD*)(v133 + 8) = 4;
	*(_QWORD*)v133 = v134;
	a1[2] += 16i64;
	v135 = a1[2];
	*(_QWORD*)v135 = 0x4035000000000000i64;
	*(_DWORD*)(v135 + 8) = 3;
	a1[2] += 16i64;
	v136 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v136, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v137 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v137 + 120) >= *(_QWORD*)(v137 + 112))
		sub_14005E2C0((__int64)a1);
	v138 = a1[2];
	v139 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleChest", 0x10ui64);
	*(_DWORD*)(v138 + 8) = 4;
	*(_QWORD*)v138 = v139;
	a1[2] += 16i64;
	v140 = a1[2];
	*(_QWORD*)v140 = 0x4036000000000000i64;
	*(_DWORD*)(v140 + 8) = 3;
	a1[2] += 16i64;
	v141 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v141, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v142 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v142 + 120) >= *(_QWORD*)(v142 + 112))
		sub_14005E2C0((__int64)a1);
	v143 = a1[2];
	v144 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleLegs", 0xFui64);
	*(_DWORD*)(v143 + 8) = 4;
	*(_QWORD*)v143 = v144;
	a1[2] += 16i64;
	v145 = a1[2];
	*(_QWORD*)v145 = 0x4037000000000000i64;
	*(_DWORD*)(v145 + 8) = 3;
	a1[2] += 16i64;
	v146 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v146, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v147 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v147 + 120) >= *(_QWORD*)(v147 + 112))
		sub_14005E2C0((__int64)a1);
	v148 = a1[2];
	v149 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleHead", 0xFui64);
	*(_DWORD*)(v148 + 8) = 4;
	*(_QWORD*)v148 = v149;
	a1[2] += 16i64;
	v150 = a1[2];
	*(_QWORD*)v150 = 0x4038000000000000i64;
	*(_DWORD*)(v150 + 8) = 3;
	a1[2] += 16i64;
	v151 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v151, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v152 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v152 + 120) >= *(_QWORD*)(v152 + 112))
		sub_14005E2C0((__int64)a1);
	v153 = a1[2];
	v154 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleShoulder", 0x13ui64);
	*(_DWORD*)(v153 + 8) = 4;
	*(_QWORD*)v153 = v154;
	a1[2] += 16i64;
	v155 = a1[2];
	*(_QWORD*)v155 = 0x4039000000000000i64;
	*(_DWORD*)(v155 + 8) = 3;
	a1[2] += 16i64;
	v156 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v156, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v157 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v157 + 120) >= *(_QWORD*)(v157 + 112))
		sub_14005E2C0((__int64)a1);
	v158 = a1[2];
	v159 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleFeet", 0xFui64);
	*(_DWORD*)(v158 + 8) = 4;
	*(_QWORD*)v158 = v159;
	a1[2] += 16i64;
	v160 = a1[2];
	*(_QWORD*)v160 = 0x403A000000000000i64;
	*(_DWORD*)(v160 + 8) = 3;
	a1[2] += 16i64;
	v161 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v161, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v162 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v162 + 120) >= *(_QWORD*)(v162 + 112))
		sub_14005E2C0((__int64)a1);
	v163 = a1[2];
	v164 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleHands", 0x10ui64);
	*(_DWORD*)(v163 + 8) = 4;
	*(_QWORD*)v163 = v164;
	a1[2] += 16i64;
	v165 = a1[2];
	*(_QWORD*)v165 = 0x403B000000000000i64;
	*(_DWORD*)(v165 + 8) = 3;
	a1[2] += 16i64;
	v166 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v166, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v167 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v167 + 120) >= *(_QWORD*)(v167 + 112))
		sub_14005E2C0((__int64)a1);
	v168 = a1[2];
	v169 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorBattleBuckle", 0x11ui64);
	*(_DWORD*)(v168 + 8) = 4;
	*(_QWORD*)v168 = v169;
	a1[2] += 16i64;
	v170 = a1[2];
	*(_QWORD*)v170 = 0x403C000000000000i64;
	*(_DWORD*)(v170 + 8) = 3;
	a1[2] += 16i64;
	v171 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v171, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v172 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v172 + 120) >= *(_QWORD*)(v172 + 112))
		sub_14005E2C0((__int64)a1);
	v173 = a1[2];
	v174 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorJewelryRing", 0x10ui64);
	*(_DWORD*)(v173 + 8) = 4;
	*(_QWORD*)v173 = v174;
	a1[2] += 16i64;
	v175 = a1[2];
	*(_QWORD*)v175 = 0x403D000000000000i64;
	*(_DWORD*)(v175 + 8) = 3;
	a1[2] += 16i64;
	v176 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v176, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v177 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v177 + 120) >= *(_QWORD*)(v177 + 112))
		sub_14005E2C0((__int64)a1);
	v178 = a1[2];
	v179 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorJewelryFace", 0x10ui64);
	*(_DWORD*)(v178 + 8) = 4;
	*(_QWORD*)v178 = v179;
	a1[2] += 16i64;
	v180 = a1[2];
	*(_QWORD*)v180 = 0x403E000000000000i64;
	*(_DWORD*)(v180 + 8) = 3;
	a1[2] += 16i64;
	v181 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v181, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v182 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v182 + 120) >= *(_QWORD*)(v182 + 112))
		sub_14005E2C0((__int64)a1);
	v183 = a1[2];
	v184 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorJewelryNeck", 0x10ui64);
	*(_DWORD*)(v183 + 8) = 4;
	*(_QWORD*)v183 = v184;
	a1[2] += 16i64;
	v185 = a1[2];
	*(_QWORD*)v185 = 0x403F000000000000i64;
	*(_DWORD*)(v185 + 8) = 3;
	a1[2] += 16i64;
	v186 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v186, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v187 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v187 + 120) >= *(_QWORD*)(v187 + 112))
		sub_14005E2C0((__int64)a1);
	v188 = a1[2];
	v189 = sub_140062650((__int64)a1, (unsigned __int64*)"ArmorJewelryTrinket", 0x13ui64);
	*(_DWORD*)(v188 + 8) = 4;
	*(_QWORD*)v188 = v189;
	a1[2] += 16i64;
	v190 = a1[2];
	*(_QWORD*)v190 = 0x4040000000000000i64;
	*(_DWORD*)(v190 + 8) = 3;
	a1[2] += 16i64;
	v191 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v191, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400EFF50((__int64)a1, v192, (unsigned __int64*)"ArmorMiscChest", 33);
	sub_1400EFF50((__int64)a1, v193, (unsigned __int64*)"ArmorMiscLegs", 34);
	sub_1400EFF50((__int64)a1, v194, (unsigned __int64*)"ArmorMiscHead", 35);
	sub_1400EFF50((__int64)a1, v195, (unsigned __int64*)"ArmorMiscShoulder", 36);
	sub_1400EFF50((__int64)a1, v196, (unsigned __int64*)"ArmorMiscFeet", 37);
	sub_1400EFF50((__int64)a1, v197, (unsigned __int64*)"ArmorMiscHands", 38);
	sub_1400EFF50((__int64)a1, v198, (unsigned __int64*)"ArmorMiscBuckle", 39);
	sub_1400EFF50((__int64)a1, v199, (unsigned __int64*)"ArmorMiscRing", 40);
	sub_1400EFF50((__int64)a1, v200, (unsigned __int64*)"ArmorMiscFace", 41);
	sub_1400EFF50((__int64)a1, v201, (unsigned __int64*)"ArmorMiscNeck", 42);
	sub_1400EFF50((__int64)a1, v202, (unsigned __int64*)"ArmorMiscTrinket", 43);
	sub_1400EFF50((__int64)a1, v203, (unsigned __int64*)"WeaponMHAxe", 44);
	sub_1400EFF50((__int64)a1, v204, (unsigned __int64*)"WeaponMHPistols", 45);
	sub_1400EFF50((__int64)a1, v205, (unsigned __int64*)"WeaponMHEnergy", 46);
	sub_1400EFF50((__int64)a1, v206, (unsigned __int64*)"WeaponMHCrook", 47);
	sub_1400EFF50((__int64)a1, v207, (unsigned __int64*)"WeaponMHFist", 48);
	sub_1400EFF50((__int64)a1, v208, (unsigned __int64*)"WeaponMHPlasmaGun", 49);
	sub_1400EFF50((__int64)a1, v209, (unsigned __int64*)"WeaponMHShockPaddles", 79);
	sub_1400EFF50((__int64)a1, v210, (unsigned __int64*)"WeaponMHStave", 50);
	sub_1400EFF50((__int64)a1, v211, (unsigned __int64*)"WeaponMHSword", 51);
	sub_1400EFF50((__int64)a1, v212, (unsigned __int64*)"WeaponMHMace", 52);
	sub_1400EFF50((__int64)a1, v213, (unsigned __int64*)"WeaponMHClawsAttached", 348);
	sub_1400EFF50((__int64)a1, v214, (unsigned __int64*)"WeaponOHShadowCrystal", 53);
	sub_1400EFF50((__int64)a1, v215, (unsigned __int64*)"WeaponOHBatteryPack", 54);
	sub_1400EFF50((__int64)a1, v216, (unsigned __int64*)"WeaponOHInstrument", 55);
	sub_1400EFF50((__int64)a1, v217, (unsigned __int64*)"WeaponOHBook", 56);
	sub_1400EFF50((__int64)a1, v218, (unsigned __int64*)"WeaponOHMindGem", 57);
	sub_1400EFF50((__int64)a1, v219, (unsigned __int64*)"WeaponOHWrench", 58);
	sub_1400EFF50((__int64)a1, v220, (unsigned __int64*)"WeaponOHSword", 59);
	sub_1400EFF50((__int64)a1, v221, (unsigned __int64*)"WeaponOHShotgun", 60);
	sub_1400EFF50((__int64)a1, v222, (unsigned __int64*)"WeaponOHRelic", 61);
	sub_1400EFF50((__int64)a1, v223, (unsigned __int64*)"BodySkin", 62);
	sub_1400EFF50((__int64)a1, v224, (unsigned __int64*)"BodyFace", 63);
	sub_1400EFF50((__int64)a1, v225, (unsigned __int64*)"BodyEye", 64);
	sub_1400EFF50((__int64)a1, v226, (unsigned __int64*)"BodyEar", 65);
	sub_1400EFF50((__int64)a1, v227, (unsigned __int64*)"BodyHair", 66);
	sub_1400EFF50((__int64)a1, v228, (unsigned __int64*)"BodyTatoo", 67);
	sub_1400EFF50((__int64)a1, v229, (unsigned __int64*)"BodyTail", 68);
	sub_1400EFF50((__int64)a1, v230, (unsigned __int64*)"BodyHand", 69);
	sub_1400EFF50((__int64)a1, v231, (unsigned __int64*)"BodyUnderwear", 70);
	sub_1400EFF50((__int64)a1, v232, (unsigned __int64*)"BodyFacialHair", 71);
	sub_1400EFF50((__int64)a1, v233, qword_1409E8AA4, 72);
	sub_1400EFF50((__int64)a1, v234, (unsigned __int64*)"Spellbook", 73);
	sub_1400EFF50((__int64)a1, v235, (unsigned __int64*)"ItemFood", 74);
	sub_1400EFF50((__int64)a1, v236, (unsigned __int64*)"ItemPotion", 75);
	sub_1400EFF50((__int64)a1, v237, (unsigned __int64*)"Spell", 76);
	sub_1400EFF50((__int64)a1, v238, (unsigned __int64*)"QuestItem", 77);
	sub_1400EFF50((__int64)a1, v239, (unsigned __int64*)"WeaponMHScythe", 78);
	sub_1400EFF50((__int64)a1, v240, (unsigned __int64*)"WeaponMHShockPaddles", 79);
	sub_1400EFF50((__int64)a1, v241, (unsigned __int64*)"Spell_Temporary", 86);
	sub_1400EFF50((__int64)a1, v242, (unsigned __int64*)"WeaponOHMagicthingy", 88);
	sub_1400EFF50((__int64)a1, v243, (unsigned __int64*)"ItemBandage", 90);
	sub_1400EFF50((__int64)a1, v244, (unsigned __int64*)"BrokenWeapon", 92);
	sub_1400EFF50((__int64)a1, v245, (unsigned __int64*)"BrokenRanged", 93);
	sub_1400EFF50((__int64)a1, v246, (unsigned __int64*)"BrokenMagic", 94);
	sub_1400EFF50((__int64)a1, v247, (unsigned __int64*)"Seeds", 95);
	sub_1400EFF50((__int64)a1, v248, (unsigned __int64*)"CookingStaple", 96);
	sub_1400EFF50((__int64)a1, v249, (unsigned __int64*)"CookingMeat", 97);
	sub_1400EFF50((__int64)a1, v250, (unsigned __int64*)"CookingHerb", 98);
	sub_1400EFF50((__int64)a1, v251, (unsigned __int64*)"CookingVeggie", 99);
	sub_1400EFF50((__int64)a1, v252, (unsigned __int64*)"CookingSeasoning", 100);
	sub_1400EFF50((__int64)a1, v253, (unsigned __int64*)"MiningMineral", 101);
	sub_1400EFF50((__int64)a1, v254, (unsigned __int64*)"WildGrowth", 102);
	sub_1400EFF50((__int64)a1, v255, (unsigned __int64*)"HarvestingPlant", 103);
	sub_1400EFF50((__int64)a1, v256, (unsigned __int64*)"RelicAndLore", 104);
	sub_1400EFF50((__int64)a1, v257, (unsigned __int64*)"Power", 105);
	sub_1400EFF50((__int64)a1, v258, (unsigned __int64*)"MineralComponent", 106);
	sub_1400EFF50((__int64)a1, v259, (unsigned __int64*)"WildComponent", 107);
	sub_1400EFF50((__int64)a1, v260, (unsigned __int64*)"PowerComponent", 108);
	sub_1400EFF50((__int64)a1, v261, (unsigned __int64*)"RelicComponent", 109);
	sub_1400EFF50((__int64)a1, v262, (unsigned __int64*)"ArmsmasterSchematic", 110);
	sub_1400EFF50((__int64)a1, v263, (unsigned __int64*)"TechsmithSchematic", 111);
	sub_1400EFF50((__int64)a1, v264, (unsigned __int64*)"WeaponchanterSchematic", 112);
	sub_1400EFF50((__int64)a1, v265, (unsigned __int64*)"ArcaneWeaverSchematic", 113);
	sub_1400EFF50((__int64)a1, v266, (unsigned __int64*)"ApothecarySchematic", 114);
	sub_1400EFF50((__int64)a1, v267, (unsigned __int64*)"TinkererSchematic", 115);
	sub_1400EFF50((__int64)a1, v268, (unsigned __int64*)"CookingSchematic", 116);
	sub_1400EFF50((__int64)a1, v269, (unsigned __int64*)"ArtisanSchematic", 117);
	sub_1400EFF50((__int64)a1, v270, (unsigned __int64*)"AssayConsumable", 118);
	sub_1400EFF50((__int64)a1, v271, (unsigned __int64*)"RefiningConsumable", 119);
	sub_1400EFF50((__int64)a1, v272, (unsigned __int64*)"ClubSoldiers", 120);
	sub_1400EFF50((__int64)a1, v273, (unsigned __int64*)"DiamondMerchants", 121);
	sub_1400EFF50((__int64)a1, v274, (unsigned __int64*)"SpadeCraftspeople", 122);
	sub_1400EFF50((__int64)a1, v275, (unsigned __int64*)"HeartArtists", 123);
	sub_1400EFF50((__int64)a1, v276, (unsigned __int64*)"StarPoliticans", 124);
	sub_1400EFF50((__int64)a1, v277, (unsigned __int64*)"OmniWild", 125);
	sub_1400EFF50((__int64)a1, v278, (unsigned __int64*)"OmniMining", 126);
	sub_1400EFF50((__int64)a1, v279, (unsigned __int64*)"OmniRelics", 127);
	sub_1400EFF50((__int64)a1, v280, (unsigned __int64*)"OmniPower", 128);
	sub_1400EFF50((__int64)a1, v281, (unsigned __int64*)"AssayMinigame", 129);
	sub_1400EFF50((__int64)a1, v282, (unsigned __int64*)"RefiningMinigame", 130);
	sub_1400EFF50((__int64)a1, v283, (unsigned __int64*)"HousingAddon", 131);
	sub_1400EFF50((__int64)a1, v284, (unsigned __int64*)"ArmorEnchantment", 132);
	sub_1400EFF50((__int64)a1, v285, (unsigned __int64*)"WeaponEnchantment", 133);
	sub_1400EFF50((__int64)a1, v286, (unsigned __int64*)"TempBag", 134);
	sub_1400EFF50((__int64)a1, v287, (unsigned __int64*)"TaxiRoute", 135);
	sub_1400EFF50((__int64)a1, v288, (unsigned __int64*)"TempMount", 137);
	sub_1400EFF50((__int64)a1, v289, (unsigned __int64*)"RepItem", 138);
	sub_1400EFF50((__int64)a1, v290, (unsigned __int64*)"HoverboardFront", 368);
	sub_1400EFF50((__int64)a1, v291, (unsigned __int64*)"HoverboardBack", 369);
	sub_1400EFF50((__int64)a1, v292, (unsigned __int64*)"HoverboardSides", 370);
	sub_1400EFF50((__int64)a1, v293, (unsigned __int64*)"HoverboardBottom", 371);
	sub_1400EFF50((__int64)a1, v294, (unsigned __int64*)"MountFront", 372);
	sub_1400EFF50((__int64)a1, v295, (unsigned __int64*)"MountBack", 373);
	sub_1400EFF50((__int64)a1, v296, (unsigned __int64*)"MountLeft", 374);
	sub_1400EFF50((__int64)a1, v297, (unsigned __int64*)"MountRight", 375);
	sub_1400EFF50((__int64)a1, v298, (unsigned __int64*)"Decor", 155);
	sub_1400EFF50((__int64)a1, v299, (unsigned __int64*)&unk_1409E8ADC, 332);
	sub_1400EFF50((__int64)a1, v300, (unsigned __int64*)"DyeCollection", 349);
	sub_1400EFF50((__int64)a1, v301, (unsigned __int64*)"DyeBag", 450);
	sub_1400EFF50((__int64)a1, v302, (unsigned __int64*)"HousingSky", 553);
	sub_1400EFF50((__int64)a1, v303, (unsigned __int64*)"HousingMusic", 556);
	sub_1400EFF50((__int64)a1, v304, (unsigned __int64*)"GenericLootBag", 449);
	sub_1400EFF50((__int64)a1, v305, (unsigned __int64*)"OtherConsumable", 143);
	sub_1400EFF50((__int64)a1, v306, (unsigned __int64*)"HousingPlug", 164);
	sub_1400EFF50((__int64)a1, v307, (unsigned __int64*)"HousingChest", 451);
	sub_1400EFF50((__int64)a1, v308, (unsigned __int64*)&unk_1409E8B0C, 496);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumItemQuality", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v309 = a1[2];
	v310 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v309 + 8) = 5;
	*(_QWORD*)v309 = v310;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v311, (unsigned __int64*)"Inferior", 1);
	sub_1400EFF50((__int64)a1, v312, (unsigned __int64*)"Average", 2);
	sub_1400EFF50((__int64)a1, v313, (unsigned __int64*)"Good", 3);
	sub_1400EFF50((__int64)a1, v314, (unsigned __int64*)"Excellent", 4);
	sub_1400EFF50((__int64)a1, v315, (unsigned __int64*)"Superb", 5);
	sub_1400EFF50((__int64)a1, v316, (unsigned __int64*)"Legendary", 6);
	sub_1400EFF50((__int64)a1, v317, (unsigned __int64*)"Artifact", 7);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumRuneType", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v318 = a1[2];
	v319 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v318 + 8) = 5;
	*(_QWORD*)v318 = v319;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v320, qword_1409E8AEC, 7);
	sub_1400EFF50((__int64)a1, v321, (unsigned __int64*)"Fire", 10);
	sub_1400EFF50((__int64)a1, v322, (unsigned __int64*)"Water", 8);
	sub_1400EFF50((__int64)a1, v323, (unsigned __int64*)"Earth", 9);
	sub_1400EFF50((__int64)a1, v324, (unsigned __int64*)"Logic", 11);
	sub_1400EFF50((__int64)a1, v325, (unsigned __int64*)"Life", 12);
	sub_1400EFF50((__int64)a1, v326, (unsigned __int64*)"Fusion", 13);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumLootItemType", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v327 = a1[2];
	v328 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v327 + 8) = 5;
	*(_QWORD*)v327 = v328;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v329, (unsigned __int64*)"StaticItem", 0);
	sub_1400EFF50((__int64)a1, v330, (unsigned __int64*)"AltTable", 1);
	sub_1400EFF50((__int64)a1, v331, (unsigned __int64*)"Cash", 2);
	sub_1400EFF50((__int64)a1, v332, (unsigned __int64*)"Spell", 4);
	sub_1400EFF50((__int64)a1, v333, (unsigned __int64*)"CurrencyExchange", 5);
	sub_1400EFF50((__int64)a1, v334, (unsigned __int64*)"VirtualItem", 6);
	sub_1400EFF50((__int64)a1, v335, (unsigned __int64*)"AdventureSpell", 7);
	sub_1400EFF50((__int64)a1, v336, (unsigned __int64*)"AccountItem", 8);
	sub_1400EFF50((__int64)a1, v337, (unsigned __int64*)"AccountCurrency", 9);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v338, (unsigned __int64*)"CodeEnumItemDetailedTooltip", (__int64)&off_140C33DB0, 9u);
	sub_1400F0490((__int64)a1, v339, (unsigned __int64*)"CodeEnumItemUpdateReason", (__int64)&off_140C33530, 0x2Fu);
	sub_1400F0490((__int64)a1, v340, (unsigned __int64*)"CodeEnumItem2Category", (__int64)&off_140C2F180, 0x11u);
	sub_1400F0490((__int64)a1, v341, (unsigned __int64*)"CodeEnumItem2Family", (__int64)&off_140C315D0, 0x18u);
	return 1i64;
}
// 140414E52: variable 'v192' is possibly undefined
// 140414E67: variable 'v193' is possibly undefined
// 140414E7C: variable 'v194' is possibly undefined
// 140414E91: variable 'v195' is possibly undefined
// 140414EA6: variable 'v196' is possibly undefined
// 140414EBB: variable 'v197' is possibly undefined
// 140414ED0: variable 'v198' is possibly undefined
// 140414EE5: variable 'v199' is possibly undefined
// 140414EFA: variable 'v200' is possibly undefined
// 140414F0F: variable 'v201' is possibly undefined
// 140414F24: variable 'v202' is possibly undefined
// 140414F39: variable 'v203' is possibly undefined
// 140414F4E: variable 'v204' is possibly undefined
// 140414F63: variable 'v205' is possibly undefined
// 140414F78: variable 'v206' is possibly undefined
// 140414F8D: variable 'v207' is possibly undefined
// 140414FA2: variable 'v208' is possibly undefined
// 140414FB7: variable 'v209' is possibly undefined
// 140414FCC: variable 'v210' is possibly undefined
// 140414FE1: variable 'v211' is possibly undefined
// 140414FF6: variable 'v212' is possibly undefined
// 14041500B: variable 'v213' is possibly undefined
// 140415020: variable 'v214' is possibly undefined
// 140415035: variable 'v215' is possibly undefined
// 14041504A: variable 'v216' is possibly undefined
// 14041505F: variable 'v217' is possibly undefined
// 140415074: variable 'v218' is possibly undefined
// 140415089: variable 'v219' is possibly undefined
// 14041509E: variable 'v220' is possibly undefined
// 1404150B3: variable 'v221' is possibly undefined
// 1404150C8: variable 'v222' is possibly undefined
// 1404150DD: variable 'v223' is possibly undefined
// 1404150F2: variable 'v224' is possibly undefined
// 140415107: variable 'v225' is possibly undefined
// 14041511C: variable 'v226' is possibly undefined
// 140415131: variable 'v227' is possibly undefined
// 140415146: variable 'v228' is possibly undefined
// 14041515B: variable 'v229' is possibly undefined
// 140415170: variable 'v230' is possibly undefined
// 140415185: variable 'v231' is possibly undefined
// 14041519A: variable 'v232' is possibly undefined
// 1404151AF: variable 'v233' is possibly undefined
// 1404151C4: variable 'v234' is possibly undefined
// 1404151D9: variable 'v235' is possibly undefined
// 1404151EE: variable 'v236' is possibly undefined
// 140415203: variable 'v237' is possibly undefined
// 140415218: variable 'v238' is possibly undefined
// 14041522D: variable 'v239' is possibly undefined
// 140415242: variable 'v240' is possibly undefined
// 140415257: variable 'v241' is possibly undefined
// 14041526C: variable 'v242' is possibly undefined
// 140415281: variable 'v243' is possibly undefined
// 140415296: variable 'v244' is possibly undefined
// 1404152AB: variable 'v245' is possibly undefined
// 1404152C0: variable 'v246' is possibly undefined
// 1404152D5: variable 'v247' is possibly undefined
// 1404152EA: variable 'v248' is possibly undefined
// 1404152FF: variable 'v249' is possibly undefined
// 140415314: variable 'v250' is possibly undefined
// 140415329: variable 'v251' is possibly undefined
// 14041533E: variable 'v252' is possibly undefined
// 140415353: variable 'v253' is possibly undefined
// 140415368: variable 'v254' is possibly undefined
// 14041537D: variable 'v255' is possibly undefined
// 140415392: variable 'v256' is possibly undefined
// 1404153A7: variable 'v257' is possibly undefined
// 1404153BC: variable 'v258' is possibly undefined
// 1404153D1: variable 'v259' is possibly undefined
// 1404153E6: variable 'v260' is possibly undefined
// 1404153FB: variable 'v261' is possibly undefined
// 140415410: variable 'v262' is possibly undefined
// 140415425: variable 'v263' is possibly undefined
// 14041543A: variable 'v264' is possibly undefined
// 14041544F: variable 'v265' is possibly undefined
// 140415464: variable 'v266' is possibly undefined
// 140415479: variable 'v267' is possibly undefined
// 14041548E: variable 'v268' is possibly undefined
// 1404154A3: variable 'v269' is possibly undefined
// 1404154B8: variable 'v270' is possibly undefined
// 1404154CD: variable 'v271' is possibly undefined
// 1404154E2: variable 'v272' is possibly undefined
// 1404154F7: variable 'v273' is possibly undefined
// 14041550C: variable 'v274' is possibly undefined
// 140415521: variable 'v275' is possibly undefined
// 140415536: variable 'v276' is possibly undefined
// 14041554B: variable 'v277' is possibly undefined
// 140415560: variable 'v278' is possibly undefined
// 140415575: variable 'v279' is possibly undefined
// 14041558A: variable 'v280' is possibly undefined
// 14041559F: variable 'v281' is possibly undefined
// 1404155B4: variable 'v282' is possibly undefined
// 1404155C9: variable 'v283' is possibly undefined
// 1404155DE: variable 'v284' is possibly undefined
// 1404155F3: variable 'v285' is possibly undefined
// 140415608: variable 'v286' is possibly undefined
// 14041561D: variable 'v287' is possibly undefined
// 140415632: variable 'v288' is possibly undefined
// 140415647: variable 'v289' is possibly undefined
// 14041565C: variable 'v290' is possibly undefined
// 140415671: variable 'v291' is possibly undefined
// 140415686: variable 'v292' is possibly undefined
// 14041569B: variable 'v293' is possibly undefined
// 1404156B0: variable 'v294' is possibly undefined
// 1404156C5: variable 'v295' is possibly undefined
// 1404156DA: variable 'v296' is possibly undefined
// 1404156EF: variable 'v297' is possibly undefined
// 140415704: variable 'v298' is possibly undefined
// 140415719: variable 'v299' is possibly undefined
// 14041572E: variable 'v300' is possibly undefined
// 140415743: variable 'v301' is possibly undefined
// 140415758: variable 'v302' is possibly undefined
// 14041576D: variable 'v303' is possibly undefined
// 140415782: variable 'v304' is possibly undefined
// 140415797: variable 'v305' is possibly undefined
// 1404157AC: variable 'v306' is possibly undefined
// 1404157C1: variable 'v307' is possibly undefined
// 1404157D6: variable 'v308' is possibly undefined
// 140415853: variable 'v311' is possibly undefined
// 140415868: variable 'v312' is possibly undefined
// 14041587D: variable 'v313' is possibly undefined
// 140415892: variable 'v314' is possibly undefined
// 1404158A7: variable 'v315' is possibly undefined
// 1404158BC: variable 'v316' is possibly undefined
// 1404158D1: variable 'v317' is possibly undefined
// 14041594E: variable 'v320' is possibly undefined
// 140415963: variable 'v321' is possibly undefined
// 140415978: variable 'v322' is possibly undefined
// 14041598D: variable 'v323' is possibly undefined
// 1404159A2: variable 'v324' is possibly undefined
// 1404159B7: variable 'v325' is possibly undefined
// 1404159CC: variable 'v326' is possibly undefined
// 140415A46: variable 'v329' is possibly undefined
// 140415A5B: variable 'v330' is possibly undefined
// 140415A70: variable 'v331' is possibly undefined
// 140415A85: variable 'v332' is possibly undefined
// 140415A9A: variable 'v333' is possibly undefined
// 140415AAF: variable 'v334' is possibly undefined
// 140415AC4: variable 'v335' is possibly undefined
// 140415AD9: variable 'v336' is possibly undefined
// 140415AEE: variable 'v337' is possibly undefined
// 140415B29: variable 'v338' is possibly undefined
// 140415B47: variable 'v339' is possibly undefined
// 140415B65: variable 'v340' is possibly undefined
// 140415B83: variable 'v341' is possibly undefined
// 1409E8AA4: using guessed type unsigned __int64 qword_1409E8AA4[7];
// 1409E8AEC: using guessed type unsigned __int64 qword_1409E8AEC[3];
// 140B66970: using guessed type char *off_140B66970;
// 140B66980: using guessed type char *off_140B66980;
// 140B66990: using guessed type char *off_140B66990;
// 140B669A0: using guessed type char *off_140B669A0;
// 140B669B0: using guessed type char *off_140B669B0;
// 140B669C0: using guessed type char *off_140B669C0;
// 140B669D0: using guessed type char *off_140B669D0;
// 140B669E0: using guessed type char *off_140B669E0;
// 140B669F0: using guessed type char *off_140B669F0;
// 140B66A00: using guessed type __int128 xmmword_140B66A00;
// 140C2F180: using guessed type wchar_t *off_140C2F180;
// 140C315D0: using guessed type wchar_t *off_140C315D0;
// 140C33530: using guessed type wchar_t *off_140C33530;
// 140C33DB0: using guessed type wchar_t *off_140C33DB0;
// 140C58BD8: using guessed type char *off_140C58BD8;
// 140C58BE8: using guessed type char *off_140C58BE8;
// 140C58C00: using guessed type char *off_140C58C00;
// 140C590A0: using guessed type char *off_140C590A0;
// 140C590B0: using guessed type char *off_140C590B0;
// 140C590C0: using guessed type char *off_140C590C0;
// 140C590D0: using guessed type char *off_140C590D0;
// 140C590E0: using guessed type char *off_140C590E0;
// 140C590F0: using guessed type __int128 xmmword_140C590F0;
// 140413A20: using guessed type _QWORD var_560[148];

