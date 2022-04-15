#include "../winhttp.h"

//----- (00000001406DDF90) ----------------------------------------------------
_QWORD* __fastcall sub_1406DDF90(_QWORD* a1, __int64 a2)
{
	char v3; // di
	__int64 v4; // rcx
	__int64 v5; // rcx

	v3 = a2;
	*a1 = off_140B71E70;
	v4 = a1[147];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[147] = 0i64;
	}
	v5 = a1[148];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	sub_1400C6030((__int64)a1, a2);
	if ((v3 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 1406DDFE0: variable 'a2' is possibly undefined
// 140B71E70: using guessed type __int64 (__fastcall *off_140B71E70[25])();

