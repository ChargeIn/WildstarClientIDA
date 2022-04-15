#include "../winhttp.h"

//----- (00000001406095E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1406095E0(__int64* a1, __int64 a2)
{
	return (unsigned int)sub_140609400(a1 + 1, a2)
		&& (unsigned int)sub_140609400(a1 + 15, a2)
		&& sub_14060A650(a1 + 30, a2)
		&& sub_14060A650(a1 + 37, a2)
		&& sub_14060A650(a1 + 44, a2);
}

