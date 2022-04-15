#include "../winhttp.h"

//----- (0000000140575910) ----------------------------------------------------
__int64 __fastcall sub_140575910(__int64 a1)
{
	unsigned __int64 v1; // rax

	v1 = *(int*)(a1 + 8);
	if (v1 >= 4)
		return 0i64;
	else
		return *(unsigned int*)(a1 + 4 * v1 + 16);
}

