#include "../winhttp.h"

//----- (00000001404F2860) ----------------------------------------------------
#include "../winhttp.h"
#include "sub_1400580E0.c"
#include "sub_140057020.c"
#include "sub_140062650.c"

__int64 __fastcall sub_1404F2860(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rsi
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64* v16; // rax
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rbp
	wchar_t** v25; // rbx
	__int64* v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rbp
	wchar_t** v31; // rbx
	__int64* v32; // rax
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rax
	__int64* v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	__int64 v49; // rax
	__int64* v50; // rax
	__int64 v51; // rax
	__int64* v52; // rax
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v55; // rbx
	__int64 v56; // rax
	__int64 v57; // rax
	__int64* v58; // rax
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rax
	__int64* v62; // rax
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // rbx
	__int64 v66; // rax
	__int64 v67; // rax
	__int64* v68; // rax
	__int64 v69; // rax
	__int64* v70; // rax
	__int64 v71; // rax
	__int64* v72; // rax
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // rdx
	wchar_t** v76; // rbx
	__int64* v77; // rax
	__int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	unsigned int v82; // ebx
	unsigned int v83; // eax
	__int64 v84; // rax
	__int64 v85; // rcx
	unsigned __int64 v86; // rdx
	__int64 v87; // rcx
	__int64 v88; // rbx
	__int64 v89; // rax
	__int64 v90; // rcx
	__int64 v91; // rbx
	__int64 v92; // rax
	__int64 v93; // rcx
	__int64 v94; // rbx
	__int64 v95; // rax
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // rcx
	__int64 v99; // rbx
	__int64 v100; // rax
	__int64 v101; // rax
	__int64* v102; // rax
	__int64 v103; // rcx
	__int64 v104; // rbx
	__int64 v105; // rax
	__int64 v106; // rax
	__int64* v107; // rax
	__int64 v108; // rcx
	__int64 v109; // rbx
	__int64 v110; // rax
	__int64 v111; // rax
	__int64* v112; // rax
	__int64 v113; // rcx
	__int64 v114; // rbx
	__int64 v115; // rax
	__int64 v116; // rax
	__int64* v117; // rax
	__int64 v118; // rcx
	__int64 v119; // rbx
	__int64 v120; // rax
	__int64 v121; // rax
	__int64* v122; // rax
	__int64 v123; // rcx
	__int64 v124; // rbx
	__int64 v125; // rax
	__int64 v126; // rax
	__int64* v127; // rax
	__int64 v128; // rcx
	__int64 v129; // rbx
	__int64 v130; // rax
	__int64 v131; // rax
	__int64* v132; // rax
	__int64 v133; // rcx
	__int64 v134; // rbx
	__int64 v135; // rax
	__int64 v136; // rax
	__int64* v137; // rax
	__int64 v138; // rcx
	__int64 v139; // rbx
	__int64 v140; // rax
	__int64 v141; // rax
	__int64* v142; // rax
	__int64 v143; // rcx
	__int64 v144; // rbx
	__int64 v145; // rax
	__int64 v146; // rax
	__int64* v147; // rax
	__int64 v148; // rcx
	__int64 v149; // rbx
	__int64 v150; // rax
	__int64 v151; // rax
	__int64* v152; // rax
	__int64 v153; // rcx
	__int64 v154; // rbx
	__int64 v155; // rax
	__int64 v156; // rax
	__int64* v157; // rax
	__int64 v158; // rcx
	__int64 v159; // rbx
	__int64 v160; // rax
	__int64 v161; // rax
	__int64* v162; // rax
	__int64 v163; // rcx
	__int64 v164; // rbx
	__int64 v165; // rax
	__int64 v166; // rax
	__int64* v167; // rax
	__int64 v168; // rcx
	__int64 v169; // rbx
	__int64 v170; // rax
	__int64 v171; // rax
	__int64* v172; // rax
	__int64 v173; // rcx
	__int64 v174; // rbx
	__int64 v175; // rax
	__int64 v176; // rax
	__int64* v177; // rax
	__int64 v178; // rcx
	__int64 v179; // rbx
	__int64 v180; // rax
	__int64 v181; // rax
	__int64* v182; // rax
	__int64 v183; // rcx
	__int64 v184; // rbx
	__int64 v185; // rax
	__int64 v186; // rcx
	__int64 v187; // rbx
	__int64 v188; // rax
	__int64 v189; // rdx
	__int64 v190; // rsi
	wchar_t** v191; // rbx
	__int64* v192; // rax
	__int64 v193; // rcx
	__int64 v194; // rbx
	__int64 v195; // rax
	__int64 v196; // rcx
	__int64 v197; // rbx
	__int64 v198; // rax
	__int64 v199; // rcx
	__int64 v200; // rbx
	__int64 v201; // rax
	__int64 v202; // rax
	__int64* v203; // rax
	__int64 v204; // rcx
	__int64 v205; // rbx
	__int64 v206; // rax
	__int64 v207; // rax
	__int64* v208; // rax
	__int64 v209; // rcx
	__int64 v210; // rbx
	__int64 v211; // rax
	__int64 v212; // rax
	__int64* v213; // rax
	__int64 v214; // rcx
	__int64 v215; // rbx
	__int64 v216; // rax
	__int64 v217; // rax
	__int64* v218; // rax
	__int64 v219; // rcx
	__int64 v220; // rbx
	__int64 v221; // rax
	__int64 v222; // rax
	__int64* v223; // rax
	__int64 v224; // rdx
	__int64 v225; // rdx
	__int64 v226; // rbx
	__int64 v227; // rax
	__int64 v228; // rdx
	__int64 v229; // rdx
	__int64 v230; // rdx
	__int64 v231; // rbx
	__int64 v232; // rax
	__int64 v233; // rdx
	__int64 v234; // rdx
	__int64 v235; // rdx
	__int64 v236; // rdx
	__int64 v237; // rdx
	__int64 v239; // [rsp+30h] [rbp-38h] BYREF
	int v240; // [rsp+38h] [rbp-30h]

	sub_140057020(a1, "StorefrontLib", &off_140B69C60);
	v2 = a1[2];
	*(_QWORD*)v2 = 0x406AC00000000000i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"kSignatureGoodsCategoryId", 0x19ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v239 = v4;
	v240 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v239, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x406B000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"kProtobucksCategoryId", 0x15ui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v239 = v8;
	v240 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v239, v9);
	a1[2] -= 16i64;
	v10 = 22i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumClaimItemState", 0x16ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v11 = a1[2];
	v12 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CanClaim", 8ui64);
	v13 = a1[2];
	*(_QWORD*)v13 = 0i64;
	*(_DWORD*)(v13 + 8) = 3;
	a1[2] += 16i64;
	v14 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v14, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CharacterMaxed", 0xEui64);
	v15 = a1[2];
	*(_QWORD*)v15 = 0x3FF0000000000000i64;
	*(_DWORD*)(v15 + 8) = 3;
	a1[2] += 16i64;
	v16 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v16, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AccountMaxed", 0xCui64);
	v17 = a1[2];
	*(_QWORD*)v17 = 0x4000000000000000i64;
	*(_DWORD*)(v17 + 8) = 3;
	a1[2] += 16i64;
	v18 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v18, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AccountMaxedWithPending", 0x17ui64);
	v19 = a1[2];
	*(_QWORD*)v19 = 0x4008000000000000i64;
	*(_DWORD*)(v19 + 8) = 3;
	a1[2] += 16i64;
	v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreDisplayInfoDisplayType", 0x23ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v21 = a1[2];
	v22 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v21 + 8) = 5;
	v24 = 6i64;
	*(_QWORD*)v21 = v22;
	a1[2] += 16i64;
	v25 = &off_140C33CB0;
	do
	{
		sub_1400F06F0((__int64)a1, v23, *v25, *((_DWORD*)v25 + 2));
		v25 += 2;
		--v24;
	} while (v24);
	v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumBannerLocation", 0x16ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v27 = a1[2];
	v28 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v27 + 8) = 5;
	v30 = 3i64;
	*(_QWORD*)v27 = v28;
	a1[2] += 16i64;
	v31 = &off_140C31960;
	do
	{
		sub_1400F06F0((__int64)a1, v29, *v31, *((_DWORD*)v31 + 2));
		v31 += 2;
		--v30;
	} while (v30);
	v32 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v32, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"BannerPageType", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v33 = a1[2];
	v34 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v33 + 8) = 5;
	*(_QWORD*)v33 = v34;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Product", 7ui64);
	v35 = a1[2];
	*(_QWORD*)v35 = 0i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"SearchTerm", 0xAui64);
	v37 = a1[2];
	*(_QWORD*)v37 = 0x3FF0000000000000i64;
	*(_DWORD*)(v37 + 8) = 3;
	a1[2] += 16i64;
	v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Category", 8ui64);
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4000000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v40, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"BrowserLink", 0xBui64);
	v41 = a1[2];
	*(_QWORD*)v41 = 0x4008000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	a1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"OfferGroup", 0xAui64);
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4010000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Signature", 9ui64);
	v45 = a1[2];
	*(_QWORD*)v45 = 0x4018000000000000i64;
	*(_DWORD*)(v45 + 8) = 3;
	a1[2] += 16i64;
	v46 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v46, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumRealCurrency", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v47 = a1[2];
	v48 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v47 + 8) = 5;
	*(_QWORD*)v47 = v48;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, qword_1409F0E1C, 3ui64);
	v49 = a1[2];
	*(_QWORD*)v49 = 0i64;
	*(_DWORD*)(v49 + 8) = 3;
	a1[2] += 16i64;
	v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F0DAC, 3ui64);
	v51 = a1[2];
	*(_QWORD*)v51 = 0x3FF0000000000000i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v52, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F0DC4, 3ui64);
	v53 = a1[2];
	*(_QWORD*)v53 = 0x4000000000000000i64;
	*(_DWORD*)(v53 + 8) = 3;
	a1[2] += 16i64;
	v54 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v54, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreDisplayFlag", 0x18ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v55 = a1[2];
	v56 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v55 + 8) = 5;
	*(_QWORD*)v55 = v56;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, qword_1409F0DF4, 3ui64);
	v57 = a1[2];
	*(_QWORD*)v57 = 0x3FF0000000000000i64;
	*(_DWORD*)(v57 + 8) = 3;
	a1[2] += 16i64;
	v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Recommended", 0xBui64);
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4000000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Popular", 7ui64);
	v61 = a1[2];
	*(_QWORD*)v61 = 0x4010000000000000i64;
	*(_DWORD*)(v61 + 8) = 3;
	a1[2] += 16i64;
	v62 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v62, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LimitedTime", 0xBui64);
	v63 = a1[2];
	*(_QWORD*)v63 = 0x4020000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v64, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreDiscountType", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v65 = a1[2];
	v66 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v65 + 8) = 5;
	*(_QWORD*)v65 = v66;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"None", 4ui64);
	v67 = a1[2];
	*(_QWORD*)v67 = 0i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v68, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Fixed", 5ui64);
	v69 = a1[2];
	*(_QWORD*)v69 = 0x3FF0000000000000i64;
	*(_DWORD*)(v69 + 8) = 3;
	a1[2] += 16i64;
	v70 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v70, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Percentage", 0xAui64);
	v71 = a1[2];
	*(_QWORD*)v71 = 0x4000000000000000i64;
	*(_DWORD*)(v71 + 8) = 3;
	a1[2] += 16i64;
	v72 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v72, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreError", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v73 = a1[2];
	v74 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v73 + 8) = 5;
	*(_QWORD*)v73 = v74;
	a1[2] += 16i64;
	v76 = &off_140C36BF0;
	do
	{
		sub_1400F06F0((__int64)a1, v75, *v76, *((_DWORD*)v76 + 2));
		v76 += 2;
		--v10;
	} while (v10);
	v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreLink", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v78 = a1[2];
	v79 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v78 + 8) = 5;
	*(_QWORD*)v78 = v79;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Signature", 9ui64);
	v80 = a1[2];
	*(_QWORD*)v80 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v80 + 8) = 3;
	a1[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v82 = 0;
	while (1)
	{
		if (qword_140C63838)
		{
			v83 = qword_140C63838(off_140A6D850, qword_140C63858);
			goto LABEL_31;
		}
		if (dword_140C63F5C || (int)sub_14023F7E0() < 0)
			break;
		v83 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C650E0 + 40i64))(qword_140C650E0);
	LABEL_31:
		if (v82 >= v83)
			break;
		if (qword_140C63848)
		{
			v84 = qword_140C63848(off_140A6D850, v82, qword_140C63858);
		LABEL_39:
			v85 = v84;
			goto LABEL_40;
		}
		if (dword_140C63F5C)
		{
			v85 = 0i64;
		}
		else
		{
			if ((int)sub_14023F7E0() >= 0)
			{
				v84 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C650E0 + 32i64))(qword_140C650E0, v82);
				goto LABEL_39;
			}
			v85 = 0i64;
		}
	LABEL_40:
		v86 = *(_QWORD*)(v85 + 8);
		if (v86)
		{
			if (v86 <= qword_140C3FE70)
				sub_1400F06F0((__int64)a1, v86, (unsigned __int16*)(v86 + qword_140C3FE68), *(_DWORD*)v85);
			else
				sub_1400F06F0((__int64)a1, v86, 0i64, *(_DWORD*)v85);
			++v82;
		}
		else
		{
			sub_1400F06F0((__int64)a1, 0i64, 0i64, *(_DWORD*)v85);
			++v82;
		}
	}
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v87 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v87 + 120) >= *(_QWORD*)(v87 + 112))
		sub_14005E2C0((__int64)a1);
	v88 = a1[2];
	v89 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumModelSequence", 0x15ui64);
	*(_DWORD*)(v88 + 8) = 4;
	*(_QWORD*)v88 = v89;
	v90 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v90 + 120) >= *(_QWORD*)(v90 + 112))
		sub_14005E2C0((__int64)a1);
	v91 = a1[2];
	v92 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v91 + 8) = 5;
	*(_QWORD*)v91 = v92;
	v93 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v93 + 120) >= *(_QWORD*)(v93 + 112))
		sub_14005E2C0((__int64)a1);
	v94 = a1[2];
	v95 = sub_140062650((__int64)a1, (unsigned __int64*)"APState0Idle", 0xCui64);
	*(_DWORD*)(v94 + 8) = 4;
	*(_QWORD*)v94 = v95;
	a1[2] += 16i64;
	v96 = a1[2];
	*(_QWORD*)v96 = 0x4091780000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	a1[2] += 16i64;
	v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v98 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v98 + 120) >= *(_QWORD*)(v98 + 112))
		sub_14005E2C0((__int64)a1);
	v99 = a1[2];
	v100 = sub_140062650((__int64)a1, (unsigned __int64*)"APState1Idle", 0xCui64);
	*(_DWORD*)(v99 + 8) = 4;
	*(_QWORD*)v99 = v100;
	a1[2] += 16i64;
	v101 = a1[2];
	*(_QWORD*)v101 = 0x4091800000000000i64;
	*(_DWORD*)(v101 + 8) = 3;
	a1[2] += 16i64;
	v102 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v102, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v103 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v103 + 120) >= *(_QWORD*)(v103 + 112))
		sub_14005E2C0((__int64)a1);
	v104 = a1[2];
	v105 = sub_140062650((__int64)a1, (unsigned __int64*)"APState2Idle", 0xCui64);
	*(_DWORD*)(v104 + 8) = 4;
	*(_QWORD*)v104 = v105;
	a1[2] += 16i64;
	v106 = a1[2];
	*(_QWORD*)v106 = 0x4091880000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	a1[2] += 16i64;
	v107 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v107, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v108 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v108 + 120) >= *(_QWORD*)(v108 + 112))
		sub_14005E2C0((__int64)a1);
	v109 = a1[2];
	v110 = sub_140062650((__int64)a1, (unsigned __int64*)"PistolsReady", 0xCui64);
	*(_DWORD*)(v109 + 8) = 4;
	*(_QWORD*)v109 = v110;
	a1[2] += 16i64;
	v111 = a1[2];
	*(_QWORD*)v111 = 0x4074600000000000i64;
	*(_DWORD*)(v111 + 8) = 3;
	a1[2] += 16i64;
	v112 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v112, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v113 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v113 + 120) >= *(_QWORD*)(v113 + 112))
		sub_14005E2C0((__int64)a1);
	v114 = a1[2];
	v115 = sub_140062650((__int64)a1, (unsigned __int64*)"ClawsReady", 0xAui64);
	*(_DWORD*)(v114 + 8) = 4;
	*(_QWORD*)v114 = v115;
	a1[2] += 16i64;
	v116 = a1[2];
	*(_QWORD*)v116 = 0x40920C0000000000i64;
	*(_DWORD*)(v116 + 8) = 3;
	a1[2] += 16i64;
	v117 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v117, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v118 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v118 + 120) >= *(_QWORD*)(v118 + 112))
		sub_14005E2C0((__int64)a1);
	v119 = a1[2];
	v120 = sub_140062650((__int64)a1, (unsigned __int64*)"HeavyGunReady", 0xDui64);
	*(_DWORD*)(v119 + 8) = 4;
	*(_QWORD*)v119 = v120;
	a1[2] += 16i64;
	v121 = a1[2];
	*(_QWORD*)v121 = 0x40BC0F0000000000i64;
	*(_DWORD*)(v121 + 8) = 3;
	a1[2] += 16i64;
	v122 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v122, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v123 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v123 + 120) >= *(_QWORD*)(v123 + 112))
		sub_14005E2C0((__int64)a1);
	v124 = a1[2];
	v125 = sub_140062650((__int64)a1, (unsigned __int64*)"TwoHReady", 9ui64);
	*(_DWORD*)(v124 + 8) = 4;
	*(_QWORD*)v124 = v125;
	a1[2] += 16i64;
	v126 = a1[2];
	*(_QWORD*)v126 = 0x4055800000000000i64;
	*(_DWORD*)(v126 + 8) = 3;
	a1[2] += 16i64;
	v127 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v127, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v128 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v128 + 120) >= *(_QWORD*)(v128 + 112))
		sub_14005E2C0((__int64)a1);
	v129 = a1[2];
	v130 = sub_140062650((__int64)a1, (unsigned __int64*)"EsperReady", 0xAui64);
	*(_DWORD*)(v129 + 8) = 4;
	*(_QWORD*)v129 = v130;
	a1[2] += 16i64;
	v131 = a1[2];
	*(_QWORD*)v131 = 0x4095D40000000000i64;
	*(_DWORD*)(v131 + 8) = 3;
	a1[2] += 16i64;
	v132 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v132, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v133 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v133 + 120) >= *(_QWORD*)(v133 + 112))
		sub_14005E2C0((__int64)a1);
	v134 = a1[2];
	v135 = sub_140062650((__int64)a1, (unsigned __int64*)"ShockPaddlesReady", 0x11ui64);
	*(_DWORD*)(v134 + 8) = 4;
	*(_QWORD*)v134 = v135;
	a1[2] += 16i64;
	v136 = a1[2];
	*(_QWORD*)v136 = 0x4094980000000000i64;
	*(_DWORD*)(v136 + 8) = 3;
	a1[2] += 16i64;
	v137 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v137, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v138 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v138 + 120) >= *(_QWORD*)(v138 + 112))
		sub_14005E2C0((__int64)a1);
	v139 = a1[2];
	v140 = sub_140062650((__int64)a1, (unsigned __int64*)"PistolsStand", 0xCui64);
	*(_DWORD*)(v139 + 8) = 4;
	*(_QWORD*)v139 = v140;
	a1[2] += 16i64;
	v141 = a1[2];
	*(_QWORD*)v141 = 0x407C400000000000i64;
	*(_DWORD*)(v141 + 8) = 3;
	a1[2] += 16i64;
	v142 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v142, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v143 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v143 + 120) >= *(_QWORD*)(v143 + 112))
		sub_14005E2C0((__int64)a1);
	v144 = a1[2];
	v145 = sub_140062650((__int64)a1, (unsigned __int64*)"ClawsStand", 0xAui64);
	*(_DWORD*)(v144 + 8) = 4;
	*(_QWORD*)v144 = v145;
	a1[2] += 16i64;
	v146 = a1[2];
	*(_QWORD*)v146 = 0x4091FC0000000000i64;
	*(_DWORD*)(v146 + 8) = 3;
	a1[2] += 16i64;
	v147 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v147, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v148 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v148 + 120) >= *(_QWORD*)(v148 + 112))
		sub_14005E2C0((__int64)a1);
	v149 = a1[2];
	v150 = sub_140062650((__int64)a1, (unsigned __int64*)"TwoHGunStand", 0xCui64);
	*(_DWORD*)(v149 + 8) = 4;
	*(_QWORD*)v149 = v150;
	a1[2] += 16i64;
	v151 = a1[2];
	*(_QWORD*)v151 = 0x4086180000000000i64;
	*(_DWORD*)(v151 + 8) = 3;
	a1[2] += 16i64;
	v152 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v152, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v153 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v153 + 120) >= *(_QWORD*)(v153 + 112))
		sub_14005E2C0((__int64)a1);
	v154 = a1[2];
	v155 = sub_140062650((__int64)a1, (unsigned __int64*)"TwoHStand", 9ui64);
	*(_DWORD*)(v154 + 8) = 4;
	*(_QWORD*)v154 = v155;
	a1[2] += 16i64;
	v156 = a1[2];
	*(_QWORD*)v156 = 0x4057800000000000i64;
	*(_DWORD*)(v156 + 8) = 3;
	a1[2] += 16i64;
	v157 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v157, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v158 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v158 + 120) >= *(_QWORD*)(v158 + 112))
		sub_14005E2C0((__int64)a1);
	v159 = a1[2];
	v160 = sub_140062650((__int64)a1, (unsigned __int64*)"DefaultStand", 0xCui64);
	*(_DWORD*)(v159 + 8) = 4;
	*(_QWORD*)v159 = v160;
	a1[2] += 16i64;
	v161 = a1[2];
	*(_QWORD*)v161 = 0x4062C00000000000i64;
	*(_DWORD*)(v161 + 8) = 3;
	a1[2] += 16i64;
	v162 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v162, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v163 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v163 + 120) >= *(_QWORD*)(v163 + 112))
		sub_14005E2C0((__int64)a1);
	v164 = a1[2];
	v165 = sub_140062650((__int64)a1, (unsigned __int64*)"ShockPaddlesStand", 0x11ui64);
	*(_DWORD*)(v164 + 8) = 4;
	*(_QWORD*)v164 = v165;
	a1[2] += 16i64;
	v166 = a1[2];
	*(_QWORD*)v166 = 0x4094A80000000000i64;
	*(_DWORD*)(v166 + 8) = 3;
	a1[2] += 16i64;
	v167 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v167, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v168 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v168 + 120) >= *(_QWORD*)(v168 + 112))
		sub_14005E2C0((__int64)a1);
	v169 = a1[2];
	v170 = sub_140062650((__int64)a1, (unsigned __int64*)"DefaultStartScreenLoop01", 0x18ui64);
	*(_DWORD*)(v169 + 8) = 4;
	*(_QWORD*)v169 = v170;
	a1[2] += 16i64;
	v171 = a1[2];
	*(_QWORD*)v171 = 0x40B5EC0000000000i64;
	*(_DWORD*)(v171 + 8) = 3;
	a1[2] += 16i64;
	v172 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v172, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v173 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v173 + 120) >= *(_QWORD*)(v173 + 112))
		sub_14005E2C0((__int64)a1);
	v174 = a1[2];
	v175 = sub_140062650((__int64)a1, (unsigned __int64*)"DefaultExileStartScreenLoop01", 0x1Dui64);
	*(_DWORD*)(v174 + 8) = 4;
	*(_QWORD*)v174 = v175;
	a1[2] += 16i64;
	v176 = a1[2];
	*(_QWORD*)v176 = 0x40BE2C0000000000i64;
	*(_DWORD*)(v176 + 8) = 3;
	a1[2] += 16i64;
	v177 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v177, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v178 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v178 + 120) >= *(_QWORD*)(v178 + 112))
		sub_14005E2C0((__int64)a1);
	v179 = a1[2];
	v180 = sub_140062650((__int64)a1, (unsigned __int64*)"DefaultDominionStartScreenLoop01", 0x20ui64);
	*(_DWORD*)(v179 + 8) = 4;
	*(_QWORD*)v179 = v180;
	a1[2] += 16i64;
	v181 = a1[2];
	*(_QWORD*)v181 = 0x40BE2B0000000000i64;
	*(_DWORD*)(v181 + 8) = 3;
	a1[2] += 16i64;
	v182 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v182, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v183 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v183 + 120) >= *(_QWORD*)(v183 + 112))
		sub_14005E2C0((__int64)a1);
	v184 = a1[2];
	v185 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumPurchaseResultDisplayType", 0x21ui64);
	*(_DWORD*)(v184 + 8) = 4;
	*(_QWORD*)v184 = v185;
	v186 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v186 + 120) >= *(_QWORD*)(v186 + 112))
		sub_14005E2C0((__int64)a1);
	v187 = a1[2];
	v188 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v187 + 8) = 5;
	v190 = 3i64;
	*(_QWORD*)v187 = v188;
	a1[2] += 16i64;
	v191 = &off_140C318A0;
	do
	{
		sub_1400F06F0((__int64)a1, v189, *v191, *((_DWORD*)v191 + 2));
		v191 += 2;
		--v190;
	} while (v190);
	v192 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v192, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v193 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v193 + 120) >= *(_QWORD*)(v193 + 112))
		sub_14005E2C0((__int64)a1);
	v194 = a1[2];
	v195 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumStoreSubscriptionUnit", 0x1Dui64);
	*(_DWORD*)(v194 + 8) = 4;
	*(_QWORD*)v194 = v195;
	v196 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v196 + 120) >= *(_QWORD*)(v196 + 112))
		sub_14005E2C0((__int64)a1);
	v197 = a1[2];
	v198 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v197 + 8) = 5;
	*(_QWORD*)v197 = v198;
	v199 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v199 + 120) >= *(_QWORD*)(v199 + 112))
		sub_14005E2C0((__int64)a1);
	v200 = a1[2];
	v201 = sub_140062650((__int64)a1, (unsigned __int64*)"Second", 6ui64);
	*(_DWORD*)(v200 + 8) = 4;
	*(_QWORD*)v200 = v201;
	a1[2] += 16i64;
	v202 = a1[2];
	*(_QWORD*)v202 = 0x3FF0000000000000i64;
	*(_DWORD*)(v202 + 8) = 3;
	a1[2] += 16i64;
	v203 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v203, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v204 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v204 + 120) >= *(_QWORD*)(v204 + 112))
		sub_14005E2C0((__int64)a1);
	v205 = a1[2];
	v206 = sub_140062650((__int64)a1, (unsigned __int64*)"Minute", 6ui64);
	*(_DWORD*)(v205 + 8) = 4;
	*(_QWORD*)v205 = v206;
	a1[2] += 16i64;
	v207 = a1[2];
	*(_QWORD*)v207 = 0x4000000000000000i64;
	*(_DWORD*)(v207 + 8) = 3;
	a1[2] += 16i64;
	v208 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v208, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v209 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v209 + 120) >= *(_QWORD*)(v209 + 112))
		sub_14005E2C0((__int64)a1);
	v210 = a1[2];
	v211 = sub_140062650((__int64)a1, (unsigned __int64*)"Hour", 4ui64);
	*(_DWORD*)(v210 + 8) = 4;
	*(_QWORD*)v210 = v211;
	a1[2] += 16i64;
	v212 = a1[2];
	*(_QWORD*)v212 = 0x4008000000000000i64;
	*(_DWORD*)(v212 + 8) = 3;
	a1[2] += 16i64;
	v213 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v213, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v214 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v214 + 120) >= *(_QWORD*)(v214 + 112))
		sub_14005E2C0((__int64)a1);
	v215 = a1[2];
	v216 = sub_140062650((__int64)a1, (unsigned __int64*)"Day", 3ui64);
	*(_DWORD*)(v215 + 8) = 4;
	*(_QWORD*)v215 = v216;
	a1[2] += 16i64;
	v217 = a1[2];
	*(_QWORD*)v217 = 0x4010000000000000i64;
	*(_DWORD*)(v217 + 8) = 3;
	a1[2] += 16i64;
	v218 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v218, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v219 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v219 + 120) >= *(_QWORD*)(v219 + 112))
		sub_14005E2C0((__int64)a1);
	v220 = a1[2];
	v221 = sub_140062650((__int64)a1, (unsigned __int64*)"Week", 4ui64);
	*(_DWORD*)(v220 + 8) = 4;
	*(_QWORD*)v220 = v221;
	a1[2] += 16i64;
	v222 = a1[2];
	*(_QWORD*)v222 = 0x4014000000000000i64;
	*(_DWORD*)(v222 + 8) = 3;
	a1[2] += 16i64;
	v223 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v223, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400EFF50((__int64)a1, v224, (unsigned __int64*)"Month", 6);
	sub_1400EFF50((__int64)a1, v225, (unsigned __int64*)"Year", 7);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreItemType", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v226 = a1[2];
	v227 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v226 + 8) = 5;
	*(_QWORD*)v226 = v227;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v228, (unsigned __int64*)"GameItem", 0);
	sub_1400EFF50((__int64)a1, v229, (unsigned __int64*)"Subscription", 1);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v230, (unsigned __int64*)"CodeEnumEntitlementScope", (__int64)&off_140C36F40, 3u);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumLegalLink", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v231 = a1[2];
	v232 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v231 + 8) = 5;
	*(_QWORD*)v231 = v232;
	a1[2] += 16i64;
	sub_1400EFF50((__int64)a1, v233, (unsigned __int64*)"ToS", 0);
	sub_1400EFF50((__int64)a1, v234, (unsigned __int64*)"PrivacyPolicy", 1);
	sub_1400EFF50((__int64)a1, v235, (unsigned __int64*)"LegalNotice", 2);
	sub_1400EFF50((__int64)a1, v236, (unsigned __int64*)"PrivacyRights", 3);
	sub_1400EFF50((__int64)a1, v237, (unsigned __int64*)"Cookies", 4);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1404F2B7A: variable 'v23' is possibly undefined
