#include "../winhttp.h"

//----- (00000001400B7730) ----------------------------------------------------
_QWORD* __fastcall sub_1400B7730(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx

	v3 = a1 + 5;
	*(v3 - 5) = off_140B561A0;
	sub_1400B9580(v3);
	*a1 = off_140B562B8;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B561A0: using guessed type __int64 (__fastcall *off_140B561A0[3])();
// 140B562B8: using guessed type void (__fastcall __noreturn *off_140B562B8[2])();

