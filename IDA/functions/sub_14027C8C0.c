#include "../winhttp.h"

//----- (000000014027C8C0) ----------------------------------------------------
__int64 __fastcall sub_14027C8C0(__int64 a1, __int64* a2)
{
	int* v5; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(256i64, 0);
	if (v5)
		*a2 = sub_1402AC610((__int64)v5, a1);
	else
		*a2 = 0i64;
	return 0i64;
}

