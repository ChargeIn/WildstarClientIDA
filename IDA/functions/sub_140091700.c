#include "../winhttp.h"

//----- (0000000140091700) ----------------------------------------------------
__int64 __fastcall sub_140091700(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax

	result = sub_140085170(a1, a2);
	if ((int)result >= 0)
	{
		result = sub_140090230(a1, a2 + 4);
		if ((int)result >= 0)
		{
			result = sub_140090230(a1, a2 + 8);
			if ((int)result >= 0)
				return sub_140090230(a1, a2 + 12);
		}
	}
	return result;
}

