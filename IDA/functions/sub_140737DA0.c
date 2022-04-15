#include "../winhttp.h"

//----- (0000000140737DA0) ----------------------------------------------------
__int64 __fastcall sub_140737DA0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rax
	__int64* v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rbx
	__int64 v53; // rax
	__int64 v54; // rax
	__int64* v55; // rax
	__int64 v56; // rax
	__int64* v57; // rax
	__int64 v58; // rax
	__int64* v59; // rax
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // rax
	__int64* v69; // rax
	__int64 v70; // rbx
	__int64 v71; // rax
	__int64 v72; // rax
	__int64* v73; // rax
	__int64 v74; // rax
	__int64* v75; // rax
	__int64 v76; // rax
	__int64* v77; // rax
	__int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rax
	__int64* v83; // rax
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rbx
	__int64 v91; // rax
	__int64 v92; // rax
	__int64* v93; // rax
	__int64 v94; // rax
	__int64* v95; // rax
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // rax
	__int64* v99; // rax
	__int64 v100; // rax
	__int64* v101; // rax
	__int64 v102; // rax
	__int64* v103; // rax
	__int64 v104; // rbx
	__int64 v105; // rax
	__int64 v106; // rax
	__int64* v107; // rax
	__int64 v108; // rax
	__int64* v109; // rax
	__int64 v110; // rax
	__int64* v111; // rax
	__int64 v112; // rax
	__int64* v113; // rax
	__int64 v114; // rax
	__int64* v115; // rax
	__int64 v116; // rax
	__int64* v117; // rax
	__int64 v118; // rax
	__int64* v119; // rax
	__int64 v120; // rbx
	__int64 v121; // rax
	__int64 v122; // rax
	__int64* v123; // rax
	__int64 v124; // rax
	__int64* v125; // rax
	__int64 v126; // rax
	__int64* v127; // rax
	__int64 v128; // rax
	int v129; // ecx
	__int64 v130; // rax
	__int64 v131; // rbx
	__int64 v132; // rax
	unsigned int* v133; // r9
	__int64 v134; // rax
	__int64 v135; // rbx
	__int64 v136; // rax
	unsigned int* v137; // r9
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
	__int64 v165; // r9
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
	__int64 v183; // rax
	__int64 v184; // rax
	__int64 v185; // rax
	__int64 v186; // rax
	__int64 v187; // rax
	__int64 v188; // rax
	__int64 v189; // rax
	__int64 v190; // rax
	__int64 v191; // rax
	__int64 v192; // rax
	__int64 v193; // rax
	__int64 v194; // rax
	__int64 v195; // rax
	__int64 v196; // rax
	__int64 v197; // rax
	__int64 v198; // rax
	__int64 v199; // rax
	__int64 v200; // rax
	__int64 v201; // rax
	__int64 v202; // rax
	__int64 v203; // rax
	__int64 v204; // rax
	__int64 v205; // rax
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
	__int64 v223; // rdx
	__int64 v224; // rdx
	__int64 v225; // rdx
	__int64 v226; // rdx
	__int64 v227; // rdx
	__int64 v228; // rdx
	__int64 v230; // [rsp+20h] [rbp-10h] BYREF
	int v231; // [rsp+28h] [rbp-8h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Housing");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v230 = v4;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v230, v5);
	a1[2] -= 16i64;
	sub_140057020(a1, "HousingLib", &off_140B747A0);
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingLib", 0xAui64);
	v7 = a1[2];
	v230 = v6;
	v231 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v230, v7);
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumDecorHookType", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Roof", 4ui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0x3FF0000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Entryway", 8ui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4000000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Door", 4ui64);
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Wallpaper", 9ui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0x4010000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"FreePlace", 9ui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x4014000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"WarplotFreePlace", 0x10ui64);
	v20 = a1[2];
	*(_QWORD*)v20 = 0x4018000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DefaultHook", 0xBui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0x401C000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Crate", 5ui64);
	v24 = a1[2];
	*(_QWORD*)v24 = 0x4020000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Landscape", 9ui64);
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4022000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Mannequin", 9ui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0x4024000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"HousingUpkeepType", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v30 = a1[2];
	v31 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v30 + 8) = 5;
	*(_QWORD*)v30 = v31;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Permanent", 9ui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Timed", 5ui64);
	v34 = a1[2];
	*(_QWORD*)v34 = 0x3FF0000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Charged", 7ui64);
	v36 = a1[2];
	*(_QWORD*)v36 = 0x4000000000000000i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TimedCharged", 0xCui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0x4008000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Decay", 5ui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4010000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"StructurePoints", 0xFui64);
	v42 = a1[2];
	*(_QWORD*)v42 = 0x4014000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	a1[2] += 16i64;
	v43 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v43, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NeighborPermissionLevel", 0x17ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v44 = a1[2];
	v45 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v44 + 8) = 5;
	*(_QWORD*)v44 = v45;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Normal", 6ui64);
	v46 = a1[2];
	*(_QWORD*)v46 = 0i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Roommate", 8ui64);
	v48 = a1[2];
	*(_QWORD*)v48 = 0x3FF0000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Account", 7ui64);
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4000000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ResidencePrivileges", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v52 = a1[2];
	v53 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v52 + 8) = 5;
	*(_QWORD*)v52 = v53;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"None", 4ui64);
	v54 = a1[2];
	*(_QWORD*)v54 = 0i64;
	*(_DWORD*)(v54 + 8) = 3;
	a1[2] += 16i64;
	v55 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v55, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Owner", 5ui64);
	v56 = a1[2];
	*(_QWORD*)v56 = 0x3FF0000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	a1[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v57, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Roommate", 8ui64);
	v58 = a1[2];
	*(_QWORD*)v58 = 0x4000000000000000i64;
	*(_DWORD*)(v58 + 8) = 3;
	a1[2] += 16i64;
	v59 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v59, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ResidencePrivacyLevel", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v60 = a1[2];
	v61 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v60 + 8) = 5;
	*(_QWORD*)v60 = v61;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Public", 6ui64);
	v62 = a1[2];
	*(_QWORD*)v62 = 0i64;
	*(_DWORD*)(v62 + 8) = 3;
	a1[2] += 16i64;
	v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NeighborsOnly", 0xDui64);
	v64 = a1[2];
	*(_QWORD*)v64 = 0x3FF0000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RoommatesOnly", 0xDui64);
	v66 = a1[2];
	*(_QWORD*)v66 = 0x4000000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	a1[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v67, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Private", 7ui64);
	v68 = a1[2];
	*(_QWORD*)v68 = 0x4008000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	a1[2] += 16i64;
	v69 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v69, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DecorCategoryLimit", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v70 = a1[2];
	v71 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v70 + 8) = 5;
	*(_QWORD*)v70 = v71;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Mannequin", 9ui64);
	v72 = a1[2];
	*(_QWORD*)v72 = 0x3FF0000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	a1[2] += 16i64;
	v73 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v73, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Light", 5ui64);
	v74 = a1[2];
	*(_QWORD*)v74 = 0x4000000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v75, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Special", 7ui64);
	v76 = a1[2];
	*(_QWORD*)v76 = 0x4010000000000000i64;
	*(_DWORD*)(v76 + 8) = 3;
	a1[2] += 16i64;
	v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ResidenceCustomizationMode", 0x1Aui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v78 = a1[2];
	v79 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v78 + 8) = 5;
	*(_QWORD*)v78 = v79;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Advanced", 8ui64);
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4008000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Simple", 6ui64);
	v82 = a1[2];
	*(_QWORD*)v82 = 0x4010000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DecorControlMode", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v84 = a1[2];
	v85 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v84 + 8) = 5;
	*(_QWORD*)v84 = v85;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Local", 5ui64);
	v86 = a1[2];
	*(_QWORD*)v86 = 0x3FF0000000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	a1[2] += 16i64;
	v87 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v87, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Global", 6ui64);
	v88 = a1[2];
	*(_QWORD*)v88 = 0i64;
	*(_DWORD*)(v88 + 8) = 3;
	a1[2] += 16i64;
	v89 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v89, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RemodelOptionTypeInterior", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v90 = a1[2];
	v91 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v90 + 8) = 5;
	*(_QWORD*)v90 = v91;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Wallpaper", 9ui64);
	v92 = a1[2];
	*(_QWORD*)v92 = 0x3FF0000000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	a1[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Floor", 5ui64);
	v94 = a1[2];
	*(_QWORD*)v94 = 0x4000000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	a1[2] += 16i64;
	v95 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v95, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ceiling", 7ui64);
	v96 = a1[2];
	*(_QWORD*)v96 = 0x4008000000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	a1[2] += 16i64;
	v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Trim", 4ui64);
	v98 = a1[2];
	*(_QWORD*)v98 = 0x4010000000000000i64;
	*(_DWORD*)(v98 + 8) = 3;
	a1[2] += 16i64;
	v99 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v99, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Lighting", 8ui64);
	v100 = a1[2];
	*(_QWORD*)v100 = 0x4014000000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v101, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Music", 5ui64);
	v102 = a1[2];
	*(_QWORD*)v102 = 0x4018000000000000i64;
	*(_DWORD*)(v102 + 8) = 3;
	a1[2] += 16i64;
	v103 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v103, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RemodelOptionTypeExterior", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v104 = a1[2];
	v105 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v104 + 8) = 5;
	*(_QWORD*)v104 = v105;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Roof", 4ui64);
	v106 = a1[2];
	*(_QWORD*)v106 = 0x3FF0000000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	a1[2] += 16i64;
	v107 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v107, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Wallpaper", 9ui64);
	v108 = a1[2];
	*(_QWORD*)v108 = 0x4000000000000000i64;
	*(_DWORD*)(v108 + 8) = 3;
	a1[2] += 16i64;
	v109 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v109, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Entry", 5ui64);
	v110 = a1[2];
	*(_QWORD*)v110 = 0x4008000000000000i64;
	*(_DWORD*)(v110 + 8) = 3;
	a1[2] += 16i64;
	v111 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v111, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Door", 4ui64);
	v112 = a1[2];
	*(_QWORD*)v112 = 0x4010000000000000i64;
	*(_DWORD*)(v112 + 8) = 3;
	a1[2] += 16i64;
	v113 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v113, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Sky", 3ui64);
	v114 = a1[2];
	*(_QWORD*)v114 = 0x4014000000000000i64;
	*(_DWORD*)(v114 + 8) = 3;
	a1[2] += 16i64;
	v115 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v115, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Music", 5ui64);
	v116 = a1[2];
	*(_QWORD*)v116 = 0x4018000000000000i64;
	*(_DWORD*)(v116 + 8) = 3;
	a1[2] += 16i64;
	v117 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v117, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ground", 6ui64);
	v118 = a1[2];
	*(_QWORD*)v118 = 0x401C000000000000i64;
	*(_DWORD*)(v118 + 8) = 3;
	a1[2] += 16i64;
	v119 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v119, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RemodelOptionTypeCommunity", 0x1Aui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v120 = a1[2];
	v121 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v120 + 8) = 5;
	*(_QWORD*)v120 = v121;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, qword_1409F92AC, 3ui64);
	v122 = a1[2];
	*(_QWORD*)v122 = 0x3FF0000000000000i64;
	*(_DWORD*)(v122 + 8) = 3;
	a1[2] += 16i64;
	v123 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v123, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Music", 5ui64);
	v124 = a1[2];
	*(_QWORD*)v124 = 0x4000000000000000i64;
	*(_DWORD*)(v124 + 8) = 3;
	a1[2] += 16i64;
	v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ground", 6ui64);
	v126 = a1[2];
	*(_QWORD*)v126 = 0x4008000000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v127, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v128 = sub_140200220(0x337u);
	if (v128)
		v129 = *(_DWORD*)(v128 + 4);
	else
		v129 = 10000;
	v130 = a1[2];
	*(_DWORD*)(v130 + 8) = 3;
	*(double*)v130 = (double)v129;
	a1[2] += 16i64;
	v131 = a1[2];
	v132 = sub_140062650((__int64)a1, (unsigned __int64*)"PropertyRenameCost", 0x12ui64);
	v133 = (unsigned int*)(a1[2] - 16i64);
	v230 = v132;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v131 - 32), (int*)&v230, v133);
	a1[2] -= 16i64;
	v134 = a1[2];
	*(_QWORD*)v134 = 0i64;
	*(_DWORD*)(v134 + 8) = 3;
	a1[2] += 16i64;
	v135 = a1[2];
	v136 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Success", 0x15ui64);
	v137 = (unsigned int*)(a1[2] - 16i64);
	v230 = v136;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v135 - 32), (int*)&v230, v137);
	a1[2] -= 16i64;
	v138 = a1[2];
	*(_QWORD*)v138 = 0x3FF0000000000000i64;
	*(_DWORD*)(v138 + 8) = 3;
	a1[2] += 16i64;
	v139 = a1[2];
	v140 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Failed", 0x14ui64);
	v141 = (unsigned int*)(a1[2] - 16i64);
	v230 = v140;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v139 - 32), (int*)&v230, v141);
	a1[2] -= 16i64;
	v142 = a1[2];
	*(_QWORD*)v142 = 0x4000000000000000i64;
	*(_DWORD*)(v142 + 8) = 3;
	a1[2] += 16i64;
	v143 = a1[2];
	v144 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_Success", 0x1Eui64);
	v145 = (unsigned int*)(a1[2] - 16i64);
	v230 = v144;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v143 - 32), (int*)&v230, v145);
	a1[2] -= 16i64;
	v146 = a1[2];
	*(_QWORD*)v146 = 0x4028000000000000i64;
	*(_DWORD*)(v146 + 8) = 3;
	a1[2] += 16i64;
	v147 = a1[2];
	v148 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_RequestTimedOut", 0x26ui64);
	v149 = (unsigned int*)(a1[2] - 16i64);
	v230 = v148;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v147 - 32), (int*)&v230, v149);
	a1[2] -= 16i64;
	v150 = a1[2];
	*(_QWORD*)v150 = 0x402A000000000000i64;
	*(_DWORD*)(v150 + 8) = 3;
	a1[2] += 16i64;
	v151 = a1[2];
	v152 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_RequestDeclined", 0x26ui64);
	v153 = (unsigned int*)(a1[2] - 16i64);
	v230 = v152;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v151 - 32), (int*)&v230, v153);
	a1[2] -= 16i64;
	v154 = a1[2];
	*(_QWORD*)v154 = 0x4008000000000000i64;
	*(_DWORD*)(v154 + 8) = 3;
	a1[2] += 16i64;
	v155 = a1[2];
	v156 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_PlayerNotFound", 0x25ui64);
	v157 = (unsigned int*)(a1[2] - 16i64);
	v230 = v156;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v155 - 32), (int*)&v230, v157);
	a1[2] -= 16i64;
	v158 = a1[2];
	*(_QWORD*)v158 = 0x4010000000000000i64;
	*(_DWORD*)(v158 + 8) = 3;
	a1[2] += 16i64;
	v159 = a1[2];
	v160 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_PlayerNotOnline", 0x26ui64);
	v161 = (unsigned int*)(a1[2] - 16i64);
	v230 = v160;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v159 - 32), (int*)&v230, v161);
	a1[2] -= 16i64;
	v162 = a1[2];
	*(_QWORD*)v162 = 0x4014000000000000i64;
	*(_DWORD*)(v162 + 8) = 3;
	a1[2] += 16i64;
	v163 = a1[2];
	v164 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_PlayerNotAHomeowner", 0x2Aui64);
	v165 = a1[2];
	v231 = 4;
	v230 = v164;
	sub_14005EA50((__int64)a1, (__int64*)(v163 - 32), (int*)&v230, (unsigned int*)(v165 - 16));
	a1[2] -= 16i64;
	v166 = a1[2];
	*(_DWORD*)(v166 + 8) = 3;
	*(_QWORD*)v166 = 0x4018000000000000i64;
	a1[2] += 16i64;
	v167 = a1[2];
	v168 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_PlayerDoesntExist", 0x28ui64);
	v169 = (unsigned int*)(a1[2] - 16i64);
	v230 = v168;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v167 - 32), (int*)&v230, v169);
	a1[2] -= 16i64;
	v170 = a1[2];
	*(_QWORD*)v170 = 0x401C000000000000i64;
	*(_DWORD*)(v170 + 8) = 3;
	a1[2] += 16i64;
	v171 = a1[2];
	v172 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_InvalidNeighbor", 0x26ui64);
	v173 = (unsigned int*)(a1[2] - 16i64);
	v230 = v172;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v171 - 32), (int*)&v230, v173);
	a1[2] -= 16i64;
	v174 = a1[2];
	*(_QWORD*)v174 = 0x4020000000000000i64;
	*(_DWORD*)(v174 + 8) = 3;
	a1[2] += 16i64;
	v175 = a1[2];
	v176 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_AlreadyNeighbors", 0x27ui64);
	v177 = (unsigned int*)(a1[2] - 16i64);
	v230 = v176;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v175 - 32), (int*)&v230, v177);
	a1[2] -= 16i64;
	v178 = a1[2];
	*(_QWORD*)v178 = 0x4022000000000000i64;
	*(_DWORD*)(v178 + 8) = 3;
	a1[2] += 16i64;
	v179 = a1[2];
	v180 = sub_140062650((__int64)a1, (unsigned __int64*)"HousingResult_Neighbor_NoPendingInvite", 0x26ui64);
	v181 = (unsigned int*)(a1[2] - 16i64);
	v230 = v180;
	v231 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v179 - 32), (int*)&v230, v181);
	a1[2] -= 16i64;
	v182 = a1[2];
	*(_QWORD*)v182 = 0x4024000000000000i64;
	*(_DWORD*)(v182 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v183 = a1[2];
	*(_QWORD*)v183 = 0x4026000000000000i64;
	*(_DWORD*)(v183 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v184 = a1[2];
	*(_QWORD*)v184 = 0x4045800000000000i64;
	*(_DWORD*)(v184 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v185 = a1[2];
	*(_QWORD*)v185 = 0x4046000000000000i64;
	*(_DWORD*)(v185 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v186 = a1[2];
	*(_QWORD*)v186 = 0x4047000000000000i64;
	*(_DWORD*)(v186 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v187 = a1[2];
	*(_QWORD*)v187 = 0x403A000000000000i64;
	*(_DWORD*)(v187 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v188 = a1[2];
	*(_QWORD*)v188 = 0x403B000000000000i64;
	*(_DWORD*)(v188 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v189 = a1[2];
	*(_QWORD*)v189 = 0x402C000000000000i64;
	*(_DWORD*)(v189 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v190 = a1[2];
	*(_QWORD*)v190 = 0x402E000000000000i64;
	*(_DWORD*)(v190 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v191 = a1[2];
	*(_QWORD*)v191 = 0x4030000000000000i64;
	*(_DWORD*)(v191 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v192 = a1[2];
	*(_QWORD*)v192 = 0x4031000000000000i64;
	*(_DWORD*)(v192 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v193 = a1[2];
	*(_QWORD*)v193 = 0x4032000000000000i64;
	*(_DWORD*)(v193 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v194 = a1[2];
	*(_QWORD*)v194 = 0x4033000000000000i64;
	*(_DWORD*)(v194 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v195 = a1[2];
	*(_QWORD*)v195 = 0x4037000000000000i64;
	*(_DWORD*)(v195 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v196 = a1[2];
	*(_QWORD*)v196 = 0x4034000000000000i64;
	*(_DWORD*)(v196 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v197 = a1[2];
	*(_QWORD*)v197 = 0x4035000000000000i64;
	*(_DWORD*)(v197 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v198 = a1[2];
	*(_QWORD*)v198 = 0x4036000000000000i64;
	*(_DWORD*)(v198 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v199 = a1[2];
	*(_QWORD*)v199 = 0x4038000000000000i64;
	*(_DWORD*)(v199 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v200 = a1[2];
	*(_QWORD*)v200 = 0x4039000000000000i64;
	*(_DWORD*)(v200 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v201 = a1[2];
	*(_QWORD*)v201 = 0x403C000000000000i64;
	*(_DWORD*)(v201 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v202 = a1[2];
	*(_QWORD*)v202 = 0x403D000000000000i64;
	*(_DWORD*)(v202 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v203 = a1[2];
	*(_QWORD*)v203 = 0x403E000000000000i64;
	*(_DWORD*)(v203 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v204 = a1[2];
	*(_QWORD*)v204 = 0x403F000000000000i64;
	*(_DWORD*)(v204 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v205 = a1[2];
	*(_QWORD*)v205 = 0x4045000000000000i64;
	*(_DWORD*)(v205 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v206 = a1[2];
	*(_QWORD*)v206 = 0x4046800000000000i64;
	*(_DWORD*)(v206 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v207 = a1[2];
	*(_QWORD*)v207 = 0x4040000000000000i64;
	*(_DWORD*)(v207 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v208 = a1[2];
	*(_QWORD*)v208 = 0x4040800000000000i64;
	*(_DWORD*)(v208 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v209 = a1[2];
	*(_QWORD*)v209 = 0x4041000000000000i64;
	*(_DWORD*)(v209 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v210 = a1[2];
	*(_QWORD*)v210 = 0x4041800000000000i64;
	*(_DWORD*)(v210 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v211 = a1[2];
	*(_QWORD*)v211 = 0x4042000000000000i64;
	*(_DWORD*)(v211 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v212 = a1[2];
	*(_QWORD*)v212 = 0x4042800000000000i64;
	*(_DWORD*)(v212 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v213 = a1[2];
	*(_QWORD*)v213 = 0x4044800000000000i64;
	*(_DWORD*)(v213 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v214 = a1[2];
	*(_QWORD*)v214 = 0x4043000000000000i64;
	*(_DWORD*)(v214 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v215 = a1[2];
	*(_QWORD*)v215 = 0x4043800000000000i64;
	*(_DWORD*)(v215 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v216 = a1[2];
	*(_QWORD*)v216 = 0x4047800000000000i64;
	*(_DWORD*)(v216 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v217 = a1[2];
	*(_QWORD*)v217 = 0x4048000000000000i64;
	*(_DWORD*)(v217 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v218 = a1[2];
	*(_QWORD*)v218 = 0x4048800000000000i64;
	*(_DWORD*)(v218 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v219 = a1[2];
	*(_QWORD*)v219 = 0x404B000000000000i64;
	*(_DWORD*)(v219 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v220 = a1[2];
	*(_QWORD*)v220 = 0x404E800000000000i64;
	*(_DWORD*)(v220 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v221 = a1[2];
	*(_QWORD*)v221 = 0x404F000000000000i64;
	*(_DWORD*)(v221 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	v222 = a1[2];
	*(_QWORD*)v222 = 0x4050400000000000i64;
	*(_DWORD*)(v222 + 8) = 3;
	a1[2] += 16i64;
	sub_140058A40((__int64)a1, -2);
	sub_140058710((__int64)a1, (unsigned __int64*)"HousingPlugFacing", 0x11ui64);
	sub_140058900((__int64)a1, v223, 0);
	sub_1400EFF50((__int64)a1, v224, (unsigned __int64*)"North", 0);
	sub_1400EFF50((__int64)a1, v225, (unsigned __int64*)"South", 1);
	sub_1400EFF50((__int64)a1, v226, (unsigned __int64*)"East", 2);
	sub_1400EFF50((__int64)a1, v227, (unsigned __int64*)"West", 3);
	sub_1400EFF50((__int64)a1, v228, (unsigned __int64*)"Default", 4);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058A40((__int64)a1, -10002);
	return 1i64;
}
// 140739F9E: variable 'v223' is possibly undefined
// 140739FB0: variable 'v224' is possibly undefined
// 140739FC5: variable 'v225' is possibly undefined
// 140739FDA: variable 'v226' is possibly undefined
// 140739FEF: variable 'v227' is possibly undefined
// 14073A004: variable 'v228' is possibly undefined
// 1409F92AC: using guessed type unsigned __int64 qword_1409F92AC[3];
// 140B747A0: using guessed type char *off_140B747A0;

