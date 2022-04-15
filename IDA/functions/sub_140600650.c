#include "../winhttp.h"

//----- (0000000140600650) ----------------------------------------------------
void __fastcall sub_140600650(__int64* a1)
{
	_QWORD** v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	sub_140600750((__int64)a1);
	sub_140019490(a1 + 2);
	sub_14018B900(a1[4], 0);
	a1[4] = 0i64;
	v2 = (_QWORD**)a1[1];
	v3 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			sub_14018B900(v4, 0);
		} while (v3 != (_QWORD*)a1[1]);
	}
	*(_QWORD*)a1[1] = a1[1];
	*(_QWORD*)(a1[1] + 8) = a1[1];
	sub_14018B900(a1[1], 0);
}

