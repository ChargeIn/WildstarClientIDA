#include "../winhttp.h"

//----- (000000014076DC20) ----------------------------------------------------
__int64 __fastcall sub_14076DC20(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rdi
	unsigned int v8; // r13d
	int v9; // eax
	unsigned int v10; // r15d
	__int64 v11; // r14
	__int64 v12; // rax
	unsigned int* v13; // rax
	unsigned int v14; // r12d
	int v15; // eax
	__int64 v16; // rdx
	unsigned __int64 v17; // rcx
	__int64 v18; // rdi
	__int64 v19; // rax
	__int64 v20; // rdx
	int v21; // edi
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rsi
	struct _FILETIME v25; // rcx
	int v26; // esi
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int64 v29; // rdi
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // r8
	_DWORD* v32; // rcx
	__int64* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	unsigned __int64* v36; // rdx
	_DWORD* v37; // rax
	__int64* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r10
	_QWORD* v41; // rax
	__int64 v42; // rdx
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // rdi
	_DWORD* v45; // rax
	__int64* v46; // rax
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	__int64 v50; // rcx
	unsigned __int64 v51; // rax
	__int64 v52; // rdi
	__int64 v53; // rax
	int v54; // r12d
	__int64 v55; // rax
	__int64 v56; // rdx
	unsigned __int64 v57; // rcx
	__int64 v58; // rdi
	__int64 v59; // rax
	int v60; // r15d
	unsigned int v61; // r12d
	int v62; // edi
	unsigned __int64 v63; // rcx
	__int64 v64; // r15
	__int64 v65; // r14
	__int64 v66; // rcx
	unsigned __int64 v67; // rax
	__int64 v68; // rdi
	__int64 v69; // rax
	int v70; // eax
	__int64 v71; // rcx
	_QWORD* v72; // rax
	__int64 v73; // rdx
	int v74; // r10d
	_QWORD* v75; // rax
	__int64 v76; // r11
	__int64 v77; // rdx
	int v78; // r10d
	_QWORD* v79; // rax
	__int64 v80; // r11
	__int64 v81; // rdx
	int v82; // r10d
	_QWORD* v83; // rax
	__int64 v84; // r11
	__int64 v85; // rdx
	int v86; // r10d
	_QWORD* v87; // rax
	__int64 v88; // r11
	__int64 v89; // rdx
	int v90; // r10d
	_QWORD* v91; // rax
	__int64 v92; // r11
	__int64 v93; // rdx
	int v94; // r10d
	_QWORD* v95; // rax
	__int64 v96; // r10
	__int64 v97; // rdx
	unsigned __int16* v98; // r11
	_QWORD* v99; // rax
	__int64 v100; // r10
	__int64 v101; // rdx
	int v102; // r11d
	__int64 v103; // rax
	unsigned __int64 v104; // r12
	__int64 v105; // r15
	__int64 v106; // rsi
	int v107; // edi
	_QWORD* v108; // rax
	__int64 v109; // rdx
	unsigned __int16* v110; // r10
	__int64* v111; // rax
	__int64 v112; // rdx
	__int64 v113; // r11
	int v114; // r10d
	__int64 v115; // rdx
	int v116; // edi
	int v117; // r14d
	__int64 v118; // rdx
	_QWORD* v119; // rax
	__int64 v120; // rdx
	_QWORD* v121; // rax
	__int64 v122; // r10
	__int64 v123; // rdx
	_QWORD* v124; // rax
	__int64 v125; // r10
	__int64 v126; // rdx
	_QWORD* v127; // rax
	__int64 v128; // r10
	__int64 v129; // rdx
	_QWORD* v130; // rax
	__int64 v131; // r10
	__int64 v132; // rdx
	_QWORD* v133; // rax
	__int64 v134; // r10
	__int64 v135; // rdx
	unsigned int v136; // eax
	__int64 v137; // rsi
	int v138; // edi
	_QWORD* v139; // rax
	__int64 v140; // rdx
	int v141; // r10d
	_QWORD* v142; // rax
	__int64 v143; // r10
	__int64 v144; // rdx
	int v145; // r11d
	__int64 v146; // rdx
	__int64* v147; // rax
	__int64 v148; // r8
	__int64 v149; // rcx
	__int64 v150; // rdx
	int v151; // edi
	int v152; // r14d
	__int64 v153; // rcx
	__int64 v154; // rsi
	__int64 v155; // rsi
	__int64 v156; // rcx
	unsigned __int64 v157; // rax
	__int64 v158; // rdi
	__int64 v159; // rax
	int v160; // eax
	__int64 v161; // rcx
	int v162; // r12d
	_QWORD* v163; // rax
	__int64 v164; // rdx
	int v165; // r10d
	_QWORD* v166; // rax
	__int64 v167; // r11
	__int64 v168; // rdx
	int v169; // r10d
	_QWORD* v170; // rax
	__int64 v171; // r10
	__int64 v172; // rdx
	unsigned __int16* v173; // r11
	_QWORD* v174; // rax
	__int64 v175; // r10
	__int64 v176; // rdx
	int v177; // r11d
	_QWORD* v178; // rax
	__int64 v179; // r11
	__int64 v180; // rdx
	int v181; // r10d
	__int64 v182; // rax
	__int64 v183; // rcx
	unsigned __int64 v184; // rax
	__int64 v185; // r14
	__int64 v186; // rdi
	__int64 v187; // rax
	unsigned __int64 v188; // r15
	int v189; // edi
	__int64 v190; // r14
	__int64 v191; // rdi
	__int64 v192; // rax
	_QWORD* v193; // rax
	__int64 v194; // rdx
	unsigned __int16* v195; // r10
	_QWORD* v196; // rax
	__int64 v197; // r11
	__int64 v198; // rdx
	int v199; // r10d
	__int64 v200; // rdx
	__int64 v201; // rdx
	_QWORD* v202; // rax
	__int64 v203; // rdx
	int v204; // r10d
	_QWORD* v205; // rax
	__int64 v206; // r10
	__int64 v207; // rdx
	_QWORD* v208; // rax
	__int64 v209; // r10
	__int64 v210; // rdx
	int v212; // [rsp+30h] [rbp-D0h]
	__int64 v213; // [rsp+38h] [rbp-C8h]
	__int64 v214; // [rsp+38h] [rbp-C8h]
	int v215; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v216)(); // [rsp+48h] [rbp-B8h] BYREF
	int v217; // [rsp+50h] [rbp-B0h]
	__int64 v218; // [rsp+58h] [rbp-A8h]
	int v219; // [rsp+60h] [rbp-A0h]
	int v220; // [rsp+68h] [rbp-98h]
	int v221; // [rsp+6Ch] [rbp-94h]
	__int64(__fastcall * *v222)(); // [rsp+70h] [rbp-90h] BYREF
	int v223; // [rsp+78h] [rbp-88h]
	__int64 v224; // [rsp+80h] [rbp-80h]
	int v225; // [rsp+88h] [rbp-78h]
	__int64 v226; // [rsp+90h] [rbp-70h]
	unsigned __int64 v227; // [rsp+98h] [rbp-68h]
	__int64 v228; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v229)(); // [rsp+A8h] [rbp-58h] BYREF
	int v230; // [rsp+B0h] [rbp-50h]
	__int64 v231; // [rsp+B8h] [rbp-48h]
	int v232; // [rsp+C0h] [rbp-40h]
	__int64(__fastcall * *v233)(); // [rsp+C8h] [rbp-38h] BYREF
	int v234; // [rsp+D0h] [rbp-30h]
	__int64 v235; // [rsp+D8h] [rbp-28h]
	int v236; // [rsp+E0h] [rbp-20h]
	__int64(__fastcall * *v237)(); // [rsp+E8h] [rbp-18h] BYREF
	int v238; // [rsp+F0h] [rbp-10h]
	__int64 v239; // [rsp+F8h] [rbp-8h]
	int v240; // [rsp+100h] [rbp+0h]
	__int64 v241; // [rsp+108h] [rbp+8h] BYREF
	__int64 v242; // [rsp+110h] [rbp+10h]
	__int64 v243; // [rsp+118h] [rbp+18h]
	int v244; // [rsp+180h] [rbp+80h]
	unsigned int v245; // [rsp+188h] [rbp+88h]
	int v246; // [rsp+188h] [rbp+88h]
	int v247; // [rsp+190h] [rbp+90h]
	int v248; // [rsp+190h] [rbp+90h]
	int v249; // [rsp+198h] [rbp+98h]
	unsigned __int64 v250; // [rsp+198h] [rbp+98h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = v6 + 384;
	v8 = 1;
	v9 = sub_1400F26A0(v7, 1);
	v10 = 0;
	v11 = v9;
	v220 = v9;
	v12 = sub_14076D520(a1);
	if (v12)
	{
		v13 = *(unsigned int**)(v12 + 16);
		if (v13)
			v10 = *v13;
	}
	v14 = sub_1400F26A0(v7, 3);
	v15 = sub_1400F26A0(v7, 4);
	v16 = *(_QWORD*)(a1 + 32);
	v231 = a1;
	v17 = *(_QWORD*)(v16 + 112);
	v221 = v15;
	v229 = off_140B569F0;
	v232 = 1;
	if (*(_QWORD*)(v16 + 120) >= v17)
		sub_14005E2C0(a1);
	v18 = *(_QWORD*)(a1 + 16);
	v19 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v18 + 8) = 5;
	*(_QWORD*)v18 = v19;
	*(_QWORD*)(a1 + 16) += 16i64;
	v21 = sub_1400578C0(a1);
	v230 = v21;
	if ((int)v11 < 10
		&& (v22 = *(_QWORD*)(qword_140C65A40 + 8 * v11)) != 0
		&& (v23 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v22 + 16i64))(v22, v10, v14),
			v24 = v23,
			(v228 = v23) != 0))
	{
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v23 + 8i64))(v23, v10, v14))
		{
			v26 = sub_1404D3B40(v25, v11, v10, v14);
			v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v21);
			v28 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v29 = -1i64;
			v30 = (unsigned __int64*)sub_14018F0E0(&v241, L"bUpdateRequested")[1];
			if (v30)
			{
				v31 = -1i64;
				do
					++v31;
				while (*((_BYTE*)v30 + v31));
				sub_140058710(a1, v30, v31);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v242)
				sub_14018B900(v242, 0);
			v32 = *(_DWORD**)(a1 + 16);
			v32[2] = 1;
			*v32 = v26 != 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			v33 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v33, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v230);
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v36 = (unsigned __int64*)sub_14018F0E0(&v241, L"bReady")[1];
			if (v36)
			{
				do
					++v29;
				while (*((_BYTE*)v36 + v29));
				sub_140058710(a1, v36, v29);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v242)
				sub_14018B900(v242, 0);
			v37 = *(_DWORD**)(a1 + 16);
			*v37 = 0;
			v37[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			v38 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v38, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v21 = v230;
			v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v230);
			*(_QWORD*)v40 = *v39;
			*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v21);
			v42 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v42 = *v41;
			*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v43 = (unsigned __int64*)sub_14018F0E0(&v241, L"bReady")[1];
			if (v43)
			{
				v44 = -1i64;
				do
					++v44;
				while (*((_BYTE*)v43 + v44));
				sub_140058710(a1, v43, v44);
				v21 = v230;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v242)
				sub_14018B900(v242, 0);
			v45 = *(_DWORD**)(a1 + 16);
			*v45 = 1;
			v45[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			v46 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v46, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v21);
			*(_QWORD*)v48 = *v47;
			*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v49, L"eType", v11);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v50 = *(_QWORD*)(a1 + 32);
			v51 = *(_QWORD*)(v50 + 112);
			v222 = off_140B569F0;
			v224 = a1;
			v225 = 1;
			if (*(_QWORD*)(v50 + 120) >= v51)
				sub_14005E2C0(a1);
			v52 = *(_QWORD*)(a1 + 16);
			v53 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v52 + 8) = 5;
			*(_QWORD*)v52 = v53;
			*(_QWORD*)(a1 + 16) += 16i64;
			v54 = sub_1400578C0(a1);
			v223 = v54;
			v55 = sub_14076D880((__int64)&v222, v11);
			v56 = *(_QWORD*)(a1 + 32);
			v57 = *(_QWORD*)(v56 + 112);
			v226 = v55;
			v233 = off_140B569F0;
			v235 = a1;
			v236 = 1;
			if (*(_QWORD*)(v56 + 120) >= v57)
				sub_14005E2C0(a1);
			v58 = *(_QWORD*)(a1 + 16);
			v59 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v58 + 8) = 5;
			*(_QWORD*)v58 = v59;
			*(_QWORD*)(a1 + 16) += 16i64;
			v60 = sub_1400578C0(a1);
			v234 = v60;
			if ((int)v11 >= 0)
			{
				if ((int)v11 <= 6)
				{
					v151 = 0;
					v152 = 0;
					v246 = 0;
					v248 = 0;
					v250 = 0i64;
					if (*(_QWORD*)(v24 + 40))
					{
						v153 = 0i64;
						v214 = 0i64;
						do
						{
							v154 = *(_QWORD*)(v24 + 32);
							v239 = a1;
							v155 = v153 + v154;
							v156 = *(_QWORD*)(a1 + 32);
							v237 = off_140B569F0;
							v157 = *(_QWORD*)(v156 + 112);
							v240 = 1;
							if (*(_QWORD*)(v156 + 120) >= v157)
								sub_14005E2C0(a1);
							v158 = *(_QWORD*)(a1 + 16);
							v159 = sub_14005C1B0(a1, 0, 0);
							*(_DWORD*)(v158 + 8) = 5;
							*(_QWORD*)v158 = v159;
							*(_QWORD*)(a1 + 16) += 16i64;
							v160 = sub_1400578C0(a1);
							v161 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
							v162 = v160;
							v238 = v160;
							v163 = sub_14005C3C0(v161, v160);
							v164 = *(_QWORD*)(a1 + 16);
							*(_QWORD*)v164 = *v163;
							*(_DWORD*)(v164 + 8) = *((_DWORD*)v163 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v164, L"nRank", v165);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v166 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v162);
							*(_QWORD*)v167 = *v166;
							*(_DWORD*)(v167 + 8) = *((_DWORD*)v166 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v168, L"nLastRank", v169);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v170 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v162);
							*(_QWORD*)v171 = *v170;
							*(_DWORD*)(v171 + 8) = *((_DWORD*)v170 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F0870(a1, v172, L"strName", v173);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v174 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v162);
							*(_QWORD*)v175 = *v174;
							*(_DWORD*)(v175 + 8) = *((_DWORD*)v174 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v176, L"eClass", v177);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v178 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v162);
							*(_QWORD*)v179 = *v178;
							*(_DWORD*)(v179 + 8) = *((_DWORD*)v178 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v180, L"nRating", v181);
							v182 = v226;
							*(_QWORD*)(a1 + 16) -= 16i64;
							if (*(_QWORD*)v155 == v182)
							{
								v246 = *(_DWORD*)(v155 + 20);
								v248 = *(_DWORD*)(v155 + 12);
							}
							v183 = *(_QWORD*)(a1 + 32);
							v216 = off_140B569F0;
							v218 = a1;
							v184 = *(_QWORD*)(v183 + 112);
							v185 = a1;
							v219 = 1;
							if (*(_QWORD*)(v183 + 120) >= v184)
								sub_14005E2C0(a1);
							v186 = *(_QWORD*)(a1 + 16);
							v187 = sub_14005C1B0(a1, 0, 0);
							*(_DWORD*)(v186 + 8) = 5;
							*(_QWORD*)v186 = v187;
							*(_QWORD*)(a1 + 16) += 16i64;
							v188 = 0i64;
							v189 = sub_1400578C0(a1);
							v217 = v189;
							if (*(_QWORD*)(v155 + 40))
							{
								v190 = 0i64;
								do
								{
									if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
										sub_14005E2C0(a1);
									v191 = *(_QWORD*)(a1 + 16);
									v192 = sub_14005C1B0(a1, 0, 0);
									*(_DWORD*)(v191 + 8) = 5;
									*(_QWORD*)v191 = v192;
									*(_QWORD*)(a1 + 16) += 16i64;
									LODWORD(v191) = sub_1400578C0(a1);
									v193 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v191);
									v194 = *(_QWORD*)(a1 + 16);
									*(_QWORD*)v194 = *v193;
									*(_DWORD*)(v194 + 8) = *((_DWORD*)v193 + 2);
									*(_QWORD*)(a1 + 16) += 16i64;
									sub_1400F0870(a1, v194, L"strName", v195);
									*(_QWORD*)(a1 + 16) -= 16i64;
									v196 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v191);
									*(_QWORD*)v197 = *v196;
									*(_DWORD*)(v197 + 8) = *((_DWORD*)v196 + 2);
									*(_QWORD*)(a1 + 16) += 16i64;
									sub_1400F06F0(a1, v198, L"eClass", v199);
									*(_QWORD*)(a1 + 16) -= 16i64;
									sub_1400FB1D0((__int64)&v216);
									sub_1400579E0(a1, v200, v191);
									++v188;
									v190 += 16i64;
								} while (v188 < *(_QWORD*)(v155 + 40));
								v185 = v218;
								v189 = v217;
							}
							sub_1400FB2A0((__int64)&v237, (__int64)L"tTeamMembers", v189);
							sub_1400FB1D0((__int64)&v233);
							if (v185)
								sub_1400579E0(v185, v201, v189);
							sub_1400579E0(a1, v201, v162);
							v24 = v228;
							v153 = v214 + 48;
							++v250;
							v214 += 48i64;
						} while (v250 < *(_QWORD*)(v228 + 40));
						v60 = v234;
						v151 = v246;
						v152 = v248;
						v54 = v223;
					}
					v202 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v54);
					v203 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v203 = *v202;
					*(_DWORD*)(v203 + 8) = *((_DWORD*)v202 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v203, L"nRank", v204);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v205 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v54);
					*(_QWORD*)v206 = *v205;
					*(_DWORD*)(v206 + 8) = *((_DWORD*)v205 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v207, L"nLastRank", v151);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v208 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v54);
					*(_QWORD*)v209 = *v208;
					*(_DWORD*)(v209 + 8) = *((_DWORD*)v208 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v210, L"nRating", v152);
					*(_QWORD*)(a1 + 16) -= 16i64;
				}
				else
				{
					v247 = 0;
					v61 = 0;
					v245 = 0;
					v249 = 0;
					v215 = 0;
					v62 = 0;
					v244 = 0;
					v212 = 0;
					v63 = 0i64;
					v227 = 0i64;
					if (*(_QWORD*)(v24 + 40))
					{
						v64 = 0i64;
						v213 = 0i64;
						do
						{
							v65 = v64 + *(_QWORD*)(v24 + 32);
							if (!v221 || *(_DWORD*)(v65 + 28) == v221)
							{
								v66 = *(_QWORD*)(a1 + 32);
								v218 = a1;
								v216 = off_140B569F0;
								v67 = *(_QWORD*)(v66 + 112);
								v219 = 1;
								if (*(_QWORD*)(v66 + 120) >= v67)
									sub_14005E2C0(a1);
								v68 = *(_QWORD*)(a1 + 16);
								v69 = sub_14005C1B0(a1, 0, 0);
								*(_DWORD*)(v68 + 8) = 5;
								*(_QWORD*)v68 = v69;
								*(_QWORD*)(a1 + 16) += 16i64;
								v70 = sub_1400578C0(a1);
								v71 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
								LODWORD(v68) = v70;
								v217 = v70;
								v72 = sub_14005C3C0(v71, v70);
								v73 = *(_QWORD*)(a1 + 16);
								*(_QWORD*)v73 = *v72;
								*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v73, L"nMgMapId", v74);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v75 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v76 = *v75;
								*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v77, L"nPrimeLevel", v78);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v79 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v80 = *v79;
								*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v81, L"nRewardedTier", v82);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v83 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v84 = *v83;
								*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v85, L"nCompletionTimeMS", v86);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v87 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v88 = *v87;
								*(_DWORD*)(v88 + 8) = *((_DWORD*)v87 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v89, L"nRank", v90);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v91 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v92 = *v91;
								*(_DWORD*)(v92 + 8) = *((_DWORD*)v91 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v93, L"nLastRank", v94);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v95 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v96 = *v95;
								*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F0870(a1, v97, L"strName", v98);
								*(_QWORD*)(a1 + 16) -= 16i64;
								v99 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v68);
								*(_QWORD*)v100 = *v99;
								*(_DWORD*)(v100 + 8) = *((_DWORD*)v99 + 2);
								*(_QWORD*)(a1 + 16) += 16i64;
								sub_1400F06F0(a1, v101, L"eClass", v102);
								v103 = v226;
								*(_QWORD*)(a1 + 16) -= 16i64;
								if (*(_QWORD*)v65 == v103 && (!v244 || v61 < *(_DWORD*)(v65 + 24)))
								{
									v247 = *(_DWORD*)(v65 + 16);
									v245 = *(_DWORD*)(v65 + 24);
									v249 = *(_DWORD*)(v65 + 28);
									v215 = *(_DWORD*)(v65 + 32);
									v244 = *(_DWORD*)(v65 + 36);
									v212 = *(_DWORD*)(v65 + 40);
								}
								sub_1400FA0F0((__int64)&v237, a1, 1);
								v104 = 0i64;
								if (*(_QWORD*)(v65 + 64))
								{
									v105 = 0i64;
									do
									{
										sub_1400FA0F0((__int64)&v241, a1, 1);
										v106 = v243;
										v107 = v242;
										v108 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v243 + 32) + 160i64), v242);
										v109 = *(_QWORD*)(v106 + 16);
										*(_QWORD*)v109 = *v108;
										*(_DWORD*)(v109 + 8) = *((_DWORD*)v108 + 2);
										*(_QWORD*)(v106 + 16) += 16i64;
										sub_1400F0870(v106, v109, L"strName", v110);
										*(_QWORD*)(v106 + 16) -= 16i64;
										v111 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v106 + 32) + 160i64), v107);
										v112 = *v111;
										*(_QWORD*)v113 = *v111;
										*(_DWORD*)(v113 + 8) = *((_DWORD*)v111 + 2);
										*(_QWORD*)(v106 + 16) += 16i64;
										sub_1400F06F0(v106, v112, L"eClass", v114);
										*(_QWORD*)(v106 + 16) -= 16i64;
										sub_1400FB1D0((__int64)&v237);
										sub_1400579E0(v106, v115, v107);
										++v104;
										v105 += 16i64;
									} while (v104 < *(_QWORD*)(v65 + 64));
									v24 = v228;
									v64 = v213;
								}
								v116 = v238;
								sub_1400FB2A0((__int64)&v216, (__int64)L"tTeamMembers", v238);
								v117 = v217;
								sub_1400FB1D0((__int64)&v233);
								if (v239)
									sub_1400579E0(v239, v118, v116);
								sub_1400579E0(a1, v118, v117);
								v63 = v227;
								v61 = v245;
							}
							++v63;
							v64 += 72i64;
							v227 = v63;
							v213 = v64;
						} while (v63 < *(_QWORD*)(v24 + 40));
						v60 = v234;
						LODWORD(v11) = v220;
						v62 = v244;
					}
					v119 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v223);
					v120 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v120 = *v119;
					*(_DWORD*)(v120 + 8) = *((_DWORD*)v119 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v120, L"nMgMapId", v247);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v121 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v223);
					*(_QWORD*)v122 = *v121;
					*(_DWORD*)(v122 + 8) = *((_DWORD*)v121 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v123, L"nPrimeLevel", v61);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v124 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v223);
					*(_QWORD*)v125 = *v124;
					*(_DWORD*)(v125 + 8) = *((_DWORD*)v124 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v126, L"nRewardedTier", v249);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v127 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v223);
					*(_QWORD*)v128 = *v127;
					*(_DWORD*)(v128 + 8) = *((_DWORD*)v127 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v129, L"nCompletionTimeMS", v215);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v130 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v223);
					*(_QWORD*)v131 = *v130;
					*(_DWORD*)(v131 + 8) = *((_DWORD*)v130 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v132, L"nRank", v62);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v133 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v223);
					*(_QWORD*)v134 = *v133;
					*(_DWORD*)(v134 + 8) = *((_DWORD*)v133 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v135, L"nLastRank", v212);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v136 = sub_1403E00A0(0x95Au, 1, 0);
					if (sub_1405BFD00(qword_140C65B98, v247, (_DWORD)v11 == 9, v61, v136))
					{
						sub_1400FA0F0((__int64)&v216, a1, 1);
						v137 = v218;
						v138 = v217;
						v139 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v218 + 32) + 160i64), v217);
						v140 = *(_QWORD*)(v137 + 16);
						*(_QWORD*)v140 = *v139;
						*(_DWORD*)(v140 + 8) = *((_DWORD*)v139 + 2);
						*(_QWORD*)(v137 + 16) += 16i64;
						sub_1400F06F0(v137, v140, L"nMgMapId", v141);
						*(_QWORD*)(v137 + 16) -= 16i64;
						v142 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v137 + 32) + 160i64), v138);
						*(_QWORD*)v143 = *v142;
						*(_DWORD*)(v143 + 8) = *((_DWORD*)v142 + 2);
						*(_QWORD*)(v137 + 16) += 16i64;
						sub_1400F06F0(v137, v144, L"nPrimeLevel", v145);
						*(_QWORD*)(v137 + 16) -= 16i64;
						sub_1400FA8A0((__int64)&v216, L"nRewardedTier");
						sub_1400FA8A0((__int64)&v216, L"nCompletionTimeMS");
						sub_1400FB2A0((__int64)&v229, (__int64)L"tOwnBestEntry", v138);
						sub_1400579E0(v137, v146, v138);
					}
					v54 = v223;
				}
			}
			sub_1400FB2A0((__int64)&v229, (__int64)L"tEntries", v60);
			sub_1400FB2A0((__int64)&v229, (__int64)L"tOwnEntry", v54);
			v21 = v230;
			v147 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v230);
			v148 = *(_QWORD*)(a1 + 16);
			v149 = v235;
			v150 = *v147;
			*(_QWORD*)v148 = *v147;
			*(_DWORD*)(v148 + 8) = *((_DWORD*)v147 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v149)
				sub_1400579E0(v149, v150, v60);
			sub_1400579E0(a1, v150, v54);
		}
	}
	else
	{
		v8 = 0;
	}
	sub_1400579E0(a1, v20, v21);
	return v8;
}
// 14076E113: conditional instruction was optimized away because r14d.4 is in (7..9)
// 14076DD9D: variable 'v25' is possibly undefined
// 14076DE8C: variable 'v35' is possibly undefined
// 14076DF39: variable 'v40' is possibly undefined
// 14076E026: variable 'v48' is possibly undefined
// 14076E038: variable 'v49' is possibly undefined
// 14076E20B: variable 'v74' is possibly undefined
// 14076E23C: variable 'v76' is possibly undefined
// 14076E24E: variable 'v77' is possibly undefined
// 14076E24E: variable 'v78' is possibly undefined
// 14076E27F: variable 'v80' is possibly undefined
// 14076E291: variable 'v81' is possibly undefined
// 14076E291: variable 'v82' is possibly undefined
// 14076E2C2: variable 'v84' is possibly undefined
// 14076E2D4: variable 'v85' is possibly undefined
// 14076E2D4: variable 'v86' is possibly undefined
// 14076E305: variable 'v88' is possibly undefined
// 14076E317: variable 'v89' is possibly undefined
// 14076E317: variable 'v90' is possibly undefined
// 14076E348: variable 'v92' is possibly undefined
// 14076E35A: variable 'v93' is possibly undefined
// 14076E35A: variable 'v94' is possibly undefined
// 14076E38B: variable 'v96' is possibly undefined
// 14076E39D: variable 'v97' is possibly undefined
// 14076E39D: variable 'v98' is possibly undefined
// 14076E3CE: variable 'v100' is possibly undefined
// 14076E3E0: variable 'v101' is possibly undefined
// 14076E3E0: variable 'v102' is possibly undefined
// 14076E4B3: variable 'v110' is possibly undefined
// 14076E4EC: variable 'v113' is possibly undefined
// 14076E4FB: variable 'v114' is possibly undefined
// 14076E516: variable 'v115' is possibly undefined
// 14076E569: variable 'v118' is possibly undefined
// 14076E618: variable 'v122' is possibly undefined
// 14076E62A: variable 'v123' is possibly undefined
// 14076E65D: variable 'v125' is possibly undefined
// 14076E66F: variable 'v126' is possibly undefined
// 14076E6A0: variable 'v128' is possibly undefined
// 14076E6B2: variable 'v129' is possibly undefined
// 14076E6E1: variable 'v131' is possibly undefined
// 14076E6F3: variable 'v132' is possibly undefined
// 14076E724: variable 'v134' is possibly undefined
// 14076E736: variable 'v135' is possibly undefined
// 14076E7D0: variable 'v141' is possibly undefined
// 14076E801: variable 'v143' is possibly undefined
// 14076E813: variable 'v144' is possibly undefined
// 14076E813: variable 'v145' is possibly undefined
// 14076E860: variable 'v146' is possibly undefined
// 14076E8D2: variable 'v150' is possibly undefined
// 14076E9A6: variable 'v165' is possibly undefined
// 14076E9D8: variable 'v167' is possibly undefined
// 14076E9EA: variable 'v168' is possibly undefined
// 14076E9EA: variable 'v169' is possibly undefined
// 14076EA1C: variable 'v171' is possibly undefined
// 14076EA2E: variable 'v172' is possibly undefined
// 14076EA2E: variable 'v173' is possibly undefined
// 14076EA60: variable 'v175' is possibly undefined
// 14076EA72: variable 'v176' is possibly undefined
// 14076EA72: variable 'v177' is possibly undefined
// 14076EAA4: variable 'v179' is possibly undefined
// 14076EAB6: variable 'v180' is possibly undefined
// 14076EAB6: variable 'v181' is possibly undefined
// 14076EBCC: variable 'v195' is possibly undefined
// 14076EC02: variable 'v197' is possibly undefined
// 14076EC14: variable 'v198' is possibly undefined
// 14076EC14: variable 'v199' is possibly undefined
// 14076EC30: variable 'v200' is possibly undefined
// 14076EC79: variable 'v201' is possibly undefined
// 14076ED08: variable 'v204' is possibly undefined
// 14076ED36: variable 'v206' is possibly undefined
// 14076ED48: variable 'v207' is possibly undefined
// 14076ED76: variable 'v209' is possibly undefined
// 14076ED88: variable 'v210' is possibly undefined
// 14076EDA0: variable 'v20' is possibly undefined
// 140B4EB50: using guessed type wchar_t aEclass_5[7];
// 140B4EB60: using guessed type wchar_t aStrname_118[8];
// 140B4EB70: using guessed type wchar_t aNrating_3[8];
// 140B4EB80: using guessed type wchar_t aEclass_4[7];
// 140B4EB90: using guessed type wchar_t aStrname_117[8];
// 140B4EBA0: using guessed type wchar_t aNlastrank_1[10];
// 140B4EBB8: using guessed type wchar_t aNrank_2[6];
// 140B4EBC8: using guessed type wchar_t aEtype_46[6];
// 140B4EBD8: using guessed type wchar_t aBready_2[7];
// 140B4EBE8: using guessed type wchar_t aBready_1[7];
// 140B4EBF8: using guessed type wchar_t aBupdaterequest[17];
// 140B4EC30: using guessed type wchar_t aNmgmapid_0[9];
// 140B4EC48: using guessed type wchar_t aTteammembers[13];
// 140B4EC68: using guessed type wchar_t aEclass_3[7];
// 140B4EC78: using guessed type wchar_t aStrname_116[8];
// 140B4EC88: using guessed type wchar_t aEclass_2[7];
// 140B4EC98: using guessed type wchar_t aStrname_115[8];
// 140B4ECA8: using guessed type wchar_t aNlastrank[10];
// 140B4ECC0: using guessed type wchar_t aNrank_0[6];
// 140B4ECD0: using guessed type wchar_t aNcompletiontim[18];
// 140B4ECF8: using guessed type wchar_t aNrewardedtier[14];
// 140B4ED18: using guessed type wchar_t aNprimelevel_2[12];
// 140B4ED30: using guessed type wchar_t aNmgmapid[9];
// 140B4ED48: using guessed type wchar_t aNrating_4[8];
// 140B4ED58: using guessed type wchar_t aNlastrank_2[10];
// 140B4ED70: using guessed type wchar_t aNrank_3[6];
// 140B4ED80: using guessed type wchar_t aTteammembers_0[13];
// 140B4EDE8: using guessed type wchar_t aTownentry[10];
// 140B4EE00: using guessed type wchar_t aTentries[9];
// 140B4EE18: using guessed type wchar_t aTownbestentry[14];
// 140B4EE38: using guessed type wchar_t aNcompletiontim_1[18];
// 140B4EE60: using guessed type wchar_t aNrewardedtier_1[14];
// 140B4EE80: using guessed type wchar_t aNprimelevel_4[12];
// 140B4EE98: using guessed type wchar_t aNmgmapid_1[9];
// 140B4EEB0: using guessed type wchar_t aNlastrank_0[10];
// 140B4EEC8: using guessed type wchar_t aNrank_1[6];
// 140B4EED8: using guessed type wchar_t aNcompletiontim_0[18];
// 140B4EF00: using guessed type wchar_t aNrewardedtier_0[14];
// 140B4EF20: using guessed type wchar_t aNprimelevel_3[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65A40: using guessed type __int64 qword_140C65A40;
// 140C65B98: using guessed type __int64 qword_140C65B98;

