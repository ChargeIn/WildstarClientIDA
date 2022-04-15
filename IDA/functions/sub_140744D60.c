//----- (0000000140744D60) ----------------------------------------------------
__int64 __fastcall sub_140744D60(_QWORD* a1)
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
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
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
	__int64 v36; // rbx
	__int64 v37; // rax
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
	__int64 v52; // rax
	__int64* v53; // rax
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
	__int64 v86; // rbx
	__int64 v87; // rax
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rax
	__int64* v91; // rax
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
	__int64 v102; // rbx
	__int64 v103; // rax
	__int64 v104; // rax
	__int64* v105; // rax
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
	__int64* v131; // rax
	__int64 v132; // rax
	__int64* v133; // rax
	__int64 v134; // rax
	__int64* v135; // rax
	__int64 v136; // rax
	__int64* v137; // rax
	__int64 v138; // rax
	__int64* v139; // rax
	__int64 v140; // rax
	__int64* v141; // rax
	__int64 v142; // rax
	__int64* v143; // rax
	__int64 v144; // rax
	__int64* v145; // rax
	__int64 v146; // rax
	__int64* v147; // rax
	__int64 v148; // rax
	__int64* v149; // rax
	__int64 v150; // rax
	__int64* v151; // rax
	__int64 v152; // rax
	__int64* v153; // rax
	__int64 v154; // rdx
	__int64 v155; // rdx
	__int64 v156; // rdx
	__int64 v157; // rdx
	__int64 v158; // rdx
	__int64 v159; // rdx
	__int64 v160; // rdx
	__int64 v161; // rdx
	__int64 v162; // rdx
	__int64 v163; // rdx
	__int64 v164; // rdx
	__int64 v165; // rdx
	__int64 v166; // rdx
	__int64 v167; // rdx
	__int64 v168; // rax
	__int64 v170; // [rsp+20h] [rbp-38h] BYREF
	int v171; // [rsp+28h] [rbp-30h]

	sub_140057020(a1, "GroupLib", &off_140B74D50);
	v2 = sub_140062650((__int64)a1, (unsigned __int64*)"GroupLib", 8ui64);
	v3 = a1[2];
	v170 = v2;
	v171 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v170, v3);
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LootThreshold", 0xDui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Inferior", 8ui64);
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Average", 7ui64);
	v8 = a1[2];
	*(_QWORD*)v8 = 0x4000000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Good", 4ui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4008000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Excellent", 9ui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4010000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Superb", 6ui64);
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4014000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Legendary", 9ui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0x4018000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Artifact", 8ui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x401C000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LootRule", 8ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v20 = a1[2];
	v21 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v20 + 8) = 5;
	*(_QWORD*)v20 = v21;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"FreeForAll", 0xAui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RoundRobin", 0xAui64);
	v24 = a1[2];
	*(_QWORD*)v24 = 0x3FF0000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NeedBeforeGreed", 0xFui64);
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4000000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Master", 6ui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0x4008000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"HarvestLootRule", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v30 = a1[2];
	v31 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v30 + 8) = 5;
	*(_QWORD*)v30 = v31;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RoundRobin", 0xAui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"FirstTagger", 0xBui64);
	v34 = a1[2];
	*(_QWORD*)v34 = 0x3FF0000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Result", 6ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v36 = a1[2];
	v37 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v36 + 8) = 5;
	*(_QWORD*)v36 = v37;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Sent", 4ui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Accepted", 8ui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4000000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Declined", 8ui64);
	v42 = a1[2];
	*(_QWORD*)v42 = 0x3FF0000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	a1[2] += 16i64;
	v43 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v43, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NoPermissions", 0xDui64);
	v44 = a1[2];
	*(_QWORD*)v44 = 0x4008000000000000i64;
	*(_DWORD*)(v44 + 8) = 3;
	a1[2] += 16i64;
	v45 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v45, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PlayerNotFound", 0xEui64);
	v46 = a1[2];
	*(_QWORD*)v46 = 0x4014000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RealmNotFound", 0xDui64);
	v48 = a1[2];
	*(_QWORD*)v48 = 0x4028000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Grouped", 7ui64);
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4018000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v51, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Pending", 7ui64);
	v52 = a1[2];
	*(_QWORD*)v52 = 0x401C000000000000i64;
	*(_DWORD*)(v52 + 8) = 3;
	a1[2] += 16i64;
	v53 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v53, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ExpiredInviter", 0xEui64);
	v54 = a1[2];
	*(_QWORD*)v54 = 0x4020000000000000i64;
	*(_DWORD*)(v54 + 8) = 3;
	a1[2] += 16i64;
	v55 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v55, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ExpiredInvitee", 0xEui64);
	v56 = a1[2];
	*(_QWORD*)v56 = 0x4024000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	a1[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v57, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"IsInvited", 9ui64);
	v58 = a1[2];
	*(_QWORD*)v58 = 0x4022000000000000i64;
	*(_DWORD*)(v58 + 8) = 3;
	a1[2] += 16i64;
	v59 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v59, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvitedYou", 0xAui64);
	v60 = a1[2];
	*(_QWORD*)v60 = 0x4026000000000000i64;
	*(_DWORD*)(v60 + 8) = 3;
	a1[2] += 16i64;
	v61 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v61, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Full", 4ui64);
	v62 = a1[2];
	*(_QWORD*)v62 = 0x402A000000000000i64;
	*(_DWORD*)(v62 + 8) = 3;
	a1[2] += 16i64;
	v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RoleFull", 8ui64);
	v64 = a1[2];
	*(_QWORD*)v64 = 0x402C000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v65, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NoInvitingSelf", 0xEui64);
	v66 = a1[2];
	*(_QWORD*)v66 = 0x402E000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	a1[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v67, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ServerControlled", 0x10ui64);
	v68 = a1[2];
	*(_QWORD*)v68 = 0x4030000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	a1[2] += 16i64;
	v69 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v69, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"GroupNotFound", 0xDui64);
	v70 = a1[2];
	*(_QWORD*)v70 = 0x4031000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	a1[2] += 16i64;
	v71 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v71, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NotAcceptingRequests", 0x14ui64);
	v72 = a1[2];
	*(_QWORD*)v72 = 0x4032000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	a1[2] += 16i64;
	v73 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v73, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Busy", 4ui64);
	v74 = a1[2];
	*(_QWORD*)v74 = 0x4033000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v75, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"SentToLeader", 0xCui64);
	v76 = a1[2];
	*(_QWORD*)v76 = 0x4034000000000000i64;
	*(_DWORD*)(v76 + 8) = 3;
	a1[2] += 16i64;
	v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LeaderOffline", 0xDui64);
	v78 = a1[2];
	*(_QWORD*)v78 = 0x4035000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	a1[2] += 16i64;
	v79 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v79, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"WrongFaction", 0xCui64);
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4036000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PrivilegeRestricted", 0x13ui64);
	v82 = a1[2];
	*(_QWORD*)v82 = 0x4037000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PvPFlagRestriction", 0x12ui64);
	v84 = a1[2];
	*(_QWORD*)v84 = 0x4038000000000000i64;
	*(_DWORD*)(v84 + 8) = 3;
	a1[2] += 16i64;
	v85 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v85, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RemoveReason", 0xCui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v86 = a1[2];
	v87 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v86 + 8) = 5;
	*(_QWORD*)v86 = v87;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Left", 4ui64);
	v88 = a1[2];
	*(_QWORD*)v88 = 0x4008000000000000i64;
	*(_DWORD*)(v88 + 8) = 3;
	a1[2] += 16i64;
	v89 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v89, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Kicked", 6ui64);
	v90 = a1[2];
	*(_QWORD*)v90 = 0x3FF0000000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v91, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Disconnected", 0xCui64);
	v92 = a1[2];
	*(_QWORD*)v92 = 0x4000000000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	a1[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v93, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Disband", 7ui64);
	v94 = a1[2];
	*(_QWORD*)v94 = 0x4010000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	a1[2] += 16i64;
	v95 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v95, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RemovedByServer", 0xFui64);
	v96 = a1[2];
	*(_QWORD*)v96 = 0x4014000000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	a1[2] += 16i64;
	v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"VoteKicked", 0xAui64);
	v98 = a1[2];
	*(_QWORD*)v98 = 0x4018000000000000i64;
	*(_DWORD*)(v98 + 8) = 3;
	a1[2] += 16i64;
	v99 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v99, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RemovedByServerForPvPFlag", 0x19ui64);
	v100 = a1[2];
	*(_QWORD*)v100 = 0x4022000000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v101, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ActionResult", 0xCui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v102 = a1[2];
	v103 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v102 + 8) = 5;
	*(_QWORD*)v102 = v103;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LeaveSuccess", 0xCui64);
	v104 = a1[2];
	*(_QWORD*)v104 = 0x3FF0000000000000i64;
	*(_DWORD*)(v104 + 8) = 3;
	a1[2] += 16i64;
	v105 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v105, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LeaveFailed", 0xBui64);
	v106 = a1[2];
	*(_QWORD*)v106 = 0x4000000000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	a1[2] += 16i64;
	v107 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v107, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DisbandSuccess", 0xEui64);
	v108 = a1[2];
	*(_QWORD*)v108 = 0x4008000000000000i64;
	*(_DWORD*)(v108 + 8) = 3;
	a1[2] += 16i64;
	v109 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v109, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DisbandFailed", 0xDui64);
	v110 = a1[2];
	*(_QWORD*)v110 = 0x4010000000000000i64;
	*(_DWORD*)(v110 + 8) = 3;
	a1[2] += 16i64;
	v111 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v111, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KickSuccess", 0xBui64);
	v112 = a1[2];
	*(_QWORD*)v112 = 0x4014000000000000i64;
	*(_DWORD*)(v112 + 8) = 3;
	a1[2] += 16i64;
	v113 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v113, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"KickFailed", 0xAui64);
	v114 = a1[2];
	*(_QWORD*)v114 = 0x4018000000000000i64;
	*(_DWORD*)(v114 + 8) = 3;
	a1[2] += 16i64;
	v115 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v115, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PromoteSuccess", 0xEui64);
	v116 = a1[2];
	*(_QWORD*)v116 = 0x401C000000000000i64;
	*(_DWORD*)(v116 + 8) = 3;
	a1[2] += 16i64;
	v117 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v117, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PromoteFailed", 0xDui64);
	v118 = a1[2];
	*(_QWORD*)v118 = 0x4020000000000000i64;
	*(_DWORD*)(v118 + 8) = 3;
	a1[2] += 16i64;
	v119 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v119, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"FlagsSuccess", 0xCui64);
	v120 = a1[2];
	*(_QWORD*)v120 = 0x4022000000000000i64;
	*(_DWORD*)(v120 + 8) = 3;
	a1[2] += 16i64;
	v121 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v121, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"FlagsFailed", 0xBui64);
	v122 = a1[2];
	*(_QWORD*)v122 = 0x4024000000000000i64;
	*(_DWORD*)(v122 + 8) = 3;
	a1[2] += 16i64;
	v123 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v123, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MemberFlagsSuccess", 0x12ui64);
	v124 = a1[2];
	*(_QWORD*)v124 = 0x4026000000000000i64;
	*(_DWORD*)(v124 + 8) = 3;
	a1[2] += 16i64;
	v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MemberFlagsFailed", 0x11ui64);
	v126 = a1[2];
	*(_QWORD*)v126 = 0x4028000000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v127, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NotInGroup", 0xAui64);
	v128 = a1[2];
	*(_QWORD*)v128 = 0x402A000000000000i64;
	*(_DWORD*)(v128 + 8) = 3;
	a1[2] += 16i64;
	v129 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v129, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ChangeSettingsFailed", 0x14ui64);
	v130 = a1[2];
	*(_QWORD*)v130 = 0x402E000000000000i64;
	*(_DWORD*)(v130 + 8) = 3;
	a1[2] += 16i64;
	v131 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v131, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ChangeSettingsSuccess", 0x15ui64);
	v132 = a1[2];
	*(_QWORD*)v132 = 0x402C000000000000i64;
	*(_DWORD*)(v132 + 8) = 3;
	a1[2] += 16i64;
	v133 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v133, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MentoringInvalidMentor", 0x16ui64);
	v134 = a1[2];
	*(_QWORD*)v134 = 0x4030000000000000i64;
	*(_DWORD*)(v134 + 8) = 3;
	a1[2] += 16i64;
	v135 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v135, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MentoringInvalidMentee", 0x16ui64);
	v136 = a1[2];
	*(_QWORD*)v136 = 0x4031000000000000i64;
	*(_DWORD*)(v136 + 8) = 3;
	a1[2] += 16i64;
	v137 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v137, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidGroup", 0xCui64);
	v138 = a1[2];
	*(_QWORD*)v138 = 0x4032000000000000i64;
	*(_DWORD*)(v138 + 8) = 3;
	a1[2] += 16i64;
	v139 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v139, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MentoringSelf", 0xDui64);
	v140 = a1[2];
	*(_QWORD*)v140 = 0x4033000000000000i64;
	*(_DWORD*)(v140 + 8) = 3;
	a1[2] += 16i64;
	v141 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v141, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ReadyCheckFailed", 0x10ui64);
	v142 = a1[2];
	*(_QWORD*)v142 = 0x4034000000000000i64;
	*(_DWORD*)(v142 + 8) = 3;
	a1[2] += 16i64;
	v143 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v143, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MentoringNotAllowed", 0x13ui64);
	v144 = a1[2];
	*(_QWORD*)v144 = 0x4037000000000000i64;
	*(_DWORD*)(v144 + 8) = 3;
	a1[2] += 16i64;
	v145 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v145, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MarkingNotPermitted", 0x13ui64);
	v146 = a1[2];
	*(_QWORD*)v146 = 0x4035000000000000i64;
	*(_DWORD*)(v146 + 8) = 3;
	a1[2] += 16i64;
	v147 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v147, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidMarkIndex", 0x10ui64);
	v148 = a1[2];
	*(_QWORD*)v148 = 0x4036000000000000i64;
	*(_DWORD*)(v148 + 8) = 3;
	a1[2] += 16i64;
	v149 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v149, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidMarkTarget", 0x11ui64);
	v150 = a1[2];
	*(_QWORD*)v150 = 0x4038000000000000i64;
	*(_DWORD*)(v150 + 8) = 3;
	a1[2] += 16i64;
	v151 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v151, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MentoringInCombat", 0x11ui64);
	v152 = a1[2];
	*(_QWORD*)v152 = 0x4039000000000000i64;
	*(_DWORD*)(v152 + 8) = 3;
	a1[2] += 16i64;
	v153 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v153, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400EFF50((__int64)a1, v154, (unsigned __int64*)"MentoringLowestLevel", 26);
	sub_1400EFF50((__int64)a1, v155, (unsigned __int64*)"MentoringNoAction", 29);
	sub_1400EFF50((__int64)a1, v156, (unsigned __int64*)"OrderInvalidMember", 30);
	sub_1400EFF50((__int64)a1, v157, (unsigned __int64*)"OrderFailedLeader", 31);
	sub_1400EFF50((__int64)a1, v158, (unsigned __int64*)"AlreadyInGroupInstance", 27);
	sub_1400EFF50((__int64)a1, v159, (unsigned __int64*)"OrderFailedInUse", 33);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Difficulty", 0xAui64);
	sub_140058900((__int64)a1, v160, 0);
	sub_1400EFF50((__int64)a1, v161, (unsigned __int64*)"Normal", 0);
	sub_1400EFF50((__int64)a1, v162, (unsigned __int64*)"Veteran", 1);
	sub_1400EFF50((__int64)a1, v163, (unsigned __int64*)"Count", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvitationMethod", 0x10ui64);
	sub_140058900((__int64)a1, v164, 0);
	sub_1400EFF50((__int64)a1, v165, (unsigned __int64*)"Open", 0);
	sub_1400EFF50((__int64)a1, v166, (unsigned __int64*)"Neutral", 1);
	sub_1400EFF50((__int64)a1, v167, (unsigned __int64*)"Closed", 2);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v168 = sub_140062650((__int64)a1, (unsigned __int64*)"GroupLib", 8ui64);
	v171 = 4;
	v170 = v168;
	sub_14005EA50((__int64)a1, a1 + 15, (int*)&v170, (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 16i64;
	return 1i64;
}
// 1407467E5: variable 'v154' is possibly undefined
// 1407467FA: variable 'v155' is possibly undefined
// 14074680F: variable 'v156' is possibly undefined
// 140746824: variable 'v157' is possibly undefined
// 140746839: variable 'v158' is possibly undefined
// 14074684E: variable 'v159' is possibly undefined
// 14074688B: variable 'v160' is possibly undefined
// 14074689D: variable 'v161' is possibly undefined
// 1407468B2: variable 'v162' is possibly undefined
// 1407468C7: variable 'v163' is possibly undefined
// 140746904: variable 'v164' is possibly undefined
// 140746916: variable 'v165' is possibly undefined
// 14074692B: variable 'v166' is possibly undefined
// 140746940: variable 'v167' is possibly undefined
// 140B74D50: using guessed type char *off_140B74D50;

