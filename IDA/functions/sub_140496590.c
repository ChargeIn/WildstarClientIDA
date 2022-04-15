#include "../winhttp.h"

//----- (0000000140496590) ----------------------------------------------------
_QWORD* __fastcall sub_140496590(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B675B8;
	v4 = a1[11];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[7];
	if (v5)
		sub_14018B900(v5, 0);
	sub_140008410((__int64)(a1 + 2));
	sub_14018B900(a1[3], 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B675B8: using guessed type __int64 (__fastcall *off_140B675B8[10])();

