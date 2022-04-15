#include "../winhttp.h"

//----- (0000000140430E00) ----------------------------------------------------
void __fastcall sub_140430E00(__int64 a1, int a2, __int64 a3)
{
	_QWORD* v3; // rdi
	__int64 v5; // rcx
	unsigned __int64 v7; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // ebp
	__int64 v12; // rcx
	_QWORD* v13; // rax
	__int64 v14; // r8
	__int64 v15; // rdx
	_QWORD* v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-508h] BYREF
	__int64 v20; // [rsp+28h] [rbp-500h]
	_QWORD* v21; // [rsp+30h] [rbp-4F8h]
	__int64 v22; // [rsp+38h] [rbp-4F0h]
	char v23[1256]; // [rsp+40h] [rbp-4E8h] BYREF

	v3 = *(_QWORD**)(a1 + 400);
	v5 = v3[4];
	v19 = off_140B569F0;
	v7 = *(_QWORD*)(v5 + 112);
	v21 = v3;
	LODWORD(v22) = 1;
	if (*(_QWORD*)(v5 + 120) >= v7)
		sub_14005E2C0((__int64)v3);
	v9 = v3[2];
	v10 = sub_14005C1B0((__int64)v3, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	v3[2] += 16i64;
	v11 = sub_1400578C0((__int64)v3);
	v12 = *(_QWORD*)(v3[4] + 160i64);
	LODWORD(v20) = v11;
	v13 = sub_14005C3C0(v12, v11);
	v14 = v3[2];
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	v3[2] += 16i64;
	sub_1400F06F0((__int64)v3, v15, L"nLootId", a2);
	v3[2] -= 16i64;
	v16 = (_QWORD*)sub_14040FC60((__int64)v23, a3);
	if ((unsigned int)sub_140415BB0(v3, (__int64)v16))
	{
		sub_1400FB540((__int64)&v19);
		v3[2] -= 16i64;
	}
	if (*v16)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v16 + 8i64))(*v16);
		*v16 = 0i64;
	}
	v17 = v16[96];
	if (v17)
		sub_14018B900(v17, 0);
	sub_1400EA3E0(a1, "LootBindcheck", L"T", v11, v19, v20, v21, v22);
	sub_1400579E0((__int64)v3, v18, v11);
}
// 140430EB5: variable 'v15' is possibly undefined
// 140430F51: variable 'v18' is possibly undefined
// 1409EF6EC: using guessed type wchar_t aT_55[2];
// 140B01588: using guessed type wchar_t aNlootid_6[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140430E00: using guessed type char var_4E8[1256];

