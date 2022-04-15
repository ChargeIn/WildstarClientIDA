#include "../winhttp.h"

//----- (0000000140178DD0) ----------------------------------------------------
void __fastcall sub_140178DD0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	*a1 = off_140B5D890;
	v3 = a1[155];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[151];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[134];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[134] = 0i64;
	}
	v6 = a1[137];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[128];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[128] = 0i64;
	}
	v8 = a1[131];
	if (v8)
		sub_14018B900(v8, 0);
	sub_1400C6030((__int64)a1, a2);
}
// 140178E71: variable 'a2' is possibly undefined
// 140B5D890: using guessed type __int64 (__fastcall *off_140B5D890[25])();

