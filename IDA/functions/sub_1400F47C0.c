#include "../winhttp.h"

//----- (00000001400F47C0) ----------------------------------------------------
void __fastcall sub_1400F47C0(__int64* a1)
{
	_QWORD* v2; // rcx

	v2 = a1 + 6;
	*(v2 - 6) = &off_140B569E0;
	sub_140019490(v2);
	sub_14018B900(a1[8], 0);
	a1[8] = 0i64;
	if (a1[4])
	{
		sub_140044CA0((__int64)(a1 + 2), *(_QWORD**)(a1[3] + 8));
		*(_QWORD*)(a1[3] + 16) = a1[3];
		*(_QWORD*)(a1[3] + 8) = 0i64;
		*(_QWORD*)(a1[3] + 24) = a1[3];
		a1[4] = 0i64;
	}
	sub_14018B900(a1[3], 0);
}
// 140B569E0: using guessed type __int64 (__fastcall *off_140B569E0)(int, int, int, int, char, int);

