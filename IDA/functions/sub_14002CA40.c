#include "../winhttp.h"

//----- (000000014002CA40) ----------------------------------------------------
_QWORD* __fastcall sub_14002CA40(_QWORD* a1, int* a2)
{
	__int64 v3; // rax
	int* v4; // rax
	int* v5; // rax

	v3 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v3;
		while (*((_WORD*)a2 + v3));
	}
	sub_14001C1B0(a1, a2, (__int64)a2 + 2 * v3);
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	v4 = sub_14018B280(16i64, 0);
	a1[5] = v4;
	a1[6] = v4;
	a1[7] = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = sub_14018B280(48i64, 0);
	a1[9] = v5;
	*(_QWORD*)v5 = v5;
	*(_QWORD*)(a1[9] + 8i64) = a1[9];
	return a1;
}

