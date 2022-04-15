#include "../winhttp.h"

//----- (00000001402CF690) ----------------------------------------------------
__int64 __fastcall sub_1402CF690(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v4[14]; // [rsp+50h] [rbp-88h] BYREF

	v4[0] = 0i64;
	v4[1] = 0i64;
	v4[2] = a2 + 16;
	v4[3] = 0i64;
	v4[4] = a2 + 32;
	v4[5] = a2;
	sub_1401AFF00((__int64)v4, a1);
	return v2;
}
// 1402CF729: variable 'v2' is possibly undefined

