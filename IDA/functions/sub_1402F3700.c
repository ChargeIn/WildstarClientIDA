#include "../winhttp.h"

//----- (00000001402F3700) ----------------------------------------------------
_QWORD* __fastcall sub_1402F3700(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	v2 = (_QWORD*)a1[14];
	if (v2)
		*v2 = a1[15];
	v3 = a1[15];
	if (v3)
		*(_QWORD*)(v3 + 112) = a1[14];
	a1[14] = 0i64;
	a1[15] = 0i64;
	a1[5] = &off_140B62AC0;
	v4 = (_QWORD*)a1[9];
	if (v4)
		*v4 = a1[10];
	v5 = a1[10];
	if (v5)
		*(_QWORD*)(v5 + 32) = a1[9];
	a1[9] = 0i64;
	a1[10] = 0i64;
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();

