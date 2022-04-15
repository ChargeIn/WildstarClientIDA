#include "../winhttp.h"

//----- (00000001402FCEA0) ----------------------------------------------------
__int64 __fastcall sub_1402FCEA0(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 1400))(a1, v4);
	return a1[8] + 1104;
}
// 1402FCEA0: using guessed type int var_18[6];

