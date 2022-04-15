#include "../winhttp.h"

//----- (0000000140711F80) ----------------------------------------------------
__int64 __fastcall sub_140711F80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned int* v10; // r9
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	unsigned int* v14; // r9
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	unsigned int* v30; // r9
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	unsigned int* v34; // r9
	__int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	unsigned int* v38; // r9
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned int* v42; // r9
	__int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // rdx
	wchar_t** v46; // rbx
	__int64* v47; // rax
	__int64 v49; // [rsp+20h] [rbp-10h] BYREF
	int v50; // [rsp+28h] [rbp-8h]

	sub_140057020(a1, "ChallengesLib", &off_140B73890);
	v2 = a1[2];
	v3 = 3i64;
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeType_Combat", 0x14ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v49 = v5;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v49, v6);
	a1[2] -= 16i64;
	v7 = a1[2];
	*(_QWORD*)v7 = 0x3FF0000000000000i64;
	*(_DWORD*)(v7 + 8) = 3;
	a1[2] += 16i64;
	v8 = a1[2];
	v9 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeType_Ability", 0x15ui64);
	v10 = (unsigned int*)(a1[2] - 16i64);
	v49 = v9;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v8 - 32), (int*)&v49, v10);
	a1[2] -= 16i64;
	v11 = a1[2];
	*(_QWORD*)v11 = 0x4000000000000000i64;
	*(_DWORD*)(v11 + 8) = 3;
	a1[2] += 16i64;
	v12 = a1[2];
	v13 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeType_General", 0x15ui64);
	v14 = (unsigned int*)(a1[2] - 16i64);
	v49 = v13;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v12 - 32), (int*)&v49, v14);
	a1[2] -= 16i64;
	v15 = a1[2];
	*(_QWORD*)v15 = 0x4008000000000000i64;
	*(_DWORD*)(v15 + 8) = 3;
	a1[2] += 16i64;
	v16 = a1[2];
	v17 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeType_UNUSED01", 0x16ui64);
	v18 = (unsigned int*)(a1[2] - 16i64);
	v49 = v17;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v16 - 32), (int*)&v49, v18);
	a1[2] -= 16i64;
	v19 = a1[2];
	*(_DWORD*)(v19 + 8) = 3;
	*(_QWORD*)v19 = 0x4010000000000000i64;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeType_Item", 0x12ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v49 = v21;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v49, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x401C000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeType_ChecklistActivate", 0x1Fui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v49 = v25;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v49, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x3FF0000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeTimerFlags_UNUSED", 0x1Aui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v49 = v29;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v49, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4000000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeTimerFlags_Active", 0x1Aui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v49 = v33;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v49, v34);
	a1[2] -= 16i64;
	v35 = a1[2];
	*(_QWORD*)v35 = 0x4010000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	a1[2] += 16i64;
	v36 = a1[2];
	v37 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeTimerFlags_Cooldown", 0x1Cui64);
	v38 = (unsigned int*)(a1[2] - 16i64);
	v49 = v37;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v36 - 32), (int*)&v49, v38);
	a1[2] -= 16i64;
	v39 = a1[2];
	*(_QWORD*)v39 = 0x4020000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	a1[2] += 16i64;
	v40 = a1[2];
	v41 = sub_140062650((__int64)a1, (unsigned __int64*)"ChallengeTimerFlags_LeftArea", 0x1Cui64);
	v42 = (unsigned int*)(a1[2] - 16i64);
	v49 = v41;
	v50 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v40 - 32), (int*)&v49, v42);
	a1[2] -= 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"ChallengeTier", 0xDui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v43 = a1[2];
	v44 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v43 + 8) = 5;
	*(_QWORD*)v43 = v44;
	a1[2] += 16i64;
	v46 = &off_140C35AC0;
	do
	{
		sub_1400F06F0((__int64)a1, v45, *v46, *((_DWORD*)v46 + 2));
		v46 += 2;
		--v3;
	} while (v3);
	v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 14071236A: variable 'v45' is possibly undefined
// 140B73890: using guessed type char *off_140B73890;
// 140C35AC0: using guessed type wchar_t *off_140C35AC0;

