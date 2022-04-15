#include "../winhttp.h"

//----- (0000000140759FE0) ----------------------------------------------------
__int64 __fastcall sub_140759FE0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64* v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax

	sub_140057020(a1, "AttributeMilestonesLib", &off_140B75940);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumAttributeMilestoneResult", 0x20ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ok", 2ui64);
	v4 = a1[2];
	*(_QWORD*)v4 = 0x3FF0000000000000i64;
	*(_DWORD*)(v4 + 8) = 3;
	a1[2] += 16i64;
	v5 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v5, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"InvalidUnit", 0xBui64);
	v6 = a1[2];
	*(_QWORD*)v6 = 0x4008000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"UnknownClassId", 0xEui64);
	v8 = a1[2];
	*(_QWORD*)v8 = 0x4014000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140B75940: using guessed type char *off_140B75940;

