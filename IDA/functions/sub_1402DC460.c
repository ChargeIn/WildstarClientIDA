#include "../winhttp.h"

//----- (00000001402DC460) ----------------------------------------------------
__int64 __fastcall sub_1402DC460(__int64 a1)
{
	unsigned __int32 v2; // edi

	v2 = _InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!v2)
		sub_1401981B0((__int64**)(a1 + 2040));
	if (!_InterlockedDecrement((volatile signed __int32*)(a1 + 12)) && a1)
	{
		sub_1402DB550(a1);
		sub_14018B900(a1, 0);
	}
	return v2;
}

