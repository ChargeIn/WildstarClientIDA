#include "../winhttp.h"

//----- (00000001400B6CF0) ----------------------------------------------------
int* __fastcall sub_1400B6CF0(__int64 a1, __int64 a2, __int64 a3)
{
	int* result; // rax

	result = sub_1400B8E10(a1 + 56, a2);
	if ((int*)a3 != result)
		return (int*)sub_14001C480((__int64)result, *(int**)(a3 + 8), *(int**)(a3 + 16));
	return result;
}

