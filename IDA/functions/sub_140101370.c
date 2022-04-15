#include "../winhttp.h"

//----- (0000000140101370) ----------------------------------------------------
__int64 __fastcall sub_140101370(_QWORD* a1)
{
	__int64 result; // rax

	result = (__int64)(a1[12] - a1[11]) >> 3;
	if (!result)
		return (a1[8] - a1[7]) / 304i64 != 0;
	return result;
}

