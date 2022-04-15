#include "../winhttp.h"

//----- (00000001401097F0) ----------------------------------------------------
__int64 __fastcall sub_1401097F0(_QWORD* a1, void(__fastcall*** a2)(_QWORD))
{
	if (a2 != (void(__fastcall***)(_QWORD)) * a1)
	{
		if (a2)
			(**a2)(a2);
		if (*a1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
			*a1 = 0i64;
		}
		*a1 = a2;
	}
	return 0i64;
}

