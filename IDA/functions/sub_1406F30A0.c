//----- (00000001406F30A0) ----------------------------------------------------
__int64 __fastcall sub_1406F30A0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rsi
	__int64 v4; // rbp
	__int64 v5; // rdx
	wchar_t** v6; // rbx
	__int64* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rdx
	wchar_t** v21; // rbx
	__int64* v22; // rax

	sub_140057020(a1, "RewardTrackLib", &off_140B725F0);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumInputAction", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = 5i64;
	v4 = 210i64;
	*(_QWORD*)v2 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	a1[2] += 16i64;
	v6 = &off_140C31BB0;
	do
	{
		sub_1400F06F0((__int64)a1, v5, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v4;
	} while (v4);
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumRewardTrackType", 0x17ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ContractPvP", 0xBui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ContractPvE", 0xBui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x3FF0000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Loyalty", 7ui64);
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4000000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Challenge", 9ui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0x4008000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RewardTrackType", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v18 = a1[2];
	v19 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v18 + 8) = 5;
	*(_QWORD*)v18 = v19;
	a1[2] += 16i64;
	v21 = &off_140C31850;
	do
	{
		sub_1400F06F0((__int64)a1, v20, *v21, *((_DWORD*)v21 + 2));
		v21 += 2;
		--v3;
	} while (v3);
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1406F313A: variable 'v5' is possibly undefined
// 1406F339A: variable 'v20' is possibly undefined
// 140B725F0: using guessed type char *off_140B725F0;
// 140C31850: using guessed type wchar_t *off_140C31850;
// 140C31BB0: using guessed type wchar_t *off_140C31BB0;

