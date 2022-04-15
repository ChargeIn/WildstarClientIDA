#include "../winhttp.h"

//----- (000000014076ACB0) ----------------------------------------------------
__int64 __fastcall sub_14076ACB0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rsi
	wchar_t** v6; // rbx
	__int64* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rsi
	wchar_t** v12; // rbx
	__int64* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rax
	__int64* v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64* v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax

	sub_140057020(a1, "MatchMakingLib", &off_140B764C0);
	sub_140058710((__int64)a1, (unsigned __int64*)"MatchType", 9ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 16i64;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v6 = &off_140C2D410;
	do
	{
		sub_1400F06F0((__int64)a1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MatchQueueResult", 0x10ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	v11 = 51i64;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	v12 = &off_140C34CE0;
	do
	{
		sub_1400F06F0((__int64)a1, v10, *v12, *((_DWORD*)v12 + 2));
		v12 += 2;
		--v11;
	} while (v11);
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Roles", 5ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Tank", 4ui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Healer", 6ui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x3FF0000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DPS", 3ui64);
	v20 = a1[2];
	*(_QWORD*)v20 = 0x4000000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RatingType", 0xAui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v22 = a1[2];
	v23 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v22 + 8) = 5;
	*(_QWORD*)v22 = v23;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Arena2v2", 8ui64);
	v24 = a1[2];
	*(_QWORD*)v24 = 0i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Arena3v3", 8ui64);
	v26 = a1[2];
	*(_QWORD*)v26 = 0x3FF0000000000000i64;
	*(_DWORD*)(v26 + 8) = 3;
	a1[2] += 16i64;
	v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Arena5v5", 8ui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0x4000000000000000i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"RatedBattleground", 0x11ui64);
	v30 = a1[2];
	*(_QWORD*)v30 = 0x4008000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Warplot", 7ui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0x4010000000000000i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14076AD4A: variable 'v4' is possibly undefined
// 14076ADEA: variable 'v10' is possibly undefined
// 140B764C0: using guessed type char *off_140B764C0;
// 140C2D410: using guessed type wchar_t *off_140C2D410;
// 140C34CE0: using guessed type wchar_t *off_140C34CE0;

