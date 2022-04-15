#include "../winhttp.h"

//----- (0000000140348710) ----------------------------------------------------
int __fastcall sub_140348710(__int64 a1, __int64 a2)
{
	int result; // eax

	result = _InterlockedDecrement((volatile signed __int32*)(a2 + 40));
	if (result)
		return sub_14034A1A0(a2 + 8, 0);
	return result;
}

