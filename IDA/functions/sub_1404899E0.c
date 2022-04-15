#include "../winhttp.h"

//----- (00000001404899E0) ----------------------------------------------------
_QWORD* __fastcall sub_1404899E0(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = (__int64)(a1 + 32);
	*(_QWORD*)(v3 - 256) = off_140B671E8;
	sub_140008410(v3);
	sub_140008410((__int64)(a1 + 32));
	sub_14018B900(a1[33], 0);
	sub_1404889B0(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B671E8: using guessed type __int64 (__fastcall *off_140B671E8[20])();

