#include "../winhttp.h"

//----- (0000000140490020) ----------------------------------------------------
_QWORD* __fastcall sub_140490020(_QWORD* a1, char a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx

	v3 = (__int64)(a1 + 9);
	*(_QWORD*)(v3 - 72) = off_140B67230;
	sub_140008410(v3);
	sub_14018B900(a1[10], 0);
	v5 = a1[6];
	if (v5)
		sub_14018B900(v5, 0);
	sub_140494DD0(a1 + 1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B67230: using guessed type __int64 (__fastcall *off_140B67230[11])();

