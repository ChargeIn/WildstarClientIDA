#include "../winhttp.h"

//----- (000000014051B2A0) ----------------------------------------------------
_QWORD* __fastcall sub_14051B2A0(_QWORD* a1, char a2)
{
	void(__fastcall * **v4)(_QWORD, __int64); // rcx

	*a1 = off_140B6B190;
	v4 = (void(__fastcall***)(_QWORD, __int64))a1[2];
	if (v4)
		(**v4)(v4, 1i64);
	*a1 = &off_140B6B770;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6B190: using guessed type __int64 (__fastcall *off_140B6B190[51])();
// 140B6B770: using guessed type __int64 (__fastcall *off_140B6B770)();

