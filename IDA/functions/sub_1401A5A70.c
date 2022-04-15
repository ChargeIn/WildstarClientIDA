#include "../winhttp.h"

//----- (00000001401A5A70) ----------------------------------------------------
_QWORD* __fastcall sub_1401A5A70(_QWORD* a1, _QWORD* a2)
{
	__int64 v5; // rax

	if (a2[1] != a1[1])
		return 0i64;
	sub_1401A6150((__int64)a1, (__int64)a2);
	v5 = a1[7];
	if (v5)
	{
		*(_QWORD*)(v5 + 72) = a2;
		a2[8] = a1[7];
		a1[7] = a2;
	}
	else
	{
		a1[7] = a2;
		a1[6] = a2;
		a2[8] = 0i64;
	}
	a2[9] = 0i64;
	a2[2] = a1;
	return a2;
}

