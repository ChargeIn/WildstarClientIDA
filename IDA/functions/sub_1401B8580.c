#include "../winhttp.h"

//----- (00000001401B8580) ----------------------------------------------------
__int64 __fastcall sub_1401B8580(__int64 a1, unsigned int a2, _QWORD* a3)
{
	__int64 v3; // rcx

	if (!a3)
		return 2147942487i64;
	if (!a2)
		return 2147942487i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return 2147942487i64;
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2 + 8);
	if (!v3)
		return 2147942487i64;
	*a3 = v3;
	return 0i64;
}

