#include "../winhttp.h"

//----- (000000014085FF70) ----------------------------------------------------
__int64 __fastcall sub_14085FF70(__int64 a1, float a2, char a3)
{
	*(float*)(a1 + 372) = a2;
	*(_BYTE*)(a1 + 383) = *(_BYTE*)(a1 + 383) ^ (*(_BYTE*)(a1 + 383) ^ (8 * a3)) & 8 | 6;
	return sub_140858700(6u, a1);
}

