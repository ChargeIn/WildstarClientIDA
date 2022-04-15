//----- (00000001406481D0) ----------------------------------------------------
__int64 __fastcall sub_1406481D0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rbx
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rax
	__int64* v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rdx
	__int64 v32; // rsi
	wchar_t** v33; // rbx
	__int64* v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	__int64 v47; // rdx
	__int64 v48; // rsi
	wchar_t** v49; // rbx
	__int64* v50; // rax
	__int64 v51; // rbx
	__int64 v52; // rax
	__int64 v53; // rdx
	__int64 v54; // rsi
	wchar_t** v55; // rbx
	__int64* v56; // rax
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rax
	__int64* v62; // rax
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // rax
	__int64* v66; // rax
	__int64 v67; // rbx
	__int64 v68; // rax
	__int64 v69; // rdx
	__int64 v70; // rsi
	wchar_t** v71; // rbx
	__int64* v72; // rax
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // rax
	__int64* v76; // rax
	__int64 v77; // rax
	__int64* v78; // rax
	__int64 v79; // rax
	__int64* v80; // rax
	__int64 v81; // rax
	__int64* v82; // rax
	__int64 v83; // rax
	__int64* v84; // rax
	__int64 v85; // rax
	__int64* v86; // rax
	__int64 v87; // rax
	__int64* v88; // rax
	__int64 v89; // rax
	__int64* v90; // rax
	__int64 v91; // rax
	__int64* v92; // rax
	__int64 v93; // rbx
	__int64 v94; // rax
	__int64 v95; // rax
	__int64* v96; // rax
	__int64 v97; // rax
	__int64* v98; // rax
	__int64 v99; // rax
	__int64* v100; // rax
	__int64 v101; // rax
	__int64* v102; // rax
	__int64 v103; // rbx
	__int64 v104; // rax
	__int64 v105; // rax
	__int64* v106; // rax
	__int64 v107; // rax
	__int64* v108; // rax
	__int64 v109; // rbx
	__int64 v110; // rax
	__int64 v111; // rax
	__int64* v112; // rax
	__int64 v113; // rax
	__int64* v114; // rax
	__int64 v115; // rbx
	__int64 v116; // rax
	__int64 v117; // rax
	__int64* v118; // rax
	__int64 v119; // rax
	__int64* v120; // rax
	__int64 v121; // rax
	__int64* v122; // rax
	__int64 v123; // rbx
	__int64 v124; // rax
	__int64 v125; // rax
	__int64* v126; // rax
	__int64 v127; // rax
	__int64* v128; // rax
	__int64 v129; // rax
	__int64* v130; // rax
	__int64 v131; // rbx
	__int64 v132; // rax
	__int64 v133; // rdx
	__int64 v134; // rsi
	wchar_t** v135; // rbx
	__int64* v136; // rax
	__int64 v137; // rbx
	__int64 v138; // rax
	__int64 v139; // rax
	__int64* v140; // rax
	__int64 v141; // rax
	__int64* v142; // rax
	__int64 v143; // rdx
	__int64 v144; // rdx
	__int64 v145; // rdx
	__int64 v146; // rdx
	__int64 v147; // rdx
	__int64 v148; // rdx
	__int64 v149; // rdx
	__int64 v150; // rdx
	__int64 v151; // rdx
	__int64 v152; // rdx
	__int64 v153; // rdx
	__int64 v154; // rdx
	__int64 v155; // rdx
	__int64 v156; // rdx
	__int64 v157; // rdx
	__int64 v158; // rdx
	__int64 v159; // rdx
	__int64 v160; // rdx
	__int64 v162; // [rsp+30h] [rbp-38h] BYREF
	int v163; // [rsp+38h] [rbp-30h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Unit");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v162 = v4;
	v163 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v162, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5A770;
	if (off_140C5A770)
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v9 = a1[5];
			if (v9 == a1[10])
				v10 = a1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)a1, 0, v10);
			v11[4] = v8;
			v12 = a1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			a1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)a1, v14, v15);
			v18 = (unsigned int*)(a1[2] - 16i64);
			v162 = v17;
			v163 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v162, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "Unit", &off_140B6FC90);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumDisposition", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Hostile", 7ui64);
	v21 = a1[2];
	*(_QWORD*)v21 = 0i64;
	*(_DWORD*)(v21 + 8) = 3;
	a1[2] += 16i64;
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Neutral", 7ui64);
	v23 = a1[2];
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Friendly", 8ui64);
	v25 = a1[2];
	*(_QWORD*)v25 = 0x4000000000000000i64;
	*(_DWORD*)(v25 + 8) = 3;
	a1[2] += 16i64;
	v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Unknown", 7ui64);
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4008000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCCState", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v29 = a1[2];
	v30 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v29 + 8) = 5;
	v32 = 28i64;
	*(_QWORD*)v29 = v30;
	a1[2] += 16i64;
	v33 = &off_140C33250;
	do
	{
		sub_1400F06F0((__int64)a1, v31, *v33, *((_DWORD*)v33 + 2));
		v33 += 2;
		--v32;
	} while (v32);
	v34 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v34, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCCStateStunVictimGameplay", 0x21ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v35 = a1[2];
	v36 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v35 + 8) = 5;
	*(_QWORD*)v35 = v36;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Forward", 7ui64);
	v37 = a1[2];
	*(_QWORD*)v37 = 0x3FF0000000000000i64;
	*(_DWORD*)(v37 + 8) = 3;
	a1[2] += 16i64;
	v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Backward", 8ui64);
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4000000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v40, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Left", 4ui64);
	v41 = a1[2];
	*(_QWORD*)v41 = 0x4010000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	a1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Right", 5ui64);
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4020000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumEliteness", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v45 = a1[2];
	v46 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	v48 = 4i64;
	*(_QWORD*)v45 = v46;
	a1[2] += 16i64;
	v49 = &off_140C35B90;
	do
	{
		sub_1400F06F0((__int64)a1, v47, *v49, *((_DWORD*)v49 + 2));
		v49 += 2;
		--v48;
	} while (v48);
	v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumRank", 0xCui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v51 = a1[2];
	v52 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v51 + 8) = 5;
	v54 = 6i64;
	*(_QWORD*)v51 = v52;
	a1[2] += 16i64;
	v55 = &off_140C37120;
	do
	{
		sub_1400F06F0((__int64)a1, v53, *v55, *((_DWORD*)v55 + 2));
		v55 += 2;
		--v54;
	} while (v54);
	v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCastBarType", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v57 = a1[2];
	v58 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v57 + 8) = 5;
	*(_QWORD*)v57 = v58;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"None", 4ui64);
	v59 = a1[2];
	*(_QWORD*)v59 = 0i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Normal", 6ui64);
	v61 = a1[2];
	*(_QWORD*)v61 = 0x3FF0000000000000i64;
	*(_DWORD*)(v61 + 8) = 3;
	a1[2] += 16i64;
	v62 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v62, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Telegraph_Backlash", 0x12ui64);
	v63 = a1[2];
	*(_QWORD*)v63 = 0x4000000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v64, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Telegraph_Evade", 0xFui64);
	v65 = a1[2];
	*(_QWORD*)v65 = 0x4008000000000000i64;
	*(_DWORD*)(v65 + 8) = 3;
	a1[2] += 16i64;
	v66 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v66, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumProperties", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v67 = a1[2];
	v68 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v67 + 8) = 5;
	v70 = 150i64;
	*(_QWORD*)v67 = v68;
	a1[2] += 16i64;
	v71 = &off_140C35160;
	do
	{
		sub_1400F06F0((__int64)a1, v69, *v71, *((_DWORD*)v71 + 2));
		v71 += 2;
		--v70;
	} while (v70);
	v72 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v72, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumLevelDifferentialAttribute", 0x22ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v73 = a1[2];
	v74 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v73 + 8) = 5;
	*(_QWORD*)v73 = v74;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Grey", 4ui64);
	v75 = a1[2];
	*(_QWORD*)v75 = 0x3FF0000000000000i64;
	*(_DWORD*)(v75 + 8) = 3;
	a1[2] += 16i64;
	v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Green", 5ui64);
	v77 = a1[2];
	*(_QWORD*)v77 = 0x4000000000000000i64;
	*(_DWORD*)(v77 + 8) = 3;
	a1[2] += 16i64;
	v78 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v78, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cyan", 4ui64);
	v79 = a1[2];
	*(_QWORD*)v79 = 0x4008000000000000i64;
	*(_DWORD*)(v79 + 8) = 3;
	a1[2] += 16i64;
	v80 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v80, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Blue", 4ui64);
	v81 = a1[2];
	*(_QWORD*)v81 = 0x4010000000000000i64;
	*(_DWORD*)(v81 + 8) = 3;
	a1[2] += 16i64;
	v82 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v82, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"White", 5ui64);
	v83 = a1[2];
	*(_QWORD*)v83 = 0x4014000000000000i64;
	*(_DWORD*)(v83 + 8) = 3;
	a1[2] += 16i64;
	v84 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v84, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Yellow", 6ui64);
	v85 = a1[2];
	*(_QWORD*)v85 = 0x4018000000000000i64;
	*(_DWORD*)(v85 + 8) = 3;
	a1[2] += 16i64;
	v86 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v86, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Orange", 6ui64);
	v87 = a1[2];
	*(_QWORD*)v87 = 0x401C000000000000i64;
	*(_DWORD*)(v87 + 8) = 3;
	a1[2] += 16i64;
	v88 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v88, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F426C, 3ui64);
	v89 = a1[2];
	*(_QWORD*)v89 = 0x4020000000000000i64;
	*(_DWORD*)(v89 + 8) = 3;
	a1[2] += 16i64;
	v90 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v90, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Magenta", 7ui64);
	v91 = a1[2];
	*(_QWORD*)v91 = 0x4022000000000000i64;
	*(_DWORD*)(v91 + 8) = 3;
	a1[2] += 16i64;
	v92 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v92, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumResourceConversionType", 0x1Eui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v93 = a1[2];
	v94 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v93 + 8) = 5;
	*(_QWORD*)v93 = v94;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Item2Item", 9ui64);
	v95 = a1[2];
	*(_QWORD*)v95 = 0i64;
	*(_DWORD*)(v95 + 8) = 3;
	a1[2] += 16i64;
	v96 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v96, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Item2Rep", 8ui64);
	v97 = a1[2];
	*(_QWORD*)v97 = 0x3FF0000000000000i64;
	*(_DWORD*)(v97 + 8) = 3;
	a1[2] += 16i64;
	v98 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v98, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Prereq2Rep", 0xAui64);
	v99 = a1[2];
	*(_QWORD*)v99 = 0x4000000000000000i64;
	*(_DWORD*)(v99 + 8) = 3;
	a1[2] += 16i64;
	v100 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v100, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AccountCurrency2Rep", 0x13ui64);
	v101 = a1[2];
	*(_QWORD*)v101 = 0x4008000000000000i64;
	*(_DWORD*)(v101 + 8) = 3;
	a1[2] += 16i64;
	v102 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v102, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumFlightPathType", 0x16ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v103 = a1[2];
	v104 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v103 + 8) = 5;
	*(_QWORD*)v103 = v104;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Local", 5ui64);
	v105 = a1[2];
	*(_QWORD*)v105 = 0i64;
	*(_DWORD*)(v105 + 8) = 3;
	a1[2] += 16i64;
	v106 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v106, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Transfer", 8ui64);
	v107 = a1[2];
	*(_QWORD*)v107 = 0x3FF0000000000000i64;
	*(_DWORD*)(v107 + 8) = 3;
	a1[2] += 16i64;
	v108 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v108, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumFaction", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v109 = a1[2];
	v110 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v109 + 8) = 5;
	*(_QWORD*)v109 = v110;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DominionPlayer", 0xEui64);
	v111 = a1[2];
	*(_QWORD*)v111 = 0x4064C00000000000i64;
	*(_DWORD*)(v111 + 8) = 3;
	a1[2] += 16i64;
	v112 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v112, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ExilesPlayer", 0xCui64);
	v113 = a1[2];
	*(_QWORD*)v113 = 0x4064E00000000000i64;
	*(_DWORD*)(v113 + 8) = 3;
	a1[2] += 16i64;
	v114 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v114, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumGender", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v115 = a1[2];
	v116 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v115 + 8) = 5;
	*(_QWORD*)v115 = v116;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Male", 4ui64);
	v117 = a1[2];
	*(_QWORD*)v117 = 0i64;
	*(_DWORD*)(v117 + 8) = 3;
	a1[2] += 16i64;
	v118 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v118, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Female", 6ui64);
	v119 = a1[2];
	*(_QWORD*)v119 = 0x3FF0000000000000i64;
	*(_DWORD*)(v119 + 8) = 3;
	a1[2] += 16i64;
	v120 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v120, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F4294, 3ui64);
	v121 = a1[2];
	*(_QWORD*)v121 = 0x4000000000000000i64;
	*(_DWORD*)(v121 + 8) = 3;
	a1[2] += 16i64;
	v122 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v122, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumDiminishingReturnState", 0x1Eui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v123 = a1[2];
	v124 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v123 + 8) = 5;
	*(_QWORD*)v123 = v124;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Linear", 6ui64);
	v125 = a1[2];
	*(_QWORD*)v125 = 0i64;
	*(_DWORD*)(v125 + 8) = 3;
	a1[2] += 16i64;
	v126 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v126, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"SoftCap", 7ui64);
	v127 = a1[2];
	*(_QWORD*)v127 = 0x3FF0000000000000i64;
	*(_DWORD*)(v127 + 8) = 3;
	a1[2] += 16i64;
	v128 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v128, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"HardCap", 7ui64);
	v129 = a1[2];
	*(_QWORD*)v129 = 0x4000000000000000i64;
	*(_DWORD*)(v129 + 8) = 3;
	a1[2] += 16i64;
	v130 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v130, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSpellMechanic", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v131 = a1[2];
	v132 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v131 + 8) = 5;
	v134 = 7i64;
	*(_QWORD*)v131 = v132;
	a1[2] += 16i64;
	v135 = &off_140C33450;
	do
	{
		sub_1400F06F0((__int64)a1, v133, *v135, *((_DWORD*)v135 + 2));
		v135 += 2;
		--v134;
	} while (v134);
	v136 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v136, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumLootItemType", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v137 = a1[2];
	v138 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v137 + 8) = 5;
	*(_QWORD*)v137 = v138;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"StaticItem", 0xAui64);
	v139 = a1[2];
	*(_QWORD*)v139 = 0i64;
	*(_DWORD*)(v139 + 8) = 3;
	a1[2] += 16i64;
	v140 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v140, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cash", 4ui64);
	v141 = a1[2];
	*(_QWORD*)v141 = 0x4000000000000000i64;
	*(_DWORD*)(v141 + 8) = 3;
	a1[2] += 16i64;
	v142 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v142, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400EFF50((__int64)a1, v143, (unsigned __int64*)"VirtualItem", 6);
	sub_1400EFF50((__int64)a1, v144, (unsigned __int64*)"AdventureSpell", 7);
	sub_1400EFF50((__int64)a1, v145, (unsigned __int64*)"AccountItem", 8);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumEUnitStatType", 0x15ui64);
	sub_140058900((__int64)a1, v146, 0);
	sub_1400EFF50((__int64)a1, v147, (unsigned __int64*)"Resources0", 0);
	sub_1400EFF50((__int64)a1, v148, (unsigned __int64*)"Resources1", 1);
	sub_1400EFF50((__int64)a1, v149, (unsigned __int64*)"Resources2", 2);
	sub_1400EFF50((__int64)a1, v150, (unsigned __int64*)"Resources3", 3);
	sub_1400EFF50((__int64)a1, v151, (unsigned __int64*)"Resources4", 4);
	sub_1400EFF50((__int64)a1, v152, (unsigned __int64*)"Resources5", 5);
	sub_1400EFF50((__int64)a1, v153, (unsigned __int64*)"Resources6", 6);
	sub_1400EFF50((__int64)a1, v154, (unsigned __int64*)"Resources7", 7);
	sub_1400EFF50((__int64)a1, v155, (unsigned __int64*)"Resources8", 8);
	sub_1400EFF50((__int64)a1, v156, (unsigned __int64*)"Resources9", 9);
	sub_1400EFF50((__int64)a1, v157, (unsigned __int64*)"Resources10", 10);
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_1400F0490((__int64)a1, v158, (unsigned __int64*)"CodeEnumArchetype", (__int64)&off_140C33200, 5u);
	sub_1400F0490((__int64)a1, v159, (unsigned __int64*)"CodeEnumRewardInfoType", (__int64)&off_140C31A20, 0xCu);
	sub_1400F0490((__int64)a1, v160, (unsigned __int64*)"CreatureRisk", (__int64)&off_140C33E40, 3u);
	return 1i64;
}
// 1406482E3: variable 'v14' is possibly undefined
// 14064857A: variable 'v31' is possibly undefined
// 1406487DA: variable 'v47' is possibly undefined
// 14064887A: variable 'v53' is possibly undefined
// 140648ABA: variable 'v69' is possibly undefined
// 14064954B: variable 'v133' is possibly undefined
// 14064967B: variable 'v143' is possibly undefined
// 140649690: variable 'v144' is possibly undefined
// 1406496A5: variable 'v145' is possibly undefined
// 1406496E2: variable 'v146' is possibly undefined
// 1406496F4: variable 'v147' is possibly undefined
// 140649709: variable 'v148' is possibly undefined
// 14064971E: variable 'v149' is possibly undefined
// 140649733: variable 'v150' is possibly undefined
// 140649748: variable 'v151' is possibly undefined
// 14064975D: variable 'v152' is possibly undefined
// 140649772: variable 'v153' is possibly undefined
// 140649787: variable 'v154' is possibly undefined
// 14064979C: variable 'v155' is possibly undefined
// 1406497B1: variable 'v156' is possibly undefined
// 1406497C6: variable 'v157' is possibly undefined
// 140649801: variable 'v158' is possibly undefined
// 14064981F: variable 'v159' is possibly undefined
// 14064983D: variable 'v160' is possibly undefined
// 1409F426C: using guessed type unsigned __int64 qword_1409F426C[5];
// 1409F4294: using guessed type unsigned __int64 qword_1409F4294[9];
// 140B6FC90: using guessed type void *off_140B6FC90;
// 140C31A20: using guessed type wchar_t *off_140C31A20;
// 140C33200: using guessed type wchar_t *off_140C33200;
// 140C33250: using guessed type wchar_t *off_140C33250;
// 140C33450: using guessed type wchar_t *off_140C33450;
// 140C33E40: using guessed type wchar_t *off_140C33E40;
// 140C35160: using guessed type wchar_t *off_140C35160;
// 140C35B90: using guessed type wchar_t *off_140C35B90;
// 140C37120: using guessed type wchar_t *off_140C37120;
// 140C5A770: using guessed type char *off_140C5A770;

