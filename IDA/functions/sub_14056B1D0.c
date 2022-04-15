#include "../winhttp.h"

//----- (000000014056B1D0) ----------------------------------------------------
void __fastcall sub_14056B1D0(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	_QWORD* v5; // rax
	_QWORD* v6; // rdi

	*a1 = off_140B6CAE0;
	v2 = (_QWORD**)a1[2];
	v3 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v4 = v3[2];
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 8i64))(v4, 1i64);
			v5 = (_QWORD*)v3[1];
			v6 = (_QWORD*)*v3;
			*v5 = *v3;
			v6[1] = v5;
			sub_14018B900((__int64)v3, 0);
			v3 = v6;
		} while (v6 != (_QWORD*)a1[2]);
	}
	sub_140575B00(a1);
}
// 140B6CAE0: using guessed type __int64 (__fastcall *off_140B6CAE0[17])();

