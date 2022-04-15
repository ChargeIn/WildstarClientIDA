#include "../winhttp.h"

//----- (00000001408D5FB0) ----------------------------------------------------
void __fastcall sub_1408D5FB0(__int64 a1)
{
	double v2; // xmm0_8
	unsigned int i; // edi

	v2 = sub_1408DA340(*(_DWORD*)a1, 1.0);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, v2, *(_QWORD*)(a1 + 8) + 168i64 * i, 16);
}

