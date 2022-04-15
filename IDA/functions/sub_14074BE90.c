#include "../winhttp.h"

//----- (000000014074BE90) ----------------------------------------------------
__int64 __fastcall sub_14074BE90(_QWORD* a1)
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
	__int64 v53; // rax
	__int64 v54; // rbx
	__int64 v55; // rax
	unsigned int* v56; // r9
	__int64 v57; // rax
	__int64 v58; // rbx
	__int64 v59; // rax
	unsigned int* v60; // r9
	__int64 v61; // rax
	__int64 v62; // rbx
	__int64 v63; // rax
	unsigned int* v64; // r9
	__int64 v65; // rax
	__int64 v66; // rbx
	__int64 v67; // rax
	__int64 v68; // r9
	__int64 v69; // rax
	__int64 v70; // rbx
	__int64 v71; // rax
	unsigned int* v72; // r9
	__int64 v73; // rax
	__int64 v74; // rbx
	__int64 v75; // rax
	unsigned int* v76; // r9
	__int64 v77; // rax
	__int64 v78; // rbx
	__int64 v79; // rax
	unsigned int* v80; // r9
	__int64 v81; // rax
	__int64 v82; // rbx
	__int64 v83; // rax
	unsigned int* v84; // r9
	__int64 v85; // rax
	__int64 v86; // rbx
	__int64 v87; // rax
	unsigned int* v88; // r9
	__int64 v89; // rax
	__int64 v90; // rbx
	__int64 v91; // rax
	unsigned int* v92; // r9
	__int64 v93; // rax
	__int64 v94; // rbx
	__int64 v95; // rax
	unsigned int* v96; // r9
	__int64 v97; // rax
	__int64 v98; // rbx
	__int64 v99; // rax
	unsigned int* v100; // r9
	__int64 v101; // rax
	__int64 v102; // rbx
	__int64 v103; // rax
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
	__int64 v170; // [rsp+20h] [rbp-10h] BYREF
	int v171; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "P2PTrading", &off_140B753A0);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_ErrorInitiating", 0x22ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v170 = v4;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v170, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_PlayerLogOut", 0x1Fui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v170 = v8;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v170, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_PlayerCanceled", 0x21ui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v170 = v12;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v170, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_PlayerAcceptedInvite", 0x27ui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v170 = v16;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v170, v17);
	a1[2] -= 16i64;
	v18 = a1[2];
	*(_QWORD*)v18 = 0x4010000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_PlayerDeclinedInvite", 0x27ui64);
	v21 = (unsigned int*)(a1[2] - 16i64);
	v170 = v20;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v170, v21);
	a1[2] -= 16i64;
	v22 = a1[2];
	*(_QWORD*)v22 = 0x4014000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_MissingPlayer", 0x20ui64);
	v25 = (unsigned int*)(a1[2] - 16i64);
	v170 = v24;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v23 - 32), (int*)&v170, v25);
	a1[2] -= 16i64;
	v26 = a1[2];
	*(_QWORD*)v26 = 0x4018000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = a1[2];
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_InitiatorCommitted", 0x25ui64);
	v29 = (unsigned int*)(a1[2] - 16i64);
	v170 = v28;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v27 - 32), (int*)&v170, v29);
	a1[2] -= 16i64;
	v30 = a1[2];
	*(_QWORD*)v30 = 0x401C000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = a1[2];
	v32 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_InitiatorUnCommitted", 0x27ui64);
	v33 = (unsigned int*)(a1[2] - 16i64);
	v170 = v32;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v31 - 32), (int*)&v170, v33);
	a1[2] -= 16i64;
	v34 = a1[2];
	*(_QWORD*)v34 = 0x4020000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	a1[2] += 16i64;
	v35 = a1[2];
	v36 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_TargetCommitted", 0x22ui64);
	v37 = (unsigned int*)(a1[2] - 16i64);
	v170 = v36;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v35 - 32), (int*)&v170, v37);
	a1[2] -= 16i64;
	v38 = a1[2];
	*(_QWORD*)v38 = 0x4022000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = a1[2];
	v40 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_TargetUnCommitted", 0x24ui64);
	v41 = (unsigned int*)(a1[2] - 16i64);
	v170 = v40;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v39 - 32), (int*)&v170, v41);
	a1[2] -= 16i64;
	v42 = a1[2];
	*(_QWORD*)v42 = 0x4024000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	a1[2] += 16i64;
	v43 = a1[2];
	v44 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_NothingToTrade", 0x21ui64);
	v45 = (unsigned int*)(a1[2] - 16i64);
	v170 = v44;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v43 - 32), (int*)&v170, v45);
	a1[2] -= 16i64;
	v46 = a1[2];
	*(_QWORD*)v46 = 0x4026000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	a1[2] += 16i64;
	v47 = a1[2];
	v48 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_FinishedSuccess", 0x22ui64);
	v49 = (unsigned int*)(a1[2] - 16i64);
	v170 = v48;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v47 - 32), (int*)&v170, v49);
	a1[2] -= 16i64;
	v50 = a1[2];
	*(_QWORD*)v50 = 0x4028000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	a1[2] += 16i64;
	v51 = a1[2];
	v52 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_DbFailedToInit", 0x21ui64);
	v171 = 4;
	v170 = v52;
	sub_14005EA50((__int64)a1, (__int64*)(v51 - 32), (int*)&v170, (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 16i64;
	v53 = a1[2];
	*(_DWORD*)(v53 + 8) = 3;
	*(_QWORD*)v53 = 0x402A000000000000i64;
	a1[2] += 16i64;
	v54 = a1[2];
	v55 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_DbFailed", 0x1Bui64);
	v56 = (unsigned int*)(a1[2] - 16i64);
	v170 = v55;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v54 - 32), (int*)&v170, v56);
	a1[2] -= 16i64;
	v57 = a1[2];
	*(_QWORD*)v57 = 0x402C000000000000i64;
	*(_DWORD*)(v57 + 8) = 3;
	a1[2] += 16i64;
	v58 = a1[2];
	v59 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_ErrorAddingItem", 0x22ui64);
	v60 = (unsigned int*)(a1[2] - 16i64);
	v170 = v59;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v58 - 32), (int*)&v170, v60);
	a1[2] -= 16i64;
	v61 = a1[2];
	*(_QWORD*)v61 = 0x402E000000000000i64;
	*(_DWORD*)(v61 + 8) = 3;
	a1[2] += 16i64;
	v62 = a1[2];
	v63 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_ErrorRemovingItem", 0x24ui64);
	v64 = (unsigned int*)(a1[2] - 16i64);
	v170 = v63;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v62 - 32), (int*)&v170, v64);
	a1[2] -= 16i64;
	v65 = a1[2];
	*(_QWORD*)v65 = 0x4030000000000000i64;
	*(_DWORD*)(v65 + 8) = 3;
	a1[2] += 16i64;
	v66 = a1[2];
	v67 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_TargetBusy", 0x1Dui64);
	v68 = a1[2];
	v171 = 4;
	v170 = v67;
	sub_14005EA50((__int64)a1, (__int64*)(v66 - 32), (int*)&v170, (unsigned int*)(v68 - 16));
	a1[2] -= 16i64;
	v69 = a1[2];
	*(_DWORD*)(v69 + 8) = 3;
	*(_QWORD*)v69 = 0x4031000000000000i64;
	a1[2] += 16i64;
	v70 = a1[2];
	v71 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_TargetNotAllowedToTrade", 0x2Aui64);
	v72 = (unsigned int*)(a1[2] - 16i64);
	v170 = v71;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v70 - 32), (int*)&v170, v72);
	a1[2] -= 16i64;
	v73 = a1[2];
	*(_QWORD*)v73 = 0x4032000000000000i64;
	*(_DWORD*)(v73 + 8) = 3;
	a1[2] += 16i64;
	v74 = a1[2];
	v75 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeResultCode_InviteFailedNoTrading", 0x28ui64);
	v76 = (unsigned int*)(a1[2] - 16i64);
	v170 = v75;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v74 - 32), (int*)&v170, v76);
	a1[2] -= 16i64;
	v77 = a1[2];
	*(_QWORD*)v77 = 0i64;
	*(_DWORD*)(v77 + 8) = 3;
	a1[2] += 16i64;
	v78 = a1[2];
	v79 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_Ok", 0x10ui64);
	v80 = (unsigned int*)(a1[2] - 16i64);
	v170 = v79;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v78 - 32), (int*)&v170, v80);
	a1[2] -= 16i64;
	v81 = a1[2];
	*(_QWORD*)v81 = 0x3FF0000000000000i64;
	*(_DWORD*)(v81 + 8) = 3;
	a1[2] += 16i64;
	v82 = a1[2];
	v83 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_Params", 0x14ui64);
	v84 = (unsigned int*)(a1[2] - 16i64);
	v170 = v83;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v82 - 32), (int*)&v170, v84);
	a1[2] -= 16i64;
	v85 = a1[2];
	*(_QWORD*)v85 = 0x4000000000000000i64;
	*(_DWORD*)(v85 + 8) = 3;
	a1[2] += 16i64;
	v86 = a1[2];
	v87 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_MissingPlayer", 0x1Bui64);
	v88 = (unsigned int*)(a1[2] - 16i64);
	v170 = v87;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v86 - 32), (int*)&v170, v88);
	a1[2] -= 16i64;
	v89 = a1[2];
	*(_QWORD*)v89 = 0x4008000000000000i64;
	*(_DWORD*)(v89 + 8) = 3;
	a1[2] += 16i64;
	v90 = a1[2];
	v91 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_NoTarget", 0x16ui64);
	v92 = (unsigned int*)(a1[2] - 16i64);
	v170 = v91;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v90 - 32), (int*)&v170, v92);
	a1[2] -= 16i64;
	v93 = a1[2];
	*(_QWORD*)v93 = 0x4010000000000000i64;
	*(_DWORD*)(v93 + 8) = 3;
	a1[2] += 16i64;
	v94 = a1[2];
	v95 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_AlreadyTrading", 0x1Cui64);
	v96 = (unsigned int*)(a1[2] - 16i64);
	v170 = v95;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v94 - 32), (int*)&v170, v96);
	a1[2] -= 16i64;
	v97 = a1[2];
	*(_QWORD*)v97 = 0x401C000000000000i64;
	*(_DWORD*)(v97 + 8) = 3;
	a1[2] += 16i64;
	v98 = a1[2];
	v99 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_InVehicle", 0x17ui64);
	v100 = (unsigned int*)(a1[2] - 16i64);
	v170 = v99;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v98 - 32), (int*)&v170, v100);
	a1[2] -= 16i64;
	v101 = a1[2];
	*(_QWORD*)v101 = 0x4020000000000000i64;
	*(_DWORD*)(v101 + 8) = 3;
	a1[2] += 16i64;
	v102 = a1[2];
	v103 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_TargetRangeMax", 0x1Cui64);
	v104 = (unsigned int*)(a1[2] - 16i64);
	v170 = v103;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v102 - 32), (int*)&v170, v104);
	a1[2] -= 16i64;
	v105 = a1[2];
	*(_QWORD*)v105 = 0x4024000000000000i64;
	*(_DWORD*)(v105 + 8) = 3;
	a1[2] += 16i64;
	v106 = a1[2];
	v107 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_InCombat", 0x16ui64);
	v108 = (unsigned int*)(a1[2] - 16i64);
	v170 = v107;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v106 - 32), (int*)&v170, v108);
	a1[2] -= 16i64;
	v109 = a1[2];
	*(_QWORD*)v109 = 0x4026000000000000i64;
	*(_DWORD*)(v109 + 8) = 3;
	a1[2] += 16i64;
	v110 = a1[2];
	v111 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_Dead", 0x12ui64);
	v112 = (unsigned int*)(a1[2] - 16i64);
	v170 = v111;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v110 - 32), (int*)&v170, v112);
	a1[2] -= 16i64;
	v113 = a1[2];
	*(_QWORD*)v113 = 0x4028000000000000i64;
	*(_DWORD*)(v113 + 8) = 3;
	a1[2] += 16i64;
	v114 = a1[2];
	v115 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_TargetFaction", 0x1Bui64);
	v116 = (unsigned int*)(a1[2] - 16i64);
	v170 = v115;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v114 - 32), (int*)&v170, v116);
	a1[2] -= 16i64;
	v117 = a1[2];
	*(_QWORD*)v117 = 0x402A000000000000i64;
	*(_DWORD*)(v117 + 8) = 3;
	a1[2] += 16i64;
	v118 = a1[2];
	v119 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_ItemAlreadyInTradeSession", 0x27ui64);
	v120 = a1[2];
	v171 = 4;
	v170 = v119;
	sub_14005EA50((__int64)a1, (__int64*)(v118 - 32), (int*)&v170, (unsigned int*)(v120 - 16));
	a1[2] -= 16i64;
	v121 = a1[2];
	*(_QWORD*)v121 = 0x402C000000000000i64;
	*(_DWORD*)(v121 + 8) = 3;
	a1[2] += 16i64;
	v122 = a1[2];
	v123 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_ItemNotInTradeSession", 0x23ui64);
	v124 = (unsigned int*)(a1[2] - 16i64);
	v170 = v123;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v122 - 32), (int*)&v170, v124);
	a1[2] -= 16i64;
	v125 = a1[2];
	*(_QWORD*)v125 = 0x402E000000000000i64;
	*(_DWORD*)(v125 + 8) = 3;
	a1[2] += 16i64;
	v126 = a1[2];
	v127 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_ItemNotFoundInInventory", 0x25ui64);
	v128 = (unsigned int*)(a1[2] - 16i64);
	v170 = v127;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v126 - 32), (int*)&v170, v128);
	a1[2] -= 16i64;
	v129 = a1[2];
	*(_QWORD*)v129 = 0x4030000000000000i64;
	*(_DWORD*)(v129 + 8) = 3;
	a1[2] += 16i64;
	v130 = a1[2];
	v131 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_DifferentRealms", 0x1Dui64);
	v132 = (unsigned int*)(a1[2] - 16i64);
	v170 = v131;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v130 - 32), (int*)&v170, v132);
	a1[2] -= 16i64;
	v133 = a1[2];
	*(_QWORD*)v133 = 0x4031000000000000i64;
	*(_DWORD*)(v133 + 8) = 3;
	a1[2] += 16i64;
	v134 = a1[2];
	v135 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_BindUnique", 0x18ui64);
	v136 = (unsigned int*)(a1[2] - 16i64);
	v170 = v135;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v134 - 32), (int*)&v170, v136);
	a1[2] -= 16i64;
	v137 = a1[2];
	*(_QWORD*)v137 = 0x4032000000000000i64;
	*(_DWORD*)(v137 + 8) = 3;
	a1[2] += 16i64;
	v138 = a1[2];
	v139 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_NotEnoughMoney", 0x1Cui64);
	v140 = (unsigned int*)(a1[2] - 16i64);
	v170 = v139;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v138 - 32), (int*)&v170, v140);
	a1[2] -= 16i64;
	v141 = a1[2];
	*(_QWORD*)v141 = 0x4014000000000000i64;
	*(_DWORD*)(v141 + 8) = 3;
	a1[2] += 16i64;
	v142 = a1[2];
	v143 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_PlayerHasNotAccepted", 0x22ui64);
	v144 = (unsigned int*)(a1[2] - 16i64);
	v170 = v143;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v142 - 32), (int*)&v170, v144);
	a1[2] -= 16i64;
	v145 = a1[2];
	*(_QWORD*)v145 = 0x4018000000000000i64;
	*(_DWORD*)(v145 + 8) = 3;
	a1[2] += 16i64;
	v146 = a1[2];
	v147 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_PlayerNotOwnerOfItem", 0x22ui64);
	v148 = (unsigned int*)(a1[2] - 16i64);
	v170 = v147;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v146 - 32), (int*)&v170, v148);
	a1[2] -= 16i64;
	v149 = a1[2];
	*(_QWORD*)v149 = 0x4022000000000000i64;
	*(_DWORD*)(v149 + 8) = 3;
	a1[2] += 16i64;
	v150 = a1[2];
	v151 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_WaitingOnDbTransaction", 0x24ui64);
	v152 = (unsigned int*)(a1[2] - 16i64);
	v170 = v151;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v150 - 32), (int*)&v170, v152);
	a1[2] -= 16i64;
	v153 = a1[2];
	*(_QWORD*)v153 = 0x4033000000000000i64;
	*(_DWORD*)(v153 + 8) = 3;
	a1[2] += 16i64;
	v154 = a1[2];
	v155 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_MissingEntitlement", 0x20ui64);
	v156 = (unsigned int*)(a1[2] - 16i64);
	v170 = v155;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v154 - 32), (int*)&v170, v156);
	a1[2] -= 16i64;
	v157 = a1[2];
	*(_QWORD*)v157 = 0x4034000000000000i64;
	*(_DWORD*)(v157 + 8) = 3;
	a1[2] += 16i64;
	v158 = a1[2];
	v159 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_PrivilegeRestricted", 0x21ui64);
	v160 = (unsigned int*)(a1[2] - 16i64);
	v170 = v159;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v158 - 32), (int*)&v170, v160);
	a1[2] -= 16i64;
	v161 = a1[2];
	*(_QWORD*)v161 = 0x4035000000000000i64;
	*(_DWORD*)(v161 + 8) = 3;
	a1[2] += 16i64;
	v162 = a1[2];
	v163 = sub_140062650((__int64)a1, (unsigned __int64*)"P2PTradeError_TooManyItems", 0x1Aui64);
	v164 = (unsigned int*)(a1[2] - 16i64);
	v170 = v163;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v162 - 32), (int*)&v170, v164);
	a1[2] -= 16i64;
	v165 = a1[2];
	*(_QWORD*)v165 = 0x4020000000000000i64;
	*(_DWORD*)(v165 + 8) = 3;
	a1[2] += 16i64;
	v166 = a1[2];
	v167 = sub_140062650((__int64)a1, (unsigned __int64*)"kMaxTradeItems", 0xEui64);
	v168 = (unsigned int*)(a1[2] - 16i64);
	v170 = v167;
	v171 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v166 - 32), (int*)&v170, v168);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B753A0: using guessed type char *off_140B753A0;

