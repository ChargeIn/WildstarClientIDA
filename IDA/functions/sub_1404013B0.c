#include "../winhttp.h"

//----- (00000001404013B0) ----------------------------------------------------
__int64 __fastcall sub_1404013B0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int16 v3; // r9
	unsigned __int16 v4; // cx

	v3 = *(_WORD*)(104 * a1 + a3 + 4);
	v4 = *(_WORD*)(104 * a2 + a3 + 4);
	if (v3 >= v4)
		return v3 > v4;
	else
		return 0xFFFFFFFFi64;
}

