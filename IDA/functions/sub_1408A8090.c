#include "../winhttp.h"

//----- (00000001408A8090) ----------------------------------------------------
__int64 __fastcall sub_1408A8090(__int64 a1, char a2, char a3)
{
	__int64 result; // rax

	result = (unsigned int)(1 << a2);
	if (a3)
	{
		*(_DWORD*)(a1 + 12) |= result;
	}
	else
	{
		result = (unsigned int)~(_DWORD)result;
		*(_DWORD*)(a1 + 12) &= result;
	}
	return result;
}

