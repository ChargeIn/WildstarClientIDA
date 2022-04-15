#include "../winhttp.h"

//----- (000000014015BBA0) ----------------------------------------------------
void __fastcall sub_14015BBA0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B5C890;
	v3 = a1[128];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[128] = 0i64;
	}
	v4 = a1[129];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[129] = 0i64;
	}
	v5 = a1[131];
	if (v5)
		sub_14018B900(v5, 0);
	sub_1400C6030((__int64)a1, a2);
}
// 14015BC08: variable 'a2' is possibly undefined
// 140B5C890: using guessed type __int64 (__fastcall *off_140B5C890[25])();

