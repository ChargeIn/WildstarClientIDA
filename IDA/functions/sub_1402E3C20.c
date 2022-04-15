#include "../winhttp.h"

//----- (00000001402E3C20) ----------------------------------------------------
__int64 __fastcall sub_1402E3C20(__int64 a1, int** a2)
{
	int* v2; // rax

	v2 = *(int**)(a1 + 56);
	if (v2)
		return sub_1402D9B70((unsigned int)*v2, v2 + 1, a2);
	else
		return sub_1402D9B70(0i64, 0i64, a2);
}

