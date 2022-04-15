#include "../winhttp.h"

//----- (000000014070F700) ----------------------------------------------------
__int64 __fastcall sub_14070F700(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int* v13; // r9
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	unsigned int* v17; // r9
	__int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	unsigned int* v21; // r9
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	unsigned int* v25; // r9
	__int64 v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rax
	unsigned int* v29; // r9
	__int64 v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rax
	unsigned int* v33; // r9
	__int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	unsigned int* v37; // r9
	__int64 v38; // rax
	__int64 v39; // rbx
	__int64 v40; // rax
	unsigned int* v41; // r9
	__int64 v42; // rax
	__int64 v43; // rbx
	__int64 v44; // rax
	unsigned int* v45; // r9
	__int64 v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	unsigned int* v49; // r9
	__int64 v50; // rax
	__int64 v51; // rbx
	__int64 v52; // rax
	__int64 v53; // r9
	__int64 v54; // rax
	__int64 v55; // rbx
	__int64 v56; // rax
	unsigned int* v57; // r9
	__int64 v58; // rax
	__int64 v59; // rbx
	__int64 v60; // rax
	unsigned int* v61; // r9
	__int64 v62; // rax
	__int64 v63; // rbx
	__int64 v64; // rax
	unsigned int* v65; // r9
	__int64 v66; // rax
	__int64 v67; // rbx
	__int64 v68; // rax
	unsigned int* v69; // r9
	__int64 v70; // rax
	__int64 v71; // rbx
	__int64 v72; // rax
	unsigned int* v73; // r9
	__int64 v74; // rax
	__int64 v75; // rbx
	__int64 v76; // rax
	unsigned int* v77; // r9
	__int64 v78; // rax
	__int64 v79; // rbx
	__int64 v80; // rax
	unsigned int* v81; // r9
	__int64 v82; // rax
	__int64 v83; // rbx
	__int64 v84; // rax
	unsigned int* v85; // r9
	__int64 v86; // rax
	__int64 v87; // rbx
	__int64 v88; // rax
	unsigned int* v89; // r9
	__int64 v90; // rax
	__int64 v91; // rbx
	__int64 v92; // rax
	unsigned int* v93; // r9
	__int64 v94; // rax
	__int64 v95; // rbx
	__int64 v96; // rax
	unsigned int* v97; // r9
	__int64 v98; // rax
	__int64 v99; // rbx
	__int64 v100; // rax
	unsigned int* v101; // r9
	__int64 v102; // rax
	__int64 v103; // rbx
	unsigned int* v104; // r9
	__int64 v105; // rax
	__int64 v106; // rbx
	__int64 v107; // rax
	unsigned int* v108; // r9
	__int64 v109; // rax
	__int64 v110; // rbx
	__int64 v111; // rax
	unsigned int* v112; // r9
	__int64 v113; // rax
	__int64 v114; // rbx
	__int64 v115; // rax
	unsigned int* v116; // r9
	__int64 v117; // rax
	__int64 v118; // rbx
	__int64 v119; // rax
	__int64 v120; // r9
	__int64 v121; // rax
	__int64 v122; // rbx
	__int64 v123; // rax
	unsigned int* v124; // r9
	__int64 v125; // rax
	__int64 v126; // rbx
	__int64 v127; // rax
	unsigned int* v128; // r9
	__int64 v129; // rax
	__int64 v130; // rbx
	__int64 v131; // rax
	unsigned int* v132; // r9
	__int64 v133; // rax
	__int64 v134; // rbx
	__int64 v135; // rax
	unsigned int* v136; // r9
	__int64 v137; // rax
	__int64 v138; // rbx
	__int64 v139; // rax
	unsigned int* v140; // r9
	__int64 v141; // rax
	__int64 v142; // rbx
	__int64 v143; // rax
	unsigned int* v144; // r9
	__int64 v145; // rax
	__int64 v146; // rbx
	__int64 v147; // rax
	unsigned int* v148; // r9
	__int64 v149; // rax
	__int64 v150; // rbx
	__int64 v151; // rax
	unsigned int* v152; // r9
	__int64 v153; // rax
	__int64 v154; // rbx
	__int64 v155; // rax
	unsigned int* v156; // r9
	__int64 v157; // rax
	__int64 v158; // rbx
	__int64 v159; // rax
	unsigned int* v160; // r9
	__int64 v161; // rax
	__int64 v162; // rbx
	__int64 v163; // rax
	unsigned int* v164; // r9
	__int64 v165; // rax
	__int64 v166; // rbx
	__int64 v167; // rax
	unsigned int* v168; // r9
	__int64 v169; // rax
	__int64 v170; // rbx
	__int64 v171; // rax
	__int64 v172; // rax
	__int64 v173; // rbx
	__int64 v174; // rax
	unsigned int* v175; // r9
	__int64 v176; // rax
	__int64 v177; // rbx
	__int64 v178; // rax
	unsigned int* v179; // r9
	__int64 v180; // rax
	__int64 v181; // rbx
	__int64 v182; // rax
	unsigned int* v183; // r9
	__int64 v184; // rax
	__int64 v185; // rbx
	__int64 v186; // rax
	unsigned int* v187; // r9
	__int64 v188; // rax
	__int64 v189; // rbx
	__int64 v190; // rax
	unsigned int* v191; // r9
	__int64 v192; // rax
	__int64 v193; // rbx
	__int64 v194; // rax
	unsigned int* v195; // r9
	__int64 v196; // rax
	__int64 v197; // rbx
	__int64 v198; // rax
	unsigned int* v199; // r9
	__int64 v200; // rax
	__int64 v201; // rbx
	__int64 v202; // rax
	unsigned int* v203; // r9
	__int64 v204; // rax
	__int64 v205; // rbx
	unsigned int* v206; // r9
	__int64 v208; // [rsp+20h] [rbp-10h] BYREF
	int v209; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "FriendshipLib", &off_140B735F0);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"CharacterFriendshipType_Friend", 0x1Eui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v208 = v4;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v208, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"CharacterFriendshipType_Ignore", 0x1Eui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v208 = v8;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v208, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4008000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"CharacterFriendshipType_Rival", 0x1Dui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v208 = v12;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v208, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4020000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"CharacterFriendshipType_Account", 0x1Fui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v208 = v16;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v208, v17);
	a1[2] -= 16i64;
	v18 = a1[2];
	*(_QWORD*)v18 = 0i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerNotFound", 0x1Fui64);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v208 = v20;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v208, v21);
	a1[2] -= 16i64;
	v22 = a1[2];
	*(_QWORD*)v22 = 0x3FF0000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_RealmNotFound", 0x1Eui64);
	v25 = (unsigned int*)(a1[2] - 16i64);
	v208 = v24;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v23 - 32), (int*)&v208, v25);
	a1[2] -= 16i64;
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4000000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_RequestDenied", 0x1Eui64);
	v29 = (unsigned int*)(a1[2] - 16i64);
	v208 = v28;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v27 - 32), (int*)&v208, v29);
	a1[2] -= 16i64;
	v30 = a1[2];
	*(_QWORD*)v30 = 0x4008000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerAlreadyFriend", 0x24ui64);
	v33 = (unsigned int*)(a1[2] - 16i64);
	v208 = v32;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v31 - 32), (int*)&v208, v33);
	a1[2] -= 16i64;
	v34 = a1[2];
	*(_QWORD*)v34 = 0x4010000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = a1[2];
	v36 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerOffline", 0x1Eui64);
	v37 = (unsigned int*)(a1[2] - 16i64);
	v208 = v36;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v35 - 32), (int*)&v208, v37);
	a1[2] -= 16i64;
	v38 = a1[2];
	*(_QWORD*)v38 = 0x4014000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = a1[2];
	v40 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_FriendshipNotFound", 0x23ui64);
	v41 = (unsigned int*)(a1[2] - 16i64);
	v208 = v40;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v39 - 32), (int*)&v208, v41);
	a1[2] -= 16i64;
	v42 = a1[2];
	*(_QWORD*)v42 = 0x4018000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	a1[2] += 16i64;
	v43 = a1[2];
	v44 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidType", 0x1Cui64);
	v45 = (unsigned int*)(a1[2] - 16i64);
	v208 = v44;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v43 - 32), (int*)&v208, v45);
	a1[2] -= 16i64;
	v46 = a1[2];
	*(_QWORD*)v46 = 0x401C000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = a1[2];
	v48 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_RequestNotFound", 0x20ui64);
	v49 = (unsigned int*)(a1[2] - 16i64);
	v208 = v48;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v47 - 32), (int*)&v208, v49);
	a1[2] -= 16i64;
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4020000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = a1[2];
	v52 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_RequestTimedOut", 0x20ui64);
	v53 = a1[2];
	v209 = 4;
	v208 = v52;
	sub_14005EA50((__int64)a1, (__int64*)(v51 - 32), (int*)&v208, (unsigned int*)(v53 - 16));
	a1[2] -= 16i64;
	v54 = a1[2];
	*(_DWORD*)(v54 + 8) = 3;
	*(_QWORD*)v54 = 0x4022000000000000i64;
	a1[2] += 16i64;
	v55 = a1[2];
	v56 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_Busy", 0x15ui64);
	v57 = (unsigned int*)(a1[2] - 16i64);
	v208 = v56;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v55 - 32), (int*)&v208, v57);
	a1[2] -= 16i64;
	v58 = a1[2];
	*(_QWORD*)v58 = 0x4024000000000000i64;
	*(_DWORD*)(v58 + 8) = 3;
	a1[2] += 16i64;
	v59 = a1[2];
	v60 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidNote", 0x1Cui64);
	v61 = (unsigned int*)(a1[2] - 16i64);
	v208 = v60;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v59 - 32), (int*)&v208, v61);
	a1[2] -= 16i64;
	v62 = a1[2];
	*(_QWORD*)v62 = 0x4026000000000000i64;
	*(_DWORD*)(v62 + 8) = 3;
	a1[2] += 16i64;
	v63 = a1[2];
	v64 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_MaxFriends", 0x1Bui64);
	v65 = (unsigned int*)(a1[2] - 16i64);
	v208 = v64;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v63 - 32), (int*)&v208, v65);
	a1[2] -= 16i64;
	v66 = a1[2];
	*(_QWORD*)v66 = 0x4028000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	a1[2] += 16i64;
	v67 = a1[2];
	v68 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_MaxRivals", 0x1Aui64);
	v69 = (unsigned int*)(a1[2] - 16i64);
	v208 = v68;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v67 - 32), (int*)&v208, v69);
	a1[2] -= 16i64;
	v70 = a1[2];
	*(_DWORD*)(v70 + 8) = 3;
	*(_QWORD*)v70 = 0x402A000000000000i64;
	a1[2] += 16i64;
	v71 = a1[2];
	v72 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_MaxIgnored", 0x1Bui64);
	v73 = (unsigned int*)(a1[2] - 16i64);
	v208 = v72;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v71 - 32), (int*)&v208, v73);
	a1[2] -= 16i64;
	v74 = a1[2];
	*(_QWORD*)v74 = 0x402C000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = a1[2];
	v76 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_UnableToProcess", 0x20ui64);
	v77 = (unsigned int*)(a1[2] - 16i64);
	v208 = v76;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v75 - 32), (int*)&v208, v77);
	a1[2] -= 16i64;
	v78 = a1[2];
	*(_QWORD*)v78 = 0x402E000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	a1[2] += 16i64;
	v79 = a1[2];
	v80 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerNotFriend", 0x20ui64);
	v81 = (unsigned int*)(a1[2] - 16i64);
	v208 = v80;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v79 - 32), (int*)&v208, v81);
	a1[2] -= 16i64;
	v82 = a1[2];
	*(_QWORD*)v82 = 0x4030000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = a1[2];
	v84 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerConsideringOtherFriend", 0x2Dui64);
	v85 = (unsigned int*)(a1[2] - 16i64);
	v208 = v84;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v83 - 32), (int*)&v208, v85);
	a1[2] -= 16i64;
	v86 = a1[2];
	*(_QWORD*)v86 = 0x4031000000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	a1[2] += 16i64;
	v87 = a1[2];
	v88 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_RequestSent", 0x1Cui64);
	v89 = (unsigned int*)(a1[2] - 16i64);
	v208 = v88;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v87 - 32), (int*)&v208, v89);
	a1[2] -= 16i64;
	v90 = a1[2];
	*(_QWORD*)v90 = 0x4032000000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = a1[2];
	v92 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerAlreadyRival", 0x23ui64);
	v93 = (unsigned int*)(a1[2] - 16i64);
	v208 = v92;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v91 - 32), (int*)&v208, v93);
	a1[2] -= 16i64;
	v94 = a1[2];
	*(_QWORD*)v94 = 0x4033000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	a1[2] += 16i64;
	v95 = a1[2];
	v96 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerAlreadyNeighbor", 0x26ui64);
	v97 = (unsigned int*)(a1[2] - 16i64);
	v208 = v96;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v95 - 32), (int*)&v208, v97);
	a1[2] -= 16i64;
	v98 = a1[2];
	*(_QWORD*)v98 = 0x4034000000000000i64;
	*(_DWORD*)(v98 + 8) = 3;
	a1[2] += 16i64;
	v99 = a1[2];
	v100 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerAlreadyIgnored", 0x25ui64);
	v101 = (unsigned int*)(a1[2] - 16i64);
	v208 = v100;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v99 - 32), (int*)&v208, v101);
	a1[2] -= 16i64;
	v102 = a1[2];
	*(_QWORD*)v102 = 0x4035000000000000i64;
	*(_DWORD*)(v102 + 8) = 3;
	a1[2] += 16i64;
	v103 = a1[2];
	v208 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerOnIgnored", 0x20ui64);
	v104 = (unsigned int*)(a1[2] - 16i64);
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v103 - 32), (int*)&v208, v104);
	a1[2] -= 16i64;
	v105 = a1[2];
	*(_DWORD*)(v105 + 8) = 3;
	*(_QWORD*)v105 = 0x4036000000000000i64;
	a1[2] += 16i64;
	v106 = a1[2];
	v107 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerNotRival", 0x1Fui64);
	v108 = (unsigned int*)(a1[2] - 16i64);
	v208 = v107;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v106 - 32), (int*)&v208, v108);
	a1[2] -= 16i64;
	v109 = a1[2];
	*(_QWORD*)v109 = 0x4037000000000000i64;
	*(_DWORD*)(v109 + 8) = 3;
	a1[2] += 16i64;
	v110 = a1[2];
	v111 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerNotIgnored", 0x21ui64);
	v112 = (unsigned int*)(a1[2] - 16i64);
	v208 = v111;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v110 - 32), (int*)&v208, v112);
	a1[2] -= 16i64;
	v113 = a1[2];
	*(_QWORD*)v113 = 0x4038000000000000i64;
	*(_DWORD*)(v113 + 8) = 3;
	a1[2] += 16i64;
	v114 = a1[2];
	v115 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerNotNeighbor", 0x22ui64);
	v116 = (unsigned int*)(a1[2] - 16i64);
	v208 = v115;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v114 - 32), (int*)&v208, v116);
	a1[2] -= 16i64;
	v117 = a1[2];
	*(_QWORD*)v117 = 0x4039000000000000i64;
	*(_DWORD*)(v117 + 8) = 3;
	a1[2] += 16i64;
	v118 = a1[2];
	v119 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PlayerNotOfThisRealm", 0x25ui64);
	v120 = a1[2];
	v209 = 4;
	v208 = v119;
	sub_14005EA50((__int64)a1, (__int64*)(v118 - 32), (int*)&v208, (unsigned int*)(v120 - 16));
	a1[2] -= 16i64;
	v121 = a1[2];
	*(_DWORD*)(v121 + 8) = 3;
	*(_QWORD*)v121 = 0x403A000000000000i64;
	a1[2] += 16i64;
	v122 = a1[2];
	v123 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_FriendsBlocked", 0x1Fui64);
	v124 = (unsigned int*)(a1[2] - 16i64);
	v208 = v123;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v122 - 32), (int*)&v208, v124);
	a1[2] -= 16i64;
	v125 = a1[2];
	*(_QWORD*)v125 = 0x403C000000000000i64;
	*(_DWORD*)(v125 + 8) = 3;
	a1[2] += 16i64;
	v126 = a1[2];
	v127 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_LocationsBusy", 0x1Eui64);
	v128 = (unsigned int*)(a1[2] - 16i64);
	v208 = v127;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v126 - 32), (int*)&v208, v128);
	a1[2] -= 16i64;
	v129 = a1[2];
	*(_QWORD*)v129 = 0x403D000000000000i64;
	*(_DWORD*)(v129 + 8) = 3;
	a1[2] += 16i64;
	v130 = a1[2];
	v131 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_CannotInviteSelf", 0x21ui64);
	v132 = (unsigned int*)(a1[2] - 16i64);
	v208 = v131;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v130 - 32), (int*)&v208, v132);
	a1[2] -= 16i64;
	v133 = a1[2];
	*(_QWORD*)v133 = 0x403E000000000000i64;
	*(_DWORD*)(v133 + 8) = 3;
	a1[2] += 16i64;
	v134 = a1[2];
	v135 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_ThrottledRequest", 0x21ui64);
	v136 = (unsigned int*)(a1[2] - 16i64);
	v208 = v135;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v134 - 32), (int*)&v208, v136);
	a1[2] -= 16i64;
	v137 = a1[2];
	*(_QWORD*)v137 = 0x403F000000000000i64;
	*(_DWORD*)(v137 + 8) = 3;
	a1[2] += 16i64;
	v138 = a1[2];
	v139 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_ContainsProfanity", 0x22ui64);
	v140 = (unsigned int*)(a1[2] - 16i64);
	v208 = v139;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v138 - 32), (int*)&v208, v140);
	a1[2] -= 16i64;
	v141 = a1[2];
	*(_QWORD*)v141 = 0x4040000000000000i64;
	*(_DWORD*)(v141 + 8) = 3;
	a1[2] += 16i64;
	v142 = a1[2];
	v143 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidPublicNote", 0x22ui64);
	v144 = (unsigned int*)(a1[2] - 16i64);
	v208 = v143;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v142 - 32), (int*)&v208, v144);
	a1[2] -= 16i64;
	v145 = a1[2];
	*(_QWORD*)v145 = 0x4040800000000000i64;
	*(_DWORD*)(v145 + 8) = 3;
	a1[2] += 16i64;
	v146 = a1[2];
	v147 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidPublicDisplayName", 0x29ui64);
	v148 = (unsigned int*)(a1[2] - 16i64);
	v208 = v147;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v146 - 32), (int*)&v208, v148);
	a1[2] -= 16i64;
	v149 = a1[2];
	*(_QWORD*)v149 = 0x4041000000000000i64;
	*(_DWORD*)(v149 + 8) = 3;
	a1[2] += 16i64;
	v150 = a1[2];
	v151 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidEmail", 0x1Dui64);
	v152 = (unsigned int*)(a1[2] - 16i64);
	v208 = v151;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v150 - 32), (int*)&v208, v152);
	a1[2] -= 16i64;
	v153 = a1[2];
	*(_QWORD*)v153 = 0x4041800000000000i64;
	*(_DWORD*)(v153 + 8) = 3;
	a1[2] += 16i64;
	v154 = a1[2];
	v155 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidInviteNote", 0x22ui64);
	v156 = (unsigned int*)(a1[2] - 16i64);
	v208 = v155;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v154 - 32), (int*)&v208, v156);
	a1[2] -= 16i64;
	v157 = a1[2];
	*(_QWORD*)v157 = 0x4042000000000000i64;
	*(_DWORD*)(v157 + 8) = 3;
	a1[2] += 16i64;
	v158 = a1[2];
	v159 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_BlockedForStrangers", 0x24ui64);
	v160 = (unsigned int*)(a1[2] - 16i64);
	v208 = v159;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v158 - 32), (int*)&v208, v160);
	a1[2] -= 16i64;
	v161 = a1[2];
	*(_QWORD*)v161 = 0x4042800000000000i64;
	*(_DWORD*)(v161 + 8) = 3;
	a1[2] += 16i64;
	v162 = a1[2];
	v163 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_InvalidAutoResponse", 0x24ui64);
	v164 = (unsigned int*)(a1[2] - 16i64);
	v208 = v163;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v162 - 32), (int*)&v208, v164);
	a1[2] -= 16i64;
	v165 = a1[2];
	*(_QWORD*)v165 = 0x4043000000000000i64;
	*(_DWORD*)(v165 + 8) = 3;
	a1[2] += 16i64;
	v166 = a1[2];
	v167 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_MissingEntitlement", 0x23ui64);
	v168 = (unsigned int*)(a1[2] - 16i64);
	v208 = v167;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v166 - 32), (int*)&v208, v168);
	a1[2] -= 16i64;
	v169 = a1[2];
	*(_QWORD*)v169 = 0x4043800000000000i64;
	*(_DWORD*)(v169 + 8) = 3;
	a1[2] += 16i64;
	v170 = a1[2];
	v171 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_NameUnavailable", 0x20ui64);
	v209 = 4;
	v208 = v171;
	sub_14005EA50((__int64)a1, (__int64*)(v170 - 32), (int*)&v208, (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 16i64;
	v172 = a1[2];
	*(_DWORD*)(v172 + 8) = 3;
	*(_QWORD*)v172 = 0x4044000000000000i64;
	a1[2] += 16i64;
	v173 = a1[2];
	v174 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResult_PrivilegeRestricted", 0x24ui64);
	v175 = (unsigned int*)(a1[2] - 16i64);
	v208 = v174;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v173 - 32), (int*)&v208, v175);
	a1[2] -= 16i64;
	v176 = a1[2];
	*(_QWORD*)v176 = 0i64;
	*(_DWORD*)(v176 + 8) = 3;
	a1[2] += 16i64;
	v177 = a1[2];
	v178 = sub_140062650((__int64)a1, (unsigned __int64*)"AccountPresenceState_Available", 0x1Eui64);
	v179 = (unsigned int*)(a1[2] - 16i64);
	v208 = v178;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v177 - 32), (int*)&v208, v179);
	a1[2] -= 16i64;
	v180 = a1[2];
	*(_QWORD*)v180 = 0x3FF0000000000000i64;
	*(_DWORD*)(v180 + 8) = 3;
	a1[2] += 16i64;
	v181 = a1[2];
	v182 = sub_140062650((__int64)a1, (unsigned __int64*)"AccountPresenceState_Away", 0x19ui64);
	v183 = (unsigned int*)(a1[2] - 16i64);
	v208 = v182;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v181 - 32), (int*)&v208, v183);
	a1[2] -= 16i64;
	v184 = a1[2];
	*(_QWORD*)v184 = 0x4000000000000000i64;
	*(_DWORD*)(v184 + 8) = 3;
	a1[2] += 16i64;
	v185 = a1[2];
	v186 = sub_140062650((__int64)a1, (unsigned __int64*)"AccountPresenceState_Busy", 0x19ui64);
	v187 = (unsigned int*)(a1[2] - 16i64);
	v208 = v186;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v185 - 32), (int*)&v208, v187);
	a1[2] -= 16i64;
	v188 = a1[2];
	*(_QWORD*)v188 = 0x4008000000000000i64;
	*(_DWORD*)(v188 + 8) = 3;
	a1[2] += 16i64;
	v189 = a1[2];
	v190 = sub_140062650((__int64)a1, (unsigned __int64*)"AccountPresenceState_Invisible", 0x1Eui64);
	v191 = (unsigned int*)(a1[2] - 16i64);
	v208 = v190;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v189 - 32), (int*)&v208, v191);
	a1[2] -= 16i64;
	v192 = a1[2];
	*(_QWORD*)v192 = 0i64;
	*(_DWORD*)(v192 + 8) = 3;
	a1[2] += 16i64;
	v193 = a1[2];
	v194 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResponse_Mutual", 0x19ui64);
	v195 = (unsigned int*)(a1[2] - 16i64);
	v208 = v194;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v193 - 32), (int*)&v208, v195);
	a1[2] -= 16i64;
	v196 = a1[2];
	*(_QWORD*)v196 = 0x3FF0000000000000i64;
	*(_DWORD*)(v196 + 8) = 3;
	a1[2] += 16i64;
	v197 = a1[2];
	v198 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResponse_Accept", 0x19ui64);
	v199 = (unsigned int*)(a1[2] - 16i64);
	v208 = v198;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v197 - 32), (int*)&v208, v199);
	a1[2] -= 16i64;
	v200 = a1[2];
	*(_QWORD*)v200 = 0x4000000000000000i64;
	*(_DWORD*)(v200 + 8) = 3;
	a1[2] += 16i64;
	v201 = a1[2];
	v202 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResponse_Decline", 0x1Aui64);
	v203 = (unsigned int*)(a1[2] - 16i64);
	v208 = v202;
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v201 - 32), (int*)&v208, v203);
	a1[2] -= 16i64;
	v204 = a1[2];
	*(_QWORD*)v204 = 0x4008000000000000i64;
	*(_DWORD*)(v204 + 8) = 3;
	a1[2] += 16i64;
	v205 = a1[2];
	v208 = sub_140062650((__int64)a1, (unsigned __int64*)"FriendshipResponse_Ignore", 0x19ui64);
	v206 = (unsigned int*)(a1[2] - 16i64);
	v209 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v205 - 32), (int*)&v208, v206);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B735F0: using guessed type char *off_140B735F0;

