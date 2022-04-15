#include "../winhttp.h"

//----- (0000000140033CE0) ----------------------------------------------------
_QWORD* __fastcall sub_140033CE0(_QWORD* a1, char a2)
{
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B555D0;
	a1[16] = 0i64;
	v4 = (_QWORD*)a1[14];
	if (v4)
		*v4 = a1[15];
	v5 = a1[15];
	if (v5)
		*(_QWORD*)(v5 + 112) = a1[14];
	a1[14] = 0i64;
	a1[15] = 0i64;
	sub_1400336E0(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B555D0: using guessed type __int64 (__fastcall *off_140B555D0[9])();

