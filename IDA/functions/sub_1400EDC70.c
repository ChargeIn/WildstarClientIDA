#include "../winhttp.h"

//----- (00000001400EDC70) ----------------------------------------------------
__int64 __fastcall sub_1400EDC70(unsigned __int16** a1)
{
	unsigned __int16* v1; // rdx
	__int64 result; // rax
	unsigned __int16 v3; // cx

	v1 = *a1;
	result = 0i64;
	v3 = **a1;
	if (v3)
	{
		do
		{
			++v1;
			result = v3 + 2860486313i64 * result;
			v3 = *v1;
		} while (*v1);
	}
	return result;
}

