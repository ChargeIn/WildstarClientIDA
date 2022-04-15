#include "../winhttp.h"

//----- (00000001404B4800) ----------------------------------------------------
int* __fastcall sub_1404B4800(__int64 a1)
{
	__int64* i; // rbx
	__int64 v3; // rdi
	int* v4; // rdi
	int* v5; // rbx
	int* result; // rax

	for (i = *(__int64**)(a1 + 8); i != *(__int64**)(a1 + 16); ++i)
	{
		v3 = *i;
		sub_14018B900(*(_QWORD*)(*i + 24), 0);
		sub_14018B900(v3, 0);
	}
	v4 = *(int**)(a1 + 16);
	v5 = *(int**)(a1 + 8);
	result = sub_1407DB590(v5, v4, 0i64);
	*(_QWORD*)(a1 + 16) += -8 * (((char*)v4 - (char*)v5) >> 3);
	return result;
}

