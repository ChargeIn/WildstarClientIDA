#include "../winhttp.h"

//----- (000000014046A810) ----------------------------------------------------
__int64 __fastcall sub_14046A810(__int64 a1, __int64 a2, __int64 a3)
{
	int* v4; // rbx
	int v6; // ebx

	if (!a2)
		return 0i64;
	v4 = *(int**)(a2 + 56);
	if (!v4)
		return 0i64;
	if (a3)
		return sub_140195F70(a3 + 16);
	v6 = *v4;
	if ((unsigned int)sub_1404823C0(a2))
		return (unsigned int)(int)(float)((float)v6 * *(float*)(a1 + 2564));
	return (unsigned int)v6;
}

