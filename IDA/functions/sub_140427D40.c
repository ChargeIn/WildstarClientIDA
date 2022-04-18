#include "../winhttp.h"

//----- (0000000140427D40) ----------------------------------------------------
void __fastcall sub_140427D40(__int64 a1, unsigned int a2, int a3)
{
	_QWORD* v3; // rdi
	__int64 v5; // rcx
	unsigned __int64 v7; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // ebp
	__int64 v12; // r8
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rdx
	_QWORD* v16; // rax
	__int64 v17; // rdx
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // [rsp+20h] [rbp-9E8h]
	__int64(__fastcall * *v22)(); // [rsp+28h] [rbp-9E0h] BYREF
	__int64 v23; // [rsp+30h] [rbp-9D8h]
	_QWORD* v24; // [rsp+38h] [rbp-9D0h]
	__int64 v25; // [rsp+40h] [rbp-9C8h]
	char v26[1224]; // [rsp+48h] [rbp-9C0h] BYREF
	__int64 v27[96]; // [rsp+510h] [rbp-4F8h] BYREF
	__int64 v28; // [rsp+810h] [rbp-1F8h]

	v3 = *(_QWORD**)(a1 + 400);
	v5 = v3[4];
	v22 = off_140B569F0;
	v7 = *(_QWORD*)(v5 + 112);
	v24 = v3;
	LODWORD(v25) = 1;
	if (*(_QWORD*)(v5 + 120) >= v7)
		sub_14005E2C0((__int64)v3);
	v9 = v3[2];
	v10 = sub_14005C1B0((__int64)v3, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	v3[2] += 16i64;
	v11 = sub_1400578C0((__int64)v3);
	LODWORD(v23) = v11;
	sub_14040FAE0((__int64)v27);
	v12 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v13 = v12;
	v14 = *(_QWORD*)(v12 + 8);
	while (v14)
	{
		if (*(_DWORD*)(v14 + 32) < a2)
		{
			v14 = *(_QWORD*)(v14 + 24);
		}
		else
		{
			v13 = v14;
			v14 = *(_QWORD*)(v14 + 16);
		}
	}
	if (v13 == v12 || (v21 = v13, a2 < *(_DWORD*)(v13 + 32)))
		v21 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v21 == v12)
		v15 = 0i64;
	else
		v15 = v21 + 40;
	sub_1404111E0((__int64)v27, v15, 1);
	v16 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v11);
	v17 = v3[2];
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	v3[2] += 16i64;
	sub_1400F06F0((__int64)v3, v17, L"nLootId", a2);
	v3[2] -= 16i64;
	v18 = (_QWORD*)sub_14040FC60((__int64)v26, (__int64)v27);
	if ((unsigned int)sub_140415BB0(v3, (__int64)v18))
	{
		sub_1400FB540((__int64)&v22);
		v3[2] -= 16i64;
	}
	if (*v18)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v18 + 8i64))(*v18);
		*v18 = 0i64;
	}
	v19 = v18[96];
	if (v19)
		sub_14018B900(v19, 0);
	if ((unsigned int)sub_140649870(v3, a3))
	{
		sub_1400FB540((__int64)&v22);
		v3[2] -= 16i64;
	}
	Apollo_LUAEvent(a1, "LootTakenBy", byte_1409EACB4, v11, v21, v22, v23, v24, v25);
	if (v27[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27[0] + 8i64))(v27[0]);
		v27[0] = 0i64;
	}
	if (v28)
		sub_14018B900(v28, 0);
	sub_1400579E0((__int64)v3, v20, v11);
}
// 140427F6A: variable 'v20' is possibly undefined
// 1409EACB4: using guessed type _BYTE byte_1409EACB4[24];
// 140B00AF8: using guessed type wchar_t aNlootid[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140427D40: using guessed type char var_9C0[1224];

