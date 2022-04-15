#include "../winhttp.h"

//----- (00000001404E7F60) ----------------------------------------------------
__int64 __fastcall sub_1404E7F60(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rsi
	wchar_t** v6; // rbx
	__int64* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rsi
	wchar_t** v12; // rbx
	__int64* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rsi
	wchar_t** v18; // rbx
	__int64* v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rsi
	wchar_t** v24; // rbx
	__int64* v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rdx
	__int64* v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rsi
	__int64* v34; // rax
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
	__int64 v69; // rax
	__int64* v70; // rax
	__int64 v71; // rax
	__int64* v72; // rax
	__int64 v73; // rax
	__int64* v74; // rax
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
	__int64 v93; // rax
	__int64* v94; // rax
	__int64 v95; // rax
	__int64* v96; // rax
	__int64 v97; // rbx
	__int64 v98; // rax
	__int64 v99; // rbp
	__int64 v100; // rax
	__int64* v101; // rax
	__int64 v102; // rax
	__int64* v103; // rax
	__int64 v104; // rbx
	__int64 v105; // rax
	__int64 v106; // rdx
	__int64 v107; // r14
	wchar_t** v108; // rbx
	__int64* v109; // rax
	__int64 v110; // rbx
	__int64 v111; // rax
	__int64 v112; // rdx
	__int64 v113; // r14
	wchar_t** v114; // rbx
	__int64* v115; // rax
	__int64 v116; // rbx
	__int64 v117; // rax
	__int64 v118; // rax
	__int64* v119; // rax
	__int64 v120; // rax
	__int64* v121; // rax
	__int64 v122; // rax
	__int64* v123; // rax
	__int64 v124; // rbx
	__int64 v125; // rax
	__int64 v126; // rdx
	wchar_t** v127; // rbx
	__int64* v128; // rax
	__int64 v129; // rbx
	__int64 v130; // rax
	__int64 v131; // rdx
	wchar_t** v132; // rbx
	__int64* v133; // rax
	__int64 result; // rax

	sub_140058710(a1, (unsigned __int64*)"CodeEnumAccountCurrency", 0x17ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 17i64;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = &off_140C37C10;
	do
	{
		sub_1400F06F0(a1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v7, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumAccountOperationResult", 0x1Eui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	v11 = 29i64;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = &off_140C37900;
	do
	{
		sub_1400F06F0(a1, v10, *v12, *((_DWORD*)v12 + 2));
		v12 += 2;
		--v11;
	} while (v11);
	v13 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumAccountOperation", 0x18ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v14 = *(_QWORD*)(a1 + 16);
	v15 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	v17 = 16i64;
	*(_QWORD*)v14 = v15;
	*(_QWORD*)(a1 + 16) += 16i64;
	v18 = &off_140C37AD0;
	do
	{
		sub_1400F06F0(a1, v16, *v18, *((_DWORD*)v18 + 2));
		v18 += 2;
		--v17;
	} while (v17);
	v19 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumDailyLoginRewardTier", 0x1Cui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v20 = *(_QWORD*)(a1 + 16);
	v21 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v20 + 8) = 5;
	v23 = 2i64;
	*(_QWORD*)v20 = v21;
	*(_QWORD*)(a1 + 16) += 16i64;
	v24 = &off_140C318D0;
	do
	{
		sub_1400F06F0(a1, v22, *v24, *((_DWORD*)v24 + 2));
		v24 += 2;
		--v23;
	} while (v23);
	v25 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v25, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumDailyLoginRewardType", 0x1Cui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v26 = *(_QWORD*)(a1 + 16);
	v27 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v26 + 8) = 5;
	*(_QWORD*)v26 = v27;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v28, off_140C37500, dword_140C37508);
	v29 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v29, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumEntitlement", 0x13ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v30 = *(_QWORD*)(a1 + 16);
	v31 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v30 + 8) = 5;
	*(_QWORD*)v30 = v31;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058710(a1, (unsigned __int64*)"CostumeSlots", 0xCui64);
	v32 = *(_QWORD*)(a1 + 16);
	v33 = 3i64;
	*(_DWORD*)(v32 + 8) = 3;
	*(_QWORD*)v32 = 0x4008000000000000i64;
	*(_QWORD*)(a1 + 16) += 16i64;
	v34 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v34, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"BaseCharacterProgressionCaps", 0x1Cui64);
	v35 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v35 = 0x4024000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v36 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v36, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"BaseCharacterSlots", 0x12ui64);
	v37 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v37 = 0x4028000000000000i64;
	*(_DWORD*)(v37 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v38 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v38, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"BaseCurrencyCaps", 0x10ui64);
	v39 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v39 = 0x402C000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v40 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v40, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"EconomyParticipation", 0x14ui64);
	v41 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v41 = 0x402E000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v42 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v42, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"GuildsAccess", 0xCui64);
	v43 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v43 = 0x4030000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v44 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v44, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"FullSocialParticipation", 0x17ui64);
	v45 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v45 = 0x4031000000000000i64;
	*(_DWORD*)(v45 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v46 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v46, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CREDDUsage", 0xAui64);
	v47 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v47 = 0x4032000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v48 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v48, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"InGameCSAccess", 0xEui64);
	v49 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v49 = 0x4033000000000000i64;
	*(_DWORD*)(v49 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v50 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v50, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"Signature", 9ui64);
	v51 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v51 = 0x4036000000000000i64;
	*(_DWORD*)(v51 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v52 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v52, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"Free", 4ui64);
	v53 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v53 = 0x403F000000000000i64;
	*(_DWORD*)(v53 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v54 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v54, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"ExtraAuctions", 0xDui64);
	v55 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v55 = 0x4037000000000000i64;
	*(_DWORD*)(v55 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v56 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v56, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"ExtraCommodityOrders", 0x14ui64);
	v57 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v57 = 0x4039000000000000i64;
	*(_DWORD*)(v57 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v58 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v58, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"ExtraBankSlots", 0xEui64);
	v59 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v59 = 0x403B000000000000i64;
	*(_DWORD*)(v59 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v60 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v60, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"FullGuildsAccess", 0x10ui64);
	v61 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v61 = 0x4043000000000000i64;
	*(_DWORD*)(v61 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v62 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v62, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"WakeHereCooldownReduction", 0x19ui64);
	v63 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v63 = 0x4044800000000000i64;
	*(_DWORD*)(v63 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v64 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v64, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"TwoStepVerification", 0x13ui64);
	v65 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v65 = 0x4022000000000000i64;
	*(_DWORD*)(v65 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v66 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v66, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"LoyaltyBonusCoordinateCraftingRadius", 0x24ui64);
	v67 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v67 = 0x4040000000000000i64;
	*(_DWORD*)(v67 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v68 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v68, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"ExtraDecorSlots", 0xFui64);
	v69 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v69 = 0x403A000000000000i64;
	*(_DWORD*)(v69 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v70 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v70, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"ExtraBankSlots", 0xEui64);
	v71 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v71 = 0x403B000000000000i64;
	*(_DWORD*)(v71 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v72 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v72, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"AdditionalCostumeUnlocks", 0x18ui64);
	v73 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v73 = 0x4042000000000000i64;
	*(_DWORD*)(v73 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v74 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v74, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"WakeHereCooldownReduction", 0x19ui64);
	v75 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v75 = 0x4044800000000000i64;
	*(_DWORD*)(v75 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v76 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v76, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"LoyaltyExtraCommodityOrders", 0x1Bui64);
	v77 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v77 = 0x4045000000000000i64;
	*(_DWORD*)(v77 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v78 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v78, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"LoyaltyExtraAuctions", 0x14ui64);
	v79 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v79 = 0x4045800000000000i64;
	*(_DWORD*)(v79 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v80 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v80, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"LoyaltyChallengeBonus", 0x15ui64);
	v81 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v81 = 0x4046000000000000i64;
	*(_DWORD*)(v81 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v82 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v82, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"LoyaltyRestXpBonus", 0x12ui64);
	v83 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v83 = 0x4046800000000000i64;
	*(_DWORD*)(v83 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v84 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v84, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"FraudCheck", 0xAui64);
	v85 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v85 = 0x4048800000000000i64;
	*(_DWORD*)(v85 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v86 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v86, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"ChuaWarriorUnlock", 0x11ui64);
	v87 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v87 = 0x404E800000000000i64;
	*(_DWORD*)(v87 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v88 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v88, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"AurinEngineerUnlock", 0x13ui64);
	v89 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v89 = 0x404F000000000000i64;
	*(_DWORD*)(v89 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v90 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v90, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CanPurchasePromotionToken", 0x19ui64);
	v91 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v91 = 0x404F800000000000i64;
	*(_DWORD*)(v91 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v92 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v92, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"SharedRealmBankUnlock", 0x15ui64);
	v93 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v93 = 0x4052800000000000i64;
	*(_DWORD*)(v93 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v94 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v94, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"SharedRealmBankSlots", 0x14ui64);
	v95 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v95 = 0x4052C00000000000i64;
	*(_DWORD*)(v95 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v96 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v96, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumDailyLoginRewardTier", 0x1Cui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v97 = *(_QWORD*)(a1 + 16);
	v98 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v97 + 8) = 5;
	v99 = 6i64;
	*(_QWORD*)v97 = v98;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058710(a1, (unsigned __int64*)"Normal", 6ui64);
	v100 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v100 = 0i64;
	*(_DWORD*)(v100 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v101 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v101, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"Milestone", 9ui64);
	v102 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v102 = 0x3FF0000000000000i64;
	*(_DWORD*)(v102 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v103 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v103, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumRewardProperty", 0x16ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v104 = *(_QWORD*)(a1 + 16);
	v105 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v104 + 8) = 5;
	v107 = 34i64;
	*(_QWORD*)v104 = v105;
	*(_QWORD*)(a1 + 16) += 16i64;
	v108 = &off_140C375F0;
	do
	{
		sub_1400F06F0(a1, v106, *v108, *((_DWORD*)v108 + 2));
		v108 += 2;
		--v107;
	} while (v107);
	v109 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v109, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumRewardModifierOwner", 0x1Bui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v110 = *(_QWORD*)(a1 + 16);
	v111 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v110 + 8) = 5;
	v113 = 11i64;
	*(_QWORD*)v110 = v111;
	*(_QWORD*)(a1 + 16) += 16i64;
	v114 = &off_140C34AA0;
	do
	{
		sub_1400F06F0(a1, v112, *v114, *((_DWORD*)v114 + 2));
		v114 += 2;
		--v113;
	} while (v113);
	v115 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v115, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumRewardModifierValue", 0x1Bui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v116 = *(_QWORD*)(a1 + 16);
	v117 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v116 + 8) = 5;
	*(_QWORD*)v116 = v117;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058710(a1, (unsigned __int64*)"AdditiveScalar", 0xEui64);
	v118 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v118 = 0i64;
	*(_DWORD*)(v118 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v119 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v119, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"Discrete", 8ui64);
	v120 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v120 = 0x3FF0000000000000i64;
	*(_DWORD*)(v120 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v121 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v121, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"MultiplicativeScalar", 0x14ui64);
	v122 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v122 = 0x4000000000000000i64;
	*(_DWORD*)(v122 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v123 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v123, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumPremiumSystem", 0x15ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v124 = *(_QWORD*)(a1 + 16);
	v125 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v124 + 8) = 5;
	*(_QWORD*)v124 = v125;
	*(_QWORD*)(a1 + 16) += 16i64;
	v127 = &off_140C34C10;
	do
	{
		sub_1400F06F0(a1, v126, *v127, *((_DWORD*)v127 + 2));
		v127 += 2;
		--v33;
	} while (v33);
	v128 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v128, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	sub_140058710(a1, (unsigned __int64*)"CodeEnumPremiumLockboxKeyStatus", 0x1Fui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v129 = *(_QWORD*)(a1 + 16);
	v130 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v129 + 8) = 5;
	*(_QWORD*)v129 = v130;
	*(_QWORD*)(a1 + 16) += 16i64;
	v132 = &off_140C2E810;
	do
	{
		sub_1400F06F0(a1, v131, *v132, *((_DWORD*)v132 + 2));
		v132 += 2;
		--v99;
	} while (v99);
	v133 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(
		a1,
		v133,
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}
// 1404E7FDA: variable 'v4' is possibly undefined
// 1404E807A: variable 'v10' is possibly undefined
// 1404E811A: variable 'v16' is possibly undefined
// 1404E81BA: variable 'v22' is possibly undefined
// 1404E8249: variable 'v28' is possibly undefined
// 1404E8EAA: variable 'v106' is possibly undefined
// 1404E8F4A: variable 'v112' is possibly undefined
// 1404E913A: variable 'v126' is possibly undefined
// 1404E91CA: variable 'v131' is possibly undefined
// 140C2E810: using guessed type wchar_t *off_140C2E810;
// 140C318D0: using guessed type wchar_t *off_140C318D0;
// 140C34AA0: using guessed type wchar_t *off_140C34AA0;
// 140C34C10: using guessed type wchar_t *off_140C34C10;
// 140C37500: using guessed type wchar_t *off_140C37500;
// 140C37508: using guessed type int dword_140C37508;
// 140C375F0: using guessed type wchar_t *off_140C375F0;
// 140C37900: using guessed type wchar_t *off_140C37900;
// 140C37AD0: using guessed type wchar_t *off_140C37AD0;
// 140C37C10: using guessed type wchar_t *off_140C37C10;

