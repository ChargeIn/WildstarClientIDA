#include "../winhttp.h"

//----- (0000000140174800) ----------------------------------------------------
void __fastcall sub_140174800(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdx

	*a1 = off_140B5D400;
	v2 = a1[306];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[306] = 0i64;
	}
	v3 = a1[309];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[300];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[300] = 0i64;
	}
	v5 = a1[303];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[294];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[294] = 0i64;
	}
	v7 = a1[297];
	if (v7)
		sub_14018B900(v7, 0);
	v8 = a1[288];
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[288] = 0i64;
	}
	v9 = a1[291];
	if (v9)
		sub_14018B900(v9, 0);
	sub_1400C4170((__int64)(a1 + 236));
	sub_1400C4170((__int64)(a1 + 184));
	sub_1400C4170((__int64)(a1 + 132));
	sub_1400C6030((__int64)a1, v10);
}
// 1401748FA: variable 'v10' is possibly undefined
// 140B5D400: using guessed type __int64 (__fastcall *off_140B5D400[25])();

