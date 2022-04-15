#include "../winhttp.h"

//----- (000000014007CF80) ----------------------------------------------------
__int64 __fastcall sub_14007CF80(__int64 a1, float* a2)
{
	__int64 result; // rax

	result = sub_14006BD80(a1, *a2);
	if ((int)result >= 0)
	{
		result = sub_14006BD80(a1, a2[1]);
		if ((int)result >= 0)
		{
			result = sub_14006BD80(a1, a2[2]);
			if ((int)result >= 0)
			{
				result = sub_14006BD80(a1, a2[3]);
				if ((int)result >= 0)
				{
					result = sub_14006BD80(a1, a2[4]);
					if ((int)result >= 0)
						return sub_14006BD80(a1, a2[5]);
				}
			}
		}
	}
	return result;
}

