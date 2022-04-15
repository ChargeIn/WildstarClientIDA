#include "../winhttp.h"

//----- (00000001406BA350) ----------------------------------------------------
__int64 __fastcall sub_1406BA350(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // r15
	__int64 v5; // r8
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // r13
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	int v15; // ecx
	int v16; // r10d
	int v17; // eax
	__int64 v18; // rsi
	__int64 v19; // rcx
	unsigned __int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // r12d
	__int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // rcx
	unsigned __int64* v27; // r15
	unsigned __int64 v28; // rsi
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64* v33; // rax
	_QWORD* v34; // r15
	int v35; // ecx
	unsigned int v36; // eax
	__int64 v37; // r13
	unsigned __int64 v38; // rbx
	_QWORD* v39; // rsi
	_QWORD* v40; // r13
	__int64 v41; // r8
	_QWORD* v42; // rax
	__int64 v43; // rcx
	__int64 v44; // rdx
	int v45; // r11d
	_QWORD* v46; // rax
	__int64 v47; // r11
	__int64 v48; // rdx
	_QWORD* v49; // rax
	__int64 v50; // r11
	__int64 v51; // rdx
	__int64 v52; // rcx
	__int64(__fastcall * *v53)(); // rax
	_QWORD* v54; // rax
	__int64 v55; // rcx
	__int64 v56; // rdx
	int v57; // r11d
	__int64 v58; // r12
	__int64 v59; // rdx
	int v60; // esi
	__int64 v61; // r13
	__int64 v62; // rax
	__int64 v63; // rcx
	unsigned int v64; // r12d
	unsigned int v65; // esi
	unsigned __int64 v66; // rax
	__int64 v67; // rbx
	__int64 v68; // rax
	int v69; // eax
	__int64 v70; // rcx
	_QWORD* v71; // rax
	__int64 v72; // rcx
	__int64 v73; // rdx
	_QWORD* v74; // rax
	__int64 v75; // r11
	__int64 v76; // rdx
	_QWORD* v77; // rax
	int v78; // r9d
	__int64 v79; // r11
	__int64 v80; // rdx
	__int64 v81; // rdx
	int v82; // ebx
	__int64 v83; // rax
	__int64 v84; // rdx
	__int64 v85; // rdx
	int* v86; // rbx
	_QWORD* v87; // rbx
	__int64 v88; // rcx
	int v89; // r13d
	_QWORD* v90; // rax
	__int64 v91; // rcx
	__int64 v92; // rdx
	int v93; // r11d
	__int64 v94; // rbx
	_QWORD* v95; // rax
	__int64 v96; // rdx
	int v97; // r11d
	__int64 v98; // rbx
	_QWORD* v99; // rax
	__int64 v100; // rdx
	int v101; // r11d
	__int64 v102; // rbx
	_QWORD* v103; // rax
	__int64 v104; // rdx
	int v105; // r11d
	__int64 v106; // rbx
	_QWORD* v107; // rax
	__int64 v108; // rdx
	int v109; // r11d
	__int64 v110; // rbx
	_QWORD* v111; // rax
	__int64 v112; // rdx
	int v113; // r11d
	__int64 v114; // rdx
	_QWORD* v115; // rax
	__int64 v116; // rcx
	unsigned __int64* v117; // r15
	unsigned __int64 v118; // rsi
	__int64 v119; // rbx
	__int64 v120; // rax
	__int64 v121; // rcx
	__int64 v122; // rax
	__int64* v123; // rax
	_QWORD* v124; // rax
	__int64 v125; // r11
	unsigned __int64* v126; // r15
	unsigned __int64 v127; // rsi
	__int64 v128; // rbx
	__int64 v129; // rax
	__int64 v130; // rcx
	_DWORD* v131; // rax
	__int64* v132; // rax
	_QWORD* v133; // rax
	__int64 v134; // r11
	unsigned __int64* v135; // r15
	unsigned __int64 v136; // rsi
	__int64 v137; // rbx
	__int64 v138; // rax
	__int64 v139; // rcx
	_DWORD* v140; // rax
	__int64* v141; // rax
	__int64 v142; // rcx
	unsigned __int64 v143; // rax
	__int64 v144; // rax
	__int64 v145; // rsi
	__int64 v146; // rbx
	__int64 v147; // rax
	__int64 v148; // rdx
	char v149; // cl
	__int64 v150; // rax
	unsigned __int64 v151; // rax
	__int64 v152; // rbx
	__int64 v153; // rax
	__int64 v154; // r9
	_QWORD* v155; // rax
	__int64 v156; // r11
	unsigned __int64* v157; // r15
	unsigned __int64 v158; // rsi
	__int64 v159; // rbx
	__int64 v160; // rax
	__int64 v161; // rcx
	__int64 v162; // rax
	__int64* v163; // rax
	_QWORD* v164; // rax
	__int64 v165; // r11
	unsigned __int64* v166; // r15
	unsigned __int64 v167; // rsi
	__int64 v168; // rbx
	__int64 v169; // rax
	__int64 v170; // rcx
	_DWORD* v171; // rax
	__int64* v172; // rax
	_QWORD* v173; // rax
	__int64 v174; // r11
	unsigned __int64* v175; // r15
	unsigned __int64 v176; // rsi
	__int64 v177; // rbx
	__int64 v178; // rax
	__int64 v179; // rcx
	_DWORD* v180; // rax
	__int64* v181; // rax
	_QWORD* v182; // rax
	__int64 v183; // r11
	unsigned __int64* v184; // r15
	unsigned __int64 v185; // rsi
	__int64 v186; // rbx
	__int64 v187; // rax
	__int64 v188; // rcx
	_DWORD* v189; // rax
	__int64* v190; // rax
	int v191; // r12d
	_QWORD* v192; // rax
	__int64 v193; // r11
	unsigned __int64* v194; // r15
	unsigned __int64 v195; // rsi
	__int64 v196; // rbx
	__int64 v197; // rax
	__int64 v198; // rcx
	__int64 v199; // rax
	__int64* v200; // rax
	_QWORD* v201; // rax
	__int64 v202; // r11
	unsigned __int64* v203; // r15
	unsigned __int64 v204; // rsi
	__int64 v205; // rbx
	__int64 v206; // rax
	__int64 v207; // rcx
	_DWORD* v208; // rax
	__int64* v209; // rax
	_QWORD* v210; // rax
	__int64 v211; // r11
	__int64 v212; // rdx
	int v213; // ecx
	unsigned int v214; // eax
	_QWORD* v215; // rax
	__int64 v216; // r8
	__int64 v217; // rdx
	int v218; // r10d
	__int64 v220; // [rsp+28h] [rbp-D8h]
	unsigned int v221; // [rsp+30h] [rbp-D0h]
	__int64 v222; // [rsp+38h] [rbp-C8h]
	__int64 v223; // [rsp+38h] [rbp-C8h]
	__int64 v224; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v225)(); // [rsp+48h] [rbp-B8h] BYREF
	__int64 v226; // [rsp+50h] [rbp-B0h]
	_QWORD* v227; // [rsp+58h] [rbp-A8h]
	int v228; // [rsp+60h] [rbp-A0h]
	__int64 v229; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v230)(); // [rsp+70h] [rbp-90h] BYREF
	__int128 v231; // [rsp+78h] [rbp-88h]
	int v232; // [rsp+88h] [rbp-78h]
	__int64 v233; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * *v234)(); // [rsp+98h] [rbp-68h] BYREF
	int v235; // [rsp+A0h] [rbp-60h]
	_QWORD* v236; // [rsp+A8h] [rbp-58h]
	int v237; // [rsp+B0h] [rbp-50h]
	__int64(__fastcall * *v238)(); // [rsp+B8h] [rbp-48h] BYREF
	int v239; // [rsp+C0h] [rbp-40h]
	_QWORD* v240; // [rsp+C8h] [rbp-38h]
	int v241; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v242)(); // [rsp+D8h] [rbp-28h] BYREF
	int v243; // [rsp+E0h] [rbp-20h]
	_QWORD* v244; // [rsp+E8h] [rbp-18h]
	int v245; // [rsp+F0h] [rbp-10h]
	__int64 v246; // [rsp+F8h] [rbp-8h] BYREF
	int v247; // [rsp+100h] [rbp+0h]
	char v248[1224]; // [rsp+108h] [rbp+8h] BYREF
	__int64 v249[3]; // [rsp+5D0h] [rbp+4D0h] BYREF
	int v250; // [rsp+5E8h] [rbp+4E8h]
	__int64 v251; // [rsp+8D0h] [rbp+7D0h]
	int v252; // [rsp+A70h] [rbp+970h]

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8), (v224 = v4) != 0))
	{
		v5 = *(_QWORD*)(qword_140C65A38 + 160);
		v6 = **(_DWORD**)(v4 + 8);
		v7 = *(_QWORD*)(v5 + 8);
		v8 = v5;
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < v6)
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v8 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v8 == v5 || (v222 = v8, v6 < *(_DWORD*)(v8 + 32)))
			v222 = *(_QWORD*)(qword_140C65A38 + 160);
		v9 = 0i64;
		if (v222 != v5)
			v9 = *(_QWORD*)(v222 + 40);
		v10 = v1[4];
		v229 = v9;
		v11 = *(_QWORD*)(v10 + 112);
		v238 = off_140B569F0;
		v240 = v1;
		v241 = 1;
		if (*(_QWORD*)(v10 + 120) >= v11)
			sub_14005E2C0((__int64)v1);
		v12 = v1[2];
		v13 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		v1[2] += 16i64;
		v14 = sub_1400578C0((__int64)v1);
		v15 = -1;
		v16 = v14;
		v239 = v14;
		v17 = 0;
		v18 = 0i64;
		if (*(_DWORD*)(v4 + 24) != -1)
			v15 = *(_DWORD*)(v4 + 24);
		v221 = 0;
		if (v15)
			v17 = v15;
		if (v17)
		{
			while (1)
			{
				v19 = v1[4];
				v234 = off_140B569F0;
				v236 = v1;
				v20 = *(_QWORD*)(v19 + 112);
				v237 = 1;
				if (*(_QWORD*)(v19 + 120) >= v20)
					sub_14005E2C0((__int64)v1);
				v21 = v1[2];
				v22 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v21 + 8) = 5;
				*(_QWORD*)v21 = v22;
				v1[2] += 16i64;
				v23 = sub_1400578C0((__int64)v1);
				v24 = *(_QWORD*)(v1[4] + 160i64);
				v235 = v23;
				v25 = sub_14005C3C0(v24, v23);
				v26 = v1[2];
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				v1[2] += 16i64;
				v27 = (unsigned __int64*)sub_14018F0E0(&v225, L"nRewardIdx")[1];
				if (v27)
				{
					v28 = -1i64;
					do
						++v28;
					while (*((_BYTE*)v27 + v28));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v29 = v1[2];
					v30 = sub_140062650((__int64)v1, v27, v28);
					v18 = v221;
					*(_DWORD*)(v29 + 8) = 4;
					*(_QWORD*)v29 = v30;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v31 = v226;
				v1[2] += 16i64;
				if (v31)
					sub_14018B900(v31, 0);
				v32 = v1[2];
				*(_DWORD*)(v32 + 8) = 3;
				*(double*)v32 = (double)(int)v18;
				v1[2] += 16i64;
				v33 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v33, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v34 = 0i64;
				if (v9)
					break;
				v37 = v224;
				v38 = 0i64;
				v39 = (_QWORD*)(*(_QWORD*)(v224 + 56) + 16 * v18);
				if (v39[1])
				{
					do
					{
						v40 = *(_QWORD**)(*v39 + 8 * v38);
						v41 = *(unsigned int*)(v40[1] + 12i64);
						if (!(_DWORD)v41
							|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
								+ 24i64))(
									qword_140C659A0,
									*(_QWORD*)(qword_140C65898 + 120),
									v41,
									0i64,
									0i64,
									0))
						{
							if (v34)
								goto LABEL_79;
							v34 = v40;
						}
						++v38;
					} while (v38 < v39[1]);
					v9 = v229;
					goto LABEL_46;
				}
			LABEL_80:
				v115 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				v116 = v1[2];
				*(_QWORD*)v116 = *v115;
				*(_DWORD*)(v116 + 8) = *((_DWORD*)v115 + 2);
				v1[2] += 16i64;
				v117 = (unsigned __int64*)sub_14018F0E0(&v225, L"idReward")[1];
				if (v117)
				{
					v118 = -1i64;
					do
						++v118;
					while (*((_BYTE*)v117 + v118));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v119 = v1[2];
					v120 = sub_140062650((__int64)v1, v117, v118);
					*(_DWORD*)(v119 + 8) = 4;
					*(_QWORD*)v119 = v120;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v121 = v226;
				v1[2] += 16i64;
				if (v121)
					sub_14018B900(v121, 0);
				v122 = v1[2];
				*(_QWORD*)v122 = 0i64;
				*(_DWORD*)(v122 + 8) = 3;
				v1[2] += 16i64;
				v123 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v123, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v124 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				*(_QWORD*)v125 = *v124;
				*(_DWORD*)(v125 + 8) = *((_DWORD*)v124 + 2);
				v1[2] += 16i64;
				v126 = (unsigned __int64*)sub_14018F0E0(&v225, L"bIsValid")[1];
				if (v126)
				{
					v127 = -1i64;
					do
						++v127;
					while (*((_BYTE*)v126 + v127));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v128 = v1[2];
					v129 = sub_140062650((__int64)v1, v126, v127);
					*(_DWORD*)(v128 + 8) = 4;
					*(_QWORD*)v128 = v129;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v130 = v226;
				v1[2] += 16i64;
				if (v130)
					sub_14018B900(v130, 0);
				v131 = (_DWORD*)v1[2];
				*v131 = 0;
				v131[2] = 1;
				v1[2] += 16i64;
				v132 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v132, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v133 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				*(_QWORD*)v134 = *v133;
				*(_DWORD*)(v134 + 8) = *((_DWORD*)v133 + 2);
				v1[2] += 16i64;
				v135 = (unsigned __int64*)sub_14018F0E0(&v225, L"bIsStatic")[1];
				if (v135)
				{
					v136 = -1i64;
					do
						++v136;
					while (*((_BYTE*)v135 + v136));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v137 = v1[2];
					v138 = sub_140062650((__int64)v1, v135, v136);
					*(_DWORD*)(v137 + 8) = 4;
					*(_QWORD*)v137 = v138;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v139 = v226;
				v1[2] += 16i64;
				if (v139)
					sub_14018B900(v139, 0);
				v140 = (_DWORD*)v1[2];
				*v140 = 1;
				v140[2] = 1;
				v1[2] += 16i64;
				v141 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v141, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v142 = v1[4];
				v143 = *(_QWORD*)(v142 + 112);
				v231 = 1ui64;
				if (*(_QWORD*)(v142 + 120) >= v143)
					sub_14005E2C0((__int64)v1);
				v144 = v1[5];
				if (v144 == v1[10])
					v145 = v1[15];
				else
					v145 = *(_QWORD*)(**(_QWORD**)(v144 + 8) + 24i64);
				v146 = v1[4];
				v147 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v146 + 16))(
					*(_QWORD*)(v146 + 24),
					0i64,
					0i64,
					72i64);
				v148 = v147;
				if (!v147)
					sub_140061040((__int64)v1, 4);
				*(_QWORD*)(v146 + 120) += 72i64;
				v149 = *(_BYTE*)(v1[4] + 32i64);
				*(_BYTE*)(v147 + 8) = 7;
				*(_QWORD*)(v147 + 32) = 24i64;
				*(_QWORD*)(v147 + 16) = 0i64;
				*(_QWORD*)(v147 + 24) = v145;
				*(_BYTE*)(v147 + 9) = v149 & 3;
				*(_QWORD*)v147 = **(_QWORD**)(v1[4] + 176i64);
				**(_QWORD**)(v1[4] + 176i64) = v147;
				v150 = v1[2];
				*(_QWORD*)v150 = v148;
				*(_DWORD*)(v150 + 8) = 7;
				v1[2] += 16i64;
				v151 = v231;
				*(_QWORD*)(v148 + 48) = 0i64;
				*(_OWORD*)(v148 + 56) = __PAIR128__(*((unsigned __int64*)&v231 + 1), v151);
				v152 = v1[4];
				v153 = sub_140062650((__int64)v1, (unsigned __int64*)"Game.Money", 0xAui64);
				v154 = v1[2];
				v246 = v153;
				v247 = 4;
				sub_14005E8E0((__int64)v1, v152 + 160, (int*)&v246, v154);
				v1[2] += 16i64;
				sub_140058BF0((__int64)v1, -2);
				sub_1400FB540((__int64)&v234);
				v1[2] -= 16i64;
				v155 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				*(_QWORD*)v156 = *v155;
				*(_DWORD*)(v156 + 8) = *((_DWORD*)v155 + 2);
				v1[2] += 16i64;
				v157 = (unsigned __int64*)sub_14018F0E0(&v225, L"nNumRewardChoices")[1];
				if (v157)
				{
					v158 = -1i64;
					do
						++v158;
					while (*((_BYTE*)v157 + v158));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v159 = v1[2];
					v160 = sub_140062650((__int64)v1, v157, v158);
					*(_DWORD*)(v159 + 8) = 4;
					*(_QWORD*)v159 = v160;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v161 = v226;
				v1[2] += 16i64;
				if (v161)
					sub_14018B900(v161, 0);
				v162 = v1[2];
				*(_QWORD*)v162 = 0i64;
				*(_DWORD*)(v162 + 8) = 3;
				v1[2] += 16i64;
				v163 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v163, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v164 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				*(_QWORD*)v165 = *v164;
				*(_DWORD*)(v165 + 8) = *((_DWORD*)v164 + 2);
				v1[2] += 16i64;
				v166 = (unsigned __int64*)sub_14018F0E0(&v225, L"bIsCasque")[1];
				if (v166)
				{
					v167 = -1i64;
					do
						++v167;
					while (*((_BYTE*)v166 + v167));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v168 = v1[2];
					v169 = sub_140062650((__int64)v1, v166, v167);
					*(_DWORD*)(v168 + 8) = 4;
					*(_QWORD*)v168 = v169;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v170 = v226;
				v1[2] += 16i64;
				if (v170)
					sub_14018B900(v170, 0);
				v171 = (_DWORD*)v1[2];
				*v171 = 0;
				v171[2] = 1;
				v1[2] += 16i64;
				v172 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v172, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v173 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				*(_QWORD*)v174 = *v173;
				*(_DWORD*)(v174 + 8) = *((_DWORD*)v173 + 2);
				v1[2] += 16i64;
				v175 = (unsigned __int64*)sub_14018F0E0(&v225, L"bIsClaimed")[1];
				if (v175)
				{
					v176 = -1i64;
					do
						++v176;
					while (*((_BYTE*)v175 + v176));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v177 = v1[2];
					v178 = sub_140062650((__int64)v1, v175, v176);
					*(_DWORD*)(v177 + 8) = 4;
					*(_QWORD*)v177 = v178;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v179 = v226;
				v1[2] += 16i64;
				if (v179)
					sub_14018B900(v179, 0);
				v180 = (_DWORD*)v1[2];
				*v180 = 0;
				v180[2] = 1;
				v1[2] += 16i64;
				v181 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v181, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v182 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
				*(_QWORD*)v183 = *v182;
				*(_DWORD*)(v183 + 8) = *((_DWORD*)v182 + 2);
				v1[2] += 16i64;
				v184 = (unsigned __int64*)sub_14018F0E0(&v225, L"bCanClaim")[1];
				if (v184)
				{
					v185 = -1i64;
					do
						++v185;
					while (*((_BYTE*)v184 + v185));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v186 = v1[2];
					v187 = sub_140062650((__int64)v1, v184, v185);
					*(_DWORD*)(v186 + 8) = 4;
					*(_QWORD*)v186 = v187;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v188 = v226;
				v1[2] += 16i64;
				if (v188)
					sub_14018B900(v188, 0);
				v189 = (_DWORD*)v1[2];
				*v189 = 0;
				v189[2] = 1;
				v1[2] += 16i64;
				v190 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v190, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				if ((unsigned __int64)v221 >= *(_QWORD*)(v37 + 24))
					v191 = 0;
				else
					v191 = *(_DWORD*)(*(_QWORD*)(v37 + 16) + 4i64 * v221);
				v89 = v235;
				v192 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v235);
				*(_QWORD*)v193 = *v192;
				*(_DWORD*)(v193 + 8) = *((_DWORD*)v192 + 2);
				v1[2] += 16i64;
				v194 = (unsigned __int64*)sub_14018F0E0(&v225, L"nCost")[1];
				if (v194)
				{
					v195 = -1i64;
					do
						++v195;
					while (*((_BYTE*)v194 + v195));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v196 = v1[2];
					v197 = sub_140062650((__int64)v1, v194, v195);
					*(_DWORD*)(v196 + 8) = 4;
					*(_QWORD*)v196 = v197;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v198 = v226;
				v1[2] += 16i64;
				if (v198)
					sub_14018B900(v198, 0);
				v199 = v1[2];
				*(_DWORD*)(v199 + 8) = 3;
				*(double*)v199 = (double)v191;
				v1[2] += 16i64;
				v200 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v200, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v201 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
				*(_QWORD*)v202 = *v201;
				*(_DWORD*)(v202 + 8) = *((_DWORD*)v201 + 2);
				v1[2] += 16i64;
				v203 = (unsigned __int64*)sub_14018F0E0(&v225, L"bIsAutoSoulbind")[1];
				if (v203)
				{
					v204 = -1i64;
					do
						++v204;
					while (*((_BYTE*)v203 + v204));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v205 = v1[2];
					v206 = sub_140062650((__int64)v1, v203, v204);
					*(_DWORD*)(v205 + 8) = 4;
					*(_QWORD*)v205 = v206;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v207 = v226;
				v1[2] += 16i64;
				if (v207)
					sub_14018B900(v207, 0);
				v208 = (_DWORD*)v1[2];
				*v208 = 0;
				v208[2] = 1;
				v1[2] += 16i64;
				v209 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v209, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v210 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
				*(_QWORD*)v211 = *v210;
				*(_DWORD*)(v211 + 8) = *((_DWORD*)v210 + 2);
				v1[2] += 16i64;
				sub_1400F0630((__int64)v1, v212, L"bIsAutoClaim", 0);
				v1[2] -= 16i64;
				sub_1400FB1D0((__int64)&v238);
			LABEL_171:
				sub_1400579E0((__int64)v1, v114, v89);
				v9 = v229;
				v213 = -1;
				v18 = v221 + 1;
				v214 = 0;
				if (*(_DWORD*)(v224 + 24) != -1)
					v213 = *(_DWORD*)(v224 + 24);
				++v221;
				if (v213)
					v214 = v213;
				if ((unsigned int)v18 >= v214)
				{
					v1 = v240;
					v16 = v239;
					goto LABEL_177;
				}
			}
			v35 = -1;
			v36 = 0;
			if (*(_DWORD*)(v9 + 24) != -1)
				v35 = *(_DWORD*)(v9 + 24);
			if (v35)
				v36 = v35;
			if ((unsigned int)v18 < v36)
			{
				v23 = v235;
				v34 = *(_QWORD**)(*(_QWORD*)(v9 + 16) + 8 * v18);
			LABEL_46:
				if (v34)
				{
					v42 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
					v43 = v1[2];
					*(_QWORD*)v43 = *v42;
					*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v44, L"idReward", v45);
					v1[2] -= 16i64;
					v46 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
					*(_QWORD*)v47 = *v46;
					*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v48, L"bIsValid", 1);
					v1[2] -= 16i64;
					v49 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
					*(_QWORD*)v50 = *v49;
					*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v51, L"bIsStatic", v9 == 0);
					v1[2] -= 16i64;
					v52 = v34[1];
					v53 = (__int64(__fastcall**)()) * (unsigned int*)(v52 + 24);
					*(_QWORD*)((char*)&v231 + 4) = 0i64;
					v230 = v53;
					LODWORD(v231) = *(_DWORD*)(v52 + 20);
					HIDWORD(v231) = 0;
					if ((unsigned int)sub_140501210(v1, &v230))
					{
						sub_1400FB540((__int64)&v234);
						v1[2] -= 16i64;
					}
					v54 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v23);
					v55 = v1[2];
					*(_QWORD*)v55 = *v54;
					*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v56, L"nNumRewardChoices", v57);
					v1[2] -= 16i64;
					v242 = off_140B569F0;
					v58 = (__int64)v1;
					v244 = v1;
					v245 = 1;
					sub_140058900((__int64)v1, v59, 0);
					v223 = 0i64;
					v60 = sub_1400578C0((__int64)v1);
					v243 = v60;
					if (v34[3])
					{
						v61 = 0i64;
						while (1)
						{
							v62 = v34[2];
							v63 = v1[4];
							v230 = off_140B569F0;
							v64 = *(_DWORD*)(v61 + v62);
							v65 = *(_DWORD*)(v61 + v62 + 4);
							LODWORD(v233) = *(_DWORD*)(v61 + v62 + 8);
							v66 = *(_QWORD*)(v63 + 112);
							*((_QWORD*)&v231 + 1) = v1;
							v232 = 1;
							if (*(_QWORD*)(v63 + 120) >= v66)
								sub_14005E2C0((__int64)v1);
							v67 = v1[2];
							v68 = sub_14005C1B0((__int64)v1, 0, 0);
							*(_DWORD*)(v67 + 8) = 5;
							*(_QWORD*)v67 = v68;
							v1[2] += 16i64;
							v69 = sub_1400578C0((__int64)v1);
							v70 = v1[4];
							LODWORD(v231) = v69;
							v71 = sub_14005C3C0(*(_QWORD*)(v70 + 160), v69);
							v72 = v1[2];
							*(_QWORD*)v72 = *v71;
							*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v73, L"nChoiceIdx", v223);
							v1[2] -= 16i64;
							v74 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v231);
							*(_QWORD*)v75 = *v74;
							*(_DWORD*)(v75 + 8) = *((_DWORD*)v74 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v76, L"eRewardType", v64);
							v1[2] -= 16i64;
							v77 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v231);
							v78 = v233;
							*(_QWORD*)v79 = *v77;
							*(_DWORD*)(v79 + 8) = *((_DWORD*)v77 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v80, L"nRewardCount", v78);
							v1[2] -= 16i64;
							if (v64)
								break;
							v86 = sub_1400B5DF0(qword_140C658F0, v65, 0i64);
							if (v86)
							{
								sub_14040FAE0((__int64)v249);
								if (v252 <= 6)
								{
									v249[1] = (__int64)v86;
									v252 = 6;
								}
								v250 = (*(_DWORD*)(v34[1] + 16i64) >> 1) & 1;
								v87 = (_QWORD*)sub_14040FC60((__int64)v248, (__int64)v249);
								if ((unsigned int)sub_140415BB0(v1, (__int64)v87))
								{
									sub_1400FB540((__int64)&v230);
									v1[2] -= 16i64;
								}
								if (*v87)
								{
									(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v87 + 8i64))(*v87);
									*v87 = 0i64;
								}
								v88 = v87[96];
								if (v88)
									sub_14018B900(v88, 0);
								if (v249[0])
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v249[0] + 8i64))(v249[0]);
									v249[0] = 0i64;
								}
								if (v251)
									sub_14018B900(v251, 0);
								goto LABEL_72;
							}
						LABEL_73:
							sub_1400579E0((__int64)v1, v85, v231);
							v61 += 12i64;
							if ((unsigned __int64)++v223 >= v34[3])
							{
								v58 = (__int64)v244;
								v60 = v243;
								goto LABEL_75;
							}
						}
						if (v64 == 1)
						{
							v227 = v1;
							v228 = 1;
							v225 = off_140B569F0;
							sub_140058900((__int64)v1, v81, 0);
							v82 = sub_1400578C0((__int64)v1);
							LODWORD(v226) = v82;
							v83 = sub_1401E8C20(v65);
							if (v83)
								sub_1404E34B0((__int64)&v225, v83);
							sub_1400FB2A0((__int64)&v230, (__int64)L"accountItemReward", v82);
							sub_1400579E0((__int64)v1, v84, v82);
						}
						else
						{
							v233 = 0x141E322A0i64;
							LODWORD(v220) = *(_DWORD*)v34[1];
							sub_1401A3130(116, 0, &v233, v64, v223, v220);
						}
					LABEL_72:
						sub_1400FB1D0((__int64)&v242);
						goto LABEL_73;
					}
				LABEL_75:
					sub_1400FB2A0((__int64)&v234, (__int64)L"tRewardChoices", v60);
					v89 = v235;
					v90 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v235);
					v91 = v1[2];
					*(_QWORD*)v91 = *v90;
					*(_DWORD*)(v91 + 8) = *((_DWORD*)v90 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v92, L"bIsCasque", v93);
					v1[2] -= 16i64;
					v94 = v1[2];
					v95 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
					*(_QWORD*)v94 = *v95;
					*(_DWORD*)(v94 + 8) = *((_DWORD*)v95 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v96, L"bIsClaimed", v97);
					v1[2] -= 16i64;
					v98 = v1[2];
					if (v229)
						sub_1404D2240(v229, v221);
					v99 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
					*(_QWORD*)v98 = *v99;
					*(_DWORD*)(v98 + 8) = *((_DWORD*)v99 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v100, L"bCanClaim", v101);
					v1[2] -= 16i64;
					v102 = v1[2];
					v103 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
					*(_QWORD*)v102 = *v103;
					*(_DWORD*)(v102 + 8) = *((_DWORD*)v103 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v104, L"nCost", v105);
					v1[2] -= 16i64;
					v106 = v1[2];
					v107 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
					*(_QWORD*)v106 = *v107;
					*(_DWORD*)(v106 + 8) = *((_DWORD*)v107 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v108, L"bIsAutoSoulbind", v109);
					v1[2] -= 16i64;
					v110 = v1[2];
					v111 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v89);
					*(_QWORD*)v110 = *v111;
					*(_DWORD*)(v110 + 8) = *((_DWORD*)v111 + 2);
					v1[2] += 16i64;
					sub_1400F0630((__int64)v1, v112, L"bIsAutoClaim", v113);
					v1[2] -= 16i64;
					sub_1400FB1D0((__int64)&v238);
					if (v58)
						sub_1400579E0(v58, v114, v60);
					goto LABEL_171;
				}
			}
		LABEL_79:
			v37 = v224;
			goto LABEL_80;
		}
	LABEL_177:
		v215 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v16);
		v216 = v1[2];
		*(_QWORD*)v216 = *v215;
		v217 = *((unsigned int*)v215 + 2);
		*(_DWORD*)(v216 + 8) = v217;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v217, v218);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 1406BA6F1: variable 'v44' is possibly undefined
