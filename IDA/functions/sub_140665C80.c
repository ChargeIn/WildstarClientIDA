#include "../winhttp.h"

//----- (0000000140665C80) ----------------------------------------------------
__int64 __fastcall sub_140665C80(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v4; // r14
	int* v5; // rax
	int* v6; // rdi
	int* v7; // rax
	int* v8; // r15
	__int64 v9; // rax
	int v10; // xmm7_4
	unsigned int v11; // ecx
	__int64 v12; // rax
	unsigned int v13; // edx
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	__int64 v19; // rdx
	unsigned __int64 v20; // rcx
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // eax
	int* v24; // rbx
	__int64 v25; // r13
	__int64 v26; // rcx
	int* v27; // r14
	unsigned __int64 v28; // rax
	__int64 v29; // rdi
	__int64 v30; // rax
	int v31; // eax
	__int64 v32; // rdx
	bool v33; // zf
	int v34; // r15d
	unsigned int v35; // edi
	__int64 v36; // rax
	__int64 v37; // rcx
	_QWORD* v38; // rax
	__int64 v39; // rdx
	unsigned __int16* v40; // r10
	int v41; // edi
	_QWORD* v42; // rax
	__int64 v43; // rdx
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	__int64 v46; // rax
	__int64* v47; // rax
	int v48; // edi
	_QWORD* v49; // rax
	__int64 v50; // r10
	unsigned __int64* v51; // rdx
	unsigned __int64 v52; // r8
	__int64 v53; // rax
	__int64* v54; // rax
	int* v55; // rax
	_QWORD* v56; // rax
	__int64 v57; // r11
	__int64 v58; // rdx
	int v59; // r10d
	__int64 v60; // rcx
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rdx
	__int64 v64; // r13
	int v65; // r12d
	__int64 v66; // rax
	__int64 v67; // rcx
	int v68; // edi
	_QWORD* v69; // rax
	__int64 v70; // rdx
	unsigned __int16* v71; // r10
	_QWORD* v72; // rax
	__int64 v73; // r10
	__int64 v74; // rdx
	__int64 v75; // rax
	__int64 v76; // rcx
	_QWORD* v77; // rax
	__int64 v78; // rdx
	unsigned __int16* v79; // r10
	__int64 v80; // r12
	int* v81; // rax
	int* v82; // rdi
	_QWORD* v83; // rax
	__int64 v84; // rdx
	int v85; // r10d
	__int64 v86; // rdi
	__int64 v87; // rax
	unsigned int* v88; // r14
	__int64 v89; // rdx
	unsigned __int64 v90; // rcx
	__int64 v91; // rdi
	__int64 v92; // rax
	__int64 v93; // rdx
	int v94; // r13d
	__int64 v95; // rcx
	unsigned __int64 v96; // rax
	__int64 v97; // rbx
	__int64 v98; // rax
	__int64 v99; // rax
	int v100; // edi
	unsigned int v101; // ebx
	__int64 v102; // rax
	__int64 v103; // rbx
	__int64 v104; // rax
	_QWORD* v105; // rax
	__int64 v106; // rdx
	_QWORD* v107; // rax
	__int64 v108; // r10
	__int64 v109; // rdx
	_QWORD* v110; // rax
	__int64 v111; // r10
	__int64 v112; // rdx
	_QWORD* v113; // rax
	__int64 v114; // r10
	__int64 v115; // rdx
	__int64 v116; // rdx
	int* v117; // rax
	int* v118; // rbx
	__int64 v119; // rcx
	int* v120; // r15
	unsigned __int64 v121; // rax
	__int64 v122; // rdi
	__int64 v123; // rax
	int v124; // eax
	int v125; // r13d
	int* v126; // r8
	__int64 v127; // rdx
	__int64 v128; // rcx
	unsigned int v129; // eax
	__int64* v130; // rax
	__int64 v131; // rax
	int* v132; // rax
	int v133; // r14d
	unsigned int v134; // edi
	__int64 v135; // r9
	_DWORD* v136; // rdx
	__int64 v137; // rcx
	unsigned __int64* v138; // r12
	unsigned __int64 v139; // r14
	__int64 v140; // rdi
	__int64 v141; // rax
	__int64 v142; // rcx
	__int64 v143; // rax
	__int64* v144; // rax
	__int64 v145; // r9
	int v146; // r14d
	__int64 v147; // r10
	_DWORD* v148; // rcx
	unsigned __int64* v149; // r12
	unsigned __int64 v150; // r14
	__int64 v151; // rdi
	__int64 v152; // rax
	__int64 v153; // rax
	__int64* v154; // rax
	__int64 v155; // rdx
	int v156; // eax
	int* v157; // rax
	int v158; // eax
	unsigned int v159; // ecx
	int v160; // edi
	__int64 v161; // rax
	__int64 v162; // rdx
	_QWORD* v163; // rax
	__int64 v164; // r11
	__int64 v165; // rdx
	int v166; // r10d
	__int64 v167; // rcx
	__int64 v168; // rax
	__int64 v169; // rcx
	__int64 v170; // rcx
	__int64 v171; // r14
	int v172; // edi
	__int64 v173; // rcx
	_QWORD* v174; // rax
	__int64 v175; // rdx
	unsigned __int16* v176; // r10
	_QWORD* v177; // rax
	__int64 v178; // r10
	__int64 v179; // rdx
	__int64 v180; // rax
	__int64 v181; // rcx
	_QWORD* v182; // rax
	__int64 v183; // rdx
	unsigned __int16* v184; // r10
	_QWORD* v185; // rax
	__int64 v186; // rdx
	int v187; // r10d
	_QWORD* v188; // rax
	__int64 v189; // rdx
	int v190; // r10d
	_QWORD* v191; // rax
	__int64 v192; // rdx
	int v193; // r10d
	_QWORD* v194; // rax
	__int64 v195; // rdx
	int v196; // r10d
	_QWORD* v197; // rax
	__int64 v198; // rdx
	int v199; // r10d
	__int64 v200; // rdi
	__int64 v201; // rax
	unsigned int* v202; // rdi
	int v203; // edi
	__int64 v204; // rdx
	__int64 v205; // rdx
	unsigned __int64 v206; // r14
	__int64 v207; // rdi
	__int64 v208; // r15
	int v209; // eax
	__int64 v210; // rcx
	int v211; // ebx
	_QWORD* v212; // rax
	__int64 v213; // rdx
	_QWORD* v214; // rax
	__int64 v215; // r11
	__int64 v216; // rdx
	int v217; // r10d
	__int64 v218; // rdx
	_QWORD* v219; // rax
	__int64 v220; // r10
	__int64 v221; // rdx
	_QWORD* v222; // rax
	__int64 v223; // rdx
	int v224; // r10d
	__int64 v225; // r11
	unsigned __int16* v226; // r8
	_QWORD* v227; // rax
	__int64 v228; // r10
	__int64 v229; // rdx
	int* v230; // rax
	_QWORD* v231; // rax
	__int64 v232; // r10
	__int64 v233; // rdx
	unsigned int* v234; // r15
	__int64 v235; // rdx
	__int64 v236; // r12
	float* v237; // rbx
	__int64 v238; // r14
	int v239; // eax
	__int64 v240; // rdx
	_QWORD* v241; // rcx
	int v242; // edi
	int v243; // r8d
	float v244; // xmm6_4
	float v245; // xmm7_4
	__int64 v246; // rax
	__int64 v247; // rcx
	__int64 v248; // rax
	float v249; // r9d
	double* v250; // rax
	int* v251; // rax
	int* v252; // rax
	__int64 v253; // rbx
	__int64 v254; // rax
	__int64 v255; // rdx
	__int64 v256; // r14
	int v257; // edi
	_QWORD* v258; // rax
	__int64 v259; // rdx
	int v260; // r10d
	__int64 v261; // rcx
	_QWORD* v262; // rax
	__int64 v263; // rdx
	unsigned __int16* v264; // r10
	_QWORD* v265; // rax
	__int64 v266; // r10
	__int64 v267; // rdx
	_QWORD* v268; // rax
	__int64 v269; // r10
	__int64 v270; // rdx
	int v271; // r11d
	__int64 v272; // rdx
	__int64 v273; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v276; // ebx
	int v277; // edi
	_QWORD* v278; // rax
	__int64 v279; // rdx
	__int64 v280; // rdx
	int* v281; // rdi
	int* v282; // rbx
	__int64 v283; // rcx
	int* v284; // rdi
	int* v285; // rbx
	__int64 v286; // rcx
	int* v287; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v288; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v289)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v290; // [rsp+48h] [rbp-B8h]
	_QWORD* v291; // [rsp+50h] [rbp-B0h]
	int v292; // [rsp+58h] [rbp-A8h]
	int* v293; // [rsp+60h] [rbp-A0h] BYREF
	__int64(__fastcall * *v294)(); // [rsp+68h] [rbp-98h] BYREF
	int v295; // [rsp+70h] [rbp-90h]
	_QWORD* v296; // [rsp+78h] [rbp-88h]
	int v297; // [rsp+80h] [rbp-80h]
	int* v298; // [rsp+88h] [rbp-78h] BYREF
	char v299[8]; // [rsp+90h] [rbp-70h] BYREF
	int* v300; // [rsp+98h] [rbp-68h]
	__int64 v301; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v302)(); // [rsp+B0h] [rbp-50h] BYREF
	int v303; // [rsp+B8h] [rbp-48h]
	_QWORD* v304; // [rsp+C0h] [rbp-40h]
	int v305; // [rsp+C8h] [rbp-38h]
	__int64 v306[2]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v307; // [rsp+E0h] [rbp-20h] BYREF
	unsigned __int64 v308; // [rsp+E8h] [rbp-18h]
	__int64 v309; // [rsp+F0h] [rbp-10h]
	char v310[8]; // [rsp+F8h] [rbp-8h] BYREF
	int* v311; // [rsp+100h] [rbp+0h]
	__int64(__fastcall * *v312)(); // [rsp+108h] [rbp+8h] BYREF
	int v313; // [rsp+110h] [rbp+10h]
	_QWORD* v314; // [rsp+118h] [rbp+18h]
	int v315; // [rsp+120h] [rbp+20h]
	int* v316; // [rsp+128h] [rbp+28h] BYREF
	int* v317; // [rsp+130h] [rbp+30h] BYREF
	char v318[8]; // [rsp+138h] [rbp+38h] BYREF
	int* v319; // [rsp+140h] [rbp+40h]
	__int64(__fastcall * *v320)(); // [rsp+148h] [rbp+48h] BYREF
	int v321; // [rsp+150h] [rbp+50h]
	_QWORD* v322; // [rsp+158h] [rbp+58h]
	int v323; // [rsp+160h] [rbp+60h]
	int* v324; // [rsp+1E8h] [rbp+E8h] BYREF
	__int64 v325; // [rsp+1F0h] [rbp+F0h] BYREF
	double v326; // [rsp+1F8h] [rbp+F8h] BYREF

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v309 = *v2;
	v4 = v309;
	v5 = sub_14018B280(24i64, 0);
	*(_QWORD*)v5 = v5;
	v6 = v5;
	v319 = v5;
	*((_QWORD*)v5 + 1) = v5;
	v7 = sub_14018B280(24i64, 0);
	*(_QWORD*)v7 = v7;
	*((_QWORD*)v7 + 1) = v7;
	v8 = v7;
	v311 = v7;
	sub_140551AC0((__int64*)v4, (__int64)v318, (__int64)v310);
	v9 = *(_QWORD*)(v4 + 8);
	v10 = 1065353216;
	LODWORD(v324) = 1065353216;
	v11 = *(_DWORD*)(v9 + 56);
	v306[1] = 0i64;
	v306[0] = 0i64;
	v308 = 0i64;
	v307 = 0i64;
	v12 = sub_14024DB80(v11);
	if (qword_140C65C20)
	{
		if (v12)
		{
			v13 = *(_DWORD*)(v12 + 36);
			if (v13)
			{
				sub_140638AD0((__int64)&v307, v13, **(_DWORD**)(v4 + 8), v306, &v307, (__int64)&v324);
				v10 = (int)v324;
			}
		}
	}
	v14 = a1[4];
	v322 = a1;
	v15 = *(_QWORD*)(v14 + 112);
	v320 = off_140B569F0;
	v323 = 1;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	v18 = sub_1400578C0((__int64)a1);
	v19 = a1[4];
	v321 = v18;
	v312 = off_140B569F0;
	v20 = *(_QWORD*)(v19 + 112);
	v314 = a1;
	v315 = 1;
	if (*(_QWORD*)(v19 + 120) >= v20)
		sub_14005E2C0((__int64)a1);
	v21 = a1[2];
	v22 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v21 + 8) = 5;
	*(_QWORD*)v21 = v22;
	a1[2] += 16i64;
	v23 = sub_1400578C0((__int64)a1);
	v24 = *(int**)v6;
	v313 = v23;
	v25 = 0i64;
	v288 = 0i64;
	v287 = 0i64;
	if (v24 != v6)
	{
		while (1)
		{
			v26 = a1[4];
			v27 = (int*)*((_QWORD*)v24 + 2);
			v302 = off_140B569F0;
			v28 = *(_QWORD*)(v26 + 112);
			v304 = a1;
			v305 = 1;
			if (*(_QWORD*)(v26 + 120) >= v28)
				sub_14005E2C0((__int64)a1);
			v29 = a1[2];
			v30 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v29 + 8) = 5;
			*(_QWORD*)v29 = v30;
			a1[2] += 16i64;
			v31 = sub_1400578C0((__int64)a1);
			v33 = v27[2] == 2;
			v34 = v31;
			v303 = v31;
			if (v33)
			{
				v35 = v27[3];
				if (qword_140C63840)
				{
					v36 = qword_140C63840(off_140A6A328, v35, qword_140C63858);
				}
				else
				{
					if (dword_140C6546C || (int)sub_1401FEEC0() < 0)
						goto LABEL_67;
					v36 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D20 + 24i64))(qword_140C64D20, v35);
				}
				if (!v36)
					goto LABEL_67;
				sub_14034BDD0(v37, *(_DWORD*)(v36 + 12));
				v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
				v39 = a1[2];
				*(_QWORD*)v39 = *v38;
				*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v39, L"strFactionName", v40);
				a1[2] -= 16i64;
			}
			v41 = *v27;
			v42 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
			v43 = a1[2];
			*(_QWORD*)v43 = *v42;
			*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
			a1[2] += 16i64;
			v44 = (unsigned __int64*)sub_14018F0E0(&v289, L"idReward")[1];
			if (v44)
			{
				v45 = -1i64;
				do
					++v45;
				while (*((_BYTE*)v44 + v45));
				sub_140058710((__int64)a1, v44, v45);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v290)
				sub_14018B900(v290, 0);
			v46 = a1[2];
			*(_DWORD*)(v46 + 8) = 3;
			*(double*)v46 = (double)v41;
			a1[2] += 16i64;
			v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v48 = v27[2];
			v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
			*(_QWORD*)v50 = *v49;
			*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
			a1[2] += 16i64;
			v51 = (unsigned __int64*)sub_14018F0E0(&v289, L"eType")[1];
			if (v51)
			{
				v52 = -1i64;
				do
					++v52;
				while (*((_BYTE*)v51 + v52));
				sub_140058710((__int64)a1, v51, v52);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v290)
				sub_14018B900(v290, 0);
			v53 = a1[2];
			*(_DWORD*)(v53 + 8) = 3;
			*(double*)v53 = (double)v48;
			a1[2] += 16i64;
			v54 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v54, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			if (v27[2] == 1)
			{
				v55 = sub_1400B5DF0(qword_140C658F0, v27[3], 0i64);
				if (!(unsigned int)sub_140415C70(a1, (__int64)v55))
					goto LABEL_41;
				sub_1400FB540((__int64)&v302);
			}
			else
			{
				v56 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
				*(_QWORD*)v57 = *v56;
				*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v58, L"idObject", v59);
			}
			a1[2] -= 16i64;
		LABEL_41:
			v60 = (unsigned int)v27[2];
			if ((_DWORD)v60 != 4)
			{
				if ((_DWORD)v60 == 5)
				{
					v75 = sub_1405BE150(v60, v27[3]);
					if (v75)
					{
						sub_14034BDD0(v76, *(_DWORD*)(v75 + 4));
						v77 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
						v78 = a1[2];
						*(_QWORD*)v78 = *v77;
						*(_DWORD*)(v78 + 8) = *((_DWORD*)v77 + 2);
						a1[2] += 16i64;
						sub_1400F0870((__int64)a1, v78, L"strTradeskill", v79);
						a1[2] -= 16i64;
						goto LABEL_66;
					}
				}
				else if ((unsigned int)(v60 - 8) <= 1)
				{
					v86 = qword_140C65910;
					v87 = sub_140201320(v27[3]);
					if (v87)
					{
						v88 = (unsigned int*)sub_1404530F0(v86, *(_DWORD*)(v87 + 24), *(_DWORD*)(v87 + 28));
						if (v88)
						{
							v89 = a1[4];
							v296 = a1;
							v90 = *(_QWORD*)(v89 + 112);
							v294 = off_140B569F0;
							v297 = 1;
							if (*(_QWORD*)(v89 + 120) >= v90)
								sub_14005E2C0((__int64)a1);
							v91 = a1[2];
							v92 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v91 + 8) = 5;
							*(_QWORD*)v91 = v92;
							a1[2] += 16i64;
							LODWORD(v91) = sub_1400578C0((__int64)a1);
							v295 = v91;
							sub_140451EB0(v88, (__int64)&v294);
							sub_1400FB2A0((__int64)&v302, (__int64)L"tUnlockInfo", v91);
							sub_1400579E0((__int64)a1, v93, v91);
						LABEL_66:
							sub_1400FB1D0((__int64)&v312);
						}
					}
				}
				else
				{
					if ((_DWORD)v60 != 10)
					{
						v83 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
						v84 = a1[2];
						*(_QWORD*)v84 = *v83;
						*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
						a1[2] += 16i64;
						sub_1400F06F0((__int64)a1, v84, L"nAmount", v85);
						a1[2] -= 16i64;
						goto LABEL_66;
					}
					v80 = v25 + 1;
					v81 = sub_14018DB00((__int64)v287, v25 + 1, 8i64);
					*(_QWORD*)&v81[2 * v25] = v27;
					v82 = v81;
					if (v287 != v81)
					{
						sub_1407DB590(v81, v287, 8 * v25);
						if (v287)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v287 - 2) + 8i64))(v287 - 4);
						v287 = v82;
					}
					++v25;
					v288 = v80;
				}
			LABEL_67:
				sub_1400579E0((__int64)a1, v32, v34);
				goto LABEL_68;
			}
			v61 = sub_140246480(v27[3]);
			if (!v61)
				goto LABEL_67;
			v64 = sub_1405BE150(v62, *(_DWORD*)(v61 + 4));
			if (v64)
			{
				v65 = v27[4];
				v66 = sub_140246480(v27[3]);
				if (v66)
				{
					v68 = *(_DWORD*)(v66 + 28);
					if (v65 != 100)
						v68 = (int)(float)((float)((float)v65 * 0.0099999998) * (float)v68);
				}
				else
				{
					v68 = 0;
				}
				sub_14034BDD0(v67, *(_DWORD*)(v64 + 4));
				v69 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
				v70 = a1[2];
				*(_QWORD*)v70 = *v69;
				*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v70, L"strTradeskill", v71);
				a1[2] -= 16i64;
				v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
				*(_QWORD*)v73 = *v72;
				*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v74, L"nXP", v68);
				a1[2] -= 16i64;
				v25 = v288;
				goto LABEL_66;
			}
			sub_1400579E0((__int64)a1, v63, v34);
			v25 = v288;
		LABEL_68:
			v24 = *(int**)v24;
			if (v24 == v319)
			{
				v8 = v311;
				v4 = v309;
				break;
			}
		}
	}
	sub_140667790(v306, &v287, (__int64)&v312, *(float*)&v10);
	v94 = v313;
	v288 = 0i64;
	sub_1400FB2A0((__int64)&v320, (__int64)L"arRewardChoices", v313);
	v95 = a1[4];
	v294 = off_140B569F0;
	v96 = *(_QWORD*)(v95 + 112);
	v296 = a1;
	v297 = 1;
	if (*(_QWORD*)(v95 + 120) >= v96)
		sub_14005E2C0((__int64)a1);
	v97 = a1[2];
	v98 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v97 + 8) = 5;
	*(_QWORD*)v97 = v98;
	a1[2] += 16i64;
	v295 = sub_1400578C0((__int64)a1);
	v99 = *(_QWORD*)(v4 + 8);
	v100 = *(_DWORD*)(v99 + 68);
	if (v100 <= 0)
	{
		v101 = *(_DWORD*)(v99 + 284);
		if (qword_140C63840)
		{
			v102 = qword_140C63840(off_140A6C740, v101, qword_140C63858);
		}
		else
		{
			if (dword_140C64A1C || (int)sub_14022AC60() < 0)
				goto LABEL_80;
			v102 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F70 + 24i64))(qword_140C64F70, v101);
		}
		if (v102)
			v100 = (int)sub_1405542B0(*(_DWORD*)(*(_QWORD*)(v4 + 8) + 16i64), *(float*)(v102 + 8));
	LABEL_80:
		if (!v100)
			goto LABEL_84;
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v103 = a1[2];
	v104 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v103 + 8) = 5;
	*(_QWORD*)v103 = v104;
	a1[2] += 16i64;
	LODWORD(v103) = sub_1400578C0((__int64)a1);
	v105 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v103);
	v106 = a1[2];
	*(_QWORD*)v106 = *v105;
	*(_DWORD*)(v106 + 8) = *((_DWORD*)v105 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v106, L"idReward", 0);
	a1[2] -= 16i64;
	v107 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v103);
	*(_QWORD*)v108 = *v107;
	*(_DWORD*)(v108 + 8) = *((_DWORD*)v107 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v109, L"eType", 3);
	a1[2] -= 16i64;
	v110 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v103);
	*(_QWORD*)v111 = *v110;
	*(_DWORD*)(v111 + 8) = *((_DWORD*)v110 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v112, L"eCurrencyType", 1);
	a1[2] -= 16i64;
	v113 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v103);
	*(_QWORD*)v114 = *v113;
	*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v115, L"nAmount", v100);
	a1[2] -= 16i64;
	sub_1400FB1D0((__int64)&v294);
	sub_1400579E0((__int64)a1, v116, v103);
