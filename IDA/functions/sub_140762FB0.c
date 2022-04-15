#include "../winhttp.h"

//----- (0000000140762FB0) ----------------------------------------------------
__int64 __fastcall sub_140762FB0(_QWORD* a1)
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

	sub_140057020(a1, "ContractsLib", &off_140B76120);
	sub_140058710((__int64)a1, (unsigned __int64*)"ContractQuality", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 5i64;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v6 = &off_140C2EF30;
	do
	{
		sub_1400F06F0((__int64)a1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ContractType", 0xCui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	v11 = 3i64;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	v12 = &off_140C36FE0;
	do
	{
		sub_1400F06F0((__int64)a1, v10, *v12, *((_DWORD*)v12 + 2));
		v12 += 2;
		--v11;
	} while (v11);
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14076303A: variable 'v4' is possibly undefined
// 1407630DA: variable 'v10' is possibly undefined
// 140B76120: using guessed type char *off_140B76120;
// 140C2EF30: using guessed type wchar_t *off_140C2EF30;
// 140C36FE0: using guessed type wchar_t *off_140C36FE0;

