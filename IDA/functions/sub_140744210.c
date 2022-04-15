#include "../winhttp.h"

//----- (0000000140744210) ----------------------------------------------------
__int64 __fastcall sub_140744210(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // ebx
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64 v7; // rdx
	int v8; // r10d
	_QWORD* v9; // rax
	__int64 v10; // r11
	__int64 v11; // rdx
	int v12; // r10d
	_QWORD* v13; // rax
	__int64 v14; // r11
	__int64 v15; // rdx
	int v16; // r10d
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r10d
	int v20; // r9d
	unsigned __int16* v21; // r8
	__int64 v22; // r11
	_QWORD* v23; // rax
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	_QWORD* v31; // rax
	__int64 v32; // r10
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = sub_1400578C0(a1);
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if (*(_QWORD*)(qword_140C65898 + 27728))
	{
		v6 = sub_14005C3C0(v5, v4);
		v7 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v7 = *v6;
		*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v7, L"eNormalRule", v8);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v11, L"eThresholdRule", v12);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v15, L"eThresholdQuality", v16);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		v20 = v19;
		v21 = L"eHarvestRule";
		*(_QWORD*)v22 = *v17;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v17 + 2);
	}
	else
	{
		v23 = sub_14005C3C0(v5, v4);
		v24 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v24, L"eNormalRule", 1);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v27, L"eThresholdRule", 2);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v30, L"eThresholdQuality", 3);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		v20 = 0;
		v21 = L"eHarvestRule";
		*(_QWORD*)v32 = *v31;
		*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v18, v21, v20);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v35, v4);
	return 1i64;
}
// 1407442A9: variable 'v8' is possibly undefined
// 1407442E8: variable 'v10' is possibly undefined
// 1407442FA: variable 'v11' is possibly undefined
// 1407442FA: variable 'v12' is possibly undefined
// 140744339: variable 'v14' is possibly undefined
// 14074434B: variable 'v15' is possibly undefined
// 14074434B: variable 'v16' is possibly undefined
// 14074437D: variable 'v19' is possibly undefined
// 14074438A: variable 'v22' is possibly undefined
// 1407443F3: variable 'v26' is possibly undefined
// 140744405: variable 'v27' is possibly undefined
// 140744435: variable 'v29' is possibly undefined
// 140744447: variable 'v30' is possibly undefined
// 140744474: variable 'v32' is possibly undefined
// 140744486: variable 'v18' is possibly undefined
// 1407444AC: variable 'v34' is possibly undefined
// 1407444BE: variable 'v35' is possibly undefined
// 140B49158: using guessed type wchar_t aEthresholdqual_0[18];
// 140B49180: using guessed type wchar_t aEthresholdrule_0[15];
// 140B491A0: using guessed type wchar_t aEnormalrule_0[12];
// 140B491B8: using guessed type wchar_t aEharvestrule[13];
// 140B491D8: using guessed type wchar_t aEthresholdqual[18];
// 140B49200: using guessed type wchar_t aEthresholdrule[15];
// 140B49220: using guessed type wchar_t aEnormalrule[12];
// 140B49318: using guessed type wchar_t aEharvestrule_0[13];
// 140C65898: using guessed type __int64 qword_140C65898;

