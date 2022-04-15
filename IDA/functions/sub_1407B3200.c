#include "../winhttp.h"

//----- (00000001407B3200) ----------------------------------------------------
void __fastcall sub_1407B3200(_QWORD* a1)
{
	_QWORD* v2; // rdi
	_QWORD* i; // rbx
	__int64 v4; // rcx

	*a1 = off_140B790B0;
	v2 = (_QWORD*)a1[4];
	for (i = (_QWORD*)a1[3]; i != v2; ++i)
	{
		if (*i)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 8i64))(*i);
	}
	v4 = a1[3];
	if (v4)
		sub_14018B900(v4, 0);
}
// 140B790B0: using guessed type __int64 (__fastcall *off_140B790B0[39])();

