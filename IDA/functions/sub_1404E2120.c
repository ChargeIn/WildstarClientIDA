#include "../winhttp.h"

//----- (00000001404E2120) ----------------------------------------------------
__int64 __fastcall sub_1404E2120(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r11d
	int v7; // r10d
	unsigned int v8; // ecx
	unsigned __int64 v9; // r8
	__int64 v10; // r9
	__int64 v11; // rdx
	__int64 v12; // rax
	unsigned __int64 v13; // r15
	unsigned __int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // rcx
	__int64 v21; // r9
	_DWORD* v22; // rdx
	__int64 v23; // rcx
	unsigned __int64* v24; // r14
	unsigned __int64 v25; // rsi
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rcx
	__int64* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // r12
	unsigned __int64 v32; // rax
	int v33; // r13d
	unsigned __int16* v34; // r14
	__int64 v35; // rsi
	__int64 v36; // rbx
	__int64 v37; // rax
	int v38; // eax
	unsigned __int64 v39; // rdx
	int v40; // ebx
	__int64 v41; // rcx
	unsigned __int64 v42; // rax
	unsigned __int64 v43; // r15
	__int64 v44; // rax
	_QWORD* v45; // rax
	_QWORD* v46; // rsi
	unsigned int v47; // ebx
	__int64 v48; // rax
	__int64 v49; // r12
	unsigned __int64 v50; // rax
	int v51; // edx
	unsigned __int64 v52; // rcx
	unsigned __int64 v53; // rcx
	__int64 v54; // rcx
	unsigned __int64 v55; // rax
	__int64 v56; // rbx
	__int64 v57; // rax
	int v58; // eax
	unsigned int v59; // edx
	int v60; // r14d
	int* v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rsi
	_QWORD* v64; // rax
	__int64 v65; // rdx
	unsigned __int16* v66; // r10
	_QWORD* v67; // rax
	__int64 v68; // r11
	__int64 v69; // rdx
	unsigned __int16* v70; // r10
	__int64 v71; // rbx
	__int64 v72; // rax
	__int64 v73; // rcx
	_QWORD* v74; // rax
	__int64 v75; // rdx
	unsigned __int16* v76; // r10
	_QWORD* v77; // rax
	__int64 v78; // r10
	__int64 v79; // rdx
	unsigned __int16* v80; // r11
	__int64 v81; // rdx
	int v82; // r15d
	_QWORD* v83; // rax
	__int64 v84; // rdx
	unsigned __int64* v85; // r14
	unsigned __int64 v86; // rsi
	__int64 v87; // rbx
	__int64 v88; // rax
	_DWORD* v89; // rcx
	__int64* v90; // rax
	unsigned __int64 v91; // rcx
	__int64 v92; // rax
	unsigned __int64 v93; // rdx
	_DWORD* v94; // rax
	unsigned int v95; // ebx
	__int64 v96; // rax
	_DWORD* v97; // rsi
	__int64 v98; // rbx
	__int64 v99; // rax
	int v100; // ebx
	__int64 v101; // rcx
	_QWORD* v102; // rax
	__int64 v103; // rdx
	unsigned __int16* v104; // r10
	__int64 v105; // rcx
	_QWORD* v106; // rax
	__int64 v107; // rdx
	unsigned __int16* v108; // r10
	_QWORD* v109; // rax
	__int64 v110; // r10
	__int64 v111; // rdx
	int v112; // r11d
	_QWORD* v113; // rax
	__int64 v114; // r11
	__int64 v115; // rdx
	int v116; // r10d
	_QWORD* v117; // rax
	__int64 v118; // r11
	__int64 v119; // rdx
	unsigned __int16* v120; // r10
	unsigned __int64 v121; // rdx
	__int64 v122; // rcx
	unsigned __int64 v123; // rax
	__int64 v124; // r9
	_DWORD* v125; // rcx
	unsigned int v126; // ecx
	unsigned int v127; // eax
	__int64 v128; // rbx
	__int64 v129; // rax
	int v130; // eax
	int v131; // r13d
	int v132; // r15d
	_QWORD* v133; // rax
	__int64 v134; // rdx
	unsigned __int64* v135; // r14
	unsigned __int64 v136; // rsi
	__int64 v137; // rbx
	__int64 v138; // rax
	__int64 v139; // rax
	__int64* v140; // rax
	_QWORD* v141; // rax
	__int64 v142; // r10
	unsigned __int64* v143; // r14
	unsigned __int64 v144; // rsi
	__int64 v145; // rbx
	__int64 v146; // rax
	__int64 v147; // rcx
	_QWORD* v148; // rax
	__int64 v149; // rdx
	__int64 v150; // rdx
	__int64 v151; // rcx
	unsigned __int64 v152; // rax
	__int64 v153; // rbx
	__int64 v154; // rax
	int v155; // eax
	int v156; // r13d
	__int64 v157; // rcx
	int v158; // r15d
	_QWORD* v159; // rax
	__int64 v160; // rdx
	unsigned __int64* v161; // r14
	unsigned __int64 v162; // rsi
	__int64 v163; // rbx
	__int64 v164; // rax
	__int64 v165; // rax
	__int64* v166; // rax
	__int64 v167; // rcx
	__int64 v168; // rbx
	unsigned __int64 v169; // rax
	__int64 v170; // rax
	__int64 v171; // r8
	_QWORD* v172; // rax
	__int64 v173; // rcx
	__int64 v174; // rcx
	__int64 v175; // rbx
	__int64 v176; // rax
	__int64 v177; // r9
	__int64 v178; // rdx
	unsigned __int64 v179; // r8
	__int64 v180; // rax
	__int64 v181; // rdx
	_QWORD* v182; // rcx
	int v183; // ebx
	_QWORD* v184; // rax
	__int64 v185; // rdx
	int v186; // r10d
	__int64 v187; // rdx
	int v188; // r15d
	_QWORD* v189; // rax
	__int64 v190; // rdx
	_QWORD* v191; // rax
	__int64 v192; // r10
	__int64 v193; // rdx
	_QWORD* v194; // rax
	__int64 v195; // r10
	__int64 v196; // rdx
	_QWORD* v197; // rax
	__int64 v198; // r10
	__int64 v199; // rdx
	_QWORD* v200; // rax
	__int64 v201; // rdx
	int v202; // r10d
	__int64 v203; // rdx
	_QWORD* v204; // rax
	__int64 v205; // r8
	__int64 v206; // rdx
	int v207; // r11d
	unsigned __int16* v209; // [rsp+20h] [rbp-E0h]
	unsigned __int64 v210; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *v211)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v212; // [rsp+38h] [rbp-C8h]
	_QWORD* v213; // [rsp+40h] [rbp-C0h]
	int v214; // [rsp+48h] [rbp-B8h]
	unsigned __int64 v215; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v216; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v217)(); // [rsp+60h] [rbp-A0h] BYREF
	int v218; // [rsp+68h] [rbp-98h]
	_QWORD* v219; // [rsp+70h] [rbp-90h]
	int v220; // [rsp+78h] [rbp-88h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+80h] [rbp-80h] BYREF
	__int64 v222; // [rsp+88h] [rbp-78h] BYREF
	__int64 v223; // [rsp+90h] [rbp-70h]
	__int64 v224; // [rsp+98h] [rbp-68h]
	unsigned __int64* v225; // [rsp+A8h] [rbp-58h]
	__int64 v226; // [rsp+B0h] [rbp-50h]
	__int64 v227; // [rsp+B8h] [rbp-48h]
	__int64 v228; // [rsp+C0h] [rbp-40h]
	unsigned __int64 v229; // [rsp+C8h] [rbp-38h]
	__int64(__fastcall * *v230)(); // [rsp+D0h] [rbp-30h] BYREF
	int v231; // [rsp+D8h] [rbp-28h]
	_QWORD* v232; // [rsp+E0h] [rbp-20h]
	int v233; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v234)(); // [rsp+F0h] [rbp-10h] BYREF
	int v235; // [rsp+F8h] [rbp-8h]
	_QWORD* v236; // [rsp+100h] [rbp+0h]
	int v237; // [rsp+108h] [rbp+8h]
	__int64(__fastcall * *v238)(); // [rsp+110h] [rbp+10h] BYREF
	int v239; // [rsp+118h] [rbp+18h]
	_QWORD* v240; // [rsp+120h] [rbp+20h]
	int v241; // [rsp+128h] [rbp+28h]
	__int64 v242; // [rsp+130h] [rbp+30h] BYREF
	int v243; // [rsp+138h] [rbp+38h]
	double v244; // [rsp+1A0h] [rbp+A0h]
	int v245; // [rsp+1A0h] [rbp+A0h]
	int v246; // [rsp+1A8h] [rbp+A8h]
	int v247; // [rsp+1B0h] [rbp+B0h]
	unsigned __int64 v248; // [rsp+1B8h] [rbp+B8h]

	v1 = (_QWORD*)a1;
	v236 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v234 = off_140B569F0;
	v237 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v235 = v6;
	v7 = 0;
	if (qword_140C65898)
	{
		v8 = 0;
		v9 = *(_QWORD*)(qword_140C63650 + 768);
		if (v9)
		{
			v10 = *(_QWORD*)(qword_140C63650 + 760);
			v11 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v10 + 8 * v11) + 400i64) != v1)
			{
				v11 = ++v8;
				if (v8 >= v9)
					goto LABEL_8;
			}
			v12 = *(_QWORD*)(v10 + 8i64 * v8);
		}
		else
		{
		LABEL_8:
			v12 = 0i64;
		}
		if (v12 + 384 == *(_QWORD*)(qword_140C65898 + 29504) + 384i64)
			v7 = 1;
	}
	LODWORD(v13) = 0;
	v248 = 0i64;
	v14 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 64i64);
	v226 = v7;
	v229 = v14;
	if (v14)
	{
		while (1)
		{
			v15 = v1[4];
			v238 = off_140B569F0;
			v240 = v1;
			v16 = *(_QWORD*)(v15 + 112);
			v241 = 1;
			if (*(_QWORD*)(v15 + 120) >= v16)
				sub_14005E2C0((__int64)v1);
			v17 = v1[2];
			v18 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v17 + 8) = 5;
			*(_QWORD*)v17 = v18;
			v1[2] += 16i64;
			v19 = sub_1400578C0((__int64)v1);
			v20 = v1[4];
			v239 = v19;
			v21 = *(_QWORD*)(v20 + 160);
			if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v21 + 56))
			{
				if ((double)v19 == 0.0)
				{
					v22 = *(_DWORD**)(v21 + 32);
				}
				else
				{
					v244 = (double)v19;
					v22 = (_DWORD*)(*(_QWORD*)(v21 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v244) + HIDWORD(v244)) % (((1i64 << *(_BYTE*)(v21 + 11)) - 1) | 1)));
				}
				while (v22[6] != 3 || (double)v19 != *((double*)v22 + 2))
				{
					v22 = (_DWORD*)*((_QWORD*)v22 + 4);
					if (!v22)
					{
						v22 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v22 = (_DWORD*)(*(_QWORD*)(v21 + 24) + 16i64 * (v19 - 1));
			}
			v23 = v1[2];
			*(_QWORD*)v23 = *(_QWORD*)v22;
			*(_DWORD*)(v23 + 8) = v22[2];
			v1[2] += 16i64;
			v24 = (unsigned __int64*)sub_14018F0E0(&v211, L"index")[1];
			if (v24)
			{
				v25 = -1i64;
				do
					++v25;
				while (*((_BYTE*)v24 + v25));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v26 = v1[2];
				v27 = sub_140062650((__int64)v1, v24, v25);
				*(_DWORD*)(v26 + 8) = 4;
				*(_QWORD*)v26 = v27;
				v1[2] += 16i64;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
				v1[2] += 16i64;
			}
			if (v212)
				sub_14018B900(v212, 0);
			v28 = v1[2];
			*(_DWORD*)(v28 + 8) = 3;
			*(double*)v28 = (double)((int)v13 + 1);
			v1[2] += 16i64;
			v29 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v29, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v30 = v1[4];
			v245 = 1;
			v31 = -1i64;
			v230 = off_140B569F0;
			v32 = *(_QWORD*)(v30 + 112);
			v33 = 0;
			v246 = 0;
			v247 = 0;
			v34 = 0i64;
			v209 = 0i64;
			v210 = -1i64;
			v232 = v1;
			v35 = (__int64)v1;
			v233 = 1;
			if (*(_QWORD*)(v30 + 120) >= v32)
				sub_14005E2C0((__int64)v1);
			v36 = v1[2];
			v37 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v36 + 8) = 5;
			*(_QWORD*)v36 = v37;
			v1[2] += 16i64;
			v38 = sub_1400578C0((__int64)v1);
			v39 = v248;
			v40 = v38;
			v41 = *(_QWORD*)(qword_140C635F0 + 5584);
			v231 = v38;
			if (v248 >= *(_QWORD*)(v41 + 64))
			{
				v42 = 0i64;
			}
			else
			{
				v42 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v41 + 56) + 8 * v248) + 8i64);
				v39 = v248;
			}
			v43 = 0i64;
			v216 = v42;
			v215 = 0i64;
			if (v42)
				break;
		LABEL_174:
			sub_1400FB2A0((__int64)&v238, (__int64)L"items", v40);
			if (v247 && qword_140C65898 && (unsigned int)sub_1403D2140(qword_140C65898, 0x31u))
				v33 = 0;
			v188 = v239;
			v189 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v239);
			v190 = v1[2];
			*(_QWORD*)v190 = *v189;
			*(_DWORD*)(v190 + 8) = *((_DWORD*)v189 + 2);
			v1[2] += 16i64;
			sub_1400F0630((__int64)v1, v190, L"canGift", v245);
			v1[2] -= 16i64;
			v191 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v188);
			*(_QWORD*)v192 = *v191;
			*(_DWORD*)(v192 + 8) = *((_DWORD*)v191 + 2);
			v1[2] += 16i64;
			sub_1400F0630((__int64)v1, v193, L"canReturn", v246);
			v1[2] -= 16i64;
			v194 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v188);
			*(_QWORD*)v195 = *v194;
			*(_DWORD*)(v195 + 8) = *((_DWORD*)v194 + 2);
			v1[2] += 16i64;
			sub_1400F0630((__int64)v1, v196, L"canClaim", v33);
			v1[2] -= 16i64;
			v197 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v188);
			*(_QWORD*)v198 = *v197;
			*(_DWORD*)(v198 + 8) = *((_DWORD*)v197 + 2);
			v1[2] += 16i64;
			sub_1400F0870((__int64)v1, v199, L"icon", v34);
			v1[2] -= 16i64;
			if (v31 != -1)
			{
				GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
				v200 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v188);
				v201 = v1[2];
				*(_QWORD*)v201 = *v200;
				*(_DWORD*)(v201 + 8) = *((_DWORD*)v200 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v201, L"giftReturnTimeRemaining", v202);
				v1[2] -= 16i64;
			}
			sub_1400FB1D0((__int64)&v234);
			if (v35)
				sub_1400579E0(v35, v203, v40);
			sub_1400579E0((__int64)v1, v203, v188);
			v13 = v248 + 1;
			v248 = v13;
			if (v13 >= v229)
			{
				v1 = v236;
				v6 = v235;
				goto LABEL_184;
			}
		}
		while (1)
		{
			v44 = *(_QWORD*)(qword_140C635F0 + 5584);
			if (v39 >= *(_QWORD*)(v44 + 64))
				goto LABEL_172;
			v45 = *(_QWORD**)(*(_QWORD*)(v44 + 56) + 8 * v39);
			if (v43 >= v45[1])
				goto LABEL_172;
			v46 = *(_QWORD**)(*v45 + 8 * v43);
			v225 = v46;
			if (!v46)
				goto LABEL_172;
			v47 = *((_DWORD*)v46 + 2);
			if (qword_140C63840)
			{
				v48 = qword_140C63840(off_140A690C8, v47, qword_140C63858);
				goto LABEL_47;
			}
			if (!dword_140C64170)
				break;
		LABEL_172:
			v215 = ++v43;
			if (v43 >= v216)
			{
				v35 = (__int64)v232;
				v40 = v231;
				v31 = v210;
				goto LABEL_174;
			}
		}
		if ((int)sub_1401E89C0() < 0)
			goto LABEL_171;
		v48 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v47);
	LABEL_47:
		v49 = v48;
		if (!v48)
		{
		LABEL_171:
			v39 = v248;
			goto LABEL_172;
		}
		if (!v245
			|| !qword_140C65898
			|| (*(_BYTE*)(v48 + 4) & 1) != 0
			|| *((_DWORD*)v46 + 10)
			|| *((_DWORD*)v46 + 19) == 6
			|| (unsigned int)sub_1403D2140(qword_140C65898, 0x31u))
		{
			v50 = 0i64;
			v245 = 0;
		}
		else
		{
			v50 = 0i64;
			v245 = 1;
		}
		if (v246 || (v51 = 0, *((_DWORD*)v46 + 10)))
			v51 = 1;
		v246 = v51;
		if (!v34 || !*v34)
		{
			v52 = *(_QWORD*)(v49 + 40);
			if (v52 && v52 <= qword_140C3FE70)
				v50 = v52 + qword_140C3FE68;
			v209 = (unsigned __int16*)v50;
		}
		if (v51)
		{
			v53 = v210;
			if (v46[11] < v210)
				v53 = v46[11];
			v210 = v53;
		}
		v54 = v1[4];
		v219 = v1;
		v217 = off_140B569F0;
		v55 = *(_QWORD*)(v54 + 112);
		v220 = 1;
		if (*(_QWORD*)(v54 + 120) >= v55)
			sub_14005E2C0((__int64)v1);
		v56 = v1[2];
		v57 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v56 + 8) = 5;
		*(_QWORD*)v56 = v57;
		v1[2] += 16i64;
		v58 = sub_1400578C0((__int64)v1);
		v59 = *(_DWORD*)(v49 + 8);
		v60 = v58;
		v218 = v58;
		if (v59)
		{
			v61 = sub_1400B5DF0(qword_140C658F0, v59, 0i64);
			v63 = (__int64)v61;
			if (v61)
			{
				sub_14034BDD0(v62, v61[119]);
				v64 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v60);
				v65 = v1[2];
				*(_QWORD*)v65 = *v64;
				*(_DWORD*)(v65 + 8) = *((_DWORD*)v64 + 2);
				v1[2] += 16i64;
				sub_1400F0870((__int64)v1, v65, L"name", v66);
				v1[2] -= 16i64;
				v67 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v60);
				*(_QWORD*)v68 = *v67;
				*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
				v1[2] += 16i64;
				sub_1400F0870((__int64)v1, v69, L"icon", v70);
				v1[2] -= 16i64;
				if (v226)
				{
					if ((unsigned int)sub_140415C70(v1, v63))
					{
						sub_1400FB540((__int64)&v217);
						v1[2] -= 16i64;
					}
				}
				else
				{
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v71 = v1[2];
					v72 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v71 + 8) = 5;
					*(_QWORD*)v71 = v72;
					v1[2] += 16i64;
					LODWORD(v71) = sub_1400578C0((__int64)v1);
					sub_14034BDD0(v73, *(_DWORD*)(v63 + 476));
					v74 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v71);
					v75 = v1[2];
					*(_QWORD*)v75 = *v74;
					*(_DWORD*)(v75 + 8) = *((_DWORD*)v74 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v75, L"name", v76);
					v1[2] -= 16i64;
					v77 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v71);
					*(_QWORD*)v78 = *v77;
					*(_DWORD*)(v78 + 8) = *((_DWORD*)v77 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v79, L"icon", v80);
					v1[2] -= 16i64;
					sub_1400FB2A0((__int64)&v217, (__int64)L"staticItem", v71);
					sub_1400579E0((__int64)v1, v81, v71);
				}
			}
			v82 = (*(_DWORD*)(v49 + 4) >> 1) & 1;
			v83 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v60);
			v84 = v1[2];
			*(_QWORD*)v84 = *v83;
			*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
			v1[2] += 16i64;
			v85 = (unsigned __int64*)sub_14018F0E0(&v211, L"multiRedeem")[1];
			if (v85)
			{
				v86 = -1i64;
				do
					++v86;
				while (*((_BYTE*)v85 + v86));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v87 = v1[2];
				v88 = sub_140062650((__int64)v1, v85, v86);
				*(_DWORD*)(v87 + 8) = 4;
				*(_QWORD*)v87 = v88;
				v1[2] += 16i64;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
				v1[2] += 16i64;
			}
			if (v212)
				sub_14018B900(v212, 0);
			v89 = (_DWORD*)v1[2];
			v89[2] = 1;
			*v89 = v82 != 0;
			v1[2] += 16i64;
			v90 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v90, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			if (v82 && (v91 = 0i64, v92 = *(_QWORD*)(qword_140C635F0 + 5584), (v93 = *(_QWORD*)(v92 + 112)) != 0))
			{
				v94 = (_DWORD*)(*(_QWORD*)(v92 + 104) + 8i64);
				while (*v94 != *(_DWORD*)v49)
				{
					++v91;
					v94 += 16;
					if (v91 >= v93)
						goto LABEL_93;
				}
			}
			else
			{
			LABEL_93:
				v33 = 1;
			}
		}
		v95 = *(_DWORD*)(v49 + 12);
		if (v95)
		{
			if (qword_140C63840)
			{
				v96 = qword_140C63840(off_140A6A248, v95, qword_140C63858);
				goto LABEL_100;
			}
			if (!dword_140C63F1C && (int)sub_1401FDDC0() >= 0)
			{
				v96 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64018 + 24i64))(qword_140C64018, v95);
			LABEL_100:
				v97 = (_DWORD*)v96;
				if (v96)
				{
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v98 = v1[2];
					v99 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v98 + 8) = 5;
					*(_QWORD*)v98 = v99;
					v1[2] += 16i64;
					v100 = sub_1400578C0((__int64)v1);
					sub_14034BDD0(v101, v97[5]);
					v102 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v100);
					v103 = v1[2];
					*(_QWORD*)v103 = *v102;
					*(_DWORD*)(v103 + 8) = *((_DWORD*)v102 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v103, L"name", v104);
					v1[2] -= 16i64;
					sub_14034BDD0(v105, v97[6]);
					v106 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v100);
					v107 = v1[2];
					*(_QWORD*)v107 = *v106;
					*(_DWORD*)(v107 + 8) = *((_DWORD*)v106 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v107, L"description", v108);
					v1[2] -= 16i64;
					v109 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v100);
					*(_QWORD*)v110 = *v109;
					*(_DWORD*)(v110 + 8) = *((_DWORD*)v109 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v111, L"count", v112);
					v1[2] -= 16i64;
					v113 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v100);
					*(_QWORD*)v114 = *v113;
					*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v115, L"maxCount", v116);
					v1[2] -= 16i64;
					v117 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v100);
					*(_QWORD*)v118 = *v117;
					*(_DWORD*)(v118 + 8) = *((_DWORD*)v117 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v119, L"icon", v120);
					v1[2] -= 16i64;
					sub_1400FB2A0((__int64)&v217, (__int64)L"entitlement", v100);
					if (*(_DWORD*)(v49 + 20) == 2)
					{
						v122 = *(_QWORD*)(qword_140C635F0 + 5584);
						v123 = 0i64;
						v121 = *(_QWORD*)(v122 + 160);
						if (v121)
						{
							v124 = *(_QWORD*)(v122 + 152);
							v125 = (_DWORD*)(v124 + 8);
							while (*v125 != *(_DWORD*)(v49 + 12))
							{
								++v123;
								v125 += 4;
								if (v123 >= v121)
									goto LABEL_108;
							}
							v126 = *(_DWORD*)(v124 + 16 * v123 + 12);
						}
						else
						{
						LABEL_108:
							v126 = 0;
						}
						if (v126 < v97[1])
							v33 = 1;
					}
					else
					{
						if (qword_140C65898)
							v127 = sub_1403D2140(qword_140C65898, *(_DWORD*)(v49 + 12));
						else
							v127 = 0;
						if (v127 < v97[1])
							v33 = 1;
					}
					sub_1400579E0((__int64)v1, v121, v100);
				}
			}
		}
		if (*(_DWORD*)(v49 + 24))
		{
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v128 = v1[2];
			v129 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v128 + 8) = 5;
			*(_QWORD*)v128 = v129;
			v1[2] += 16i64;
			v130 = sub_1400578C0((__int64)v1);
			v131 = *(_DWORD*)(v49 + 24);
			v132 = v130;
			v133 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v130);
			v134 = v1[2];
			*(_QWORD*)v134 = *v133;
			*(_DWORD*)(v134 + 8) = *((_DWORD*)v133 + 2);
			v1[2] += 16i64;
			v135 = (unsigned __int64*)sub_14018F0E0(&v211, L"eventEnum")[1];
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
				v1[2] += 16i64;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
				v1[2] += 16i64;
			}
			if (v212)
				sub_14018B900(v212, 0);
			v139 = v1[2];
			*(_DWORD*)(v139 + 8) = 3;
			*(double*)v139 = (double)v131;
			v1[2] += 16i64;
			v140 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v140, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v141 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v218);
			*(_QWORD*)v142 = *v141;
			*(_DWORD*)(v142 + 8) = *((_DWORD*)v141 + 2);
			v1[2] += 16i64;
			v143 = (unsigned __int64*)sub_14018F0E0(&v211, L"instantEvent")[1];
			if (v143)
			{
				v144 = -1i64;
				do
					++v144;
				while (*((_BYTE*)v143 + v144));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v145 = v1[2];
				v146 = sub_140062650((__int64)v1, v143, v144);
				*(_DWORD*)(v145 + 8) = 4;
				*(_QWORD*)v145 = v146;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
			}
			v147 = v212;
			v1[2] += 16i64;
			if (v147)
				sub_14018B900(v147, 0);
			v148 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v132);
			v149 = v1[2];
			*(_QWORD*)v149 = *v148;
			*(_DWORD*)(v149 + 8) = *((_DWORD*)v148 + 2);
			v1[2] += 16i64;
			sub_14005EA50((__int64)v1, (__int64*)(v1[2] - 48i64), (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v33 = 1;
			sub_1400579E0((__int64)v1, v150, v132);
		}
		if (*(_DWORD*)(v49 + 28))
		{
			v151 = v1[4];
			v213 = v1;
			v211 = off_140B569F0;
			v152 = *(_QWORD*)(v151 + 112);
			v214 = 1;
			if (*(_QWORD*)(v151 + 120) >= v152)
				sub_14005E2C0((__int64)v1);
			v153 = v1[2];
			v154 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v153 + 8) = 5;
			*(_QWORD*)v153 = v154;
			v1[2] += 16i64;
			v155 = sub_1400578C0((__int64)v1);
			v156 = *(_DWORD*)(v49 + 28);
			v157 = *(_QWORD*)(v1[4] + 160i64);
			v158 = v155;
			LODWORD(v212) = v155;
			v159 = sub_14005C3C0(v157, v155);
			v160 = v1[2];
			*(_QWORD*)v160 = *v159;
			*(_DWORD*)(v160 + 8) = *((_DWORD*)v159 + 2);
			v1[2] += 16i64;
			v161 = (unsigned __int64*)sub_14018F0E0(&v222, L"accountCurrencyEnum")[1];
			if (v161)
			{
				v162 = -1i64;
				do
					++v162;
				while (*((_BYTE*)v161 + v162));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v163 = v1[2];
				v164 = sub_140062650((__int64)v1, v161, v162);
				*(_DWORD*)(v163 + 8) = 4;
				*(_QWORD*)v163 = v164;
				v1[2] += 16i64;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
				v1[2] += 16i64;
			}
			if (v223)
				sub_14018B900(v223, 0);
			v165 = v1[2];
			*(_DWORD*)(v165 + 8) = 3;
			*(double*)v165 = (double)v156;
			v1[2] += 16i64;
			v166 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v166, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v167 = v1[4];
			v168 = *(_QWORD*)(v49 + 32);
			HIDWORD(v224) = *(_DWORD*)(v49 + 28);
			v169 = *(_QWORD*)(v167 + 112);
			v223 = 15i64;
			LODWORD(v224) = 0;
			if (*(_QWORD*)(v167 + 120) >= v169)
				sub_14005E2C0((__int64)v1);
			v170 = v1[5];
			if (v170 == v1[10])
				v171 = v1[15];
			else
				v171 = *(_QWORD*)(**(_QWORD**)(v170 + 8) + 24i64);
			v172 = (_QWORD*)sub_1400627D0((__int64)v1, 0x18ui64, v171);
			v173 = v1[2];
			*(_QWORD*)v173 = v172;
			*(_DWORD*)(v173 + 8) = 7;
			v1[2] += 16i64;
			v174 = v223;
			v172[6] = v168;
			v172[7] = v174;
			v172[8] = v224;
			v175 = v1[4];
			v176 = sub_140062650((__int64)v1, (unsigned __int64*)"Game.Money", 0xAui64);
			v177 = v1[2];
			v242 = v176;
			v243 = 4;
			sub_14005E8E0((__int64)v1, v175 + 160, (int*)&v242, v177);
			v1[2] += 16i64;
			sub_140058BF0((__int64)v1, -2);
			sub_1400FB540((__int64)&v211);
			v1[2] -= 16i64;
			sub_1400FB2A0((__int64)&v217, (__int64)L"accountCurrency", v158);
			v33 = 1;
			sub_1400579E0((__int64)v1, v178, v158);
		}
		if (*(_DWORD*)(v49 + 28) == 5 || *(_DWORD*)v49 == 22)
			v247 = 1;
		v179 = *v225;
		v180 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 16i64);
		v181 = v180;
		v182 = *(_QWORD**)(v180 + 8);
		while (v182)
		{
			if (v182[4] < v179)
			{
				v182 = (_QWORD*)v182[3];
			}
			else
			{
				v181 = (__int64)v182;
				v182 = (_QWORD*)v182[2];
			}
		}
		if (v181 == v180 || v179 < *(_QWORD*)(v181 + 32))
			v227 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 16i64);
		else
			v228 = v181;
		v183 = v218;
		v184 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v218);
		v185 = v1[2];
		*(_QWORD*)v185 = *v184;
		*(_DWORD*)(v185 + 8) = *((_DWORD*)v184 + 2);
		v1[2] += 16i64;
		sub_1400F0630((__int64)v1, v185, L"bIsNew", v186);
		v1[2] -= 16i64;
		sub_1404E1D10((__int64)&v217, v49);
		sub_1400FB1D0((__int64)&v230);
		sub_1400579E0((__int64)v1, v187, v183);
		v34 = v209;
		v43 = v215;
		goto LABEL_171;
	}
