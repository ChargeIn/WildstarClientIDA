#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A89E0) ----------------------------------------------------
__int64 __fastcall sub_1400A89E0(__int64 a1, float* a2)
{
	__int64 result; // rax

	result = sub_14006BD80(a1, *a2);
	if ((int)result >= 0)
	{
		result = sub_14006BD80(a1, a2[1]);
		if ((int)result >= 0)
			return sub_14006BD80(a1, a2[2]);
	}
	return result;
}

