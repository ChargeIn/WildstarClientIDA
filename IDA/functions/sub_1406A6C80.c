#include "../winhttp.h"

//----- (00000001406A6C80) ----------------------------------------------------
__int64 __fastcall sub_1406A6C80(_QWORD* a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v8; // r8
	int v9; // r14d
	int v10; // esi
	unsigned int v11; // edx
	int* v12; // rax
	__int16* v13; // r15
	__int64 v14; // rcx
	__int16* v15; // rax
	__int64 v16; // rdx
	unsigned __int64 v17; // rcx
	unsigned __int16* v18; // r12
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // eax
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	int v25; // r10d
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int v32; // r11d
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	_QWORD* v36; // rax
	__int64 v37; // r10
	__int64 v38; // rdx
	_QWORD* v39; // rax
	__int64 v40; // rdx
	__int64 v41; // r10
	__int64 v42; // r8
	__int64 v43; // rcx
	unsigned __int64 v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	unsigned __int64* v47; // r14
	__int64 v48; // r15
	unsigned __int64 v49; // rcx
	unsigned __int16* v50; // rsi
	__int64 v51; // rbx
	__int64 v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // rdx
	__int64 v55; // rdx
	_QWORD* v56; // rax
	__int64 v57; // rdx
	unsigned __int64 v58; // rsi
	unsigned __int64* v59; // r15
	unsigned __int64 v60; // r14
	__int64 v61; // rbx
	__int64 v62; // rax
	_QWORD* v63; // rax
	__int64 v64; // rdx
	__int64 v65; // rbx
	__int64 v66; // rax
	int v67; // ebx
	int v68; // r12d
	_QWORD* v69; // rax
	__int64 v70; // rdx
	unsigned __int64* v71; // r15
	unsigned __int64 v72; // r14
	__int64 v73; // rbx
	__int64 v74; // rax
	_DWORD* v75; // rcx
	__int64* v76; // rax
	int v77; // r12d
	_QWORD* v78; // rax
	__int64 v79; // r10
	unsigned __int64* v80; // r15
	unsigned __int64 v81; // r14
	__int64 v82; // rbx
	__int64 v83; // rax
	_DWORD* v84; // rcx
	__int64* v85; // rax
	int v86; // r12d
	_QWORD* v87; // rax
	__int64 v88; // r10
	unsigned __int64* v89; // r15
	unsigned __int64 v90; // r14
	__int64 v91; // rbx
	__int64 v92; // rax
	_DWORD* v93; // rcx
	__int64* v94; // rax
	int v95; // r12d
	_QWORD* v96; // rax
	__int64 v97; // r10
	unsigned __int64* v98; // r15
	unsigned __int64 v99; // r14
	__int64 v100; // rbx
	__int64 v101; // rax
	_DWORD* v102; // rcx
	__int64* v103; // rax
	_QWORD* v104; // rax
	__int64 v105; // r10
	unsigned __int64* v106; // r14
	__int64 v107; // rbx
	__int64 v108; // rax
	_QWORD* v109; // rax
	__int64 v110; // rdx
	__int64 v111; // rcx
	unsigned __int64 v112; // rax
	int v113; // r14d
	__int64 v114; // rbx
	__int64 v115; // rax
	unsigned int* v116; // rax
	unsigned int v117; // ebx
	__int64 v118; // rax
	__int64 v119; // r13
	unsigned int v120; // esi
	unsigned int v121; // ecx
	__int64 v122; // rcx
	unsigned __int64 v123; // rax
	__int64 v124; // rbx
	__int64 v125; // rax
	int v126; // eax
	int v127; // r10d
	int v128; // r15d
	__int64 v129; // r9
	_DWORD* v130; // rdx
	__int64 v131; // rcx
	__int64 v132; // rcx
	_QWORD* v133; // rax
	__int64 v134; // rdx
	unsigned __int16* v135; // r10
	_QWORD* v136; // rax
	__int64 v137; // r10
	__int64 v138; // rdx
	int v139; // eax
	int* v140; // rax
	__int64 v141; // rdx
	unsigned int* v142; // rbx
	unsigned int v143; // ebx
	_QWORD* v144; // rax
	__int64 v145; // rdx
	unsigned __int64 i; // rax
	__int64 v147; // rcx
	bool v148; // zf
	__int64 v149; // rcx
	unsigned __int64 v150; // rax
	int v151; // esi
	__int64 v152; // rbx
	__int64 v153; // rax
	unsigned int v154; // ecx
	__int64 v155; // rax
	__int64 v156; // r13
	unsigned int v157; // r15d
	unsigned int v158; // ecx
	__int64 v159; // rcx
	unsigned __int64 v160; // rax
	__int64 v161; // rbx
	__int64 v162; // rax
	int v163; // eax
	__int64 v164; // rcx
	int v165; // r12d
	_QWORD* v166; // rax
	__int64 v167; // rdx
	int v168; // r10d
	__int64 v169; // rcx
	_QWORD* v170; // rax
	__int64 v171; // rdx
	unsigned __int16* v172; // r10
	_QWORD* v173; // rax
	__int64 v174; // r10
	__int64 v175; // rdx
	int v176; // eax
	int* v177; // rax
	__int64 v178; // rdx
	__int64 v179; // rcx
	unsigned int* v180; // rbx
	unsigned int v181; // ebx
	_QWORD* v182; // rax
	__int64 v183; // rdx
	unsigned __int64 j; // rax
	__int64 v185; // rcx
	__int64 v186; // rcx
	unsigned __int64 v187; // rax
	__int64 v188; // rbx
	__int64 v189; // rax
	int* v190; // r15
	__int64 v191; // r13
	unsigned int v192; // r12d
	__int64 v193; // rbx
	__int64 v194; // rax
	int v195; // ebx
	_QWORD* v196; // rax
	__int64 v197; // rdx
	int v198; // r10d
	__int64 v199; // rcx
	_QWORD* v200; // rax
	__int64 v201; // rdx
	unsigned __int16* v202; // r10
	__int64 v203; // rdx
	int v204; // ebx
	int v205; // r15d
	_QWORD* v206; // rax
	__int64 v207; // rdx
	_QWORD* v208; // rax
	__int64 v209; // r10
	__int64 v210; // rdx
	_QWORD* v211; // rax
	__int64 v212; // rdx
	__int64 v213; // r10
	__int64 v214; // rdx
	__int64 v215; // [rsp+30h] [rbp-D0h]
	int v216; // [rsp+30h] [rbp-D0h]
	double v217; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v218)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v219; // [rsp+48h] [rbp-B8h]
	_QWORD* v220; // [rsp+50h] [rbp-B0h]
	int v221; // [rsp+58h] [rbp-A8h]
	__int64 v222; // [rsp+60h] [rbp-A0h]
	unsigned int* v223; // [rsp+68h] [rbp-98h]
	__int64 v224; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v225)(); // [rsp+78h] [rbp-88h] BYREF
	int v226; // [rsp+80h] [rbp-80h]
	_QWORD* v227; // [rsp+88h] [rbp-78h]
	int v228; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v229)(); // [rsp+98h] [rbp-68h] BYREF
	int v230; // [rsp+A0h] [rbp-60h]
	_QWORD* v231; // [rsp+A8h] [rbp-58h]
	int v232; // [rsp+B0h] [rbp-50h]
	__int64(__fastcall * *v233)(); // [rsp+B8h] [rbp-48h] BYREF
	int v234; // [rsp+C0h] [rbp-40h]
	_QWORD* v235; // [rsp+C8h] [rbp-38h]
	int v236; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v237)(); // [rsp+D8h] [rbp-28h] BYREF
	int v238; // [rsp+E0h] [rbp-20h]
	_QWORD* v239; // [rsp+E8h] [rbp-18h]
	int v240; // [rsp+F0h] [rbp-10h]

	if ((*(_BYTE*)(a2 + 32) & 2) != 0 && !a4)
		return 0i64;
	v8 = *(unsigned int*)(a2 + 120);
	v9 = 1;
	v10 = 0;
	if ((_DWORD)v8
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(qword_140C65898 + 120),
				v8,
				0i64,
				0i64,
				0)
		&& !a4)
	{
		v11 = *(_DWORD*)(a2 + 212);
		if (!v11)
			return 0i64;
		v12 = (int*)sub_14044FB30((__int64)a1, v11);
		if (!v12 || !v12[3] && !v12[6])
			return 0i64;
		v10 = *v12;
		v9 = 0;
	}
	v13 = sub_14034BDD0((__int64)a1, *(_DWORD*)(a2 + 4));
	v15 = sub_14034BDD0(v14, *(_DWORD*)(a2 + 12));
	v16 = a1[4];
	v17 = *(_QWORD*)(v16 + 112);
	v18 = (unsigned __int16*)v15;
	v227 = a1;
	v228 = 1;
	v225 = off_140B569F0;
	if (*(_QWORD*)(v16 + 120) >= v17)
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	a1[2] += 16i64;
	v21 = sub_1400578C0((__int64)a1);
	v22 = *(_QWORD*)(a1[4] + 160i64);
	LODWORD(v19) = v21;
	v226 = v21;
	v23 = sub_14005C3C0(v22, v21);
	v24 = a1[2];
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v24, L"nId", v25);
	a1[2] -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v28, L"nCost", 0);
	a1[2] -= 16i64;
	v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v30 = *v29;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v31, L"eType", v32);
	a1[2] -= 16i64;
	v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v35, L"strName", (unsigned __int16*)v13);
	a1[2] -= 16i64;
	v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v37 = *v36;
	*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v38, L"strTooltip", v18);
	a1[2] -= 16i64;
	v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
	*(_QWORD*)v41 = *v39;
	*(_DWORD*)(v41 + 8) = *((_DWORD*)v39 + 2);
	a1[2] += 16i64;
	if (v9)
		v10 = 0;
	sub_1400F06F0((__int64)a1, v40, L"kUpsellLink", v10);
	a1[2] -= 16i64;
	sub_1406A8160((__int64)a1, (__int64)&v225, v42, *(_DWORD*)a2);
	v43 = a1[4];
	v233 = off_140B569F0;
	v44 = *(_QWORD*)(v43 + 112);
	v235 = a1;
	v236 = 1;
	if (*(_QWORD*)(v43 + 120) >= v44)
		sub_14005E2C0((__int64)a1);
	v45 = a1[2];
	v46 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	*(_QWORD*)v45 = v46;
	a1[2] += 16i64;
	v234 = sub_1400578C0((__int64)a1);
	v47 = (unsigned __int64*)(a2 + 168);
	v48 = 5i64;
	do
	{
		v49 = *v47;
		if (*v47)
		{
			if (v49 <= qword_140C3FE70)
			{
				v50 = (unsigned __int16*)(v49 + qword_140C3FE68);
				if (v49 + qword_140C3FE68)
				{
					if (*v50)
					{
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v51 = a1[2];
						v52 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v51 + 8) = 5;
						*(_QWORD*)v51 = v52;
						a1[2] += 16i64;
						LODWORD(v51) = sub_1400578C0((__int64)a1);
						v53 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v51);
						v54 = a1[2];
						*(_QWORD*)v54 = *v53;
						*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v54, L"strSprite", v50);
						a1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v233);
						sub_1400579E0((__int64)a1, v55, v51);
					}
				}
			}
		}
		++v47;
		--v48;
	} while (v48);
	v56 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v226);
	v57 = a1[2];
	*(_QWORD*)v57 = *v56;
	*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
	a1[2] += 16i64;
	v58 = -1i64;
	v59 = (unsigned __int64*)sub_14018F0E0(&v218, L"tScreenshots")[1];
	if (v59)
	{
		v60 = -1i64;
		do
			++v60;
		while (*((_BYTE*)v59 + v60));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v61 = a1[2];
		v62 = sub_140062650((__int64)a1, v59, v60);
		*(_DWORD*)(v61 + 8) = 4;
		*(_QWORD*)v61 = v62;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v219)
		sub_14018B900(v219, 0);
	v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v234);
	v64 = a1[2];
	*(_QWORD*)v64 = *v63;
	*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
	a1[2] += 16i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v65 = a1[2];
	v66 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v65 + 8) = 5;
	*(_QWORD*)v65 = v66;
	a1[2] += 16i64;
	v67 = sub_1400578C0((__int64)a1);
	HIDWORD(v215) = v67;
	v68 = *(_DWORD*)(a2 + 32) & 4;
	v69 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v67);
	v70 = a1[2];
	*(_QWORD*)v70 = *v69;
	*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
	a1[2] += 16i64;
	v71 = (unsigned __int64*)sub_14018F0E0(&v218, L"bIsUnique")[1];
	if (v71)
	{
		v72 = -1i64;
		do
			++v72;
		while (*((_BYTE*)v71 + v72));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v73 = a1[2];
		v74 = sub_140062650((__int64)a1, v71, v72);
		*(_DWORD*)(v73 + 8) = 4;
		*(_QWORD*)v73 = v74;
		a1[2] += 16i64;
		v67 = HIDWORD(v215);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v219)
		sub_14018B900(v219, 0);
	v75 = (_DWORD*)a1[2];
	v75[2] = 1;
	*v75 = v68 != 0;
	a1[2] += 16i64;
	v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v77 = *(_DWORD*)(a2 + 32) & 8;
	v78 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v67);
	*(_QWORD*)v79 = *v78;
	*(_DWORD*)(v79 + 8) = *((_DWORD*)v78 + 2);
	a1[2] += 16i64;
	v80 = (unsigned __int64*)sub_14018F0E0(&v218, L"bIsUniqueHarvest")[1];
	if (v80)
	{
		v81 = -1i64;
		do
			++v81;
		while (*((_BYTE*)v80 + v81));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v82 = a1[2];
		v83 = sub_140062650((__int64)a1, v80, v81);
		*(_DWORD*)(v82 + 8) = 4;
		*(_QWORD*)v82 = v83;
		a1[2] += 16i64;
		v67 = HIDWORD(v215);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v219)
		sub_14018B900(v219, 0);
	v84 = (_DWORD*)a1[2];
	v84[2] = 1;
	*v84 = v77 != 0;
	a1[2] += 16i64;
	v85 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v85, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v86 = *(_DWORD*)(a2 + 32) & 0x20;
	v87 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v67);
	*(_QWORD*)v88 = *v87;
	*(_DWORD*)(v88 + 8) = *((_DWORD*)v87 + 2);
	a1[2] += 16i64;
	v89 = (unsigned __int64*)sub_14018F0E0(&v218, L"bIsUniqueGarden")[1];
	if (v89)
	{
		v90 = -1i64;
		do
			++v90;
		while (*((_BYTE*)v89 + v90));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v91 = a1[2];
		v92 = sub_140062650((__int64)a1, v89, v90);
		*(_DWORD*)(v91 + 8) = 4;
		*(_QWORD*)v91 = v92;
		a1[2] += 16i64;
		v67 = HIDWORD(v215);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v219)
		sub_14018B900(v219, 0);
	v93 = (_DWORD*)a1[2];
	v93[2] = 1;
	*v93 = v86 != 0;
	a1[2] += 16i64;
	v94 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v94, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v95 = *(_DWORD*)(a2 + 32) & 0x10;
	v96 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v67);
	*(_QWORD*)v97 = *v96;
	*(_DWORD*)(v97 + 8) = *((_DWORD*)v96 + 2);
	a1[2] += 16i64;
	v98 = (unsigned __int64*)sub_14018F0E0(&v218, L"bIsRotatable")[1];
	if (v98)
	{
		v99 = -1i64;
		do
			++v99;
		while (*((_BYTE*)v98 + v99));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v100 = a1[2];
		v101 = sub_140062650((__int64)a1, v98, v99);
		*(_DWORD*)(v100 + 8) = 4;
		*(_QWORD*)v100 = v101;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v219)
		sub_14018B900(v219, 0);
	v102 = (_DWORD*)a1[2];
	v102[2] = 1;
	*v102 = v95 != 0;
	a1[2] += 16i64;
	v103 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v103, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v104 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v226);
	*(_QWORD*)v105 = *v104;
	*(_DWORD*)(v105 + 8) = *((_DWORD*)v104 + 2);
	a1[2] += 16i64;
	v106 = (unsigned __int64*)sub_14018F0E0(&v218, L"tFlags")[1];
	if (v106)
	{
		do
			++v58;
		while (*((_BYTE*)v106 + v58));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v107 = a1[2];
		v108 = sub_140062650((__int64)a1, v106, v58);
		*(_DWORD*)(v107 + 8) = 4;
		*(_QWORD*)v107 = v108;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v219)
		sub_14018B900(v219, 0);
	v109 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), SHIDWORD(v215));
	v110 = a1[2];
	*(_QWORD*)v110 = *v109;
	*(_DWORD*)(v110 + 8) = *((_DWORD*)v109 + 2);
	a1[2] += 16i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v111 = a1[4];
	v112 = *(_QWORD*)(v111 + 112);
	v113 = 1;
	v216 = 0;
	v239 = a1;
	v240 = 1;
	v237 = off_140B569F0;
	if (*(_QWORD*)(v111 + 120) >= v112)
		sub_14005E2C0((__int64)a1);
	v114 = a1[2];
	v115 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v114 + 8) = 5;
	*(_QWORD*)v114 = v115;
	a1[2] += 16i64;
	v238 = sub_1400578C0((__int64)a1);
	v116 = (unsigned int*)(a2 + 72);
	v223 = (unsigned int*)(a2 + 72);
	v224 = a2 + 72;
	v222 = 5i64;
	do
	{
		v117 = *v116;
		if (qword_140C63840)
		{
			v118 = qword_140C63840(off_140A6A7F8, v117, qword_140C63858);
			goto LABEL_91;
		}
		if (!dword_140C63E00 && (int)sub_140204C40() >= 0)
		{
			v118 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64C88 + 24i64))(qword_140C64C88, v117);
		LABEL_91:
			v119 = v118;
			if (!v118)
				goto LABEL_128;
			v120 = *(_DWORD*)(v118 + 8);
			if (*(_DWORD*)(a2 + 128) == 5)
			{
				v121 = *(_DWORD*)(v118 + 32);
				if (v121)
					v120 /= v121;
			}
			v122 = a1[4];
			v218 = off_140B569F0;
			v220 = a1;
			v123 = *(_QWORD*)(v122 + 112);
			v221 = 1;
			if (*(_QWORD*)(v122 + 120) >= v123)
				sub_14005E2C0((__int64)a1);
			v124 = a1[2];
			v125 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v124 + 8) = 5;
			*(_QWORD*)v124 = v125;
			a1[2] += 16i64;
			v126 = sub_1400578C0((__int64)a1);
			v127 = *(_DWORD*)(v119 + 4);
			v128 = v126;
			v129 = *(_QWORD*)(a1[4] + 160i64);
			LODWORD(v219) = v126;
			if ((unsigned int)(v126 - 1) >= *(_DWORD*)(v129 + 56))
			{
				if ((double)v126 == 0.0)
				{
					v130 = *(_DWORD**)(v129 + 32);
				}
				else
				{
					v217 = (double)v126;
					v130 = (_DWORD*)(*(_QWORD*)(v129 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v217) + HIDWORD(v217)) % (((1i64 << *(_BYTE*)(v129 + 11)) - 1) | 1)));
				}
				while (v130[6] != 3 || (double)v126 != *((double*)v130 + 2))
				{
					v130 = (_DWORD*)*((_QWORD*)v130 + 4);
					if (!v130)
					{
						v130 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v130 = (_DWORD*)(*(_QWORD*)(v129 + 24) + 16i64 * (v126 - 1));
			}
			v131 = a1[2];
			*(_QWORD*)v131 = *(_QWORD*)v130;
			*(_DWORD*)(v131 + 8) = v130[2];
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, (__int64)v130, L"eType", v127);
			a1[2] -= 16i64;
			sub_14034BDD0(v132, *(_DWORD*)(a2 + 4));
			v133 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v128);
			v134 = a1[2];
			*(_QWORD*)v134 = *v133;
			*(_DWORD*)(v134 + 8) = *((_DWORD*)v133 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v134, L"strName", v135);
			a1[2] -= 16i64;
			v136 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v128);
			*(_QWORD*)v137 = *v136;
			*(_DWORD*)(v137 + 8) = *((_DWORD*)v136 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v138, L"nRequiredCost", v120);
			a1[2] -= 16i64;
			v139 = *(_DWORD*)(v119 + 4);
			switch (v139)
			{
			case 2:
				v140 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v119 + 12), 0i64);
				v142 = (unsigned int*)v140;
				if (!v140)
				{
				LABEL_127:
					sub_1400579E0((__int64)a1, v141, v128);
					goto LABEL_128;
				}
				if (!v216)
					v216 = v140[88];
				if ((unsigned int)sub_140415C70(a1, (__int64)v140))
				{
					sub_1400FB540((__int64)&v218);
					a1[2] -= 16i64;
				}
				v143 = sub_1406A4EA0(*v142);
				v144 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v128);
				v145 = a1[2];
				*(_QWORD*)v145 = *v144;
				*(_DWORD*)(v145 + 8) = *((_DWORD*)v144 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v145, L"nAvailableCount", v143);
				a1[2] -= 16i64;
				if (v143 < v120)
					v113 = 0;
				break;
			case 1:
				if (*(_QWORD*)(qword_140C65898 + 5624) < (unsigned __int64)v120)
					v113 = 0;
				break;
			case 3:
				if (*(_QWORD*)(qword_140C65898 + 5632) < (unsigned __int64)v120)
					v113 = 0;
				break;
			case 4:
				for (i = 0i64; i < qword_140C7DE20; ++i)
				{
					v147 = *(_QWORD*)(qword_140C7DE18 + 8 * i);
					if (*(_DWORD*)(v147 + 16) == 3 && *(_DWORD*)(v147 + 504) < v120)
						v113 = 0;
				}
				break;
			}
			sub_1400FB1D0((__int64)&v237);
			goto LABEL_127;
		}
	LABEL_128:
		v116 = (unsigned int*)(v224 + 4);
		v148 = v222-- == 1;
		v224 += 4i64;
	} while (!v148);
	sub_1400FB2A0((__int64)&v225, (__int64)L"tCostRequirements", v238);
	v149 = a1[4];
	v150 = *(_QWORD*)(v149 + 112);
	v151 = 1;
	v229 = off_140B569F0;
	v231 = a1;
	v232 = 1;
	if (*(_QWORD*)(v149 + 120) >= v150)
		sub_14005E2C0((__int64)a1);
	v152 = a1[2];
	v153 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v152 + 8) = 5;
	*(_QWORD*)v152 = v153;
	a1[2] += 16i64;
	v230 = sub_1400578C0((__int64)a1);
	v222 = 5i64;
	while (2)
	{
		if ((unsigned int)(*(_DWORD*)(a2 + 128) - 4) <= 1)
			v154 = *v223;
		else
			v154 = v223[17];
		v155 = sub_140204EA0(v154);
		v156 = v155;
		if (v155)
		{
			v157 = *(_DWORD*)(v155 + 8);
			if (*(_DWORD*)(a2 + 128) == 5)
			{
				v158 = *(_DWORD*)(v155 + 32);
				if (v158)
					v157 /= v158;
			}
			v159 = a1[4];
			v220 = a1;
			v218 = off_140B569F0;
			v160 = *(_QWORD*)(v159 + 112);
			v221 = 1;
			if (*(_QWORD*)(v159 + 120) >= v160)
				sub_14005E2C0((__int64)a1);
			v161 = a1[2];
			v162 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v161 + 8) = 5;
			*(_QWORD*)v161 = v162;
			a1[2] += 16i64;
			v163 = sub_1400578C0((__int64)a1);
			v164 = *(_QWORD*)(a1[4] + 160i64);
			v165 = v163;
			LODWORD(v219) = v163;
			v166 = sub_14005C3C0(v164, v163);
			v167 = a1[2];
			*(_QWORD*)v167 = *v166;
			*(_DWORD*)(v167 + 8) = *((_DWORD*)v166 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v167, L"eType", v168);
			a1[2] -= 16i64;
			sub_14034BDD0(v169, *(_DWORD*)(a2 + 4));
			v170 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v165);
			v171 = a1[2];
			*(_QWORD*)v171 = *v170;
			*(_DWORD*)(v171 + 8) = *((_DWORD*)v170 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v171, L"strName", v172);
			a1[2] -= 16i64;
			v173 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v165);
			*(_QWORD*)v174 = *v173;
			*(_DWORD*)(v174 + 8) = *((_DWORD*)v173 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v175, L"nRequiredCost", v157);
			a1[2] -= 16i64;
			v176 = *(_DWORD*)(v156 + 4);
			if (v176 == 2)
			{
				v177 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v156 + 12), 0i64);
				v179 = (__int64)a1;
				v180 = (unsigned int*)v177;
				if (v177)
				{
					if ((unsigned int)sub_140415C70(a1, (__int64)v177))
					{
						sub_1400FB540((__int64)&v218);
						a1[2] -= 16i64;
					}
					v181 = sub_1406A4EA0(*v180);
					v182 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v165);
					v183 = a1[2];
					*(_QWORD*)v183 = *v182;
					*(_DWORD*)(v183 + 8) = *((_DWORD*)v182 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v183, L"nAvailableCount", v181);
					a1[2] -= 16i64;
					if (v181 < v157)
						v151 = 0;
					goto LABEL_159;
				}
			}
			else
			{
				switch (v176)
				{
				case 1:
					if (*(_QWORD*)(qword_140C65898 + 5624) < (unsigned __int64)v157)
						v151 = 0;
					break;
				case 3:
					if (*(_QWORD*)(qword_140C65898 + 5632) < (unsigned __int64)v157)
						v151 = 0;
					break;
				case 4:
					for (j = 0i64; j < qword_140C7DE20; ++j)
					{
						v185 = *(_QWORD*)(qword_140C7DE18 + 8 * j);
						if (*(_DWORD*)(v185 + 16) == 3 && *(_DWORD*)(v185 + 504) < v157)
							v151 = 0;
					}
					break;
				}
			LABEL_159:
				sub_1400FB1D0((__int64)&v229);
				v179 = (__int64)a1;
			}
			sub_1400579E0(v179, v178, v165);
		}
		++v223;
		if (--v222)
			continue;
		break;
	}
	LODWORD(v215) = v151;
	sub_1400FB2A0((__int64)&v225, (__int64)L"tRepairRequirements", v230);
	v186 = a1[4];
	v220 = a1;
	v218 = off_140B569F0;
	v187 = *(_QWORD*)(v186 + 112);
	v221 = 1;
	if (*(_QWORD*)(v186 + 120) >= v187)
		sub_14005E2C0((__int64)a1);
	v188 = a1[2];
	v189 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v188 + 8) = 5;
	*(_QWORD*)v188 = v189;
	a1[2] += 16i64;
	LODWORD(v219) = sub_1400578C0((__int64)a1);
	v190 = (int*)(a2 + 96);
	v191 = 3i64;
	do
	{
		v192 = v190[3];
		if (v192 && sub_1402259C0(v192))
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v193 = a1[2];
			v194 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v193 + 8) = 5;
			*(_QWORD*)v193 = v194;
			a1[2] += 16i64;
			v195 = sub_1400578C0((__int64)a1);
			if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(*(_QWORD*)qword_140C659A0 + 24i64))(
				qword_140C659A0,
				*(_QWORD*)(qword_140C65898 + 120),
				v192,
				0i64,
				0i64,
				0,
				v215))
				v113 = 0;
			v196 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v195);
			v197 = a1[2];
			*(_QWORD*)v197 = *v196;
			*(_DWORD*)(v197 + 8) = *((_DWORD*)v196 + 2);
			a1[2] += 16i64;
			sub_1400F0630((__int64)a1, v197, L"bPrerequisiteMet", v198);
			a1[2] -= 16i64;
			sub_14034BDD0(v199, *v190);
			v200 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v195);
			v201 = a1[2];
			*(_QWORD*)v201 = *v200;
			*(_DWORD*)(v201 + 8) = *((_DWORD*)v200 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v201, L"strTooltip", v202);
			a1[2] -= 16i64;
			sub_1400FB1D0((__int64)&v218);
			sub_1400579E0((__int64)a1, v203, v195);
		}
		++v190;
		--v191;
	} while (v191);
	v204 = v219;
	sub_1400FB2A0((__int64)&v225, (__int64)L"tPrerequisites", v219);
	v205 = v226;
	v206 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v226);
	v207 = a1[2];
	*(_QWORD*)v207 = *v206;
	*(_DWORD*)(v207 + 8) = *((_DWORD*)v206 + 2);
	a1[2] += 16i64;
	sub_1400F0630((__int64)a1, v207, L"bAreCostRequirementsMet", v113);
	a1[2] -= 16i64;
	v208 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v205);
	*(_QWORD*)v209 = *v208;
	*(_DWORD*)(v209 + 8) = *((_DWORD*)v208 + 2);
	a1[2] += 16i64;
	sub_1400F0630((__int64)a1, v210, L"bAreRepairRequirementsMet", v215);
	a1[2] -= 16i64;
	if (a3)
	{
		sub_1400FB1D0(a3);
	}
	else
	{
		v211 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v205);
		*(_QWORD*)v213 = *v211;
		*(_DWORD*)(v213 + 8) = *((_DWORD*)v211 + 2);
		a1[2] += 16i64;
	}
	if (v220)
		sub_1400579E0((__int64)v220, v212, v204);
	if (v231)
		sub_1400579E0((__int64)v231, v212, v230);
	if (v239)
		sub_1400579E0((__int64)v239, v212, v238);
	sub_1400579E0((__int64)a1, v212, SHIDWORD(v215));
	if (v235)
		sub_1400579E0((__int64)v235, v214, v234);
	sub_1400579E0((__int64)a1, v214, v205);
	return 1i64;
}
// 1406A6D27: variable 'a1' is possibly undefined
// 1406A6D6A: variable 'v14' is possibly undefined
// 1406A6E04: variable 'v25' is possibly undefined
// 1406A6E31: variable 'v27' is possibly undefined
// 1406A6E43: variable 'v28' is possibly undefined
// 1406A6E74: variable 'v30' is possibly undefined
// 1406A6E86: variable 'v31' is possibly undefined
// 1406A6E86: variable 'v32' is possibly undefined
// 1406A6EB3: variable 'v34' is possibly undefined
// 1406A6EC5: variable 'v35' is possibly undefined
// 1406A6EE8: variable 'v37' is possibly undefined
// 1406A6F04: variable 'v38' is possibly undefined
// 1406A6F2E: variable 'v41' is possibly undefined
// 1406A6F4E: variable 'v40' is possibly undefined
// 1406A6F64: variable 'v42' is possibly undefined
// 1406A7092: variable 'v55' is possibly undefined
// 1406A7305: variable 'v79' is possibly undefined
// 1406A7405: variable 'v88' is possibly undefined
// 1406A7505: variable 'v97' is possibly undefined
// 1406A75FA: variable 'v105' is possibly undefined
// 1406A78DE: variable 'v132' is possibly undefined
// 1406A791B: variable 'v135' is possibly undefined
// 1406A7949: variable 'v137' is possibly undefined
// 1406A795B: variable 'v138' is possibly undefined
// 1406A7AB3: variable 'v141' is possibly undefined
// 1406A7C41: variable 'v168' is possibly undefined
// 1406A7C4F: variable 'v169' is possibly undefined
// 1406A7C8C: variable 'v172' is possibly undefined
// 1406A7CBA: variable 'v174' is possibly undefined
// 1406A7CCC: variable 'v175' is possibly undefined
// 1406A7E14: variable 'v178' is possibly undefined
// 1406A7F36: variable 'v215' is possibly undefined
// 1406A7F77: variable 'v198' is possibly undefined
// 1406A7F84: variable 'v199' is possibly undefined
// 1406A7FC0: variable 'v202' is possibly undefined
// 1406A7FDC: variable 'v203' is possibly undefined
// 1406A806F: variable 'v209' is possibly undefined
// 1406A8081: variable 'v210' is possibly undefined
// 1406A80B6: variable 'v213' is possibly undefined
// 1406A80DC: variable 'v212' is possibly undefined
// 1406A811F: variable 'v214' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A7F8: using guessed type wchar_t *off_140A6A7F8[2];
// 140B35AF0: using guessed type wchar_t aTscreenshots[13];
// 140B35B10: using guessed type wchar_t aBisunique[10];
// 140B35B50: using guessed type wchar_t aStrsprite_5[10];
// 140B35B68: using guessed type wchar_t aStrtooltip_2[11];
// 140B35B80: using guessed type wchar_t aKupselllink[12];
// 140B35B98: using guessed type wchar_t aEtype_26[6];
// 140B35BA8: using guessed type wchar_t aStrname_76[8];
// 140B35BB8: using guessed type wchar_t aNid_26[4];
// 140B35BC0: using guessed type wchar_t aNcost_1[6];
// 140B35C78: using guessed type wchar_t aNavailablecoun_2[16];
// 140B35C98: using guessed type wchar_t aTrepairrequire[20];
// 140B35CC0: using guessed type wchar_t aNrequiredcost_1[14];
// 140B35D00: using guessed type wchar_t aEtype_28[6];
// 140B35D10: using guessed type wchar_t aStrname_78[8];
// 140B35D20: using guessed type wchar_t aNavailablecoun_1[16];
// 140B35D40: using guessed type wchar_t aTcostrequireme[18];
// 140B35D68: using guessed type wchar_t aNrequiredcost_0[14];
// 140B35DA0: using guessed type wchar_t aEtype_27[6];
// 140B35DB0: using guessed type wchar_t aStrname_77[8];
// 140B35DC0: using guessed type wchar_t aBisrotatable[13];
// 140B35DE0: using guessed type wchar_t aTflags_0[7];
// 140B35DF0: using guessed type wchar_t aBisuniqueharve[17];
// 140B35E18: using guessed type wchar_t aBisuniquegarde[16];
// 140B35EC0: using guessed type wchar_t aBarerepairrequ[26];
// 140B35F20: using guessed type wchar_t aTprerequisites[15];
// 140B35F40: using guessed type wchar_t aBarecostrequir[24];
// 140B35F70: using guessed type wchar_t aBprerequisitem[17];
// 140B35F98: using guessed type wchar_t aStrtooltip_3[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E00: using guessed type int dword_140C63E00;
// 140C64C88: using guessed type __int64 qword_140C64C88;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

