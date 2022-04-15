#include "../winhttp.h"

//----- (000000014045E720) ----------------------------------------------------
__int64 __fastcall sub_14045E720(__int64 a1)
{
	int v1; // edx

	v1 = (int)*(float*)(a1 + 1828);
	if (v1 == -1)
		return 0xFFFFFFFFi64;
	else
		return (unsigned int)(v1 + (int)*(float*)(a1 + 3220));
}

