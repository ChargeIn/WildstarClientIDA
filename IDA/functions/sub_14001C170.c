#include "../winhttp.h"

//----- (000000014001C170) ----------------------------------------------------
_QWORD* __fastcall sub_14001C170(_QWORD* a1, int* a2)
{
	__int64 v2; // rax

	v2 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v2;
		while (*((_WORD*)a2 + v2));
	}
	sub_14001C1B0(a1, a2, (__int64)a2 + 2 * v2);
	return a1;
}

