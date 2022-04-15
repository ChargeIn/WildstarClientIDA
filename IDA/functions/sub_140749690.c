#include "../winhttp.h"

//----- (0000000140749690) ----------------------------------------------------
__int64 __fastcall sub_140749690(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64* v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax

	sub_140057020(a1, "AbilityBook", &off_140B75160);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSpecConstant", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MaxNumSpecs", 0xBui64);
	v4 = a1[2];
	*(_QWORD*)v4 = 0x4010000000000000i64;
	*(_DWORD*)(v4 + 8) = 3;
	a1[2] += 16i64;
	v5 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v5, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumSpecError", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ok", 2ui64);
	v8 = a1[2];
	*(_QWORD*)v8 = 0i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidIndex", 0xCui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0x3FF0000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"NoChange", 8ui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4000000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InCombat", 8ui64);
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4008000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidPlayer", 0xDui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0x4010000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"IndexLocked", 0xBui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x4014000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PvPRestricted", 0xDui64);
	v20 = a1[2];
	*(_QWORD*)v20 = 0x4018000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InVoid", 6ui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0x401C000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumEldanAvailability", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v24 = a1[2];
	v25 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v24 + 8) = 5;
	*(_QWORD*)v24 = v25;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Unavailable", 0xBui64);
	v26 = a1[2];
	*(_QWORD*)v26 = 0i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Inaccessible", 0xCui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0x3FF0000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Inactivated", 0xBui64);
	v30 = a1[2];
	*(_QWORD*)v30 = 0x4000000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Activated", 9ui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0x4008000000000000i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumAMPRespecType", 0x15ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v34 = a1[2];
	v35 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v34 + 8) = 5;
	*(_QWORD*)v34 = v35;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Full", 4ui64);
	v36 = a1[2];
	*(_QWORD*)v36 = 0i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Section", 7ui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0x3FF0000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Single", 6ui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x4000000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140B75160: using guessed type char *off_140B75160;

