#include "../winhttp.h"

//----- (000000014085F880) ----------------------------------------------------
__int64 __fastcall sub_14085F880(__int64 a1, float a2)
{
	*(_BYTE*)(a1 + 378) &= 0x9Fu;
	*(_BYTE*)(a1 + 378) |= 0x18u;
	return sub_140843C20(a1, 3, 0, a2);
}

