#include "../winhttp.h"

//----- (00000001400C5FF0) ----------------------------------------------------
__int64 __fastcall sub_1400C5FF0(__int64 a1, __int64 a2)
{
	char v2; // bl

	v2 = a2;
	sub_1400C6030(a1, a2);
	if ((v2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}

