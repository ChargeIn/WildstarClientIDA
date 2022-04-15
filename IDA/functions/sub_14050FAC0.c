#include "../winhttp.h"

//----- (000000014050FAC0) ----------------------------------------------------
__int64 __fastcall sub_14050FAC0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int* v13; // r9
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	unsigned int* v17; // r9
	__int64 v19; // [rsp+20h] [rbp-18h] BYREF
	int v20; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, "CombatFloaters", &off_140B6A730);
	v2 = a1[2];
	*(_QWORD*)v2 = 0x3FF0000000000000i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"CombatMessageLocation_Source", 0x1Cui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v19 = v4;
	v20 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v19, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x4000000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"CombatMessageLocation_Target", 0x1Cui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v19 = v8;
	v20 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v19, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4008000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"CombatMessageLocation_Self", 0x1Aui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v19 = v12;
	v20 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v19, v13);
	a1[2] -= 16i64;
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4010000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = a1[2];
	v16 = sub_140062650((__int64)a1, (unsigned __int64*)"CombatMessageLocation_Screen", 0x1Cui64);
	v17 = (unsigned int*)(a1[2] - 16i64);
	v19 = v16;
	v20 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v15 - 32), (int*)&v19, v17);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B6A730: using guessed type char *off_140B6A730;

