#include "../winhttp.h"

//----- (00000001404C87E0) ----------------------------------------------------
__int64 __fastcall sub_1404C87E0(const void**** a1)
{
	const void*** v1; // rbx

	v1 = *a1;
	if (*a1)
	{
		if (*v1)
			sub_1401A4A00(*a1);
		sub_14018B900((__int64)v1, 0);
		*a1 = 0i64;
	}
	return 1i64;
}

