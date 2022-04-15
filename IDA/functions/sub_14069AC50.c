#include "../winhttp.h"

//----- (000000014069AC50) ----------------------------------------------------
__int64 __fastcall sub_14069AC50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rdx
	int v11; // r10d
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	int v19; // r11d
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v4 = *(_QWORD*)(v2 + 8)) == 0 || (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_11;
	}
	v6 = *(_DWORD*)(v5 + 16);
	if ((unsigned int)(v6 - 4) > 2 && v6 != 3)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_11:
		a1[2] += 16i64;
		return 1i64;
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	LODWORD(v7) = sub_1400578C0((__int64)a1);
	v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
	v10 = a1[2];
	*(_QWORD*)v10 = *v9;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v10, L"nRating", v11);
	a1[2] -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v14, L"nWins", v15);
	a1[2] -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v18, L"nLosses", v19);
	a1[2] -= 16i64;
	v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v22, L"nDraws", v23);
	a1[2] -= 16i64;
	v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
	*(_QWORD*)v25 = *v24;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v26, v7);
	return 1i64;
}
// 14069AC88: variable 'v3' is possibly undefined
// 14069AD39: variable 'v11' is possibly undefined
// 14069AD6D: variable 'v13' is possibly undefined
// 14069AD7F: variable 'v14' is possibly undefined
// 14069AD7F: variable 'v15' is possibly undefined
// 14069ADB3: variable 'v17' is possibly undefined
// 14069ADC5: variable 'v18' is possibly undefined
// 14069ADC5: variable 'v19' is possibly undefined
// 14069ADF9: variable 'v21' is possibly undefined
// 14069AE0B: variable 'v22' is possibly undefined
// 14069AE0B: variable 'v23' is possibly undefined
// 14069AE2E: variable 'v25' is possibly undefined
// 14069AE43: variable 'v26' is possibly undefined
// 140B348A8: using guessed type wchar_t aNlosses[8];
// 140B348B8: using guessed type wchar_t aNdraws[7];
// 140B348C8: using guessed type wchar_t aNrating_0[8];
// 140B348D8: using guessed type wchar_t aNwins[6];

