#include "../winhttp.h"

//----- (00000001402EFA90) ----------------------------------------------------
_QWORD* __fastcall sub_1402EFA90(_QWORD* a1, __int64 a2, int* a3, int* a4, int* a5, unsigned __int64 a6)
{
	_QWORD* v7; // rdx
	_QWORD* v10; // rcx
	__int64 v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax

	*a1 = &off_140B64078;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[1] = a2;
	v7 = (_QWORD*)(a2 + 72);
	if (!a1[2])
	{
		a1[2] = v7;
		v10 = a1 + 3;
		*v10 = *v7;
		*v7 = a1;
		if (*v10)
			*(_QWORD*)(*v10 + 16i64) = v10;
	}
	a1[7] = a6;
	*a1 = off_140B63F88;
	if (a3)
	{
		v11 = 4 * a6;
		if (!is_mul_ok(a6, 4ui64))
			v11 = -1i64;
		v12 = sub_14018B280(v11, 0);
		a1[4] = v12;
		sub_1407DB590(v12, a3, 4 * a6);
	}
	else
	{
		a1[4] = 0i64;
	}
	if (a4)
	{
		v13 = sub_14018B280(a6, 0);
		a1[5] = v13;
		sub_1407DB590(v13, a4, a6);
	}
	else
	{
		a1[5] = 0i64;
	}
	if (a5)
	{
		v14 = sub_14018B280(a6, 0);
		a1[6] = v14;
		sub_1407DB590(v14, a5, a6);
	}
	else
	{
		a1[6] = 0i64;
	}
	a1[7] = a6;
	return a1;
}
// 140B63F88: using guessed type __int64 (__fastcall *off_140B63F88[31])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

