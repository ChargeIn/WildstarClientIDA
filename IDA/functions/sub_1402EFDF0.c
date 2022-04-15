#include "../winhttp.h"

//----- (00000001402EFDF0) ----------------------------------------------------
_QWORD* __fastcall sub_1402EFDF0(_QWORD* a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v5; // rdx
	_QWORD* v6; // rcx

	*a1 = &off_140B64078;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[1] = a2;
	v5 = (_QWORD*)(a2 + 72);
	if (!a1[2])
	{
		a1[2] = v5;
		v6 = a1 + 3;
		*v6 = *v5;
		*v5 = a1;
		if (*v6)
			*(_QWORD*)(*v6 + 16i64) = v6;
	}
	*a1 = off_140B63FC8;
	sub_1400B6000(a1 + 4, 0i64);
	a1[4] = *a3;
	a1[5] = a3[1];
	a1[6] = a3[2];
	a1[7] = a3[3];
	a1[8] = a3[4];
	return a1;
}
// 140B63FC8: using guessed type __int64 (__fastcall *off_140B63FC8[23])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

