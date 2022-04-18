#include "../winhttp.h"

//----- (0000000140428AC0) ----------------------------------------------------
void __fastcall sub_140428AC0(__int64 a1, unsigned __int16* a2, unsigned int a3, int a4, int a5)
{
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rdx
	_QWORD* v13; // rdi
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int v18; // ebp
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // r10
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	_DWORD* v29; // rcx
	__int64* v30; // rax
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	_QWORD* v34; // rbx
	__int64 v35; // rcx
	__int64 v36; // rdx
	__int64 v37; // [rsp+20h] [rbp-A08h]
	__int64(__fastcall * *v38)(); // [rsp+28h] [rbp-A00h] BYREF
	__int64 v39; // [rsp+30h] [rbp-9F8h]
	_QWORD* v40; // [rsp+38h] [rbp-9F0h]
	__int64 v41; // [rsp+40h] [rbp-9E8h]
	__int64 v42; // [rsp+48h] [rbp-9E0h] BYREF
	__int64 v43; // [rsp+50h] [rbp-9D8h]
	char v44[1224]; // [rsp+68h] [rbp-9C0h] BYREF
	__int64 v45[96]; // [rsp+530h] [rbp-4F8h] BYREF
	__int64 v46; // [rsp+830h] [rbp-1F8h]

	sub_14040FAE0((__int64)v45);
	v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a3)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v37 = v10, a3 < *(_DWORD*)(v10 + 32)))
		v37 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v37 == v9)
		v12 = 0i64;
	else
		v12 = v37 + 40;
	sub_1404111E0((__int64)v45, v12, 1);
	v13 = *(_QWORD**)(a1 + 400);
	v14 = v13[4];
	v38 = off_140B569F0;
	v40 = v13;
	v15 = *(_QWORD*)(v14 + 112);
	LODWORD(v41) = 1;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0((__int64)v13);
	v16 = v13[2];
	v17 = sub_14005C1B0((__int64)v13, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	v13[2] += 16i64;
	v18 = sub_1400578C0((__int64)v13);
	v19 = *(_QWORD*)(v13[4] + 160i64);
	LODWORD(v39) = v18;
	v20 = sub_14005C3C0(v19, v18);
	v21 = v13[2];
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	v13[2] += 16i64;
	sub_1400F06F0((__int64)v13, v21, L"nLootId", a3);
	v13[2] -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(v13[4] + 160i64), v18);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	v13[2] += 16i64;
	sub_1400F0870((__int64)v13, v24, L"strPlayer", a2);
	v13[2] -= 16i64;
	v25 = sub_14005C3C0(*(_QWORD*)(v13[4] + 160i64), v18);
	*(_QWORD*)v26 = *v25;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
	v13[2] += 16i64;
	v27 = (unsigned __int64*)sub_14018F0E0(&v42, L"bNeed")[1];
	if (v27)
	{
		v28 = -1i64;
		do
			++v28;
		while (*((_BYTE*)v27 + v28));
		sub_140058710((__int64)v13, v27, v28);
	}
	else
	{
		*(_DWORD*)(v13[2] + 8i64) = 0;
		v13[2] += 16i64;
	}
	if (v43)
		sub_14018B900(v43, 0);
	v29 = (_DWORD*)v13[2];
	v29[2] = 1;
	*v29 = a5 != 0;
	v13[2] += 16i64;
	v30 = (__int64*)sub_1400580E0((__int64)v13, -3);
	sub_14005EA50((__int64)v13, v30, (int*)(v13[2] - 32i64), (unsigned int*)(v13[2] - 16i64));
	v13[2] -= 48i64;
	v31 = sub_14005C3C0(*(_QWORD*)(v13[4] + 160i64), v18);
	*(_QWORD*)v32 = *v31;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	v13[2] += 16i64;
	sub_1400F06F0((__int64)v13, v33, L"nRoll", a4);
	v13[2] -= 16i64;
	v34 = (_QWORD*)sub_14040FC60((__int64)v44, (__int64)v45);
	if ((unsigned int)sub_140415BB0(v13, (__int64)v34))
	{
		sub_1400FB540((__int64)&v38);
		v13[2] -= 16i64;
	}
	if (*v34)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v34 + 8i64))(*v34);
		*v34 = 0i64;
	}
	v35 = v34[96];
	if (v35)
		sub_14018B900(v35, 0);
	Apollo_LUAEvent(a1, "LootRoll", byte_1409EAE54, v18, v37, v38, v39, v40, v41);
	sub_1400579E0((__int64)v13, v36, v18);
	if (v45[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v45[0] + 8i64))(v45[0]);
		v45[0] = 0i64;
	}
	if (v46)
		sub_14018B900(v46, 0);
}
// 140428C3A: variable 'v23' is possibly undefined
// 140428C4C: variable 'v24' is possibly undefined
// 140428C76: variable 'v26' is possibly undefined
// 140428D3D: variable 'v32' is possibly undefined
// 140428D4F: variable 'v33' is possibly undefined
// 140428DDA: variable 'v36' is possibly undefined
// 1409EAE54: using guessed type _BYTE byte_1409EAE54[24];
// 140B00C78: using guessed type wchar_t aBneed_0[6];
// 140B00C88: using guessed type wchar_t aStrplayer_1[10];
// 140B00CA0: using guessed type wchar_t aNlootid_2[8];
// 140B00CD8: using guessed type wchar_t aNroll[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140428AC0: using guessed type char var_9C0[1224];