LABEL_184:
	v204 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
	v205 = v1[2];
	*(_QWORD*)v205 = *v204;
	v206 = *((unsigned int*)v204 + 2);
	*(_DWORD*)(v205 + 8) = v206;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v206, v207);
	return 1i64;
}
// 1404E26B0: variable 'v62' is possibly undefined
// 1404E26ED: variable 'v66' is possibly undefined
// 1404E2722: variable 'v68' is possibly undefined
// 1404E2734: variable 'v69' is possibly undefined
// 1404E2734: variable 'v70' is possibly undefined
// 1404E27B9: variable 'v73' is possibly undefined
// 1404E27F5: variable 'v76' is possibly undefined
// 1404E2829: variable 'v78' is possibly undefined
// 1404E283B: variable 'v79' is possibly undefined
// 1404E283B: variable 'v80' is possibly undefined
// 1404E285F: variable 'v81' is possibly undefined
// 1404E2A5C: variable 'v101' is possibly undefined
// 1404E2A98: variable 'v104' is possibly undefined
// 1404E2AA5: variable 'v105' is possibly undefined
// 1404E2AE1: variable 'v108' is possibly undefined
// 1404E2B13: variable 'v110' is possibly undefined
// 1404E2B25: variable 'v111' is possibly undefined
// 1404E2B25: variable 'v112' is possibly undefined
// 1404E2B56: variable 'v114' is possibly undefined
// 1404E2B68: variable 'v115' is possibly undefined
// 1404E2B68: variable 'v116' is possibly undefined
// 1404E2BBE: variable 'v118' is possibly undefined
// 1404E2BD0: variable 'v119' is possibly undefined
// 1404E2BD0: variable 'v120' is possibly undefined
// 1404E2C73: variable 'v121' is possibly undefined
// 1404E2DDC: variable 'v142' is possibly undefined
// 1404E2EB5: variable 'v150' is possibly undefined
// 1404E311B: variable 'v178' is possibly undefined
// 1404E31D7: variable 'v186' is possibly undefined
// 1404E31FF: variable 'v187' is possibly undefined
// 1404E32E0: variable 'v192' is possibly undefined
// 1404E32F2: variable 'v193' is possibly undefined
// 1404E3320: variable 'v195' is possibly undefined
// 1404E3332: variable 'v196' is possibly undefined
// 1404E3360: variable 'v198' is possibly undefined
// 1404E3372: variable 'v199' is possibly undefined
// 1404E33E9: variable 'v202' is possibly undefined
// 1404E340A: variable 'v203' is possibly undefined
// 1404E348C: variable 'v207' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140A6A248: using guessed type wchar_t *off_140A6A248[2];
// 140B0B660: using guessed type wchar_t aMaxcount[9];
// 140B0B678: using guessed type wchar_t aIcon_2[5];
// 140B0B688: using guessed type wchar_t aEntitlement_0[12];
// 140B0B6A0: using guessed type wchar_t aEventenum[10];
// 140B0B6B8: using guessed type wchar_t aMultiredeem[12];
// 140B0B6D0: using guessed type wchar_t aName_22[5];
// 140B0B6E0: using guessed type wchar_t aDescription_1[12];
// 140B0B6F8: using guessed type wchar_t aCount_2[6];
// 140B0B718: using guessed type wchar_t aName_21[5];
// 140B0B728: using guessed type wchar_t aIcon_1[5];
// 140B0B738: using guessed type wchar_t aStaticitem_0[11];
// 140B0B770: using guessed type wchar_t aIndex_37[6];
// 140B0B780: using guessed type wchar_t aName_20[5];
// 140B0B790: using guessed type wchar_t aIcon_0[5];
// 140B0B7E8: using guessed type wchar_t aCanclaim[9];
// 140B0B800: using guessed type wchar_t aIcon_3[5];
// 140B0B810: using guessed type wchar_t aGiftreturntime[24];
// 140B0B858: using guessed type wchar_t aBisnew[7];
// 140B0B868: using guessed type wchar_t aItems_0[6];
// 140B0B878: using guessed type wchar_t aCangift[8];
// 140B0B888: using guessed type wchar_t aCanreturn[10];
// 140B0B8A0: using guessed type wchar_t aInstantevent[13];
// 140B0B8C0: using guessed type wchar_t aAccountcurrenc_1[20];
// 140B0B900: using guessed type wchar_t aAccountcurrenc_2[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F1C: using guessed type int dword_140C63F1C;
// 140C64018: using guessed type __int64 qword_140C64018;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

