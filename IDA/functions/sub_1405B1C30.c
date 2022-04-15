#include "../winhttp.h"

//----- (00000001405B1C30) ----------------------------------------------------
int* __fastcall sub_1405B1C30(__int64 a1, int* a2)
{
	int* v2; // r8
	int* v4; // rdx

	v2 = *(int**)(a1 + 16);
	v4 = a2 + 2;
	if (v4 == v2)
	{
		*(_QWORD*)(a1 + 16) -= 8i64;
	}
	else
	{
		sub_1407DB590(a2, v4, ((char*)v2 - (char*)v4) & 0xFFFFFFFFFFFFFFF8ui64);
		*(_QWORD*)(a1 + 16) -= 8i64;
	}
	return a2;
}

