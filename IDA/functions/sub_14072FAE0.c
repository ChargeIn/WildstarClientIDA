#include "../winhttp.h"

//----- (000000014072FAE0) ----------------------------------------------------
__int64 __fastcall sub_14072FAE0(_QWORD* a1)
{
	unsigned int v2; // r12d
	unsigned int v3; // eax
	unsigned int v4; // r13d
	__int64 v5; // rax
	__int64 v6; // r15
	int* v7; // rsi
	__int64 i; // rax
	__int64 v9; // r14
	_WORD* v10; // rax
	__int64 v11; // rax
	unsigned __int64 v13; // rcx
	int* v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned __int16* v17; // rsi
	double v18; // xmm0_8
	__int64 v19; // r14
	unsigned __int64* v20; // rbx
	unsigned __int64 v21; // r8
	__int64 v22; // rax
	unsigned int* v23; // r9
	__int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	unsigned int* v27; // r9
	__int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	unsigned int* v31; // r9
	__int64 v32; // rax
	__int64 v33; // rbx
	__int64 v34; // rax
	unsigned int* v35; // r9
	__int64 v36; // rax
	__int64 v37; // rbx
	__int64 v38; // rax
	unsigned int* v39; // r9
	__int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rax
	unsigned int* v43; // r9
	__int64 v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	unsigned int* v47; // r9
	__int64 v48; // rax
	__int64 v49; // rbx
	__int64 v50; // rax
	unsigned int* v51; // r9
	__int64 v52; // rax
	__int64 v53; // rbx
	__int64 v54; // rax
	unsigned int* v55; // r9
	__int64 v56; // rax
	__int64 v57; // rbx
	__int64 v58; // rax
	unsigned int* v59; // r9
	__int64 v60; // rax
	__int64 v61; // rbx
	__int64 v62; // rax
	unsigned int* v63; // r9
	__int64 v64; // rax
	__int64 v65; // rbx
	__int64 v66; // rax
	unsigned int* v67; // r9
	__int64 v68; // rax
	__int64 v69; // rbx
	__int64 v70; // rax
	unsigned int* v71; // r9
	__int64 v72; // rax
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // r9
	__int64 v76; // rax
	__int64 v77; // rbx
	__int64 v78; // rax
	unsigned int* v79; // r9
	__int64 v80; // rax
	__int64 v81; // rbx
	__int64 v82; // rax
	unsigned int* v83; // r9
	__int64 v84; // rax
	__int64 v85; // rbx
	__int64 v86; // rax
	unsigned int* v87; // r9
	__int64 v88; // rax
	__int64 v89; // rbx
	__int64 v90; // rax
	unsigned int* v91; // r9
	__int64 v92; // rax
	__int64 v93; // rbx
	__int64 v94; // rax
	unsigned int* v95; // r9
	__int64 v96; // rax
	__int64 v97; // rbx
	__int64 v98; // rax
	unsigned int* v99; // r9
	__int64 v100; // rax
	__int64 v101; // rbx
	__int64 v102; // rax
	unsigned int* v103; // r9
	__int64 v104; // rax
	__int64 v105; // rbx
	__int64 v106; // rax
	unsigned int* v107; // r9
	__int64 v108; // rax
	__int64 v109; // rbx
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
	__int64 v126; // r9
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
	__int64 v137; // rax
	unsigned int* v138; // r9
	__int64 v139; // rax
	__int64 v140; // rbx
	__int64 v141; // rax
	unsigned int* v142; // r9
	__int64 v144; // [rsp+20h] [rbp-50h] BYREF
	int v145; // [rsp+28h] [rbp-48h]
	__int64 v146; // [rsp+30h] [rbp-40h] BYREF
	int* v147; // [rsp+38h] [rbp-38h]
	_WORD* v148; // [rsp+40h] [rbp-30h]
	__int64 v149; // [rsp+48h] [rbp-28h]
	__int64 v150; // [rsp+50h] [rbp-20h] BYREF
	unsigned __int64* v151; // [rsp+58h] [rbp-18h]

	sub_140057020(a1, "ChatSystemLib", &off_140B74710);
	v2 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A69870, qword_140C63858);
	}
	else
	{
		if (dword_140C6528C || (int)sub_1401F1E80() < 0)
			goto LABEL_37;
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64728 + 40i64))(qword_140C64728);
	}
	v4 = v3;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (dword_140C6528C)
			{
				v6 = 0i64;
			}
			else
			{
				if ((int)sub_1401F1E80() >= 0)
				{
					v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64728 + 32i64))(qword_140C64728, v2);
					goto LABEL_14;
				}
				v6 = 0i64;
			}
		LABEL_15:
			v7 = 0i64;
			v147 = 0i64;
			v149 = 0i64;
			for (i = 0i64; aChatchannel[i]; ++i)
				;
			v9 = (2 * i) >> 1;
			if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v7 = sub_14018B280(2 * (v9 + 1), 0);
				v147 = v7;
				v149 = (__int64)v7 + 2 * v9 + 2;
			}
			sub_1407DB590(v7, (int*)L"ChatChannel", 2 * v9);
			v10 = (_WORD*)v7 + v9;
			v148 = v10;
			if (v10)
				*v10 = 0;
			v11 = 0i64;
			while (*((_WORD*)&unk_1409F909C + ++v11) != 0)
				;
			sub_14001C310(&v146, (int*)&unk_1409F909C, (int*)((char*)&unk_1409F909C + 2 * v11));
			v13 = *(_QWORD*)(v6 + 8);
			if (v13)
			{
				if (v13 <= qword_140C3FE70)
					v14 = (int*)(v13 + qword_140C3FE68);
				else
					v14 = 0i64;
			}
			else
			{
				v14 = 0i64;
			}
			v15 = 0i64;
			if (*(_WORD*)v14)
			{
				do
					++v15;
				while (*((_WORD*)v14 + v15));
			}
			sub_14001C310(&v146, v14, (int*)((char*)v14 + 2 * v15));
			v16 = a1[2];
			v17 = (unsigned __int16*)v147;
			v18 = (double)*(int*)v6;
			*(_DWORD*)(v16 + 8) = 3;
			*(double*)v16 = v18;
			a1[2] += 16i64;
			sub_14018F0E0(&v150, v17);
			v19 = a1[2];
			v20 = v151;
			v21 = -1i64;
			do
				++v21;
			while (*((_BYTE*)v151 + v21));
			v22 = sub_140062650((__int64)a1, v151, v21);
			v23 = (unsigned int*)(a1[2] - 16i64);
			v144 = v22;
			v145 = 4;
			sub_14005EA50((__int64)a1, (__int64*)(v19 - 32), (int*)&v144, v23);
			a1[2] -= 16i64;
			if (v20)
				sub_14018B900((__int64)v20, 0);
			if (v17)
				sub_14018B900((__int64)v17, 0);
			if (++v2 >= v4)
				goto LABEL_37;
		}
		v5 = qword_140C63848(off_140A69870, v2, qword_140C63858);
	LABEL_14:
		v6 = v5;
		goto LABEL_15;
	}
