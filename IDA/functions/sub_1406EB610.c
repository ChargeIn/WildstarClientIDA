#include "../winhttp.h"

//----- (00000001406EB610) ----------------------------------------------------
__int64 __fastcall sub_1406EB610(_QWORD* a1)
{
	_QWORD* v1; // rsi
	int* v2; // rax
	__int64 v3; // rdx
	int* v4; // r14
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // ebx
	int v14; // edi
	int v15; // r13d
	int v16; // r15d
	int v17; // r12d
	int* v18; // rax
	unsigned __int64 v19; // rcx
	int v20; // esi
	__int64 v21; // r14
	unsigned int v22; // ebx
	__int64 v23; // rax
	float* v24; // rbx
	__int64 v25; // r15
	float v26; // edi
	__int64 v27; // rax
	_DWORD* v28; // rdi
	int v29; // eax
	int* v30; // rax
	int* v31; // rax
	int* v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rcx
	int* v35; // rax
	int v36; // edx
	int v37; // edx
	float v38; // edi
	__int64 v39; // rax
	_DWORD* v40; // rdi
	int* v41; // rax
	__int64 v42; // rcx
	int* v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rbx
	__int64 v46; // rax
	int v47; // r13d
	__int64 v48; // rcx
	_QWORD* v49; // rax
	__int64 v50; // rcx
	unsigned __int64* v51; // r14
	unsigned __int64 v52; // rdi
	__int64 v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rcx
	__int64 v56; // rax
	__int64* v57; // rax
	_QWORD* v58; // rax
	__int64 v59; // r11
	unsigned __int64* v60; // r14
	unsigned __int64 v61; // rdi
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // rcx
	__int64 v65; // rax
	__m128i v66; // xmm0
	__int64* v67; // rax
	__int64 v68; // rbx
	__int64 v69; // rax
	int v70; // r12d
	__int64 v71; // rcx
	_QWORD* v72; // rax
	__int64 v73; // rcx
	unsigned __int64* v74; // r14
	unsigned __int64 v75; // rdi
	__int64 v76; // rbx
	__int64 v77; // rax
	__int64 v78; // rcx
	__int64 v79; // rax
	__m128i v80; // xmm0
	__int64* v81; // rax
	_QWORD* v82; // rax
	__int64 v83; // r11
	unsigned __int64* v84; // r14
	unsigned __int64 v85; // rdi
	__int64 v86; // rbx
	__int64 v87; // rax
	__int64 v88; // rcx
	__int64 v89; // rax
	__int64* v90; // rax
	__int64 v91; // rbx
	__int64 v92; // rax
	int v93; // edi
	__int64 v94; // rbx
	__int64 v95; // rdi
	__int64 v96; // rax
	int v97; // eax
	float v98; // xmm6_4
	int v99; // r13d
	__int64 v100; // r9
	unsigned int v101; // r12d
	_DWORD* v102; // rdx
	__int64 v103; // rcx
	unsigned __int64* v104; // r15
	unsigned __int64 v105; // r14
	__int64 v106; // rdi
	__int64 v107; // rax
	__int64 v108; // rcx
	__int64 v109; // rax
	__int64* v110; // rax
	int* v111; // r8
	double v112; // rcx
	int* v113; // rax
	float v114; // xmm6_4
	__int64 v115; // r9
	_DWORD* v116; // rdx
	__int64 v117; // rcx
	unsigned __int64* v118; // r15
	unsigned __int64 v119; // r14
	__int64 v120; // rdi
	__int64 v121; // rax
	__int64 v122; // rcx
	__int64 v123; // rax
	__int64* v124; // rax
	__int64 v125; // r9
	__int64 v126; // r10
	int v127; // r11d
	_DWORD* v128; // rcx
	__int64 v129; // rax
	__int64 v130; // rax
	__int64 v131; // r10
	__int64 v132; // r9
	_DWORD* v133; // rcx
	__int64 v134; // r8
	__int64 v135; // rdx
	__int64 v136; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v139; // rcx
	unsigned __int64 v140; // rax
	__int64 v141; // rbx
	__int64 v142; // rax
	int v143; // r15d
	__int64 v144; // rbx
	__int64 v145; // rdi
	__int64 v146; // rax
	int v147; // eax
	float v148; // xmm3_4
	int v149; // edi
	_QWORD* v150; // rax
	__int64 v151; // rcx
	__int64 v152; // rdx
	int* v153; // r8
	__int64 v154; // rcx
	int* v155; // rax
	float v156; // xmm3_4
	_QWORD* v157; // rax
	__int64 v158; // rcx
	__int64 v159; // rdx
	__int64 v160; // rdx
	__int64 v161; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v164; // rcx
	unsigned __int64 v165; // rax
	__int64 v166; // rdi
	__int64 v167; // rbx
	__int64 v168; // rax
	int v169; // r14d
	__int64 v170; // rbx
	__int64 v171; // rcx
	unsigned __int64 v172; // rax
	__int64 v173; // rdi
	__int64 v174; // rax
	int v175; // eax
	__int64 v176; // rcx
	int v177; // edi
	_QWORD* v178; // rax
	__int64 v179; // rcx
	__int64 v180; // rdx
	int v181; // r11d
	__int64 v182; // rcx
	int* v183; // rax
	_QWORD* v184; // rax
	__int64 v185; // rcx
	__int64 v186; // rdx
	int v187; // r11d
	__int64 v188; // rdx
	__int64 v189; // rax
	__int64 n; // rax
	__int64 ii; // rax
	_QWORD* v192; // rax
	__int64 v193; // rdx
	__int64 v194; // rdx
	__int64 v195; // rdx
	__int64 v196; // rdx
	__int64 v198; // [rsp+20h] [rbp-E0h] BYREF
	__int64(__fastcall * *v199)(); // [rsp+28h] [rbp-D8h] BYREF
	__int64 v200; // [rsp+30h] [rbp-D0h]
	_QWORD* v201; // [rsp+38h] [rbp-C8h]
	int v202; // [rsp+40h] [rbp-C0h]
	int* v203; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v204; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v205; // [rsp+58h] [rbp-A8h] BYREF
	unsigned __int64 v206; // [rsp+60h] [rbp-A0h]
	__int64 v207; // [rsp+68h] [rbp-98h] BYREF
	__int64(__fastcall * *v208)(); // [rsp+70h] [rbp-90h] BYREF
	int v209; // [rsp+78h] [rbp-88h]
	_QWORD* v210; // [rsp+80h] [rbp-80h]
	int v211; // [rsp+88h] [rbp-78h]
	__int64 v212; // [rsp+90h] [rbp-70h] BYREF
	char v213[8]; // [rsp+98h] [rbp-68h] BYREF
	int* v214; // [rsp+A0h] [rbp-60h]
	__int64 v215; // [rsp+A8h] [rbp-58h]
	char v216[8]; // [rsp+B8h] [rbp-48h] BYREF
	int* v217; // [rsp+C0h] [rbp-40h]
	__int64 v218; // [rsp+C8h] [rbp-38h]
	char v219[8]; // [rsp+D8h] [rbp-28h] BYREF
	int* v220; // [rsp+E0h] [rbp-20h]
	__int64 v221; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v222)(); // [rsp+F8h] [rbp-8h] BYREF
	int v223; // [rsp+100h] [rbp+0h]
	_QWORD* v224; // [rsp+108h] [rbp+8h]
	int v225; // [rsp+110h] [rbp+10h]
	char v226[8]; // [rsp+118h] [rbp+18h] BYREF
	int* v227; // [rsp+120h] [rbp+20h]
	__int64 v228; // [rsp+128h] [rbp+28h]
	char v229[8]; // [rsp+138h] [rbp+38h] BYREF
	int* v230; // [rsp+140h] [rbp+40h]
	__int64 v231; // [rsp+148h] [rbp+48h]
	char v232[8]; // [rsp+158h] [rbp+58h] BYREF
	int* v233; // [rsp+160h] [rbp+60h]
	__int64 v234; // [rsp+168h] [rbp+68h]
	int* v235; // [rsp+178h] [rbp+78h] BYREF
	int* v236; // [rsp+180h] [rbp+80h] BYREF
	int* v237; // [rsp+188h] [rbp+88h] BYREF
	int* v238; // [rsp+190h] [rbp+90h] BYREF
	int v240; // [rsp+210h] [rbp+110h]
	int* v241; // [rsp+218h] [rbp+118h] BYREF
	int* v242; // [rsp+220h] [rbp+120h] BYREF
	double v243; // [rsp+228h] [rbp+128h] BYREF

	v1 = a1;
	v2 = (int*)sub_1406E8880(a1, 1u);
	v3 = v1[4];
	v224 = v1;
	v4 = v2;
	v203 = v2;
	v222 = off_140B569F0;
	v5 = *(_QWORD*)(v3 + 112);
	v225 = 1;
	if (*(_QWORD*)(v3 + 120) >= v5)
		sub_14005E2C0((__int64)v1);
	v6 = v1[2];
	v7 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	v1[2] += 16i64;
	v8 = sub_1400578C0((__int64)v1);
	v223 = v8;
	if (qword_140C65898)
		v9 = *(_QWORD*)(qword_140C65898 + 120);
	else
		v9 = 0i64;
	v198 = v9;
	if (!v9)
	{
		v10 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v8);
		v12 = v1[2];
		v13 = v223;
		*(_QWORD*)v12 = *v10;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
		v1[2] += 16i64;
		goto LABEL_247;
	}
	v14 = 0;
	v15 = 0;
	v16 = 0;
	v17 = 0;
	LODWORD(v241) = 0;
	LODWORD(v243) = 0;
	LODWORD(v242) = 0;
	v217 = sub_14018B280(40i64, 0);
	v218 = 0i64;
	*(_BYTE*)v217 = 0;
	*((_QWORD*)v217 + 1) = 0i64;
	*((_QWORD*)v217 + 2) = v217;
	*((_QWORD*)v217 + 3) = v217;
	v227 = sub_14018B280(40i64, 0);
	v228 = 0i64;
	*(_BYTE*)v227 = 0;
	*((_QWORD*)v227 + 1) = 0i64;
	*((_QWORD*)v227 + 2) = v227;
	*((_QWORD*)v227 + 3) = v227;
	v233 = sub_14018B280(40i64, 0);
	v234 = 0i64;
	*(_BYTE*)v233 = 0;
	*((_QWORD*)v233 + 1) = 0i64;
	*((_QWORD*)v233 + 2) = v233;
	*((_QWORD*)v233 + 3) = v233;
	v230 = sub_14018B280(40i64, 0);
	v231 = 0i64;
	*(_BYTE*)v230 = 0;
	*((_QWORD*)v230 + 1) = 0i64;
	*((_QWORD*)v230 + 2) = v230;
	*((_QWORD*)v230 + 3) = v230;
	v220 = sub_14018B280(40i64, 0);
	v221 = 0i64;
	*(_BYTE*)v220 = 0;
	*((_QWORD*)v220 + 1) = 0i64;
	*((_QWORD*)v220 + 2) = v220;
	*((_QWORD*)v220 + 3) = v220;
	v18 = sub_14018B280(40i64, 0);
	v19 = 0i64;
	v214 = v18;
	v215 = 0i64;
	*(_BYTE*)v18 = 0;
	*((_QWORD*)v214 + 1) = 0i64;
	v206 = 0i64;
	*((_QWORD*)v214 + 2) = v214;
	*((_QWORD*)v214 + 3) = v214;
	if (!*((_QWORD*)v4 + 308))
		goto LABEL_80;
	v20 = 0;
	do
	{
		v21 = *(_QWORD*)(*((_QWORD*)v4 + 307) + 8 * v19);
		v22 = sub_1406DFA40(v21, v9);
		if (qword_140C63840)
		{
			v23 = qword_140C63840(off_140A6C350, v22, qword_140C63858);
			goto LABEL_15;
		}
		if (!dword_140C64FC4 && (int)sub_140225FE0() >= 0)
		{
			v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65078 + 24i64))(qword_140C65078, v22);
		LABEL_15:
			if (!v23)
				goto LABEL_78;
			v24 = (float*)(v23 + 20);
			v25 = 4i64;
			while (*((_DWORD*)v24 - 4) != 1)
			{
				switch (*((_DWORD*)v24 - 4))
				{
				case 2:
					v37 = (int)v24[8];
					v17 += v37 * *(unsigned __int8*)(*(_QWORD*)v21 + 64i64);
					v14 += v37 * *(_DWORD*)(**(_QWORD**)v21 + 20i64);
					LODWORD(v241) = v14;
					break;
				case 3:
					v36 = (int)v24[8];
					v15 += v36 * *(unsigned __int8*)(*(_QWORD*)v21 + 64i64);
					v20 += v36 * *(_DWORD*)(**(_QWORD**)v21 + 20i64);
					break;
				case 4:
					v32 = v217;
					v33 = *((_QWORD*)v217 + 1);
					while (v33)
					{
						if (*(_DWORD*)(v33 + 32) < *(_DWORD*)v24)
						{
							v33 = *(_QWORD*)(v33 + 24);
						}
						else
						{
							v32 = (int*)v33;
							v33 = *(_QWORD*)(v33 + 16);
						}
					}
					if (v32 == v217 || *(_DWORD*)v24 < (unsigned int)v32[8])
					{
						v205 = *(unsigned int*)v24;
						v242 = v32;
						sub_140032B30((__int64)v216, &v236, (__int64*)&v242, &v205);
						v32 = v236;
					}
					v32[9] += *(unsigned __int8*)(*(_QWORD*)v21 + 64i64);
					v34 = *((_QWORD*)v227 + 1);
					v35 = v227;
					while (v34)
					{
						if (*(_DWORD*)(v34 + 32) < *(_DWORD*)v24)
						{
							v34 = *(_QWORD*)(v34 + 24);
						}
						else
						{
							v35 = (int*)v34;
							v34 = *(_QWORD*)(v34 + 16);
						}
					}
					if (v35 == v227 || *(_DWORD*)v24 < (unsigned int)v35[8])
					{
						v204 = *(unsigned int*)v24;
						v242 = v35;
						sub_140032B30((__int64)v226, &v238, (__int64*)&v242, &v204);
						v35 = v238;
					}
					v35[9] += *(_DWORD*)(**(_QWORD**)v21 + 20i64);
					break;
				case 5:
					v26 = *v24;
					if (qword_140C63840)
					{
						v27 = qword_140C63840(off_140A6DEE0, LODWORD(v26), qword_140C63858);
					LABEL_27:
						v28 = (_DWORD*)v27;
						if (v27)
						{
							v29 = *(_DWORD*)(v27 + 36);
							if (((v29 & 0x20) != 0 || (v29 & 0x40) != 0) && (v29 & 4) != 0 && (v29 & 8) == 0)
							{
								v30 = sub_1403D2690((__int64)v232, v28);
								*(float*)v30 = (float)((float)*(unsigned __int8*)(*(_QWORD*)v21 + 64i64) * v24[8]) + *(float*)v30;
								v31 = sub_1403D2690((__int64)v229, v28);
								*(float*)v31 = (float)((float)*(int*)(**(_QWORD**)v21 + 20i64) * v24[8]) + *(float*)v31;
							}
						}
					}
					else if (!dword_140C64070 && (int)sub_140247760() >= 0)
					{
						v27 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 24i64))(
							qword_140C64930,
							LODWORD(v26));
						goto LABEL_27;
					}
				LABEL_75:
					v14 = (int)v241;
					break;
				}
				++v24;
				if (!--v25)
				{
					LODWORD(v242) = v20;
					LODWORD(v243) = v15;
					goto LABEL_78;
				}
			}
			v38 = *v24;
			if (qword_140C63840)
			{
				v39 = qword_140C63840(off_140A6CAC0, LODWORD(v38), qword_140C63858);
			}
			else
			{
				if (dword_140C651A0 || (int)sub_14022F060() < 0)
					goto LABEL_75;
				v39 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C651A8 + 24i64))(
					qword_140C651A8,
					LODWORD(v38));
			}
			v40 = (_DWORD*)v39;
			if (v39)
			{
				v41 = v220;
				v42 = *((_QWORD*)v220 + 1);
				while (v42)
				{
					if (*(_DWORD*)(v42 + 32) < *v40)
					{
						v42 = *(_QWORD*)(v42 + 24);
					}
					else
					{
						v41 = (int*)v42;
						v42 = *(_QWORD*)(v42 + 16);
					}
				}
				if (v41 == v220 || *v40 < (unsigned int)v41[8])
				{
					v207 = (unsigned int)*v40;
					v242 = v41;
					sub_140032B30((__int64)v219, &v237, (__int64*)&v242, &v207);
					v41 = v237;
				}
				*((float*)v41 + 9) = (float)((float)*(unsigned __int8*)(*(_QWORD*)v21 + 64i64) * v24[8])
					+ *((float*)v41 + 9);
				v43 = v214;
				v44 = *((_QWORD*)v214 + 1);
				while (v44)
				{
					if (*(_DWORD*)(v44 + 32) < *v40)
					{
						v44 = *(_QWORD*)(v44 + 24);
					}
					else
					{
						v43 = (int*)v44;
						v44 = *(_QWORD*)(v44 + 16);
					}
				}
				if (v43 == v214 || *v40 < (unsigned int)v43[8])
				{
					v212 = (unsigned int)*v40;
					v242 = v43;
					sub_140032B30((__int64)v213, &v235, (__int64*)&v242, &v212);
					v43 = v235;
				}
				*((float*)v43 + 9) = (float)((float)*(int*)(**(_QWORD**)v21 + 20i64) * v24[8]) + *((float*)v43 + 9);
			}
			goto LABEL_75;
		}
	LABEL_78:
		v4 = v203;
		v9 = v198;
		v19 = v206 + 1;
		v206 = v19;
	} while (v19 < *((_QWORD*)v203 + 308));
	v1 = a1;
	v16 = (int)v242;
