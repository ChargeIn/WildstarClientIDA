#include "../winhttp.h"

//----- (00000001403AF9A0) ----------------------------------------------------
int* __fastcall sub_1403AF9A0(__int64 a1, int* a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(56i64, 0);
	if (v3 != (int*)-32i64)
	{
		v3[8] = *a2;
		sub_1403B4F00((__int64*)v3 + 5, (__int64)(a2 + 2));
	}
	return v3;
}