LABEL_84:
	v117 = sub_14018B280(40i64, 0);
	v301 = 0i64;
	v300 = v117;
	*(_BYTE*)v117 = 0;
	*((_QWORD*)v300 + 1) = 0i64;
	*((double*)v300 + 2) = *(double*)&v300;
	*((double*)v300 + 3) = *(double*)&v300;
	v118 = *(int**)v8;
	if (*(int**)v8 == v8)
		goto LABEL_180;
	do
	{
		v119 = a1[4];
		v120 = (int*)*((_QWORD*)v118 + 2);
		v302 = off_140B569F0;
		v121 = *(_QWORD*)(v119 + 112);
		v298 = v120;
		v304 = a1;
		v305 = 1;
		if (*(_QWORD*)(v119 + 120) >= v121)
			sub_14005E2C0((__int64)a1);
		v122 = a1[2];
		v123 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v122 + 8) = 5;
		*(_QWORD*)v122 = v123;
		a1[2] += 16i64;
		v124 = sub_1400578C0((__int64)a1);
		v33 = v120[2] == 2;
		v125 = v124;
		v303 = v124;
		if (v33)
		{
			v126 = v300;
			v127 = *((_QWORD*)v300 + 1);
			v128 = v127;
			if (!v127)
				goto LABEL_97;
			v129 = v120[3];
			do
			{
				if (*(_DWORD*)(v128 + 32) < v129)
				{
					v128 = *(_QWORD*)(v128 + 24);
				}
				else
				{
					v126 = (int*)v128;
					v128 = *(_QWORD*)(v128 + 16);
				}
			} while (v128);
			if (v126 == v300 || v129 < v126[8])
			{
			LABEL_97:
				v317 = v300;
				v130 = (__int64*)&v317;
			}
			else
			{
				v316 = v126;
				v130 = (__int64*)&v316;
			}
			v131 = *v130;
			if ((int*)v131 == v300)
			{
				v132 = v300;
				while (v127)
				{
					if (*(_DWORD*)(v127 + 32) < (unsigned int)v120[3])
					{
						v127 = *(_QWORD*)(v127 + 24);
					}
					else
					{
						v132 = (int*)v127;
						v127 = *(_QWORD*)(v127 + 16);
					}
				}
				if (v132 == v300 || v120[3] < (unsigned int)v132[8])
				{
					v325 = (unsigned int)v120[3];
					v324 = v132;
					sub_140032B30((__int64)v299, &v293, (__int64*)&v324, &v325);
					v132 = v293;
				}
				v132[9] = v120[4];
			}
			else
			{
				*(_DWORD*)(v131 + 36) += v120[4];
			}
			goto LABEL_178;
		}
		v133 = *v120;
		v134 = v124 - 1;
		v135 = *(_QWORD*)(a1[4] + 160i64);
		LODWORD(v324) = *v120;
		if ((unsigned int)(v124 - 1) >= *(_DWORD*)(v135 + 56))
		{
			v326 = (double)v124;
			if ((double)v124 == 0.0)
				v136 = *(_DWORD**)(v135 + 32);
			else
				v136 = (_DWORD*)(*(_QWORD*)(v135 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v326) + HIDWORD(v326)) % (((1i64 << *(_BYTE*)(v135 + 11)) - 1) | 1)));
			while (v136[6] != 3 || (double)v124 != *((double*)v136 + 2))
			{
				v136 = (_DWORD*)*((_QWORD*)v136 + 4);
				if (!v136)
				{
					v136 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v136 = (_DWORD*)(*(_QWORD*)(v135 + 24) + 16i64 * (v124 - 1));
		}
		v137 = a1[2];
		*(_QWORD*)v137 = *(_QWORD*)v136;
		*(_DWORD*)(v137 + 8) = v136[2];
		a1[2] += 16i64;
		v138 = (unsigned __int64*)sub_14018F0E0(&v289, L"idReward")[1];
		if (v138)
		{
			v139 = -1i64;
			do
				++v139;
			while (*((_BYTE*)v138 + v139));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v140 = a1[2];
			v141 = sub_140062650((__int64)a1, v138, v139);
			v133 = (int)v324;
			*(_DWORD*)(v140 + 8) = 4;
			*(_QWORD*)v140 = v141;
			v134 = v125 - 1;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v142 = v290;
		a1[2] += 16i64;
		if (v142)
			sub_14018B900(v142, 0);
		v143 = a1[2];
		*(_DWORD*)(v143 + 8) = 3;
		*(double*)v143 = (double)v133;
		a1[2] += 16i64;
		v144 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v144, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v145 = *(_QWORD*)(a1[4] + 160i64);
		v146 = v120[2];
		v147 = a1[2];
		LODWORD(v324) = v146;
		if (v134 >= *(_DWORD*)(v145 + 56))
		{
			v326 = (double)v125;
			if ((double)v125 == 0.0)
				v148 = *(_DWORD**)(v145 + 32);
			else
				v148 = (_DWORD*)(*(_QWORD*)(v145 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v326) + HIDWORD(v326)) % (((1i64 << *(_BYTE*)(v145 + 11)) - 1) | 1)));
			while (v148[6] != 3 || (double)v125 != *((double*)v148 + 2))
			{
				v148 = (_DWORD*)*((_QWORD*)v148 + 4);
				if (!v148)
				{
					v148 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v148 = (_DWORD*)(*(_QWORD*)(v145 + 24) + 16i64 * (v125 - 1));
		}
		*(_QWORD*)v147 = *(_QWORD*)v148;
		*(_DWORD*)(v147 + 8) = v148[2];
		a1[2] += 16i64;
		v149 = (unsigned __int64*)sub_14018F0E0(&v289, L"eType")[1];
		if (v149)
		{
			v150 = -1i64;
			do
				++v150;
			while (*((_BYTE*)v149 + v150));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v151 = a1[2];
			v152 = sub_140062650((__int64)a1, v149, v150);
			v146 = (int)v324;
			*(_DWORD*)(v151 + 8) = 4;
			*(_QWORD*)v151 = v152;
			a1[2] += 16i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v290)
			sub_14018B900(v290, 0);
		v153 = a1[2];
		*(_DWORD*)(v153 + 8) = 3;
		*(double*)v153 = (double)v146;
		a1[2] += 16i64;
		v154 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v154, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v156 = v120[2];
		if (v156 == 1)
		{
			v157 = sub_1400B5DF0(qword_140C658F0, v120[3], 0i64);
			if (!(unsigned int)sub_140415C70(a1, (__int64)v157))
				goto LABEL_154;
			sub_1400FB540((__int64)&v302);
			goto LABEL_153;
		}
		if (v156 != 6)
		{
			v163 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
			*(_QWORD*)v164 = *v163;
			*(_DWORD*)(v164 + 8) = *((_DWORD*)v163 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v165, L"idObject", v166);
		LABEL_153:
			a1[2] -= 16i64;
			goto LABEL_154;
		}
		v291 = a1;
		v292 = 1;
		v289 = off_140B569F0;
		sub_140058900((__int64)a1, v155, 0);
		v158 = sub_1400578C0((__int64)a1);
		v159 = v120[3];
		v160 = v158;
		LODWORD(v290) = v158;
		v161 = sub_1401E8C20(v159);
		if (v161)
			sub_1404E34B0((__int64)&v289, v161);
		sub_1400FB2A0((__int64)&v302, (__int64)L"tAccountItemReward", v160);
		sub_1400579E0((__int64)a1, v162, v160);
	LABEL_154:
		v167 = (unsigned int)v120[2];
		switch ((_DWORD)v167)
		{
		case 4:
			v168 = sub_140246480(v120[3]);
			if (v168)
			{
				v171 = sub_1405BE150(v169, *(_DWORD*)(v168 + 4));
				if (v171)
				{
					v172 = sub_1405BE210(v170, v120[3], v120[4]);
					sub_14034BDD0(v173, *(_DWORD*)(v171 + 4));
					v174 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
					v175 = a1[2];
					*(_QWORD*)v175 = *v174;
					*(_DWORD*)(v175 + 8) = *((_DWORD*)v174 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v175, L"strTradeskill", v176);
					a1[2] -= 16i64;
					v177 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
					*(_QWORD*)v178 = *v177;
					*(_DWORD*)(v178 + 8) = *((_DWORD*)v177 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v179, L"nXP", v172);
					a1[2] -= 16i64;
				LABEL_177:
					sub_1400FB1D0((__int64)&v294);
				}
			}
			break;
		case 5:
			v180 = sub_1405BE150(v167, v120[3]);
			if (!v180)
				break;
			sub_14034BDD0(v181, *(_DWORD*)(v180 + 4));
			v182 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
			v183 = a1[2];
			*(_QWORD*)v183 = *v182;
			*(_DWORD*)(v183 + 8) = *((_DWORD*)v182 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v183, L"strTradeskill", v184);
			a1[2] -= 16i64;
			goto LABEL_177;
		case 3:
			if (v120[3] < 15)
			{
				v185 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
				v186 = a1[2];
				*(_QWORD*)v186 = *v185;
				*(_DWORD*)(v186 + 8) = *((_DWORD*)v185 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v186, L"eCurrencyType", v187);
				a1[2] -= 16i64;
			}
			v188 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
			v189 = a1[2];
			*(_QWORD*)v189 = *v188;
			*(_DWORD*)(v189 + 8) = *((_DWORD*)v188 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v189, L"nAmount", v190);
			a1[2] -= 16i64;
			goto LABEL_177;
		case 7:
			if (v120[3] < 19)
			{
				v191 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
				v192 = a1[2];
				*(_QWORD*)v192 = *v191;
				*(_DWORD*)(v192 + 8) = *((_DWORD*)v191 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v192, L"eAccountCurrencyType", v193);
				a1[2] -= 16i64;
			}
			v194 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
			v195 = a1[2];
			*(_QWORD*)v195 = *v194;
			*(_DWORD*)(v195 + 8) = *((_DWORD*)v194 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v195, L"nAmount", v196);
			a1[2] -= 16i64;
			goto LABEL_177;
		default:
			if ((unsigned int)(v167 - 8) > 1)
			{
				if ((_DWORD)v167 == 10)
				{
					sub_140033260((__int64*)&v287, &v298);
					break;
				}
				v197 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v125);
				v198 = a1[2];
				*(_QWORD*)v198 = *v197;
				*(_DWORD*)(v198 + 8) = *((_DWORD*)v197 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v198, L"nAmount", v199);
				a1[2] -= 16i64;
				goto LABEL_177;
			}
			v200 = qword_140C65910;
			v201 = sub_140201320(v120[3]);
			if (v201)
			{
				v202 = (unsigned int*)sub_1404530F0(v200, *(_DWORD*)(v201 + 24), *(_DWORD*)(v201 + 28));
				if (v202)
				{
					sub_1400FA0F0((__int64)&v289, (__int64)a1, 1);
					sub_140451EB0(v202, (__int64)&v289);
					v203 = v290;
					sub_1400FB2A0((__int64)&v302, (__int64)L"tUnlockInfo", v290);
					if (v291)
						sub_1400579E0((__int64)v291, v204, v203);
					goto LABEL_177;
				}
			}
			break;
		}
	LABEL_178:
		sub_1400579E0((__int64)a1, v127, v125);
		v118 = *(int**)v118;
	} while (v118 != v311);
	v94 = v313;
