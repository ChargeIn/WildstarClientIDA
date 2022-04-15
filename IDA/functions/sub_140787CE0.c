#include "../winhttp.h"

//----- (0000000140787CE0) ----------------------------------------------------
__int64 __fastcall sub_140787CE0(__int64 a1, int a2)
{
	__int64 v2; // r8
	int v4; // edx

	v2 = *(_QWORD*)(a1 + 8);
	if (!v2)
		return 0i64;
	v4 = a2 - 166;
	if (!v4)
		return *(unsigned int*)(v2 + 32);
	if (v4 != 1)
		return 0i64;
	return *(unsigned int*)(v2 + 28);
}

