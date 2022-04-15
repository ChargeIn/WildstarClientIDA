#include "../winhttp.h"

//----- (00000001401B8840) ----------------------------------------------------
__int64 __fastcall sub_1401B8840(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx

	if (!a2)
		return 2147942487i64;
	v3 = *(_QWORD*)(a1 + 40);
	if (v3 != -1)
		sub_1401C35A0(v3, a2);
	return 0i64;
}

