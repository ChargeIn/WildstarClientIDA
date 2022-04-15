#include "../winhttp.h"

//----- (00000001407BE910) ----------------------------------------------------
__int64 __fastcall sub_1407BE910(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	result = (*(__int64(__fastcall**)(__int64*, int*))(v1 + 64))(a1, v4);
	if ((_DWORD)result)
		return *((unsigned int*)a1 + 18);
	return result;
}
// 1407BE910: using guessed type int var_18[6];

