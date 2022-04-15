#include "../winhttp.h"

//----- (0000000140901E90) ----------------------------------------------------
unsigned __int64 __fastcall sub_140901E90(CHAR* a1)
{
	unsigned __int64 v3; // rbx

	if (a1 && sub_140906FE0(a1, 0x7FFFui64) < 0x7FFF)
	{
		sub_1407E2340(7);
		v3 = sub_140901DEC(a1);
		sub_1407E2528(7);
		return v3;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
}

