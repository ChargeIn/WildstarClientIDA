#include "../winhttp.h"

//----- (00000001400AAB80) ----------------------------------------------------
__int64 __fastcall sub_1400AAB80(_DWORD* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 32i64;
	result = 0i64;
	*a3 += 96i64 * (unsigned int)*a1;
	if (*a1)
	{
		do
		{
			*a2 += 598i64;
			*a3 += 12i64;
			result = (unsigned int)(result + 1);
		} while ((unsigned int)result < *a1);
	}
	return result;
}

