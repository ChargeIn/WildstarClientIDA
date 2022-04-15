#include "../winhttp.h"

//----- (00000001402EF6C0) ----------------------------------------------------
_QWORD* __fastcall sub_1402EF6C0(_QWORD* a1, __int64 a2, int* a3, unsigned __int64 a4)
{
	int* v4; // r10
	_QWORD* v6; // rdx
	_QWORD* v8; // rcx
	__int64 v9; // rax
	unsigned __int64 v10; // r8

	v4 = 0i64;
	*a1 = &off_140B64078;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[1] = a2;
	v6 = (_QWORD*)(a2 + 72);
	if (!a1[2])
	{
		a1[2] = v6;
		v8 = a1 + 3;
		*v8 = *v6;
		*v6 = a1;
		if (*v8)
			*(_QWORD*)(*v8 + 16i64) = v8;
	}
	a1[5] = a4;
	*a1 = off_140B63FF8;
	if (a4)
	{
		v9 = 4 * a4;
		if (!is_mul_ok(a4, 4ui64))
			v9 = -1i64;
		v4 = sub_14018B280(v9, 0);
	}
	v10 = 4i64 * a1[5];
	a1[4] = v4;
	sub_1407DB590(v4, a3, v10);
	return a1;
}
// 140B63FF8: using guessed type __int64 (__fastcall *off_140B63FF8[17])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

