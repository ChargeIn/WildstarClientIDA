#include "../winhttp.h"

//----- (00000001402B34D0) ----------------------------------------------------
__int64 __fastcall sub_1402B34D0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	*a1 = 0i64;
	a1[1] = 0i64;
	v2 = a1[9];
	if (v2)
	{
		sub_14018B900(v2, 0);
		a1[9] = 0i64;
	}
	v3 = a1[10];
	if (v3)
	{
		sub_14018B900(v3, 0);
		a1[10] = 0i64;
	}
	result = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[8] = 0i64;
	return result;
}

