#include "../winhttp.h"

//----- (000000014003E5B0) ----------------------------------------------------
__int64 __fastcall sub_14003E5B0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbp
	_QWORD* v4; // rdi
	__int64 v5; // rcx
	__int64(__fastcall * v6)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rbx
	__int64(__fastcall * v7)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	__int64 v8; // rcx
	__int64(__fastcall * v9)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	__int64 v10; // rcx
	int* v11; // rbx
	void* v12; // rax
	__int64 v13; // r9
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rbx
	__int64 v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rax
	__int64* v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // rax
	__int64* v55; // rax
	__int64 v56; // rax
	__int64* v57; // rax
	__int64 v58; // rax
	__int64* v59; // rax
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rax
	__int64* v65; // rax
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // rax
	__int64* v69; // rax
	__int64 v70; // rax
	__int64* v71; // rax
	__int64 v72; // rax
	__int64* v73; // rax
	__int64 v74; // rbx
	__int64 v75; // rax
	__int64 v76; // rax
	__int64* v77; // rax
	__int64 v78; // rax
	__int64* v79; // rax
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rax
	__int64* v83; // rax
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rax
	__int64* v91; // rax
	__int64 v92; // rax
	__int64* v93; // rax
	__int64 v94; // rax
	__int64* v95; // rax
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // rax
	__int64* v99; // rax
	__int64 v100; // rax
	__int64* v101; // rax
	__int64 v102; // rax
	__int64* v103; // rax
	__int64 v104; // rax
	__int64* v105; // rax
	__int64 v106; // rax
	__int64* v107; // rax
	__int64 v108; // rax
	__int64* v109; // rax
	__int64 v110; // rax
	__int64* v111; // rax
	__int64 v112; // rax
	__int64* v113; // rax
	__int64 v114; // rax
	__int64* v115; // rax
	__int64 v116; // rax
	__int64* v117; // rax
	__int64 v118; // rax
	__int64* v119; // rax
	__int64 v120; // rax
	__int64* v121; // rax
	__int64 v122; // rax
	__int64* v123; // rax
	__int64 v124; // rax
	__int64* v125; // rax
	__int64 v126; // rbx
	__int64 v127; // rax
	__int64 v128; // rax
	__int64* v129; // rax
	__int64 v130; // rax
	__int64* v131; // rax
	__int64 v132; // rax
	__int64* v133; // rax
	__int64 v134; // rax
	__int64* v135; // rax
	__int64 v136; // rax
	__int64* v137; // rax
	__int64 v138; // rax
	__int64* v139; // rax
	__int64 v140; // rax
	__int64* v141; // rax
	__int64 v142; // rax
	__int64* v143; // rax
	__int64 v144; // rax
	__int64* v145; // rax
	__int64 v146; // rax
	__int64* v147; // rax
	__int64 v148; // rax
	__int64* v149; // rax
	__int64 v150; // rax
	__int64* v151; // rax
	__int64 v152; // rax
	__int64* v153; // rax
	__int64 v154; // rdx
	__int64 v155; // rdx
	__int64 v156; // rdx
	__int64 v157; // rdx
	__int64 v158; // rdx
	__int64 v159; // rdx
	__int64 v160; // rdx
	__int64 v161; // rdx
	__int64 v162; // rdx
	__int64 v163; // rdx
	__int64 v164; // rdx
	__int64 v165; // rdx
	__int64 v166; // rdx
	__int64 v167; // rdx
	__int64 v168; // rdx
	__int64 v169; // rdx
	__int64 v170; // rdx
	__int64 v171; // rdx
	__int64 v172; // rdx
	__int64 v173; // rbx
	void* v174; // rax
	unsigned int* v175; // r9
	void* v176; // rax
	unsigned int* v177; // r9
	void* v179; // [rsp+30h] [rbp-38h] BYREF
	__int64(__fastcall * v180)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // [rsp+38h] [rbp-30h]

	v2 = *(_QWORD*)(a1 + 72);
	v3 = v2 + 384;
	v4 = *(_QWORD**)(v2 + 400);
	sub_140508240(v2);
	sub_1404F8440(*(_QWORD*)(a1 + 72));
	sub_140509470(*(_QWORD*)(a1 + 72));
	v179 = sub_1405085C0;
	v5 = *(_QWORD*)(a1 + 72);
	v6 = sub_140001B30;
	v7 = sub_140001B30;
	if (!sub_1405085C0)
		v7 = 0i64;
	v180 = v7;
	sub_1400F85D0(v5 + 2688, (int*)L"CashWindow", &v179);
	v179 = sub_1404F7F50;
	v8 = *(_QWORD*)(a1 + 72);
	v9 = sub_140001B30;
	if (!sub_1404F7F50)
		v9 = 0i64;
	v180 = v9;
	sub_1400F85D0(v8 + 2688, (int*)L"CostumeWindow", &v179);
	v10 = *(_QWORD*)(a1 + 72);
	v179 = sub_140508F90;
	if (!sub_140508F90)
		v6 = 0i64;
	v180 = v6;
	sub_1400F85D0(v10 + 2688, (int*)L"BinkWindow", &v179);
	sub_1401339D0(v4);
	sub_14004DCF0(*(_QWORD*)(a1 + 72));
	sub_1400016D0(*(_QWORD*)(a1 + 72));
	v11 = sub_14018B280(1i64, 0);
	if (v11)
		sub_1400F2440(v3, (__int64)"Money", (__int64)sub_140500A10);
	else
		v11 = 0i64;
	*(_QWORD*)(a1 + 136) = v11;
	sub_140057020(v4, "PreGameLib", &off_140C566B0);
	v4[2] -= 16i64;
	v12 = (void*)sub_140062650((__int64)v4, (unsigned __int64*)"PreGameLib", 0xAui64);
	v13 = v4[2];
	v179 = v12;
	LODWORD(v180) = 4;
	sub_14005E8E0((__int64)v4, (__int64)(v4 + 15), (int*)&v179, v13);
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumMusic", 0xDui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v14 = v4[2];
	v15 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Auth", 4ui64);
	v16 = v4[2];
	*(_QWORD*)v16 = 0x4010000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	v4[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v17, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CharacterCreate", 0xFui64);
	v18 = v4[2];
	*(_QWORD*)v18 = 0x4014000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	v4[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v19, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CharacterDelete", 0xFui64);
	v20 = v4[2];
	*(_QWORD*)v20 = 0x4018000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	v4[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v21, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CharacterSelect", 0xFui64);
	v22 = v4[2];
	*(_QWORD*)v22 = 0x401C000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	v4[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v23, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Login", 5ui64);
	v24 = v4[2];
	*(_QWORD*)v24 = 0x4024000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	v4[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v25, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Realm", 5ui64);
	v26 = v4[2];
	*(_QWORD*)v26 = 0x4028000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	v4[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v27, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Default", 7ui64);
	v28 = v4[2];
	*(_QWORD*)v28 = 0x402A000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	v4[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v29, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumGender", 0xEui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v30 = v4[2];
	v31 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v30 + 8) = 5;
	*(_QWORD*)v30 = v31;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Male", 4ui64);
	v32 = v4[2];
	*(_QWORD*)v32 = 0i64;
	*(_DWORD*)(v32 + 8) = 3;
	v4[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v33, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Female", 6ui64);
	v34 = v4[2];
	*(_QWORD*)v34 = 0x3FF0000000000000i64;
	*(_DWORD*)(v34 + 8) = 3;
	v4[2] += 16i64;
	v35 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v35, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Unisex", 6ui64);
	v36 = v4[2];
	*(_QWORD*)v36 = 0x4000000000000000i64;
	*(_DWORD*)(v36 + 8) = 3;
	v4[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v37, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumFaction", 0xFui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v38 = v4[2];
	v39 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v38 + 8) = 5;
	*(_QWORD*)v38 = v39;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Dominion", 8ui64);
	v40 = v4[2];
	*(_QWORD*)v40 = 0x4064C00000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	v4[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v41, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Exile", 5ui64);
	v42 = v4[2];
	*(_QWORD*)v42 = 0x4064E00000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	v4[2] += 16i64;
	v43 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v43, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumRace", 0xCui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v44 = v4[2];
	v45 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v44 + 8) = 5;
	*(_QWORD*)v44 = v45;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Human", 5ui64);
	v46 = v4[2];
	*(_QWORD*)v46 = 0x3FF0000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	v4[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v47, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Granok", 6ui64);
	v48 = v4[2];
	*(_QWORD*)v48 = 0x4008000000000000i64;
	*(_DWORD*)(v48 + 8) = 3;
	v4[2] += 16i64;
	v49 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v49, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Aurin", 5ui64);
	v50 = v4[2];
	*(_QWORD*)v50 = 0x4010000000000000i64;
	*(_DWORD*)(v50 + 8) = 3;
	v4[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v51, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Draken", 6ui64);
	v52 = v4[2];
	*(_QWORD*)v52 = 0x4014000000000000i64;
	*(_DWORD*)(v52 + 8) = 3;
	v4[2] += 16i64;
	v53 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v53, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Mechari", 7ui64);
	v54 = v4[2];
	*(_QWORD*)v54 = 0x4028000000000000i64;
	*(_DWORD*)(v54 + 8) = 3;
	v4[2] += 16i64;
	v55 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v55, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Mordesh", 7ui64);
	v56 = v4[2];
	*(_QWORD*)v56 = 0x4030000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	v4[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v57, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Chua", 4ui64);
	v58 = v4[2];
	*(_QWORD*)v58 = 0x402A000000000000i64;
	*(_DWORD*)(v58 + 8) = 3;
	v4[2] += 16i64;
	v59 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v59, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumClass", 0xDui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v60 = v4[2];
	v61 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v60 + 8) = 5;
	*(_QWORD*)v60 = v61;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Warrior", 7ui64);
	v62 = v4[2];
	*(_QWORD*)v62 = 0x3FF0000000000000i64;
	*(_DWORD*)(v62 + 8) = 3;
	v4[2] += 16i64;
	v63 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v63, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Engineer", 8ui64);
	v64 = v4[2];
	*(_QWORD*)v64 = 0x4000000000000000i64;
	*(_DWORD*)(v64 + 8) = 3;
	v4[2] += 16i64;
	v65 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v65, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Esper", 5ui64);
	v66 = v4[2];
	*(_QWORD*)v66 = 0x4008000000000000i64;
	*(_DWORD*)(v66 + 8) = 3;
	v4[2] += 16i64;
	v67 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v67, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Medic", 5ui64);
	v68 = v4[2];
	*(_QWORD*)v68 = 0x4010000000000000i64;
	*(_DWORD*)(v68 + 8) = 3;
	v4[2] += 16i64;
	v69 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v69, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Stalker", 7ui64);
	v70 = v4[2];
	*(_QWORD*)v70 = 0x4014000000000000i64;
	*(_DWORD*)(v70 + 8) = 3;
	v4[2] += 16i64;
	v71 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v71, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Spellslinger", 0xCui64);
	v72 = v4[2];
	*(_QWORD*)v72 = 0x401C000000000000i64;
	*(_DWORD*)(v72 + 8) = 3;
	v4[2] += 16i64;
	v73 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v73, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumPlayerPathType", 0x16ui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v74 = v4[2];
	v75 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v74 + 8) = 5;
	*(_QWORD*)v74 = v75;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Explorer", 8ui64);
	v76 = v4[2];
	*(_QWORD*)v76 = 0x4008000000000000i64;
	*(_DWORD*)(v76 + 8) = 3;
	v4[2] += 16i64;
	v77 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v77, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Scientist", 9ui64);
	v78 = v4[2];
	*(_QWORD*)v78 = 0x4000000000000000i64;
	*(_DWORD*)(v78 + 8) = 3;
	v4[2] += 16i64;
	v79 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v79, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Settler", 7ui64);
	v80 = v4[2];
	*(_QWORD*)v80 = 0x3FF0000000000000i64;
	*(_DWORD*)(v80 + 8) = 3;
	v4[2] += 16i64;
	v81 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v81, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Soldier", 7ui64);
	v82 = v4[2];
	*(_QWORD*)v82 = 0i64;
	*(_DWORD*)(v82 + 8) = 3;
	v4[2] += 16i64;
	v83 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v83, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumModelAttachment", 0x17ui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v84 = v4[2];
	v85 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v84 + 8) = 5;
	*(_QWORD*)v84 = v85;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"SpellMisc01", 0xBui64);
	v86 = v4[2];
	*(_QWORD*)v86 = 0x4028000000000000i64;
	*(_DWORD*)(v86 + 8) = 3;
	v4[2] += 16i64;
	v87 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v87, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"PropMisc01", 0xAui64);
	v88 = v4[2];
	*(_QWORD*)v88 = 0x4031000000000000i64;
	*(_DWORD*)(v88 + 8) = 3;
	v4[2] += 16i64;
	v89 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v89, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc01", 8ui64);
	v90 = v4[2];
	*(_QWORD*)v90 = 0x4035000000000000i64;
	*(_DWORD*)(v90 + 8) = 3;
	v4[2] += 16i64;
	v91 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v91, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc02", 8ui64);
	v92 = v4[2];
	*(_QWORD*)v92 = 0x4036000000000000i64;
	*(_DWORD*)(v92 + 8) = 3;
	v4[2] += 16i64;
	v93 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v93, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc03", 8ui64);
	v94 = v4[2];
	*(_QWORD*)v94 = 0x4037000000000000i64;
	*(_DWORD*)(v94 + 8) = 3;
	v4[2] += 16i64;
	v95 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v95, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc04", 8ui64);
	v96 = v4[2];
	*(_QWORD*)v96 = 0x4038000000000000i64;
	*(_DWORD*)(v96 + 8) = 3;
	v4[2] += 16i64;
	v97 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v97, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc05", 8ui64);
	v98 = v4[2];
	*(_QWORD*)v98 = 0x4051000000000000i64;
	*(_DWORD*)(v98 + 8) = 3;
	v4[2] += 16i64;
	v99 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v99, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc06", 8ui64);
	v100 = v4[2];
	*(_QWORD*)v100 = 0x4051400000000000i64;
	*(_DWORD*)(v100 + 8) = 3;
	v4[2] += 16i64;
	v101 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v101, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"FXMisc07", 8ui64);
	v102 = v4[2];
	*(_QWORD*)v102 = 0x4051800000000000i64;
	*(_DWORD*)(v102 + 8) = 3;
	v4[2] += 16i64;
	v103 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v103, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger01", 0xBui64);
	v104 = v4[2];
	*(_QWORD*)v104 = 0x4034000000000000i64;
	*(_DWORD*)(v104 + 8) = 3;
	v4[2] += 16i64;
	v105 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v105, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger02", 0xBui64);
	v106 = v4[2];
	*(_QWORD*)v106 = 0x4060200000000000i64;
	*(_DWORD*)(v106 + 8) = 3;
	v4[2] += 16i64;
	v107 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v107, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger03", 0xBui64);
	v108 = v4[2];
	*(_QWORD*)v108 = 0x4060400000000000i64;
	*(_DWORD*)(v108 + 8) = 3;
	v4[2] += 16i64;
	v109 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v109, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger04", 0xBui64);
	v110 = v4[2];
	*(_QWORD*)v110 = 0x4060600000000000i64;
	*(_DWORD*)(v110 + 8) = 3;
	v4[2] += 16i64;
	v111 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v111, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger05", 0xBui64);
	v112 = v4[2];
	*(_QWORD*)v112 = 0x4060800000000000i64;
	*(_DWORD*)(v112 + 8) = 3;
	v4[2] += 16i64;
	v113 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v113, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger06", 0xBui64);
	v114 = v4[2];
	*(_QWORD*)v114 = 0x4060A00000000000i64;
	*(_DWORD*)(v114 + 8) = 3;
	v4[2] += 16i64;
	v115 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v115, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger07", 0xBui64);
	v116 = v4[2];
	*(_QWORD*)v116 = 0x4060C00000000000i64;
	*(_DWORD*)(v116 + 8) = 3;
	v4[2] += 16i64;
	v117 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v117, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger08", 0xBui64);
	v118 = v4[2];
	*(_QWORD*)v118 = 0x4060E00000000000i64;
	*(_DWORD*)(v118 + 8) = 3;
	v4[2] += 16i64;
	v119 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v119, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger09", 0xBui64);
	v120 = v4[2];
	*(_QWORD*)v120 = 0x4061000000000000i64;
	*(_DWORD*)(v120 + 8) = 3;
	v4[2] += 16i64;
	v121 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v121, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Passenger10", 0xBui64);
	v122 = v4[2];
	*(_QWORD*)v122 = 0x4061200000000000i64;
	*(_DWORD*)(v122 + 8) = 3;
	v4[2] += 16i64;
	v123 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v123, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"Head", 4ui64);
	v124 = v4[2];
	*(_QWORD*)v124 = 0x402E000000000000i64;
	*(_DWORD*)(v124 + 8) = 3;
	v4[2] += 16i64;
	v125 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v125, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumModelSequence", 0x15ui64);
	if (*(_QWORD*)(v4[4] + 120i64) >= *(_QWORD*)(v4[4] + 112i64))
		sub_14005E2C0((__int64)v4);
	v126 = v4[2];
	v127 = sub_14005C1B0((__int64)v4, 0, 0);
	*(_DWORD*)(v126 + 8) = 5;
	*(_QWORD*)v126 = v127;
	v4[2] += 16i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"APState0Idle", 0xCui64);
	v128 = v4[2];
	*(_QWORD*)v128 = 0x4091780000000000i64;
	*(_DWORD*)(v128 + 8) = 3;
	v4[2] += 16i64;
	v129 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v129, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"APState1Idle", 0xCui64);
	v130 = v4[2];
	*(_QWORD*)v130 = 0x4091800000000000i64;
	*(_DWORD*)(v130 + 8) = 3;
	v4[2] += 16i64;
	v131 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v131, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"APState2Idle", 0xCui64);
	v132 = v4[2];
	*(_QWORD*)v132 = 0x4091880000000000i64;
	*(_DWORD*)(v132 + 8) = 3;
	v4[2] += 16i64;
	v133 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v133, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"PistolsReady", 0xCui64);
	v134 = v4[2];
	*(_QWORD*)v134 = 0x4074600000000000i64;
	*(_DWORD*)(v134 + 8) = 3;
	v4[2] += 16i64;
	v135 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v135, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"ClawsReady", 0xAui64);
	v136 = v4[2];
	*(_QWORD*)v136 = 0x40920C0000000000i64;
	*(_DWORD*)(v136 + 8) = 3;
	v4[2] += 16i64;
	v137 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v137, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"HeavyGunReady", 0xDui64);
	v138 = v4[2];
	*(_QWORD*)v138 = 0x40BC0F0000000000i64;
	*(_DWORD*)(v138 + 8) = 3;
	v4[2] += 16i64;
	v139 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v139, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"TwoHReady", 9ui64);
	v140 = v4[2];
	*(_QWORD*)v140 = 0x4055800000000000i64;
	*(_DWORD*)(v140 + 8) = 3;
	v4[2] += 16i64;
	v141 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v141, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"EsperReady", 0xAui64);
	v142 = v4[2];
	*(_QWORD*)v142 = 0x4095D40000000000i64;
	*(_DWORD*)(v142 + 8) = 3;
	v4[2] += 16i64;
	v143 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v143, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"ShockPaddlesReady", 0x11ui64);
	v144 = v4[2];
	*(_QWORD*)v144 = 0x4094980000000000i64;
	*(_DWORD*)(v144 + 8) = 3;
	v4[2] += 16i64;
	v145 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v145, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"PistolsStand", 0xCui64);
	v146 = v4[2];
	*(_QWORD*)v146 = 0x407C400000000000i64;
	*(_DWORD*)(v146 + 8) = 3;
	v4[2] += 16i64;
	v147 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v147, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"ClawsStand", 0xAui64);
	v148 = v4[2];
	*(_QWORD*)v148 = 0x4091FC0000000000i64;
	*(_DWORD*)(v148 + 8) = 3;
	v4[2] += 16i64;
	v149 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v149, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"TwoHGunStand", 0xCui64);
	v150 = v4[2];
	*(_QWORD*)v150 = 0x4086180000000000i64;
	*(_DWORD*)(v150 + 8) = 3;
	v4[2] += 16i64;
	v151 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v151, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_140058710((__int64)v4, (unsigned __int64*)"TwoHStand", 9ui64);
	v152 = v4[2];
	*(_QWORD*)v152 = 0x4057800000000000i64;
	*(_DWORD*)(v152 + 8) = 3;
	v4[2] += 16i64;
	v153 = (__int64*)sub_1400580E0((__int64)v4, -3);
	sub_14005EA50((__int64)v4, v153, (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_1400EFF50((__int64)v4, v154, (unsigned __int64*)"DefaultStand", 150);
	sub_1400EFF50((__int64)v4, v155, (unsigned __int64*)"ShockPaddlesStand", 1322);
	sub_1400EFF50((__int64)v4, v156, (unsigned __int64*)"DefaultStartScreenLoop01", 5612);
	sub_1400EFF50((__int64)v4, v157, (unsigned __int64*)"DefaultExileStartScreenLoop01", 7724);
	sub_1400EFF50((__int64)v4, v158, (unsigned __int64*)"DefaultDominionStartScreenLoop01", 7723);
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_1400F0490((__int64)v4, v159, (unsigned __int64*)"CodeEnumCreationGearSet", (__int64)&off_140C38160, 3u);
	sub_1400F0490((__int64)v4, v160, (unsigned __int64*)"CodeEnumRealmPopulation", (__int64)&off_140C38100, 4u);
	sub_1400F0490((__int64)v4, v161, (unsigned __int64*)"CodeEnumRealmPVPType", (__int64)&off_140C38140, 2u);
	sub_1400F0490((__int64)v4, v162, (unsigned __int64*)"CodeEnumRealmStatus", (__int64)&off_140C37D20, 5u);
	sub_1400F0490((__int64)v4, v163, (unsigned __int64*)"CodeEnumCharacterModifyResults", (__int64)&off_140C37D70, 0x39u);
	sub_1400F0490((__int64)v4, v164, (unsigned __int64*)"CodeEnumCharacterSelectResults", (__int64)&off_140C37BD0, 4u);
	sub_1400F0490((__int64)v4, v165, (unsigned __int64*)"CodeEnumAccountCurrency", (__int64)&off_140C37C10, 0x11u);
	sub_1400F0490((__int64)v4, v166, (unsigned __int64*)"CodeEnumAccountOperationResult", (__int64)&off_140C37900, 0x1Du);
	sub_1400F0490((__int64)v4, v167, (unsigned __int64*)"CodeEnumAccountOperation", (__int64)&off_140C37AD0, 0x10u);
	sub_1400F0490((__int64)v4, v168, (unsigned __int64*)"CodeEnumCharacterCreationStart", (__int64)&off_140C37890, 7u);
	sub_1400F0490((__int64)v4, v169, (unsigned __int64*)"CodeEnumGameMode", (__int64)&off_140C33A20, 2u);
	sub_140058710((__int64)v4, (unsigned __int64*)"CodeEnumUserText", 0x10ui64);
	sub_140058900((__int64)v4, v170, 0);
	sub_1400EFF50((__int64)v4, v171, (unsigned __int64*)"CharacterName", 0);
	sub_1400EFF50((__int64)v4, v172, (unsigned __int64*)"CharacterNamePart", 25);
	sub_14005EA50((__int64)v4, (__int64*)(v4[2] - 48i64), (int*)(v4[2] - 32i64), (unsigned int*)(v4[2] - 16i64));
	v4[2] -= 32i64;
	sub_14004DEC0(*(void(__fastcall****)(_QWORD))(a1 + 96), v4);
	v173 = v4[2];
	v174 = (void*)sub_140062650((__int64)v4, (unsigned __int64*)"uScene", 6ui64);
	v175 = (unsigned int*)(v4[2] - 16i64);
	v179 = v174;
	LODWORD(v180) = 4;
	sub_14005EA50((__int64)v4, (__int64*)(v173 - 32), (int*)&v179, v175);
	v4[2] -= 16i64;
	v176 = (void*)sub_140062650((__int64)v4, (unsigned __int64*)"PreGameLib", 0xAui64);
	v177 = (unsigned int*)(v4[2] - 16i64);
	v179 = v176;
	LODWORD(v180) = 4;
	sub_14005EA50((__int64)v4, v4 + 15, (int*)&v179, v177);
	v4[2] -= 16i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 128i64))(a1);
}
// 140040029: variable 'v154' is possibly undefined
// 14004003E: variable 'v155' is possibly undefined
// 140040053: variable 'v156' is possibly undefined
// 140040068: variable 'v157' is possibly undefined
// 14004007D: variable 'v158' is possibly undefined
// 1400400B8: variable 'v159' is possibly undefined
// 1400400D6: variable 'v160' is possibly undefined
// 1400400F4: variable 'v161' is possibly undefined
// 140040112: variable 'v162' is possibly undefined
// 140040130: variable 'v163' is possibly undefined
// 14004014E: variable 'v164' is possibly undefined
// 14004016C: variable 'v165' is possibly undefined
// 14004018A: variable 'v166' is possibly undefined
// 1400401A8: variable 'v167' is possibly undefined
// 1400401C6: variable 'v168' is possibly undefined
// 1400401E4: variable 'v169' is possibly undefined
// 140040204: variable 'v170' is possibly undefined
// 140040216: variable 'v171' is possibly undefined
// 14004022B: variable 'v172' is possibly undefined
// 1409F7560: using guessed type wchar_t aCashwindow[11];
// 1409F7588: using guessed type wchar_t aBinkwindow[11];
// 1409F75A0: using guessed type wchar_t aCostumewindow[14];
// 140C33A20: using guessed type wchar_t *off_140C33A20;
// 140C37890: using guessed type wchar_t *off_140C37890;
// 140C37900: using guessed type wchar_t *off_140C37900;
// 140C37AD0: using guessed type wchar_t *off_140C37AD0;
// 140C37BD0: using guessed type wchar_t *off_140C37BD0;
// 140C37C10: using guessed type wchar_t *off_140C37C10;
// 140C37D20: using guessed type wchar_t *off_140C37D20;
// 140C37D70: using guessed type wchar_t *off_140C37D70;
// 140C38100: using guessed type wchar_t *off_140C38100;
// 140C38140: using guessed type wchar_t *off_140C38140;
// 140C38160: using guessed type wchar_t *off_140C38160;
// 140C566B0: using guessed type char *off_140C566B0;

