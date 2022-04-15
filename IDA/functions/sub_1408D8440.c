#include "../winhttp.h"

//----- (00000001408D8440) ----------------------------------------------------
void __fastcall sub_1408D8440(__int64 a1, double a2)
{
	double v3; // xmm0_8
	unsigned int i; // ebx

	v3 = sub_1408FFA00(10.0, a2 * 0.05);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, v3, 100i64 * i + *(_QWORD*)(a1 + 8) + 48i64, 10);
}

