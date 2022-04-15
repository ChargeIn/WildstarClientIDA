#include "../winhttp.h"

//----- (00000001404ED920) ----------------------------------------------------
__int64 __fastcall sub_1404ED920(__int64 a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned int v8; // r14d
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r12
	__int64 v12; // rax
	__int64 v13; // r14
	__int64 v14; // rdx
	unsigned __int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // ebx
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r10d
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	unsigned __int16* v25; // r11
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	unsigned __int16* v29; // r11
	__int64 v30; // rdx
	int v31; // eax
	int v32; // r15d
	_QWORD* v33; // rax
	__int64 v34; // r11
	__int64 v35; // rdx
	int v36; // r10d
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64 v39; // rdx
	__int64 v40; // rcx
	_QWORD* v41; // rax
	__int64 v42; // r11
	__int64 v43; // rdx
	int v44; // r10d
	__int64 v45; // rcx
	unsigned __int64 v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	int v49; // eax
	__int64 v50; // rdx
	int v51; // r13d
	int v52; // r8d
	int v53; // ebx
	bool v54; // zf
	int v55; // r8d
	struct _FILETIME v56; // r14
	int v57; // ecx
	__int64 v58; // r15
	__int64 v59; // r9
	int v60; // r14d
	__int64 v61; // rcx
	unsigned __int64 v62; // rax
	__int64 v63; // r12
	__int64 v64; // rbx
	__int64 v65; // rax
	int v66; // r13d
	__int64 v67; // r13
	__int64 v68; // rdx
	int v69; // ecx
	__int64 v70; // rbx
	__int64 v71; // rax
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
	__int64 v87; // rdx
	int v88; // r8d
	__int64 v89; // r14
	__int64 v90; // rdx
	unsigned __int64 v91; // rcx
	__int64 v92; // rbx
	__int64 v93; // rax
	int v94; // eax
	unsigned int v95; // ecx
	int v96; // r12d
	__int64 v97; // rax
	unsigned int v98; // ecx
	__int64 v99; // r15
	int v100; // ebx
	int v101; // edx
	_QWORD* v102; // r10
	unsigned int v103; // eax
	_QWORD* v104; // rax
	__int64 v105; // rdx
	_QWORD* v106; // rax
	__int64 v107; // r10
	__int64 v108; // rdx
	int v109; // r11d
	__int64 v110; // rcx
	__int64 v111; // rax
	unsigned int v112; // edx
	unsigned int v113; // edx
	unsigned __int64 v114; // r11
	__int64 v115; // r10
	unsigned __int64 v116; // rbx
	__int64** v117; // r10
	unsigned __int64 v118; // rdx
	unsigned __int64 v119; // r8
	__int64 v120; // rcx
	int v121; // ebx
	_QWORD* v122; // rax
	__int64 v123; // rdx
	unsigned __int64* v124; // rdx
	unsigned __int64 v125; // r8
	BOOL* v126; // rcx
	BOOL v127; // eax
	int v128; // ebx
	__int64* v129; // rax
	unsigned __int64 v130; // rcx
	__int64 v131; // rax
	unsigned __int64 v132; // rdx
	_DWORD* v133; // rax
	_QWORD* v134; // rax
	__int64 v135; // r10
	unsigned __int64* v136; // rdx
	unsigned __int64 v137; // r8
	_DWORD* v138; // rcx
	__int64* v139; // rax
	_QWORD* v140; // rax
	__int64 v141; // r10
	unsigned __int64* v142; // rdx
	unsigned __int64 v143; // r8
	_DWORD* v144; // rcx
	__int64* v145; // rax
	_QWORD* v146; // rax
	__int64 v147; // r11
	__int64 v148; // rdx
	int v149; // r10d
	_QWORD* v150; // rax
	__int64 v151; // r10
	__int64 v152; // rdx
	int v153; // r11d
	_QWORD* v154; // rax
	__int64 v155; // r11
	__int64 v156; // rdx
	int v157; // r10d
	_QWORD* v158; // rax
	__int64 v159; // r11
	__int64 v160; // rdx
	int v161; // r10d
	__int64 v162; // rbx
	__int64 v163; // rax
	int v164; // r15d
	unsigned __int64 v165; // rbx
	_QWORD* v166; // rax
	__int64 v167; // rdx
	__int64 v168; // rcx
	__int64 v169; // rax
	int v170; // r10d
	__int64 v171; // r8
	int v172; // r14d
	_QWORD* v173; // rax
	__int64 v174; // rdx
	__int64 v175; // rcx
	_QWORD* v176; // rax
	__int64 v177; // r8
	__int64 v178; // rdx
	int v179; // r10d
	__int64 v180; // rcx
	_QWORD* v181; // rax
	__int64 v182; // rdx
	int v183; // r10d
	__int64 v184; // rdx
	int v185; // eax
	unsigned __int64 v186; // r14
	struct _FILETIME v187; // rbx
	_QWORD* v188; // rax
	__int64 v189; // rdx
	__int64* v190; // rax
	__int64 v191; // rcx
	__int64 v192; // rdx
	__int64 v193; // r10
	__int64 v194; // rdx
	int v196; // [rsp+30h] [rbp-99h]
	__int64 v197; // [rsp+40h] [rbp-89h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-81h] BYREF
	unsigned __int64 v199; // [rsp+50h] [rbp-79h]
	__int64(__fastcall * *v200)(); // [rsp+58h] [rbp-71h] BYREF
	int v201; // [rsp+60h] [rbp-69h]
	__int64 v202; // [rsp+68h] [rbp-61h]
	int v203; // [rsp+70h] [rbp-59h]
	__int64(__fastcall * *v204)(); // [rsp+78h] [rbp-51h] BYREF
	int v205; // [rsp+80h] [rbp-49h]
	__int64 v206; // [rsp+88h] [rbp-41h]
	int v207; // [rsp+90h] [rbp-39h]
	__int64(__fastcall * *v208)(); // [rsp+98h] [rbp-31h] BYREF
	__int64 v209; // [rsp+A0h] [rbp-29h]
	__int64 v210; // [rsp+A8h] [rbp-21h]
	int v211; // [rsp+B0h] [rbp-19h]
	__int64(__fastcall * *v212)(); // [rsp+B8h] [rbp-11h] BYREF
	int v213; // [rsp+C0h] [rbp-9h]
	__int64 v214; // [rsp+C8h] [rbp-1h]
	int v215; // [rsp+D0h] [rbp+7h]
	__int64 v216; // [rsp+138h] [rbp+6Fh]
	int v217; // [rsp+138h] [rbp+6Fh]
	int v218; // [rsp+140h] [rbp+77h]
	int v219; // [rsp+148h] [rbp+7Fh]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = (unsigned int)sub_1400F26A0(v7 + 384, 2) - 1;
	v10 = sub_14044F8C0(qword_140C65908, v8);
	if (v10 && *(_QWORD*)(v10 + 72) > (unsigned __int64)(unsigned int)v9)
		v11 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v9);
	else
		v11 = 0i64;
	v197 = v11;
	v12 = sub_14044F8C0(qword_140C65908, v8);
	v13 = v12;
	if (!v11 || !v12)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v14 = *(_QWORD*)(a1 + 32);
	v15 = *(_QWORD*)(v14 + 112);
	v204 = off_140B569F0;
	v206 = a1;
	v207 = 1;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0(a1);
	v16 = *(_QWORD*)(a1 + 16);
	v17 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	*(_QWORD*)(a1 + 16) += 16i64;
	v18 = sub_1400578C0(a1);
	v205 = v18;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
	v20 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v20, L"nId", v21);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v24, L"strVariantName", v25);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v28, L"strVariantDescription", v29);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v30 = qword_140C635F0;
	v31 = *(_DWORD*)(qword_140C635F0 + 5896);
	v32 = 1;
	v218 = 1;
	v219 = 0;
	if (v31 != 1)
	{
		if (!v31)
		{
			v40 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + 8i64);
			while (v40)
			{
				if (*(_DWORD*)(v40 + 32) < 0xD6u)
					v40 = *(_QWORD*)(v40 + 24);
				else
					v40 = *(_QWORD*)(v40 + 16);
			}
			v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
			*(_QWORD*)v42 = *v41;
			*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v43, L"nRequiredTier", v44);
			*(_QWORD*)(a1 + 16) -= 16i64;
		}
		goto LABEL_35;
	}
	if (*(_BYTE*)(v11 + 64) <= *(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5584) + 520i64))
	{
		v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
		*(_QWORD*)v34 = *v33;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v35, L"nRequiredTier", v36);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v37 = *(_QWORD*)(v13 + 24);
		v38 = *(_QWORD*)(v37 + 8);
		v39 = v37;
		while (v38)
		{
			if (*(_DWORD*)(v38 + 32) < 0x86u)
			{
				v38 = *(_QWORD*)(v38 + 24);
			}
			else
			{
				v39 = v38;
				v38 = *(_QWORD*)(v38 + 16);
			}
		}
		if (v39 == v37 || (v216 = v39, *(_DWORD*)(v39 + 32) > 0x86u))
			v216 = *(_QWORD*)(v13 + 24);
		v32 = v216 == v37;
		if (v216 != v37)
			v219 = 1;
	LABEL_35:
		v45 = *(_QWORD*)(a1 + 32);
		v212 = off_140B569F0;
		v46 = *(_QWORD*)(v45 + 112);
		v214 = a1;
		v215 = 1;
		if (*(_QWORD*)(v45 + 120) >= v46)
			sub_14005E2C0(a1);
		v47 = *(_QWORD*)(a1 + 16);
		v48 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v47 + 8) = 5;
		*(_QWORD*)v47 = v48;
		*(_QWORD*)(a1 + 16) += 16i64;
		v49 = sub_1400578C0(a1);
		v50 = qword_140C635F0;
		v51 = v49;
		v213 = v49;
		v52 = *(_DWORD*)(qword_140C635F0 + 5896);
		v53 = 19;
		if (!v52 || (v54 = v52 == 1, v55 = 19, v54))
			v55 = 11;
		v56 = SystemTimeAsFileTime;
		if (*(float*)(v11 + 24) != 0.0)
		{
			sub_1404ED2D0(v11, 0, v55, *(_QWORD*)&SystemTimeAsFileTime, (__int64)&v212, (__int64)L"tPremium", v32);
			v50 = qword_140C635F0;
		}
		v57 = *(_DWORD*)(v50 + 5896);
		if (v57)
		{
			if (v57 == 1)
				v53 = 8;
		}
		else
		{
			v53 = 6;
		}
		if (*(float*)(v11 + 28) == 0.0)
		{
			v58 = v11;
			v60 = 1;
		}
		else
		{
			v196 = v32;
			v58 = v11;
			v59 = (__int64)v56;
			v60 = 1;
			sub_1404ED2D0(v11, 1, v53, v59, (__int64)&v212, (__int64)L"tAlternative", v196);
		}
		sub_1400FB2A0((__int64)&v204, (__int64)L"tPrices", v51);
		v61 = *(_QWORD*)(a1 + 32);
		v200 = off_140B569F0;
		v62 = *(_QWORD*)(v61 + 112);
		v63 = a1;
		v202 = a1;
		v203 = 1;
		if (*(_QWORD*)(v61 + 120) >= v62)
			sub_14005E2C0(a1);
		v64 = *(_QWORD*)(a1 + 16);
		v65 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v64 + 8) = 5;
		*(_QWORD*)v64 = v65;
		*(_QWORD*)(a1 + 16) += 16i64;
		v66 = sub_1400578C0(a1);
		v201 = v66;
		SystemTimeAsFileTime = 0i64;
		if (!*(_QWORD*)(v58 + 16))
		{
		LABEL_124:
			sub_1400FB2A0((__int64)&v204, (__int64)L"tItems", v66);
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v162 = *(_QWORD*)(a1 + 16);
			v163 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v162 + 8) = 5;
			*(_QWORD*)v162 = v163;
			*(_QWORD*)(a1 + 16) += 16i64;
			v164 = sub_1400578C0(a1);
			v165 = 0i64;
			if (*(_QWORD*)(v197 + 96))
			{
				do
				{
					v166 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v164);
					v167 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v167 = *v166;
					*(_DWORD*)(v167 + 8) = *((_DWORD*)v166 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v168 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v168 + 8) = 3;
					LODWORD(v166) = v60++;
					*(double*)v168 = (double)(int)v166;
					*(_QWORD*)(a1 + 16) += 16i64;
					v169 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v169 + 8) = 3;
					*(double*)v169 = (double)v170;
					v171 = *(_QWORD*)(a1 + 16) + 16i64;
					*(_QWORD*)(a1 + 16) = v171;
					sub_14005EA50(a1, (__int64*)(v171 - 48), (int*)(v171 - 32), (unsigned int*)(v171 - 16));
					*(_QWORD*)(a1 + 16) -= 48i64;
					++v165;
				} while (v165 < *(_QWORD*)(v197 + 96));
				v63 = v202;
			}
			sub_1400FB2A0((__int64)&v204, (__int64)L"tDisplayInfos", v164);
			v172 = v205;
			v173 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v205);
			v174 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v174 = *v173;
			*(_DWORD*)(v174 + 8) = *((_DWORD*)v173 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v174, L"ePurchaseResultDisplayType", v219);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v199 = 0i64;
			SystemTimeAsFileTime = 0i64;
			sub_140450160(v175, v197, (__int64*)&SystemTimeAsFileTime);
			v176 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v172);
			v177 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v177 = *v176;
			*(_DWORD*)(v177 + 8) = *((_DWORD*)v176 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F0630(a1, v178, L"bCanPurchase", v179);
			*(_QWORD*)(a1 + 16) -= 16i64;
			sub_140450280(v180, v197);
			v181 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v172);
			v182 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v182 = *v181;
			*(_DWORD*)(v182 + 8) = *((_DWORD*)v181 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F0630(a1, v182, L"bItemsAreGiftable", v183);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v200 = off_140B569F0;
			v202 = a1;
			v203 = 1;
			sub_140058900(a1, v184, 0);
			v185 = sub_1400578C0(a1);
			v186 = v199;
			v187 = SystemTimeAsFileTime;
			v201 = v185;
			if (v199)
			{
				do
				{
					sub_1400FA9E0((__int64)&v200);
					++v1;
				} while (v1 < v186);
				v185 = v201;
			}
			sub_1400FB2A0((__int64)&v204, (__int64)L"arRequiredEntitlements", v185);
			v188 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v205);
			v189 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v189 = *v188;
			*(_DWORD*)(v189 + 8) = *((_DWORD*)v188 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F0630(a1, v189, L"bAccountLevelItemsOnly", v218);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v190 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v205);
			v191 = v202;
			v192 = *v190;
			*(_QWORD*)v193 = *v190;
			*(_DWORD*)(v193 + 8) = *((_DWORD*)v190 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v191)
				sub_1400579E0(v191, v192, v201);
			if (v187)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)&v187 - 16i64) + 8i64))(*(_QWORD*)&v187 - 16i64);
			sub_1400579E0(a1, v192, v164);
			if (v63)
				sub_1400579E0(v63, v194, v66);
			sub_1400579E0(a1, v194, v213);
			v18 = v205;
			goto LABEL_139;
		}
		v67 = 0i64;
		while (1)
		{
			v68 = *(_QWORD*)(v58 + 8);
			v69 = *(_DWORD*)(v67 + v68);
			if (v69)
			{
				if (v69 == 1)
				{
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v70 = *(_QWORD*)(a1 + 16);
					v71 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v70 + 8) = 5;
					*(_QWORD*)v70 = v71;
					*(_QWORD*)(a1 + 16) += 16i64;
					LODWORD(v70) = sub_1400578C0(a1);
					v72 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v70);
					v73 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v73 = *v72;
					*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v73, L"eItemType", v74);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v75 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v70);
					*(_QWORD*)v76 = *v75;
					*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v77, L"eUnitType", v78);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v79 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v70);
					*(_QWORD*)v80 = *v79;
					*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v81, L"nDuration", v82);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v83 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v70);
					*(_QWORD*)v84 = *v83;
					*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v85, L"nCount", v86);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v200);
					v88 = v70;
				LABEL_121:
					sub_1400579E0(a1, v87, v88);
				}
			}
			else
			{
				v89 = sub_1401E8C20(*(_DWORD*)(v67 + v68 + 4));
				if (v89)
				{
					v90 = *(_QWORD*)(a1 + 32);
					v210 = a1;
					v91 = *(_QWORD*)(v90 + 112);
					v208 = off_140B569F0;
					v211 = 1;
					if (*(_QWORD*)(v90 + 120) >= v91)
						sub_14005E2C0(a1);
					v92 = *(_QWORD*)(a1 + 16);
					v93 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v92 + 8) = 5;
					*(_QWORD*)v92 = v93;
					*(_QWORD*)(a1 + 16) += 16i64;
					v94 = sub_1400578C0(a1);
					v95 = *(_DWORD*)v89;
					v96 = v94;
					LODWORD(v209) = v94;
					v97 = sub_1401E8C20(v95);
					if (v97)
						sub_1404E34B0((__int64)&v208, v97);
					v98 = *(_DWORD*)(v89 + 12);
					if (v98)
					{
						v99 = sub_1401FE020(v98);
						if (v99)
						{
							v100 = 0;
							if (*(_DWORD*)(v89 + 20) == 2)
							{
								if ((unsigned int)sub_1400068F0(*(_QWORD*)(qword_140C635F0 + 5584), *(_DWORD*)(v89 + 12)) < *(_DWORD*)(v99 + 4))
								{
									if ((unsigned int)sub_140006930(v102, v101) >= *(_DWORD*)(v99 + 4))
										v100 = 3;
								}
								else
								{
									v100 = 2;
								}
							}
							else
							{
								v218 = 0;
								if (qword_140C65898)
									v103 = sub_1403D2140(qword_140C65898, *(_DWORD*)(v89 + 12));
								else
									v103 = 0;
								if (v103 >= *(_DWORD*)(v99 + 4))
									v100 = 1;
							}
							v104 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
							v105 = *(_QWORD*)(a1 + 16);
							*(_QWORD*)v105 = *v104;
							*(_DWORD*)(v105 + 8) = *((_DWORD*)v104 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v105, L"eClaimState", v100);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v106 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
							*(_QWORD*)v107 = *v106;
							*(_DWORD*)(v107 + 8) = *((_DWORD*)v106 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v108, L"eScope", v109);
							*(_QWORD*)(a1 + 16) -= 16i64;
						}
						v58 = v197;
					}
					v110 = *(unsigned int*)(v89 + 8);
					v217 = 0;
					if ((_DWORD)v110)
					{
						v218 = 0;
						v111 = sub_1402096E0(v110);
						if (v111)
						{
							v112 = *(_DWORD*)(v111 + 120);
							if (v112)
								v217 = sub_140452750(v110, v112);
						}
					}
					v113 = *(_DWORD*)(v89 + 80);
					if (v113)
						v217 = sub_140452750(v110, v113);
					if ((*(_BYTE*)(v89 + 4) & 2) != 0
						&& (v114 = 0i64, v115 = *(_QWORD*)(qword_140C635F0 + 5584), (v116 = *(_QWORD*)(v115 + 64)) != 0))
					{
						v117 = *(__int64***)(v115 + 56);
						while (1)
						{
							v118 = 0i64;
							v119 = (*v117)[1];
							if (v119)
								break;
						LABEL_90:
							++v114;
							++v117;
							if (v114 >= v116)
								goto LABEL_91;
						}
						v120 = **v117;
						while (*(_DWORD*)(*(_QWORD*)v120 + 8i64) != *(_DWORD*)v89)
						{
							++v118;
							v120 += 8i64;
							if (v118 >= v119)
								goto LABEL_90;
						}
						v121 = 1;
					}
					else
					{
					LABEL_91:
						v121 = 0;
					}
					v122 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					v123 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v123 = *v122;
					*(_DWORD*)(v123 + 8) = *((_DWORD*)v122 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v124 = (unsigned __int64*)sub_14018F0E0(&v208, L"bAlreadyOwnPendingMultiRedeem")[1];
					if (v124)
					{
						v125 = -1i64;
						do
							++v125;
						while (*((_BYTE*)v124 + v125));
						sub_140058710(a1, v124, v125);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
						*(_QWORD*)(a1 + 16) += 16i64;
					}
					if (v209)
						sub_14018B900(v209, 0);
					v126 = *(BOOL**)(a1 + 16);
					v127 = v121 != 0;
					v128 = 1;
					*v126 = v127;
					v126[2] = 1;
					*(_QWORD*)(a1 + 16) += 16i64;
					v129 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v129, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 48i64;
					if ((*(_BYTE*)(v89 + 4) & 2) != 0
						&& (v130 = 0i64, v131 = *(_QWORD*)(qword_140C635F0 + 5584), (v132 = *(_QWORD*)(v131 + 112)) != 0))
					{
						v133 = (_DWORD*)(*(_QWORD*)(v131 + 104) + 8i64);
						while (*v133 != *(_DWORD*)v89)
						{
							++v130;
							v133 += 16;
							if (v130 >= v132)
								goto LABEL_105;
						}
					}
					else
					{
					LABEL_105:
						v128 = 0;
					}
					v134 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					*(_QWORD*)v135 = *v134;
					*(_DWORD*)(v135 + 8) = *((_DWORD*)v134 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v136 = (unsigned __int64*)sub_14018F0E0(&v208, L"bAlreadyOwnBoundMultiRedeem")[1];
					if (v136)
					{
						v137 = -1i64;
						do
							++v137;
						while (*((_BYTE*)v136 + v137));
						sub_140058710(a1, v136, v137);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
						*(_QWORD*)(a1 + 16) += 16i64;
					}
					if (v209)
						sub_14018B900(v209, 0);
					v138 = *(_DWORD**)(a1 + 16);
					*v138 = v128 != 0;
					v138[2] = 1;
					*(_QWORD*)(a1 + 16) += 16i64;
					v139 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v139, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 48i64;
					v140 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					*(_QWORD*)v141 = *v140;
					*(_DWORD*)(v141 + 8) = *((_DWORD*)v140 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v142 = (unsigned __int64*)sub_14018F0E0(&v208, L"bAccountUnlockAlreadyOwned")[1];
					if (v142)
					{
						v143 = -1i64;
						do
							++v143;
						while (*((_BYTE*)v142 + v143));
						sub_140058710(a1, v142, v143);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
						*(_QWORD*)(a1 + 16) += 16i64;
					}
					if (v209)
						sub_14018B900(v209, 0);
					v144 = *(_DWORD**)(a1 + 16);
					v144[2] = 1;
					*v144 = v217 != 0;
					*(_QWORD*)(a1 + 16) += 16i64;
					v145 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v145, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 48i64;
					v146 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					*(_QWORD*)v147 = *v146;
					*(_DWORD*)(v147 + 8) = *((_DWORD*)v146 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v148, L"eItemType", v149);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v150 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					*(_QWORD*)v151 = *v150;
					*(_DWORD*)(v151 + 8) = *((_DWORD*)v150 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v152, L"nStoreDisplayInfoId", v153);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v154 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					*(_QWORD*)v155 = *v154;
					*(_DWORD*)(v155 + 8) = *((_DWORD*)v154 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v156, L"nCount", v157);
					*(_QWORD*)(a1 + 16) -= 16i64;
					v158 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v96);
					*(_QWORD*)v159 = *v158;
					*(_DWORD*)(v159 + 8) = *((_DWORD*)v158 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v160, L"nId", v161);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v200);
					v88 = v96;
					goto LABEL_121;
				}
			}
			v67 += 16i64;
			if ((unsigned __int64)++ * (_QWORD*)&SystemTimeAsFileTime >= *(_QWORD*)(v58 + 16))
			{
				v63 = v202;
				v66 = v201;
				v60 = 1;
				goto LABEL_124;
			}
		}
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
LABEL_139:
	sub_1400579E0(a1, v30, v18);
	return 1i64;
}
// 1404EDAA5: variable 'v21' is possibly undefined
// 1404EDAD7: variable 'v23' is possibly undefined
// 1404EDAE9: variable 'v24' is possibly undefined
// 1404EDAE9: variable 'v25' is possibly undefined
// 1404EDB1B: variable 'v27' is possibly undefined
// 1404EDB2D: variable 'v28' is possibly undefined
// 1404EDB2D: variable 'v29' is possibly undefined
// 1404EDBA1: variable 'v34' is possibly undefined
// 1404EDBB3: variable 'v35' is possibly undefined
// 1404EDBB3: variable 'v36' is possibly undefined
// 1404EDC9E: variable 'v42' is possibly undefined
// 1404EDCB0: variable 'v43' is possibly undefined
// 1404EDCB0: variable 'v44' is possibly undefined
// 1404EDF06: variable 'v74' is possibly undefined
// 1404EDF3C: variable 'v76' is possibly undefined
// 1404EDF4E: variable 'v77' is possibly undefined
// 1404EDF4E: variable 'v78' is possibly undefined
// 1404EDF84: variable 'v80' is possibly undefined
// 1404EDF96: variable 'v81' is possibly undefined
// 1404EDF96: variable 'v82' is possibly undefined
// 1404EDFCC: variable 'v84' is possibly undefined
// 1404EDFDE: variable 'v85' is possibly undefined
// 1404EDFDE: variable 'v86' is possibly undefined
// 1404EE0D4: variable 'v102' is possibly undefined
// 1404EE0D4: variable 'v101' is possibly undefined
// 1404EE175: variable 'v107' is possibly undefined
// 1404EE187: variable 'v108' is possibly undefined
// 1404EE187: variable 'v109' is possibly undefined
// 1404EE1B5: variable 'v110' is possibly undefined
// 1404EE354: variable 'v135' is possibly undefined
// 1404EE40A: variable 'v141' is possibly undefined
// 1404EE4CD: variable 'v147' is possibly undefined
// 1404EE4DF: variable 'v148' is possibly undefined
// 1404EE4DF: variable 'v149' is possibly undefined
// 1404EE511: variable 'v151' is possibly undefined
// 1404EE523: variable 'v152' is possibly undefined
// 1404EE523: variable 'v153' is possibly undefined
// 1404EE55A: variable 'v155' is possibly undefined
// 1404EE56C: variable 'v156' is possibly undefined
// 1404EE56C: variable 'v157' is possibly undefined
// 1404EE5A3: variable 'v159' is possibly undefined
// 1404EE5B5: variable 'v160' is possibly undefined
// 1404EE5B5: variable 'v161' is possibly undefined
// 1404EE5D1: variable 'v87' is possibly undefined
// 1404EE6DC: variable 'v170' is possibly undefined
// 1404EE782: variable 'v175' is possibly undefined
// 1404EE7C0: variable 'v178' is possibly undefined
// 1404EE7C0: variable 'v179' is possibly undefined
// 1404EE7CF: variable 'v180' is possibly undefined
// 1404EE80C: variable 'v183' is possibly undefined
// 1404EE833: variable 'v184' is possibly undefined
// 1404EE8D9: variable 'v193' is possibly undefined
// 1404EE90C: variable 'v192' is possibly undefined
// 1404EE91C: variable 'v194' is possibly undefined
// 1404EE93C: variable 'v30' is possibly undefined
// 140B0D6B0: using guessed type wchar_t aEclaimstate[12];
// 140B0D6C8: using guessed type wchar_t aEscope[7];
// 140B0D6D8: using guessed type wchar_t aBalreadyownpen[30];
// 140B0D718: using guessed type wchar_t aBalreadyownbou[28];
// 140B0D750: using guessed type wchar_t aNrequiredtier_0[14];
// 140B0D770: using guessed type wchar_t aTpremium[9];
// 140B0D788: using guessed type wchar_t aTalternative[13];
// 140B0D7A8: using guessed type wchar_t aTprices[8];
// 140B0D7B8: using guessed type wchar_t aNid_13[4];
// 140B0D7C0: using guessed type wchar_t aStrvariantname[15];
// 140B0D7E0: using guessed type wchar_t aStrvariantdesc[22];
// 140B0D810: using guessed type wchar_t aNrequiredtier[14];
// 140B0D8C8: using guessed type wchar_t aBcanpurchase_1[13];
// 140B0D8E8: using guessed type wchar_t aBitemsaregifta[18];
// 140B0D910: using guessed type wchar_t aArrequiredenti[23];
// 140B0D940: using guessed type wchar_t aBaccountleveli[23];
// 140B0D970: using guessed type wchar_t aNcount_17[7];
// 140B0D980: using guessed type wchar_t aTitems[7];
// 140B0D990: using guessed type wchar_t aTdisplayinfos[14];
// 140B0D9B0: using guessed type wchar_t aEpurchaseresul[27];
// 140B0D9E8: using guessed type wchar_t aNid_14[4];
// 140B0D9F0: using guessed type wchar_t aEitemtype[10];
// 140B0DA08: using guessed type wchar_t aEunittype[10];
// 140B0DA20: using guessed type wchar_t aNduration[10];
// 140B0DA38: using guessed type wchar_t aBaccountunlock_1[27];
// 140B0DA70: using guessed type wchar_t aEitemtype_0[10];
// 140B0DA88: using guessed type wchar_t aNstoredisplayi[20];
// 140B0DAB0: using guessed type wchar_t aNcount_18[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;

