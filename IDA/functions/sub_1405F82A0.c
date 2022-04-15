#include "../winhttp.h"

//----- (00000001405F82A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405F82A0(__int64 a1)
{
	int v1; // eax

	v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	return (unsigned int)(v1 - 2) <= 4 || v1 == 10;
}

