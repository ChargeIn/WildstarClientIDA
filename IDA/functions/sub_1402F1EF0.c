#include "../winhttp.h"

//----- (00000001402F1EF0) ----------------------------------------------------
_QWORD* __fastcall sub_1402F1EF0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	v2 = (_QWORD*)a1[1];
	if (v2)
		*v2 = a1[2];
	v3 = a1[2];
	if (v3)
		*(_QWORD*)(v3 + 8) = a1[1];
	a1[1] = 0i64;
	a1[2] = 0i64;
	if (*a1)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

