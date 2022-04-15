#include "../winhttp.h"

//----- (000000014076EDD0) ----------------------------------------------------
__int64 __fastcall sub_14076EDD0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rsi
	wchar_t** v6; // rbx
	__int64* v7; // rax

	sub_140057020(a1, "LeaderboardLib", &off_140B765C0);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumLeaderboardType", 0x17ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 10i64;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v6 = &off_140C35070;
	do
	{
		sub_1400F06F0((__int64)a1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14076EE5A: variable 'v4' is possibly undefined
// 140B765C0: using guessed type char *off_140B765C0;
// 140C35070: using guessed type wchar_t *off_140C35070;

