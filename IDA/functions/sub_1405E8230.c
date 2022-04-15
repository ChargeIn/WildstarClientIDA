//----- (00000001405E8230) ----------------------------------------------------
__int64 __fastcall sub_1405E8230(_QWORD* a1)
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
	__int64 v20; // rsi
	__int64 v21; // rbp
	__int64 v22; // rdx
	wchar_t** v23; // rbx
	__int64* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rbp
	wchar_t** v29; // rbx
	__int64* v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rbp
	wchar_t** v35; // rbx
	__int64* v36; // rax
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	__int64 v47; // rax
	__int64* v48; // rax
	__int64 v49; // rax
	__int64* v50; // rax
	__int64 v51; // rax
	__int64* v52; // rax
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v55; // rax
	__int64* v56; // rax
	__int64 v57; // rax
	__int64* v58; // rax
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rax
	__int64* v62; // rax
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // rax
	__int64* v66; // rax
	__int64 v67; // rax
	__int64* v68; // rax
	__int64 v69; // rbx
	__int64 v70; // rax
	__int64 v71; // rax
	__int64* v72; // rax
	__int64 v73; // rax
	__int64* v74; // rax
	__int64 v75; // rax
	__int64* v76; // rax
	__int64 v77; // rax
	__int64* v78; // rax
	__int64 v79; // rbx
	__int64 v80; // rax
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
	__int64 v93; // rax
	__int64* v94; // rax
	__int64 v95; // rax
	__int64* v96; // rax
	__int64 v97; // rax
	__int64* v98; // rax
	__int64 v99; // rax
	__int64* v100; // rax
	__int64 v101; // rbx
	__int64 v102; // rax
	__int64 v103; // rax
	__int64* v104; // rax
	__int64 v105; // rax
	__int64* v106; // rax
	__int64 v107; // rax
	__int64* v108; // rax
	__int64 v109; // rax
	__int64* v110; // rax
	__int64 v111; // rax
	__int64* v112; // rax
	__int64 v113; // rax
	__int64* v114; // rax
	__int64 v115; // rbx
	__int64 v116; // rax
	__int64 v117; // rdx
	__int64 v118; // rbp
	wchar_t** v119; // rbx
	__int64* v120; // rax
	__int64 v121; // rbx
	__int64 v122; // rax
	__int64 v123; // rdx
	wchar_t** v124; // rbx
	__int64* v125; // rax
	__int64 v127; // [rsp+20h] [rbp-38h] BYREF
	int v128; // [rsp+28h] [rbp-30h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Spell");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v127 = v4;
	v128 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v127, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5A480;
	if (off_140C5A480)
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
			v127 = v17;
			v128 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v127, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "Spell", &off_140B6E640);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCastResult", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = 5i64;
	v21 = 327i64;
	*(_QWORD*)v19 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	a1[2] += 16i64;
	v23 = &off_140C2F290;
	do
	{
		sub_1400F06F0((__int64)a1, v22, *v23, *((_DWORD*)v23 + 2));
		v23 += 2;
		--v21;
	} while (v21);
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSpellEffectType", 0x17ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v25 = a1[2];
	v26 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v25 + 8) = 5;
	v28 = 150i64;
	*(_QWORD*)v25 = v26;
	a1[2] += 16i64;
	v29 = &off_140C34140;
	do
	{
		sub_1400F06F0((__int64)a1, v27, *v29, *((_DWORD*)v29 + 2));
		v29 += 2;
		--v28;
	} while (v28);
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSpellTag", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v31 = a1[2];
	v32 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v31 + 8) = 5;
	v34 = 11i64;
	*(_QWORD*)v31 = v32;
	a1[2] += 16i64;
	v35 = &off_140C2E680;
	do
	{
		sub_1400F06F0((__int64)a1, v33, *v35, *((_DWORD*)v35 + 2));
		v35 += 2;
		--v34;
	} while (v34);
	v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumReagentType", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v37 = a1[2];
	v38 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v37 + 8) = 5;
	*(_QWORD*)v37 = v38;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Item", 4ui64);
	v39 = a1[2];
	*(_QWORD*)v39 = 0i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v40, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemFamily", 0xAui64);
	v41 = a1[2];
	*(_QWORD*)v41 = 0x3FF0000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	a1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ItemCategory", 0xCui64);
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4000000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCastMethod", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v45 = a1[2];
	v46 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	*(_QWORD*)v45 = v46;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Normal", 6ui64);
	v47 = a1[2];
	*(_QWORD*)v47 = 0i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v48, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Channeled", 9ui64);
	v49 = a1[2];
	*(_QWORD*)v49 = 0x3FF0000000000000i64;
	*(_DWORD*)(v49 + 8) = 3;
	a1[2] += 16i64;
	v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PressHold", 9ui64);
	v51 = a1[2];
	*(_QWORD*)v51 = 0x4000000000000000i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v52, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ChanneledField", 0xEui64);
	v53 = a1[2];
	*(_QWORD*)v53 = 0x4008000000000000i64;
	*(_DWORD*)(v53 + 8) = 3;
	a1[2] += 16i64;
	v54 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v54, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"UNUSED04", 8ui64);
	v55 = a1[2];
	*(_QWORD*)v55 = 0x4010000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ClientSideInteraction", 0x15ui64);
	v57 = a1[2];
	*(_QWORD*)v57 = 0x4014000000000000i64;
	*(_DWORD*)(v57 + 8) = 3;
	a1[2] += 16i64;
	v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RapidTap", 8ui64);
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4018000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ChargeRelease", 0xDui64);
	v61 = a1[2];
	*(_QWORD*)v61 = 0x401C000000000000i64;
	*(_DWORD*)(v61 + 8) = 3;
	a1[2] += 16i64;
	v62 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v62, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Multiphase", 0xAui64);
	v63 = a1[2];
	*(_DWORD*)(v63 + 8) = 3;
	*(_QWORD*)v63 = 0x4020000000000000i64;
	a1[2] += 16i64;
	v64 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v64, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Transactional", 0xDui64);
	v65 = a1[2];
	*(_QWORD*)v65 = 0x4022000000000000i64;
	*(_DWORD*)(v65 + 8) = 3;
	a1[2] += 16i64;
	v66 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v66, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Aura", 4ui64);
	v67 = a1[2];
	*(_QWORD*)v67 = 0x4024000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v68, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSchool", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v69 = a1[2];
	v70 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v69 + 8) = 5;
	*(_QWORD*)v69 = v70;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Spell", 5ui64);
	v71 = a1[2];
	*(_QWORD*)v71 = 0i64;
	*(_DWORD*)(v71 + 8) = 3;
	a1[2] += 16i64;
	v72 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v72, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Melee", 5ui64);
	v73 = a1[2];
	*(_QWORD*)v73 = 0x3FF0000000000000i64;
	*(_DWORD*)(v73 + 8) = 3;
	a1[2] += 16i64;
	v74 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v74, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ranged", 6ui64);
	v75 = a1[2];
	*(_QWORD*)v75 = 0x4000000000000000i64;
	*(_DWORD*)(v75 + 8) = 3;
	a1[2] += 16i64;
	v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Unarmed", 7ui64);
	v77 = a1[2];
	*(_QWORD*)v77 = 0x4008000000000000i64;
	*(_DWORD*)(v77 + 8) = 3;
	a1[2] += 16i64;
	v78 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v78, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumComparison", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v79 = a1[2];
	v80 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v79 + 8) = 5;
	*(_QWORD*)v79 = v80;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Equals", 6ui64);
	v81 = a1[2];
	*(_QWORD*)v81 = 0i64;
	*(_DWORD*)(v81 + 8) = 3;
	a1[2] += 16i64;
	v82 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v82, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Greater", 7ui64);
	v83 = a1[2];
	*(_QWORD*)v83 = 0x3FF0000000000000i64;
	*(_DWORD*)(v83 + 8) = 3;
	a1[2] += 16i64;
	v84 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v84, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"GreaterThanEqualTo", 0x12ui64);
	v85 = a1[2];
	*(_QWORD*)v85 = 0x4000000000000000i64;
	*(_DWORD*)(v85 + 8) = 3;
	a1[2] += 16i64;
	v86 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v86, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Less", 4ui64);
	v87 = a1[2];
	*(_QWORD*)v87 = 0x4008000000000000i64;
	*(_DWORD*)(v87 + 8) = 3;
	a1[2] += 16i64;
	v88 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v88, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LessThanEqualTo", 0xFui64);
	v89 = a1[2];
	*(_QWORD*)v89 = 0x4010000000000000i64;
	*(_DWORD*)(v89 + 8) = 3;
	a1[2] += 16i64;
	v90 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v90, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Percent_Equals", 0xEui64);
	v91 = a1[2];
	*(_QWORD*)v91 = 0x4014000000000000i64;
	*(_DWORD*)(v91 + 8) = 3;
	a1[2] += 16i64;
	v92 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v92, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Percent_Greater", 0xFui64);
	v93 = a1[2];
	*(_QWORD*)v93 = 0x4018000000000000i64;
	*(_DWORD*)(v93 + 8) = 3;
	a1[2] += 16i64;
	v94 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v94, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Percent_GreaterThanEqualTo", 0x1Aui64);
	v95 = a1[2];
	*(_QWORD*)v95 = 0x401C000000000000i64;
	*(_DWORD*)(v95 + 8) = 3;
	a1[2] += 16i64;
	v96 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v96, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Percent_Less", 0xCui64);
	v97 = a1[2];
	*(_QWORD*)v97 = 0x4020000000000000i64;
	*(_DWORD*)(v97 + 8) = 3;
	a1[2] += 16i64;
	v98 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v98, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Percent_LessThanEqualTo", 0x17ui64);
	v99 = a1[2];
	*(_QWORD*)v99 = 0x4022000000000000i64;
	*(_DWORD*)(v99 + 8) = 3;
	a1[2] += 16i64;
	v100 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v100, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumAOESelectionType", 0x18ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v101 = a1[2];
	v102 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v101 + 8) = 5;
	*(_QWORD*)v101 = v102;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"None", 4ui64);
	v103 = a1[2];
	*(_QWORD*)v103 = 0i64;
	*(_DWORD*)(v103 + 8) = 3;
	a1[2] += 16i64;
	v104 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v104, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Closest", 7ui64);
	v105 = a1[2];
	*(_QWORD*)v105 = 0x3FF0000000000000i64;
	*(_DWORD*)(v105 + 8) = 3;
	a1[2] += 16i64;
	v106 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v106, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Furthest", 8ui64);
	v107 = a1[2];
	*(_QWORD*)v107 = 0x4000000000000000i64;
	*(_DWORD*)(v107 + 8) = 3;
	a1[2] += 16i64;
	v108 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v108, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Random", 6ui64);
	v109 = a1[2];
	*(_QWORD*)v109 = 0x4008000000000000i64;
	*(_DWORD*)(v109 + 8) = 3;
	a1[2] += 16i64;
	v110 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v110, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LowestAbsoluteHealth", 0x14ui64);
	v111 = a1[2];
	*(_QWORD*)v111 = 0x4010000000000000i64;
	*(_DWORD*)(v111 + 8) = 3;
	a1[2] += 16i64;
	v112 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v112, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MissingMostHealth", 0x11ui64);
	v113 = a1[2];
	*(_QWORD*)v113 = 0x4014000000000000i64;
	*(_DWORD*)(v113 + 8) = 3;
	a1[2] += 16i64;
	v114 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v114, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CombatMessageType", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v115 = a1[2];
	v116 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v115 + 8) = 5;
	v118 = 63i64;
	*(_QWORD*)v115 = v116;
	a1[2] += 16i64;
	v119 = &off_140C2E240;
	do
	{
		sub_1400F06F0((__int64)a1, v117, *v119, *((_DWORD*)v119 + 2));
		v119 += 2;
		--v118;
	} while (v118);
	v120 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v120, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSpellClass", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v121 = a1[2];
	v122 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v121 + 8) = 5;
	*(_QWORD*)v121 = v122;
	a1[2] += 16i64;
	v124 = &off_140C2E730;
	do
	{
		sub_1400F06F0((__int64)a1, v123, *v124, *((_DWORD*)v124 + 2));
		v124 += 2;
		--v20;
	} while (v20);
	v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1405E8343: variable 'v14' is possibly undefined
// 1405E841A: variable 'v22' is possibly undefined
// 1405E84AA: variable 'v27' is possibly undefined
// 1405E853A: variable 'v33' is possibly undefined
// 1405E931A: variable 'v117' is possibly undefined
// 1405E93AA: variable 'v123' is possibly undefined
// 140B6E640: using guessed type void *off_140B6E640;
// 140C2E240: using guessed type wchar_t *off_140C2E240;
// 140C2E680: using guessed type wchar_t *off_140C2E680;
// 140C2E730: using guessed type wchar_t *off_140C2E730;
// 140C2F290: using guessed type wchar_t *off_140C2F290;
// 140C34140: using guessed type wchar_t *off_140C34140;
// 140C5A480: using guessed type char *off_140C5A480;

