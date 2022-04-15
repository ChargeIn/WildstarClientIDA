#include "../winhttp.h"

//----- (00000001404969A0) ----------------------------------------------------
_QWORD* __fastcall sub_1404969A0(_QWORD* a1, char a2)
{
	_QWORD** v2; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx

	v2 = (_QWORD**)a1[6];
	v5 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
		} while (v5 != (_QWORD*)a1[6]);
	}
	*(_QWORD*)a1[6] = a1[6];
	*(_QWORD*)(a1[6] + 8i64) = a1[6];
	sub_14018B900(a1[6], 0);
	sub_140498990(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}

