#include "../winhttp.h"

//----- (00000001402CD0E0) ----------------------------------------------------
__int64 __fastcall sub_1402CD0E0(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v6, 2i64);
	return a1[36] + 368 * a2;
}
// 1402CD0E0: using guessed type int var_18[6];

