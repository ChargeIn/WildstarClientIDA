#include "../winhttp.h"

//----- (00000001406625D0) ----------------------------------------------------
__int64 __fastcall sub_1406625D0(_QWORD* a1)
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
	__int64 v104; // rax
	unsigned int* v105; // r9
	__int64 v106; // rax
	__int64 v107; // rbx
	__int64 v108; // rax
	unsigned int* v109; // r9
	__int64 v110; // rbx
	__int64 v111; // rsi
	__int64 v112; // rdx
	wchar_t** v113; // rbx
	__int64* v114; // rax
	__int64 v116; // [rsp+20h] [rbp-10h] BYREF
	int v117; // [rsp+28h] [rbp-8h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Quest");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v116 = v4;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v116, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5B8C0;
	if (off_140C5B8C0)
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
			v116 = v17;
			v117 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v116, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "Quest", &off_140B6FCC0);
	v19 = a1[2];
	*(_DWORD*)(v19 + 8) = 3;
	*(_QWORD*)v19 = 0x3FF0000000000000i64;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_Item", 0x15ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v116 = v21;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v116, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x4000000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_Reputation", 0x1Bui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v116 = v25;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v116, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4008000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_Money", 0x16ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v116 = v29;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v116, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4010000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_TradeSkillXp", 0x1Dui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v116 = v33;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v116, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_QWORD*)v35 = 0x4014000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_GrantTradeskill", 0x20ui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v116 = v37;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v116, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4018000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_AccountItem", 0x1Cui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v116 = v41;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v116, v42);
	a1[2] -= 16i64;
	v43 = a1[2];
	*(_QWORD*)v43 = 0x401C000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = a1[2];
	v45 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_AccountCurrency", 0x20ui64);
	v46 = (unsigned int*)(a1[2] - 16i64);
	v116 = v45;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v44 - 32), (int*)&v116, v46);
	a1[2] -= 16i64;
	v47 = a1[2];
	*(_QWORD*)v47 = 0x4020000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = a1[2];
	v49 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_GenericUnlockAccount", 0x25ui64);
	v50 = (unsigned int*)(a1[2] - 16i64);
	v116 = v49;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v48 - 32), (int*)&v116, v50);
	a1[2] -= 16i64;
	v51 = a1[2];
	*(_QWORD*)v51 = 0x4022000000000000i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = a1[2];
	v53 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_GenericUnlockCharacter", 0x27ui64);
	v54 = (unsigned int*)(a1[2] - 16i64);
	v116 = v53;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v52 - 32), (int*)&v116, v54);
	a1[2] -= 16i64;
	v55 = a1[2];
	*(_QWORD*)v55 = 0x4024000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = a1[2];
	v57 = sub_140062650((__int64)a1, (unsigned __int64*)"Quest2RewardType_RotationEssence", 0x20ui64);
	v58 = (unsigned int*)(a1[2] - 16i64);
	v116 = v57;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v56 - 32), (int*)&v116, v58);
	a1[2] -= 16i64;
	v59 = a1[2];
	*(_QWORD*)v59 = 0i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = a1[2];
	v61 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Unknown", 0x12ui64);
	v62 = (unsigned int*)(a1[2] - 16i64);
	v116 = v61;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v60 - 32), (int*)&v116, v62);
	a1[2] -= 16i64;
	v63 = a1[2];
	*(_QWORD*)v63 = 0x3FF0000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = a1[2];
	v65 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Accepted", 0x13ui64);
	v66 = (unsigned int*)(a1[2] - 16i64);
	v116 = v65;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v64 - 32), (int*)&v116, v66);
	a1[2] -= 16i64;
	v67 = a1[2];
	*(_QWORD*)v67 = 0x4000000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = a1[2];
	v116 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Achieved", 0x13ui64);
	v69 = (unsigned int*)(a1[2] - 16i64);
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v68 - 32), (int*)&v116, v69);
	a1[2] -= 16i64;
	v70 = a1[2];
	*(_QWORD*)v70 = 0x4008000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	a1[2] += 16i64;
	v71 = a1[2];
	v72 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Completed", 0x14ui64);
	v73 = (unsigned int*)(a1[2] - 16i64);
	v116 = v72;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v71 - 32), (int*)&v116, v73);
	a1[2] -= 16i64;
	v74 = a1[2];
	*(_QWORD*)v74 = 0x4010000000000000i64;
	*(_DWORD*)(v74 + 8) = 3;
	a1[2] += 16i64;
	v75 = a1[2];
	v76 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Botched", 0x12ui64);
	v77 = (unsigned int*)(a1[2] - 16i64);
	v116 = v76;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v75 - 32), (int*)&v116, v77);
	a1[2] -= 16i64;
	v78 = a1[2];
	*(_QWORD*)v78 = 0x4014000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	a1[2] += 16i64;
	v79 = a1[2];
	v80 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Mentioned", 0x14ui64);
	v81 = (unsigned int*)(a1[2] - 16i64);
	v116 = v80;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v79 - 32), (int*)&v116, v81);
	a1[2] -= 16i64;
	v82 = a1[2];
	*(_QWORD*)v82 = 0x4018000000000000i64;
	*(_DWORD*)(v82 + 8) = 3;
	a1[2] += 16i64;
	v83 = a1[2];
	v84 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Abandoned", 0x14ui64);
	v85 = (unsigned int*)(a1[2] - 16i64);
	v116 = v84;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v83 - 32), (int*)&v116, v85);
	a1[2] -= 16i64;
	v86 = a1[2];
	*(_QWORD*)v86 = 0x401C000000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	a1[2] += 16i64;
	v87 = a1[2];
	v88 = sub_140062650((__int64)a1, (unsigned __int64*)"QuestState_Ignored", 0x12ui64);
	v89 = (unsigned int*)(a1[2] - 16i64);
	v116 = v88;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v87 - 32), (int*)&v116, v89);
	a1[2] -= 16i64;
	v90 = a1[2];
	*(_QWORD*)v90 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v90 + 8) = 3;
	a1[2] += 16i64;
	v91 = a1[2];
	v92 = sub_140062650((__int64)a1, (unsigned __int64*)"kQuestInvalidChecklistIndex", 0x1Bui64);
	v93 = (unsigned int*)(a1[2] - 16i64);
	v116 = v92;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v91 - 32), (int*)&v116, v93);
	a1[2] -= 16i64;
	v94 = a1[2];
	*(_QWORD*)v94 = 0x4018000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	a1[2] += 16i64;
	v95 = a1[2];
	v96 = sub_140062650((__int64)a1, (unsigned __int64*)"kQuestMaxObjective", 0x12ui64);
	v97 = (unsigned int*)(a1[2] - 16i64);
	v116 = v96;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v95 - 32), (int*)&v116, v97);
	a1[2] -= 16i64;
	v98 = a1[2];
	*(_QWORD*)v98 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v98 + 8) = 3;
	a1[2] += 16i64;
	v99 = a1[2];
	v100 = sub_140062650((__int64)a1, (unsigned __int64*)"kQuestInvalidObjectiveIdx", 0x19ui64);
	v101 = (unsigned int*)(a1[2] - 16i64);
	v116 = v100;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v99 - 32), (int*)&v116, v101);
	a1[2] -= 16i64;
	v102 = a1[2];
	*(_QWORD*)v102 = 0i64;
	*(_DWORD*)(v102 + 8) = 3;
	a1[2] += 16i64;
	v103 = a1[2];
	v104 = sub_140062650((__int64)a1, (unsigned __int64*)"kQuestInvalidQuestId", 0x14ui64);
	v105 = (unsigned int*)(a1[2] - 16i64);
	v116 = v104;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v103 - 32), (int*)&v116, v105);
	a1[2] -= 16i64;
	v106 = a1[2];
	*(_QWORD*)v106 = 0x40C3880000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	a1[2] += 16i64;
	v107 = a1[2];
	v108 = sub_140062650((__int64)a1, (unsigned __int64*)"kQuestShareAcceptTimeoutMs", 0x1Aui64);
	v109 = (unsigned int*)(a1[2] - 16i64);
	v116 = v108;
	v117 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v107 - 32), (int*)&v116, v109);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"QuestRepeatPeriod", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v110 = a1[2];
	v111 = 5i64;
	*(_QWORD*)v110 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v110 + 8) = 5;
	a1[2] += 16i64;
	v113 = &off_140C2E630;
	do
	{
		sub_1400F06F0((__int64)a1, v112, *v113, *((_DWORD*)v113 + 2));
		v113 += 2;
		--v111;
	} while (v111);
	v114 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v114, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1406626E3: variable 'v14' is possibly undefined
// 140662FDA: variable 'v112' is possibly undefined
// 140B6FCC0: using guessed type void *off_140B6FCC0;
// 140C2E630: using guessed type wchar_t *off_140C2E630;
// 140C5B8C0: using guessed type char *off_140C5B8C0;

