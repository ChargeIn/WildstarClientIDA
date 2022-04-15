#include "../winhttp.h"

//----- (000000014012A720) ----------------------------------------------------
__int64 __fastcall sub_14012A720(_QWORD* a1, __int64 a2)
{
	if (a2)
	{
		(**(void(__fastcall***)(__int64))a2)(a2);
		*(_QWORD*)sub_140059170(a1, 8ui64) = a2;
		(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)a2 + 24i64))(a2, a1);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 0i64;
	}
}

