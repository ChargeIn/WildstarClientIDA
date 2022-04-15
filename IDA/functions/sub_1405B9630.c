#include "../winhttp.h"

//----- (00000001405B9630) ----------------------------------------------------
void __fastcall sub_1405B9630(_QWORD* a1, __int64 a2)
{
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

	*a1 = off_140B6DAA0;
	v3 = a1[129];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[129] = 0i64;
	}
	v4 = a1[146];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[146] = 0i64;
	}
	v5 = a1[154];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[154] = 0i64;
	}
	v6 = a1[157];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[148];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[148] = 0i64;
	}
	v8 = a1[151];
	if (v8)
		sub_14018B900(v8, 0);
	v9 = a1[141];
	if (v9)
		sub_14018B900(v9, 0);
	v10 = a1[137];
	if (v10)
		sub_14018B900(v10, 0);
	v11 = a1[130];
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		a1[130] = 0i64;
	}
	v12 = a1[133];
	if (v12)
		sub_14018B900(v12, 0);
	sub_1400C6030((__int64)a1, a2);
}
// 1405B9732: variable 'a2' is possibly undefined
// 140B6DAA0: using guessed type __int64 (__fastcall *off_140B6DAA0[25])();

