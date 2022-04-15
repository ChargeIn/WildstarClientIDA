#include "../winhttp.h"

//----- (000000014010E7B0) ----------------------------------------------------
__int64 __fastcall sub_14010E7B0(__int64 a1, __int64 a2)
{
	char v2; // bl

	v2 = a2;
	sub_14010E7F0(a1, a2);
	if ((v2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}

