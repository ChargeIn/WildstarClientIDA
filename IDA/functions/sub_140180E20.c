#include "../winhttp.h"

//----- (0000000140180E20) ----------------------------------------------------
_QWORD* __fastcall sub_140180E20(_QWORD* a1, __int64 a2)
{
	char v2; // bl

	v2 = a2;
	sub_140180E60(a1, a2);
	if ((v2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}

