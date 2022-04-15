#include "../winhttp.h"

//----- (00000001402E9E20) ----------------------------------------------------
__int64 __fastcall sub_1402E9E20(__int64 a1, float a2)
{
	__int64 result; // rax

	if (a2 != *(float*)(a1 + 96))
	{
		*(float*)(a1 + 96) = a2;
		return sub_1402E9B10(a1);
	}
	return result;
}

