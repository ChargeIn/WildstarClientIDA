#include "../winhttp.h"

//----- (0000000140763BD0) ----------------------------------------------------
__int64 __fastcall sub_140763BD0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rsi
	wchar_t** v6; // rdi
	__int64* v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rsi
	wchar_t** v12; // rdi
	__int64* v13; // rax
	__int64 v14; // rdi
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rsi
	wchar_t** v18; // rdi
	__int64* v19; // rax

	sub_140057020(a1, "CostumesLib", &off_140B76170);
	sub_140058710((__int64)a1, (unsigned __int64*)"CostumeSaveResult", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 14i64;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v6 = &off_140C37510;
	do
	{
		sub_1400F06F0((__int64)a1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"CostumeUnlockResult", 0x13ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	v11 = 13i64;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	v12 = &off_140C37010;
	do
	{
		sub_1400F06F0((__int64)a1, v10, *v12, *((_DWORD*)v12 + 2));
		v12 += 2;
		--v11;
	} while (v11);
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"SetCostumeResult", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	v17 = 6i64;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v18 = &off_140C37180;
	do
	{
		sub_1400F06F0((__int64)a1, v16, *v18, *((_DWORD*)v18 + 2));
		v18 += 2;
		--v17;
	} while (v17);
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140763C5A: variable 'v4' is possibly undefined
// 140763CFA: variable 'v10' is possibly undefined
// 140763D9A: variable 'v16' is possibly undefined
// 140B76170: using guessed type char *off_140B76170;
// 140C37010: using guessed type wchar_t *off_140C37010;
// 140C37180: using guessed type wchar_t *off_140C37180;
// 140C37510: using guessed type wchar_t *off_140C37510;

