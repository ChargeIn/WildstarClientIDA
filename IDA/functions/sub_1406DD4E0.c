#include "../winhttp.h"

//----- (00000001406DD4E0) ----------------------------------------------------
__int64* __fastcall sub_1406DD4E0(__int64* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = (__int64)off_140B71C30;
	v4 = a1[322];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[322] = 0i64;
	}
	sub_1406D8700(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B71C30: using guessed type __int64 (__fastcall *off_140B71C30[25])();

