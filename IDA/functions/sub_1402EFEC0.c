#include "../winhttp.h"

//----- (00000001402EFEC0) ----------------------------------------------------
_QWORD* __fastcall sub_1402EFEC0(_QWORD* a1, char a2)
{
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	sub_140019490(a1 + 4);
	sub_14018B900(a1[6], 0);
	a1[6] = 0i64;
	*a1 = &off_140B64078;
	v4 = (_QWORD*)a1[2];
	if (v4)
		*v4 = a1[3];
	v5 = a1[3];
	if (v5)
		*(_QWORD*)(v5 + 16) = a1[2];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

