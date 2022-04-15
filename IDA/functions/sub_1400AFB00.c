#include "../winhttp.h"

//----- (00000001400AFB00) ----------------------------------------------------
__int64 __fastcall sub_1400AFB00(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 81i64;
	result = 0i64;
	*a3 += 40i64 * *(unsigned int*)(a1 + 12);
	if (*(_DWORD*)(a1 + 12))
	{
		do
		{
			*a2 += 320i64;
			result = (unsigned int)(result + 1);
		} while ((unsigned int)result < *(_DWORD*)(a1 + 12));
	}
	return result;
}