// 1406BA6F1: variable 'v45' is possibly undefined
// 1406BA728: variable 'v47' is possibly undefined
// 1406BA738: variable 'v48' is possibly undefined
// 1406BA76C: variable 'v50' is possibly undefined
// 1406BA783: variable 'v51' is possibly undefined
// 1406BA80C: variable 'v56' is possibly undefined
// 1406BA80C: variable 'v57' is possibly undefined
// 1406BA835: variable 'v59' is possibly undefined
// 1406BA90C: variable 'v73' is possibly undefined
// 1406BA941: variable 'v75' is possibly undefined
// 1406BA951: variable 'v76' is possibly undefined
// 1406BA987: variable 'v79' is possibly undefined
// 1406BA997: variable 'v80' is possibly undefined
// 1406BA9D7: variable 'v220' is possibly undefined
// 1406BAA00: variable 'v81' is possibly undefined
// 1406BAA46: variable 'v84' is possibly undefined
// 1406BAB42: variable 'v85' is possibly undefined
// 1406BABC5: variable 'v92' is possibly undefined
// 1406BABC5: variable 'v93' is possibly undefined
// 1406BAC3D: variable 'v96' is possibly undefined
// 1406BAC3D: variable 'v97' is possibly undefined
// 1406BAC9B: variable 'v100' is possibly undefined
// 1406BAC9B: variable 'v101' is possibly undefined
// 1406BACFC: variable 'v104' is possibly undefined
// 1406BACFC: variable 'v105' is possibly undefined
// 1406BAD4E: variable 'v108' is possibly undefined
// 1406BAD4E: variable 'v109' is possibly undefined
// 1406BADA1: variable 'v112' is possibly undefined
// 1406BADA1: variable 'v113' is possibly undefined
// 1406BADC6: variable 'v114' is possibly undefined
// 1406BAEE6: variable 'v125' is possibly undefined
// 1406BAFC8: variable 'v134' is possibly undefined
// 1406BB1DD: variable 'v156' is possibly undefined
// 1406BB2C6: variable 'v165' is possibly undefined
// 1406BB3A8: variable 'v174' is possibly undefined
// 1406BB48A: variable 'v183' is possibly undefined
// 1406BB587: variable 'v193' is possibly undefined
// 1406BB673: variable 'v202' is possibly undefined
// 1406BB757: variable 'v211' is possibly undefined
// 1406BB767: variable 'v212' is possibly undefined
// 1406BB7F6: variable 'v218' is possibly undefined
// 140B37A48: using guessed type wchar_t aIdreward_4[9];
// 140B37A60: using guessed type wchar_t aBisvalid[9];
// 140B37A78: using guessed type wchar_t aBisautosoulbin_0[16];
// 140B37A98: using guessed type wchar_t aBisautoclaim_0[13];
// 140B37AB8: using guessed type wchar_t aBcanclaim_0[10];
// 140B37AD0: using guessed type wchar_t aNcost_6[6];
// 140B37AE0: using guessed type wchar_t aBiscasque_0[10];
// 140B37AF8: using guessed type wchar_t aBisclaimed_0[11];
// 140B37B28: using guessed type wchar_t aNnumrewardchoi_0[18];
// 140B37B50: using guessed type wchar_t aBisvalid_0[9];
// 140B37B68: using guessed type wchar_t aBisstatic_0[10];
// 140B37B80: using guessed type wchar_t aNrewardidx[11];
// 140B37B98: using guessed type wchar_t aIdreward_5[9];
// 140B37BB0: using guessed type wchar_t aBisautosoulbin[16];
// 140B37BD0: using guessed type wchar_t aBisautoclaim[13];
// 140B37BF0: using guessed type wchar_t aBcanclaim[10];
// 140B37C08: using guessed type wchar_t aNcost_5[6];
// 140B37C18: using guessed type wchar_t aBiscasque[10];
// 140B37C30: using guessed type wchar_t aBisclaimed[11];
// 140B37D08: using guessed type wchar_t aTrewardchoices[15];
// 140B37D28: using guessed type wchar_t aAccountitemrew[18];
// 140B37D50: using guessed type wchar_t aErewardtype_0[12];
// 140B37D68: using guessed type wchar_t aNrewardcount[13];
// 140B37D88: using guessed type wchar_t aNnumrewardchoi[18];
// 140B37DB0: using guessed type wchar_t aNchoiceidx[11];
// 140B37DC8: using guessed type wchar_t aBisstatic[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65A38: using guessed type __int64 qword_140C65A38;
// 1406BA350: using guessed type char var_9B8[1224];

