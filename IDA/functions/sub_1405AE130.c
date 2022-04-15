#include "../winhttp.h"

//----- (00000001405AE130) ----------------------------------------------------
int* __fastcall sub_1405AE130(_QWORD* a1)
{
	__int64* i; // rbx
	int* v3; // rdi
	int* v4; // rbx
	int* result; // rax

	sub_140019490(a1 + 46);
	for (i = (__int64*)a1[52]; i != (__int64*)a1[53]; ++i)
		sub_14018B900(*i, 0);
	v3 = (int*)a1[53];
	v4 = (int*)a1[52];
	result = sub_1407DB590(v4, v3, 0i64);
	a1[53] += -8 * (((char*)v3 - (char*)v4) >> 3);
	return result;
}

