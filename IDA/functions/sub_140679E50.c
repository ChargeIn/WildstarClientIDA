#include "../winhttp.h"

//----- (0000000140679E50) ----------------------------------------------------
__int64 __fastcall sub_140679E50(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rbx
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	unsigned int* v30; // r9
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	unsigned int* v34; // r9
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	unsigned int* v38; // r9
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned int* v42; // r9
	__int64 v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	unsigned int* v46; // r9
	__int64 v47; // rax
	__int64 v48; // rbx
	__int64 v49; // rax
	unsigned int* v50; // r9
	__int64 v51; // rax
	__int64 v52; // rbx
	__int64 v53; // rax
	unsigned int* v54; // r9
	__int64 v55; // rax
	__int64 v56; // rbx
	__int64 v57; // rax
	unsigned int* v58; // r9
	__int64 v59; // rax
	__int64 v60; // rbx
	__int64 v61; // rax
	unsigned int* v62; // r9
	__int64 v63; // rax
	__int64 v64; // rbx
	__int64 v65; // rax
	unsigned int* v66; // r9
	__int64 v67; // rax
	__int64 v68; // rbx
	__int64 v69; // rax
	__int64 v70; // r9
	__int64 v71; // rax
	__int64 v72; // rbx
	__int64 v73; // rax
	unsigned int* v74; // r9
	__int64 v75; // rax
	__int64 v76; // rbx
	__int64 v77; // rax
	unsigned int* v78; // r9
	__int64 v79; // rax
	__int64 v80; // rbx
	__int64 v81; // rax
	unsigned int* v82; // r9
	__int64 v83; // rax
	__int64 v84; // rbx
	__int64 v85; // rax
	unsigned int* v86; // r9
	__int64 v87; // rax
	__int64 v88; // rbx
	__int64 v89; // rax
	unsigned int* v90; // r9
	__int64 v91; // rax
	__int64 v92; // rbx
	__int64 v93; // rax
	unsigned int* v94; // r9
	__int64 v95; // rax
	__int64 v96; // rbx
	__int64 v97; // rax
	unsigned int* v98; // r9
	__int64 v99; // rax
	__int64 v100; // rbx
	__int64 v101; // rax
	unsigned int* v102; // r9
	__int64 v103; // rax
	__int64 v104; // rbx
	__int64 v105; // rax
	unsigned int* v106; // r9
	__int64 v107; // rax
	__int64 v108; // rbx
	__int64 v109; // rax
	unsigned int* v110; // r9
	__int64 v111; // rax
	__int64 v112; // rbx
	__int64 v113; // rax
	unsigned int* v114; // r9
	__int64 v115; // rax
	__int64 v116; // rbx
	__int64 v117; // rax
	unsigned int* v118; // r9
	__int64 v119; // rax
	__int64 v120; // rbx
	unsigned int* v121; // r9
	__int64 v122; // rax
	__int64 v123; // rbx
	__int64 v124; // rax
	unsigned int* v125; // r9
	__int64 v126; // rax
	__int64 v127; // rbx
	__int64 v128; // rax
	unsigned int* v129; // r9
	__int64 v130; // rax
	__int64 v131; // rbx
	__int64 v132; // rax
	unsigned int* v133; // r9
	__int64 v134; // rax
	__int64 v135; // rbx
	__int64 v136; // rax
	__int64 v137; // r9
	__int64 v138; // rax
	__int64 v139; // rbx
	__int64 v140; // rax
	unsigned int* v141; // r9
	__int64 v142; // rax
	__int64 v143; // rbx
	__int64 v144; // rax
	unsigned int* v145; // r9
	__int64 v146; // rax
	__int64 v147; // rbx
	__int64 v148; // rax
	unsigned int* v149; // r9
	__int64 v150; // rax
	__int64 v151; // rbx
	__int64 v152; // rax
	unsigned int* v153; // r9
	__int64 v154; // rax
	__int64 v155; // rbx
	__int64 v156; // rax
	unsigned int* v157; // r9
	__int64 v158; // rax
	__int64 v159; // rbx
	__int64 v160; // rax
	unsigned int* v161; // r9
	__int64 v162; // rax
	__int64 v163; // rbx
	__int64 v164; // rax
	unsigned int* v165; // r9
	__int64 v166; // rax
	__int64 v167; // rbx
	__int64 v168; // rax
	unsigned int* v169; // r9
	__int64 v170; // rax
	__int64 v171; // rbx
	__int64 v172; // rax
	unsigned int* v173; // r9
	__int64 v174; // rax
	__int64 v175; // rbx
	__int64 v176; // rax
	unsigned int* v177; // r9
	__int64 v178; // rax
	__int64 v179; // rbx
	__int64 v180; // rax
	unsigned int* v181; // r9
	__int64 v182; // rax
	__int64 v183; // rbx
	__int64 v184; // rax
	unsigned int* v185; // r9
	__int64 v186; // rax
	__int64 v187; // rbx
	__int64 v188; // rax
	__int64 v189; // r9
	__int64 v190; // rax
	__int64 v191; // rbx
	__int64 v192; // rax
	unsigned int* v193; // r9
	__int64 v194; // rax
	__int64 v195; // rbx
	__int64 v196; // rax
	unsigned int* v197; // r9
	__int64 v198; // rax
	__int64 v199; // rbx
	__int64 v200; // rax
	unsigned int* v201; // r9
	__int64 v202; // rax
	__int64 v203; // rbx
	__int64 v204; // rax
	unsigned int* v205; // r9
	__int64 v206; // rax
	__int64 v207; // rax
	__int64 v208; // rax
	__int64 v209; // rax
	__int64 v210; // rax
	__int64 v211; // rax
	__int64 v212; // rax
	__int64 v213; // rax
	__int64 v214; // rax
	__int64 v215; // rax
	__int64 v216; // rax
	__int64 v217; // rax
	__int64 v218; // rax
	__int64 v219; // rax
	__int64 v220; // rax
	__int64 v221; // rax
	__int64 v222; // rax
	__int64 v223; // rax
	__int64 v224; // rax
	__int64 v225; // rax
	__int64 v226; // rax
	__int64 v227; // rax
	__int64 v228; // rax
	__int64 v229; // rax
	__int64 v230; // rax
	__int64 v231; // rax
	__int64 v232; // rax
	__int64 v233; // rax
	__int64 v234; // rax
	__int64 v235; // rax
	__int64 v236; // rax
	__int64 v237; // rax
	__int64 v238; // rax
	__int64 v239; // rax
	__int64 v240; // rax
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
	__int64 v255; // [rsp+30h] [rbp-10h] BYREF
	int v256; // [rsp+38h] [rbp-8h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.PathMission");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v255 = v4;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v255, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5C490;
	if (off_140C5C490)
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v9 = a1[5];
			if (v9 == a1[10])
				v10 = a1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)a1, 0, v10);
			v11[4] = v8;
			v12 = a1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			a1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)a1, v14, v15);
			v18 = (unsigned int*)(a1[2] - 16i64);
			v255 = v17;
			v256 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v255, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "PathMission", &off_140B6FE10);
	v19 = a1[2];
	*(_DWORD*)(v19 + 8) = 3;
	*(_QWORD*)v19 = 0i64;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Soldier", 0x16ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v255 = v21;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v255, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Settler", 0x16ui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v255 = v25;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v255, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4000000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Scientist", 0x18ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v255 = v29;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v255, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4008000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathType_Explorer", 0x17ui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v255 = v33;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v255, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_QWORD*)v35 = 0i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionState_NoMission", 0x1Aui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v255 = v37;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v255, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4000000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionState_Unlocked", 0x19ui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v255 = v41;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v255, v42);
	a1[2] -= 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4008000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = a1[2];
	v45 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionState_Started", 0x18ui64);
	v46 = (unsigned int*)(a1[2] - 16i64);
	v255 = v45;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v44 - 32), (int*)&v255, v46);
	a1[2] -= 16i64;
	v47 = a1[2];
	*(_QWORD*)v47 = 0x4010000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionState_Complete", 0x19ui64);
	v50 = (unsigned int*)(a1[2] - 16i64);
	v255 = v49;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v48 - 32), (int*)&v255, v50);
	a1[2] -= 16i64;
	v51 = a1[2];
	*(_QWORD*)v51 = 0i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = a1[2];
	v53 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Soldier_Holdout", 0x1Fui64);
	v54 = (unsigned int*)(a1[2] - 16i64);
	v255 = v53;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v52 - 32), (int*)&v255, v54);
	a1[2] -= 16i64;
	v55 = a1[2];
	*(_QWORD*)v55 = 0x4010000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = a1[2];
	v57 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Soldier_Assassinate", 0x23ui64);
	v58 = (unsigned int*)(a1[2] - 16i64);
	v255 = v57;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v56 - 32), (int*)&v255, v58);
	a1[2] -= 16i64;
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4014000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = a1[2];
	v61 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Soldier_Demolition", 0x22ui64);
	v62 = (unsigned int*)(a1[2] - 16i64);
	v255 = v61;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v60 - 32), (int*)&v255, v62);
	a1[2] -= 16i64;
	v63 = a1[2];
	*(_QWORD*)v63 = 0x4018000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = a1[2];
	v65 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Soldier_Rescue", 0x1Eui64);
	v66 = (unsigned int*)(a1[2] - 16i64);
	v255 = v65;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v64 - 32), (int*)&v255, v66);
	a1[2] -= 16i64;
	v67 = a1[2];
	*(_QWORD*)v67 = 0x401C000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = a1[2];
	v69 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Soldier_SWAT", 0x1Cui64);
	v70 = a1[2];
	v256 = 4;
	v255 = v69;
	sub_14005EA50((__int64)a1, (__int64*)(v68 - 32), (int*)&v255, (unsigned int*)(v70 - 16));
	a1[2] -= 16i64;
	v71 = a1[2];
	*(_DWORD*)(v71 + 8) = 3;
	*(_QWORD*)v71 = 0x4020000000000000i64;
	a1[2] += 16i64;
	v72 = a1[2];
	v73 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Soldier_Script", 0x1Eui64);
	v74 = (unsigned int*)(a1[2] - 16i64);
	v255 = v73;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v72 - 32), (int*)&v255, v74);
	a1[2] -= 16i64;
	v75 = a1[2];
	*(_QWORD*)v75 = 0x4033000000000000i64;
	*(_DWORD*)(v75 + 8) = 3;
	a1[2] += 16i64;
	v76 = a1[2];
	v77 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Settler_Hub", 0x1Bui64);
	v78 = (unsigned int*)(a1[2] - 16i64);
	v255 = v77;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v76 - 32), (int*)&v255, v78);
	a1[2] -= 16i64;
	v79 = a1[2];
	*(_QWORD*)v79 = 0x4022000000000000i64;
	*(_DWORD*)(v79 + 8) = 3;
	a1[2] += 16i64;
	v80 = a1[2];
	v81 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Settler_Script", 0x1Eui64);
	v82 = (unsigned int*)(a1[2] - 16i64);
	v255 = v81;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v80 - 32), (int*)&v255, v82);
	a1[2] -= 16i64;
	v83 = a1[2];
	*(_QWORD*)v83 = 0x4035000000000000i64;
	*(_DWORD*)(v83 + 8) = 3;
	a1[2] += 16i64;
	v84 = a1[2];
	v85 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Settler_Infrastructure", 0x26ui64);
	v86 = (unsigned int*)(a1[2] - 16i64);
	v255 = v85;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v84 - 32), (int*)&v255, v86);
	a1[2] -= 16i64;
	v87 = a1[2];
	*(_DWORD*)(v87 + 8) = 3;
	*(_QWORD*)v87 = 0x4039000000000000i64;
	a1[2] += 16i64;
	v88 = a1[2];
	v89 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Settler_Mayor", 0x1Dui64);
	v90 = (unsigned int*)(a1[2] - 16i64);
	v255 = v89;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v88 - 32), (int*)&v255, v90);
	a1[2] -= 16i64;
	v91 = a1[2];
	*(_QWORD*)v91 = 0x403A000000000000i64;
	*(_DWORD*)(v91 + 8) = 3;
	a1[2] += 16i64;
	v92 = a1[2];
	v93 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Settler_Sheriff", 0x1Fui64);
	v94 = (unsigned int*)(a1[2] - 16i64);
	v255 = v93;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v92 - 32), (int*)&v255, v94);
	a1[2] -= 16i64;
	v95 = a1[2];
	*(_QWORD*)v95 = 0x403B000000000000i64;
	*(_DWORD*)(v95 + 8) = 3;
	a1[2] += 16i64;
	v96 = a1[2];
	v97 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Settler_Scout", 0x1Dui64);
	v98 = (unsigned int*)(a1[2] - 16i64);
	v255 = v97;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v96 - 32), (int*)&v255, v98);
	a1[2] -= 16i64;
	v99 = a1[2];
	*(_QWORD*)v99 = 0x4000000000000000i64;
	*(_DWORD*)(v99 + 8) = 3;
	a1[2] += 16i64;
	v100 = a1[2];
	v101 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_Scan", 0x1Eui64);
	v102 = (unsigned int*)(a1[2] - 16i64);
	v255 = v101;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v100 - 32), (int*)&v255, v102);
	a1[2] -= 16i64;
	v103 = a1[2];
	*(_QWORD*)v103 = 0x402C000000000000i64;
	*(_DWORD*)(v103 + 8) = 3;
	a1[2] += 16i64;
	v104 = a1[2];
	v105 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_ScanChecklist", 0x27ui64);
	v106 = (unsigned int*)(a1[2] - 16i64);
	v255 = v105;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v104 - 32), (int*)&v255, v106);
	a1[2] -= 16i64;
	v107 = a1[2];
	*(_QWORD*)v107 = 0x4034000000000000i64;
	*(_DWORD*)(v107 + 8) = 3;
	a1[2] += 16i64;
	v108 = a1[2];
	v109 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_FieldStudy", 0x24ui64);
	v110 = (unsigned int*)(a1[2] - 16i64);
	v255 = v109;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v108 - 32), (int*)&v255, v110);
	a1[2] -= 16i64;
	v111 = a1[2];
	*(_QWORD*)v111 = 0x4024000000000000i64;
	*(_DWORD*)(v111 + 8) = 3;
	a1[2] += 16i64;
	v112 = a1[2];
	v113 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_Script", 0x20ui64);
	v114 = (unsigned int*)(a1[2] - 16i64);
	v255 = v113;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v112 - 32), (int*)&v255, v114);
	a1[2] -= 16i64;
	v115 = a1[2];
	*(_QWORD*)v115 = 0x4036000000000000i64;
	*(_DWORD*)(v115 + 8) = 3;
	a1[2] += 16i64;
	v116 = a1[2];
	v117 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_Experimentation", 0x29ui64);
	v118 = (unsigned int*)(a1[2] - 16i64);
	v255 = v117;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v116 - 32), (int*)&v255, v118);
	a1[2] -= 16i64;
	v119 = a1[2];
	*(_QWORD*)v119 = 0x4037000000000000i64;
	*(_DWORD*)(v119 + 8) = 3;
	a1[2] += 16i64;
	v120 = a1[2];
	v255 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_SpecimenSurvey", 0x28ui64);
	v121 = (unsigned int*)(a1[2] - 16i64);
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v120 - 32), (int*)&v255, v121);
	a1[2] -= 16i64;
	v122 = a1[2];
	*(_DWORD*)(v122 + 8) = 3;
	*(_QWORD*)v122 = 0x4038000000000000i64;
	a1[2] += 16i64;
	v123 = a1[2];
	v124 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Scientist_DatacubeDiscovery", 0x2Bui64);
	v125 = (unsigned int*)(a1[2] - 16i64);
	v255 = v124;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v123 - 32), (int*)&v255, v125);
	a1[2] -= 16i64;
	v126 = a1[2];
	*(_QWORD*)v126 = 0x4008000000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = a1[2];
	v128 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_Area", 0x1Dui64);
	v129 = (unsigned int*)(a1[2] - 16i64);
	v255 = v128;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v127 - 32), (int*)&v255, v129);
	a1[2] -= 16i64;
	v130 = a1[2];
	*(_QWORD*)v130 = 0x4026000000000000i64;
	*(_DWORD*)(v130 + 8) = 3;
	a1[2] += 16i64;
	v131 = a1[2];
	v132 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_Script", 0x1Fui64);
	v133 = (unsigned int*)(a1[2] - 16i64);
	v255 = v132;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v131 - 32), (int*)&v255, v133);
	a1[2] -= 16i64;
	v134 = a1[2];
	*(_QWORD*)v134 = 0x4028000000000000i64;
	*(_DWORD*)(v134 + 8) = 3;
	a1[2] += 16i64;
	v135 = a1[2];
	v136 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_Door", 0x1Dui64);
	v137 = a1[2];
	v256 = 4;
	v255 = v136;
	sub_14005EA50((__int64)a1, (__int64*)(v135 - 32), (int*)&v255, (unsigned int*)(v137 - 16));
	a1[2] -= 16i64;
	v138 = a1[2];
	*(_DWORD*)(v138 + 8) = 3;
	*(_QWORD*)v138 = 0x402A000000000000i64;
	a1[2] += 16i64;
	v139 = a1[2];
	v140 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_ScavengerHunt", 0x26ui64);
	v141 = (unsigned int*)(a1[2] - 16i64);
	v255 = v140;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v139 - 32), (int*)&v255, v141);
	a1[2] -= 16i64;
	v142 = a1[2];
	*(_QWORD*)v142 = 0x402E000000000000i64;
	*(_DWORD*)(v142 + 8) = 3;
	a1[2] += 16i64;
	v143 = a1[2];
	v144 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_Vista", 0x1Eui64);
	v145 = (unsigned int*)(a1[2] - 16i64);
	v255 = v144;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v143 - 32), (int*)&v255, v145);
	a1[2] -= 16i64;
	v146 = a1[2];
	*(_QWORD*)v146 = 0x4030000000000000i64;
	*(_DWORD*)(v146 + 8) = 3;
	a1[2] += 16i64;
	v147 = a1[2];
	v148 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_ExploreZone", 0x24ui64);
	v149 = (unsigned int*)(a1[2] - 16i64);
	v255 = v148;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v147 - 32), (int*)&v255, v149);
	a1[2] -= 16i64;
	v150 = a1[2];
	*(_QWORD*)v150 = 0x4031000000000000i64;
	*(_DWORD*)(v150 + 8) = 3;
	a1[2] += 16i64;
	v151 = a1[2];
	v152 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_ActivateChecklist", 0x2Aui64);
	v153 = (unsigned int*)(a1[2] - 16i64);
	v255 = v152;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v151 - 32), (int*)&v255, v153);
	a1[2] -= 16i64;
	v154 = a1[2];
	*(_QWORD*)v154 = 0x4032000000000000i64;
	*(_DWORD*)(v154 + 8) = 3;
	a1[2] += 16i64;
	v155 = a1[2];
	v156 = sub_140062650((__int64)a1, (unsigned __int64*)"PathMissionType_Explorer_PowerMap", 0x21ui64);
	v157 = (unsigned int*)(a1[2] - 16i64);
	v255 = v156;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v155 - 32), (int*)&v255, v157);
	a1[2] -= 16i64;
	v158 = a1[2];
	*(_QWORD*)v158 = 0i64;
	*(_DWORD*)(v158 + 8) = 3;
	a1[2] += 16i64;
	v159 = a1[2];
	v160 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailUnknown", 0x23ui64);
	v161 = (unsigned int*)(a1[2] - 16i64);
	v255 = v160;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v159 - 32), (int*)&v255, v161);
	a1[2] -= 16i64;
	v162 = a1[2];
	*(_QWORD*)v162 = 0x3FF0000000000000i64;
	*(_DWORD*)(v162 + 8) = 3;
	a1[2] += 16i64;
	v163 = a1[2];
	v164 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailTimeOut", 0x23ui64);
	v165 = (unsigned int*)(a1[2] - 16i64);
	v255 = v164;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v163 - 32), (int*)&v255, v165);
	a1[2] -= 16i64;
	v166 = a1[2];
	*(_QWORD*)v166 = 0x4000000000000000i64;
	*(_DWORD*)(v166 + 8) = 3;
	a1[2] += 16i64;
	v167 = a1[2];
	v168 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailDefenceDeath", 0x28ui64);
	v169 = (unsigned int*)(a1[2] - 16i64);
	v255 = v168;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v167 - 32), (int*)&v255, v169);
	a1[2] -= 16i64;
	v170 = a1[2];
	*(_QWORD*)v170 = 0x4010000000000000i64;
	*(_DWORD*)(v170 + 8) = 3;
	a1[2] += 16i64;
	v171 = a1[2];
	v172 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailNoParticipants", 0x2Aui64);
	v173 = (unsigned int*)(a1[2] - 16i64);
	v255 = v172;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v171 - 32), (int*)&v255, v173);
	a1[2] -= 16i64;
	v174 = a1[2];
	*(_QWORD*)v174 = 0x4014000000000000i64;
	*(_DWORD*)(v174 + 8) = 3;
	a1[2] += 16i64;
	v175 = a1[2];
	v176 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailLeaveArea", 0x25ui64);
	v177 = (unsigned int*)(a1[2] - 16i64);
	v255 = v176;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v175 - 32), (int*)&v255, v177);
	a1[2] -= 16i64;
	v178 = a1[2];
	*(_QWORD*)v178 = 0x4018000000000000i64;
	*(_DWORD*)(v178 + 8) = 3;
	a1[2] += 16i64;
	v179 = a1[2];
	v180 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailDeath", 0x21ui64);
	v181 = (unsigned int*)(a1[2] - 16i64);
	v255 = v180;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v179 - 32), (int*)&v255, v181);
	a1[2] -= 16i64;
	v182 = a1[2];
	*(_QWORD*)v182 = 0x4008000000000000i64;
	*(_DWORD*)(v182 + 8) = 3;
	a1[2] += 16i64;
	v183 = a1[2];
	v184 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailLostResources", 0x29ui64);
	v185 = (unsigned int*)(a1[2] - 16i64);
	v255 = v184;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v183 - 32), (int*)&v255, v185);
	a1[2] -= 16i64;
	v186 = a1[2];
	*(_QWORD*)v186 = 0x401C000000000000i64;
	*(_DWORD*)(v186 + 8) = 3;
	a1[2] += 16i64;
	v187 = a1[2];
	v188 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_FailParticipation", 0x29ui64);
	v189 = a1[2];
	v256 = 4;
	v255 = v188;
	sub_14005EA50((__int64)a1, (__int64*)(v187 - 32), (int*)&v255, (unsigned int*)(v189 - 16));
	a1[2] -= 16i64;
	v190 = a1[2];
	*(_QWORD*)v190 = 0x4020000000000000i64;
	*(_DWORD*)(v190 + 8) = 3;
	a1[2] += 16i64;
	v191 = a1[2];
	v192 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_ScriptCancel", 0x24ui64);
	v193 = (unsigned int*)(a1[2] - 16i64);
	v255 = v192;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v191 - 32), (int*)&v255, v193);
	a1[2] -= 16i64;
	v194 = a1[2];
	*(_QWORD*)v194 = 0x4022000000000000i64;
	*(_DWORD*)(v194 + 8) = 3;
	a1[2] += 16i64;
	v195 = a1[2];
	v196 = sub_140062650((__int64)a1, (unsigned __int64*)"PlayerPathSoldierResult_Success", 0x1Fui64);
	v197 = (unsigned int*)(a1[2] - 16i64);
	v255 = v196;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v195 - 32), (int*)&v255, v197);
	a1[2] -= 16i64;
	v198 = a1[2];
	*(_QWORD*)v198 = 0i64;
	*(_DWORD*)(v198 + 8) = 3;
	a1[2] += 16i64;
	v199 = a1[2];
	v200 = sub_140062650((__int64)a1, (unsigned __int64*)"PathSoldierEventType_Holdout", 0x1Cui64);
	v201 = (unsigned int*)(a1[2] - 16i64);
	v255 = v200;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v199 - 32), (int*)&v255, v201);
	a1[2] -= 16i64;
	v202 = a1[2];
	*(_QWORD*)v202 = 0x3FF0000000000000i64;
	*(_DWORD*)(v202 + 8) = 3;
	a1[2] += 16i64;
	v203 = a1[2];
	v204 = sub_140062650((__int64)a1, (unsigned __int64*)"PathSoldierEventType_Defend", 0x1Bui64);
	v205 = (unsigned int*)(a1[2] - 16i64);
	v255 = v204;
	v256 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v203 - 32), (int*)&v255, v205);
	a1[2] -= 16i64;
	v206 = a1[2];
	*(_QWORD*)v206 = 0x4000000000000000i64;
	*(_DWORD*)(v206 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v207 = a1[2];
	*(_QWORD*)v207 = 0x4008000000000000i64;
	*(_DWORD*)(v207 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v208 = a1[2];
	*(_QWORD*)v208 = 0x4010000000000000i64;
	*(_DWORD*)(v208 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v209 = a1[2];
	*(_QWORD*)v209 = 0x4014000000000000i64;
	*(_DWORD*)(v209 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v210 = a1[2];
	*(_QWORD*)v210 = 0x4018000000000000i64;
	*(_DWORD*)(v210 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v211 = a1[2];
	*(_QWORD*)v211 = 0x401C000000000000i64;
	*(_DWORD*)(v211 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v212 = a1[2];
	*(_QWORD*)v212 = 0x4020000000000000i64;
	*(_DWORD*)(v212 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v213 = a1[2];
	*(_QWORD*)v213 = 0i64;
	*(_DWORD*)(v213 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v214 = a1[2];
	*(_QWORD*)v214 = 0x3FF0000000000000i64;
	*(_DWORD*)(v214 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v215 = a1[2];
	*(_QWORD*)v215 = 0x4000000000000000i64;
	*(_DWORD*)(v215 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v216 = a1[2];
	*(_QWORD*)v216 = 0x4008000000000000i64;
	*(_DWORD*)(v216 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v217 = a1[2];
	*(_QWORD*)v217 = 0i64;
	*(_DWORD*)(v217 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v218 = a1[2];
	*(_QWORD*)v218 = 0x3FF0000000000000i64;
	*(_DWORD*)(v218 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v219 = a1[2];
	*(_QWORD*)v219 = 0x4000000000000000i64;
	*(_DWORD*)(v219 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v220 = a1[2];
	*(_QWORD*)v220 = 0i64;
	*(_DWORD*)(v220 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v221 = a1[2];
	*(_QWORD*)v221 = 0x4000000000000000i64;
	*(_DWORD*)(v221 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v222 = a1[2];
	*(_QWORD*)v222 = 0x3FF0000000000000i64;
	*(_DWORD*)(v222 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v223 = a1[2];
	*(_QWORD*)v223 = 0i64;
	*(_DWORD*)(v223 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v224 = a1[2];
	*(_QWORD*)v224 = 0x4000000000000000i64;
	*(_DWORD*)(v224 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v225 = a1[2];
	*(_QWORD*)v225 = 0x3FF0000000000000i64;
	*(_DWORD*)(v225 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v226 = a1[2];
	*(_QWORD*)v226 = 0x4008000000000000i64;
	*(_DWORD*)(v226 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v227 = a1[2];
	*(_QWORD*)v227 = 0x4010000000000000i64;
	*(_DWORD*)(v227 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v228 = a1[2];
	*(_QWORD*)v228 = 0x3FF0000000000000i64;
	*(_DWORD*)(v228 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v229 = a1[2];
	*(_QWORD*)v229 = 0i64;
	*(_DWORD*)(v229 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v230 = a1[2];
	*(_QWORD*)v230 = 0x4000000000000000i64;
	*(_DWORD*)(v230 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v231 = a1[2];
	*(_QWORD*)v231 = 0i64;
	*(_DWORD*)(v231 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v232 = a1[2];
	*(_QWORD*)v232 = 0x3FF0000000000000i64;
	*(_DWORD*)(v232 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v233 = a1[2];
	*(_QWORD*)v233 = 0x4000000000000000i64;
	*(_DWORD*)(v233 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v234 = a1[2];
	*(_QWORD*)v234 = 0i64;
	*(_DWORD*)(v234 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v235 = a1[2];
	*(_QWORD*)v235 = 0x3FF0000000000000i64;
	*(_DWORD*)(v235 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v236 = a1[2];
	*(_QWORD*)v236 = 0x4000000000000000i64;
	*(_DWORD*)(v236 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v237 = a1[2];
	*(_QWORD*)v237 = 0x4008000000000000i64;
	*(_DWORD*)(v237 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v238 = a1[2];
	*(_QWORD*)v238 = 0x4010000000000000i64;
	*(_DWORD*)(v238 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v239 = a1[2];
	*(_QWORD*)v239 = 0x4014000000000000i64;
	*(_DWORD*)(v239 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v240 = a1[2];
	*(_QWORD*)v240 = 0x4018000000000000i64;
	*(_DWORD*)(v240 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	sub_1400EFF50((__int64)a1, v241, (unsigned __int64*)"Behavior_Food", 1);
	sub_1400EFF50((__int64)a1, v242, (unsigned __int64*)"Behavior_Sleep", 2);
	sub_1400EFF50((__int64)a1, v243, (unsigned __int64*)"Behavior_Aggressive", 3);
	sub_1400EFF50((__int64)a1, v244, (unsigned __int64*)"Behavior_Love", 5);
	sub_1400EFF50((__int64)a1, v245, (unsigned __int64*)"Behavior_Working", 6);
	sub_1400EFF50((__int64)a1, v246, (unsigned __int64*)"Behavior_Hunting", 7);
	sub_1400EFF50((__int64)a1, v247, (unsigned __int64*)"Behavior_Scared", 8);
	sub_1400EFF50((__int64)a1, v248, (unsigned __int64*)"Behavior_Happy", 9);
	sub_1400EFF50((__int64)a1, v249, (unsigned __int64*)"Behavior_Singing", 10);
	sub_1400EFF50((__int64)a1, v250, (unsigned __int64*)"Behavior_Injured", 11);
	sub_1400EFF50((__int64)a1, v251, (unsigned __int64*)"Behavior_Guarding", 12);
	sub_1400EFF50((__int64)a1, v252, (unsigned __int64*)"Behavior_Socializing", 13);
	sub_1400F0490((__int64)a1, v253, (unsigned __int64*)"PathMissionDisplayType", (__int64)&off_140C33EF0, 0x1Fu);
	return 1i64;
}
// 140679F63: variable 'v14' is possibly undefined
// 14067B62E: variable 'v241' is possibly undefined
// 14067B643: variable 'v242' is possibly undefined
// 14067B658: variable 'v243' is possibly undefined
// 14067B66D: variable 'v244' is possibly undefined
// 14067B682: variable 'v245' is possibly undefined
// 14067B697: variable 'v246' is possibly undefined
// 14067B6AC: variable 'v247' is possibly undefined
// 14067B6C1: variable 'v248' is possibly undefined
// 14067B6D6: variable 'v249' is possibly undefined
// 14067B6EB: variable 'v250' is possibly undefined
// 14067B700: variable 'v251' is possibly undefined
// 14067B715: variable 'v252' is possibly undefined
// 14067B733: variable 'v253' is possibly undefined
// 140B6FE10: using guessed type void *off_140B6FE10;
// 140C33EF0: using guessed type wchar_t *off_140C33EF0;
// 140C5C490: using guessed type char *off_140C5C490;

