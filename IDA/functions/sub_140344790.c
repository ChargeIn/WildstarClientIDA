#include "../winhttp.h"

//----- (0000000140344790) ----------------------------------------------------
int __fastcall sub_140344790(__int64 a1, __int64 a2)
{
	int result; // eax

	result = _InterlockedDecrement((volatile signed __int32*)(a2 + 16));
	if (result == 1)
		return sub_14034A1A0(a2 + 32, 0);
	return result;
}