LABEL_80:
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v45 = v1[2];
	v46 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	*(_QWORD*)v45 = v46;
	v1[2] += 16i64;
	v47 = sub_1400578C0((__int64)v1);
	v48 = *(_QWORD*)(v1[4] + 160i64);
	LODWORD(v242) = v47;
	v49 = sub_14005C3C0(v48, v47);
	v50 = v1[2];
	*(_QWORD*)v50 = *v49;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
	v1[2] += 16i64;
	v51 = (unsigned __int64*)sub_14018F0E0(&v199, L"nCurrent")[1];
	if (v51)
	{
		v52 = -1i64;
		do
			++v52;
		while (*((_BYTE*)v51 + v52));
		if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
			sub_14005E2C0((__int64)v1);
		v53 = v1[2];
		v54 = sub_140062650((__int64)v1, v51, v52);
		*(_DWORD*)(v53 + 8) = 4;
		*(_QWORD*)v53 = v54;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
	}
	v55 = v200;
	v1[2] += 16i64;
	if (v55)
		sub_14018B900(v55, 0);
	v56 = v1[2];
	*(_DWORD*)(v56 + 8) = 3;
	*(double*)v56 = (double)v17;
	v1[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v57, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	v58 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v47);
	*(_QWORD*)v59 = *v58;
	*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
	v1[2] += 16i64;
	v60 = (unsigned __int64*)sub_14018F0E0(&v199, L"nMax")[1];
	if (v60)
	{
		v61 = -1i64;
		do
			++v61;
		while (*((_BYTE*)v60 + v61));
		if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
			sub_14005E2C0((__int64)v1);
		v62 = v1[2];
		v63 = sub_140062650((__int64)v1, v60, v61);
		*(_DWORD*)(v62 + 8) = 4;
		*(_QWORD*)v62 = v63;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
	}
	v64 = v200;
	v1[2] += 16i64;
	if (v64)
		sub_14018B900(v64, 0);
	v65 = v1[2];
	v66 = _mm_cvtsi32_si128((unsigned int)v241);
	*(_DWORD*)(v65 + 8) = 3;
	*(_QWORD*)v65 = *(_OWORD*)&_mm_cvtepi32_pd(v66);
	v1[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v67, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	sub_1400FB3A0((__int64)&v222, 2i64, v47);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v68 = v1[2];
	v69 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v68 + 8) = 5;
	*(_QWORD*)v68 = v69;
	v1[2] += 16i64;
	v70 = sub_1400578C0((__int64)v1);
	v71 = *(_QWORD*)(v1[4] + 160i64);
	LODWORD(v241) = v70;
	v72 = sub_14005C3C0(v71, v70);
	v73 = v1[2];
	*(_QWORD*)v73 = *v72;
	*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
	v1[2] += 16i64;
	v74 = (unsigned __int64*)sub_14018F0E0(&v199, L"nCurrent")[1];
	if (v74)
	{
		v75 = -1i64;
		do
			++v75;
		while (*((_BYTE*)v74 + v75));
		if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
			sub_14005E2C0((__int64)v1);
		v76 = v1[2];
		v77 = sub_140062650((__int64)v1, v74, v75);
		*(_DWORD*)(v76 + 8) = 4;
		*(_QWORD*)v76 = v77;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
	}
	v78 = v200;
	v1[2] += 16i64;
	if (v78)
		sub_14018B900(v78, 0);
	v79 = v1[2];
	v80 = _mm_cvtsi32_si128(LODWORD(v243));
	*(_DWORD*)(v79 + 8) = 3;
	*(_QWORD*)v79 = *(_OWORD*)&_mm_cvtepi32_pd(v80);
	v1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v81, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	v82 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v70);
	*(_QWORD*)v83 = *v82;
	*(_DWORD*)(v83 + 8) = *((_DWORD*)v82 + 2);
	v1[2] += 16i64;
	v84 = (unsigned __int64*)sub_14018F0E0(&v199, L"nMax")[1];
	if (v84)
	{
		v85 = -1i64;
		do
			++v85;
		while (*((_BYTE*)v84 + v85));
		if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
			sub_14005E2C0((__int64)v1);
		v86 = v1[2];
		v87 = sub_140062650((__int64)v1, v84, v85);
		*(_DWORD*)(v86 + 8) = 4;
		*(_QWORD*)v86 = v87;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
	}
	v88 = v200;
	v1[2] += 16i64;
	if (v88)
		sub_14018B900(v88, 0);
	v89 = v1[2];
	*(_DWORD*)(v89 + 8) = 3;
	*(double*)v89 = (double)v16;
	v1[2] += 16i64;
	v90 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v90, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	sub_1400FB3A0((__int64)&v222, 3i64, v70);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v91 = v1[2];
	v92 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v91 + 8) = 5;
	*(_QWORD*)v91 = v92;
	v1[2] += 16i64;
	v93 = sub_1400578C0((__int64)v1);
	v240 = v93;
	v94 = *((_QWORD*)v233 + 2);
	if ((int*)v94 != v233)
	{
		do
		{
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v95 = v1[2];
			v96 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v95 + 8) = 5;
			*(_QWORD*)v95 = v96;
			v1[2] += 16i64;
			v97 = sub_1400578C0((__int64)v1);
			v98 = *(float*)(v94 + 36);
			v99 = v97;
			v100 = *(_QWORD*)(v1[4] + 160i64);
			v101 = v97 - 1;
			if ((unsigned int)(v97 - 1) >= *(_DWORD*)(v100 + 56))
			{
				v243 = (double)v97;
				if ((double)v97 == 0.0)
					v102 = *(_DWORD**)(v100 + 32);
				else
					v102 = (_DWORD*)(*(_QWORD*)(v100 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v243) + HIDWORD(v243)) % (((1i64 << *(_BYTE*)(v100 + 11)) - 1) | 1)));
				while (v102[6] != 3 || (double)v97 != *((double*)v102 + 2))
				{
					v102 = (_DWORD*)*((_QWORD*)v102 + 4);
					if (!v102)
					{
						v102 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v102 = (_DWORD*)(*(_QWORD*)(v100 + 24) + 16i64 * (v97 - 1));
			}
			v103 = v1[2];
			*(_QWORD*)v103 = *(_QWORD*)v102;
			*(_DWORD*)(v103 + 8) = v102[2];
			v1[2] += 16i64;
			v104 = (unsigned __int64*)sub_14018F0E0(&v199, L"fCurrent")[1];
			if (v104)
			{
				v105 = -1i64;
				do
					++v105;
				while (*((_BYTE*)v104 + v105));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v106 = v1[2];
				v107 = sub_140062650((__int64)v1, v104, v105);
				*(_DWORD*)(v106 + 8) = 4;
				*(_QWORD*)v106 = v107;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
			}
			v108 = v200;
			v1[2] += 16i64;
			if (v108)
				sub_14018B900(v108, 0);
			v109 = v1[2];
			*(_DWORD*)(v109 + 8) = 3;
			*(double*)v109 = v98;
			v1[2] += 16i64;
			v110 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v110, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v111 = v230;
			v1[2] -= 48i64;
			v112 = *((double*)v111 + 1);
			v113 = v111;
			while (v112 != 0.0)
			{
				if (*(_DWORD*)(*(_QWORD*)&v112 + 32i64) < *(_DWORD*)(v94 + 32))
				{
					v112 = *(double*)(*(_QWORD*)&v112 + 24i64);
				}
				else
				{
					*(double*)&v113 = v112;
					v112 = *(double*)(*(_QWORD*)&v112 + 16i64);
				}
			}
			if (v113 == v111 || *(_DWORD*)(v94 + 32) < (unsigned int)v113[8])
			{
				v198 = *(unsigned int*)(v94 + 32);
				v243 = *(double*)&v113;
				sub_140032B30((__int64)v229, &v203, (__int64*)&v243, &v198);
				v113 = v203;
			}
			v114 = *((float*)v113 + 9);
			v115 = *(_QWORD*)(v1[4] + 160i64);
			if (v101 >= *(_DWORD*)(v115 + 56))
			{
				v243 = (double)v99;
				if ((double)v99 == 0.0)
					v116 = *(_DWORD**)(v115 + 32);
				else
					v116 = (_DWORD*)(*(_QWORD*)(v115 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v243) + HIDWORD(v243)) % (((1i64 << *(_BYTE*)(v115 + 11)) - 1) | 1)));
				while (v116[6] != 3 || (double)v99 != *((double*)v116 + 2))
				{
					v116 = (_DWORD*)*((_QWORD*)v116 + 4);
					if (!v116)
					{
						v116 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v116 = (_DWORD*)(*(_QWORD*)(v115 + 24) + 16i64 * (v99 - 1));
			}
			v117 = v1[2];
			*(_QWORD*)v117 = *(_QWORD*)v116;
			*(_DWORD*)(v117 + 8) = v116[2];
			v1[2] += 16i64;
			v118 = (unsigned __int64*)sub_14018F0E0(&v199, L"fMax")[1];
			if (v118)
			{
				v119 = -1i64;
				do
					++v119;
				while (*((_BYTE*)v118 + v119));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v120 = v1[2];
				v121 = sub_140062650((__int64)v1, v118, v119);
				*(_DWORD*)(v120 + 8) = 4;
				*(_QWORD*)v120 = v121;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
			}
			v122 = v200;
			v1[2] += 16i64;
			if (v122)
				sub_14018B900(v122, 0);
			v123 = v1[2];
			*(_DWORD*)(v123 + 8) = 3;
			*(double*)v123 = v114;
			v1[2] += 16i64;
			v124 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v124, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v125 = *(_QWORD*)(v1[4] + 160i64);
			v93 = v240;
			v126 = v1[2];
			v127 = *(_DWORD*)(v94 + 32);
			if ((unsigned int)(v240 - 1) >= *(_DWORD*)(v125 + 56))
			{
				v243 = (double)v240;
				if ((double)v240 == 0.0)
					v128 = *(_DWORD**)(v125 + 32);
				else
					v128 = (_DWORD*)(*(_QWORD*)(v125 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v243) + HIDWORD(v243)) % (((1i64 << *(_BYTE*)(v125 + 11)) - 1) | 1)));
				while (v128[6] != 3 || (double)v240 != *((double*)v128 + 2))
				{
					v128 = (_DWORD*)*((_QWORD*)v128 + 4);
					if (!v128)
					{
						v128 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v128 = (_DWORD*)(*(_QWORD*)(v125 + 24) + 16i64 * (v240 - 1));
			}
			*(_QWORD*)v126 = *(_QWORD*)v128;
			*(_DWORD*)(v126 + 8) = v128[2];
			v1[2] += 16i64;
			v129 = v1[2];
			*(_DWORD*)(v129 + 8) = 3;
			*(double*)v129 = (double)v127;
			v130 = v1[4];
			v131 = v1[2] + 16i64;
			v1[2] = v131;
			v132 = *(_QWORD*)(v130 + 160);
			if (v101 >= *(_DWORD*)(v132 + 56))
			{
				v243 = (double)v99;
				if ((double)v99 == 0.0)
					v133 = *(_DWORD**)(v132 + 32);
				else
					v133 = (_DWORD*)(*(_QWORD*)(v132 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v243) + HIDWORD(v243)) % (((1i64 << *(_BYTE*)(v132 + 11)) - 1) | 1)));
				while (v133[6] != 3 || (double)v99 != *((double*)v133 + 2))
				{
					v133 = (_DWORD*)*((_QWORD*)v133 + 4);
					if (!v133)
					{
						v133 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v133 = (_DWORD*)(*(_QWORD*)(v132 + 24) + 16i64 * (v99 - 1));
			}
			*(_QWORD*)v131 = *(_QWORD*)v133;
			*(_DWORD*)(v131 + 8) = v133[2];
			v134 = v1[2] + 16i64;
			v1[2] = v134;
			sub_14005EA50((__int64)v1, (__int64*)(v134 - 48), (int*)(v134 - 32), (unsigned int*)(v134 - 16));
			v1[2] -= 48i64;
			sub_1400579E0((__int64)v1, v135, v99);
			v136 = *(_QWORD*)(v94 + 24);
			if (v136)
			{
				v94 = *(_QWORD*)(v94 + 24);
				for (i = *(_QWORD*)(v136 + 16); i; i = *(_QWORD*)(i + 16))
					v94 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v94 + 8); v94 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v94 = j;
				if (*(_QWORD*)(v94 + 24) != j)
					v94 = j;
			}
		} while ((int*)v94 != v233);
		v70 = (int)v241;
		v47 = (int)v242;
	}
	sub_1400FB3A0((__int64)&v222, 5i64, v93);
	v139 = v1[4];
	v140 = *(_QWORD*)(v139 + 112);
	v208 = off_140B569F0;
	v210 = v1;
	v211 = 1;
	if (*(_QWORD*)(v139 + 120) >= v140)
		sub_14005E2C0((__int64)v1);
	v141 = v1[2];
	v142 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v141 + 8) = 5;
	*(_QWORD*)v141 = v142;
	v1[2] += 16i64;
	v143 = sub_1400578C0((__int64)v1);
	v209 = v143;
	v144 = *((_QWORD*)v220 + 2);
	while ((int*)v144 != v220)
	{
		if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
			sub_14005E2C0((__int64)v1);
		v145 = v1[2];
		v146 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v145 + 8) = 5;
		*(_QWORD*)v145 = v146;
		v1[2] += 16i64;
		v147 = sub_1400578C0((__int64)v1);
		v148 = *(float*)(v144 + 36);
		v149 = v147;
		v150 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v147);
		v151 = v1[2];
		*(_QWORD*)v151 = *v150;
		*(_DWORD*)(v151 + 8) = *((_DWORD*)v150 + 2);
		v1[2] += 16i64;
		sub_1400F07B0((__int64)v1, v152, L"fCurrent", v148);
		v153 = v214;
		v1[2] -= 16i64;
		v154 = *((_QWORD*)v153 + 1);
		v155 = v153;
		while (v154)
		{
			if (*(_DWORD*)(v154 + 32) < *(_DWORD*)(v144 + 32))
			{
				v154 = *(_QWORD*)(v154 + 24);
			}
			else
			{
				v155 = (int*)v154;
				v154 = *(_QWORD*)(v154 + 16);
			}
		}
		if (v155 == v153 || *(_DWORD*)(v144 + 32) < (unsigned int)v155[8])
		{
			v241 = (int*)*(unsigned int*)(v144 + 32);
			v242 = v155;
			sub_140032B30((__int64)v213, (int**)&v243, (__int64*)&v242, &v241);
			v155 = *(int**)&v243;
		}
		v156 = *((float*)v155 + 9);
		v157 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v149);
		v158 = v1[2];
		*(_QWORD*)v158 = *v157;
		*(_DWORD*)(v158 + 8) = *((_DWORD*)v157 + 2);
		v1[2] += 16i64;
		sub_1400F07B0((__int64)v1, v159, L"fMax", v156);
		v1[2] -= 16i64;
		sub_1400FB3A0((__int64)&v208, *(unsigned int*)(v144 + 32), v149);
		sub_1400579E0((__int64)v1, v160, v149);
		v161 = *(_QWORD*)(v144 + 24);
		if (v161)
		{
			v144 = *(_QWORD*)(v144 + 24);
			for (k = *(_QWORD*)(v161 + 16); k; k = *(_QWORD*)(k + 16))
				v144 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v144 + 8); v144 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v144 = m;
			if (*(_QWORD*)(v144 + 24) != m)
				v144 = m;
		}
	}
	sub_1400FB3A0((__int64)&v222, 1i64, v143);
	v164 = v1[4];
	v208 = off_140B569F0;
	v165 = *(_QWORD*)(v164 + 112);
	v166 = (__int64)v1;
	v210 = v1;
	v211 = 1;
	if (*(_QWORD*)(v164 + 120) >= v165)
		sub_14005E2C0((__int64)v1);
	v167 = v1[2];
	v168 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v167 + 8) = 5;
	*(_QWORD*)v167 = v168;
	v1[2] += 16i64;
	v169 = sub_1400578C0((__int64)v1);
	v209 = v169;
	v170 = *((_QWORD*)v217 + 2);
	if ((int*)v170 != v217)
	{
		do
		{
			v171 = v1[4];
			v199 = off_140B569F0;
			v201 = v1;
			v172 = *(_QWORD*)(v171 + 112);
			v202 = 1;
			if (*(_QWORD*)(v171 + 120) >= v172)
				sub_14005E2C0((__int64)v1);
			v173 = v1[2];
			v174 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v173 + 8) = 5;
			*(_QWORD*)v173 = v174;
			v1[2] += 16i64;
			v175 = sub_1400578C0((__int64)v1);
			v176 = *(_QWORD*)(v1[4] + 160i64);
			v177 = v175;
			LODWORD(v200) = v175;
			v178 = sub_14005C3C0(v176, v175);
			v179 = v1[2];
			*(_QWORD*)v179 = *v178;
			*(_DWORD*)(v179 + 8) = *((_DWORD*)v178 + 2);
			v1[2] += 16i64;
			sub_1400F06F0((__int64)v1, v180, L"nCurrent", v181);
			v1[2] -= 16i64;
			v182 = *((_QWORD*)v227 + 1);
			v183 = v227;
			while (v182)
			{
				if (*(_DWORD*)(v182 + 32) < *(_DWORD*)(v170 + 32))
				{
					v182 = *(_QWORD*)(v182 + 24);
				}
				else
				{
					v183 = (int*)v182;
					v182 = *(_QWORD*)(v182 + 16);
				}
			}
			if (v183 == v227 || *(_DWORD*)(v170 + 32) < (unsigned int)v183[8])
			{
				v242 = (int*)*(unsigned int*)(v170 + 32);
				v241 = v183;
				sub_140032B30((__int64)v226, (int**)&v243, (__int64*)&v241, &v242);
			}
			v184 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v177);
			v185 = v1[2];
			*(_QWORD*)v185 = *v184;
			*(_DWORD*)(v185 + 8) = *((_DWORD*)v184 + 2);
			v1[2] += 16i64;
			sub_1400F06F0((__int64)v1, v186, L"nMax", v187);
			v1[2] -= 16i64;
			LODWORD(v241) = *(_DWORD*)(v170 + 32);
			if ((unsigned int)sub_1403D3470(v1, (int*)&v241))
			{
				sub_1400FB540((__int64)&v199);
				v1[2] -= 16i64;
			}
			sub_1400FB1D0((__int64)&v208);
			sub_1400579E0((__int64)v1, v188, v177);
			v189 = *(_QWORD*)(v170 + 24);
			if (v189)
			{
				v170 = *(_QWORD*)(v170 + 24);
				for (n = *(_QWORD*)(v189 + 16); n; n = *(_QWORD*)(n + 16))
					v170 = n;
			}
			else
			{
				for (ii = *(_QWORD*)(v170 + 8); v170 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v170 = ii;
				if (*(_QWORD*)(v170 + 24) != ii)
					v170 = ii;
			}
		} while ((int*)v170 != v217);
		v166 = (__int64)v210;
		v169 = v209;
	}
	sub_1400FB3A0((__int64)&v222, 4i64, v169);
	v13 = v223;
	v192 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v223);
	v193 = v1[2];
	*(_QWORD*)v193 = *v192;
	*(_DWORD*)(v193 + 8) = *((_DWORD*)v192 + 2);
	v1[2] += 16i64;
	if (v166)
		sub_1400579E0(v166, v193, v169);
	sub_1400579E0((__int64)v1, v193, v143);
	sub_1400579E0((__int64)v1, v194, v240);
	sub_1400579E0((__int64)v1, v195, v70);
	sub_1400579E0((__int64)v1, v196, v47);
	sub_140008410((__int64)v213);
	sub_14018B900((__int64)v214, 0);
	sub_140008410((__int64)v219);
	sub_14018B900((__int64)v220, 0);
	sub_140008410((__int64)v229);
	sub_14018B900((__int64)v230, 0);
	sub_140008410((__int64)v232);
	sub_14018B900((__int64)v233, 0);
	sub_140008410((__int64)v226);
	sub_14018B900((__int64)v227, 0);
	sub_140008410((__int64)v216);
	sub_14018B900((__int64)v217, 0);
