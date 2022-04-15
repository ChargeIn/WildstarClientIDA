#include "../winhttp.h"

//----- (0000000140763DF0) ----------------------------------------------------
__int64 __fastcall sub_140763DF0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64 v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rdx
	wchar_t** v10; // rbx
	__int64* v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rbp
	wchar_t** v16; // rbx
	__int64* v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rdx
	wchar_t** v21; // rbx
	__int64* v22; // rax
	__int64 v24; // [rsp+20h] [rbp-18h] BYREF
	int v25; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, "ICCommLib", &off_140B76210);
	v2 = a1[2];
	v3 = 3i64;
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"knInvalidICCommMessageId", 0x18ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v24 = v5;
	v25 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v24, v6);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumICCommChannelType", 0x19ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = 5i64;
	*(_QWORD*)v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	a1[2] += 16i64;
	v10 = &off_140C33C80;
	do
	{
		sub_1400F06F0((__int64)a1, v9, *v10, *((_DWORD*)v10 + 2));
		v10 += 2;
		--v3;
	} while (v3);
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumICCommJoinResult", 0x18ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v12 = a1[2];
	v13 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	v15 = 7i64;
	*(_QWORD*)v12 = v13;
	a1[2] += 16i64;
	v16 = &off_140C334C0;
	do
	{
		sub_1400F06F0((__int64)a1, v14, *v16, *((_DWORD*)v16 + 2));
		v16 += 2;
		--v15;
	} while (v15);
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumICCommMessageResult", 0x1Bui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v18 = a1[2];
	v19 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v18 + 8) = 5;
	*(_QWORD*)v18 = v19;
	a1[2] += 16i64;
	v21 = &off_140C2D510;
	do
	{
		sub_1400F06F0((__int64)a1, v20, *v21, *((_DWORD*)v21 + 2));
		v21 += 2;
		--v8;
	} while (v8);
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140763EDA: variable 'v9' is possibly undefined
// 140763F6A: variable 'v14' is possibly undefined
// 140763FFA: variable 'v20' is possibly undefined
// 140B76210: using guessed type char *off_140B76210;
// 140C2D510: using guessed type wchar_t *off_140C2D510;
// 140C334C0: using guessed type wchar_t *off_140C334C0;
// 140C33C80: using guessed type wchar_t *off_140C33C80;

