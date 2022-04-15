//----- (0000000140023C00) ----------------------------------------------------
__int64 __fastcall sub_140023C00(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rsi
	wchar_t** v6; // rbx
	__int64* v7; // rax

	v1 = *(_QWORD**)(*(_QWORD*)(a1 + 72) + 400i64);
	sub_140057020(v1, "CharacterScreenLib", &off_140C56330);
	sub_140058710((__int64)v1, (unsigned __int64*)"CodeEnumGameMode", 0x10ui64);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v2 = v1[2];
	v3 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 2i64;
	*(_QWORD*)v2 = v3;
	v1[2] += 16i64;
	v6 = &off_140C33A20;
	do
	{
		sub_1400F06F0((__int64)v1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v7, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	sub_140057020(v1, "AccountItemLib", &off_140B69480);
	sub_1404E7F60((__int64)v1);
	v1[2] -= 16i64;
	sub_140057020(v1, "AlienFxLib", &off_140B69B90);
	v1[2] -= 16i64;
	return sub_1404F2860(v1);
}
// 140023C9A: variable 'v4' is possibly undefined
// 140B69480: using guessed type char *off_140B69480;
// 140B69B90: using guessed type char *off_140B69B90;
// 140C33A20: using guessed type wchar_t *off_140C33A20;
// 140C56330: using guessed type char *off_140C56330;

