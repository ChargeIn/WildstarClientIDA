//----- (0000000140687D40) ----------------------------------------------------
__int64 __fastcall sub_140687D40(_QWORD* a1)
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
	unsigned int* v70; // r9
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
	__int64 v106; // r9
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
	__int64 v121; // rax
	unsigned int* v122; // r9
	__int64 v123; // rax
	__int64 v124; // rbx
	__int64 v125; // rax
	unsigned int* v126; // r9
	__int64 v127; // rax
	__int64 v128; // rbx
	__int64 v129; // rax
	unsigned int* v130; // r9
	__int64 v131; // rax
	__int64 v132; // rbx
	__int64 v133; // rax
	unsigned int* v134; // r9
	__int64 v135; // rax
	__int64 v136; // rbx
	__int64 v137; // rsi
	__int64 v138; // rax
	unsigned int* v139; // r9
	__int64 v140; // rax
	__int64 v141; // rbx
	__int64 v142; // rax
	unsigned int* v143; // r9
	__int64 v144; // rax
	__int64 v145; // rbx
	__int64 v146; // rax
	unsigned int* v147; // r9
	__int64 v148; // rax
	__int64 v149; // rbx
	__int64 v150; // rax
	unsigned int* v151; // r9
	__int64 v152; // rax
	__int64 v153; // rbx
	__int64 v154; // rax
	unsigned int* v155; // r9
	__int64 v156; // rax
	__int64 v157; // rbx
	__int64 v158; // rax
	unsigned int* v159; // r9
	__int64 v160; // rax
	__int64 v161; // rbx
	__int64 v162; // rax
	unsigned int* v163; // r9
	__int64 v164; // rbx
	__int64 v165; // rax
	__int64 v166; // rdx
	wchar_t** v167; // rbx
	__int64* v168; // rax
	__int64 v170; // [rsp+20h] [rbp-10h] BYREF
	int v171; // [rsp+28h] [rbp-8h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.PublicEvent");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v170 = v4;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v170, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5CA00;
	if (off_140C5CA00)
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
			v170 = v17;
			v171 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v170, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "PublicEvent", &off_140B6FE60);
	v19 = a1[2];
	*(_DWORD*)(v19 + 8) = 3;
	*(_QWORD*)v19 = 0i64;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventParticipantRemoveReason_Logout", 0x29ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v170 = v21;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v170, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventParticipantRemoveReason_CompleteSuccess", 0x32ui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v170 = v25;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v170, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4000000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventParticipantRemoveReason_CompleteFailure", 0x32ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v170 = v29;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v170, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4008000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventParticipantRemoveReason_LeftArea", 0x2Bui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v170 = v33;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v170, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_QWORD*)v35 = 0i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardTier_None", 0x1Aui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v170 = v37;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v170, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0x3FF0000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardTier_Bronze", 0x1Cui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v170 = v41;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v170, v42);
	a1[2] -= 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4000000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = a1[2];
	v45 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardTier_Silver", 0x1Cui64);
	v46 = (unsigned int*)(a1[2] - 16i64);
	v170 = v45;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v44 - 32), (int*)&v170, v46);
	a1[2] -= 16i64;
	v47 = a1[2];
	*(_QWORD*)v47 = 0x4008000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardTier_Gold", 0x1Aui64);
	v50 = (unsigned int*)(a1[2] - 16i64);
	v170 = v49;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v48 - 32), (int*)&v170, v50);
	a1[2] -= 16i64;
	v51 = a1[2];
	*(_QWORD*)v51 = 0i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = a1[2];
	v53 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardType_None", 0x1Aui64);
	v54 = (unsigned int*)(a1[2] - 16i64);
	v170 = v53;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v52 - 32), (int*)&v170, v54);
	a1[2] -= 16i64;
	v55 = a1[2];
	*(_QWORD*)v55 = 0x3FF0000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = a1[2];
	v57 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardType_Individual", 0x20ui64);
	v58 = (unsigned int*)(a1[2] - 16i64);
	v170 = v57;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v56 - 32), (int*)&v170, v58);
	a1[2] -= 16i64;
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4000000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = a1[2];
	v61 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardType_Speed", 0x1Bui64);
	v62 = (unsigned int*)(a1[2] - 16i64);
	v170 = v61;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v60 - 32), (int*)&v170, v62);
	a1[2] -= 16i64;
	v63 = a1[2];
	*(_QWORD*)v63 = 0x4008000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = a1[2];
	v65 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardType_Completion", 0x20ui64);
	v66 = (unsigned int*)(a1[2] - 16i64);
	v170 = v65;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v64 - 32), (int*)&v170, v66);
	a1[2] -= 16i64;
	v67 = a1[2];
	*(_QWORD*)v67 = 0x4010000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = a1[2];
	v69 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardType_Nightmare", 0x1Fui64);
	v70 = (unsigned int*)(a1[2] - 16i64);
	v170 = v69;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v68 - 32), (int*)&v170, v70);
	a1[2] -= 16i64;
	v71 = a1[2];
	*(_QWORD*)v71 = 0x4014000000000000i64;
	*(_DWORD*)(v71 + 8) = 3;
	a1[2] += 16i64;
	v72 = a1[2];
	v73 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventRewardType_Script", 0x1Cui64);
	v74 = (unsigned int*)(a1[2] - 16i64);
	v170 = v73;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v72 - 32), (int*)&v170, v74);
	a1[2] -= 16i64;
	v75 = a1[2];
	*(_QWORD*)v75 = 0i64;
	*(_DWORD*)(v75 + 8) = 3;
	a1[2] += 16i64;
	v76 = a1[2];
	v77 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_WorldEvent", 0x1Aui64);
	v78 = (unsigned int*)(a1[2] - 16i64);
	v170 = v77;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v76 - 32), (int*)&v170, v78);
	a1[2] -= 16i64;
	v79 = a1[2];
	*(_QWORD*)v79 = 0x3FF0000000000000i64;
	*(_DWORD*)(v79 + 8) = 3;
	a1[2] += 16i64;
	v80 = a1[2];
	v81 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Dungeon", 0x17ui64);
	v82 = (unsigned int*)(a1[2] - 16i64);
	v170 = v81;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v80 - 32), (int*)&v170, v82);
	a1[2] -= 16i64;
	v83 = a1[2];
	*(_QWORD*)v83 = 0x4000000000000000i64;
	*(_DWORD*)(v83 + 8) = 3;
	a1[2] += 16i64;
	v84 = a1[2];
	v85 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_PVP_Warplot", 0x1Bui64);
	v86 = (unsigned int*)(a1[2] - 16i64);
	v170 = v85;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v84 - 32), (int*)&v170, v86);
	a1[2] -= 16i64;
	v87 = a1[2];
	*(_QWORD*)v87 = 0x4008000000000000i64;
	*(_DWORD*)(v87 + 8) = 3;
	a1[2] += 16i64;
	v88 = a1[2];
	v89 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_PVP_Battleground_Vortex", 0x27ui64);
	v90 = (unsigned int*)(a1[2] - 16i64);
	v170 = v89;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v88 - 32), (int*)&v170, v90);
	a1[2] -= 16i64;
	v91 = a1[2];
	*(_QWORD*)v91 = 0x4010000000000000i64;
	*(_DWORD*)(v91 + 8) = 3;
	a1[2] += 16i64;
	v92 = a1[2];
	v93 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_PVP_Battleground_HoldTheLine", 0x2Cui64);
	v94 = (unsigned int*)(a1[2] - 16i64);
	v170 = v93;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v92 - 32), (int*)&v170, v94);
	a1[2] -= 16i64;
	v95 = a1[2];
	*(_QWORD*)v95 = 0x4014000000000000i64;
	*(_DWORD*)(v95 + 8) = 3;
	a1[2] += 16i64;
	v96 = a1[2];
	v97 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_PVP_Battleground_Cannon", 0x27ui64);
	v98 = (unsigned int*)(a1[2] - 16i64);
	v170 = v97;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v96 - 32), (int*)&v170, v98);
	a1[2] -= 16i64;
	v99 = a1[2];
	*(_QWORD*)v99 = 0x4018000000000000i64;
	*(_DWORD*)(v99 + 8) = 3;
	a1[2] += 16i64;
	v100 = a1[2];
	v101 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_PVP_Battleground_Sabotage", 0x29ui64);
	v102 = (unsigned int*)(a1[2] - 16i64);
	v170 = v101;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v100 - 32), (int*)&v170, v102);
	a1[2] -= 16i64;
	v103 = a1[2];
	*(_QWORD*)v103 = 0x401C000000000000i64;
	*(_DWORD*)(v103 + 8) = 3;
	a1[2] += 16i64;
	v104 = a1[2];
	v105 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Malgrave", 0x22ui64);
	v106 = a1[2];
	v171 = 4;
	v170 = v105;
	sub_14005EA50((__int64)a1, (__int64*)(v104 - 32), (int*)&v170, (unsigned int*)(v106 - 16));
	a1[2] -= 16i64;
	v107 = a1[2];
	*(_DWORD*)(v107 + 8) = 3;
	*(_QWORD*)v107 = 0x4020000000000000i64;
	a1[2] += 16i64;
	v108 = a1[2];
	v109 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Hycrest", 0x21ui64);
	v110 = (unsigned int*)(a1[2] - 16i64);
	v170 = v109;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v108 - 32), (int*)&v170, v110);
	a1[2] -= 16i64;
	v111 = a1[2];
	*(_QWORD*)v111 = 0x4022000000000000i64;
	*(_DWORD*)(v111 + 8) = 3;
	a1[2] += 16i64;
	v112 = a1[2];
	v113 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Skywatch", 0x22ui64);
	v114 = (unsigned int*)(a1[2] - 16i64);
	v170 = v113;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v112 - 32), (int*)&v170, v114);
	a1[2] -= 16i64;
	v115 = a1[2];
	*(_QWORD*)v115 = 0x4028000000000000i64;
	*(_DWORD*)(v115 + 8) = 3;
	a1[2] += 16i64;
	v116 = a1[2];
	v117 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Whitevale", 0x23ui64);
	v118 = (unsigned int*)(a1[2] - 16i64);
	v170 = v117;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v116 - 32), (int*)&v170, v118);
	a1[2] -= 16i64;
	v119 = a1[2];
	*(_QWORD*)v119 = 0x402C000000000000i64;
	*(_DWORD*)(v119 + 8) = 3;
	a1[2] += 16i64;
	v120 = a1[2];
	v121 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Galeras", 0x21ui64);
	v122 = (unsigned int*)(a1[2] - 16i64);
	v170 = v121;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v120 - 32), (int*)&v170, v122);
	a1[2] -= 16i64;
	v123 = a1[2];
	*(_DWORD*)(v123 + 8) = 3;
	*(_QWORD*)v123 = 0x402E000000000000i64;
	a1[2] += 16i64;
	v124 = a1[2];
	v125 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Astrovoid", 0x23ui64);
	v126 = (unsigned int*)(a1[2] - 16i64);
	v170 = v125;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v124 - 32), (int*)&v170, v126);
	a1[2] -= 16i64;
	v127 = a1[2];
	*(_QWORD*)v127 = 0x4031000000000000i64;
	*(_DWORD*)(v127 + 8) = 3;
	a1[2] += 16i64;
	v128 = a1[2];
	v129 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_Farside", 0x21ui64);
	v130 = (unsigned int*)(a1[2] - 16i64);
	v170 = v129;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v128 - 32), (int*)&v170, v130);
	a1[2] -= 16i64;
	v131 = a1[2];
	*(_QWORD*)v131 = 0x4024000000000000i64;
	*(_DWORD*)(v131 + 8) = 3;
	a1[2] += 16i64;
	v132 = a1[2];
	v133 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_PVP_Arena", 0x19ui64);
	v134 = (unsigned int*)(a1[2] - 16i64);
	v170 = v133;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v132 - 32), (int*)&v170, v134);
	a1[2] -= 16i64;
	v135 = a1[2];
	*(_QWORD*)v135 = 0x4026000000000000i64;
	*(_DWORD*)(v135 + 8) = 3;
	a1[2] += 16i64;
	v136 = a1[2];
	v137 = 24i64;
	v138 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_SubEvent", 0x18ui64);
	v139 = (unsigned int*)(a1[2] - 16i64);
	v170 = v138;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v136 - 32), (int*)&v170, v139);
	a1[2] -= 16i64;
	v140 = a1[2];
	*(_QWORD*)v140 = 0x402A000000000000i64;
	*(_DWORD*)(v140 + 8) = 3;
	a1[2] += 16i64;
	v141 = a1[2];
	v142 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_NorthernWilds", 0x27ui64);
	v143 = (unsigned int*)(a1[2] - 16i64);
	v170 = v142;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v141 - 32), (int*)&v170, v143);
	a1[2] -= 16i64;
	v144 = a1[2];
	*(_QWORD*)v144 = 0x4030000000000000i64;
	*(_DWORD*)(v144 + 8) = 3;
	a1[2] += 16i64;
	v145 = a1[2];
	v146 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_LiveEvent", 0x19ui64);
	v147 = (unsigned int*)(a1[2] - 16i64);
	v170 = v146;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v145 - 32), (int*)&v170, v147);
	a1[2] -= 16i64;
	v148 = a1[2];
	*(_QWORD*)v148 = 0x4032000000000000i64;
	*(_DWORD*)(v148 + 8) = 3;
	a1[2] += 16i64;
	v149 = a1[2];
	v150 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Adventure_LevianBay", 0x23ui64);
	v151 = (unsigned int*)(a1[2] - 16i64);
	v170 = v150;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v149 - 32), (int*)&v170, v151);
	a1[2] -= 16i64;
	v152 = a1[2];
	*(_QWORD*)v152 = 0x4033000000000000i64;
	*(_DWORD*)(v152 + 8) = 3;
	a1[2] += 16i64;
	v153 = a1[2];
	v154 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Shiphand", 0x18ui64);
	v155 = (unsigned int*)(a1[2] - 16i64);
	v170 = v154;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v153 - 32), (int*)&v170, v155);
	a1[2] -= 16i64;
	v156 = a1[2];
	*(_QWORD*)v156 = 0x4035000000000000i64;
	*(_DWORD*)(v156 + 8) = 3;
	a1[2] += 16i64;
	v157 = a1[2];
	v158 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_NonCombatEvent", 0x1Eui64);
	v159 = (unsigned int*)(a1[2] - 16i64);
	v170 = v158;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v157 - 32), (int*)&v170, v159);
	a1[2] -= 16i64;
	v160 = a1[2];
	*(_QWORD*)v160 = 0x4036000000000000i64;
	*(_DWORD*)(v160 + 8) = 3;
	a1[2] += 16i64;
	v161 = a1[2];
	v162 = sub_140062650((__int64)a1, (unsigned __int64*)"PublicEventType_Raid", 0x14ui64);
	v163 = (unsigned int*)(a1[2] - 16i64);
	v170 = v162;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v161 - 32), (int*)&v170, v163);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PublicEventStatType", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v164 = a1[2];
	v165 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v164 + 8) = 5;
	*(_QWORD*)v164 = v165;
	a1[2] += 16i64;
	v167 = &off_140C338A0;
	do
	{
		sub_1400F06F0((__int64)a1, v166, *v167, *((_DWORD*)v167 + 2));
		v167 += 2;
		--v137;
	} while (v137);
	v168 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v168, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140687E53: variable 'v14' is possibly undefined
// 140688B9A: variable 'v166' is possibly undefined
// 140B6FE60: using guessed type void *off_140B6FE60;
// 140C338A0: using guessed type wchar_t *off_140C338A0;
// 140C5CA00: using guessed type char *off_140C5CA00;

