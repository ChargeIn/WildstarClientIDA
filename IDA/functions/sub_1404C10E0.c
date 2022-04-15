#include "../winhttp.h"

//----- (00000001404C10E0) ----------------------------------------------------
void __fastcall sub_1404C10E0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	sub_1404C2960((__int64)a1);
	sub_1404C96C0(v2, (__int64)a1);
	v3 = a1[78];
	if (v3)
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v3 + 648i64))(v3, 0i64, a1);
	sub_140195D70((__int64)(a1 + 96));
	v4 = a1[76];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[76] = 0i64;
	}
	v5 = a1[77];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[77] = 0i64;
	}
	v6 = a1[78];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[78] = 0i64;
	}
	v7 = a1[79];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[79] = 0i64;
	}
}
// 1404C10F5: variable 'v2' is possibly undefined