LABEL_247:
	sub_1400579E0((__int64)v1, v11, v13);
	return 1i64;
}
// 1406EBE21: variable 'v59' is possibly undefined
// 1406EC05A: variable 'v83' is possibly undefined
// 1406EC6D5: variable 'v135' is possibly undefined
// 1406EC84A: variable 'v152' is possibly undefined
// 1406EC904: variable 'v159' is possibly undefined
// 1406EC924: variable 'v160' is possibly undefined
// 1406ECA92: variable 'v180' is possibly undefined
// 1406ECA92: variable 'v181' is possibly undefined
// 1406ECB4F: variable 'v186' is possibly undefined
// 1406ECB4F: variable 'v187' is possibly undefined
// 1406ECB9D: variable 'v188' is possibly undefined
// 1406ECC5D: variable 'v193' is possibly undefined
// 1406ECC6C: variable 'v194' is possibly undefined
// 1406ECC77: variable 'v195' is possibly undefined
// 1406ECC82: variable 'v196' is possibly undefined
// 1406ECD25: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6C350: using guessed type wchar_t *off_140A6C350[2];
// 140A6CAC0: using guessed type wchar_t *off_140A6CAC0[2];
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140B3F580: using guessed type wchar_t aNcurrent_0[9];
// 140B3F730: using guessed type wchar_t aNmax_2[5];
// 140B3F740: using guessed type wchar_t aNcurrent_2[9];
// 140B3F758: using guessed type wchar_t aFmax_0[5];
// 140B3F768: using guessed type wchar_t aFcurrent_0[9];
// 140B3F780: using guessed type wchar_t aFmax[5];
// 140B3F790: using guessed type wchar_t aFcurrent[9];
// 140B3F7A8: using guessed type wchar_t aNmax_1[5];
// 140B3F7B8: using guessed type wchar_t aNcurrent_1[9];
// 140B3F7D0: using guessed type wchar_t aNmax_0[5];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140C64FC4: using guessed type int dword_140C64FC4;
// 140C65078: using guessed type __int64 qword_140C65078;
// 140C651A0: using guessed type int dword_140C651A0;
// 140C651A8: using guessed type __int64 qword_140C651A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406EB610: using guessed type char var_A8[8];
// 1406EB610: using guessed type char var_C8[8];
// 1406EB610: using guessed type char var_148[8];
// 1406EB610: using guessed type char var_E8[8];
// 1406EB610: using guessed type char var_128[8];
// 1406EB610: using guessed type char var_168[8];

