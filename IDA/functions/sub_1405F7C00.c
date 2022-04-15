#include "../winhttp.h"

//----- (00000001405F7C00) ----------------------------------------------------
__int64 __fastcall sub_1405F7C00(__int64 a1)
{
	int v2; // eax

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1);
	if (v2 == 11 || v2 == 23)
		return 1i64;
	else
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 376i64))(a1) & 8;
}

