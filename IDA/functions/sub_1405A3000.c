#include "../winhttp.h"

//----- (00000001405A3000) ----------------------------------------------------
__int64 __fastcall sub_1405A3000(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rsi
	wchar_t** v11; // rbx
	__int64* v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rsi
	wchar_t** v17; // rbx
	__int64* v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rsi
	wchar_t** v23; // rbx
	__int64* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rsi
	wchar_t** v29; // rbx
	__int64* v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rsi
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
	__int64 v69; // rax
	__int64* v70; // rax
	__int64 v71; // rax
	__int64* v72; // rax
	__int64 v73; // rax
	float v74; // xmm0_4
	__int64 v75; // rax
	__int64 v76; // rbx
	__int64 v77; // rax
	unsigned int* v78; // r9
	__int64(__fastcall * v79)(wchar_t**, __int64, __int64); // rax
	__int64 v80; // rax
	int v81; // edx
	__int64 v82; // rcx
	__int64 v83; // rbx
	__int64 v84; // rax
	unsigned int* v85; // r9
	__int64 v87; // [rsp+20h] [rbp-18h] BYREF
	int v88; // [rsp+28h] [rbp-10h]

	if ((dword_140DC3480 & 1) == 0)
	{
		dword_140DC3480 |= 1u;
		v2 = sub_140200220(0x3EDu);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4);
		dword_140DC3484 = v2;
	}
	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Crafting");
	v3 = a1[2];
	*(_QWORD*)v3 = *(_QWORD*)(v3 - 16);
	*(_DWORD*)(v3 + 8) = *(_DWORD*)(v3 - 8);
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v87 = v5;
	v88 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v87, v6);
	a1[2] -= 16i64;
	sub_140057020(a1, "CraftingLib", &off_140B6CCC0);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumTradeskill", 0x12ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	v10 = 13i64;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v11 = &off_140C2D750;
	do
	{
		sub_1400F06F0((__int64)a1, v9, *v11, *((_DWORD*)v11 + 2));
		v11 += 2;
		--v10;
	} while (v10);
	v12 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v12, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumTradeskillTier", 0x16ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	v16 = 8i64;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	v17 = &off_140C31750;
	do
	{
		sub_1400F06F0((__int64)a1, v15, *v17, *((_DWORD*)v17 + 2));
		v17 += 2;
		--v16;
	} while (v16);
	v18 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v18, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCraftingDirection", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	v22 = 9i64;
	*(_QWORD*)v19 = v20;
	a1[2] += 16i64;
	v23 = &off_140C2E780;
	do
	{
		sub_1400F06F0((__int64)a1, v21, *v23, *((_DWORD*)v23 + 2));
		v23 += 2;
		--v22;
	} while (v22);
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumItemCraftingGroupFlag", 0x1Dui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v25 = a1[2];
	v26 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v25 + 8) = 5;
	v28 = 7i64;
	*(_QWORD*)v25 = v26;
	a1[2] += 16i64;
	v29 = &off_140C33A40;
	do
	{
		sub_1400F06F0((__int64)a1, v27, *v29, *((_DWORD*)v29 + 2));
		v29 += 2;
		--v28;
	} while (v28);
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumItemStatType", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v31 = a1[2];
	v32 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v31 + 8) = 5;
	v34 = 5i64;
	*(_QWORD*)v31 = v32;
	a1[2] += 16i64;
	v35 = &off_140C37810;
	do
	{
		sub_1400F06F0((__int64)a1, v33, *v35, *((_DWORD*)v35 + 2));
		v35 += 2;
		--v34;
	} while (v34);
	v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCraftingDiscoveryHotCold", 0x20ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v37 = a1[2];
	v38 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v37 + 8) = 5;
	*(_QWORD*)v37 = v38;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Cold", 4ui64);
	v39 = a1[2];
	*(_QWORD*)v39 = 0i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v40, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Warm", 4ui64);
	v41 = a1[2];
	*(_QWORD*)v41 = 0x3FF0000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	a1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F314C, 3ui64);
	v43 = a1[2];
	*(_QWORD*)v43 = 0x4000000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Success", 7ui64);
	v45 = a1[2];
	*(_QWORD*)v45 = 0x4008000000000000i64;
	*(_DWORD*)(v45 + 8) = 3;
	a1[2] += 16i64;
	v46 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v46, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumTradeskillResult", 0x18ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v47 = a1[2];
	v48 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v47 + 8) = 5;
	*(_QWORD*)v47 = v48;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Success", 7ui64);
	v49 = a1[2];
	*(_QWORD*)v49 = 0i64;
	*(_DWORD*)(v49 + 8) = 3;
	a1[2] += 16i64;
	v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InsufficentFund", 0xFui64);
	v51 = a1[2];
	*(_QWORD*)v51 = 0x3FF0000000000000i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v52, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidItem", 0xBui64);
	v53 = a1[2];
	*(_QWORD*)v53 = 0x4000000000000000i64;
	*(_DWORD*)(v53 + 8) = 3;
	a1[2] += 16i64;
	v54 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v54, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidSlot", 0xBui64);
	v55 = a1[2];
	*(_QWORD*)v55 = 0x4008000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	a1[2] += 16i64;
	v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MissingEngravingStation", 0x17ui64);
	v57 = a1[2];
	*(_QWORD*)v57 = 0x4010000000000000i64;
	*(_DWORD*)(v57 + 8) = 3;
	a1[2] += 16i64;
	v58 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v58, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Unlocked", 8ui64);
	v59 = a1[2];
	*(_QWORD*)v59 = 0x4014000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	a1[2] += 16i64;
	v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"UnknownError", 0xCui64);
	v61 = a1[2];
	*(_QWORD*)v61 = 0x4018000000000000i64;
	*(_DWORD*)(v61 + 8) = 3;
	a1[2] += 16i64;
	v62 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v62, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RuneExists", 0xAui64);
	v63 = a1[2];
	*(_QWORD*)v63 = 0x401C000000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	a1[2] += 16i64;
	v64 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v64, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MissingRune", 0xBui64);
	v65 = a1[2];
	*(_QWORD*)v65 = 0x4020000000000000i64;
	*(_DWORD*)(v65 + 8) = 3;
	a1[2] += 16i64;
	v66 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v66, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DuplicateRune", 0xDui64);
	v67 = a1[2];
	*(_QWORD*)v67 = 0x4022000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	a1[2] += 16i64;
	v68 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v68, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AttemptFailed", 0xDui64);
	v69 = a1[2];
	*(_QWORD*)v69 = 0x4024000000000000i64;
	*(_DWORD*)(v69 + 8) = 3;
	a1[2] += 16i64;
	v70 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v70, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RuneSlotLimit", 0xDui64);
	v71 = a1[2];
	*(_QWORD*)v71 = 0x4026000000000000i64;
	*(_DWORD*)(v71 + 8) = 3;
	a1[2] += 16i64;
	v72 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v72, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v73 = sub_140200220(0x501u);
	if (v73)
		v74 = *(float*)(v73 + 32);
	else
		v74 = 0.0;
	v75 = a1[2];
	*(_DWORD*)(v75 + 8) = 3;
	*(double*)v75 = v74;
	a1[2] += 16i64;
	v76 = a1[2];
	v77 = sub_140062650((__int64)a1, (unsigned __int64*)"kfCoordinateBonusSignatureRadius", 0x20ui64);
	v78 = (unsigned int*)(a1[2] - 16i64);
	v87 = v77;
	v88 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v76 - 32), (int*)&v87, v78);
	v79 = (__int64(__fastcall*)(wchar_t**, __int64, __int64))qword_140C63840;
	a1[2] -= 16i64;
	if (v79)
	{
		v80 = v79(off_140A6A248, 32i64, qword_140C63858);
	}
	else
	{
		if (dword_140C63F1C || (int)sub_1401FDDC0() < 0)
			goto LABEL_39;
		v80 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64018 + 24i64))(qword_140C64018, 32i64);
	}
	if (!v80 || (v81 = *(_DWORD*)(v80 + 4)) == 0)
		LABEL_39:
	v81 = -1;
	v82 = a1[2];
	*(_DWORD*)(v82 + 8) = 3;
	*(double*)v82 = (float)((float)v81 * 0.0099999998);
	a1[2] += 16i64;
	v83 = a1[2];
	v84 = sub_140062650((__int64)a1, (unsigned __int64*)"kfCoordinateBonusLoyaltyRadius", 0x1Eui64);
	v85 = (unsigned int*)(a1[2] - 16i64);
	v87 = v84;
	v88 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v83 - 32), (int*)&v87, v85);
	a1[2] -= 16i64;
	return 1i64;
}
// 1405A312A: variable 'v9' is possibly undefined
// 1405A31CA: variable 'v15' is possibly undefined
// 1405A326A: variable 'v21' is possibly undefined
// 1405A330A: variable 'v27' is possibly undefined
// 1405A33AA: variable 'v33' is possibly undefined
// 1409F314C: using guessed type unsigned __int64 qword_1409F314C[3];
// 140A6A248: using guessed type wchar_t *off_140A6A248[2];
// 140B6CCC0: using guessed type char *off_140B6CCC0;
// 140C2D750: using guessed type wchar_t *off_140C2D750;
// 140C2E780: using guessed type wchar_t *off_140C2E780;
// 140C31750: using guessed type wchar_t *off_140C31750;
// 140C33A40: using guessed type wchar_t *off_140C33A40;
// 140C37810: using guessed type wchar_t *off_140C37810;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F1C: using guessed type int dword_140C63F1C;
// 140C64018: using guessed type __int64 qword_140C64018;
// 140DC3480: using guessed type int dword_140DC3480;
// 140DC3484: using guessed type int dword_140DC3484;

