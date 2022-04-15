#include "../winhttp.h"

//----- (0000000140768E00) ----------------------------------------------------
__int64 __fastcall sub_140768E00(_QWORD* a1)
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
	__int64 v16; // rdx
	__int64 v17; // rsi
	wchar_t** v18; // rbx
	__int64* v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64* v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax

	sub_140057020(a1, "MatchingGameLib", &off_140B76320);
	sub_140058710((__int64)a1, (unsigned __int64*)"PVPGameState", 0xCui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v5 = 4i64;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v6 = &off_140C370E0;
	do
	{
		sub_1400F06F0((__int64)a1, v4, *v6, *((_DWORD*)v6 + 2));
		v6 += 2;
		--v5;
	} while (v5);
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"MatchEndReason", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	v11 = 4i64;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	v12 = &off_140C33410;
	do
	{
		sub_1400F06F0((__int64)a1, v10, *v12, *((_DWORD*)v12 + 2));
		v12 += 2;
		--v11;
	} while (v11);
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"PvpDeathReason", 0xEui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	v17 = 4i64;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v18 = &off_140C374C0;
	do
	{
		sub_1400F06F0((__int64)a1, v16, *v18, *((_DWORD*)v18 + 2));
		v18 += 2;
		--v17;
	} while (v17);
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Team", 4ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v20 = a1[2];
	v21 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v20 + 8) = 5;
	*(_QWORD*)v20 = v21;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Team1", 5ui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Team2", 5ui64);
	v24 = a1[2];
	*(_QWORD*)v24 = 0x3FF0000000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Winner", 6ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v26 = a1[2];
	v27 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v26 + 8) = 5;
	*(_QWORD*)v26 = v27;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Team1", 5ui64);
	v28 = a1[2];
	*(_QWORD*)v28 = 0i64;
	*(_DWORD*)(v28 + 8) = 3;
	a1[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Team2", 5ui64);
	v30 = a1[2];
	*(_QWORD*)v30 = 0x3FF0000000000000i64;
	*(_DWORD*)(v30 + 8) = 3;
	a1[2] += 16i64;
	v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Draw", 4ui64);
	v32 = a1[2];
	*(_QWORD*)v32 = 0x4000000000000000i64;
	*(_DWORD*)(v32 + 8) = 3;
	a1[2] += 16i64;
	v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Rules", 5ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v34 = a1[2];
	v35 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v34 + 8) = 5;
	*(_QWORD*)v34 = v35;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Default", 7ui64);
	v36 = a1[2];
	*(_QWORD*)v36 = 0i64;
	*(_DWORD*)(v36 + 8) = 3;
	a1[2] += 16i64;
	v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"DeathmatchPool", 0xEui64);
	v38 = a1[2];
	*(_QWORD*)v38 = 0x4000000000000000i64;
	*(_DWORD*)(v38 + 8) = 3;
	a1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"WaveRespawn", 0xBui64);
	v40 = a1[2];
	*(_QWORD*)v40 = 0x3FF0000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	a1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v41, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140768E9A: variable 'v4' is possibly undefined
// 140768F3A: variable 'v10' is possibly undefined
// 140768FDA: variable 'v16' is possibly undefined
// 140B76320: using guessed type char *off_140B76320;
// 140C33410: using guessed type wchar_t *off_140C33410;
// 140C370E0: using guessed type wchar_t *off_140C370E0;
// 140C374C0: using guessed type wchar_t *off_140C374C0;

