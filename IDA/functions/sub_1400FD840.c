#include "../winhttp.h"

//----- (00000001400FD840) ----------------------------------------------------
_BOOL8 __fastcall sub_1400FD840(__int64 a1, __int64 a2)
{
	return !(unsigned int)sub_14018E2C0(*(_QWORD*)a1, *(unsigned __int16**)a2)
		&& *(_BYTE*)(a1 + 8) == *(_BYTE*)(a2 + 8);
}

