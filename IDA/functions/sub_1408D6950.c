#include "../winhttp.h"

//----- (00000001408D6950) ----------------------------------------------------
void __fastcall sub_1408D6950(__int64 a1, double a2)
{
	double v3; // xmm0_8
	unsigned int i; // ebx

	v3 = sub_1408DA310(*(_DWORD*)a1, a2);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, v3, *(_QWORD*)(a1 + 8) + 76i64 * i, 8);
}

