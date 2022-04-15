#include "../winhttp.h"

//----- (00000001402E22D0) ----------------------------------------------------
__int64 __fastcall sub_1402E22D0(__int64 a1)
{
	unsigned __int32 v2; // ebx

	v2 = _InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!_InterlockedDecrement((volatile signed __int32*)(a1 + 12)) && a1)
	{
		sub_1402E1540(a1);
		sub_14018B900(a1, 0);
	}
	return v2;
}

