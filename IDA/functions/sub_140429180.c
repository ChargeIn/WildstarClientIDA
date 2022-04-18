#include "../winhttp.h"

//----- (0000000140429180) ----------------------------------------------------
void __fastcall sub_140429180(__int64 a1, unsigned __int16* a2, unsigned int a3)
{
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdx
	_QWORD* v10; // rdi
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	unsigned int v15; // ebp
	__int64 v16; // rcx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	_QWORD* v22; // rbx
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // [rsp+20h] [rbp-9E8h]
	__int64(__fastcall * *v26)(); // [rsp+28h] [rbp-9E0h] BYREF
	__int64 v27; // [rsp+30h] [rbp-9D8h]
	_QWORD* v28; // [rsp+38h] [rbp-9D0h]
	__int64 v29; // [rsp+40h] [rbp-9C8h]
	char v30[1224]; // [rsp+48h] [rbp-9C0h] BYREF
	__int64 v31[96]; // [rsp+510h] [rbp-4F8h] BYREF
	__int64 v32; // [rsp+810h] [rbp-1F8h]

	sub_14040FAE0((__int64)v31);
	v6 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v25 = v7, a3 < *(_DWORD*)(v7 + 32)))
		v25 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v25 == v6)
		v9 = 0i64;
	else
		v9 = v25 + 40;
	sub_1404111E0((__int64)v31, v9, 1);
	v10 = *(_QWORD**)(a1 + 400);
	v11 = v10[4];
	v26 = off_140B569F0;
	v28 = v10;
	v12 = *(_QWORD*)(v11 + 112);
	LODWORD(v29) = 1;
	if (*(_QWORD*)(v11 + 120) >= v12)
		sub_14005E2C0((__int64)v10);
	v13 = v10[2];
	v14 = sub_14005C1B0((__int64)v10, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	v10[2] += 16i64;
	v15 = sub_1400578C0((__int64)v10);
	v16 = *(_QWORD*)(v10[4] + 160i64);
	LODWORD(v27) = v15;
	v17 = sub_14005C3C0(v16, v15);
	v18 = v10[2];
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	v10[2] += 16i64;
	sub_1400F06F0((__int64)v10, v18, L"nLootId", a3);
	v10[2] -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(v10[4] + 160i64), v15);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	v10[2] += 16i64;
	sub_1400F0870((__int64)v10, v21, L"strPlayer", a2);
	v10[2] -= 16i64;
	v22 = (_QWORD*)sub_14040FC60((__int64)v30, (__int64)v31);
	if ((unsigned int)sub_140415BB0(v10, (__int64)v22))
	{
		sub_1400FB540((__int64)&v26);
		v10[2] -= 16i64;
	}
	if (*v22)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v22 + 8i64))(*v22);
		*v22 = 0i64;
	}
	v23 = v22[96];
	if (v23)
		sub_14018B900(v23, 0);
	Apollo_LUAEvent(a1, "LootAssigned", byte_1409EADF4, v15, v25, v26, v27, v28, v29);
	sub_1400579E0((__int64)v10, v24, v15);
	if (v31[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v31[0] + 8i64))(v31[0]);
		v31[0] = 0i64;
	}
	if (v32)
		sub_14018B900(v32, 0);
}
// 1404292F8: variable 'v20' is possibly undefined
// 14042930A: variable 'v21' is possibly undefined
// 140429395: variable 'v24' is possibly undefined
// 1409EADF4: using guessed type _BYTE byte_1409EADF4[32];
// 140B00C50: using guessed type wchar_t aStrplayer_3[10];
// 140B00C68: using guessed type wchar_t aNlootid_4[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140429180: using guessed type char var_9C0[1224];

