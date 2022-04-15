#include "../winhttp.h"

//----- (000000014089CFC0) ----------------------------------------------------
__int64 __fastcall sub_14089CFC0(__int64 a1, __int64 a2)
{
	if (*(_QWORD*)(a1 + 144))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		*(_QWORD*)(a1 + 144) = 0i64;
	}
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

