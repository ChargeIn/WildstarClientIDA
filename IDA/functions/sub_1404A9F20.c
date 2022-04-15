#include "../winhttp.h"

//----- (00000001404A9F20) ----------------------------------------------------
int* __fastcall sub_1404A9F20(__int64 a1, int* a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(72i64, 0);
	if (v3 != (int*)-32i64)
	{
		v3[8] = *a2;
		sub_14048B2A0((__int64)(v3 + 10), (__int64)(a2 + 2));
	}
	return v3;
}

