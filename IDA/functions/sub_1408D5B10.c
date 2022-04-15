#include "../winhttp.h"

//----- (00000001408D5B10) ----------------------------------------------------
void __fastcall sub_1408D5B10(__int64 a1, double a2, char a3)
{
	double v4; // xmm6_8
	double v5; // xmm1_8
	unsigned int i; // ebx

	v4 = 0.0;
	if (!a3)
	{
		v5 = a2 - 6.0;
		if (v5 >= -143.0)
			v4 = sub_1408FFA00(10.0, v5 * 0.05);
	}
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, v4, 168i64 * i + *(_QWORD*)(a1 + 8) + 84i64, 1);
}

