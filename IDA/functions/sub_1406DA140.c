#include "../winhttp.h"

//----- (00000001406DA140) ----------------------------------------------------
_QWORD* __fastcall sub_1406DA140(_QWORD* a1, __int64 a2)
{
	char v2; // bl

	v2 = a2;
	sub_1406DA180(a1, a2);
	if ((v2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}

