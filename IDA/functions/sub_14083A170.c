#include "../winhttp.h"

//----- (000000014083A170) ----------------------------------------------------
_QWORD* __fastcall sub_14083A170(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = (__int64)(a1 + 4);
	*(_QWORD*)(v3 - 32) = off_1409A2F38;
	sub_1408347E0(v3);
	sub_140865E30(a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A2F38: using guessed type __int64 (__fastcall *off_1409A2F38[4])();

