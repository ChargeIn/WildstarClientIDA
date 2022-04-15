#include "../winhttp.h"

//----- (00000001406505D0) ----------------------------------------------------
__int64 __fastcall sub_1406505D0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	unsigned int v5; // eax
	int v6; // ecx
	char v7; // r12
	int v8; // r14d
	int v9; // r13d
	unsigned int v10; // r15d
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // ebp
	_QWORD* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	unsigned __int16* v17; // r11
	__int64 v18; // rbx
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r11d
	int v22; // ebx
	_QWORD* v23; // rax
	__int64 v24; // r11
	__int64 v25; // rdx
	int v26; // eax
	_QWORD* v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rdx
	int v34; // r11d
	_QWORD* v35; // rax
	unsigned __int64* v36; // rdx
	unsigned __int64 v37; // r8
	_DWORD* v38; // rax
	__int64* v39; // rax
	_QWORD* v40; // rax
	__int64 v41; // r11
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r11
	__int64 v45; // rdx
	_QWORD* v46; // rax
	__int64 v47; // r11
	__int64 v48; // rdx
	__int64 v49; // rbx
	_QWORD* v50; // rax
	__int64 v51; // rdx
	int v52; // r11d
	_QWORD* v53; // rax
	__int64 v54; // r11
	__int64 v55; // rdx
	float v56; // xmm2_4
	_QWORD* v57; // rax
	__int64 v58; // r11
	__int64 v59; // rdx
	int v60; // ebx
	_QWORD* v61; // rax
	__int64 v62; // r11
	__int64 v63; // rdx
	_QWORD* v64; // rax
	__int64 v65; // r11
	__int64 v66; // rdx
	float v67; // xmm2_4
	_QWORD* v68; // rax
	__int64 v69; // r11
	__int64 v70; // rdx
	int v71; // ebx
	_QWORD* v72; // rax
	__int64 v73; // r11
	__int64 v74; // rdx
	_QWORD* v75; // rax
	__int64 v76; // r11
	__int64 v77; // rdx
	float v78; // xmm2_4
	_QWORD* v79; // rax
	__int64 v80; // r11
	__int64 v81; // rdx
	int v82; // ebx
	_QWORD* v83; // rax
	__int64 v84; // r11
	__int64 v85; // rdx
	_QWORD* v86; // rax
	__int64 v87; // r11
	__int64 v88; // rdx
	float v89; // xmm2_4
	_QWORD* v90; // rax
	__int64 v91; // r11
	__int64 v92; // rdx
	int v93; // ebx
	_QWORD* v94; // rax
	__int64 v95; // r11
	__int64 v96; // rdx
	_QWORD* v97; // rax
	__int64 v98; // r11
	__int64 v99; // rdx
	float v100; // xmm2_4
	_QWORD* v101; // rax
	__int64 v102; // r11
	__int64 v103; // rdx
	int v104; // ebx
	_QWORD* v105; // rax
	__int64 v106; // r11
	__int64 v107; // rdx
	_QWORD* v108; // rax
	__int64 v109; // r11
	__int64 v110; // rdx
	float v111; // xmm2_4
	_QWORD* v112; // rax
	__int64 v113; // r11
	__int64 v114; // rdx
	int v115; // ebx
	_QWORD* v116; // rax
	__int64 v117; // r11
	__int64 v118; // rdx
	_QWORD* v119; // rax
	__int64 v120; // r11
	__int64 v121; // rdx
	float v122; // xmm2_4
	_QWORD* v123; // rax
	__int64 v124; // r11
	__int64 v125; // rdx
	int v126; // ebx
	_QWORD* v127; // rax
	__int64 v128; // r11
	__int64 v129; // rdx
	_QWORD* v130; // rax
	__int64 v131; // r11
	__int64 v132; // rdx
	float v133; // xmm2_4
	_QWORD* v134; // rax
	__int64 v135; // r11
	__int64 v136; // rdx
	int v137; // ebx
	_QWORD* v138; // rax
	__int64 v139; // r11
	__int64 v140; // rdx
	_QWORD* v141; // rax
	__int64 v142; // r11
	__int64 v143; // rdx
	float v144; // xmm2_4
	_QWORD* v145; // rax
	__int64 v146; // r11
	__int64 v147; // rdx
	int v148; // ebx
	_QWORD* v149; // rax
	__int64 v150; // r11
	__int64 v151; // rdx
	_QWORD* v152; // rax
	__int64 v153; // r11
	__int64 v154; // rdx
	float v155; // xmm2_4
	_QWORD* v156; // rax
	__int64 v157; // r11
	__int64 v158; // rdx
	int v159; // ebx
	_QWORD* v160; // rax
	__int64 v161; // r11
	__int64 v162; // rdx
	_QWORD* v163; // rax
	__int64 v164; // r11
	__int64 v165; // rdx
	float v166; // xmm2_4
	_QWORD* v167; // rax
	__int64 v168; // r11
	__int64 v169; // rdx
	_QWORD* v170; // rax
	__int64 v171; // rdx
	__int64 v173; // [rsp+20h] [rbp-48h] BYREF
	__int64 v174; // [rsp+28h] [rbp-40h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2
		|| (v3 = sub_1403D90D0(qword_140C65898, *v2), (v4 = v3) == 0)
		|| (v5 = *(_DWORD*)(v3 + 128), v5 > 0x17)
		|| (v6 = 9437320, !_bittest(&v6, v5)))
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v7 = 0;
	v8 = 0;
	v9 = sub_1403C9640();
	v10 = 0;
	if (v9)
	{
		v7 = 1;
		v10 = sub_1403C9740();
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v11 = *(_QWORD*)(a1 + 16);
	v12 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = sub_1400578C0(a1);
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	v15 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v15 = *v14;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v16, L"strName", v17);
	v18 = *(_QWORD*)(a1 + 16) - 16i64;
	*(_QWORD*)(a1 + 16) = v18;
	if ((~(*(_DWORD*)(v4 + 40) >> 2) & 1) != 0)
	{
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v18 = *v19;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v19 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v20, L"nLevel", v21);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v22 = *(_DWORD*)(v4 + 60);
		v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v25, L"nEffectiveLevel", v22);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v18 = *(_QWORD*)(a1 + 16);
	}
	if ((*(_BYTE*)(v4 + 40) & 1) == 0)
	{
		v26 = *(_DWORD*)(v4 + 128);
		if (v26 == 30)
		{
			if (*(_DWORD*)(v4 + 440) == 3)
				goto LABEL_16;
		}
		else if (v26 != 23)
		{
		LABEL_16:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 64i64))(v4);
			v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
			v28 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v29, L"nHealth", v30);
			*(_QWORD*)(a1 + 16) -= 16i64;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 72i64))(v4);
			v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
			v32 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v32 = *v31;
			*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v33, L"nMaxHealth", v34);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v18 = *(_QWORD*)(a1 + 16);
		}
	}
	v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v18 = *v35;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v35 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v36 = (unsigned __int64*)sub_14018F0E0(&v173, L"bShouldShowDeathPenalty")[1];
	if (v36)
	{
		v37 = -1i64;
		do
			++v37;
		while (*((_BYTE*)v36 + v37));
		sub_140058710(a1, v36, v37);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v174)
		sub_14018B900(v174, 0);
	v38 = *(_DWORD**)(a1 + 16);
	LOBYTE(v8) = v7 != 0;
	v38[2] = 1;
	*v38 = v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	v39 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v39, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v41 = *v40;
	*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v42, L"nPercentageOfDeathPenaltyTimer", v9);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v44 = *v43;
	*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v45) = (2290649225u * (unsigned __int64)v10) >> 32;
	sub_1400F06F0(a1, v45, L"nDeathPenaltyMinutes", v10 / 0x3C);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v47 = *v46;
	*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v48, L"nDeathPenaltySeconds", v10 % 0x3C);
	v49 = *(_QWORD*)(a1 + 16) - 16i64;
	*(_QWORD*)(a1 + 16) = v49;
	if ((~(*(_DWORD*)(v4 + 40) >> 1) & 1) != 0)
	{
		v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v49 = *v50;
		*(_DWORD*)(v49 + 8) = *((_DWORD*)v50 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v51, L"nResource0", v52);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v54 = *v53;
		*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v55, L"nResource0min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v56 = *(float*)(v4 + 1548);
		v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v58 = *v57;
		*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v59, L"nResource0max", (int)v56);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v60 = (int)*(float*)(v4 + 544);
		v61 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v62 = *v61;
		*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v63, L"nResource1", v60);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v64 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v65 = *v64;
		*(_DWORD*)(v65 + 8) = *((_DWORD*)v64 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v66, L"nResource1min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v67 = *(float*)(v4 + 1556);
		v68 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v69 = *v68;
		*(_DWORD*)(v69 + 8) = *((_DWORD*)v68 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v70, L"nResource1max", (int)v67);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v71 = (int)*(float*)(v4 + 548);
		v72 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v73 = *v72;
		*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v74, L"nResource2", v71);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v75 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v76 = *v75;
		*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v77, L"nResource2min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v78 = *(float*)(v4 + 1564);
		v79 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v80 = *v79;
		*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v81, L"nResource2max", (int)v78);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v82 = (int)*(float*)(v4 + 552);
		v83 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v84 = *v83;
		*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v85, L"nResource3", v82);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v86 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v87 = *v86;
		*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v88, L"nResource3min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v89 = *(float*)(v4 + 1572);
		v90 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v91 = *v90;
		*(_DWORD*)(v91 + 8) = *((_DWORD*)v90 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v92, L"nResource3max", (int)v89);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v93 = (int)*(float*)(v4 + 556);
		v94 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v95 = *v94;
		*(_DWORD*)(v95 + 8) = *((_DWORD*)v94 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v96, L"nResource4", v93);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v97 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v98 = *v97;
		*(_DWORD*)(v98 + 8) = *((_DWORD*)v97 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v99, L"nResource4min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v100 = *(float*)(v4 + 1580);
		v101 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v102 = *v101;
		*(_DWORD*)(v102 + 8) = *((_DWORD*)v101 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v103, L"nResource4max", (int)v100);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v104 = (int)*(float*)(v4 + 560);
		v105 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v106 = *v105;
		*(_DWORD*)(v106 + 8) = *((_DWORD*)v105 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v107, L"nResource5", v104);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v108 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v109 = *v108;
		*(_DWORD*)(v109 + 8) = *((_DWORD*)v108 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v110, L"nResource5min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v111 = *(float*)(v4 + 1588);
		v112 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v113 = *v112;
		*(_DWORD*)(v113 + 8) = *((_DWORD*)v112 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v114, L"nResource5max", (int)v111);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v115 = (int)*(float*)(v4 + 564);
		v116 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v117 = *v116;
		*(_DWORD*)(v117 + 8) = *((_DWORD*)v116 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v118, L"nResource6", v115);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v119 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v120 = *v119;
		*(_DWORD*)(v120 + 8) = *((_DWORD*)v119 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v121, L"nResource6min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v122 = *(float*)(v4 + 1596);
		v123 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v124 = *v123;
		*(_DWORD*)(v124 + 8) = *((_DWORD*)v123 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v125, L"nResource6max", (int)v122);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v126 = (int)*(float*)(v4 + 568);
		v127 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v128 = *v127;
		*(_DWORD*)(v128 + 8) = *((_DWORD*)v127 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v129, L"nResource7", v126);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v130 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v131 = *v130;
		*(_DWORD*)(v131 + 8) = *((_DWORD*)v130 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v132, L"nResource7min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v133 = *(float*)(v4 + 1780);
		v134 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v135 = *v134;
		*(_DWORD*)(v135 + 8) = *((_DWORD*)v134 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v136, L"nResource7max", (int)v133);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v137 = (int)*(float*)(v4 + 572);
		v138 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v139 = *v138;
		*(_DWORD*)(v139 + 8) = *((_DWORD*)v138 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v140, L"nResource8", v137);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v141 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v142 = *v141;
		*(_DWORD*)(v142 + 8) = *((_DWORD*)v141 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v143, L"nResource8min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v144 = *(float*)(v4 + 1876);
		v145 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v146 = *v145;
		*(_DWORD*)(v146 + 8) = *((_DWORD*)v145 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v147, L"nResource8max", (int)v144);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v148 = (int)*(float*)(v4 + 576);
		v149 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v150 = *v149;
		*(_DWORD*)(v150 + 8) = *((_DWORD*)v149 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v151, L"nResource9", v148);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v152 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v153 = *v152;
		*(_DWORD*)(v153 + 8) = *((_DWORD*)v152 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v154, L"nResource9min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v155 = *(float*)(v4 + 1892);
		v156 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v157 = *v156;
		*(_DWORD*)(v157 + 8) = *((_DWORD*)v156 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v158, L"nResource9max", (int)v155);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v159 = (int)*(float*)(v4 + 580);
		v160 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v161 = *v160;
		*(_DWORD*)(v161 + 8) = *((_DWORD*)v160 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v162, L"nResource10", v159);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v163 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v164 = *v163;
		*(_DWORD*)(v164 + 8) = *((_DWORD*)v163 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v165, L"nResource10min", 0);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v166 = *(float*)(v4 + 1908);
		v167 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v168 = *v167;
		*(_DWORD*)(v168 + 8) = *((_DWORD*)v167 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v169, L"nResource10max", (int)v166);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v49 = *(_QWORD*)(a1 + 16);
	}
	v170 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v49 = *v170;
	*(_DWORD*)(v49 + 8) = *((_DWORD*)v170 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v171, v13);
	return 1i64;
}
// 1406506EC: variable 'v16' is possibly undefined
// 1406506EC: variable 'v17' is possibly undefined
// 140650745: variable 'v20' is possibly undefined
// 140650745: variable 'v21' is possibly undefined
// 14065077B: variable 'v24' is possibly undefined
// 14065078B: variable 'v25' is possibly undefined
// 14065080A: variable 'v29' is possibly undefined
// 14065080A: variable 'v30' is possibly undefined
// 140650858: variable 'v33' is possibly undefined
// 140650858: variable 'v34' is possibly undefined
// 14065094E: variable 'v41' is possibly undefined
// 14065095E: variable 'v42' is possibly undefined
// 14065098E: variable 'v44' is possibly undefined
// 1406509AE: variable 'v45' is possibly undefined
// 1406509E4: variable 'v47' is possibly undefined
// 1406509F7: variable 'v48' is possibly undefined
// 140650A66: variable 'v51' is possibly undefined
// 140650A66: variable 'v52' is possibly undefined
// 140650A99: variable 'v54' is possibly undefined
// 140650AA9: variable 'v55' is possibly undefined
// 140650AE6: variable 'v58' is possibly undefined
// 140650AF6: variable 'v59' is possibly undefined
// 140650B31: variable 'v62' is possibly undefined
// 140650B41: variable 'v63' is possibly undefined
// 140650B74: variable 'v65' is possibly undefined
// 140650B84: variable 'v66' is possibly undefined
// 140650BC1: variable 'v69' is possibly undefined
// 140650BD1: variable 'v70' is possibly undefined
// 140650C0C: variable 'v73' is possibly undefined
// 140650C1C: variable 'v74' is possibly undefined
// 140650C4F: variable 'v76' is possibly undefined
// 140650C5F: variable 'v77' is possibly undefined
// 140650C9C: variable 'v80' is possibly undefined
// 140650CAC: variable 'v81' is possibly undefined
// 140650CDD: variable 'v84' is possibly undefined
// 140650CF7: variable 'v85' is possibly undefined
// 140650D2A: variable 'v87' is possibly undefined
// 140650D3A: variable 'v88' is possibly undefined
// 140650D77: variable 'v91' is possibly undefined
// 140650D87: variable 'v92' is possibly undefined
// 140650DC2: variable 'v95' is possibly undefined
// 140650DD2: variable 'v96' is possibly undefined
// 140650E05: variable 'v98' is possibly undefined
// 140650E15: variable 'v99' is possibly undefined
// 140650E43: variable 'v102' is possibly undefined
// 140650E62: variable 'v103' is possibly undefined
// 140650E9D: variable 'v106' is possibly undefined
// 140650EAD: variable 'v107' is possibly undefined
// 140650EE0: variable 'v109' is possibly undefined
// 140650EF0: variable 'v110' is possibly undefined
// 140650F2D: variable 'v113' is possibly undefined
// 140650F3D: variable 'v114' is possibly undefined
// 140650F78: variable 'v117' is possibly undefined
// 140650F88: variable 'v118' is possibly undefined
// 140650FAE: variable 'v120' is possibly undefined
// 140650FCB: variable 'v121' is possibly undefined
// 140651008: variable 'v124' is possibly undefined
// 140651018: variable 'v125' is possibly undefined
// 140651053: variable 'v128' is possibly undefined
// 140651063: variable 'v129' is possibly undefined
// 140651096: variable 'v131' is possibly undefined
// 1406510A6: variable 'v132' is possibly undefined
// 1406510E3: variable 'v135' is possibly undefined
// 1406510F3: variable 'v136' is possibly undefined
// 140651128: variable 'v139' is possibly undefined
// 14065113E: variable 'v140' is possibly undefined
// 140651171: variable 'v142' is possibly undefined
// 140651181: variable 'v143' is possibly undefined
// 1406511BE: variable 'v146' is possibly undefined
// 1406511CE: variable 'v147' is possibly undefined
// 140651209: variable 'v150' is possibly undefined
// 140651219: variable 'v151' is possibly undefined
// 14065124C: variable 'v153' is possibly undefined
// 14065125C: variable 'v154' is possibly undefined
// 140651299: variable 'v157' is possibly undefined
// 1406512A9: variable 'v158' is possibly undefined
// 1406512E4: variable 'v161' is possibly undefined
// 1406512F4: variable 'v162' is possibly undefined
// 140651327: variable 'v164' is possibly undefined
// 140651337: variable 'v165' is possibly undefined
// 140651374: variable 'v168' is possibly undefined
// 140651384: variable 'v169' is possibly undefined
// 1406513BB: variable 'v171' is possibly undefined
// 140B2C050: using guessed type wchar_t aNeffectiveleve_0[16];
// 140B2C070: using guessed type wchar_t aNhealth_0[8];
// 140B2C080: using guessed type wchar_t aStrname_43[8];
// 140B2C090: using guessed type wchar_t aNlevel_12[7];
// 140B2C190: using guessed type wchar_t aNresource3[11];
// 140B2C1A8: using guessed type wchar_t aNresource3min[14];
// 140B2C1C8: using guessed type wchar_t aNresource2min[14];
// 140B2C1E8: using guessed type wchar_t aNresource2max[14];
// 140B2C208: using guessed type wchar_t aNresource1max[14];
// 140B2C228: using guessed type wchar_t aNresource2[11];
// 140B2C240: using guessed type wchar_t aNresource1[11];
// 140B2C258: using guessed type wchar_t aNresource1min[14];
// 140B2C278: using guessed type wchar_t aNresource0min[14];
// 140B2C298: using guessed type wchar_t aNresource0max[14];
// 140B2C2B8: using guessed type wchar_t aNdeathpenaltys[21];
// 140B2C2E8: using guessed type wchar_t aNresource0[11];
// 140B2C300: using guessed type wchar_t aNpercentageofd[31];
// 140B2C340: using guessed type wchar_t aNdeathpenaltym[21];
// 140B2C370: using guessed type wchar_t aNmaxhealth[11];
// 140B2C388: using guessed type wchar_t aBshouldshowdea[24];
// 140B2C3B8: using guessed type wchar_t aNresource8min[14];
// 140B2C3D8: using guessed type wchar_t aNresource8max[14];
// 140B2C3F8: using guessed type wchar_t aNresource7max[14];
// 140B2C418: using guessed type wchar_t aNresource8[11];
// 140B2C430: using guessed type wchar_t aNresource7[11];
// 140B2C448: using guessed type wchar_t aNresource7min[14];
// 140B2C468: using guessed type wchar_t aNresource6min[14];
// 140B2C488: using guessed type wchar_t aNresource6max[14];
// 140B2C4A8: using guessed type wchar_t aNresource5max[14];
// 140B2C4C8: using guessed type wchar_t aNresource6[11];
// 140B2C4E0: using guessed type wchar_t aNresource5[11];
// 140B2C4F8: using guessed type wchar_t aNresource5min[14];
// 140B2C518: using guessed type wchar_t aNresource4min[14];
// 140B2C538: using guessed type wchar_t aNresource4max[14];
// 140B2C558: using guessed type wchar_t aNresource3max[14];
// 140B2C578: using guessed type wchar_t aNresource4[11];
// 140B2C618: using guessed type wchar_t aNresource10min[15];
// 140B2C638: using guessed type wchar_t aNresource10max[15];
// 140B2C658: using guessed type wchar_t aNresource9max[14];
// 140B2C678: using guessed type wchar_t aNresource10[12];
// 140B2C690: using guessed type wchar_t aNresource9[11];
// 140B2C6A8: using guessed type wchar_t aNresource9min[14];
// 140C65898: using guessed type __int64 qword_140C65898;

