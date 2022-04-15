#include "../winhttp.h"

//----- (00000001406CB1C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1406CB1C0(__int64 a1, int* a2)
{
	sub_1400D23B0(a1, a2);
	*(_BYTE*)(a1 + 1436) ^= (*(_BYTE*)(a1 + 1436) ^ ((unsigned __int64)*(unsigned int*)(a1 + 656) >> 21)) & 1;
	sub_1400C3F20(a1 + 1024, a2);
	return (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
}

