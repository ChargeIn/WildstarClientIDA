#include "../winhttp.h"

//----- (0000000140368E70) ----------------------------------------------------
__int64 __fastcall sub_140368E70(__int64 a1, __int64* a2)
{
	int* v5; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(128i64, 0);
	if (v5)
		*a2 = sub_14037A960((__int64)v5, a1);
	else
		*a2 = 0i64;
	return 0i64;
}

