#include "../winhttp.h"

//----- (0000000140636D10) ----------------------------------------------------
__int64 __fastcall sub_140636D10(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // r12
	__int64 v4; // r13
	unsigned int v5; // ebx
	unsigned int v6; // r14d
	__int64 result; // rax
	__int64 v8; // rax
	__int64 v9; // rsi
	unsigned __int64 v10; // rdi
	_QWORD* v11; // rbx
	_QWORD* v12; // r13
	__int64 v13; // rdx
	unsigned __int64 v14; // rbx
	unsigned int v15; // ebx
	__int64 v16; // rax
	int v17; // ecx
	__int64 v18; // rax
	double v19; // rdi
	int v20; // esi
	__int64 v21; // r13
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // r15
	unsigned __int64 v26; // r12
	_QWORD* v27; // r14
	__int64 v28; // rcx
	__int64 v29; // r8
	__int64 v30; // rdx
	__int64 v31; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v34; // r13
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rdi
	__int64 v38; // r15
	unsigned __int64 v39; // r12
	_QWORD* v40; // r14
	_QWORD* v41; // r14
	__int64 v42; // rax
	__int64 n; // rax
	__int64 ii; // rax
	__int64 v45; // rax
	__int64 kk; // rax
	double jj; // rax
	__int64* v48; // rdx
	__int64 v49; // r8
	BOOL v50; // r9d
	__int64 v51; // rdx
	__int64 v52; // r8
	__int64 v53; // rdx
	__int64 v54; // r8
	__int64 v55; // rdi
	__int64 v56; // rcx
	__int64 v57; // rbx
	__int64 v58; // rax
	int v59; // eax
	_QWORD* v60; // rcx
	__int64 v61; // rbx
	int v62; // edi
	_DWORD* v63; // rcx
	__int64 v64; // rdx
	__int64 v65; // rax
	__int64 v66; // rdi
	__int64 v67; // rbx
	__int64 v68; // rax
	int v69; // eax
	unsigned int v70; // r13d
	int v71; // ebx
	__int64 v72; // r9
	_DWORD* v73; // rdx
	__int64 v74; // rcx
	unsigned __int64* v75; // r15
	unsigned __int64 v76; // r14
	__int64 v77; // rbx
	__int64 v78; // rax
	__int64 v79; // rcx
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rax
	__int64 v83; // r10
	__int64 v84; // r9
	int v85; // r12d
	_DWORD* v86; // rcx
	unsigned __int64* v87; // r15
	unsigned __int64 v88; // r14
	__int64 v89; // rbx
	__int64 v90; // rax
	__int64 v91; // rcx
	__int64 v92; // rax
	__int64* v93; // rax
	__int64 v94; // rax
	__int64 v95; // rcx
	__int16* v96; // rax
	__int64 v97; // r9
	_DWORD* v98; // rdx
	__int64 v99; // rcx
	__int64 v100; // rax
	__int64 v101; // r10
	__int64 v102; // r9
	_DWORD* v103; // rcx
	unsigned __int64* v104; // r15
	unsigned __int64 v105; // r14
	__int64 v106; // rbx
	__int64 v107; // rax
	__int64 v108; // rcx
	int v109; // r14d
	__int64 v110; // r9
	_DWORD* v111; // rdx
	__int64 v112; // rcx
	__int64 v113; // r8
	_DWORD* v114; // rcx
	__int64 v115; // rdx
	__int64 v116; // rax
	__int64 v117; // rbx
	_DWORD* v118; // rcx
	__int64 v119; // rdx
	__int64 v120; // rax
	double v121; // r15
	unsigned int v122; // ebx
	__int64 v123; // rax
	__int64 v124; // r12
	__int64 v125; // r14
	__int64 v126; // rdi
	__int64 v127; // rcx
	__int64 v128; // rbx
	__int64 v129; // rax
	int v130; // eax
	_QWORD* v131; // rcx
	__int64 v132; // rdi
	__int64 v133; // rcx
	__int64 v134; // rbx
	__int64 v135; // rax
	int v136; // eax
	__int64 v137; // rcx
	int v138; // r13d
	__int64 v139; // r9
	double* v140; // rdx
	__int64 v141; // rcx
	unsigned __int64* v142; // r15
	unsigned __int64 v143; // r14
	__int64 v144; // rbx
	__int64 v145; // rax
	__int64 v146; // rcx
	__int64 v147; // rax
	__int64* v148; // rax
	_QWORD* v149; // rax
	__int64 v150; // r10
	__int64 v151; // rdx
	int v152; // r11d
	__int64 v153; // rcx
	_QWORD* v154; // rax
	__int64 v155; // rdx
	unsigned __int16* v156; // r10
	_QWORD* v157; // rax
	__int64 v158; // r10
	__int64 v159; // rdx
	int v160; // r8d
	__int64 v161; // rdx
	__int64 v162; // rdi
	__int64 v163; // rcx
	__int64 v164; // rbx
	__int64 v165; // rax
	int v166; // eax
	_QWORD* v167; // rcx
	int v168; // eax
	int v169; // r14d
	__int64 v170; // rdi
	__int64 v171; // rcx
	__int64 v172; // rbx
	__int64 v173; // rax
	__int64 v174; // rcx
	_QWORD* v175; // rax
	__int64 v176; // rdx
	_QWORD* v177; // rax
	__int64 v178; // r10
	__int64 v179; // rdx
	int v180; // r11d
	__int64 v181; // rcx
	_QWORD* v182; // rax
	__int64 v183; // rdx
	unsigned __int16* v184; // r10
	_QWORD* v185; // rax
	__int64 v186; // r10
	__int64 v187; // rdx
	__int64 v188; // rdx
	unsigned __int64 i; // r14
	__int64 v190; // rdi
	__int64 v191; // rcx
	__int64 v192; // rbx
	__int64 v193; // rax
	int v194; // eax
	_QWORD* v195; // rcx
	__int64 v196; // rdi
	__int64 v197; // rcx
	__int64 v198; // rbx
	__int64 v199; // rax
	__int64 v200; // rcx
	_QWORD* v201; // rax
	__int64 v202; // rdx
	_QWORD* v203; // rax
	__int64 v204; // r10
	__int64 v205; // rdx
	int v206; // r11d
	_QWORD* v207; // rax
	__int64 v208; // r11
	__int64 v209; // rdx
	int v210; // r10d
	_QWORD* v211; // rax
	__int64 v212; // r10
	__int64 v213; // rdx
	int v214; // r15d
	__int64 v215; // rdx
	unsigned __int64 j; // r14
	__int64 v217; // rbx
	int v218; // eax
	_QWORD* v219; // rcx
	__int64 v220; // rdi
	int v221; // eax
	__int64 v222; // rcx
	int v223; // ebx
	_QWORD* v224; // rax
	__int64 v225; // rdx
	_QWORD* v226; // rax
	__int64 v227; // r10
	__int64 v228; // rdx
	int v229; // r11d
	_QWORD* v230; // rax
	__int64 v231; // r11
	__int64 v232; // rdx
	int v233; // r10d
	_QWORD* v234; // rax
	__int64 v235; // r10
	__int64 v236; // rdx
	int v237; // r15d
	__int64 v238; // rdx
	__int64 v239; // r14
	__int64 v240; // rdx
	unsigned int* v241; // r15
	__int64 v242; // rbx
	int v243; // eax
	_QWORD* v244; // rcx
	__int64 v245; // rdx
	__int64 v246; // rcx
	int v247; // r8d
	__int64 v248; // rdi
	int v249; // eax
	__int64 v250; // rcx
	int v251; // ebx
	_QWORD* v252; // rax
	__int64 v253; // rdx
	_QWORD* v254; // rax
	__int64 v255; // r10
	__int64 v256; // rdx
	int v257; // r11d
	int v258; // r15d
	__int64 v259; // rdx
	unsigned __int64 v260; // r14
	__int64 v261; // rdx
	__int64 v262; // r15
	__int64 v263; // rbx
	int v264; // eax
	_QWORD* v265; // rcx
	__int64 v266; // rdx
	__int64 v267; // rcx
	int v268; // r8d
	__int64 v269; // rdi
	int v270; // ebx
	_QWORD* v271; // rax
	__int64 v272; // rdx
	_QWORD* v273; // rax
	__int64 v274; // r10
	__int64 v275; // rdx
	int v276; // r11d
	__int64 v277; // rcx
	_QWORD* v278; // rax
	__int64 v279; // rdx
	unsigned __int16* v280; // r10
	int v281; // r15d
	__int64 v282; // rdx
	unsigned __int64 mm; // r14
	__int64 v284; // rdx
	__int64 v285; // rcx
	int v286; // r8d
	__int64 v287; // rdi
	int v288; // ebx
	_QWORD* v289; // rax
	__int64 v290; // rdx
	_QWORD* v291; // rax
	__int64 v292; // r10
	__int64 v293; // rdx
	int v294; // r11d
	_QWORD* v295; // rax
	__int64 v296; // r11
	__int64 v297; // rdx
	int v298; // r10d
	_QWORD* v299; // rax
	__int64 v300; // r10
	__int64 v301; // rdx
	int v302; // r15d
	__int64 v303; // rdx
	__int64 v304; // rax
	__int64 nn; // rax
	__int64 i1; // rax
	__int64(__fastcall * *v307)(); // [rsp+28h] [rbp-E0h] BYREF
	__int64 v308; // [rsp+30h] [rbp-D8h]
	__int64 v309; // [rsp+38h] [rbp-D0h]
	__int64 v310; // [rsp+40h] [rbp-C8h]
	double v311; // [rsp+48h] [rbp-C0h]
	__int64 v312; // [rsp+50h] [rbp-B8h]
	double v313; // [rsp+58h] [rbp-B0h]
	__int64(__fastcall * *v314)(); // [rsp+60h] [rbp-A8h] BYREF
	__int64 v315; // [rsp+68h] [rbp-A0h]
	__int64 v316; // [rsp+70h] [rbp-98h]
	__int64 v317; // [rsp+78h] [rbp-90h]
	_QWORD* v318; // [rsp+80h] [rbp-88h]
	int v319; // [rsp+88h] [rbp-80h] BYREF
	__int64 v320; // [rsp+90h] [rbp-78h]
	__int64 v321; // [rsp+98h] [rbp-70h]
	__int64(__fastcall * *v322)(); // [rsp+A0h] [rbp-68h] BYREF
	int v323; // [rsp+A8h] [rbp-60h]
	__int64 v324; // [rsp+B0h] [rbp-58h]
	int v325; // [rsp+B8h] [rbp-50h]
	__int64 v326; // [rsp+C0h] [rbp-48h]
	__int64 v327; // [rsp+C8h] [rbp-40h]
	__int64 v328; // [rsp+D0h] [rbp-38h]
	_QWORD v329[3]; // [rsp+D8h] [rbp-30h] BYREF
	int v330; // [rsp+158h] [rbp+50h]
	int v332; // [rsp+168h] [rbp+60h]
	int v333; // [rsp+168h] [rbp+60h]
	double v334; // [rsp+168h] [rbp+60h]
	double v335; // [rsp+168h] [rbp+60h]
	int v336; // [rsp+170h] [rbp+68h] BYREF

	v2 = qword_140C65C20;
	v3 = a2;
	v4 = qword_140C65C20;
	v312 = qword_140C65C20;
	v5 = 0;
	while (1)
	{
		sub_140636BA0(v2, v5++);
		if (v5 >= 7)
			break;
		v2 = qword_140C65C20;
	}
	v6 = 0;
	result = 0i64;
	v326 = 0i64;
	v330 = 0;
	do
	{
		v328 = 32 * result;
		v8 = *(_QWORD*)(32 * result + v4 + 8);
		v9 = *(_QWORD*)(v8 + 16);
		v320 = v9;
		if (v9 == v8)
			goto LABEL_290;
		do
		{
			v10 = (*(__int64(__fastcall**)(__int64))(v4 + 304))(v9 + 32);
			v11 = *(_QWORD**)(*(_QWORD*)(v4 + 296) + 8 * (v10 % *(_QWORD*)(v4 + 288)));
			if (!v11)
				goto LABEL_280;
			while (v10 != *v11 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v4 + 312))(v9 + 32, v11 + 2))
			{
				v11 = (_QWORD*)v11[1];
				if (!v11)
					goto LABEL_280;
			}
			v12 = v11 + 3;
			v318 = v11 + 3;
			if (v11 == (_QWORD*)-24i64)
				goto LABEL_279;
			v13 = 0x140000000ui64;
			switch (v6)
			{
			case 1u:
			case 3u:
			case 6u:
				v121 = 0.0;
				v311 = 0.0;
				if (!v11[6])
					goto LABEL_232;
				while (1)
				{
					v122 = *(_DWORD*)(v12[2] + 4i64 * *(_QWORD*)&v121);
					if (qword_140C63840)
					{
						v123 = qword_140C63840(off_140A6E180, v122, qword_140C63858);
					}
					else
					{
						if (dword_140C64698 || (int)sub_14024AA60() < 0)
							goto LABEL_231;
						v123 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
							qword_140C63C08,
							v122);
					}
					v124 = v123;
					if (v123)
					{
						v125 = a2;
						LODWORD(v310) = 1;
						v126 = *(_QWORD*)(a2 + 16);
						v307 = off_140B569F0;
						v127 = *(_QWORD*)(v126 + 32);
						v309 = v126;
						if (*(_QWORD*)(v127 + 120) >= *(_QWORD*)(v127 + 112))
							sub_14005E2C0(v126);
						v128 = *(_QWORD*)(v126 + 16);
						v129 = sub_14005C1B0(v126, 0, 0);
						*(_DWORD*)(v128 + 8) = 5;
						*(_QWORD*)v128 = v129;
						*(_QWORD*)(v126 + 16) += 16i64;
						v130 = sub_1400578C0(v126);
						v131 = *(_QWORD**)(v9 + 40);
						LODWORD(v308) = v130;
						if ((unsigned int)sub_140634870(v131, (__int64)&v307, 0))
						{
							v132 = *(_QWORD*)(a2 + 16);
							LODWORD(v317) = 1;
							v133 = *(_QWORD*)(v132 + 32);
							v314 = off_140B569F0;
							v316 = v132;
							if (*(_QWORD*)(v133 + 120) >= *(_QWORD*)(v133 + 112))
								sub_14005E2C0(v132);
							v134 = *(_QWORD*)(v132 + 16);
							v135 = sub_14005C1B0(v132, 0, 0);
							*(_DWORD*)(v134 + 8) = 5;
							*(_QWORD*)v134 = v135;
							*(_QWORD*)(v132 + 16) += 16i64;
							v136 = sub_1400578C0(v132);
							v137 = *(_QWORD*)(v132 + 32);
							v138 = v136;
							LODWORD(v315) = v136;
							v139 = *(_QWORD*)(v137 + 160);
							if ((unsigned int)(v136 - 1) >= *(_DWORD*)(v139 + 56))
							{
								if ((double)v136 == 0.0)
								{
									v140 = *(double**)(v139 + 32);
								}
								else
								{
									v335 = (double)v136;
									v140 = (double*)(*(_QWORD*)(v139 + 32)
										+ 40
										* ((unsigned int)(LODWORD(v335) + HIDWORD(v335))
											% (((1i64 << *(_BYTE*)(v139 + 11)) - 1) | 1)));
								}
								do
								{
									if (*((_DWORD*)v140 + 6) == 3 && (double)v136 == v140[2])
										goto LABEL_209;
									v140 = (double*)*((_QWORD*)v140 + 4);
								} while (v140);
								v140 = (double*)dword_140A12138;
							}
							else
							{
								v140 = (double*)(*(_QWORD*)(v139 + 24) + 16i64 * (v136 - 1));
							}
						LABEL_209:
							v141 = *(_QWORD*)(v132 + 16);
							*(double*)v141 = *v140;
							*(_DWORD*)(v141 + 8) = *((_DWORD*)v140 + 2);
							*(_QWORD*)(v132 + 16) += 16i64;
							v142 = (unsigned __int64*)sub_14018F0E0(v329, L"nContentType")[1];
							if (v142)
							{
								v143 = -1i64;
								do
									++v143;
								while (*((_BYTE*)v142 + v143));
								if (*(_QWORD*)(*(_QWORD*)(v132 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v132 + 32) + 112i64))
									sub_14005E2C0(v132);
								v144 = *(_QWORD*)(v132 + 16);
								v145 = sub_140062650(v132, v142, v143);
								v125 = a2;
								*(_DWORD*)(v144 + 8) = 4;
								*(_QWORD*)v144 = v145;
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(v132 + 16) + 8i64) = 0;
							}
							v146 = v329[1];
							*(_QWORD*)(v132 + 16) += 16i64;
							if (v146)
								sub_14018B900(v146, 0);
							v147 = *(_QWORD*)(v132 + 16);
							*(_DWORD*)(v147 + 8) = 3;
							*(double*)v147 = (double)v330;
							*(_QWORD*)(v132 + 16) += 16i64;
							v148 = (__int64*)sub_1400580E0(v132, -3);
							sub_14005EA50(
								v132,
								v148,
								(int*)(*(_QWORD*)(v132 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(v132 + 16) - 16i64));
							*(_QWORD*)(v132 + 16) -= 48i64;
							v149 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v132 + 32) + 160i64), v138);
							*(_QWORD*)v150 = *v149;
							*(_DWORD*)(v150 + 8) = *((_DWORD*)v149 + 2);
							*(_QWORD*)(v132 + 16) += 16i64;
							sub_1400F06F0(v132, v151, L"nContentId", v152);
							*(_QWORD*)(v132 + 16) -= 16i64;
							sub_14034BDD0(v153, *(_DWORD*)(v124 + 60));
							v154 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v132 + 32) + 160i64), v138);
							v155 = *(_QWORD*)(v132 + 16);
							*(_QWORD*)v155 = *v154;
							*(_DWORD*)(v155 + 8) = *((_DWORD*)v154 + 2);
							*(_QWORD*)(v132 + 16) += 16i64;
							sub_1400F0870(v132, v155, L"strWorld", v156);
							*(_QWORD*)(v132 + 16) -= 16i64;
							v157 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v132 + 32) + 160i64), v138);
							*(_QWORD*)v158 = *v157;
							*(_DWORD*)(v158 + 8) = *((_DWORD*)v157 + 2);
							*(_QWORD*)(v132 + 16) += 16i64;
							sub_1400F0630(v132, v159, L"bIsVeteran", 0);
							v160 = v308;
							*(_QWORD*)(v132 + 16) -= 16i64;
							sub_1400FB2A0((__int64)&v314, (__int64)L"arRewards", v160);
							sub_1400FB1D0(v125);
							sub_1400579E0(v132, v161, v138);
							v121 = v311;
							v12 = v318;
						}
						v162 = *(_QWORD*)(v125 + 16);
						v325 = 1;
						v163 = *(_QWORD*)(v162 + 32);
						v322 = off_140B569F0;
						v324 = v162;
						if (*(_QWORD*)(v163 + 120) >= *(_QWORD*)(v163 + 112))
							sub_14005E2C0(v162);
						v164 = *(_QWORD*)(v162 + 16);
						v165 = sub_14005C1B0(v162, 0, 0);
						*(_DWORD*)(v164 + 8) = 5;
						*(_QWORD*)v164 = v165;
						*(_QWORD*)(v162 + 16) += 16i64;
						v166 = sub_1400578C0(v162);
						v167 = *(_QWORD**)(v9 + 40);
						v323 = v166;
						v168 = sub_140634870(v167, (__int64)&v322, 1);
						v169 = v323;
						if (v168)
						{
							LODWORD(v317) = 1;
							v170 = *(_QWORD*)(a2 + 16);
							v314 = off_140B569F0;
							v171 = *(_QWORD*)(v170 + 32);
							v316 = v170;
							if (*(_QWORD*)(v171 + 120) >= *(_QWORD*)(v171 + 112))
								sub_14005E2C0(v170);
							v172 = *(_QWORD*)(v170 + 16);
							v173 = sub_14005C1B0(v170, 0, 0);
							*(_DWORD*)(v172 + 8) = 5;
							*(_QWORD*)v172 = v173;
							*(_QWORD*)(v170 + 16) += 16i64;
							LODWORD(v172) = sub_1400578C0(v170);
							v174 = *(_QWORD*)(*(_QWORD*)(v170 + 32) + 160i64);
							LODWORD(v315) = v172;
							v175 = sub_14005C3C0(v174, v172);
							v176 = *(_QWORD*)(v170 + 16);
							*(_QWORD*)v176 = *v175;
							*(_DWORD*)(v176 + 8) = *((_DWORD*)v175 + 2);
							*(_QWORD*)(v170 + 16) += 16i64;
							sub_1400F06F0(v170, v176, L"nContentType", v330);
							*(_QWORD*)(v170 + 16) -= 16i64;
							v177 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v170 + 32) + 160i64), v172);
							*(_QWORD*)v178 = *v177;
							*(_DWORD*)(v178 + 8) = *((_DWORD*)v177 + 2);
							*(_QWORD*)(v170 + 16) += 16i64;
							sub_1400F06F0(v170, v179, L"nContentId", v180);
							*(_QWORD*)(v170 + 16) -= 16i64;
							sub_14034BDD0(v181, *(_DWORD*)(v124 + 60));
							v182 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v170 + 32) + 160i64), v172);
							v183 = *(_QWORD*)(v170 + 16);
							*(_QWORD*)v183 = *v182;
							*(_DWORD*)(v183 + 8) = *((_DWORD*)v182 + 2);
							*(_QWORD*)(v170 + 16) += 16i64;
							sub_1400F0870(v170, v183, L"strWorld", v184);
							*(_QWORD*)(v170 + 16) -= 16i64;
							v185 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v170 + 32) + 160i64), v172);
							*(_QWORD*)v186 = *v185;
							*(_DWORD*)(v186 + 8) = *((_DWORD*)v185 + 2);
							*(_QWORD*)(v170 + 16) += 16i64;
							sub_1400F0630(v170, v187, L"bIsVeteran", 1);
							*(_QWORD*)(v170 + 16) -= 16i64;
							sub_1400FB2A0((__int64)&v314, (__int64)L"arRewards", v169);
							v3 = a2;
							sub_1400FB1D0(a2);
							sub_1400579E0(v170, v188, v172);
						}
						else
						{
							v3 = a2;
						}
						if (v324)
							sub_1400579E0(v324, v13, v169);
						if (v309)
							sub_1400579E0(v309, v13, v308);
					}
					else
					{
						v3 = a2;
					}
				LABEL_231:
					++* (_QWORD*)&v121;
					v311 = v121;
					if (*(_QWORD*)&v121 >= v12[3])
					{
					LABEL_232:
						for (i = 0i64; i < v12[5]; ++i)
						{
							v190 = *(_QWORD*)(v3 + 16);
							v307 = off_140B569F0;
							LODWORD(v310) = 1;
							v191 = *(_QWORD*)(v190 + 32);
							v309 = v190;
							if (*(_QWORD*)(v191 + 120) >= *(_QWORD*)(v191 + 112))
								sub_14005E2C0(v190);
							v192 = *(_QWORD*)(v190 + 16);
							v193 = sub_14005C1B0(v190, 0, 0);
							*(_DWORD*)(v192 + 8) = 5;
							*(_QWORD*)v192 = v193;
							*(_QWORD*)(v190 + 16) += 16i64;
							v194 = sub_1400578C0(v190);
							v195 = *(_QWORD**)(v9 + 40);
							LODWORD(v308) = v194;
							if ((unsigned int)sub_140634870(v195, (__int64)&v307, 0))
							{
								v196 = *(_QWORD*)(v3 + 16);
								v314 = off_140B569F0;
								LODWORD(v317) = 1;
								v197 = *(_QWORD*)(v196 + 32);
								v316 = v196;
								if (*(_QWORD*)(v197 + 120) >= *(_QWORD*)(v197 + 112))
									sub_14005E2C0(v196);
								v198 = *(_QWORD*)(v196 + 16);
								v199 = sub_14005C1B0(v196, 0, 0);
								*(_DWORD*)(v198 + 8) = 5;
								*(_QWORD*)v198 = v199;
								*(_QWORD*)(v196 + 16) += 16i64;
								LODWORD(v198) = sub_1400578C0(v196);
								v200 = *(_QWORD*)(*(_QWORD*)(v196 + 32) + 160i64);
								LODWORD(v315) = v198;
								v201 = sub_14005C3C0(v200, v198);
								v202 = *(_QWORD*)(v196 + 16);
								*(_QWORD*)v202 = *v201;
								*(_DWORD*)(v202 + 8) = *((_DWORD*)v201 + 2);
								*(_QWORD*)(v196 + 16) += 16i64;
								sub_1400F06F0(v196, v202, L"nContentType", v330);
								*(_QWORD*)(v196 + 16) -= 16i64;
								v203 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v196 + 32) + 160i64), v198);
								*(_QWORD*)v204 = *v203;
								*(_DWORD*)(v204 + 8) = *((_DWORD*)v203 + 2);
								*(_QWORD*)(v196 + 16) += 16i64;
								sub_1400F06F0(v196, v205, L"nContentId", v206);
								*(_QWORD*)(v196 + 16) -= 16i64;
								v207 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v196 + 32) + 160i64), v198);
								*(_QWORD*)v208 = *v207;
								*(_DWORD*)(v208 + 8) = *((_DWORD*)v207 + 2);
								*(_QWORD*)(v196 + 16) += 16i64;
								sub_1400F06F0(v196, v209, L"eMatchType", v210);
								*(_QWORD*)(v196 + 16) -= 16i64;
								v211 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v196 + 32) + 160i64), v198);
								*(_QWORD*)v212 = *v211;
								*(_DWORD*)(v212 + 8) = *((_DWORD*)v211 + 2);
								*(_QWORD*)(v196 + 16) += 16i64;
								sub_1400F0630(v196, v213, L"bIsVeteran", 0);
								v214 = v308;
								*(_QWORD*)(v196 + 16) -= 16i64;
								sub_1400FB2A0((__int64)&v314, (__int64)L"arRewards", v214);
								sub_1400FB1D0(v3);
								sub_1400579E0(v196, v215, v198);
								if (v309)
									sub_1400579E0(v309, v13, v214);
							}
							else if (v309)
							{
								sub_1400579E0(v309, v13, v308);
							}
						}
						for (j = 0i64; j < v12[7]; ++j)
						{
							v217 = *(_QWORD*)(v3 + 16);
							v307 = off_140B569F0;
							v309 = v217;
							LODWORD(v310) = 1;
							sub_140058900(v217, v13, 0);
							v218 = sub_1400578C0(v217);
							v219 = *(_QWORD**)(v9 + 40);
							LODWORD(v308) = v218;
							if ((unsigned int)sub_140634870(v219, (__int64)&v307, 1))
							{
								v220 = *(_QWORD*)(v3 + 16);
								v314 = off_140B569F0;
								v316 = v220;
								LODWORD(v317) = 1;
								sub_140058900(v220, v13, 0);
								v221 = sub_1400578C0(v220);
								v222 = *(_QWORD*)(*(_QWORD*)(v220 + 32) + 160i64);
								v223 = v221;
								LODWORD(v315) = v221;
								v224 = sub_14005C3C0(v222, v221);
								v225 = *(_QWORD*)(v220 + 16);
								*(_QWORD*)v225 = *v224;
								*(_DWORD*)(v225 + 8) = *((_DWORD*)v224 + 2);
								*(_QWORD*)(v220 + 16) += 16i64;
								sub_1400F06F0(v220, v225, L"nContentType", v330);
								*(_QWORD*)(v220 + 16) -= 16i64;
								v226 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v220 + 32) + 160i64), v223);
								*(_QWORD*)v227 = *v226;
								*(_DWORD*)(v227 + 8) = *((_DWORD*)v226 + 2);
								*(_QWORD*)(v220 + 16) += 16i64;
								sub_1400F06F0(v220, v228, L"nContentId", v229);
								*(_QWORD*)(v220 + 16) -= 16i64;
								v230 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v220 + 32) + 160i64), v223);
								*(_QWORD*)v231 = *v230;
								*(_DWORD*)(v231 + 8) = *((_DWORD*)v230 + 2);
								*(_QWORD*)(v220 + 16) += 16i64;
								sub_1400F06F0(v220, v232, L"eMatchType", v233);
								*(_QWORD*)(v220 + 16) -= 16i64;
								v234 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v220 + 32) + 160i64), v223);
								*(_QWORD*)v235 = *v234;
								*(_DWORD*)(v235 + 8) = *((_DWORD*)v234 + 2);
								*(_QWORD*)(v220 + 16) += 16i64;
								sub_1400F0630(v220, v236, L"bIsVeteran", 1);
								v237 = v308;
								*(_QWORD*)(v220 + 16) -= 16i64;
								sub_1400FB2A0((__int64)&v314, (__int64)L"arRewards", v237);
								sub_1400FB1D0(v3);
								sub_1400579E0(v220, v238, v223);
								if (v309)
									sub_1400579E0(v309, v13, v237);
							}
							else if (v309)
							{
								sub_1400579E0(v309, v13, v308);
							}
						}
						goto LABEL_278;
					}
				}
			case 2u:
				v14 = 0i64;
				v321 = 0i64;
				if (!v12[1])
					goto LABEL_279;
				while (1)
				{
					v15 = *(_DWORD*)(*v12 + 4 * v14);
					if (qword_140C63840)
						break;
					if (!dword_140C64634 && (int)sub_14024D920() >= 0)
					{
						*(double*)&v16 = COERCE_DOUBLE(
							(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
								qword_140C64270,
								v15));
					LABEL_19:
						v311 = *(double*)&v16;
						if (*(double*)&v16 != 0.0)
						{
							v17 = 0;
							v327 = qword_140C65930;
							v18 = *(_QWORD*)(qword_140C65930 + 16);
							v332 = 0;
							v19 = *(double*)(v18 + 16);
							v313 = v19;
							if (*(_QWORD*)&v19 != v18)
							{
								v20 = 0;
								do
								{
									v21 = *(_QWORD*)(*(_QWORD*)&v19 + 40i64);
									v22 = *(_QWORD*)(v21 + 16);
									v23 = *(_QWORD*)(v22 + 16);
									if (v23 != v22)
									{
										v24 = v321;
										do
										{
											v25 = qword_140C65B80;
											v336 = *(_DWORD*)(v23 + 32);
											v26 = (*(__int64(__fastcall**)(int*))(qword_140C65B80 + 32))(&v336);
											v27 = *(_QWORD**)(*(_QWORD*)(v25 + 24) + 8 * (v26 % *(_QWORD*)(v25 + 16)));
											if (v27)
											{
												while (v26 != *v27
													|| !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v25 + 40))(&v336, v27 + 2))
												{
													v27 = (_QWORD*)v27[1];
													if (!v27)
														goto LABEL_36;
												}
												if (v27 != (_QWORD*)-24i64)
												{
													v28 = v27[3];
													if (v28)
													{
														v29 = *(_QWORD*)(v28 + 8);
														if (*(_DWORD*)(v29 + 56) == *(_DWORD*)(*v318 + 4 * v24))
														{
															v30 = *(_QWORD*)(qword_140C65898 + 120);
															if (v30)
															{
																if (*(_DWORD*)(v30 + 56) >= *(_DWORD*)(v29 + 24)
																	&& !(unsigned int)sub_140552550(v28, -8708))
																{
																	++v20;
																}
															}
														}
													}
												}
											}
										LABEL_36:
											v31 = *(_QWORD*)(v23 + 24);
											if (v31)
											{
												v23 = *(_QWORD*)(v23 + 24);
												for (k = *(_QWORD*)(v31 + 16); k; k = *(_QWORD*)(k + 16))
													v23 = k;
											}
											else
											{
												for (m = *(_QWORD*)(v23 + 8); v23 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
													v23 = m;
												if (*(_QWORD*)(v23 + 24) != m)
													v23 = m;
											}
										} while (v23 != *(_QWORD*)(v21 + 16));
										v19 = v313;
										v332 = v20;
									}
									v34 = *(_QWORD*)(*(_QWORD*)&v19 + 40i64);
									v35 = *(_QWORD*)(v34 + 48);
									v36 = *(_QWORD*)(v35 + 16);
									if (v36 != v35)
									{
										v37 = v321;
										do
										{
											v38 = qword_140C65B80;
											v319 = *(_DWORD*)(v36 + 32);
											v39 = (*(__int64(__fastcall**)(int*))(qword_140C65B80 + 32))(&v319);
											v40 = *(_QWORD**)(*(_QWORD*)(v38 + 24) + 8 * (v39 % *(_QWORD*)(v38 + 16)));
											if (v40)
											{
												while (v39 != *v40
													|| !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v38 + 40))(&v319, v40 + 2))
												{
													v40 = (_QWORD*)v40[1];
													if (!v40)
														goto LABEL_57;
												}
												v41 = v40 + 3;
												if (v41
													&& *v41
													&& *(_DWORD*)(*(_QWORD*)(*v41 + 8i64) + 56i64) == *(_DWORD*)(*v318 + 4 * v37))
												{
													++v20;
												}
											}
										LABEL_57:
											v42 = *(_QWORD*)(v36 + 24);
											if (v42)
											{
												v36 = *(_QWORD*)(v36 + 24);
												for (n = *(_QWORD*)(v42 + 16); n; n = *(_QWORD*)(n + 16))
													v36 = n;
											}
											else
											{
												for (ii = *(_QWORD*)(v36 + 8); v36 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
													v36 = ii;
												if (*(_QWORD*)(v36 + 24) != ii)
													v36 = ii;
											}
										} while (v36 != *(_QWORD*)(v34 + 48));
										v19 = v313;
										v332 = v20;
									}
									v45 = *(__int64*)(*(_QWORD*)&v19 + 24i64);
									if (*(double*)&v45 == 0.0)
									{
										for (jj = *(double*)(*(_QWORD*)&v19 + 8i64);
											*(_QWORD*)&v19 == *(_QWORD*)(*(_QWORD*)&jj + 24i64);
											jj = *(double*)(*(_QWORD*)&jj + 8i64))
										{
											v19 = jj;
										}
										if (*(_QWORD*)(*(_QWORD*)&v19 + 24i64) != *(_QWORD*)&jj)
											v19 = jj;
										v313 = v19;
									}
									else
									{
										v19 = *(double*)(*(_QWORD*)&v19 + 24i64);
										v313 = *(double*)&v45;
										for (kk = *(__int64*)(v45 + 16); *(double*)&kk != 0.0; kk = *(__int64*)(kk + 16))
										{
											v19 = *(double*)&kk;
											v313 = *(double*)&kk;
										}
									}
								} while (*(_QWORD*)&v19 != *(_QWORD*)(v327 + 16));
								v9 = v320;
								v17 = v332;
								v12 = v318;
								v3 = a2;
							}
							v48 = *(__int64**)(v9 + 40);
							v49 = *v48;
							v50 = v17 == 0;
							if (*v48 != *v48 + 24 * v48[1])
							{
								do
								{
									*(_DWORD*)(v49 + 16) = v50;
									v49 += 24i64;
								} while (v49 != **(_QWORD**)(v9 + 40) + 24i64 * *(_QWORD*)(*(_QWORD*)(v9 + 40) + 8i64));
							}
							v51 = *(_QWORD*)(v9 + 40);
							v52 = *(_QWORD*)(v51 + 16);
							if (v52 != v52 + 24i64 * *(_QWORD*)(v51 + 24))
							{
								do
								{
									*(_DWORD*)(v52 + 16) = v50;
									v52 += 24i64;
								} while (v52 != *(_QWORD*)(*(_QWORD*)(v9 + 40) + 16i64)
									+ 24i64 * *(_QWORD*)(*(_QWORD*)(v9 + 40) + 24i64));
							}
							v53 = *(_QWORD*)(v9 + 40);
							v54 = *(_QWORD*)(v53 + 32);
							if (v54 != v54 + 24i64 * *(_QWORD*)(v53 + 40))
							{
								do
								{
									*(_DWORD*)(v54 + 16) = v50;
									v54 += 24i64;
								} while (v54 != *(_QWORD*)(*(_QWORD*)(v9 + 40) + 32i64)
									+ 24i64 * *(_QWORD*)(*(_QWORD*)(v9 + 40) + 40i64));
							}
							v55 = *(_QWORD*)(v3 + 16);
							LODWORD(v310) = 1;
							v56 = *(_QWORD*)(v55 + 32);
							v307 = off_140B569F0;
							v309 = v55;
							if (*(_QWORD*)(v56 + 120) >= *(_QWORD*)(v56 + 112))
								sub_14005E2C0(v55);
							v57 = *(_QWORD*)(v55 + 16);
							v58 = sub_14005C1B0(v55, 0, 0);
							*(_DWORD*)(v57 + 8) = 5;
							*(_QWORD*)v57 = v58;
							*(_QWORD*)(v55 + 16) += 16i64;
							v59 = sub_1400578C0(v55);
							v60 = *(_QWORD**)(v9 + 40);
							LODWORD(v308) = v59;
							if ((unsigned int)sub_140634870(v60, (__int64)&v307, 0))
							{
								v66 = *(_QWORD*)(v3 + 16);
								if (*(_QWORD*)(*(_QWORD*)(v66 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v66 + 32) + 112i64))
									sub_14005E2C0(*(_QWORD*)(v3 + 16));
								v67 = *(_QWORD*)(v66 + 16);
								v68 = sub_14005C1B0(v66, 0, 0);
								*(_DWORD*)(v67 + 8) = 5;
								*(_QWORD*)v67 = v68;
								*(_QWORD*)(v66 + 16) += 16i64;
								v69 = sub_1400578C0(v66);
								v70 = v69 - 1;
								v71 = v69;
								v72 = *(_QWORD*)(*(_QWORD*)(v66 + 32) + 160i64);
								v333 = v69;
								if ((unsigned int)(v69 - 1) >= *(_DWORD*)(v72 + 56))
								{
									v313 = (double)v69;
									if ((double)v69 == 0.0)
										v73 = *(_DWORD**)(v72 + 32);
									else
										v73 = (_DWORD*)(*(_QWORD*)(v72 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v313) + HIDWORD(v313))
												% (((1i64 << *(_BYTE*)(v72 + 11)) - 1) | 1)));
									while (v73[6] != 3 || (double)v69 != *((double*)v73 + 2))
									{
										v73 = (_DWORD*)*((_QWORD*)v73 + 4);
										if (!v73)
										{
											v73 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v73 = (_DWORD*)(*(_QWORD*)(v72 + 24) + 16i64 * (v69 - 1));
								}
								v74 = *(_QWORD*)(v66 + 16);
								*(_QWORD*)v74 = *(_QWORD*)v73;
								*(_DWORD*)(v74 + 8) = v73[2];
								*(_QWORD*)(v66 + 16) += 16i64;
								v75 = (unsigned __int64*)sub_14018F0E0(&v314, L"nContentType")[1];
								if (v75)
								{
									v76 = -1i64;
									do
										++v76;
									while (*((_BYTE*)v75 + v76));
									if (*(_QWORD*)(*(_QWORD*)(v66 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v66 + 32) + 112i64))
										sub_14005E2C0(v66);
									v77 = *(_QWORD*)(v66 + 16);
									v78 = sub_140062650(v66, v75, v76);
									*(_DWORD*)(v77 + 8) = 4;
									*(_QWORD*)v77 = v78;
									v71 = v333;
								}
								else
								{
									*(_DWORD*)(*(_QWORD*)(v66 + 16) + 8i64) = 0;
								}
								v79 = v315;
								*(_QWORD*)(v66 + 16) += 16i64;
								if (v79)
									sub_14018B900(v79, 0);
								v80 = *(_QWORD*)(v66 + 16);
								*(_DWORD*)(v80 + 8) = 3;
								*(double*)v80 = (double)v330;
								*(_QWORD*)(v66 + 16) += 16i64;
								v81 = (__int64*)sub_1400580E0(v66, -3);
								sub_14005EA50(
									v66,
									v81,
									(int*)(*(_QWORD*)(v66 + 16) - 32i64),
									(unsigned int*)(*(_QWORD*)(v66 + 16) - 16i64));
								v82 = *(_QWORD*)(v66 + 32);
								v83 = *(_QWORD*)(v66 + 16) - 48i64;
								*(_QWORD*)(v66 + 16) = v83;
								v84 = *(_QWORD*)(v82 + 160);
								v85 = *(_DWORD*)(v9 + 32);
								if (v70 >= *(_DWORD*)(v84 + 56))
								{
									v313 = (double)v71;
									if ((double)v71 == 0.0)
										v86 = *(_DWORD**)(v84 + 32);
									else
										v86 = (_DWORD*)(*(_QWORD*)(v84 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v313) + HIDWORD(v313))
												% (((1i64 << *(_BYTE*)(v84 + 11)) - 1) | 1)));
									while (v86[6] != 3 || (double)v71 != *((double*)v86 + 2))
									{
										v86 = (_DWORD*)*((_QWORD*)v86 + 4);
										if (!v86)
										{
											v86 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v86 = (_DWORD*)(*(_QWORD*)(v84 + 24) + 16i64 * (v71 - 1));
								}
								*(_QWORD*)v83 = *(_QWORD*)v86;
								*(_DWORD*)(v83 + 8) = v86[2];
								*(_QWORD*)(v66 + 16) += 16i64;
								v87 = (unsigned __int64*)sub_14018F0E0(&v314, L"nContentId")[1];
								if (v87)
								{
									v88 = -1i64;
									do
										++v88;
									while (*((_BYTE*)v87 + v88));
									if (*(_QWORD*)(*(_QWORD*)(v66 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v66 + 32) + 112i64))
										sub_14005E2C0(v66);
									v89 = *(_QWORD*)(v66 + 16);
									v90 = sub_140062650(v66, v87, v88);
									*(_DWORD*)(v89 + 8) = 4;
									*(_QWORD*)v89 = v90;
									v71 = v333;
								}
								else
								{
									*(_DWORD*)(*(_QWORD*)(v66 + 16) + 8i64) = 0;
								}
								v91 = v315;
								*(_QWORD*)(v66 + 16) += 16i64;
								if (v91)
									sub_14018B900(v91, 0);
								v92 = *(_QWORD*)(v66 + 16);
								*(_DWORD*)(v92 + 8) = 3;
								*(double*)v92 = (double)v85;
								*(_QWORD*)(v66 + 16) += 16i64;
								v93 = (__int64*)sub_1400580E0(v66, -3);
								sub_14005EA50(
									v66,
									v93,
									(int*)(*(_QWORD*)(v66 + 16) - 32i64),
									(unsigned int*)(*(_QWORD*)(v66 + 16) - 16i64));
								v94 = *(_QWORD*)&v311;
								*(_QWORD*)(v66 + 16) -= 48i64;
								v96 = sub_14034BDD0(v95, *(_DWORD*)(v94 + 4));
								v97 = *(_QWORD*)(*(_QWORD*)(v66 + 32) + 160i64);
								if (v70 >= *(_DWORD*)(v97 + 56))
								{
									v311 = (double)v71;
									if ((double)v71 == 0.0)
										v98 = *(_DWORD**)(v97 + 32);
									else
										v98 = (_DWORD*)(*(_QWORD*)(v97 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v311) + HIDWORD(v311))
												% (((1i64 << *(_BYTE*)(v97 + 11)) - 1) | 1)));
									while (v98[6] != 3 || (double)v71 != *((double*)v98 + 2))
									{
										v98 = (_DWORD*)*((_QWORD*)v98 + 4);
										if (!v98)
										{
											v98 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v98 = (_DWORD*)(*(_QWORD*)(v97 + 24) + 16i64 * (v71 - 1));
								}
								v99 = *(_QWORD*)(v66 + 16);
								*(_QWORD*)v99 = *(_QWORD*)v98;
								*(_DWORD*)(v99 + 8) = v98[2];
								*(_QWORD*)(v66 + 16) += 16i64;
								sub_1400F0870(v66, (__int64)v98, L"strZoneName", (unsigned __int16*)v96);
								v100 = *(_QWORD*)(v66 + 32);
								v101 = *(_QWORD*)(v66 + 16) - 16i64;
								*(_QWORD*)(v66 + 16) = v101;
								v102 = *(_QWORD*)(v100 + 160);
								if (v70 >= *(_DWORD*)(v102 + 56))
								{
									v311 = (double)v71;
									if ((double)v71 == 0.0)
										v103 = *(_DWORD**)(v102 + 32);
									else
										v103 = (_DWORD*)(*(_QWORD*)(v102 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v311) + HIDWORD(v311))
												% (((1i64 << *(_BYTE*)(v102 + 11)) - 1) | 1)));
									while (v103[6] != 3 || (double)v71 != *((double*)v103 + 2))
									{
										v103 = (_DWORD*)*((_QWORD*)v103 + 4);
										if (!v103)
										{
											v103 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v103 = (_DWORD*)(*(_QWORD*)(v102 + 24) + 16i64 * (v71 - 1));
								}
								*(_QWORD*)v101 = *(_QWORD*)v103;
								*(_DWORD*)(v101 + 8) = v103[2];
								*(_QWORD*)(v66 + 16) += 16i64;
								v104 = (unsigned __int64*)sub_14018F0E0(&v314, L"arRewards")[1];
								if (v104)
								{
									v105 = -1i64;
									do
										++v105;
									while (*((_BYTE*)v104 + v105));
									if (*(_QWORD*)(*(_QWORD*)(v66 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v66 + 32) + 112i64))
										sub_14005E2C0(v66);
									v106 = *(_QWORD*)(v66 + 16);
									v107 = sub_140062650(v66, v104, v105);
									*(_DWORD*)(v106 + 8) = 4;
									*(_QWORD*)v106 = v107;
									v71 = v333;
								}
								else
								{
									*(_DWORD*)(*(_QWORD*)(v66 + 16) + 8i64) = 0;
								}
								v108 = v315;
								*(_QWORD*)(v66 + 16) += 16i64;
								if (v108)
									sub_14018B900(v108, 0);
								v109 = v308;
								v110 = *(_QWORD*)(*(_QWORD*)(v66 + 32) + 160i64);
								if ((unsigned int)(v308 - 1) >= *(_DWORD*)(v110 + 56))
								{
									if ((double)(int)v308 == 0.0)
									{
										v111 = *(_DWORD**)(v110 + 32);
									}
									else
									{
										v334 = (double)(int)v308;
										v111 = (_DWORD*)(*(_QWORD*)(v110 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v334) + HIDWORD(v334))
												% (((1i64 << *(_BYTE*)(v110 + 11)) - 1) | 1)));
									}
									while (v111[6] != 3 || (double)(int)v308 != *((double*)v111 + 2))
									{
										v111 = (_DWORD*)*((_QWORD*)v111 + 4);
										if (!v111)
										{
											v111 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v111 = (_DWORD*)(*(_QWORD*)(v110 + 24) + 16i64 * ((int)v308 - 1));
								}
								v112 = *(_QWORD*)(v66 + 16);
								*(_QWORD*)v112 = *(_QWORD*)v111;
								*(_DWORD*)(v112 + 8) = v111[2];
								v113 = *(_QWORD*)(v66 + 16) + 16i64;
								*(_QWORD*)(v66 + 16) = v113;
								sub_14005EA50(v66, (__int64*)(v113 - 48), (int*)(v113 - 32), (unsigned int*)(v113 - 16));
								v3 = a2;
								*(_QWORD*)(v66 + 16) -= 48i64;
								sub_1400FB1D0(a2);
								if (v71 >= 0)
								{
									v114 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v66, -10000) + 32i64);
									while (v114[6] != 3 || *((double*)v114 + 2) != 0.0)
									{
										v114 = (_DWORD*)*((_QWORD*)v114 + 4);
										if (!v114)
										{
											v114 = dword_140A12138;
											break;
										}
									}
									v115 = *(_QWORD*)(v66 + 16);
									*(_QWORD*)v115 = *(_QWORD*)v114;
									*(_DWORD*)(v115 + 8) = v114[2];
									*(_QWORD*)(v66 + 16) += 16i64;
									sub_140058B30(v66, -10000);
									v116 = *(_QWORD*)(v66 + 16);
									*(_DWORD*)(v116 + 8) = 3;
									*(double*)v116 = (double)v71;
									*(_QWORD*)(v66 + 16) += 16i64;
									sub_140058B30(v66, -10000);
								}
								v117 = v309;
								if (v309 && v109 >= 0)
								{
									v118 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v309, -10000) + 32i64);
									while (v118[6] != 3 || *((double*)v118 + 2) != 0.0)
									{
										v118 = (_DWORD*)*((_QWORD*)v118 + 4);
										if (!v118)
										{
											v118 = dword_140A12138;
											break;
										}
									}
									v119 = *(_QWORD*)(v117 + 16);
									*(_QWORD*)v119 = *(_QWORD*)v118;
									*(_DWORD*)(v119 + 8) = v118[2];
									*(_QWORD*)(v117 + 16) += 16i64;
									sub_140058B30(v117, -10000);
									v120 = *(_QWORD*)(v117 + 16);
									*(_DWORD*)(v120 + 8) = 3;
									*(double*)v120 = (double)v109;
									*(_QWORD*)(v117 + 16) += 16i64;
									sub_140058B30(v117, -10000);
								}
								v12 = v318;
							}
							else
							{
								v61 = v309;
								if (v309)
								{
									v62 = v308;
									if ((int)v308 >= 0)
									{
										v63 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v309, -10000) + 32i64);
										while (v63[6] != 3 || *((double*)v63 + 2) != 0.0)
										{
											v63 = (_DWORD*)*((_QWORD*)v63 + 4);
											if (!v63)
											{
												v63 = dword_140A12138;
												break;
											}
										}
										v64 = *(_QWORD*)(v61 + 16);
										*(_QWORD*)v64 = *(_QWORD*)v63;
										*(_DWORD*)(v64 + 8) = v63[2];
										*(_QWORD*)(v61 + 16) += 16i64;
										sub_140058B30(v61, -10000);
										v65 = *(_QWORD*)(v61 + 16);
										*(_DWORD*)(v65 + 8) = 3;
										*(double*)v65 = (double)v62;
										*(_QWORD*)(v61 + 16) += 16i64;
										sub_140058B30(v61, -10000);
									}
								}
							}
						}
					}
					v14 = v321 + 1;
					v321 = v14;
					if (v14 >= v12[1])
						goto LABEL_278;
				}
				*(double*)&v16 = COERCE_DOUBLE(qword_140C63840(off_140A6E3E8, v15, qword_140C63858));
				goto LABEL_19;
			case 4u:
				v239 = 0i64;
				if (!v11[12])
					goto LABEL_278;
				while (1)
				{
					v241 = (unsigned int*)sub_140226F00(*(_DWORD*)(v12[8] + 4 * v239));
					if (v241)
					{
						v242 = *(_QWORD*)(v3 + 16);
						v307 = off_140B569F0;
						v309 = v242;
						LODWORD(v310) = 1;
						sub_140058900(v242, v240, 0);
						v243 = sub_1400578C0(v242);
						v244 = *(_QWORD**)(v9 + 40);
						LODWORD(v308) = v243;
						if ((unsigned int)sub_140634870(v244, (__int64)&v307, 0))
						{
							v248 = *(_QWORD*)(v3 + 16);
							v322 = off_140B569F0;
							v324 = v248;
							v325 = 1;
							sub_140058900(v248, v245, 0);
							v249 = sub_1400578C0(v248);
							v250 = *(_QWORD*)(*(_QWORD*)(v248 + 32) + 160i64);
							v251 = v249;
							v323 = v249;
							v252 = sub_14005C3C0(v250, v249);
							v253 = *(_QWORD*)(v248 + 16);
							*(_QWORD*)v253 = *v252;
							*(_DWORD*)(v253 + 8) = *((_DWORD*)v252 + 2);
							*(_QWORD*)(v248 + 16) += 16i64;
							sub_1400F06F0(v248, v253, L"nContentType", v330);
							*(_QWORD*)(v248 + 16) -= 16i64;
							v254 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v248 + 32) + 160i64), v251);
							*(_QWORD*)v255 = *v254;
							*(_DWORD*)(v255 + 8) = *((_DWORD*)v254 + 2);
							*(_QWORD*)(v248 + 16) += 16i64;
							sub_1400F06F0(v248, v256, L"nContentId", v257);
							*(_QWORD*)(v248 + 16) -= 16i64;
							sub_14063AB20((__int64)&v322, (__int64)L"peWorldBoss", *v241);
							v258 = v308;
							sub_1400FB2A0((__int64)&v322, (__int64)L"arRewards", v308);
							sub_1400FB1D0(v3);
							sub_1400579E0(v248, v259, v251);
							v246 = v309;
							if (v309)
							{
								v247 = v258;
								goto LABEL_258;
							}
						}
						else
						{
							v246 = v309;
							if (v309)
							{
								v247 = v308;
							LABEL_258:
								sub_1400579E0(v246, v245, v247);
							}
						}
					}
					if ((unsigned __int64)++v239 >= v12[9])
						goto LABEL_278;
				}
			case 5u:
				v260 = 0i64;
				if (!v11[6])
					goto LABEL_270;
				break;
			default:
				goto LABEL_279;
			}
			do
			{
				v262 = sub_14024ACC0(*(_DWORD*)(v12[2] + 4 * v260));
				if (!v262)
					goto LABEL_269;
				v263 = *(_QWORD*)(v3 + 16);
				v307 = off_140B569F0;
				v309 = v263;
				LODWORD(v310) = 1;
				sub_140058900(v263, v261, 0);
				v264 = sub_1400578C0(v263);
				v265 = *(_QWORD**)(v9 + 40);
				LODWORD(v308) = v264;
				if ((unsigned int)sub_140634870(v265, (__int64)&v307, 0))
				{
					sub_1400FA0F0((__int64)&v314, *(_QWORD*)(v3 + 16), 1);
					v269 = v316;
					v270 = v315;
					v271 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v316 + 32) + 160i64), v315);
					v272 = *(_QWORD*)(v269 + 16);
					*(_QWORD*)v272 = *v271;
					*(_DWORD*)(v272 + 8) = *((_DWORD*)v271 + 2);
					*(_QWORD*)(v269 + 16) += 16i64;
					sub_1400F06F0(v269, v272, L"nContentType", v330);
					*(_QWORD*)(v269 + 16) -= 16i64;
					v273 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v269 + 32) + 160i64), v270);
					*(_QWORD*)v274 = *v273;
					*(_DWORD*)(v274 + 8) = *((_DWORD*)v273 + 2);
					*(_QWORD*)(v269 + 16) += 16i64;
					sub_1400F06F0(v269, v275, L"nContentId", v276);
					*(_QWORD*)(v269 + 16) -= 16i64;
					sub_14034BDD0(v277, *(_DWORD*)(v262 + 60));
					v278 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v269 + 32) + 160i64), v270);
					v279 = *(_QWORD*)(v269 + 16);
					*(_QWORD*)v279 = *v278;
					*(_DWORD*)(v279 + 8) = *((_DWORD*)v278 + 2);
					*(_QWORD*)(v269 + 16) += 16i64;
					sub_1400F0870(v269, v279, L"strWorld", v280);
					v281 = v308;
					*(_QWORD*)(v269 + 16) -= 16i64;
					sub_1400FB2A0((__int64)&v314, (__int64)L"arRewards", v281);
					sub_1400FB1D0(v3);
					sub_1400579E0(v269, v282, v270);
					v267 = v309;
					if (!v309)
						goto LABEL_269;
					v268 = v281;
				}
				else
				{
					v267 = v309;
					if (!v309)
						goto LABEL_269;
					v268 = v308;
				}
				sub_1400579E0(v267, v266, v268);
			LABEL_269:
				++v260;
			} while (v260 < v12[3]);
		LABEL_270:
			for (mm = 0i64; mm < v12[5]; ++mm)
			{
				sub_1400FA0F0((__int64)&v322, *(_QWORD*)(v3 + 16), 1);
				if ((unsigned int)sub_140634870(*(_QWORD**)(v9 + 40), (__int64)&v322, 0))
				{
					sub_1400FA0F0((__int64)&v314, *(_QWORD*)(v3 + 16), 1);
					v287 = v316;
					v288 = v315;
					v289 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v316 + 32) + 160i64), v315);
					v290 = *(_QWORD*)(v287 + 16);
					*(_QWORD*)v290 = *v289;
					*(_DWORD*)(v290 + 8) = *((_DWORD*)v289 + 2);
					*(_QWORD*)(v287 + 16) += 16i64;
					sub_1400F06F0(v287, v290, L"nContentType", v330);
					*(_QWORD*)(v287 + 16) -= 16i64;
					v291 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v287 + 32) + 160i64), v288);
					*(_QWORD*)v292 = *v291;
					*(_DWORD*)(v292 + 8) = *((_DWORD*)v291 + 2);
					*(_QWORD*)(v287 + 16) += 16i64;
					sub_1400F06F0(v287, v293, L"nContentId", v294);
					*(_QWORD*)(v287 + 16) -= 16i64;
					v295 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v287 + 32) + 160i64), v288);
					*(_QWORD*)v296 = *v295;
					*(_DWORD*)(v296 + 8) = *((_DWORD*)v295 + 2);
					*(_QWORD*)(v287 + 16) += 16i64;
					sub_1400F06F0(v287, v297, L"eMatchType", v298);
					*(_QWORD*)(v287 + 16) -= 16i64;
					v299 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v287 + 32) + 160i64), v288);
					*(_QWORD*)v300 = *v299;
					*(_DWORD*)(v300 + 8) = *((_DWORD*)v299 + 2);
					*(_QWORD*)(v287 + 16) += 16i64;
					sub_1400F0630(v287, v301, L"bIsVeteran", 0);
					v302 = v323;
					*(_QWORD*)(v287 + 16) -= 16i64;
					sub_1400FB2A0((__int64)&v314, (__int64)L"arRewards", v302);
					sub_1400FB1D0(v3);
					sub_1400579E0(v287, v303, v288);
					v285 = v324;
					if (v324)
					{
						v286 = v302;
						goto LABEL_276;
					}
				}
				else
				{
					v285 = v324;
					if (v324)
					{
						v286 = v323;
					LABEL_276:
						sub_1400579E0(v285, v284, v286);
					}
				}
			}
		LABEL_278:
			v6 = v330;
		LABEL_279:
			v4 = v312;
		LABEL_280:
			v304 = *(_QWORD*)(v9 + 24);
			if (v304)
			{
				v9 = *(_QWORD*)(v9 + 24);
				v320 = v304;
				for (nn = *(_QWORD*)(v304 + 16); nn; nn = *(_QWORD*)(nn + 16))
				{
					v9 = nn;
					v320 = nn;
				}
			}
			else
			{
				for (i1 = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(i1 + 24); i1 = *(_QWORD*)(i1 + 8))
					v9 = i1;
				if (*(_QWORD*)(v9 + 24) != i1)
					v9 = i1;
				v320 = v9;
			}
		}
		while (v9 != *(_QWORD*)(v328 + v4 + 8));
	LABEL_290:
		++v6;
		result = v326 + 1;
		v330 = v6;
		++v326;
	}
	while (v6 < 7);
	return result;
}
// 140637663: variable 'v95' is possibly undefined
// 140637D43: variable 'v150' is possibly undefined
// 140637D55: variable 'v151' is possibly undefined
// 140637D55: variable 'v152' is possibly undefined
// 140637D64: variable 'v153' is possibly undefined
// 140637DA1: variable 'v156' is possibly undefined
// 140637DCF: variable 'v158' is possibly undefined
// 140637DE1: variable 'v159' is possibly undefined
// 140637E12: variable 'v161' is possibly undefined
// 140637F66: variable 'v178' is possibly undefined
// 140637F78: variable 'v179' is possibly undefined
// 140637F78: variable 'v180' is possibly undefined
// 140637F87: variable 'v181' is possibly undefined
// 140637FC3: variable 'v184' is possibly undefined
// 140637FF3: variable 'v186' is possibly undefined
// 140638005: variable 'v187' is possibly undefined
// 140638037: variable 'v188' is possibly undefined
// 14063804E: variable 'v13' is possibly undefined
// 1406381DF: variable 'v204' is possibly undefined
// 1406381F1: variable 'v205' is possibly undefined
// 1406381F1: variable 'v206' is possibly undefined
// 140638226: variable 'v208' is possibly undefined
// 140638238: variable 'v209' is possibly undefined
// 140638238: variable 'v210' is possibly undefined
// 140638265: variable 'v212' is possibly undefined
// 140638277: variable 'v213' is possibly undefined
// 1406382AA: variable 'v215' is possibly undefined
// 1406383E9: variable 'v227' is possibly undefined
// 1406383FB: variable 'v228' is possibly undefined
// 1406383FB: variable 'v229' is possibly undefined
// 140638430: variable 'v231' is possibly undefined
// 140638442: variable 'v232' is possibly undefined
// 140638442: variable 'v233' is possibly undefined
// 140638472: variable 'v235' is possibly undefined
// 140638484: variable 'v236' is possibly undefined
// 1406384B7: variable 'v238' is possibly undefined
// 14063853D: variable 'v240' is possibly undefined
// 14063859C: variable 'v245' is possibly undefined
// 140638614: variable 'v255' is possibly undefined
// 140638626: variable 'v256' is possibly undefined
// 140638626: variable 'v257' is possibly undefined
// 14063866B: variable 'v259' is possibly undefined
// 1406386DE: variable 'v261' is possibly undefined
// 14063879D: variable 'v274' is possibly undefined
// 1406387AF: variable 'v275' is possibly undefined
// 1406387AF: variable 'v276' is possibly undefined
// 1406387BD: variable 'v277' is possibly undefined
// 1406387F9: variable 'v280' is possibly undefined
// 14063882C: variable 'v282' is possibly undefined
// 14063883E: variable 'v266' is possibly undefined
// 14063891C: variable 'v292' is possibly undefined
// 14063892E: variable 'v293' is possibly undefined
// 14063892E: variable 'v294' is possibly undefined
// 140638963: variable 'v296' is possibly undefined
// 140638975: variable 'v297' is possibly undefined
// 140638975: variable 'v298' is possibly undefined
// 1406389A2: variable 'v300' is possibly undefined
// 1406389B4: variable 'v301' is possibly undefined
// 1406389E6: variable 'v303' is possibly undefined
// 1406389F7: variable 'v284' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B284E8: using guessed type wchar_t aStrworld_0[9];
// 140B285C8: using guessed type wchar_t aBisveteran_0[11];
// 140B285E0: using guessed type wchar_t aNcontenttype_1[13];
// 140B28600: using guessed type wchar_t aNcontentid_1[11];
// 140B28618: using guessed type wchar_t aBisveteran[11];
// 140B28630: using guessed type wchar_t aArrewards_0[10];
// 140B28648: using guessed type wchar_t aNcontentid_0[11];
// 140B28660: using guessed type wchar_t aStrworld[9];
// 140B28678: using guessed type wchar_t aArrewards[10];
// 140B28690: using guessed type wchar_t aNcontenttype_0[13];
// 140B286B0: using guessed type wchar_t aNcontentid[11];
// 140B286C8: using guessed type wchar_t aStrzonename_0[12];
// 140B286F8: using guessed type wchar_t aNcontenttype[13];
// 140B28758: using guessed type wchar_t aArrewards_4[10];
// 140B28770: using guessed type wchar_t aNcontenttype_5[13];
// 140B28790: using guessed type wchar_t aNcontentid_4[11];
// 140B287A8: using guessed type wchar_t aPeworldboss[12];
// 140B287C0: using guessed type wchar_t aArrewards_3[10];
// 140B287D8: using guessed type wchar_t aNcontenttype_4[13];
// 140B287F8: using guessed type wchar_t aEmatchtype_0[11];
// 140B28810: using guessed type wchar_t aBisveteran_2[11];
// 140B28828: using guessed type wchar_t aNcontenttype_3[13];
// 140B28848: using guessed type wchar_t aNcontentid_3[11];
// 140B28860: using guessed type wchar_t aBisveteran_1[11];
// 140B28878: using guessed type wchar_t aArrewards_2[10];
// 140B28890: using guessed type wchar_t aNcontentid_2[11];
// 140B288A8: using guessed type wchar_t aEmatchtype[11];
// 140B288C0: using guessed type wchar_t aArrewards_1[10];
// 140B288D8: using guessed type wchar_t aNcontenttype_2[13];
// 140B289D0: using guessed type wchar_t aBisveteran_3[11];
// 140B289E8: using guessed type wchar_t aArrewards_6[10];
// 140B28A00: using guessed type wchar_t aNcontentid_6[11];
// 140B28A18: using guessed type wchar_t aEmatchtype_1[11];
// 140B28A30: using guessed type wchar_t aArrewards_5[10];
// 140B28A48: using guessed type wchar_t aNcontenttype_6[13];
// 140B28A68: using guessed type wchar_t aNcontentid_5[11];
// 140B28A80: using guessed type wchar_t aStrworld_1[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C64698: using guessed type int dword_140C64698;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65930: using guessed type __int64 qword_140C65930;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65C20: using guessed type __int64 qword_140C65C20;

