#include "../winhttp.h"

//----- (000000014007E4B0) ----------------------------------------------------
__int64 __fastcall sub_14007E4B0(__int64 a1, unsigned __int16** a2)
{
	__int64 result; // rax

	result = sub_140336040(a1, *a2);
	if ((int)result >= 0)
		return sub_140336040(a1, a2[1]);
	return result;
}

