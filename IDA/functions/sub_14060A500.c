#include "../winhttp.h"

//----- (000000014060A500) ----------------------------------------------------
__int64* __fastcall sub_14060A500(__int64* a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v9; // [rsp+20h] [rbp-20h] BYREF
	__int64 v10; // [rsp+28h] [rbp-18h]
	__int64 v11; // [rsp+30h] [rbp-10h]
	__int64 v12; // [rsp+38h] [rbp-8h]

	*a1 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	a1[6] = 0i64;
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64*, _QWORD))(*(_QWORD*)a2 + 40i64))(
		a2,
		L"UI\\Interface\\Targeting\\Bar_Health_BnW\\Bar_Health_BnW.m3",
		a1,
		0i64) >= 0)
	{
		v4 = *a1;
		v9 = 150i64;
		v10 = 1065353216i64;
		v11 = 0i64;
		v12 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v9);
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64*, _QWORD))(*(_QWORD*)a2 + 40i64))(
		a2,
		L"UI\\Interface\\Targeting\\Bar_Health_BnW\\Bar_Health_BnW.m3",
		a1 + 1,
		0i64) >= 0)
	{
		v5 = a1[1];
		v9 = 150i64;
		v10 = 1065353216i64;
		v11 = 0i64;
		v12 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v9);
	}
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64*, _QWORD))(*(_QWORD*)a2 + 40i64))(
		a2,
		L"UI\\Interface\\Targeting\\Bar_Health_BnW\\Bar_GlowTip_BnW.m3",
		a1 + 2,
		0i64) >= 0)
	{
		v6 = a1[2];
		v9 = 150i64;
		v10 = 1065353216i64;
		v11 = 0i64;
		v12 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, &v9);
	}
	v7 = a1[1];
	if (v7 && a1[2])
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 896i64))(v7, 24i64);
	return a1;
}
// 140B25670: using guessed type wchar_t aUiInterfaceTar[56];
// 140B25F10: using guessed type wchar_t aUiInterfaceTar_0[56];
// 140B25F80: using guessed type wchar_t aUiInterfaceTar_1[57];

