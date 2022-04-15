#include "../winhttp.h"

//----- (000000014071B330) ----------------------------------------------------
_QWORD* __fastcall sub_14071B330(_QWORD* a1, char a2)
{
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B74390;
	v4 = (_QWORD*)a1[53];
	if (v4)
		*v4 = a1[54];
	v5 = a1[54];
	if (v5)
		*(_QWORD*)(v5 + 424) = a1[53];
	a1[53] = 0i64;
	a1[54] = 0i64;
	sub_140719D60((__int64)a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B74390: using guessed type __int64 (__fastcall *off_140B74390[11])();

