//----- (0000000140429400) ----------------------------------------------------
void __fastcall sub_140429400(__int64 a1, unsigned int a2)
{
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdx
	_QWORD* v8; // rdi
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int v13; // ebp
	__int64 v14; // rcx
	_QWORD* v15; // rax
	__int64 v16; // rdx
	_QWORD* v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // [rsp+20h] [rbp-9D8h]
	__int64(__fastcall * *v21)(); // [rsp+28h] [rbp-9D0h] BYREF
	__int64 v22; // [rsp+30h] [rbp-9C8h]
	_QWORD* v23; // [rsp+38h] [rbp-9C0h]
	__int64 v24; // [rsp+40h] [rbp-9B8h]
	char v25[1224]; // [rsp+48h] [rbp-9B0h] BYREF
	__int64 v26[96]; // [rsp+510h] [rbp-4E8h] BYREF
	__int64 v27; // [rsp+810h] [rbp-1E8h]

	sub_14040FAE0((__int64)v26);
	v4 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v20 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v20 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v20 == v4)
		v7 = 0i64;
	else
		v7 = v20 + 40;
	sub_1404111E0((__int64)v26, v7, 1);
	v8 = *(_QWORD**)(a1 + 400);
	v9 = v8[4];
	v21 = off_140B569F0;
	v23 = v8;
	v10 = *(_QWORD*)(v9 + 112);
	LODWORD(v24) = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0((__int64)v8);
	v11 = v8[2];
	v12 = sub_14005C1B0((__int64)v8, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	v8[2] += 16i64;
	v13 = sub_1400578C0((__int64)v8);
	v14 = *(_QWORD*)(v8[4] + 160i64);
	LODWORD(v22) = v13;
	v15 = sub_14005C3C0(v14, v13);
	v16 = v8[2];
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	v8[2] += 16i64;
	sub_1400F06F0((__int64)v8, v16, L"nLootId", a2);
	v8[2] -= 16i64;
	v17 = (_QWORD*)sub_14040FC60((__int64)v25, (__int64)v26);
	if ((unsigned int)sub_140415BB0(v8, (__int64)v17))
	{
		sub_1400FB540((__int64)&v21);
		v8[2] -= 16i64;
	}
	if (*v17)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v17 + 8i64))(*v17);
		*v17 = 0i64;
	}
	v18 = v17[96];
	if (v18)
		sub_14018B900(v18, 0);
	sub_1400EA3E0(a1, "LootRollAllPassed", L"T", v13, v20, v21, v22, v23, v24);
	sub_1400579E0((__int64)v8, v19, v13);
	if (v26[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26[0] + 8i64))(v26[0]);
		v26[0] = 0i64;
	}
	if (v27)
		sub_14018B900(v27, 0);
}
// 1404295CD: variable 'v19' is possibly undefined
// 1409EAF8C: using guessed type wchar_t aT_19[2];
// 140B00D10: using guessed type wchar_t aNlootid_5[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140429400: using guessed type char var_9B0[1224];

