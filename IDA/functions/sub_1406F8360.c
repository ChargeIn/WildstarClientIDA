#include "../winhttp.h"

//----- (00000001406F8360) ----------------------------------------------------
__int64 __fastcall sub_1406F8360(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	_QWORD* v4; // rax
	__int64 v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v2) = sub_1400578C0(a1);
	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v5 = *v4;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v5, L"nBuildNumber", 16042);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v7 = *v6;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v8, L"nVersion", 1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v10 = *v9;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v11, L"nVersionMajor", 7);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v14, L"nVersionMinor", 8);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v17, L"nApolloAPIVersion", 16);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v20, v2);
	return 1i64;
}
// 1406F8411: variable 'v7' is possibly undefined
// 1406F8423: variable 'v8' is possibly undefined
// 1406F8453: variable 'v10' is possibly undefined
// 1406F8465: variable 'v11' is possibly undefined
// 1406F8495: variable 'v13' is possibly undefined
// 1406F84A7: variable 'v14' is possibly undefined
// 1406F84CA: variable 'v16' is possibly undefined
// 1406F84E9: variable 'v17' is possibly undefined
// 1406F850F: variable 'v19' is possibly undefined
// 1406F8521: variable 'v20' is possibly undefined
// 140B41390: using guessed type wchar_t aNapolloapivers[18];
// 140B413B8: using guessed type wchar_t aNversionminor[14];
// 140B413D8: using guessed type wchar_t aNversionmajor[14];
// 140B413F8: using guessed type wchar_t aNversion_0[9];
// 140B41410: using guessed type wchar_t aNbuildnumber[13];

