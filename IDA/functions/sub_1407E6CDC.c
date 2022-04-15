#include "../winhttp.h"

//----- (00000001407E6CDC) ----------------------------------------------------
__int64 __fastcall sub_1407E6CDC(_WORD* a1, _WORD* a2, __int64 a3)
{
	if (!a3)
		return 0i64;
	while (--a3 && *a1 && *a1 == *a2)
	{
		++a1;
		++a2;
	}
	return (unsigned __int16)*a1 - (unsigned int)(unsigned __int16)*a2;
}

