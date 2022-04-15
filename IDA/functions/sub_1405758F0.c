#include "../winhttp.h"

//----- (00000001405758F0) ----------------------------------------------------
__int64 __fastcall sub_1405758F0(__int64 a1)
{
	unsigned __int64 v1; // rax

	v1 = *(int*)(a1 + 8);
	if (v1 >= 4)
		return 0i64;
	else
		return *(unsigned int*)(a1 + 4 * v1 + 32);
}