// 1404F2C1A: variable 'v29' is possibly undefined
// 1404F337A: variable 'v75' is possibly undefined
// 1404F3FDA: variable 'v189' is possibly undefined
// 1404F42FF: variable 'v224' is possibly undefined
// 1404F4314: variable 'v225' is possibly undefined
// 1404F438E: variable 'v228' is possibly undefined
// 1404F43A3: variable 'v229' is possibly undefined
// 1404F43DE: variable 'v230' is possibly undefined
// 1404F443B: variable 'v233' is possibly undefined
// 1404F4450: variable 'v234' is possibly undefined
// 1404F4465: variable 'v235' is possibly undefined
// 1404F447A: variable 'v236' is possibly undefined
// 1404F448F: variable 'v237' is possibly undefined
// 1409F0DAC: using guessed type unsigned __int64 qword_1409F0DAC[3];
// 1409F0DC4: using guessed type unsigned __int64 qword_1409F0DC4[6];
// 1409F0DF4: using guessed type unsigned __int64 qword_1409F0DF4[5];
// 1409F0E1C: using guessed type unsigned __int64 qword_1409F0E1C[3];
// 140A6D850: using guessed type wchar_t *off_140A6D850[2];
// 140B69C60: using guessed type char *off_140B69C60;
// 140C318A0: using guessed type wchar_t *off_140C318A0;
// 140C31960: using guessed type wchar_t *off_140C31960;
// 140C33CB0: using guessed type wchar_t *off_140C33CB0;
// 140C36BF0: using guessed type wchar_t *off_140C36BF0;
// 140C36F40: using guessed type wchar_t *off_140C36F40;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F5C: using guessed type int dword_140C63F5C;
// 140C650E0: using guessed type __int64 qword_140C650E0;

