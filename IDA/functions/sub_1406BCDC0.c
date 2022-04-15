#include "../winhttp.h"

//----- (00000001406BCDC0) ----------------------------------------------------
void __fastcall sub_1406BCDC0(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64* v19; // rdi
	int i; // esi
	__int64 v21; // rcx
	__int64 v22; // rdx

	v2 = (__int64)(a1 + 128);
	*(_QWORD*)(v2 - 1024) = off_140B70300;
	sub_140774790(v2);
	v3 = a1[289];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[289] = 0i64;
	}
	v4 = a1[290];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[290] = 0i64;
	}
	v5 = a1[291];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[291] = 0i64;
	}
	v6 = a1[293];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[293] = 0i64;
	}
	v7 = a1[292];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[292] = 0i64;
	}
	v8 = a1[294];
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[294] = 0i64;
	}
	v9 = a1[324];
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		a1[324] = 0i64;
	}
	v10 = a1[327];
	if (v10)
		sub_14018B900(v10, 0);
	v11 = a1[318];
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		a1[318] = 0i64;
	}
	v12 = a1[321];
	if (v12)
		sub_14018B900(v12, 0);
	v13 = a1[312];
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		a1[312] = 0i64;
	}
	v14 = a1[315];
	if (v14)
		sub_14018B900(v14, 0);
	v15 = a1[306];
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		a1[306] = 0i64;
	}
	v16 = a1[309];
	if (v16)
		sub_14018B900(v16, 0);
	v17 = a1[304];
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	v18 = a1[303];
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	v19 = a1 + 285;
	for (i = 8; i >= 0; --i)
	{
		v21 = *--v19;
		if (v21)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	}
	sub_140771AD0(a1 + 128);
	sub_1400C6030((__int64)a1, v22);
}
// 1406BCFAA: variable 'v22' is possibly undefined
// 140B70300: using guessed type __int64 (__fastcall *off_140B70300[25])();

