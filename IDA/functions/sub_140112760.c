#include "../winhttp.h"

//----- (0000000140112760) ----------------------------------------------------
__int64 __fastcall sub_140112760(__int64 a1, int a2, int* a3)
{
	if (a2 || !*(_BYTE*)(a1 + 1075))
		return sub_1400D2550(a1, a2, a3);
	*(_BYTE*)(a1 + 1075) = 0;
	sub_14010EE40((_QWORD*)a1);
	return 0i64;
}

