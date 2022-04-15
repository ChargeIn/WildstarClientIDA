#include "../winhttp.h"

//----- (0000000140119250) ----------------------------------------------------
__int64 __fastcall sub_140119250(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
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
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64* v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rax
	__int64 v35; // r9
	__int64 v37; // [rsp+20h] [rbp-28h] BYREF
	int v38; // [rsp+28h] [rbp-20h]

	sub_140057020(a1, "Apollo", &off_140B57250);
	v2 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo", 6ui64);
	v3 = a1[2];
	v37 = v2;
	v38 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v37, v3);
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DragDropQueryResult", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PassOn", 6ui64);
	v6 = a1[2];
	*(_QWORD*)v6 = 0i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Ignore", 6ui64);
	v8 = a1[2];
	*(_QWORD*)v8 = 0x3FF0000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Accept", 6ui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Invalid", 7ui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4008000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DragDropCancelReason", 0x14ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EscapeKey", 9ui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DroppedOnNothing", 0x10ui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x3FF0000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ClickedOnNothing", 0x10ui64);
	v20 = a1[2];
	*(_QWORD*)v20 = 0x4000000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ClickedOnWorld", 0xEui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0x4008000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"WindowMove", 0xAui64);
	v24 = a1[2];
	*(_QWORD*)v24 = 0x4010000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"AddonLoadStatus", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v26 = a1[2];
	v27 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v26 + 8) = 5;
	*(_QWORD*)v26 = v27;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Loading", 7ui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Loaded", 6ui64);
	v30 = a1[2];
	*(_QWORD*)v30 = 0x3FF0000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"LoadingError", 0xCui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0xBFF0000000000000ui64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v34 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo", 6ui64);
	v35 = a1[2];
	v38 = 4;
	v37 = v34;
	sub_14005EA50((__int64)a1, a1 + 15, (int*)&v37, (unsigned int*)(v35 - 16));
	a1[2] -= 32i64;
	return 0i64;
}
// 140B57250: using guessed type char *off_140B57250;

