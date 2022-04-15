#include "../winhttp.h"

//----- (0000000140919950) ----------------------------------------------------
__int64 __fastcall sub_140919950(unsigned __int16* a1, unsigned __int8* a2, int a3)
{
	unsigned __int16 v3; // r9
	unsigned __int16 v4; // r10

	if (!a3)
		return 0i64;
	while (1)
	{
		v3 = *a1;
		v4 = *a2;
		--a3;
		++a1;
		++a2;
		if (v3 != v4)
			break;
		if (!a3)
			return 0i64;
	}
	return 2 * (unsigned int)(v3 > v4) - 1;
}

