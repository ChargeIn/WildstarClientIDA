#include "../winhttp.h"

//----- (000000014003D610) ----------------------------------------------------
int* __fastcall sub_14003D610(__int64 a1, __int64 a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(64i64, 0);
	if (v3 != (int*)-32i64)
	{
		v3[8] = *(_DWORD*)a2;
		sub_14003CD40((int**)v3 + 5, (int**)(a2 + 8));
	}
	return v3;
}

