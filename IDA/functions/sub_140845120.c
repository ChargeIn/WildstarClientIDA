#include "../winhttp.h"

//----- (0000000140845120) ----------------------------------------------------
__int64 __fastcall sub_140845120(__int64* a1)
{
	__int64 result; // rax
	__int64 i; // r8
	__int64 v4; // rcx

	result = *((unsigned int*)a1 + 3);
	if ((_DWORD)result)
	{
		if ((_DWORD)result == 2)
		{
			for (i = 0i64;
				(unsigned int)i < *((_DWORD*)a1 + 2);
				*(float*)(*a1 + 4 * v4 + 4) = *(float*)(*a1 + 4 * v4 + 4) + 1.0)
			{
				result = *a1;
				v4 = 3 * i;
				i = (unsigned int)(i + 1);
			}
			*((_DWORD*)a1 + 3) = 0;
		}
	}
	else
	{
		*((_DWORD*)a1 + 3) = 4;
	}
	return result;
}

