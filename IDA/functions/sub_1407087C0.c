#include "../winhttp.h"

//----- (00000001407087C0) ----------------------------------------------------
__int64 __fastcall sub_1407087C0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	_QWORD* v4; // rax
	__int64 v5; // rdx
	int v6; // r10d
	_QWORD* v7; // rax
	__int64 v8; // r11
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v2) = sub_1400578C0(a1);
	sub_140006AC0();
	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v5 = *v4;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v5, L"nWeeklyBonusMax", v6);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v9, L"nWeeklyBonusEarned", v10);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v13, v2);
	return 1i64;
}
// 140708846: variable 'v6' is possibly undefined
// 140708888: variable 'v8' is possibly undefined
// 14070889A: variable 'v9' is possibly undefined
// 14070889A: variable 'v10' is possibly undefined
// 1407088C0: variable 'v12' is possibly undefined
// 1407088D2: variable 'v13' is possibly undefined
// 140B42300: using guessed type wchar_t aNweeklybonusea[19];
// 140B42328: using guessed type wchar_t aNweeklybonusma[16];
// 140C635F0: using guessed type __int64 qword_140C635F0;

