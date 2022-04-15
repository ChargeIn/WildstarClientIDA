#include "../winhttp.h"

//----- (0000000140485E50) ----------------------------------------------------
_QWORD* __fastcall sub_140485E50(_QWORD* a1, char a2)
{
	*a1 = off_140B671C0;
	sub_140485C30(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B671C0: using guessed type __int64 (__fastcall *off_140B671C0[25])();

