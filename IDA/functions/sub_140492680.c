#include "../winhttp.h"

//----- (0000000140492680) ----------------------------------------------------
_QWORD* __fastcall sub_140492680(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B67238;
	a1[10] = 0i64;
	a1[12] = 0i64;
	v4 = a1[11];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[9];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	sub_140618C60(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B67238: using guessed type __int64 (__fastcall *off_140B67238[10])();

