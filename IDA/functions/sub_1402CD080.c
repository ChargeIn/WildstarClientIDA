#include "../winhttp.h"

//----- (00000001402CD080) ----------------------------------------------------
__int64 __fastcall sub_1402CD080(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v1 + 64))(a1, v4, 2i64);
	return (a1[37] - a1[36]) / 368;
}
// 1402CD080: using guessed type int var_18[6];

