#include "../winhttp.h"

//----- (0000000140482350) ----------------------------------------------------
_BOOL8 __fastcall sub_140482350(__int64 a1)
{
	int v1; // edx

	v1 = *(_DWORD*)(a1 + 128);
	return ((v1 - 3) & 0xFFFFFFF9) == 0 && v1 != 5;
}

