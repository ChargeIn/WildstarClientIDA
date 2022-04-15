#include "../winhttp.h"

//----- (00000001406457E0) ----------------------------------------------------
_QWORD* __fastcall sub_1406457E0(_QWORD* a1, char a2)
{
	__int64 v4; // rax
	bool v5; // zf

	*a1 = off_140B6FC48;
	v4 = qword_140C65C30;
	v5 = qword_140C65C30 == (_QWORD)a1;
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v5)
		v4 = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	qword_140C65C30 = v4;
	sub_1401A76A0((__int64)(a1 + 6));
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6FC48: using guessed type __int64 (__fastcall *off_140B6FC48[3])();
// 140C65C30: using guessed type __int64 qword_140C65C30;

