#include "../winhttp.h"

//----- (00000001400904F0) ----------------------------------------------------
__int64 __fastcall sub_1400904F0(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax

	result = sub_140090230(a1, a2);
	if ((int)result >= 0)
	{
		result = sub_140090230(a1, a2 + 4);
		if ((int)result >= 0)
			return sub_140090230(a1, a2 + 8);
	}
	return result;
}