LABEL_180:
	sub_140667790(v306, &v287, (__int64)&v294, *(float*)&v10);
	v206 = v308;
	v207 = 0i64;
	if (!v308)
		goto LABEL_194;
	v208 = v307;
	while (2)
	{
		v289 = off_140B569F0;
		v291 = a1;
		v292 = 1;
		sub_140058900((__int64)a1, v205, 0);
		v209 = sub_1400578C0((__int64)a1);
		v210 = *(_QWORD*)(a1[4] + 160i64);
		v211 = v209;
		LODWORD(v290) = v209;
		v212 = sub_14005C3C0(v210, v209);
		v213 = a1[2];
		*(_QWORD*)v213 = *v212;
		*(_DWORD*)(v213 + 8) = *((_DWORD*)v212 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v213, L"idReward", 0);
		a1[2] -= 16i64;
		v214 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v211);
		*(_QWORD*)v215 = *v214;
		*(_DWORD*)(v215 + 8) = *((_DWORD*)v214 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v216, L"nAmount", v217);
		a1[2] -= 16i64;
		if (*(_DWORD*)(*(_QWORD*)(v208 + 8 * v207) + 4i64) == 1)
		{
			v231 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v211);
			*(_QWORD*)v232 = *v231;
			*(_DWORD*)(v232 + 8) = *((_DWORD*)v231 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v233, L"eType", 3);
			a1[2] -= 16i64;
			v222 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v211);
			v226 = L"eCurrencyType";
		LABEL_189:
			*(_QWORD*)v225 = *v222;
			*(_DWORD*)(v225 + 8) = *((_DWORD*)v222 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v223, v226, v224);
			goto LABEL_190;
		}
		if (*(_DWORD*)(*(_QWORD*)(v208 + 8 * v207) + 4i64) == 2)
		{
			v227 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v211);
			*(_QWORD*)v228 = *v227;
			*(_DWORD*)(v228 + 8) = *((_DWORD*)v227 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v229, L"eType", 1);
			a1[2] -= 16i64;
			v230 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*(_QWORD*)(v208 + 8 * v207) + 8i64), 0i64);
			if (!(unsigned int)sub_140415C70(a1, (__int64)v230))
			{
			LABEL_191:
				sub_1400FB1D0((__int64)&v294);
				goto LABEL_192;
			}
			sub_1400FB540((__int64)&v289);
		LABEL_190:
			a1[2] -= 16i64;
			goto LABEL_191;
		}
		v218 = (unsigned int)(*(_DWORD*)(*(_QWORD*)(v208 + 8 * v207) + 4i64) - 3);
		if (*(_DWORD*)(*(_QWORD*)(v208 + 8 * v207) + 4i64) == 3)
		{
			v219 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v211);
			*(_QWORD*)v220 = *v219;
			*(_DWORD*)(v220 + 8) = *((_DWORD*)v219 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v221, L"eType", 7);
			a1[2] -= 16i64;
			v222 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v211);
			v226 = L"eAccountCurrencyType";
			goto LABEL_189;
		}
	LABEL_192:
		sub_1400579E0((__int64)a1, v218, v211);
		if (++v207 < v206)
			continue;
		break;
	}
	v94 = v313;
