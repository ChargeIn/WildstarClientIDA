//----- (0000000140500A10) ----------------------------------------------------
__int64 __fastcall sub_140500A10(_QWORD* a1)
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
	__int64 v29; // rax
	__int64* v30; // rax
	__int64 v31; // rax
	__int64* v32; // rax
	__int64 v33; // rax
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
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // rax
	__int64* v52; // rax
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v56; // [rsp+20h] [rbp-18h] BYREF
	int v57; // [rsp+28h] [rbp-10h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Money");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v56 = v4;
	v57 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v56, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C597B0;
	if (off_140C597B0)
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
			v56 = v17;
			v57 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v56, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "Money", &off_140B6A1A8);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumCurrencyType", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v19 = a1[2];
	v20 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Credits", 7ui64);
	v21 = a1[2];
	*(_QWORD*)v21 = 0x3FF0000000000000i64;
	*(_DWORD*)(v21 + 8) = 3;
	a1[2] += 16i64;
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Renown", 6ui64);
	v23 = a1[2];
	*(_QWORD*)v23 = 0x4000000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ElderGems", 9ui64);
	v25 = a1[2];
	*(_QWORD*)v25 = 0x4008000000000000i64;
	*(_DWORD*)(v25 + 8) = 3;
	a1[2] += 16i64;
	v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CraftingVouchers", 0x10ui64);
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4010000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Prestige", 8ui64);
	v29 = a1[2];
	*(_QWORD*)v29 = 0x4014000000000000i64;
	*(_DWORD*)(v29 + 8) = 3;
	a1[2] += 16i64;
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ShadeSilver", 0xBui64);
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4018000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v32, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Glory", 5ui64);
	v33 = a1[2];
	*(_QWORD*)v33 = 0x401C000000000000i64;
	*(_DWORD*)(v33 + 8) = 3;
	a1[2] += 16i64;
	v34 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v34, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ProtoCoins", 0xAui64);
	v35 = a1[2];
	*(_QWORD*)v35 = 0x4022000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v36, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Triploons", 9ui64);
	v37 = a1[2];
	*(_QWORD*)v37 = 0x4024000000000000i64;
	*(_DWORD*)(v37 + 8) = 3;
	a1[2] += 16i64;
	v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RedEssence", 0xAui64);
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4026000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v40, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"BlueEssence", 0xBui64);
	v41 = a1[2];
	*(_QWORD*)v41 = 0x4028000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	a1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"GreenEssence", 0xCui64);
	v43 = a1[2];
	*(_QWORD*)v43 = 0x402A000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	a1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PurpleEssence", 0xDui64);
	v45 = a1[2];
	*(_QWORD*)v45 = 0x402C000000000000i64;
	*(_DWORD*)(v45 + 8) = 3;
	a1[2] += 16i64;
	v46 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v46, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"GroupCurrency", 0xDui64);
	v47 = a1[2];
	*(_QWORD*)v47 = 0x402E000000000000i64;
	*(_DWORD*)(v47 + 8) = 3;
	a1[2] += 16i64;
	v48 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v48, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumGroupCurrencyType", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v49 = a1[2];
	v50 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v49 + 8) = 5;
	*(_QWORD*)v49 = v50;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"None", 4ui64);
	v51 = a1[2];
	*(_QWORD*)v51 = 0i64;
	*(_DWORD*)(v51 + 8) = 3;
	a1[2] += 16i64;
	v52 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v52, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"WarCoins", 8ui64);
	v53 = a1[2];
	*(_QWORD*)v53 = 0x3FF0000000000000i64;
	*(_DWORD*)(v53 + 8) = 3;
	a1[2] += 16i64;
	v54 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v54, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140500B23: variable 'v14' is possibly undefined
// 140B6A1A8: using guessed type char *off_140B6A1A8;
// 140C597B0: using guessed type char *off_140C597B0;

