#include "../winhttp.h"

//----- (00000001403B5030) ----------------------------------------------------
__int64 __fastcall sub_1403B5030(__int64 a1)
{
	__int64 result; // rax

	result = *(unsigned int*)(a1 + 60);
	if (!(_DWORD)result)
		return *(unsigned int*)(a1 + 56);
	return result;
}

