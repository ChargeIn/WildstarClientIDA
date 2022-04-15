#include "../winhttp.h"

//----- (00000001405F9B60) ----------------------------------------------------
_QWORD* __fastcall sub_1405F9B60(_QWORD* a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx

	v2 = (_QWORD*)*a1;
	if (v2)
		*v2 = a1[1];
	v3 = (_QWORD*)a1[1];
	if (v3)
		*v3 = *a1;
	*a1 = 0i64;
	a1[1] = 0i64;
	sub_14018B900((__int64)a1, 0);
	return a1;
}

