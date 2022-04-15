//----- (00000001404EF6D0) ----------------------------------------------------
__int64 __fastcall sub_1404EF6D0(__int64 a1)
{
	int v1; // eax
	int v2; // esi
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebx
	__int64 v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	__int64 v11; // rax
	__int64* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdx
	int v15; // r10d
	__int64 v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx

	v1 = dword_140DC3228;
	v2 = 0;
	if ((dword_140DC3228 & 1) == 0)
	{
		v1 = dword_140DC3228 | 1;
		dword_140DC3234 = 0;
		dword_140DC3228 |= 1u;
	}
	if ((v1 & 2) == 0)
	{
		v1 |= 2u;
		dword_140DC323C = 0;
		dword_140DC3228 = v1;
	}
	if ((v1 & 4) == 0)
	{
		dword_140DC3244 = 0;
		dword_140DC3228 = v1 | 4;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = sub_1400578C0(a1);
	if (!dword_140DC3234)
	{
		dword_140DC3234 = 1;
		v7 = sub_140200220(0x4FBu);
		if (v7)
			dword_140DC3230 = *(_DWORD*)(v7 + 4);
		else
			dword_140DC3230 = 0;
	}
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
	v9 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v9, L"nFemaleMannequinCreatureId", v10);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (!dword_140DC323C)
	{
		dword_140DC323C = 1;
		v11 = sub_140200220(0x4FBu);
		if (v11)
			dword_140DC3238 = *(_DWORD*)(v11 + 8);
		else
			dword_140DC3238 = 0;
	}
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
	v13 = *(_QWORD*)(a1 + 16);
	v14 = *v12;
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v14, L"nMaleMannequinCreatureId", v15);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (dword_140DC3244)
	{
		v2 = dword_140DC3240;
	}
	else
	{
		dword_140DC3244 = 1;
		v16 = sub_140200220(0x4FBu);
		if (v16)
			v2 = *(_DWORD*)(v16 + 12);
		dword_140DC3240 = v2;
	}
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
	v18 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v18, L"nWeaponMannequinCreatureId", v2);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v21, v6);
	return 1i64;
}
// 1404EF7D7: variable 'v10' is possibly undefined
// 1404EF856: variable 'v15' is possibly undefined
// 1404EF8EC: variable 'v20' is possibly undefined
// 1404EF8FE: variable 'v21' is possibly undefined
// 140B0DDA8: using guessed type wchar_t aNfemalemannequ[27];
// 140B0DDE0: using guessed type wchar_t aNmalemannequin[25];
// 140B0DE18: using guessed type wchar_t aNweaponmannequ[27];
// 140DC3228: using guessed type int dword_140DC3228;
// 140DC3230: using guessed type int dword_140DC3230;
// 140DC3234: using guessed type int dword_140DC3234;
// 140DC3238: using guessed type int dword_140DC3238;
// 140DC323C: using guessed type int dword_140DC323C;
// 140DC3240: using guessed type int dword_140DC3240;
// 140DC3244: using guessed type int dword_140DC3244;

