#include "../winhttp.h"

//----- (0000000140151840) ----------------------------------------------------
void __fastcall sub_140151840(_QWORD* a1)
{
	*a1 = off_140B5C6B0;
	sub_1401518A0((__int64)a1);
	if (a1[4])
	{
		sub_140044CA0((__int64)(a1 + 2), *(_QWORD**)(a1[3] + 8i64));
		*(_QWORD*)(a1[3] + 16i64) = a1[3];
		*(_QWORD*)(a1[3] + 8i64) = 0i64;
		*(_QWORD*)(a1[3] + 24i64) = a1[3];
		a1[4] = 0i64;
	}
	sub_14018B900(a1[3], 0);
}
// 140B5C6B0: using guessed type __int64 (__fastcall *off_140B5C6B0[10])();

