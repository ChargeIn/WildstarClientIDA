#include "../winhttp.h"

//----- (00000001401565E0) ----------------------------------------------------
_QWORD* __fastcall sub_1401565E0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	*a1 = off_140B5C868;
	v4 = a1[12];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[12] = 0i64;
	}
	v5 = a1[7];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[3];
	if (v6)
		sub_14018B900(v6, 0);
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5C868: using guessed type __int64 (__fastcall *off_140B5C868[4])();

