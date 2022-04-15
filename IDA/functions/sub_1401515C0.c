#include "../winhttp.h"

//----- (00000001401515C0) ----------------------------------------------------
_QWORD* __fastcall sub_1401515C0(_QWORD* a1, __int64 a2, int* a3, __int64 a4, __int64 a5)
{
	_QWORD* v6; // rcx
	__int64 v7; // rax
	int* v9; // rax

	*a1 = a2;
	v6 = a1 + 1;
	v7 = 0i64;
	v6[1] = 0i64;
	v6[2] = 0i64;
	v6[3] = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v7;
		while (*((_WORD*)a3 + v7));
	}
	sub_14001C1B0(v6, a3, (__int64)a3 + 2 * v7);
	sub_1400FA6D0((__int64)(a1 + 5), a5);
	v9 = sub_14018B280(48i64, 0);
	a1[11] = 0i64;
	a1[10] = v9;
	*(_BYTE*)v9 = 0;
	*(_QWORD*)(a1[10] + 8i64) = 0i64;
	*(_QWORD*)(a1[10] + 16i64) = a1[10];
	*(_QWORD*)(a1[10] + 24i64) = a1[10];
	a1[13] = a4;
	return a1;
}

