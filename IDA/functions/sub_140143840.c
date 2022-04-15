#include "../winhttp.h"

//----- (0000000140143840) ----------------------------------------------------
__int64 __fastcall sub_140143840(__int64 a1)
{
	unsigned int* v1; // rax
	__int64 v2; // rbx

	v1 = (unsigned int*)sub_140143AE0(a1, 1);
	v2 = (__int64)v1;
	if (v1)
	{
		sub_1401429A0(qword_140C63678, *v1);
		sub_14018B900(v2, 0);
	}
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;

