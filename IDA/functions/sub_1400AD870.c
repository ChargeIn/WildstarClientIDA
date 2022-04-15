#include "../winhttp.h"

//----- (00000001400AD870) ----------------------------------------------------
__int64 __fastcall sub_1400AD870(_DWORD* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 10i64;
	result = 0i64;
	*a3 += 12i64 * (unsigned int)*a1;
	if (*a1)
	{
		do
		{
			*a2 += 96i64;
			result = (unsigned int)(result + 1);
		} while ((unsigned int)result < *a1);
	}
	*a2 += 55i64;
	return result;
}

