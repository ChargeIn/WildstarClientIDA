#include "../winhttp.h"

//----- (000000014089B9D0) ----------------------------------------------------
__int64 __fastcall sub_14089B9D0(void(__fastcall*** a1)(_QWORD, _QWORD), __int64 a2)
{
	if (a1)
	{
		(**a1)(a1, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 16i64))(a2, a1);
	}
	return 1i64;
}