LABEL_37:
	v24 = a1[2];
	*(_QWORD*)v24 = 0x3FF0000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = a1[2];
	v26 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_PassOwner", 0x1Bui64);
	v27 = (unsigned int*)(a1[2] - 16i64);
	v144 = v26;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v25 - 32), (int*)&v144, v27);
	a1[2] -= 16i64;
	v28 = a1[2];
	*(_QWORD*)v28 = 0x4000000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = a1[2];
	v30 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_AddModerator", 0x1Eui64);
	v31 = (unsigned int*)(a1[2] - 16i64);
	v144 = v30;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v29 - 32), (int*)&v144, v31);
	a1[2] -= 16i64;
	v32 = a1[2];
	*(_QWORD*)v32 = 0x4008000000000000i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = a1[2];
	v34 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_RemoveModerator", 0x21ui64);
	v35 = (unsigned int*)(a1[2] - 16i64);
	v144 = v34;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v33 - 32), (int*)&v144, v35);
	a1[2] -= 16i64;
	v36 = a1[2];
	*(_QWORD*)v36 = 0x4010000000000000i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = a1[2];
	v38 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_Muted", 0x17ui64);
	v39 = (unsigned int*)(a1[2] - 16i64);
	v144 = v38;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v37 - 32), (int*)&v144, v39);
	a1[2] -= 16i64;
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4014000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = a1[2];
	v42 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_Unmuted", 0x19ui64);
	v43 = (unsigned int*)(a1[2] - 16i64);
	v144 = v42;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v41 - 32), (int*)&v144, v43);
	a1[2] -= 16i64;
	v44 = a1[2];
	*(_QWORD*)v44 = 0x4018000000000000i64;
	*(_DWORD*)(v44 + 8) = 3;
	a1[2] += 16i64;
	v45 = a1[2];
	v46 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_Kicked", 0x18ui64);
	v47 = (unsigned int*)(a1[2] - 16i64);
	v144 = v46;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v45 - 32), (int*)&v144, v47);
	a1[2] -= 16i64;
	v48 = a1[2];
	*(_QWORD*)v48 = 0x4020000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	a1[2] += 16i64;
	v49 = a1[2];
	v50 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_AddPassword", 0x1Dui64);
	v51 = (unsigned int*)(a1[2] - 16i64);
	v144 = v50;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v49 - 32), (int*)&v144, v51);
	a1[2] -= 16i64;
	v52 = a1[2];
	*(_QWORD*)v52 = 0x4022000000000000i64;
	*(_DWORD*)(v52 + 8) = 3;
	a1[2] += 16i64;
	v53 = a1[2];
	v54 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelAction_RemovePassword", 0x20ui64);
	v55 = (unsigned int*)(a1[2] - 16i64);
	v144 = v54;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v53 - 32), (int*)&v144, v55);
	a1[2] -= 16i64;
	v56 = a1[2];
	*(_QWORD*)v56 = 0x3FF0000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	a1[2] += 16i64;
	v57 = a1[2];
	v58 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_DoesntExist", 0x1Dui64);
	v59 = (unsigned int*)(a1[2] - 16i64);
	v144 = v58;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v57 - 32), (int*)&v144, v59);
	a1[2] -= 16i64;
	v60 = a1[2];
	*(_QWORD*)v60 = 0x4000000000000000i64;
	*(_DWORD*)(v60 + 8) = 3;
	a1[2] += 16i64;
	v61 = a1[2];
	v62 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_BadPassword", 0x1Dui64);
	v63 = (unsigned int*)(a1[2] - 16i64);
	v144 = v62;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v61 - 32), (int*)&v144, v63);
	a1[2] -= 16i64;
	v64 = a1[2];
	*(_QWORD*)v64 = 0x4008000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	a1[2] += 16i64;
	v65 = a1[2];
	v66 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NoPermissions", 0x1Fui64);
	v67 = (unsigned int*)(a1[2] - 16i64);
	v144 = v66;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v65 - 32), (int*)&v144, v67);
	a1[2] -= 16i64;
	v68 = a1[2];
	*(_QWORD*)v68 = 0x4010000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	a1[2] += 16i64;
	v69 = a1[2];
	v70 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NoSpeaking", 0x1Cui64);
	v71 = (unsigned int*)(a1[2] - 16i64);
	v144 = v70;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v69 - 32), (int*)&v144, v71);
	a1[2] -= 16i64;
	v72 = a1[2];
	*(_QWORD*)v72 = 0x4014000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	a1[2] += 16i64;
	v73 = a1[2];
	v74 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_Muted", 0x17ui64);
	v75 = a1[2];
	v145 = 4;
	v144 = v74;
	sub_14005EA50((__int64)a1, (__int64*)(v73 - 32), (int*)&v144, (unsigned int*)(v75 - 16));
	a1[2] -= 16i64;
	v76 = a1[2];
	*(_QWORD*)v76 = 0x4018000000000000i64;
	*(_DWORD*)(v76 + 8) = 3;
	a1[2] += 16i64;
	v77 = a1[2];
	v78 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_Throttled", 0x1Bui64);
	v79 = (unsigned int*)(a1[2] - 16i64);
	v144 = v78;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v77 - 32), (int*)&v144, v79);
	a1[2] -= 16i64;
	v80 = a1[2];
	*(_QWORD*)v80 = 0x4020000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = a1[2];
	v82 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotInGroup", 0x1Cui64);
	v83 = (unsigned int*)(a1[2] - 16i64);
	v144 = v82;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v81 - 32), (int*)&v144, v83);
	a1[2] -= 16i64;
	v84 = a1[2];
	*(_QWORD*)v84 = 0x4022000000000000i64;
	*(_DWORD*)(v84 + 8) = 3;
	a1[2] += 16i64;
	v85 = a1[2];
	v86 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotInGuild", 0x1Cui64);
	v87 = (unsigned int*)(a1[2] - 16i64);
	v144 = v86;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v85 - 32), (int*)&v144, v87);
	a1[2] -= 16i64;
	v88 = a1[2];
	*(_QWORD*)v88 = 0x4024000000000000i64;
	*(_DWORD*)(v88 + 8) = 3;
	a1[2] += 16i64;
	v89 = a1[2];
	v90 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotInSociety", 0x1Eui64);
	v91 = (unsigned int*)(a1[2] - 16i64);
	v144 = v90;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v89 - 32), (int*)&v144, v91);
	a1[2] -= 16i64;
	v92 = a1[2];
	*(_QWORD*)v92 = 0x4026000000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	a1[2] += 16i64;
	v93 = a1[2];
	v94 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotGuildOfficer", 0x21ui64);
	v95 = (unsigned int*)(a1[2] - 16i64);
	v144 = v94;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v93 - 32), (int*)&v144, v95);
	a1[2] -= 16i64;
	v96 = a1[2];
	*(_QWORD*)v96 = 0x4028000000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	a1[2] += 16i64;
	v97 = a1[2];
	v98 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_AlreadyMember", 0x1Fui64);
	v99 = (unsigned int*)(a1[2] - 16i64);
	v144 = v98;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v97 - 32), (int*)&v144, v99);
	a1[2] -= 16i64;
	v100 = a1[2];
	*(_QWORD*)v100 = 0x402A000000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	a1[2] += 16i64;
	v101 = a1[2];
	v102 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_BadName", 0x19ui64);
	v103 = (unsigned int*)(a1[2] - 16i64);
	v144 = v102;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v101 - 32), (int*)&v144, v103);
	a1[2] -= 16i64;
	v104 = a1[2];
	*(_QWORD*)v104 = 0x402C000000000000i64;
	*(_DWORD*)(v104 + 8) = 3;
	a1[2] += 16i64;
	v105 = a1[2];
	v106 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotMember", 0x1Bui64);
	v107 = (unsigned int*)(a1[2] - 16i64);
	v144 = v106;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v105 - 32), (int*)&v144, v107);
	a1[2] -= 16i64;
	v108 = a1[2];
	*(_QWORD*)v108 = 0x402E000000000000i64;
	*(_DWORD*)(v108 + 8) = 3;
	a1[2] += 16i64;
	v109 = a1[2];
	v144 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotInWarParty", 0x1Fui64);
	v110 = (unsigned int*)(a1[2] - 16i64);
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v109 - 32), (int*)&v144, v110);
	a1[2] -= 16i64;
	v111 = a1[2];
	*(_DWORD*)(v111 + 8) = 3;
	*(_QWORD*)v111 = 0x4030000000000000i64;
	a1[2] += 16i64;
	v112 = a1[2];
	v113 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_NotWarPartyOfficer", 0x24ui64);
	v114 = (unsigned int*)(a1[2] - 16i64);
	v144 = v113;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v112 - 32), (int*)&v144, v114);
	a1[2] -= 16i64;
	v115 = a1[2];
	*(_QWORD*)v115 = 0x4031000000000000i64;
	*(_DWORD*)(v115 + 8) = 3;
	a1[2] += 16i64;
	v116 = a1[2];
	v117 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_InvalidMessageText", 0x24ui64);
	v118 = (unsigned int*)(a1[2] - 16i64);
	v144 = v117;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v116 - 32), (int*)&v144, v118);
	a1[2] -= 16i64;
	v119 = a1[2];
	*(_QWORD*)v119 = 0x4032000000000000i64;
	*(_DWORD*)(v119 + 8) = 3;
	a1[2] += 16i64;
	v120 = a1[2];
	v121 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_InvalidPasswordText", 0x25ui64);
	v122 = (unsigned int*)(a1[2] - 16i64);
	v144 = v121;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v120 - 32), (int*)&v144, v122);
	a1[2] -= 16i64;
	v123 = a1[2];
	*(_QWORD*)v123 = 0x4033000000000000i64;
	*(_DWORD*)(v123 + 8) = 3;
	a1[2] += 16i64;
	v124 = a1[2];
	v125 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_TruncatedText", 0x1Fui64);
	v126 = a1[2];
	v145 = 4;
	v144 = v125;
	sub_14005EA50((__int64)a1, (__int64*)(v124 - 32), (int*)&v144, (unsigned int*)(v126 - 16));
	a1[2] -= 16i64;
	v127 = a1[2];
	*(_DWORD*)(v127 + 8) = 3;
	*(_QWORD*)v127 = 0x4034000000000000i64;
	a1[2] += 16i64;
	v128 = a1[2];
	v129 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_InvalidCharacterName", 0x26ui64);
	v130 = (unsigned int*)(a1[2] - 16i64);
	v144 = v129;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v128 - 32), (int*)&v144, v130);
	a1[2] -= 16i64;
	v131 = a1[2];
	*(_QWORD*)v131 = 0x4035000000000000i64;
	*(_DWORD*)(v131 + 8) = 3;
	a1[2] += 16i64;
	v132 = a1[2];
	v133 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_GMMuted", 0x19ui64);
	v134 = (unsigned int*)(a1[2] - 16i64);
	v144 = v133;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v132 - 32), (int*)&v144, v134);
	a1[2] -= 16i64;
	v135 = a1[2];
	*(_QWORD*)v135 = 0x4037000000000000i64;
	*(_DWORD*)(v135 + 8) = 3;
	a1[2] += 16i64;
	v136 = a1[2];
	v137 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_TooManyCustomChannels", 0x27ui64);
	v138 = (unsigned int*)(a1[2] - 16i64);
	v144 = v137;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v136 - 32), (int*)&v144, v138);
	a1[2] -= 16i64;
	v139 = a1[2];
	*(_QWORD*)v139 = 0x4038000000000000i64;
	*(_DWORD*)(v139 + 8) = 3;
	a1[2] += 16i64;
	v140 = a1[2];
	v141 = sub_140062650((__int64)a1, (unsigned __int64*)"ChatChannelResult_MissingEntitlement", 0x24ui64);
	v142 = (unsigned int*)(a1[2] - 16i64);
	v144 = v141;
	v145 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v140 - 32), (int*)&v144, v142);
	a1[2] -= 16i64;
	return 1i64;
}
// 140A613B8: using guessed type wchar_t aChatchannel[12];
// 140A69870: using guessed type wchar_t *off_140A69870[2];
// 140B74710: using guessed type char *off_140B74710;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64728: using guessed type __int64 qword_140C64728;
// 140C6528C: using guessed type int dword_140C6528C;

