#include "../winhttp.h"

//----- (000000014038C7A0) ----------------------------------------------------
__int64* __fastcall sub_14038C7A0(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 32))(a1, v4);
	return a1 + 104;
}
// 14038C7A0: using guessed type int var_18[6];

