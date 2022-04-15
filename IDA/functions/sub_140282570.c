#include "../winhttp.h"

//----- (0000000140282570) ----------------------------------------------------
_QWORD* __fastcall sub_140282570(_QWORD* a1, __int64 a2)
{
	if (*a1 != a2)
	{
		if (a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		if (*a1)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 16i64))(*a1);
		*a1 = a2;
	}
	return a1;
}

