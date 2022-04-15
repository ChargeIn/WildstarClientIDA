#include "../winhttp.h"

//----- (0000000140777E10) ----------------------------------------------------
_QWORD* __fastcall sub_140777E10(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	sub_1400B9580(a1 + 13);
	v2 = a1[10];
	if (v2)
		sub_14018B900(v2, 0);
	v3 = a1[6];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[2];
	if (v4)
		sub_14018B900(v4, 0);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

