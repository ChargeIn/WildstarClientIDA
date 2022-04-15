#include "../winhttp.h"

//----- (0000000140752690) ----------------------------------------------------
__int64 __fastcall sub_140752690(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64* v31; // rax
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
	__int64 v44; // rax
	__int64* v45; // rax
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
	__int64 v60; // rax
	__int64* v61; // rax
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // rax
	__int64* v69; // rax
	__int64 v70; // rax
	__int64* v71; // rax
	__int64 v72; // rax
	__int64* v73; // rax
	__int64 v74; // rax
	__int64* v75; // rax
	__int64 v76; // rax
	__int64* v77; // rax
	__int64 v78; // rax
	__int64* v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rax
	__int64* v83; // rax
	__int64 v84; // rax
	__int64* v85; // rax
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rax
	__int64* v91; // rax
	__int64 v92; // rax
	__int64* v93; // rax
	__int64 v94; // rbx
	__int64 v95; // rax
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // rax
	__int64* v99; // rax
	__int64 v100; // rax
	__int64* v101; // rax
	__int64 v102; // rax
	__int64* v103; // rax
	__int64 v104; // rax
	__int64* v105; // rax
	__int64 v106; // rax
	__int64* v107; // rax
	__int64 v108; // rbx
	__int64 v109; // rax
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
	__int64 v120; // rax
	__int64* v121; // rax
	__int64 v122; // rax
	__int64* v123; // rax
	__int64 v124; // rax
	__int64* v125; // rax
	__int64 v126; // rax
	__int64* v127; // rax
	__int64 v128; // rax
	__int64* v129; // rax
	__int64 v130; // rax
	unsigned int* v131; // r9
	__int64 v133; // [rsp+20h] [rbp-38h] BYREF
	int v134; // [rsp+28h] [rbp-30h]

	sub_140057020(a1, "CombatFloater", &off_140B755A0);
	v2 = sub_140062650((__int64)a1, (unsigned __int64*)"CombatFloater", 0xDui64);
	v3 = a1[2];
	v133 = v2;
	v134 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v133, v3);
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumFloaterLocation", 0x17ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Top", 3ui64);
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Head", 4ui64);
	v8 = a1[2];
	*(_QWORD*)v8 = 0x402E000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Chest", 5ui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0x402C000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Back", 4ui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4010000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Bottom", 6ui64);
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4022000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumFloaterCollisionMode", 0x1Cui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"IgnoreCollision", 0xFui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x4000000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Horizontal", 0xAui64);
	v20 = a1[2];
	*(_QWORD*)v20 = 0i64;
	*(_DWORD*)(v20 + 8) = 3;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Vertical", 8ui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0x3FF0000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumFloaterEffect", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v24 = a1[2];
	v25 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v24 + 8) = 5;
	*(_QWORD*)v24 = v25;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Flames", 6ui64);
	v26 = a1[2];
	*(_QWORD*)v26 = 0i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"BluishWhite", 0xBui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0x3FF0000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Sparks", 6ui64);
	v30 = a1[2];
	*(_QWORD*)v30 = 0x4000000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Spiral", 6ui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0x4008000000000000i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cloud", 5ui64);
	v34 = a1[2];
	*(_QWORD*)v34 = 0x4010000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Splotches", 9ui64);
	v36 = a1[2];
	*(_QWORD*)v36 = 0x4014000000000000i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"SlashBlood", 0xAui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0x4018000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Impact", 6ui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x401C000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"SplatBlood", 0xAui64);
	v42 = a1[2];
	*(_QWORD*)v42 = 0x4020000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	a1[2] += 16i64;
	v43 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v43, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Helix", 5ui64);
	v44 = a1[2];
	*(_QWORD*)v44 = 0x4022000000000000i64;
	*(_DWORD*)(v44 + 8) = 3;
	a1[2] += 16i64;
	v45 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v45, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ShadowFire", 0xAui64);
	v46 = a1[2];
	*(_QWORD*)v46 = 0x4024000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cold", 4ui64);
	v48 = a1[2];
	*(_QWORD*)v48 = 0x4026000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Stars", 5ui64);
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4028000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumExpReason", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v52 = a1[2];
	v53 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v52 + 8) = 5;
	*(_QWORD*)v52 = v53;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Invalid", 7ui64);
	v54 = a1[2];
	*(_QWORD*)v54 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v54 + 8) = 3;
	a1[2] += 16i64;
	v55 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v55, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Load", 4ui64);
	v56 = a1[2];
	*(_QWORD*)v56 = 0i64;
	*(_DWORD*)(v56 + 8) = 3;
	a1[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v57, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cheat", 5ui64);
	v58 = a1[2];
	*(_QWORD*)v58 = 0x3FF0000000000000i64;
	*(_DWORD*)(v58 + 8) = 3;
	a1[2] += 16i64;
	v59 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v59, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KillCreature", 0xCui64);
	v60 = a1[2];
	*(_QWORD*)v60 = 0x4000000000000000i64;
	*(_DWORD*)(v60 + 8) = 3;
	a1[2] += 16i64;
	v61 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v61, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Quest", 5ui64);
	v62 = a1[2];
	*(_QWORD*)v62 = 0x4008000000000000i64;
	*(_DWORD*)(v62 + 8) = 3;
	a1[2] += 16i64;
	v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ClusterBonus", 0xCui64);
	v64 = a1[2];
	*(_QWORD*)v64 = 0x4010000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Spell", 5ui64);
	v66 = a1[2];
	*(_QWORD*)v66 = 0x4014000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	a1[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v67, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Exploration", 0xBui64);
	v68 = a1[2];
	*(_QWORD*)v68 = 0x4018000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	a1[2] += 16i64;
	v69 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v69, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"QuestEpisodeCompletion", 0x16ui64);
	v70 = a1[2];
	*(_QWORD*)v70 = 0x401C000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	a1[2] += 16i64;
	v71 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v71, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PathMission", 0xBui64);
	v72 = a1[2];
	*(_QWORD*)v72 = 0x4020000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	a1[2] += 16i64;
	v73 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v73, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PathEpisode", 0xBui64);
	v74 = a1[2];
	*(_QWORD*)v74 = 0x4022000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v75, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KillPerformance", 0xFui64);
	v76 = a1[2];
	*(_QWORD*)v76 = 0x4024000000000000i64;
	*(_DWORD*)(v76 + 8) = 3;
	a1[2] += 16i64;
	v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MultiKill", 9ui64);
	v78 = a1[2];
	*(_QWORD*)v78 = 0x4026000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	a1[2] += 16i64;
	v79 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v79, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KillingSpree", 0xCui64);
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4028000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TelegraphInterrupt", 0x12ui64);
	v82 = a1[2];
	*(_QWORD*)v82 = 0x402A000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"TelegraphEvade", 0xEui64);
	v84 = a1[2];
	*(_QWORD*)v84 = 0x402C000000000000i64;
	*(_DWORD*)(v84 + 8) = 3;
	a1[2] += 16i64;
	v85 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v85, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Momentum", 8ui64);
	v86 = a1[2];
	*(_QWORD*)v86 = 0x402E000000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	a1[2] += 16i64;
	v87 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v87, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Rested", 6ui64);
	v88 = a1[2];
	*(_QWORD*)v88 = 0x4030000000000000i64;
	*(_DWORD*)(v88 + 8) = 3;
	a1[2] += 16i64;
	v89 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v89, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PublicEvent", 0xBui64);
	v90 = a1[2];
	*(_QWORD*)v90 = 0x4031000000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PeriodicQuest", 0xDui64);
	v92 = a1[2];
	*(_QWORD*)v92 = 0x4032000000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	a1[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCombatMomentum", 0x16ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v94 = a1[2];
	v95 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v94 + 8) = 5;
	*(_QWORD*)v94 = v95;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Impulse", 7ui64);
	v96 = a1[2];
	*(_QWORD*)v96 = 0x4037000000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	a1[2] += 16i64;
	v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KillingPerformance", 0x12ui64);
	v98 = a1[2];
	*(_QWORD*)v98 = 0x4038000000000000i64;
	*(_DWORD*)(v98 + 8) = 3;
	a1[2] += 16i64;
	v99 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v99, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KillChain", 9ui64);
	v100 = a1[2];
	*(_QWORD*)v100 = 0x4039000000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v101, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Evade", 5ui64);
	v102 = a1[2];
	*(_QWORD*)v102 = 0x403A000000000000i64;
	*(_DWORD*)(v102 + 8) = 3;
	a1[2] += 16i64;
	v103 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v103, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Interrupt", 9ui64);
	v104 = a1[2];
	*(_QWORD*)v104 = 0x403B000000000000i64;
	*(_DWORD*)(v104 + 8) = 3;
	a1[2] += 16i64;
	v105 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v105, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CCBreak", 7ui64);
	v106 = a1[2];
	*(_QWORD*)v106 = 0x403C000000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	a1[2] += 16i64;
	v107 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v107, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCCStateApplyRulesResult", 0x1Fui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v108 = a1[2];
	v109 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v108 + 8) = 5;
	*(_QWORD*)v108 = v109;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ok", 2ui64);
	v110 = a1[2];
	*(_QWORD*)v110 = 0i64;
	*(_DWORD*)(v110 + 8) = 3;
	a1[2] += 16i64;
	v111 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v111, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidCCState", 0xEui64);
	v112 = a1[2];
	*(_QWORD*)v112 = 0x3FF0000000000000i64;
	*(_DWORD*)(v112 + 8) = 3;
	a1[2] += 16i64;
	v113 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v113, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NoTargetSpecified", 0x11ui64);
	v114 = a1[2];
	*(_QWORD*)v114 = 0x4000000000000000i64;
	*(_DWORD*)(v114 + 8) = 3;
	a1[2] += 16i64;
	v115 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v115, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Target_Immune", 0xDui64);
	v116 = a1[2];
	*(_QWORD*)v116 = 0x4008000000000000i64;
	*(_DWORD*)(v116 + 8) = 3;
	a1[2] += 16i64;
	v117 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v117, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Target_InfiniteInterruptArmor", 0x1Dui64);
	v118 = a1[2];
	*(_QWORD*)v118 = 0x4010000000000000i64;
	*(_DWORD*)(v118 + 8) = 3;
	a1[2] += 16i64;
	v119 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v119, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Target_InterruptArmorReduced", 0x1Cui64);
	v120 = a1[2];
	*(_QWORD*)v120 = 0x4014000000000000i64;
	*(_DWORD*)(v120 + 8) = 3;
	a1[2] += 16i64;
	v121 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v121, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Target_InterruptArmorBlocked", 0x1Cui64);
	v122 = a1[2];
	*(_QWORD*)v122 = 0x4018000000000000i64;
	*(_DWORD*)(v122 + 8) = 3;
	a1[2] += 16i64;
	v123 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v123, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Stacking_DoesNotStack", 0x15ui64);
	v124 = a1[2];
	*(_QWORD*)v124 = 0x401C000000000000i64;
	*(_DWORD*)(v124 + 8) = 3;
	a1[2] += 16i64;
	v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Stacking_ShorterDuration", 0x18ui64);
	v126 = a1[2];
	*(_QWORD*)v126 = 0x4020000000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v127, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DiminishingReturns_TriggerCap", 0x1Dui64);
	v128 = a1[2];
	*(_QWORD*)v128 = 0x4022000000000000i64;
	*(_DWORD*)(v128 + 8) = 3;
	a1[2] += 16i64;
	v129 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v129, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v130 = sub_140062650((__int64)a1, (unsigned __int64*)"CombatFloater", 0xDui64);
	v131 = (unsigned int*)(a1[2] - 16i64);
	v133 = v130;
	v134 = 4;
	sub_14005EA50((__int64)a1, a1 + 15, (int*)&v133, v131);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B755A0: using guessed type char *off_140B755A0;

