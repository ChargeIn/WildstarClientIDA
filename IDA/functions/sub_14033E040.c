#include "../winhttp.h"

//----- (000000014033E040) ----------------------------------------------------
void __fastcall sub_14033E040(__int64* a1)
{
	__int64* v2; // rbx
	unsigned __int64 i; // rdi

	if (a1[1])
	{
		v2 = (__int64*)a1[6];
		for (i = a1[10] + 8; (unsigned __int64)v2 < i; ++v2)
			sub_14018B900(*v2, 0);
		sub_14018B900(a1[1], 0);
	}
}

