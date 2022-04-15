#include "../winhttp.h"

//----- (00000001407E1AC0) ----------------------------------------------------
__int64 __fastcall sub_1407E1AC0(__int64 a1, __int64 a2)
{
	if (a1 != a2)
	{
		sub_1407E1B9C(a1);
		if (*(_BYTE*)(a2 + 16))
			sub_1407E1B40(a1, *(char**)(a2 + 8));
		else
			*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	}
	return a1;
}