LABEL_194:
	v234 = *(unsigned int**)(v309 + 8);
	v236 = sub_14022AEC0(v234[71]);
	if (v236)
	{
		v237 = (float*)(v234 + 101);
		v238 = 2i64;
		do
		{
			if (*(_DWORD*)v237)
			{
				sub_140058900((__int64)a1, v235, 0);
				v239 = sub_1400578C0((__int64)a1);
				v241 = *(_QWORD**)(qword_140C65898 + 120);
				v242 = v239;
				if (v241)
					v241 = (_QWORD*)v241[35];
				if (v241)
				{
					if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*v241 + 48i64))(v241, *(unsigned int*)v237))
					{
						v244 = v237[2];
						if (v244 > 0.0
							|| (v245 = *(float*)(v236 + 12), (v246 = sub_14024DFC0(v234[4])) != 0)
							&& (v244 = (float)*(int*)(v246 + 20) * v245, v244 > 0.0))
						{
							v240 = (__int64)v300;
							v247 = *((_QWORD*)v300 + 1);
							v248 = v247;
							if (!v247)
								goto LABEL_214;
							v249 = *v237;
							do
							{
								if (*(_DWORD*)(v248 + 32) < LODWORD(v249))
								{
									v248 = *(_QWORD*)(v248 + 24);
								}
								else
								{
									v240 = v248;
									v248 = *(_QWORD*)(v248 + 16);
								}
							} while (v248);
							if ((int*)v240 == v300 || LODWORD(v249) < *(_DWORD*)(v240 + 32))
							{
							LABEL_214:
								v326 = *(double*)&v300;
								v250 = &v326;
							}
							else
							{
								v325 = v240;
								v250 = (double*)&v325;
							}
							v251 = *(int**)v250;
							if (v251 == v300)
							{
								v252 = v300;
								if (v247)
								{
									v240 = *(unsigned int*)v237;
									do
									{
										if (*(_DWORD*)(v247 + 32) < (unsigned int)v240)
										{
											v247 = *(_QWORD*)(v247 + 24);
										}
										else
										{
											v252 = (int*)v247;
											v247 = *(_QWORD*)(v247 + 16);
										}
									} while (v247);
								}
								if (v252 == v300 || *(_DWORD*)v237 < (unsigned int)v252[8])
								{
									v324 = (int*)*(unsigned int*)v237;
									v298 = v252;
									sub_140032B30((__int64)v299, &v293, (__int64*)&v298, &v324);
									v252 = v293;
								}
								v252[9] = (int)v244;
							}
							else
							{
								v251[9] += (int)v244;
							}
						}
					}
					v243 = v242;
				}
				else
				{
					v243 = v239;
				}
				sub_1400579E0((__int64)a1, v240, v243);
			}
			++v237;
			--v238;
		} while (v238);
	}
	v253 = *((_QWORD*)v300 + 2);
	while ((int*)v253 != v300)
	{
		v254 = sub_1401FF120(*(_DWORD*)(v253 + 32));
		v256 = v254;
		if (v254 && (*(_BYTE*)(v254 + 8) & 1) == 0)
		{
			sub_140058900((__int64)a1, v255, 0);
			v257 = sub_1400578C0((__int64)a1);
			v258 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v257);
			v259 = a1[2];
			*(_QWORD*)v259 = *v258;
			*(_DWORD*)(v259 + 8) = *((_DWORD*)v258 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v259, L"idObject", v260);
			a1[2] -= 16i64;
			sub_14034BDD0(v261, *(_DWORD*)(v256 + 12));
			v262 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v257);
			v263 = a1[2];
			*(_QWORD*)v263 = *v262;
			*(_DWORD*)(v263 + 8) = *((_DWORD*)v262 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v263, L"strFactionName", v264);
			a1[2] -= 16i64;
			v265 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v257);
			*(_QWORD*)v266 = *v265;
			*(_DWORD*)(v266 + 8) = *((_DWORD*)v265 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v267, L"eType", 2);
			a1[2] -= 16i64;
			v268 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v257);
			*(_QWORD*)v269 = *v268;
			*(_DWORD*)(v269 + 8) = *((_DWORD*)v268 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v270, L"nAmount", v271);
			a1[2] -= 16i64;
			sub_1400FB1D0((__int64)&v294);
			sub_1400579E0((__int64)a1, v272, v257);
		}
		v273 = *(_QWORD*)(v253 + 24);
		if (v273)
		{
			v253 = *(_QWORD*)(v253 + 24);
			for (i = *(_QWORD*)(v273 + 16); i; i = *(_QWORD*)(i + 16))
				v253 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v253 + 8); v253 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v253 = j;
			if (*(_QWORD*)(v253 + 24) != j)
				v253 = j;
		}
	}
	v276 = v295;
	sub_1400FB2A0((__int64)&v320, (__int64)L"arFixedRewards", v295);
	v277 = v321;
	v278 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v321);
	v279 = a1[2];
	*(_QWORD*)v279 = *v278;
	*(_DWORD*)(v279 + 8) = *((_DWORD*)v278 + 2);
	a1[2] += 16i64;
	sub_140008410((__int64)v299);
	sub_14018B900((__int64)v300, 0);
	if (v296)
		sub_1400579E0((__int64)v296, v280, v276);
	if (v287)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v287 - 2) + 8i64))(v287 - 4);
	if (v314)
		sub_1400579E0((__int64)v314, v280, v94);
	sub_1400579E0((__int64)a1, v280, v277);
	if (v307)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v307 - 16) + 8i64))(v307 - 16);
	if (v306[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v306[0] - 16) + 8i64))(v306[0] - 16);
	v281 = v311;
	v282 = *(int**)v311;
	while (v282 != v281)
	{
		v283 = (__int64)v282;
		v282 = *(int**)v282;
		sub_14018B900(v283, 0);
	}
	*(_QWORD*)v281 = v281;
	*((_QWORD*)v281 + 1) = v281;
	sub_14018B900((__int64)v281, 0);
	v284 = v319;
	v285 = *(int**)v319;
	while (v285 != v284)
	{
		v286 = (__int64)v285;
		v285 = *(int**)v285;
		sub_14018B900(v286, 0);
	}
	*(_QWORD*)v284 = v284;
	*((_QWORD*)v284 + 1) = v284;
	sub_14018B900((__int64)v284, 0);
	return 1i64;
}
// 140665F52: variable 'v37' is possibly undefined
// 140665F8F: variable 'v40' is possibly undefined
// 14066607E: variable 'v50' is possibly undefined
// 14066617E: variable 'v57' is possibly undefined
// 140666190: variable 'v58' is possibly undefined
// 140666190: variable 'v59' is possibly undefined
// 1406661BC: variable 'v62' is possibly undefined
// 1406661CF: variable 'v63' is possibly undefined
// 14066621E: variable 'v67' is possibly undefined
// 14066625B: variable 'v71' is possibly undefined
// 140666289: variable 'v73' is possibly undefined
// 14066629B: variable 'v74' is possibly undefined
// 1406662C9: variable 'v76' is possibly undefined
// 140666306: variable 'v79' is possibly undefined
// 1406663BA: variable 'v85' is possibly undefined
// 14066647F: variable 'v93' is possibly undefined
// 140666496: variable 'v32' is possibly undefined
// 14066665C: variable 'v108' is possibly undefined
// 14066666E: variable 'v109' is possibly undefined
// 14066669E: variable 'v111' is possibly undefined
// 1406666B0: variable 'v112' is possibly undefined
// 1406666DD: variable 'v114' is possibly undefined
// 1406666EF: variable 'v115' is possibly undefined
// 14066670B: variable 'v116' is possibly undefined
// 140666BFE: variable 'v155' is possibly undefined
// 140666C45: variable 'v162' is possibly undefined
// 140666C70: variable 'v164' is possibly undefined
// 140666C82: variable 'v165' is possibly undefined
// 140666C82: variable 'v166' is possibly undefined
// 140666CAE: variable 'v169' is possibly undefined
// 140666CC7: variable 'v170' is possibly undefined
// 140666CD2: variable 'v173' is possibly undefined
// 140666D0F: variable 'v176' is possibly undefined
// 140666D3D: variable 'v178' is possibly undefined
// 140666D4F: variable 'v179' is possibly undefined
// 140666D78: variable 'v181' is possibly undefined
// 140666DB5: variable 'v184' is possibly undefined
// 140666E0C: variable 'v187' is possibly undefined
// 140666E4F: variable 'v190' is possibly undefined
// 140666EA6: variable 'v193' is possibly undefined
// 140666EE9: variable 'v196' is possibly undefined
// 140666F51: variable 'v199' is possibly undefined
// 140666FCA: variable 'v204' is possibly undefined
// 140666FE2: variable 'v127' is possibly undefined
// 140667048: variable 'v205' is possibly undefined
// 1406670C4: variable 'v215' is possibly undefined
// 1406670D6: variable 'v216' is possibly undefined
// 1406670D6: variable 'v217' is possibly undefined
// 140667121: variable 'v220' is possibly undefined
// 140667133: variable 'v221' is possibly undefined
// 140667189: variable 'v228' is possibly undefined
// 14066719B: variable 'v229' is possibly undefined
// 140667206: variable 'v232' is possibly undefined
// 140667218: variable 'v233' is possibly undefined
// 14066724D: variable 'v225' is possibly undefined
// 14066725F: variable 'v223' is possibly undefined
// 14066725F: variable 'v224' is possibly undefined
// 14066727B: variable 'v218' is possibly undefined
// 1406672DF: variable 'v235' is possibly undefined
// 140667437: variable 'v240' is possibly undefined
// 1406674A7: variable 'v255' is possibly undefined
// 1406674EE: variable 'v260' is possibly undefined
// 1406674FC: variable 'v261' is possibly undefined
// 140667538: variable 'v264' is possibly undefined
// 140667568: variable 'v266' is possibly undefined
// 14066757A: variable 'v267' is possibly undefined
// 1406675AB: variable 'v269' is possibly undefined
// 1406675BD: variable 'v270' is possibly undefined
// 1406675BD: variable 'v271' is possibly undefined
// 1406675D9: variable 'v272' is possibly undefined
// 140667699: variable 'v280' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A328: using guessed type wchar_t *off_140A6A328[2];
// 140A6C740: using guessed type wchar_t *off_140A6C740[2];
// 140B2E6D8: using guessed type wchar_t aEcurrencytype_0[14];
// 140B2E6F8: using guessed type wchar_t aNamount_33[8];
// 140B2E708: using guessed type wchar_t aIdreward_0[9];
// 140B2E720: using guessed type wchar_t aEtype_16[6];
// 140B2E730: using guessed type wchar_t aNamount_32[8];
// 140B2E740: using guessed type wchar_t aArrewardchoice[16];
// 140B2E760: using guessed type wchar_t aStrtradeskill_0[14];
// 140B2E780: using guessed type wchar_t aTunlockinfo[12];
// 140B2E798: using guessed type wchar_t aStrtradeskill[14];
// 140B2E7B8: using guessed type wchar_t aNxp_3[4];
// 140B2E7D8: using guessed type wchar_t aIdobject[9];
// 140B2E7F0: using guessed type wchar_t aIdreward[9];
// 140B2E808: using guessed type wchar_t aEtype_15[6];
// 140B2E828: using guessed type wchar_t aStrfactionname_1[15];
// 140B2E848: using guessed type wchar_t aIdreward_2[9];
// 140B2E860: using guessed type wchar_t aNamount_37[8];
// 140B2E870: using guessed type wchar_t aTunlockinfo_0[12];
// 140B2E888: using guessed type wchar_t aNamount_36[8];
// 140B2E898: using guessed type wchar_t aEaccountcurren_1[21];
// 140B2E8C8: using guessed type wchar_t aNamount_35[8];
// 140B2E8D8: using guessed type wchar_t aEcurrencytype_1[14];
// 140B2E8F8: using guessed type wchar_t aNamount_34[8];
// 140B2E908: using guessed type wchar_t aNxp_4[4];
// 140B2E910: using guessed type wchar_t aStrtradeskill_2[14];
// 140B2E930: using guessed type wchar_t aIdobject_0[9];
// 140B2E948: using guessed type wchar_t aStrtradeskill_1[14];
// 140B2E980: using guessed type wchar_t aTaccountitemre[19];
// 140B2E9A8: using guessed type wchar_t aIdreward_1[9];
// 140B2E9C0: using guessed type wchar_t aEtype_17[6];
// 140B2EA30: using guessed type wchar_t aArfixedrewards[15];
// 140B2EA68: using guessed type wchar_t aEtype_21[6];
// 140B2EA78: using guessed type wchar_t aNamount_38[8];
// 140B2EA88: using guessed type wchar_t aIdobject_1[9];
// 140B2EAA0: using guessed type wchar_t aStrfactionname_2[15];
// 140B2EAC0: using guessed type wchar_t aEtype_19[6];
// 140B2EAE8: using guessed type wchar_t aEtype_20[6];
// 140B2EAF8: using guessed type wchar_t aEcurrencytype_2[14];
// 140B2EB18: using guessed type wchar_t aEtype_18[6];
// 140B2EB28: using guessed type wchar_t aEaccountcurren_2[21];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A1C: using guessed type int dword_140C64A1C;
// 140C64D20: using guessed type __int64 qword_140C64D20;
// 140C64F70: using guessed type __int64 qword_140C64F70;
// 140C6546C: using guessed type int dword_140C6546C;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65910: using guessed type __int64 qword_140C65910;
// 140C65C20: using guessed type __int64 qword_140C65C20;
// 140665C80: using guessed type char var_D8[8];
// 140665C80: using guessed type char var_98[8];
// 140665C80: using guessed type char var_140[8];

